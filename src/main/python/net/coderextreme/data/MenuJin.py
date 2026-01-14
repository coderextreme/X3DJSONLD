print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "Menu.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "X3D scene with a Switch of Inlines controlled by a menu"

head1.children.append(meta3)

X3D0.head = head1
Scene4 = x3d.Scene()
"""Viewpoint and any other scene setup"""
Viewpoint5 = x3d.Viewpoint()
Viewpoint5.position = [0,20,110]

Scene4.children.append(Viewpoint5)
Group6 = x3d.Group()
Switch7 = x3d.Switch()
Switch7.DEF = "SceneSwitcher"
Switch7.whichChoice = 0
Group8 = x3d.Group()
Script9 = x3d.Script()
Script9.DEF = "Choice0"
field10 = x3d.field()
field10.name = "touchTime"
field10.type = "SFTime"
field10.accessType = "inputOnly"

Script9.field.append(field10)
field11 = x3d.field()
field11.name = "choice"
field11.type = "SFInt32"
field11.accessType = "outputOnly"

Script9.field.append(field11)

Script9.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 0;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 0;\n"+
"      }'''

Group8.children.append(Script9)
Inline12 = x3d.Inline()
Inline12.DEF = "JinBlink"
Inline12.url = ["../resources/JinBlink.x3d","JinBlink.x3d"]

Group8.children.append(Inline12)

Switch7.children.append(Group8)
Group13 = x3d.Group()
Script14 = x3d.Script()
Script14.DEF = "Choice1"
field15 = x3d.field()
field15.name = "touchTime"
field15.type = "SFTime"
field15.accessType = "inputOnly"

Script14.field.append(field15)
field16 = x3d.field()
field16.name = "choice"
field16.type = "SFInt32"
field16.accessType = "outputOnly"

Script14.field.append(field16)

Script14.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 1;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 1;\n"+
"      }'''

Group13.children.append(Script14)
Inline17 = x3d.Inline()
Inline17.DEF = "JinBrowLowerer"
Inline17.url = ["../resources/JinBrowLowerer.x3d","JinBrowLowerer.x3d"]

Group13.children.append(Inline17)

Switch7.children.append(Group13)
Group18 = x3d.Group()
Script19 = x3d.Script()
Script19.DEF = "Choice2"
field20 = x3d.field()
field20.name = "touchTime"
field20.type = "SFTime"
field20.accessType = "inputOnly"

Script19.field.append(field20)
field21 = x3d.field()
field21.name = "choice"
field21.type = "SFInt32"
field21.accessType = "outputOnly"

Script19.field.append(field21)

Script19.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 2;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 2;\n"+
"      }'''

Group18.children.append(Script19)
Inline22 = x3d.Inline()
Inline22.DEF = "JinCheekPuffer"
Inline22.url = ["../resources/JinCheekPuffer.x3d","JinCheekPuffer.x3d"]

Group18.children.append(Inline22)

Switch7.children.append(Group18)
Group23 = x3d.Group()
Script24 = x3d.Script()
Script24.DEF = "Choice3"
field25 = x3d.field()
field25.name = "touchTime"
field25.type = "SFTime"
field25.accessType = "inputOnly"

Script24.field.append(field25)
field26 = x3d.field()
field26.name = "choice"
field26.type = "SFInt32"
field26.accessType = "outputOnly"

Script24.field.append(field26)

Script24.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 3;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 3;\n"+
"      }'''

Group23.children.append(Script24)
Inline27 = x3d.Inline()
Inline27.DEF = "JinCheekRaiser"
Inline27.url = ["../resources/JinCheekRaiser.x3d","JinCheekRaiser.x3d"]

Group23.children.append(Inline27)

Switch7.children.append(Group23)
Group28 = x3d.Group()
Script29 = x3d.Script()
Script29.DEF = "Choice4"
field30 = x3d.field()
field30.name = "touchTime"
field30.type = "SFTime"
field30.accessType = "inputOnly"

Script29.field.append(field30)
field31 = x3d.field()
field31.name = "choice"
field31.type = "SFInt32"
field31.accessType = "outputOnly"

Script29.field.append(field31)

Script29.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 4;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 4;\n"+
"      }'''

Group28.children.append(Script29)
Inline32 = x3d.Inline()
Inline32.DEF = "JinChinRaiser"
Inline32.url = ["../resources/JinChinRaiser.x3d","JinChinRaiser.x3d"]

Group28.children.append(Inline32)

Switch7.children.append(Group28)
Group33 = x3d.Group()
Script34 = x3d.Script()
Script34.DEF = "Choice5"
field35 = x3d.field()
field35.name = "touchTime"
field35.type = "SFTime"
field35.accessType = "inputOnly"

Script34.field.append(field35)
field36 = x3d.field()
field36.name = "choice"
field36.type = "SFInt32"
field36.accessType = "outputOnly"

Script34.field.append(field36)

Script34.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 5;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 5;\n"+
"      }'''

Group33.children.append(Script34)
Inline37 = x3d.Inline()
Inline37.DEF = "JinDimpler"
Inline37.url = ["../resources/JinDimpler.x3d","JinDimpler.x3d"]

Group33.children.append(Inline37)

Switch7.children.append(Group33)
Group38 = x3d.Group()
Script39 = x3d.Script()
Script39.DEF = "Choice6"
field40 = x3d.field()
field40.name = "touchTime"
field40.type = "SFTime"
field40.accessType = "inputOnly"

Script39.field.append(field40)
field41 = x3d.field()
field41.name = "choice"
field41.type = "SFInt32"
field41.accessType = "outputOnly"

Script39.field.append(field41)

Script39.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 6;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 6;\n"+
"      }'''

Group38.children.append(Script39)
Inline42 = x3d.Inline()
Inline42.DEF = "JinEyesClosed"
Inline42.url = ["../resources/JinEyesClosed.x3d","JinEyesClosed.x3d"]

Group38.children.append(Inline42)

Switch7.children.append(Group38)
Group43 = x3d.Group()
Script44 = x3d.Script()
Script44.DEF = "Choice7"
field45 = x3d.field()
field45.name = "touchTime"
field45.type = "SFTime"
field45.accessType = "inputOnly"

Script44.field.append(field45)
field46 = x3d.field()
field46.name = "choice"
field46.type = "SFInt32"
field46.accessType = "outputOnly"

Script44.field.append(field46)

Script44.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 7;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 7;\n"+
"      }'''

Group43.children.append(Script44)
Inline47 = x3d.Inline()
Inline47.DEF = "JinInnerBrowRaiser"
Inline47.url = ["../resources/JinInnerBrowRaiser.x3d","JinInnerBrowRaiser.x3d"]

Group43.children.append(Inline47)

Switch7.children.append(Group43)
Group48 = x3d.Group()
Script49 = x3d.Script()
Script49.DEF = "Choice8"
field50 = x3d.field()
field50.name = "touchTime"
field50.type = "SFTime"
field50.accessType = "inputOnly"

Script49.field.append(field50)
field51 = x3d.field()
field51.name = "choice"
field51.type = "SFInt32"
field51.accessType = "outputOnly"

Script49.field.append(field51)

Script49.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 8;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 8;\n"+
"      }'''

Group48.children.append(Script49)
Inline52 = x3d.Inline()
Inline52.DEF = "JinJawDrop"
Inline52.url = ["../resources/JinJawDrop.x3d","JinJawDrop.x3d"]

Group48.children.append(Inline52)

Switch7.children.append(Group48)
Group53 = x3d.Group()
Script54 = x3d.Script()
Script54.DEF = "Choice9"
field55 = x3d.field()
field55.name = "touchTime"
field55.type = "SFTime"
field55.accessType = "inputOnly"

Script54.field.append(field55)
field56 = x3d.field()
field56.name = "choice"
field56.type = "SFInt32"
field56.accessType = "outputOnly"

Script54.field.append(field56)

Script54.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 9;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 9;\n"+
"      }'''

Group53.children.append(Script54)
Inline57 = x3d.Inline()
Inline57.DEF = "JinLidDroop"
Inline57.url = ["../resources/JinLidDroop.x3d","JinLidDroop.x3d"]

Group53.children.append(Inline57)

Switch7.children.append(Group53)
Group58 = x3d.Group()
Script59 = x3d.Script()
Script59.DEF = "Choice10"
field60 = x3d.field()
field60.name = "touchTime"
field60.type = "SFTime"
field60.accessType = "inputOnly"

Script59.field.append(field60)
field61 = x3d.field()
field61.name = "choice"
field61.type = "SFInt32"
field61.accessType = "outputOnly"

Script59.field.append(field61)

Script59.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 10;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 10;\n"+
"      }'''

Group58.children.append(Script59)
Inline62 = x3d.Inline()
Inline62.DEF = "JinLidTightener"
Inline62.url = ["../resources/JinLidTightener.x3d","JinLidTightener.x3d"]

Group58.children.append(Inline62)

Switch7.children.append(Group58)
Group63 = x3d.Group()
Script64 = x3d.Script()
Script64.DEF = "Choice11"
field65 = x3d.field()
field65.name = "touchTime"
field65.type = "SFTime"
field65.accessType = "inputOnly"

Script64.field.append(field65)
field66 = x3d.field()
field66.name = "choice"
field66.type = "SFInt32"
field66.accessType = "outputOnly"

Script64.field.append(field66)

Script64.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 11;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 11;\n"+
"      }'''

Group63.children.append(Script64)
Inline67 = x3d.Inline()
Inline67.DEF = "JinLipCornerDepressor"
Inline67.url = ["../resources/JinLipCornerDepressor.x3d","JinLipCornerDepressor.x3d"]

Group63.children.append(Inline67)

Switch7.children.append(Group63)
Group68 = x3d.Group()
Script69 = x3d.Script()
Script69.DEF = "Choice12"
field70 = x3d.field()
field70.name = "touchTime"
field70.type = "SFTime"
field70.accessType = "inputOnly"

Script69.field.append(field70)
field71 = x3d.field()
field71.name = "choice"
field71.type = "SFInt32"
field71.accessType = "outputOnly"

Script69.field.append(field71)

Script69.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 12;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 12;\n"+
"      }'''

Group68.children.append(Script69)
Inline72 = x3d.Inline()
Inline72.DEF = "JinLipCornerPuller"
Inline72.url = ["../resources/JinLipCornerPuller.x3d","JinLipCornerPuller.x3d"]

Group68.children.append(Inline72)

Switch7.children.append(Group68)
Group73 = x3d.Group()
Script74 = x3d.Script()
Script74.DEF = "Choice13"
field75 = x3d.field()
field75.name = "touchTime"
field75.type = "SFTime"
field75.accessType = "inputOnly"

