import struct
from PIL import Image, ImageDraw
import math

for mapname,hfile in [("MainField","5000000000"),("MinusField","5000000000"),("HyruleCastlePlatform","1000000000"),("SmallZonauRuinsIsland","1000000000"),("SpiritualField","1000000000"),("StartIsland","0000000000")]:

    heightfile = open('terrain/%s/%s.hght'%(mapname,hfile),'rb')

    lownib = []

    for y in range(260):
        lownib.append([])
        for x in range(130):
            val, = heightfile.read(1)
            lownib[-1].append(val>>4)
            lownib[-1].append(val&0x0F)
        
    midnib = []

    for y in range(260):
        midnib.append([])
        for x in range(130):
            val, = heightfile.read(1)
            midnib[-1].append(val>>4)
            midnib[-1].append(val&0x0F)
        
    img = Image.new("I;16", (260,260))

    for y in range(260):
        val = 0
        for x in range(260):
            assert midnib[y][x] < 0x10
            delta = (heightfile.read(1)[0]<<8) + (midnib[y][x]<<4) + lownib[y][x] - 0x78 # thanks dt13269 for figuring out this mess
            val += delta
            val %= 0x10000
            img.putpixel((x,y), val)
        
    img.save('heightmap_%s.png'%mapname)

    print(hex(heightfile.tell()))

    for x in heightfile.read():
        assert x == 0
    heightfile.close()
