import mmh3
import yaml
import byml

known_hashes = {}

def do_hash(string):
    h = mmh3.hash(string, signed=False)
    known_hashes[h] = string
    return h


outfile = open('gamedata_hashes.txt','w')





for line in open('strings_logic_eventflow.txt'):
    do_hash(line.strip())



gamedata = byml.Byml(open('GameDataList.Product.100.byml','rb').read()).parse()

hashes_32 = set()
hashes_64 = set()
hashcount = 0

def add_hash(value, is_structfield=False):
    if type(value) is byml.byml.UInt:
        hashset = hashes_32
    elif type(value) is byml.byml.UInt64:
        hashset = hashes_64
    else:
        print(type(value))
        1/0
    if is_structfield:
        outfile.write('\t')
    if value in known_hashes:
        outfile.write(str(value)+'\t'+known_hashes[value])
    else:
        outfile.write(str(value))
    outfile.write('\n')
            
    hashset.add(value)
    global hashcount
    hashcount += 1

for datatype, savefields in gamedata['Data'].items():
    outfile.write('--- %s ---\n' % datatype)
    for savefield in savefields:
        add_hash(savefield['Hash'])
        if datatype == 'Struct':
            for structfield in savefield['DefaultValue']:
                add_hash(structfield['Hash'], is_structfield=True)

outfile.write('--- SaveTypeHash ---\n')
for savetypehash in gamedata['MetaData']['SaveTypeHash']:
    add_hash(savetypehash)

print(len(hashes_32))
print(len(hashes_64))
print(hashcount)
outfile.close()