Script74.field.append(field75)
field76 = x3d.field()
field76.name = "choice"
field76.type = "SFInt32"
field76.accessType = "outputOnly"

Script74.field.append(field76)

Script74.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 13;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 13;\n"+
"      }'''

Group73.children.append(Script74)
Inline77 = x3d.Inline()
Inline77.DEF = "JinLipFunneler"
Inline77.url = ["../resources/JinLipFunneler.x3d","JinLipFunneler.x3d"]

Group73.children.append(Inline77)

Switch7.children.append(Group73)
Group78 = x3d.Group()
Script79 = x3d.Script()
Script79.DEF = "Choice14"
field80 = x3d.field()
field80.name = "touchTime"
field80.type = "SFTime"
field80.accessType = "inputOnly"

Script79.field.append(field80)
field81 = x3d.field()
field81.name = "choice"
field81.type = "SFInt32"
field81.accessType = "outputOnly"

Script79.field.append(field81)

Script79.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 14;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 14;\n"+
"      }'''

Group78.children.append(Script79)
Inline82 = x3d.Inline()
Inline82.DEF = "JinLipPressor"
Inline82.url = ["../resources/JinLipPressor.x3d","JinLipPressor.x3d"]

Group78.children.append(Inline82)

Switch7.children.append(Group78)
Group83 = x3d.Group()
Script84 = x3d.Script()
Script84.DEF = "Choice15"
field85 = x3d.field()
field85.name = "touchTime"
field85.type = "SFTime"
field85.accessType = "inputOnly"

Script84.field.append(field85)
field86 = x3d.field()
field86.name = "choice"
field86.type = "SFInt32"
field86.accessType = "outputOnly"

Script84.field.append(field86)

Script84.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 15;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 15;\n"+
"      }'''

Group83.children.append(Script84)
Inline87 = x3d.Inline()
Inline87.DEF = "JinLipPuckerer"
Inline87.url = ["../resources/JinLipPuckerer.x3d","JinLipPuckerer.x3d"]

Group83.children.append(Inline87)

Switch7.children.append(Group83)
Group88 = x3d.Group()
Script89 = x3d.Script()
Script89.DEF = "Choice16"
field90 = x3d.field()
field90.name = "touchTime"
field90.type = "SFTime"
field90.accessType = "inputOnly"

Script89.field.append(field90)
field91 = x3d.field()
field91.name = "choice"
field91.type = "SFInt32"
field91.accessType = "outputOnly"

Script89.field.append(field91)

Script89.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 16;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 16;\n"+
"      }'''

Group88.children.append(Script89)
Inline92 = x3d.Inline()
Inline92.DEF = "JinLipsPart"
Inline92.url = ["../resources/JinLipsPart.x3d","JinLipsPart.x3d"]

Group88.children.append(Inline92)

Switch7.children.append(Group88)
Group93 = x3d.Group()
Script94 = x3d.Script()
Script94.DEF = "Choice17"
field95 = x3d.field()
field95.name = "touchTime"
field95.type = "SFTime"
field95.accessType = "inputOnly"

Script94.field.append(field95)
field96 = x3d.field()
field96.name = "choice"
field96.type = "SFInt32"
field96.accessType = "outputOnly"

Script94.field.append(field96)

Script94.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 17;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 17;\n"+
"      }'''

Group93.children.append(Script94)
Inline97 = x3d.Inline()
Inline97.DEF = "JinLipStretcher"
Inline97.url = ["../resources/JinLipStretcher.x3d","JinLipStretcher.x3d"]

Group93.children.append(Inline97)

Switch7.children.append(Group93)
Group98 = x3d.Group()
Script99 = x3d.Script()
Script99.DEF = "Choice18"
field100 = x3d.field()
field100.name = "touchTime"
field100.type = "SFTime"
field100.accessType = "inputOnly"

Script99.field.append(field100)
field101 = x3d.field()
field101.name = "choice"
field101.type = "SFInt32"
field101.accessType = "outputOnly"

Script99.field.append(field101)

Script99.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 18;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 18;\n"+
"      }'''

Group98.children.append(Script99)
Inline102 = x3d.Inline()
Inline102.DEF = "JinLipSuck"
Inline102.url = ["../resources/JinLipSuck.x3d","JinLipSuck.x3d"]

Group98.children.append(Inline102)

Switch7.children.append(Group98)
Group103 = x3d.Group()
Script104 = x3d.Script()
Script104.DEF = "Choice19"
field105 = x3d.field()
field105.name = "touchTime"
field105.type = "SFTime"
field105.accessType = "inputOnly"

Script104.field.append(field105)
field106 = x3d.field()
field106.name = "choice"
field106.type = "SFInt32"
field106.accessType = "outputOnly"

Script104.field.append(field106)

Script104.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 19;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 19;\n"+
"      }'''

Group103.children.append(Script104)
Inline107 = x3d.Inline()
Inline107.DEF = "JinLipTightener"
Inline107.url = ["../resources/JinLipTightener.x3d","JinLipTightener.x3d"]

Group103.children.append(Inline107)

Switch7.children.append(Group103)
Group108 = x3d.Group()
Script109 = x3d.Script()
Script109.DEF = "Choice20"
field110 = x3d.field()
field110.name = "touchTime"
field110.type = "SFTime"
field110.accessType = "inputOnly"

Script109.field.append(field110)
field111 = x3d.field()
field111.name = "choice"
field111.type = "SFInt32"
field111.accessType = "outputOnly"

Script109.field.append(field111)

Script109.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 20;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 20;\n"+
"      }'''

Group108.children.append(Script109)
Inline112 = x3d.Inline()
Inline112.DEF = "JinLowerLipDepressor"
Inline112.url = ["../resources/JinLowerLipDepressor.x3d","JinLowerLipDepressor.x3d"]

Group108.children.append(Inline112)

Switch7.children.append(Group108)
Group113 = x3d.Group()
Script114 = x3d.Script()
Script114.DEF = "Choice21"
field115 = x3d.field()
field115.name = "touchTime"
field115.type = "SFTime"
field115.accessType = "inputOnly"

Script114.field.append(field115)
field116 = x3d.field()
field116.name = "choice"
field116.type = "SFInt32"
field116.accessType = "outputOnly"

Script114.field.append(field116)

Script114.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 21;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 21;\n"+
"      }'''

Group113.children.append(Script114)
Inline117 = x3d.Inline()
Inline117.DEF = "JinMouthStretch"
Inline117.url = ["../resources/JinMouthStretch.x3d","JinMouthStretch.x3d"]

Group113.children.append(Inline117)

Switch7.children.append(Group113)
Group118 = x3d.Group()
Script119 = x3d.Script()
Script119.DEF = "Choice22"
field120 = x3d.field()
field120.name = "touchTime"
field120.type = "SFTime"
field120.accessType = "inputOnly"

Script119.field.append(field120)
field121 = x3d.field()
field121.name = "choice"
field121.type = "SFInt32"
field121.accessType = "outputOnly"

Script119.field.append(field121)

Script119.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 22;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 22;\n"+
"      }'''

Group118.children.append(Script119)
Inline122 = x3d.Inline()
Inline122.DEF = "JinNasolabialDeepener"
Inline122.url = ["../resources/JinNasolabialDeepener.x3d","JinNasolabialDeepener.x3d"]

Group118.children.append(Inline122)

Switch7.children.append(Group118)
Group123 = x3d.Group()
Script124 = x3d.Script()
Script124.DEF = "Choice23"
field125 = x3d.field()
field125.name = "touchTime"
field125.type = "SFTime"
field125.accessType = "inputOnly"

Script124.field.append(field125)
field126 = x3d.field()
field126.name = "choice"
field126.type = "SFInt32"
field126.accessType = "outputOnly"

Script124.field.append(field126)

Script124.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 23;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 23;\n"+
"      }'''

Group123.children.append(Script124)
Inline127 = x3d.Inline()
Inline127.DEF = "JinNoseWrinkler"
Inline127.url = ["../resources/JinNoseWrinkler.x3d","JinNoseWrinkler.x3d"]

Group123.children.append(Inline127)

Switch7.children.append(Group123)
Group128 = x3d.Group()
Script129 = x3d.Script()
Script129.DEF = "Choice24"
field130 = x3d.field()
field130.name = "touchTime"
field130.type = "SFTime"
field130.accessType = "inputOnly"

Script129.field.append(field130)
field131 = x3d.field()
field131.name = "choice"
field131.type = "SFInt32"
field131.accessType = "outputOnly"

Script129.field.append(field131)

Script129.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 24;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 24;\n"+
"      }'''

Group128.children.append(Script129)
Inline132 = x3d.Inline()
Inline132.DEF = "JinOuterBrowRaiser"
Inline132.url = ["../resources/JinOuterBrowRaiser.x3d","JinOuterBrowRaiser.x3d"]

Group128.children.append(Inline132)

Switch7.children.append(Group128)
Group133 = x3d.Group()
Script134 = x3d.Script()
Script134.DEF = "Choice25"
field135 = x3d.field()
field135.name = "touchTime"
field135.type = "SFTime"
field135.accessType = "inputOnly"

Script134.field.append(field135)
field136 = x3d.field()
field136.name = "choice"
field136.type = "SFInt32"
field136.accessType = "outputOnly"

Script134.field.append(field136)

Script134.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 25;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 25;\n"+
"      }'''

Group133.children.append(Script134)
Inline137 = x3d.Inline()
Inline137.DEF = "JinSlit"
Inline137.url = ["../resources/JinSlit.x3d","JinSlit.x3d"]

Group133.children.append(Inline137)

Switch7.children.append(Group133)
Group138 = x3d.Group()
Script139 = x3d.Script()
Script139.DEF = "Choice26"
field140 = x3d.field()
field140.name = "touchTime"
field140.type = "SFTime"
field140.accessType = "inputOnly"

Script139.field.append(field140)
field141 = x3d.field()
field141.name = "choice"
field141.type = "SFInt32"
field141.accessType = "outputOnly"

Script139.field.append(field141)

Script139.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 26;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 26;\n"+
"      }'''

Group138.children.append(Script139)
Inline142 = x3d.Inline()
Inline142.DEF = "JinSquint"
Inline142.url = ["../resources/JinSquint.x3d","JinSquint.x3d"]

Group138.children.append(Inline142)

Switch7.children.append(Group138)
Group143 = x3d.Group()
Script144 = x3d.Script()
Script144.DEF = "Choice27"
field145 = x3d.field()
field145.name = "touchTime"
field145.type = "SFTime"
field145.accessType = "inputOnly"

Script144.field.append(field145)
field146 = x3d.field()
field146.name = "choice"
field146.type = "SFInt32"
field146.accessType = "outputOnly"

Script144.field.append(field146)

