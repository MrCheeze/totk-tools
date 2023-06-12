import byml
import json
import re

names = {}
enum_names = {}

for dtype,gamedatas in json.load(open('totk-gamedata/GameDataList.Product.110.json'))['RootNode']['Data'].items():
    for gamedata in gamedatas:
        if 'HashText' in gamedata:
            names[gamedata['Hash']] = gamedata['HashText']
        else:
            names[gamedata['Hash']] = 'Unknown_'+hex(gamedata['Hash'])
        if dtype == 'Enum':
            for value in gamedata['Values']:
                enum_hash, enum_name = value.split(':')
                enum_hash = int(enum_hash, 16)
                enum_names[enum_hash] = enum_name


def maybeAddParens(s, searchString):
    s2 = s
    while '(' in s2:
        s2 = re.sub(r'\([^\(\)]*\)', '', s2)
    if searchString in s2:
        return '(%s)'%s
    else:
        return s

gamedata = byml.Byml(open('GameDataList.Product.100.byml','rb').read()).parse()

for gd in gamedata['Data']['BoolExp']:
    stack = []
    for v in gd['Values']:
        op = v[0]
        if op == 0:
            assert len(v) == 2
            stack.append('GetBool("%s")'%names[v[1]])
        elif op == 1:
            assert len(v) == 2
            stack.append('GetEnum("%s") =='%names[v[1]])
        elif op == 2:
            assert len(v) == 2
            assert stack[-1].startswith('GetEnum')
            assert stack[-1][-1] in '><='
            stack.append('%s %s'%(stack.pop(), enum_names[v[1]]))
        elif op == 3:
            assert len(v) == 1
            stack.append('%s && %s'%(maybeAddParens(stack.pop(),' || '), maybeAddParens(stack.pop(),' || ')))
        elif op == 4:
            assert len(v) == 1
            stack.append('%s || %s'%(maybeAddParens(stack.pop(),' && '), maybeAddParens(stack.pop(),' && ')))
        elif op == 5:
            assert len(v) == 1
            stack.append('!%s'%maybeAddParens(stack.pop(), ' '))
        elif op == 8:
            assert len(v) == 3
            stack.append('GetBoolArray("%s", [%d])'%(names[v[1]], v[2]))
        elif op == 10:
            assert len(v) == 2
            stack.append('GetBoolExp("%s")'%names[v[1]])
        elif op == 11:
            assert len(v) == 2
            stack.append('GetEnum("%s") <'%names[v[1]])
        elif op == 12:
            assert len(v) == 2
            stack.append('GetEnum("%s") >'%names[v[1]])
        else:
            print(v)
            1/0
    assert len(stack) == 1
    print('bool %s() { return %s; }'%(names[gd['Hash']], stack.pop()))