Script144.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 27;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 27;\n"+
"      }'''

Group143.children.append(Script144)
Inline147 = x3d.Inline()
Inline147.DEF = "JinUpperLidRaiser"
Inline147.url = ["../resources/JinUpperLidRaiser.x3d","JinUpperLidRaiser.x3d"]

Group143.children.append(Inline147)

Switch7.children.append(Group143)
Group148 = x3d.Group()
Script149 = x3d.Script()
Script149.DEF = "Choice28"
field150 = x3d.field()
field150.name = "touchTime"
field150.type = "SFTime"
field150.accessType = "inputOnly"

Script149.field.append(field150)
field151 = x3d.field()
field151.name = "choice"
field151.type = "SFInt32"
field151.accessType = "outputOnly"

Script149.field.append(field151)

Script149.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 28;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 28;\n"+
"      }'''

Group148.children.append(Script149)
Inline152 = x3d.Inline()
Inline152.DEF = "JinUpperLipRaiser"
Inline152.url = ["../resources/JinUpperLipRaiser.x3d","JinUpperLipRaiser.x3d"]

Group148.children.append(Inline152)

Switch7.children.append(Group148)
Group153 = x3d.Group()
Script154 = x3d.Script()
Script154.DEF = "Choice29"
field155 = x3d.field()
field155.name = "touchTime"
field155.type = "SFTime"
field155.accessType = "inputOnly"

Script154.field.append(field155)
field156 = x3d.field()
field156.name = "choice"
field156.type = "SFInt32"
field156.accessType = "outputOnly"

Script154.field.append(field156)

Script154.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 29;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 29;\n"+
"      }'''

Group153.children.append(Script154)
Inline157 = x3d.Inline()
Inline157.DEF = "JinWink"
Inline157.url = ["../resources/JinWink.x3d","JinWink.x3d"]

Group153.children.append(Inline157)

Switch7.children.append(Group153)

Group6.children.append(Switch7)
Transform158 = x3d.Transform()
Transform158.translation = [48,63.4,0]
TouchSensor159 = x3d.TouchSensor()
TouchSensor159.description = "TSJinBlink"
TouchSensor159.DEF = "JinBlink_Sensor"

Transform158.children.append(TouchSensor159)
Shape160 = x3d.Shape()
Appearance161 = x3d.Appearance()
Material162 = x3d.Material()
Material162.diffuseColor = [1,1,1]

Appearance161.material = Material162

Shape160.appearance = Appearance161
Text163 = x3d.Text()
Text163.string = ["JinBlink"]
FontStyle164 = x3d.FontStyle()
FontStyle164.size = 2.4
FontStyle164.spacing = 1.2
FontStyle164.justify = ["MIDDLE","MIDDLE"]

Text163.fontStyle = FontStyle164

Shape160.geometry = Text163

Transform158.children.append(Shape160)
Shape165 = x3d.Shape()
Appearance166 = x3d.Appearance()
Material167 = x3d.Material()
Material167.diffuseColor = [0,0,1]

Appearance166.material = Material167

Shape165.appearance = Appearance166
IndexedFaceSet168 = x3d.IndexedFaceSet()
IndexedFaceSet168.coordIndex = [0,1,2,3,-1]
Coordinate169 = x3d.Coordinate()
Coordinate169.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet168.coord = Coordinate169

Shape165.geometry = IndexedFaceSet168

Transform158.children.append(Shape165)

Group6.children.append(Transform158)
ROUTE170 = x3d.ROUTE()
ROUTE170.fromNode = "JinBlink_Sensor"
ROUTE170.fromField = "touchTime"
ROUTE170.toNode = "Choice0"
ROUTE170.toField = "touchTime"

Group6.children.append(ROUTE170)
ROUTE171 = x3d.ROUTE()
ROUTE171.fromNode = "Choice0"
ROUTE171.fromField = "choice"
ROUTE171.toNode = "SceneSwitcher"
ROUTE171.toField = "whichChoice"

Group6.children.append(ROUTE171)
Transform172 = x3d.Transform()
Transform172.translation = [48,60.4,0]
TouchSensor173 = x3d.TouchSensor()
TouchSensor173.description = "TSJinBrowLowerer"
TouchSensor173.DEF = "JinBrowLowerer_Sensor"

Transform172.children.append(TouchSensor173)
Shape174 = x3d.Shape()
Appearance175 = x3d.Appearance()
Material176 = x3d.Material()
Material176.diffuseColor = [1,1,1]

Appearance175.material = Material176

Shape174.appearance = Appearance175
Text177 = x3d.Text()
Text177.string = ["JinBrowLowerer"]
FontStyle178 = x3d.FontStyle()
FontStyle178.size = 2.4
FontStyle178.spacing = 1.2
FontStyle178.justify = ["MIDDLE","MIDDLE"]

Text177.fontStyle = FontStyle178

Shape174.geometry = Text177

Transform172.children.append(Shape174)
Shape179 = x3d.Shape()
Appearance180 = x3d.Appearance()
Material181 = x3d.Material()
Material181.diffuseColor = [0,0,1]

Appearance180.material = Material181

Shape179.appearance = Appearance180
IndexedFaceSet182 = x3d.IndexedFaceSet()
IndexedFaceSet182.coordIndex = [0,1,2,3,-1]
Coordinate183 = x3d.Coordinate()
Coordinate183.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet182.coord = Coordinate183

Shape179.geometry = IndexedFaceSet182

Transform172.children.append(Shape179)

Group6.children.append(Transform172)
ROUTE184 = x3d.ROUTE()
ROUTE184.fromNode = "JinBrowLowerer_Sensor"
ROUTE184.fromField = "touchTime"
ROUTE184.toNode = "Choice1"
ROUTE184.toField = "touchTime"

Group6.children.append(ROUTE184)
ROUTE185 = x3d.ROUTE()
ROUTE185.fromNode = "Choice1"
ROUTE185.fromField = "choice"
ROUTE185.toNode = "SceneSwitcher"
ROUTE185.toField = "whichChoice"

Group6.children.append(ROUTE185)
Transform186 = x3d.Transform()
Transform186.translation = [48,57.39999999999999,0]
TouchSensor187 = x3d.TouchSensor()
TouchSensor187.description = "TSJinCheekPuffer"
TouchSensor187.DEF = "JinCheekPuffer_Sensor"

Transform186.children.append(TouchSensor187)
Shape188 = x3d.Shape()
Appearance189 = x3d.Appearance()
Material190 = x3d.Material()
Material190.diffuseColor = [1,1,1]

Appearance189.material = Material190

Shape188.appearance = Appearance189
Text191 = x3d.Text()
Text191.string = ["JinCheekPuffer"]
FontStyle192 = x3d.FontStyle()
FontStyle192.size = 2.4
FontStyle192.spacing = 1.2
FontStyle192.justify = ["MIDDLE","MIDDLE"]

Text191.fontStyle = FontStyle192

Shape188.geometry = Text191

Transform186.children.append(Shape188)
Shape193 = x3d.Shape()
Appearance194 = x3d.Appearance()
Material195 = x3d.Material()
Material195.diffuseColor = [0,0,1]

Appearance194.material = Material195

Shape193.appearance = Appearance194
IndexedFaceSet196 = x3d.IndexedFaceSet()
IndexedFaceSet196.coordIndex = [0,1,2,3,-1]
Coordinate197 = x3d.Coordinate()
Coordinate197.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet196.coord = Coordinate197

Shape193.geometry = IndexedFaceSet196

Transform186.children.append(Shape193)

Group6.children.append(Transform186)
ROUTE198 = x3d.ROUTE()
ROUTE198.fromNode = "JinCheekPuffer_Sensor"
ROUTE198.fromField = "touchTime"
ROUTE198.toNode = "Choice2"
ROUTE198.toField = "touchTime"

Group6.children.append(ROUTE198)
ROUTE199 = x3d.ROUTE()
ROUTE199.fromNode = "Choice2"
ROUTE199.fromField = "choice"
ROUTE199.toNode = "SceneSwitcher"
ROUTE199.toField = "whichChoice"

Group6.children.append(ROUTE199)
Transform200 = x3d.Transform()
Transform200.translation = [48,54.39999999999999,0]
TouchSensor201 = x3d.TouchSensor()
TouchSensor201.description = "TSJinCheekRaiser"
TouchSensor201.DEF = "JinCheekRaiser_Sensor"

Transform200.children.append(TouchSensor201)
Shape202 = x3d.Shape()
Appearance203 = x3d.Appearance()
Material204 = x3d.Material()
Material204.diffuseColor = [1,1,1]

Appearance203.material = Material204

Shape202.appearance = Appearance203
Text205 = x3d.Text()
Text205.string = ["JinCheekRaiser"]
FontStyle206 = x3d.FontStyle()
FontStyle206.size = 2.4
FontStyle206.spacing = 1.2
FontStyle206.justify = ["MIDDLE","MIDDLE"]

Text205.fontStyle = FontStyle206

Shape202.geometry = Text205

Transform200.children.append(Shape202)
Shape207 = x3d.Shape()
Appearance208 = x3d.Appearance()
Material209 = x3d.Material()
Material209.diffuseColor = [0,0,1]

Appearance208.material = Material209

Shape207.appearance = Appearance208
IndexedFaceSet210 = x3d.IndexedFaceSet()
IndexedFaceSet210.coordIndex = [0,1,2,3,-1]
Coordinate211 = x3d.Coordinate()
Coordinate211.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet210.coord = Coordinate211

Shape207.geometry = IndexedFaceSet210

Transform200.children.append(Shape207)

Group6.children.append(Transform200)
ROUTE212 = x3d.ROUTE()
ROUTE212.fromNode = "JinCheekRaiser_Sensor"
ROUTE212.fromField = "touchTime"
ROUTE212.toNode = "Choice3"
ROUTE212.toField = "touchTime"

Group6.children.append(ROUTE212)
ROUTE213 = x3d.ROUTE()
ROUTE213.fromNode = "Choice3"
ROUTE213.fromField = "choice"
ROUTE213.toNode = "SceneSwitcher"
ROUTE213.toField = "whichChoice"

Group6.children.append(ROUTE213)
Transform214 = x3d.Transform()
Transform214.translation = [48,51.39999999999999,0]
TouchSensor215 = x3d.TouchSensor()
TouchSensor215.description = "TSJinChinRaiser"
TouchSensor215.DEF = "JinChinRaiser_Sensor"

Transform214.children.append(TouchSensor215)
Shape216 = x3d.Shape()
Appearance217 = x3d.Appearance()
Material218 = x3d.Material()
Material218.diffuseColor = [1,1,1]

Appearance217.material = Material218

Shape216.appearance = Appearance217
Text219 = x3d.Text()
Text219.string = ["JinChinRaiser"]
FontStyle220 = x3d.FontStyle()
FontStyle220.size = 2.4
FontStyle220.spacing = 1.2
FontStyle220.justify = ["MIDDLE","MIDDLE"]

Text219.fontStyle = FontStyle220

Shape216.geometry = Text219

Transform214.children.append(Shape216)
Shape221 = x3d.Shape()
Appearance222 = x3d.Appearance()
Material223 = x3d.Material()
Material223.diffuseColor = [0,0,1]

Appearance222.material = Material223

Shape221.appearance = Appearance222
IndexedFaceSet224 = x3d.IndexedFaceSet()
IndexedFaceSet224.coordIndex = [0,1,2,3,-1]
Coordinate225 = x3d.Coordinate()
Coordinate225.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet224.coord = Coordinate225

Shape221.geometry = IndexedFaceSet224

Transform214.children.append(Shape221)

Group6.children.append(Transform214)
ROUTE226 = x3d.ROUTE()
ROUTE226.fromNode = "JinChinRaiser_Sensor"
ROUTE226.fromField = "touchTime"
ROUTE226.toNode = "Choice4"
ROUTE226.toField = "touchTime"

Group6.children.append(ROUTE226)
ROUTE227 = x3d.ROUTE()
ROUTE227.fromNode = "Choice4"
ROUTE227.fromField = "choice"
ROUTE227.toNode = "SceneSwitcher"
ROUTE227.toField = "whichChoice"

Group6.children.append(ROUTE227)
Transform228 = x3d.Transform()
Transform228.translation = [48,48.39999999999999,0]
TouchSensor229 = x3d.TouchSensor()
TouchSensor229.description = "TSJinDimpler"
TouchSensor229.DEF = "JinDimpler_Sensor"

Transform228.children.append(TouchSensor229)
Shape230 = x3d.Shape()
Appearance231 = x3d.Appearance()
Material232 = x3d.Material()
Material232.diffuseColor = [1,1,1]

Appearance231.material = Material232

Shape230.appearance = Appearance231
Text233 = x3d.Text()
Text233.string = ["JinDimpler"]
FontStyle234 = x3d.FontStyle()
FontStyle234.size = 2.4
FontStyle234.spacing = 1.2
FontStyle234.justify = ["MIDDLE","MIDDLE"]

Text233.fontStyle = FontStyle234

Shape230.geometry = Text233

Transform228.children.append(Shape230)
Shape235 = x3d.Shape()
Appearance236 = x3d.Appearance()
Material237 = x3d.Material()
Material237.diffuseColor = [0,0,1]

Appearance236.material = Material237

Shape235.appearance = Appearance236
IndexedFaceSet238 = x3d.IndexedFaceSet()
IndexedFaceSet238.coordIndex = [0,1,2,3,-1]
Coordinate239 = x3d.Coordinate()
Coordinate239.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet238.coord = Coordinate239

Shape235.geometry = IndexedFaceSet238

Transform228.children.append(Shape235)

Group6.children.append(Transform228)
ROUTE240 = x3d.ROUTE()
ROUTE240.fromNode = "JinDimpler_Sensor"
ROUTE240.fromField = "touchTime"
ROUTE240.toNode = "Choice5"
ROUTE240.toField = "touchTime"

Group6.children.append(ROUTE240)
ROUTE241 = x3d.ROUTE()
ROUTE241.fromNode = "Choice5"
ROUTE241.fromField = "choice"
ROUTE241.toNode = "SceneSwitcher"
ROUTE241.toField = "whichChoice"

Group6.children.append(ROUTE241)
Transform242 = x3d.Transform()
Transform242.translation = [48,45.39999999999999,0]
TouchSensor243 = x3d.TouchSensor()
TouchSensor243.description = "TSJinEyesClosed"
TouchSensor243.DEF = "JinEyesClosed_Sensor"

Transform242.children.append(TouchSensor243)
Shape244 = x3d.Shape()
Appearance245 = x3d.Appearance()
Material246 = x3d.Material()
Material246.diffuseColor = [1,1,1]

Appearance245.material = Material246

Shape244.appearance = Appearance245
Text247 = x3d.Text()
Text247.string = ["JinEyesClosed"]
FontStyle248 = x3d.FontStyle()
FontStyle248.size = 2.4
FontStyle248.spacing = 1.2
FontStyle248.justify = ["MIDDLE","MIDDLE"]

Text247.fontStyle = FontStyle248

Shape244.geometry = Text247

Transform242.children.append(Shape244)
Shape249 = x3d.Shape()
Appearance250 = x3d.Appearance()
Material251 = x3d.Material()
Material251.diffuseColor = [0,0,1]

Appearance250.material = Material251

Shape249.appearance = Appearance250
IndexedFaceSet252 = x3d.IndexedFaceSet()
IndexedFaceSet252.coordIndex = [0,1,2,3,-1]
Coordinate253 = x3d.Coordinate()
Coordinate253.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet252.coord = Coordinate253

Shape249.geometry = IndexedFaceSet252

Transform242.children.append(Shape249)

Group6.children.append(Transform242)
ROUTE254 = x3d.ROUTE()
ROUTE254.fromNode = "JinEyesClosed_Sensor"
ROUTE254.fromField = "touchTime"
ROUTE254.toNode = "Choice6"
ROUTE254.toField = "touchTime"

Group6.children.append(ROUTE254)
ROUTE255 = x3d.ROUTE()
ROUTE255.fromNode = "Choice6"
ROUTE255.fromField = "choice"
ROUTE255.toNode = "SceneSwitcher"
ROUTE255.toField = "whichChoice"

Group6.children.append(ROUTE255)
Transform256 = x3d.Transform()
Transform256.translation = [48,42.39999999999999,0]
TouchSensor257 = x3d.TouchSensor()
TouchSensor257.description = "TSJinInnerBrowRaiser"
TouchSensor257.DEF = "JinInnerBrowRaiser_Sensor"

Transform256.children.append(TouchSensor257)
Shape258 = x3d.Shape()
Appearance259 = x3d.Appearance()
Material260 = x3d.Material()
Material260.diffuseColor = [1,1,1]

Appearance259.material = Material260

Shape258.appearance = Appearance259
Text261 = x3d.Text()
Text261.string = ["JinInnerBrowRaiser"]
FontStyle262 = x3d.FontStyle()
FontStyle262.size = 2.4
FontStyle262.spacing = 1.2
FontStyle262.justify = ["MIDDLE","MIDDLE"]

Text261.fontStyle = FontStyle262

Shape258.geometry = Text261

Transform256.children.append(Shape258)
Shape263 = x3d.Shape()
Appearance264 = x3d.Appearance()
Material265 = x3d.Material()
Material265.diffuseColor = [0,0,1]

Appearance264.material = Material265

Shape263.appearance = Appearance264
IndexedFaceSet266 = x3d.IndexedFaceSet()
IndexedFaceSet266.coordIndex = [0,1,2,3,-1]
Coordinate267 = x3d.Coordinate()
Coordinate267.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet266.coord = Coordinate267

Shape263.geometry = IndexedFaceSet266

Transform256.children.append(Shape263)

Group6.children.append(Transform256)
ROUTE268 = x3d.ROUTE()
ROUTE268.fromNode = "JinInnerBrowRaiser_Sensor"
ROUTE268.fromField = "touchTime"
ROUTE268.toNode = "Choice7"
ROUTE268.toField = "touchTime"

Group6.children.append(ROUTE268)
ROUTE269 = x3d.ROUTE()
ROUTE269.fromNode = "Choice7"
ROUTE269.fromField = "choice"
ROUTE269.toNode = "SceneSwitcher"
ROUTE269.toField = "whichChoice"

Group6.children.append(ROUTE269)
Transform270 = x3d.Transform()
Transform270.translation = [48,39.39999999999999,0]
TouchSensor271 = x3d.TouchSensor()
TouchSensor271.description = "TSJinJawDrop"
TouchSensor271.DEF = "JinJawDrop_Sensor"

Transform270.children.append(TouchSensor271)
Shape272 = x3d.Shape()
Appearance273 = x3d.Appearance()
Material274 = x3d.Material()
Material274.diffuseColor = [1,1,1]

Appearance273.material = Material274

Shape272.appearance = Appearance273
Text275 = x3d.Text()
Text275.string = ["JinJawDrop"]
FontStyle276 = x3d.FontStyle()
FontStyle276.size = 2.4
FontStyle276.spacing = 1.2
FontStyle276.justify = ["MIDDLE","MIDDLE"]

Text275.fontStyle = FontStyle276

Shape272.geometry = Text275

Transform270.children.append(Shape272)
Shape277 = x3d.Shape()
Appearance278 = x3d.Appearance()
Material279 = x3d.Material()
Material279.diffuseColor = [0,0,1]

Appearance278.material = Material279

Shape277.appearance = Appearance278
IndexedFaceSet280 = x3d.IndexedFaceSet()
IndexedFaceSet280.coordIndex = [0,1,2,3,-1]
Coordinate281 = x3d.Coordinate()
Coordinate281.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet280.coord = Coordinate281

Shape277.geometry = IndexedFaceSet280

Transform270.children.append(Shape277)

Group6.children.append(Transform270)
ROUTE282 = x3d.ROUTE()
ROUTE282.fromNode = "JinJawDrop_Sensor"
ROUTE282.fromField = "touchTime"
ROUTE282.toNode = "Choice8"
ROUTE282.toField = "touchTime"

Group6.children.append(ROUTE282)
ROUTE283 = x3d.ROUTE()
ROUTE283.fromNode = "Choice8"
ROUTE283.fromField = "choice"
ROUTE283.toNode = "SceneSwitcher"
ROUTE283.toField = "whichChoice"

Group6.children.append(ROUTE283)
Transform284 = x3d.Transform()
Transform284.translation = [48,36.39999999999999,0]
TouchSensor285 = x3d.TouchSensor()
TouchSensor285.description = "TSJinLidDroop"
TouchSensor285.DEF = "JinLidDroop_Sensor"

Transform284.children.append(TouchSensor285)
Shape286 = x3d.Shape()
Appearance287 = x3d.Appearance()
Material288 = x3d.Material()
Material288.diffuseColor = [1,1,1]

Appearance287.material = Material288

Shape286.appearance = Appearance287
Text289 = x3d.Text()
Text289.string = ["JinLidDroop"]
FontStyle290 = x3d.FontStyle()
FontStyle290.size = 2.4
FontStyle290.spacing = 1.2
FontStyle290.justify = ["MIDDLE","MIDDLE"]

Text289.fontStyle = FontStyle290

Shape286.geometry = Text289

Transform284.children.append(Shape286)
Shape291 = x3d.Shape()
Appearance292 = x3d.Appearance()
Material293 = x3d.Material()
Material293.diffuseColor = [0,0,1]

Appearance292.material = Material293

Shape291.appearance = Appearance292
IndexedFaceSet294 = x3d.IndexedFaceSet()
IndexedFaceSet294.coordIndex = [0,1,2,3,-1]
Coordinate295 = x3d.Coordinate()
Coordinate295.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet294.coord = Coordinate295

Shape291.geometry = IndexedFaceSet294

Transform284.children.append(Shape291)

Group6.children.append(Transform284)
ROUTE296 = x3d.ROUTE()
ROUTE296.fromNode = "JinLidDroop_Sensor"
ROUTE296.fromField = "touchTime"
ROUTE296.toNode = "Choice9"
ROUTE296.toField = "touchTime"

Group6.children.append(ROUTE296)
ROUTE297 = x3d.ROUTE()
ROUTE297.fromNode = "Choice9"
ROUTE297.fromField = "choice"
ROUTE297.toNode = "SceneSwitcher"
ROUTE297.toField = "whichChoice"

Group6.children.append(ROUTE297)
Transform298 = x3d.Transform()
Transform298.translation = [48,33.39999999999999,0]
TouchSensor299 = x3d.TouchSensor()
TouchSensor299.description = "TSJinLidTightener"
TouchSensor299.DEF = "JinLidTightener_Sensor"

Transform298.children.append(TouchSensor299)
Shape300 = x3d.Shape()
Appearance301 = x3d.Appearance()
Material302 = x3d.Material()
Material302.diffuseColor = [1,1,1]

Appearance301.material = Material302

Shape300.appearance = Appearance301
Text303 = x3d.Text()
Text303.string = ["JinLidTightener"]
FontStyle304 = x3d.FontStyle()
FontStyle304.size = 2.4
FontStyle304.spacing = 1.2
FontStyle304.justify = ["MIDDLE","MIDDLE"]

Text303.fontStyle = FontStyle304

Shape300.geometry = Text303

Transform298.children.append(Shape300)
Shape305 = x3d.Shape()
Appearance306 = x3d.Appearance()
Material307 = x3d.Material()
Material307.diffuseColor = [0,0,1]

Appearance306.material = Material307

Shape305.appearance = Appearance306
IndexedFaceSet308 = x3d.IndexedFaceSet()
IndexedFaceSet308.coordIndex = [0,1,2,3,-1]
Coordinate309 = x3d.Coordinate()
Coordinate309.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet308.coord = Coordinate309

Shape305.geometry = IndexedFaceSet308

Transform298.children.append(Shape305)

Group6.children.append(Transform298)
ROUTE310 = x3d.ROUTE()
ROUTE310.fromNode = "JinLidTightener_Sensor"
ROUTE310.fromField = "touchTime"
ROUTE310.toNode = "Choice10"
ROUTE310.toField = "touchTime"

Group6.children.append(ROUTE310)
ROUTE311 = x3d.ROUTE()
ROUTE311.fromNode = "Choice10"
ROUTE311.fromField = "choice"
ROUTE311.toNode = "SceneSwitcher"
ROUTE311.toField = "whichChoice"

Group6.children.append(ROUTE311)
Transform312 = x3d.Transform()
Transform312.translation = [48,30.399999999999995,0]
TouchSensor313 = x3d.TouchSensor()
TouchSensor313.description = "TSJinLipCornerDepressor"
TouchSensor313.DEF = "JinLipCornerDepressor_Sensor"

Transform312.children.append(TouchSensor313)
Shape314 = x3d.Shape()
Appearance315 = x3d.Appearance()
Material316 = x3d.Material()
Material316.diffuseColor = [1,1,1]

Appearance315.material = Material316

Shape314.appearance = Appearance315
Text317 = x3d.Text()
Text317.string = ["JinLipCornerDepressor"]
FontStyle318 = x3d.FontStyle()
FontStyle318.size = 2.4
FontStyle318.spacing = 1.2
FontStyle318.justify = ["MIDDLE","MIDDLE"]

Text317.fontStyle = FontStyle318

Shape314.geometry = Text317

Transform312.children.append(Shape314)
Shape319 = x3d.Shape()
Appearance320 = x3d.Appearance()
Material321 = x3d.Material()
Material321.diffuseColor = [0,0,1]

Appearance320.material = Material321

Shape319.appearance = Appearance320
IndexedFaceSet322 = x3d.IndexedFaceSet()
IndexedFaceSet322.coordIndex = [0,1,2,3,-1]
Coordinate323 = x3d.Coordinate()
Coordinate323.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet322.coord = Coordinate323

Shape319.geometry = IndexedFaceSet322

Transform312.children.append(Shape319)

Group6.children.append(Transform312)
ROUTE324 = x3d.ROUTE()
ROUTE324.fromNode = "JinLipCornerDepressor_Sensor"
ROUTE324.fromField = "touchTime"
ROUTE324.toNode = "Choice11"
ROUTE324.toField = "touchTime"

Group6.children.append(ROUTE324)
ROUTE325 = x3d.ROUTE()
ROUTE325.fromNode = "Choice11"
ROUTE325.fromField = "choice"
ROUTE325.toNode = "SceneSwitcher"
ROUTE325.toField = "whichChoice"

Group6.children.append(ROUTE325)
Transform326 = x3d.Transform()
Transform326.translation = [48,27.399999999999995,0]
TouchSensor327 = x3d.TouchSensor()
TouchSensor327.description = "TSJinLipCornerPuller"
TouchSensor327.DEF = "JinLipCornerPuller_Sensor"

Transform326.children.append(TouchSensor327)
Shape328 = x3d.Shape()
Appearance329 = x3d.Appearance()
Material330 = x3d.Material()
Material330.diffuseColor = [1,1,1]

Appearance329.material = Material330

Shape328.appearance = Appearance329
Text331 = x3d.Text()
Text331.string = ["JinLipCornerPuller"]
FontStyle332 = x3d.FontStyle()
FontStyle332.size = 2.4
FontStyle332.spacing = 1.2
FontStyle332.justify = ["MIDDLE","MIDDLE"]

Text331.fontStyle = FontStyle332

Shape328.geometry = Text331

Transform326.children.append(Shape328)
Shape333 = x3d.Shape()
Appearance334 = x3d.Appearance()
Material335 = x3d.Material()
Material335.diffuseColor = [0,0,1]

Appearance334.material = Material335

Shape333.appearance = Appearance334
IndexedFaceSet336 = x3d.IndexedFaceSet()
IndexedFaceSet336.coordIndex = [0,1,2,3,-1]
Coordinate337 = x3d.Coordinate()
Coordinate337.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet336.coord = Coordinate337

Shape333.geometry = IndexedFaceSet336

Transform326.children.append(Shape333)

Group6.children.append(Transform326)
ROUTE338 = x3d.ROUTE()
ROUTE338.fromNode = "JinLipCornerPuller_Sensor"
ROUTE338.fromField = "touchTime"
ROUTE338.toNode = "Choice12"
ROUTE338.toField = "touchTime"

Group6.children.append(ROUTE338)
ROUTE339 = x3d.ROUTE()
ROUTE339.fromNode = "Choice12"
ROUTE339.fromField = "choice"
ROUTE339.toNode = "SceneSwitcher"
ROUTE339.toField = "whichChoice"

Group6.children.append(ROUTE339)
Transform340 = x3d.Transform()
Transform340.translation = [48,24.399999999999995,0]
TouchSensor341 = x3d.TouchSensor()
TouchSensor341.description = "TSJinLipFunneler"
TouchSensor341.DEF = "JinLipFunneler_Sensor"

Transform340.children.append(TouchSensor341)
Shape342 = x3d.Shape()
Appearance343 = x3d.Appearance()
Material344 = x3d.Material()
Material344.diffuseColor = [1,1,1]

Appearance343.material = Material344

Shape342.appearance = Appearance343
Text345 = x3d.Text()
Text345.string = ["JinLipFunneler"]
FontStyle346 = x3d.FontStyle()
FontStyle346.size = 2.4
FontStyle346.spacing = 1.2
FontStyle346.justify = ["MIDDLE","MIDDLE"]

Text345.fontStyle = FontStyle346

Shape342.geometry = Text345

Transform340.children.append(Shape342)
Shape347 = x3d.Shape()
Appearance348 = x3d.Appearance()
Material349 = x3d.Material()
Material349.diffuseColor = [0,0,1]

Appearance348.material = Material349

Shape347.appearance = Appearance348
IndexedFaceSet350 = x3d.IndexedFaceSet()
IndexedFaceSet350.coordIndex = [0,1,2,3,-1]
Coordinate351 = x3d.Coordinate()
Coordinate351.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet350.coord = Coordinate351

Shape347.geometry = IndexedFaceSet350

Transform340.children.append(Shape347)

Group6.children.append(Transform340)
ROUTE352 = x3d.ROUTE()
ROUTE352.fromNode = "JinLipFunneler_Sensor"
ROUTE352.fromField = "touchTime"
ROUTE352.toNode = "Choice13"
ROUTE352.toField = "touchTime"

Group6.children.append(ROUTE352)
ROUTE353 = x3d.ROUTE()
ROUTE353.fromNode = "Choice13"
ROUTE353.fromField = "choice"
ROUTE353.toNode = "SceneSwitcher"
ROUTE353.toField = "whichChoice"

Group6.children.append(ROUTE353)
Transform354 = x3d.Transform()
Transform354.translation = [48,21.399999999999995,0]
TouchSensor355 = x3d.TouchSensor()
TouchSensor355.description = "TSJinLipPressor"
TouchSensor355.DEF = "JinLipPressor_Sensor"

Transform354.children.append(TouchSensor355)
Shape356 = x3d.Shape()
Appearance357 = x3d.Appearance()
Material358 = x3d.Material()
Material358.diffuseColor = [1,1,1]

Appearance357.material = Material358

Shape356.appearance = Appearance357
Text359 = x3d.Text()
Text359.string = ["JinLipPressor"]
FontStyle360 = x3d.FontStyle()
FontStyle360.size = 2.4
FontStyle360.spacing = 1.2
FontStyle360.justify = ["MIDDLE","MIDDLE"]

Text359.fontStyle = FontStyle360

Shape356.geometry = Text359

Transform354.children.append(Shape356)
Shape361 = x3d.Shape()
Appearance362 = x3d.Appearance()
Material363 = x3d.Material()
Material363.diffuseColor = [0,0,1]

Appearance362.material = Material363

Shape361.appearance = Appearance362
IndexedFaceSet364 = x3d.IndexedFaceSet()
IndexedFaceSet364.coordIndex = [0,1,2,3,-1]
Coordinate365 = x3d.Coordinate()
Coordinate365.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet364.coord = Coordinate365

Shape361.geometry = IndexedFaceSet364

Transform354.children.append(Shape361)

Group6.children.append(Transform354)
ROUTE366 = x3d.ROUTE()
ROUTE366.fromNode = "JinLipPressor_Sensor"
ROUTE366.fromField = "touchTime"
ROUTE366.toNode = "Choice14"
ROUTE366.toField = "touchTime"

Group6.children.append(ROUTE366)
ROUTE367 = x3d.ROUTE()
ROUTE367.fromNode = "Choice14"
ROUTE367.fromField = "choice"
ROUTE367.toNode = "SceneSwitcher"
ROUTE367.toField = "whichChoice"

Group6.children.append(ROUTE367)
Transform368 = x3d.Transform()
Transform368.translation = [48,18.4,0]
TouchSensor369 = x3d.TouchSensor()
TouchSensor369.description = "TSJinLipPuckerer"
TouchSensor369.DEF = "JinLipPuckerer_Sensor"

Transform368.children.append(TouchSensor369)
Shape370 = x3d.Shape()
Appearance371 = x3d.Appearance()
Material372 = x3d.Material()
Material372.diffuseColor = [1,1,1]

Appearance371.material = Material372

Shape370.appearance = Appearance371
Text373 = x3d.Text()
Text373.string = ["JinLipPuckerer"]
FontStyle374 = x3d.FontStyle()
FontStyle374.size = 2.4
FontStyle374.spacing = 1.2
FontStyle374.justify = ["MIDDLE","MIDDLE"]

Text373.fontStyle = FontStyle374

Shape370.geometry = Text373

Transform368.children.append(Shape370)
Shape375 = x3d.Shape()
Appearance376 = x3d.Appearance()
Material377 = x3d.Material()
Material377.diffuseColor = [0,0,1]

Appearance376.material = Material377

Shape375.appearance = Appearance376
IndexedFaceSet378 = x3d.IndexedFaceSet()
IndexedFaceSet378.coordIndex = [0,1,2,3,-1]
Coordinate379 = x3d.Coordinate()
Coordinate379.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet378.coord = Coordinate379

Shape375.geometry = IndexedFaceSet378

Transform368.children.append(Shape375)

Group6.children.append(Transform368)
ROUTE380 = x3d.ROUTE()
ROUTE380.fromNode = "JinLipPuckerer_Sensor"
ROUTE380.fromField = "touchTime"
ROUTE380.toNode = "Choice15"
ROUTE380.toField = "touchTime"

Group6.children.append(ROUTE380)
ROUTE381 = x3d.ROUTE()
ROUTE381.fromNode = "Choice15"
ROUTE381.fromField = "choice"
ROUTE381.toNode = "SceneSwitcher"
ROUTE381.toField = "whichChoice"

Group6.children.append(ROUTE381)
Transform382 = x3d.Transform()
Transform382.translation = [48,15.399999999999997,0]
TouchSensor383 = x3d.TouchSensor()
TouchSensor383.description = "TSJinLipsPart"
TouchSensor383.DEF = "JinLipsPart_Sensor"

Transform382.children.append(TouchSensor383)
Shape384 = x3d.Shape()
Appearance385 = x3d.Appearance()
Material386 = x3d.Material()
Material386.diffuseColor = [1,1,1]

Appearance385.material = Material386

Shape384.appearance = Appearance385
Text387 = x3d.Text()
Text387.string = ["JinLipsPart"]
FontStyle388 = x3d.FontStyle()
FontStyle388.size = 2.4
FontStyle388.spacing = 1.2
FontStyle388.justify = ["MIDDLE","MIDDLE"]

Text387.fontStyle = FontStyle388

Shape384.geometry = Text387

Transform382.children.append(Shape384)
Shape389 = x3d.Shape()
Appearance390 = x3d.Appearance()
Material391 = x3d.Material()
Material391.diffuseColor = [0,0,1]

Appearance390.material = Material391

Shape389.appearance = Appearance390
IndexedFaceSet392 = x3d.IndexedFaceSet()
IndexedFaceSet392.coordIndex = [0,1,2,3,-1]
Coordinate393 = x3d.Coordinate()
Coordinate393.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet392.coord = Coordinate393

Shape389.geometry = IndexedFaceSet392

Transform382.children.append(Shape389)

Group6.children.append(Transform382)
ROUTE394 = x3d.ROUTE()
ROUTE394.fromNode = "JinLipsPart_Sensor"
ROUTE394.fromField = "touchTime"
ROUTE394.toNode = "Choice16"
ROUTE394.toField = "touchTime"

Group6.children.append(ROUTE394)
ROUTE395 = x3d.ROUTE()
ROUTE395.fromNode = "Choice16"
ROUTE395.fromField = "choice"
ROUTE395.toNode = "SceneSwitcher"
ROUTE395.toField = "whichChoice"

Group6.children.append(ROUTE395)
Transform396 = x3d.Transform()
Transform396.translation = [48,12.399999999999999,0]
TouchSensor397 = x3d.TouchSensor()
TouchSensor397.description = "TSJinLipStretcher"
TouchSensor397.DEF = "JinLipStretcher_Sensor"

Transform396.children.append(TouchSensor397)
Shape398 = x3d.Shape()
Appearance399 = x3d.Appearance()
Material400 = x3d.Material()
Material400.diffuseColor = [1,1,1]

Appearance399.material = Material400

Shape398.appearance = Appearance399
Text401 = x3d.Text()
Text401.string = ["JinLipStretcher"]
FontStyle402 = x3d.FontStyle()
FontStyle402.size = 2.4
FontStyle402.spacing = 1.2
FontStyle402.justify = ["MIDDLE","MIDDLE"]

Text401.fontStyle = FontStyle402

Shape398.geometry = Text401

Transform396.children.append(Shape398)
Shape403 = x3d.Shape()
Appearance404 = x3d.Appearance()
Material405 = x3d.Material()
Material405.diffuseColor = [0,0,1]

Appearance404.material = Material405

Shape403.appearance = Appearance404
IndexedFaceSet406 = x3d.IndexedFaceSet()
IndexedFaceSet406.coordIndex = [0,1,2,3,-1]
Coordinate407 = x3d.Coordinate()
Coordinate407.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet406.coord = Coordinate407

Shape403.geometry = IndexedFaceSet406

Transform396.children.append(Shape403)

Group6.children.append(Transform396)
ROUTE408 = x3d.ROUTE()
ROUTE408.fromNode = "JinLipStretcher_Sensor"
ROUTE408.fromField = "touchTime"
ROUTE408.toNode = "Choice17"
ROUTE408.toField = "touchTime"

Group6.children.append(ROUTE408)
ROUTE409 = x3d.ROUTE()
ROUTE409.fromNode = "Choice17"
ROUTE409.fromField = "choice"
ROUTE409.toNode = "SceneSwitcher"
ROUTE409.toField = "whichChoice"

Group6.children.append(ROUTE409)
Transform410 = x3d.Transform()
Transform410.translation = [48,9.399999999999999,0]
TouchSensor411 = x3d.TouchSensor()
TouchSensor411.description = "TSJinLipSuck"
TouchSensor411.DEF = "JinLipSuck_Sensor"

Transform410.children.append(TouchSensor411)
Shape412 = x3d.Shape()
Appearance413 = x3d.Appearance()
Material414 = x3d.Material()
Material414.diffuseColor = [1,1,1]

Appearance413.material = Material414

Shape412.appearance = Appearance413
Text415 = x3d.Text()
Text415.string = ["JinLipSuck"]
FontStyle416 = x3d.FontStyle()
FontStyle416.size = 2.4
FontStyle416.spacing = 1.2
FontStyle416.justify = ["MIDDLE","MIDDLE"]

Text415.fontStyle = FontStyle416

Shape412.geometry = Text415

Transform410.children.append(Shape412)
Shape417 = x3d.Shape()
Appearance418 = x3d.Appearance()
Material419 = x3d.Material()
Material419.diffuseColor = [0,0,1]

Appearance418.material = Material419

Shape417.appearance = Appearance418
IndexedFaceSet420 = x3d.IndexedFaceSet()
IndexedFaceSet420.coordIndex = [0,1,2,3,-1]
Coordinate421 = x3d.Coordinate()
Coordinate421.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet420.coord = Coordinate421

Shape417.geometry = IndexedFaceSet420

Transform410.children.append(Shape417)

Group6.children.append(Transform410)
ROUTE422 = x3d.ROUTE()
ROUTE422.fromNode = "JinLipSuck_Sensor"
ROUTE422.fromField = "touchTime"
ROUTE422.toNode = "Choice18"
ROUTE422.toField = "touchTime"

Group6.children.append(ROUTE422)
ROUTE423 = x3d.ROUTE()
ROUTE423.fromNode = "Choice18"
ROUTE423.fromField = "choice"
ROUTE423.toNode = "SceneSwitcher"
ROUTE423.toField = "whichChoice"

Group6.children.append(ROUTE423)
Transform424 = x3d.Transform()
Transform424.translation = [48,6.399999999999999,0]
TouchSensor425 = x3d.TouchSensor()
TouchSensor425.description = "TSJinLipTightener"
TouchSensor425.DEF = "JinLipTightener_Sensor"

Transform424.children.append(TouchSensor425)
Shape426 = x3d.Shape()
Appearance427 = x3d.Appearance()
Material428 = x3d.Material()
Material428.diffuseColor = [1,1,1]

Appearance427.material = Material428

Shape426.appearance = Appearance427
Text429 = x3d.Text()
Text429.string = ["JinLipTightener"]
FontStyle430 = x3d.FontStyle()
FontStyle430.size = 2.4
FontStyle430.spacing = 1.2
FontStyle430.justify = ["MIDDLE","MIDDLE"]

Text429.fontStyle = FontStyle430

Shape426.geometry = Text429

Transform424.children.append(Shape426)
Shape431 = x3d.Shape()
Appearance432 = x3d.Appearance()
Material433 = x3d.Material()
Material433.diffuseColor = [0,0,1]

Appearance432.material = Material433

Shape431.appearance = Appearance432
IndexedFaceSet434 = x3d.IndexedFaceSet()
IndexedFaceSet434.coordIndex = [0,1,2,3,-1]
Coordinate435 = x3d.Coordinate()
Coordinate435.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet434.coord = Coordinate435

Shape431.geometry = IndexedFaceSet434

Transform424.children.append(Shape431)

Group6.children.append(Transform424)
ROUTE436 = x3d.ROUTE()
ROUTE436.fromNode = "JinLipTightener_Sensor"
ROUTE436.fromField = "touchTime"
ROUTE436.toNode = "Choice19"
ROUTE436.toField = "touchTime"

Group6.children.append(ROUTE436)
ROUTE437 = x3d.ROUTE()
ROUTE437.fromNode = "Choice19"
ROUTE437.fromField = "choice"
ROUTE437.toNode = "SceneSwitcher"
ROUTE437.toField = "whichChoice"

Group6.children.append(ROUTE437)
Transform438 = x3d.Transform()
Transform438.translation = [48,3.399999999999995,0]
TouchSensor439 = x3d.TouchSensor()
TouchSensor439.description = "TSJinLowerLipDepressor"
TouchSensor439.DEF = "JinLowerLipDepressor_Sensor"

Transform438.children.append(TouchSensor439)
Shape440 = x3d.Shape()
Appearance441 = x3d.Appearance()
Material442 = x3d.Material()
Material442.diffuseColor = [1,1,1]

Appearance441.material = Material442

Shape440.appearance = Appearance441
Text443 = x3d.Text()
Text443.string = ["JinLowerLipDepressor"]
FontStyle444 = x3d.FontStyle()
FontStyle444.size = 2.4
FontStyle444.spacing = 1.2
FontStyle444.justify = ["MIDDLE","MIDDLE"]

Text443.fontStyle = FontStyle444

Shape440.geometry = Text443

Transform438.children.append(Shape440)
Shape445 = x3d.Shape()
Appearance446 = x3d.Appearance()
Material447 = x3d.Material()
Material447.diffuseColor = [0,0,1]

Appearance446.material = Material447

Shape445.appearance = Appearance446
IndexedFaceSet448 = x3d.IndexedFaceSet()
IndexedFaceSet448.coordIndex = [0,1,2,3,-1]
Coordinate449 = x3d.Coordinate()
Coordinate449.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet448.coord = Coordinate449

Shape445.geometry = IndexedFaceSet448

Transform438.children.append(Shape445)

Group6.children.append(Transform438)
ROUTE450 = x3d.ROUTE()
ROUTE450.fromNode = "JinLowerLipDepressor_Sensor"
ROUTE450.fromField = "touchTime"
ROUTE450.toNode = "Choice20"
ROUTE450.toField = "touchTime"

Group6.children.append(ROUTE450)
ROUTE451 = x3d.ROUTE()
ROUTE451.fromNode = "Choice20"
ROUTE451.fromField = "choice"
ROUTE451.toNode = "SceneSwitcher"
ROUTE451.toField = "whichChoice"

Group6.children.append(ROUTE451)
Transform452 = x3d.Transform()
Transform452.translation = [48,0.399999999999995,0]
TouchSensor453 = x3d.TouchSensor()
TouchSensor453.description = "TSJinMouthStretch"
TouchSensor453.DEF = "JinMouthStretch_Sensor"

Transform452.children.append(TouchSensor453)
Shape454 = x3d.Shape()
Appearance455 = x3d.Appearance()
Material456 = x3d.Material()
Material456.diffuseColor = [1,1,1]

Appearance455.material = Material456

Shape454.appearance = Appearance455
Text457 = x3d.Text()
Text457.string = ["JinMouthStretch"]
FontStyle458 = x3d.FontStyle()
FontStyle458.size = 2.4
FontStyle458.spacing = 1.2
FontStyle458.justify = ["MIDDLE","MIDDLE"]

Text457.fontStyle = FontStyle458

Shape454.geometry = Text457

Transform452.children.append(Shape454)
Shape459 = x3d.Shape()
Appearance460 = x3d.Appearance()
Material461 = x3d.Material()
Material461.diffuseColor = [0,0,1]

Appearance460.material = Material461

Shape459.appearance = Appearance460
IndexedFaceSet462 = x3d.IndexedFaceSet()
IndexedFaceSet462.coordIndex = [0,1,2,3,-1]
Coordinate463 = x3d.Coordinate()
Coordinate463.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet462.coord = Coordinate463

Shape459.geometry = IndexedFaceSet462

Transform452.children.append(Shape459)

Group6.children.append(Transform452)
ROUTE464 = x3d.ROUTE()
ROUTE464.fromNode = "JinMouthStretch_Sensor"
ROUTE464.fromField = "touchTime"
ROUTE464.toNode = "Choice21"
ROUTE464.toField = "touchTime"

Group6.children.append(ROUTE464)
ROUTE465 = x3d.ROUTE()
ROUTE465.fromNode = "Choice21"
ROUTE465.fromField = "choice"
ROUTE465.toNode = "SceneSwitcher"
ROUTE465.toField = "whichChoice"

Group6.children.append(ROUTE465)
Transform466 = x3d.Transform()
Transform466.translation = [48,-2.6000000000000085,0]
TouchSensor467 = x3d.TouchSensor()
TouchSensor467.description = "TSJinNasolabialDeepener"
TouchSensor467.DEF = "JinNasolabialDeepener_Sensor"

Transform466.children.append(TouchSensor467)
Shape468 = x3d.Shape()
Appearance469 = x3d.Appearance()
Material470 = x3d.Material()
Material470.diffuseColor = [1,1,1]

Appearance469.material = Material470

Shape468.appearance = Appearance469
Text471 = x3d.Text()
Text471.string = ["JinNasolabialDeepener"]
FontStyle472 = x3d.FontStyle()
FontStyle472.size = 2.4
FontStyle472.spacing = 1.2
FontStyle472.justify = ["MIDDLE","MIDDLE"]

Text471.fontStyle = FontStyle472

Shape468.geometry = Text471

Transform466.children.append(Shape468)
Shape473 = x3d.Shape()
Appearance474 = x3d.Appearance()
Material475 = x3d.Material()
Material475.diffuseColor = [0,0,1]

Appearance474.material = Material475

Shape473.appearance = Appearance474
IndexedFaceSet476 = x3d.IndexedFaceSet()
IndexedFaceSet476.coordIndex = [0,1,2,3,-1]
Coordinate477 = x3d.Coordinate()
Coordinate477.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet476.coord = Coordinate477

Shape473.geometry = IndexedFaceSet476

Transform466.children.append(Shape473)

Group6.children.append(Transform466)
ROUTE478 = x3d.ROUTE()
ROUTE478.fromNode = "JinNasolabialDeepener_Sensor"
ROUTE478.fromField = "touchTime"
ROUTE478.toNode = "Choice22"
ROUTE478.toField = "touchTime"

Group6.children.append(ROUTE478)
ROUTE479 = x3d.ROUTE()
ROUTE479.fromNode = "Choice22"
ROUTE479.fromField = "choice"
ROUTE479.toNode = "SceneSwitcher"
ROUTE479.toField = "whichChoice"

Group6.children.append(ROUTE479)
Transform480 = x3d.Transform()
Transform480.translation = [48,-5.6000000000000085,0]
TouchSensor481 = x3d.TouchSensor()
TouchSensor481.description = "TSJinNoseWrinkler"
TouchSensor481.DEF = "JinNoseWrinkler_Sensor"

Transform480.children.append(TouchSensor481)
Shape482 = x3d.Shape()
Appearance483 = x3d.Appearance()
Material484 = x3d.Material()
Material484.diffuseColor = [1,1,1]

Appearance483.material = Material484

Shape482.appearance = Appearance483
Text485 = x3d.Text()
Text485.string = ["JinNoseWrinkler"]
FontStyle486 = x3d.FontStyle()
FontStyle486.size = 2.4
FontStyle486.spacing = 1.2
FontStyle486.justify = ["MIDDLE","MIDDLE"]

Text485.fontStyle = FontStyle486

Shape482.geometry = Text485

Transform480.children.append(Shape482)
Shape487 = x3d.Shape()
Appearance488 = x3d.Appearance()
Material489 = x3d.Material()
Material489.diffuseColor = [0,0,1]

Appearance488.material = Material489

Shape487.appearance = Appearance488
IndexedFaceSet490 = x3d.IndexedFaceSet()
IndexedFaceSet490.coordIndex = [0,1,2,3,-1]
Coordinate491 = x3d.Coordinate()
Coordinate491.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet490.coord = Coordinate491

Shape487.geometry = IndexedFaceSet490

Transform480.children.append(Shape487)

Group6.children.append(Transform480)
ROUTE492 = x3d.ROUTE()
ROUTE492.fromNode = "JinNoseWrinkler_Sensor"
ROUTE492.fromField = "touchTime"
ROUTE492.toNode = "Choice23"
ROUTE492.toField = "touchTime"

Group6.children.append(ROUTE492)
ROUTE493 = x3d.ROUTE()
ROUTE493.fromNode = "Choice23"
ROUTE493.fromField = "choice"
ROUTE493.toNode = "SceneSwitcher"
ROUTE493.toField = "whichChoice"

Group6.children.append(ROUTE493)
Transform494 = x3d.Transform()
Transform494.translation = [48,-8.600000000000009,0]
TouchSensor495 = x3d.TouchSensor()
TouchSensor495.description = "TSJinOuterBrowRaiser"
TouchSensor495.DEF = "JinOuterBrowRaiser_Sensor"

Transform494.children.append(TouchSensor495)
Shape496 = x3d.Shape()
Appearance497 = x3d.Appearance()
Material498 = x3d.Material()
Material498.diffuseColor = [1,1,1]

Appearance497.material = Material498

Shape496.appearance = Appearance497
Text499 = x3d.Text()
Text499.string = ["JinOuterBrowRaiser"]
FontStyle500 = x3d.FontStyle()
FontStyle500.size = 2.4
FontStyle500.spacing = 1.2
FontStyle500.justify = ["MIDDLE","MIDDLE"]

Text499.fontStyle = FontStyle500

Shape496.geometry = Text499

Transform494.children.append(Shape496)
Shape501 = x3d.Shape()
Appearance502 = x3d.Appearance()
Material503 = x3d.Material()
Material503.diffuseColor = [0,0,1]

Appearance502.material = Material503

Shape501.appearance = Appearance502
IndexedFaceSet504 = x3d.IndexedFaceSet()
IndexedFaceSet504.coordIndex = [0,1,2,3,-1]
Coordinate505 = x3d.Coordinate()
Coordinate505.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet504.coord = Coordinate505

Shape501.geometry = IndexedFaceSet504

Transform494.children.append(Shape501)

Group6.children.append(Transform494)
ROUTE506 = x3d.ROUTE()
ROUTE506.fromNode = "JinOuterBrowRaiser_Sensor"
ROUTE506.fromField = "touchTime"
ROUTE506.toNode = "Choice24"
ROUTE506.toField = "touchTime"

Group6.children.append(ROUTE506)
ROUTE507 = x3d.ROUTE()
ROUTE507.fromNode = "Choice24"
ROUTE507.fromField = "choice"
ROUTE507.toNode = "SceneSwitcher"
ROUTE507.toField = "whichChoice"

Group6.children.append(ROUTE507)
Transform508 = x3d.Transform()
Transform508.translation = [48,-11.600000000000009,0]
TouchSensor509 = x3d.TouchSensor()
TouchSensor509.description = "TSJinSlit"
TouchSensor509.DEF = "JinSlit_Sensor"

Transform508.children.append(TouchSensor509)
Shape510 = x3d.Shape()
Appearance511 = x3d.Appearance()
Material512 = x3d.Material()
Material512.diffuseColor = [1,1,1]

Appearance511.material = Material512

Shape510.appearance = Appearance511
Text513 = x3d.Text()
Text513.string = ["JinSlit"]
FontStyle514 = x3d.FontStyle()
FontStyle514.size = 2.4
FontStyle514.spacing = 1.2
FontStyle514.justify = ["MIDDLE","MIDDLE"]

Text513.fontStyle = FontStyle514

Shape510.geometry = Text513

Transform508.children.append(Shape510)
Shape515 = x3d.Shape()
Appearance516 = x3d.Appearance()
Material517 = x3d.Material()
Material517.diffuseColor = [0,0,1]

Appearance516.material = Material517

Shape515.appearance = Appearance516
IndexedFaceSet518 = x3d.IndexedFaceSet()
IndexedFaceSet518.coordIndex = [0,1,2,3,-1]
Coordinate519 = x3d.Coordinate()
Coordinate519.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet518.coord = Coordinate519

Shape515.geometry = IndexedFaceSet518

Transform508.children.append(Shape515)

Group6.children.append(Transform508)
ROUTE520 = x3d.ROUTE()
ROUTE520.fromNode = "JinSlit_Sensor"
ROUTE520.fromField = "touchTime"
ROUTE520.toNode = "Choice25"
ROUTE520.toField = "touchTime"

Group6.children.append(ROUTE520)
ROUTE521 = x3d.ROUTE()
ROUTE521.fromNode = "Choice25"
ROUTE521.fromField = "choice"
ROUTE521.toNode = "SceneSwitcher"
ROUTE521.toField = "whichChoice"

Group6.children.append(ROUTE521)
Transform522 = x3d.Transform()
Transform522.translation = [48,-14.600000000000001,0]
TouchSensor523 = x3d.TouchSensor()
TouchSensor523.description = "TSJinSquint"
TouchSensor523.DEF = "JinSquint_Sensor"

Transform522.children.append(TouchSensor523)
Shape524 = x3d.Shape()
Appearance525 = x3d.Appearance()
Material526 = x3d.Material()
Material526.diffuseColor = [1,1,1]

Appearance525.material = Material526

Shape524.appearance = Appearance525
Text527 = x3d.Text()
Text527.string = ["JinSquint"]
FontStyle528 = x3d.FontStyle()
FontStyle528.size = 2.4
FontStyle528.spacing = 1.2
FontStyle528.justify = ["MIDDLE","MIDDLE"]

Text527.fontStyle = FontStyle528

Shape524.geometry = Text527

Transform522.children.append(Shape524)
Shape529 = x3d.Shape()
Appearance530 = x3d.Appearance()
Material531 = x3d.Material()
Material531.diffuseColor = [0,0,1]

Appearance530.material = Material531

Shape529.appearance = Appearance530
IndexedFaceSet532 = x3d.IndexedFaceSet()
IndexedFaceSet532.coordIndex = [0,1,2,3,-1]
Coordinate533 = x3d.Coordinate()
Coordinate533.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet532.coord = Coordinate533

Shape529.geometry = IndexedFaceSet532

Transform522.children.append(Shape529)

Group6.children.append(Transform522)
ROUTE534 = x3d.ROUTE()
ROUTE534.fromNode = "JinSquint_Sensor"
ROUTE534.fromField = "touchTime"
ROUTE534.toNode = "Choice26"
ROUTE534.toField = "touchTime"

Group6.children.append(ROUTE534)
ROUTE535 = x3d.ROUTE()
ROUTE535.fromNode = "Choice26"
ROUTE535.fromField = "choice"
ROUTE535.toNode = "SceneSwitcher"
ROUTE535.toField = "whichChoice"

Group6.children.append(ROUTE535)
Transform536 = x3d.Transform()
Transform536.translation = [48,-17.6,0]
TouchSensor537 = x3d.TouchSensor()
TouchSensor537.description = "TSJinUpperLidRaiser"
TouchSensor537.DEF = "JinUpperLidRaiser_Sensor"

Transform536.children.append(TouchSensor537)
Shape538 = x3d.Shape()
Appearance539 = x3d.Appearance()
Material540 = x3d.Material()
Material540.diffuseColor = [1,1,1]

Appearance539.material = Material540

Shape538.appearance = Appearance539
Text541 = x3d.Text()
Text541.string = ["JinUpperLidRaiser"]
FontStyle542 = x3d.FontStyle()
FontStyle542.size = 2.4
FontStyle542.spacing = 1.2
FontStyle542.justify = ["MIDDLE","MIDDLE"]

Text541.fontStyle = FontStyle542

Shape538.geometry = Text541

Transform536.children.append(Shape538)
Shape543 = x3d.Shape()
Appearance544 = x3d.Appearance()
Material545 = x3d.Material()
Material545.diffuseColor = [0,0,1]

Appearance544.material = Material545

Shape543.appearance = Appearance544
IndexedFaceSet546 = x3d.IndexedFaceSet()
IndexedFaceSet546.coordIndex = [0,1,2,3,-1]
Coordinate547 = x3d.Coordinate()
Coordinate547.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet546.coord = Coordinate547

Shape543.geometry = IndexedFaceSet546

Transform536.children.append(Shape543)

Group6.children.append(Transform536)
ROUTE548 = x3d.ROUTE()
ROUTE548.fromNode = "JinUpperLidRaiser_Sensor"
ROUTE548.fromField = "touchTime"
ROUTE548.toNode = "Choice27"
ROUTE548.toField = "touchTime"

Group6.children.append(ROUTE548)
ROUTE549 = x3d.ROUTE()
ROUTE549.fromNode = "Choice27"
ROUTE549.fromField = "choice"
ROUTE549.toNode = "SceneSwitcher"
ROUTE549.toField = "whichChoice"

Group6.children.append(ROUTE549)
Transform550 = x3d.Transform()
Transform550.translation = [48,-20.6,0]
TouchSensor551 = x3d.TouchSensor()
TouchSensor551.description = "TSJinUpperLipRaiser"
TouchSensor551.DEF = "JinUpperLipRaiser_Sensor"

Transform550.children.append(TouchSensor551)
Shape552 = x3d.Shape()
Appearance553 = x3d.Appearance()
Material554 = x3d.Material()
Material554.diffuseColor = [1,1,1]

Appearance553.material = Material554

Shape552.appearance = Appearance553
Text555 = x3d.Text()
Text555.string = ["JinUpperLipRaiser"]
FontStyle556 = x3d.FontStyle()
FontStyle556.size = 2.4
FontStyle556.spacing = 1.2
FontStyle556.justify = ["MIDDLE","MIDDLE"]

Text555.fontStyle = FontStyle556

Shape552.geometry = Text555

Transform550.children.append(Shape552)
Shape557 = x3d.Shape()
Appearance558 = x3d.Appearance()
Material559 = x3d.Material()
Material559.diffuseColor = [0,0,1]

Appearance558.material = Material559

Shape557.appearance = Appearance558
IndexedFaceSet560 = x3d.IndexedFaceSet()
IndexedFaceSet560.coordIndex = [0,1,2,3,-1]
Coordinate561 = x3d.Coordinate()
Coordinate561.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet560.coord = Coordinate561

Shape557.geometry = IndexedFaceSet560

Transform550.children.append(Shape557)

Group6.children.append(Transform550)
ROUTE562 = x3d.ROUTE()
ROUTE562.fromNode = "JinUpperLipRaiser_Sensor"
ROUTE562.fromField = "touchTime"
ROUTE562.toNode = "Choice28"
ROUTE562.toField = "touchTime"

Group6.children.append(ROUTE562)
ROUTE563 = x3d.ROUTE()
ROUTE563.fromNode = "Choice28"
ROUTE563.fromField = "choice"
ROUTE563.toNode = "SceneSwitcher"
ROUTE563.toField = "whichChoice"

Group6.children.append(ROUTE563)
Transform564 = x3d.Transform()
Transform564.translation = [48,-23.599999999999994,0]
TouchSensor565 = x3d.TouchSensor()
TouchSensor565.description = "TSJinWink"
TouchSensor565.DEF = "JinWink_Sensor"

Transform564.children.append(TouchSensor565)
Shape566 = x3d.Shape()
Appearance567 = x3d.Appearance()
Material568 = x3d.Material()
Material568.diffuseColor = [1,1,1]

Appearance567.material = Material568

Shape566.appearance = Appearance567
Text569 = x3d.Text()
Text569.string = ["JinWink"]
FontStyle570 = x3d.FontStyle()
FontStyle570.size = 2.4
FontStyle570.spacing = 1.2
FontStyle570.justify = ["MIDDLE","MIDDLE"]

Text569.fontStyle = FontStyle570

Shape566.geometry = Text569

Transform564.children.append(Shape566)
Shape571 = x3d.Shape()
Appearance572 = x3d.Appearance()
Material573 = x3d.Material()
Material573.diffuseColor = [0,0,1]

Appearance572.material = Material573

Shape571.appearance = Appearance572
IndexedFaceSet574 = x3d.IndexedFaceSet()
IndexedFaceSet574.coordIndex = [0,1,2,3,-1]
Coordinate575 = x3d.Coordinate()
Coordinate575.point = [(20, 1.3833333333333333, -0.1),(-20, 1.3833333333333333, -0.1),(-20, -1.616666666666667, -0.1),(20, -1.616666666666667, -0.1)]

IndexedFaceSet574.coord = Coordinate575

Shape571.geometry = IndexedFaceSet574

Transform564.children.append(Shape571)

Group6.children.append(Transform564)
ROUTE576 = x3d.ROUTE()
ROUTE576.fromNode = "JinWink_Sensor"
ROUTE576.fromField = "touchTime"
ROUTE576.toNode = "Choice29"
ROUTE576.toField = "touchTime"

Group6.children.append(ROUTE576)
ROUTE577 = x3d.ROUTE()
ROUTE577.fromNode = "Choice29"
ROUTE577.fromField = "choice"
ROUTE577.toNode = "SceneSwitcher"
ROUTE577.toField = "whichChoice"

Group6.children.append(ROUTE577)

Scene4.children.append(Group6)

X3D0.Scene = Scene4
f = open("../data/MenuJin.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/MenuJin.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/MenuJin.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
