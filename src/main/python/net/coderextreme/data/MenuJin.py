print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "Menu.x3d"

head1.children.append(meta2)

X3D0.head = head1
Scene3 = x3d.Scene()
Viewpoint4 = x3d.Viewpoint()
Viewpoint4.position = [0,20,110]

Scene3.children.append(Viewpoint4)
Group5 = x3d.Group()
Switch6 = x3d.Switch(DEF="SceneSwitcher")
Switch6.whichChoice = 0
Group7 = x3d.Group()
Script8 = x3d.Script(DEF="Choice0")
field9 = x3d.field()
field9.accessType = "inputOnly"
field9.type = "SFTime"
field9.name = "touchTime"

Script8.field.append(field9)
field10 = x3d.field()
field10.accessType = "outputOnly"
field10.type = "SFInt32"
field10.name = "choice"

Script8.field.append(field10)

Script8.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 0;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 0;\n"+
"      }'''

Group7.children.append(Script8)
Inline11 = x3d.Inline(DEF="JinBlink")
Inline11.url = ["../resources/JinBlink.x3d","JinBlink.x3d"]

Group7.children.append(Inline11)

Switch6.children.append(Group7)
Group12 = x3d.Group()
Script13 = x3d.Script(DEF="Choice1")
field14 = x3d.field()
field14.accessType = "inputOnly"
field14.type = "SFTime"
field14.name = "touchTime"

Script13.field.append(field14)
field15 = x3d.field()
field15.accessType = "outputOnly"
field15.type = "SFInt32"
field15.name = "choice"

Script13.field.append(field15)

Script13.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 1;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 1;\n"+
"      }'''

Group12.children.append(Script13)
Inline16 = x3d.Inline(DEF="JinBrowLowerer")
Inline16.url = ["../resources/JinBrowLowerer.x3d","JinBrowLowerer.x3d"]

Group12.children.append(Inline16)

Switch6.children.append(Group12)
Group17 = x3d.Group()
Script18 = x3d.Script(DEF="Choice2")
field19 = x3d.field()
field19.accessType = "inputOnly"
field19.type = "SFTime"
field19.name = "touchTime"

Script18.field.append(field19)
field20 = x3d.field()
field20.accessType = "outputOnly"
field20.type = "SFInt32"
field20.name = "choice"

Script18.field.append(field20)

Script18.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 2;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 2;\n"+
"      }'''

Group17.children.append(Script18)
Inline21 = x3d.Inline(DEF="JinCheekPuffer")
Inline21.url = ["../resources/JinCheekPuffer.x3d","JinCheekPuffer.x3d"]

Group17.children.append(Inline21)

Switch6.children.append(Group17)
Group22 = x3d.Group()
Script23 = x3d.Script(DEF="Choice3")
field24 = x3d.field()
field24.accessType = "inputOnly"
field24.type = "SFTime"
field24.name = "touchTime"

Script23.field.append(field24)
field25 = x3d.field()
field25.accessType = "outputOnly"
field25.type = "SFInt32"
field25.name = "choice"

Script23.field.append(field25)

Script23.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 3;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 3;\n"+
"      }'''

Group22.children.append(Script23)
Inline26 = x3d.Inline(DEF="JinCheekRaiser")
Inline26.url = ["../resources/JinCheekRaiser.x3d","JinCheekRaiser.x3d"]

Group22.children.append(Inline26)

Switch6.children.append(Group22)
Group27 = x3d.Group()
Script28 = x3d.Script(DEF="Choice4")
field29 = x3d.field()
field29.accessType = "inputOnly"
field29.type = "SFTime"
field29.name = "touchTime"

Script28.field.append(field29)
field30 = x3d.field()
field30.accessType = "outputOnly"
field30.type = "SFInt32"
field30.name = "choice"

Script28.field.append(field30)

Script28.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 4;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 4;\n"+
"      }'''

Group27.children.append(Script28)
Inline31 = x3d.Inline(DEF="JinChinRaiser")
Inline31.url = ["../resources/JinChinRaiser.x3d","JinChinRaiser.x3d"]

Group27.children.append(Inline31)

Switch6.children.append(Group27)
Group32 = x3d.Group()
Script33 = x3d.Script(DEF="Choice5")
field34 = x3d.field()
field34.accessType = "inputOnly"
field34.type = "SFTime"
field34.name = "touchTime"

Script33.field.append(field34)
field35 = x3d.field()
field35.accessType = "outputOnly"
field35.type = "SFInt32"
field35.name = "choice"

Script33.field.append(field35)

Script33.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 5;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 5;\n"+
"      }'''

Group32.children.append(Script33)
Inline36 = x3d.Inline(DEF="JinDimpler")
Inline36.url = ["../resources/JinDimpler.x3d","JinDimpler.x3d"]

Group32.children.append(Inline36)

Switch6.children.append(Group32)
Group37 = x3d.Group()
Script38 = x3d.Script(DEF="Choice6")
field39 = x3d.field()
field39.accessType = "inputOnly"
field39.type = "SFTime"
field39.name = "touchTime"

Script38.field.append(field39)
field40 = x3d.field()
field40.accessType = "outputOnly"
field40.type = "SFInt32"
field40.name = "choice"

Script38.field.append(field40)

Script38.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 6;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 6;\n"+
"      }'''

Group37.children.append(Script38)
Inline41 = x3d.Inline(DEF="JinEyesClosed")
Inline41.url = ["../resources/JinEyesClosed.x3d","JinEyesClosed.x3d"]

Group37.children.append(Inline41)

Switch6.children.append(Group37)
Group42 = x3d.Group()
Script43 = x3d.Script(DEF="Choice7")
field44 = x3d.field()
field44.accessType = "inputOnly"
field44.type = "SFTime"
field44.name = "touchTime"

Script43.field.append(field44)
field45 = x3d.field()
field45.accessType = "outputOnly"
field45.type = "SFInt32"
field45.name = "choice"

Script43.field.append(field45)

Script43.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 7;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 7;\n"+
"      }'''

Group42.children.append(Script43)
Inline46 = x3d.Inline(DEF="JinInnerBrowRaiser")
Inline46.url = ["../resources/JinInnerBrowRaiser.x3d","JinInnerBrowRaiser.x3d"]

Group42.children.append(Inline46)

Switch6.children.append(Group42)
Group47 = x3d.Group()
Script48 = x3d.Script(DEF="Choice8")
field49 = x3d.field()
field49.accessType = "inputOnly"
field49.type = "SFTime"
field49.name = "touchTime"

Script48.field.append(field49)
field50 = x3d.field()
field50.accessType = "outputOnly"
field50.type = "SFInt32"
field50.name = "choice"

Script48.field.append(field50)

Script48.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 8;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 8;\n"+
"      }'''

Group47.children.append(Script48)
Inline51 = x3d.Inline(DEF="JinJawDrop")
Inline51.url = ["../resources/JinJawDrop.x3d","JinJawDrop.x3d"]

Group47.children.append(Inline51)

Switch6.children.append(Group47)
Group52 = x3d.Group()
Script53 = x3d.Script(DEF="Choice9")
field54 = x3d.field()
field54.accessType = "inputOnly"
field54.type = "SFTime"
field54.name = "touchTime"

Script53.field.append(field54)
field55 = x3d.field()
field55.accessType = "outputOnly"
field55.type = "SFInt32"
field55.name = "choice"

Script53.field.append(field55)

Script53.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 9;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 9;\n"+
"      }'''

Group52.children.append(Script53)
Inline56 = x3d.Inline(DEF="JinLidDroop")
Inline56.url = ["../resources/JinLidDroop.x3d","JinLidDroop.x3d"]

Group52.children.append(Inline56)

Switch6.children.append(Group52)
Group57 = x3d.Group()
Script58 = x3d.Script(DEF="Choice10")
field59 = x3d.field()
field59.accessType = "inputOnly"
field59.type = "SFTime"
field59.name = "touchTime"

Script58.field.append(field59)
field60 = x3d.field()
field60.accessType = "outputOnly"
field60.type = "SFInt32"
field60.name = "choice"

Script58.field.append(field60)

Script58.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 10;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 10;\n"+
"      }'''

Group57.children.append(Script58)
Inline61 = x3d.Inline(DEF="JinLidTightener")
Inline61.url = ["../resources/JinLidTightener.x3d","JinLidTightener.x3d"]

Group57.children.append(Inline61)

Switch6.children.append(Group57)
Group62 = x3d.Group()
Script63 = x3d.Script(DEF="Choice11")
field64 = x3d.field()
field64.accessType = "inputOnly"
field64.type = "SFTime"
field64.name = "touchTime"

Script63.field.append(field64)
field65 = x3d.field()
field65.accessType = "outputOnly"
field65.type = "SFInt32"
field65.name = "choice"

Script63.field.append(field65)

Script63.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 11;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 11;\n"+
"      }'''

Group62.children.append(Script63)
Inline66 = x3d.Inline(DEF="JinLipCornerDepressor")
Inline66.url = ["../resources/JinLipCornerDepressor.x3d","JinLipCornerDepressor.x3d"]

Group62.children.append(Inline66)

Switch6.children.append(Group62)
Group67 = x3d.Group()
Script68 = x3d.Script(DEF="Choice12")
field69 = x3d.field()
field69.accessType = "inputOnly"
field69.type = "SFTime"
field69.name = "touchTime"

Script68.field.append(field69)
field70 = x3d.field()
field70.accessType = "outputOnly"
field70.type = "SFInt32"
field70.name = "choice"

Script68.field.append(field70)

Script68.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 12;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 12;\n"+
"      }'''

Group67.children.append(Script68)
Inline71 = x3d.Inline(DEF="JinLipCornerPuller")
Inline71.url = ["../resources/JinLipCornerPuller.x3d","JinLipCornerPuller.x3d"]

Group67.children.append(Inline71)

Switch6.children.append(Group67)
Group72 = x3d.Group()
Script73 = x3d.Script(DEF="Choice13")
field74 = x3d.field()
field74.accessType = "inputOnly"
field74.type = "SFTime"
field74.name = "touchTime"

Script73.field.append(field74)
field75 = x3d.field()
field75.accessType = "outputOnly"
field75.type = "SFInt32"
field75.name = "choice"

Script73.field.append(field75)

Script73.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 13;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 13;\n"+
"      }'''

Group72.children.append(Script73)
Inline76 = x3d.Inline(DEF="JinLipFunneler")
Inline76.url = ["../resources/JinLipFunneler.x3d","JinLipFunneler.x3d"]

Group72.children.append(Inline76)

Switch6.children.append(Group72)
Group77 = x3d.Group()
Script78 = x3d.Script(DEF="Choice14")
field79 = x3d.field()
field79.accessType = "inputOnly"
field79.type = "SFTime"
field79.name = "touchTime"

Script78.field.append(field79)
field80 = x3d.field()
field80.accessType = "outputOnly"
field80.type = "SFInt32"
field80.name = "choice"

Script78.field.append(field80)

Script78.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 14;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 14;\n"+
"      }'''

Group77.children.append(Script78)
Inline81 = x3d.Inline(DEF="JinLipPressor")
Inline81.url = ["../resources/JinLipPressor.x3d","JinLipPressor.x3d"]

Group77.children.append(Inline81)

Switch6.children.append(Group77)
Group82 = x3d.Group()
Script83 = x3d.Script(DEF="Choice15")
field84 = x3d.field()
field84.accessType = "inputOnly"
field84.type = "SFTime"
field84.name = "touchTime"

Script83.field.append(field84)
field85 = x3d.field()
field85.accessType = "outputOnly"
field85.type = "SFInt32"
field85.name = "choice"

Script83.field.append(field85)

Script83.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 15;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 15;\n"+
"      }'''

Group82.children.append(Script83)
Inline86 = x3d.Inline(DEF="JinLipPuckerer")
Inline86.url = ["../resources/JinLipPuckerer.x3d","JinLipPuckerer.x3d"]

Group82.children.append(Inline86)

Switch6.children.append(Group82)
Group87 = x3d.Group()
Script88 = x3d.Script(DEF="Choice16")
field89 = x3d.field()
field89.accessType = "inputOnly"
field89.type = "SFTime"
field89.name = "touchTime"

Script88.field.append(field89)
field90 = x3d.field()
field90.accessType = "outputOnly"
field90.type = "SFInt32"
field90.name = "choice"

Script88.field.append(field90)

Script88.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 16;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 16;\n"+
"      }'''

Group87.children.append(Script88)
Inline91 = x3d.Inline(DEF="JinLipsPart")
Inline91.url = ["../resources/JinLipsPart.x3d","JinLipsPart.x3d"]

Group87.children.append(Inline91)

Switch6.children.append(Group87)
Group92 = x3d.Group()
Script93 = x3d.Script(DEF="Choice17")
field94 = x3d.field()
field94.accessType = "inputOnly"
field94.type = "SFTime"
field94.name = "touchTime"

Script93.field.append(field94)
field95 = x3d.field()
field95.accessType = "outputOnly"
field95.type = "SFInt32"
field95.name = "choice"

Script93.field.append(field95)

Script93.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 17;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 17;\n"+
"      }'''

Group92.children.append(Script93)
Inline96 = x3d.Inline(DEF="JinLipStretcher")
Inline96.url = ["../resources/JinLipStretcher.x3d","JinLipStretcher.x3d"]

Group92.children.append(Inline96)

Switch6.children.append(Group92)
Group97 = x3d.Group()
Script98 = x3d.Script(DEF="Choice18")
field99 = x3d.field()
field99.accessType = "inputOnly"
field99.type = "SFTime"
field99.name = "touchTime"

Script98.field.append(field99)
field100 = x3d.field()
field100.accessType = "outputOnly"
field100.type = "SFInt32"
field100.name = "choice"

Script98.field.append(field100)

Script98.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 18;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 18;\n"+
"      }'''

Group97.children.append(Script98)
Inline101 = x3d.Inline(DEF="JinLipSuck")
Inline101.url = ["../resources/JinLipSuck.x3d","JinLipSuck.x3d"]

Group97.children.append(Inline101)

Switch6.children.append(Group97)
Group102 = x3d.Group()
Script103 = x3d.Script(DEF="Choice19")
field104 = x3d.field()
field104.accessType = "inputOnly"
field104.type = "SFTime"
field104.name = "touchTime"

Script103.field.append(field104)
field105 = x3d.field()
field105.accessType = "outputOnly"
field105.type = "SFInt32"
field105.name = "choice"

Script103.field.append(field105)

Script103.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 19;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 19;\n"+
"      }'''

Group102.children.append(Script103)
Inline106 = x3d.Inline(DEF="JinLipTightener")
Inline106.url = ["../resources/JinLipTightener.x3d","JinLipTightener.x3d"]

Group102.children.append(Inline106)

Switch6.children.append(Group102)
Group107 = x3d.Group()
Script108 = x3d.Script(DEF="Choice20")
field109 = x3d.field()
field109.accessType = "inputOnly"
field109.type = "SFTime"
field109.name = "touchTime"

Script108.field.append(field109)
field110 = x3d.field()
field110.accessType = "outputOnly"
field110.type = "SFInt32"
field110.name = "choice"

Script108.field.append(field110)

Script108.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 20;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 20;\n"+
"      }'''

Group107.children.append(Script108)
Inline111 = x3d.Inline(DEF="JinLowerLipDepressor")
Inline111.url = ["../resources/JinLowerLipDepressor.x3d","JinLowerLipDepressor.x3d"]

Group107.children.append(Inline111)

Switch6.children.append(Group107)
Group112 = x3d.Group()
Script113 = x3d.Script(DEF="Choice21")
field114 = x3d.field()
field114.accessType = "inputOnly"
field114.type = "SFTime"
field114.name = "touchTime"

Script113.field.append(field114)
field115 = x3d.field()
field115.accessType = "outputOnly"
field115.type = "SFInt32"
field115.name = "choice"

Script113.field.append(field115)

Script113.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 21;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 21;\n"+
"      }'''

Group112.children.append(Script113)
Inline116 = x3d.Inline(DEF="JinMouthStretch")
Inline116.url = ["../resources/JinMouthStretch.x3d","JinMouthStretch.x3d"]

Group112.children.append(Inline116)

Switch6.children.append(Group112)
Group117 = x3d.Group()
Script118 = x3d.Script(DEF="Choice22")
field119 = x3d.field()
field119.accessType = "inputOnly"
field119.type = "SFTime"
field119.name = "touchTime"

Script118.field.append(field119)
field120 = x3d.field()
field120.accessType = "outputOnly"
field120.type = "SFInt32"
field120.name = "choice"

Script118.field.append(field120)

Script118.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 22;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 22;\n"+
"      }'''

Group117.children.append(Script118)
Inline121 = x3d.Inline(DEF="JinNasolabialDeepener")
Inline121.url = ["../resources/JinNasolabialDeepener.x3d","JinNasolabialDeepener.x3d"]

Group117.children.append(Inline121)

Switch6.children.append(Group117)
Group122 = x3d.Group()
Script123 = x3d.Script(DEF="Choice23")
field124 = x3d.field()
field124.accessType = "inputOnly"
field124.type = "SFTime"
field124.name = "touchTime"

Script123.field.append(field124)
field125 = x3d.field()
field125.accessType = "outputOnly"
field125.type = "SFInt32"
field125.name = "choice"

Script123.field.append(field125)

Script123.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 23;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 23;\n"+
"      }'''

Group122.children.append(Script123)
Inline126 = x3d.Inline(DEF="JinNoseWrinkler")
Inline126.url = ["../resources/JinNoseWrinkler.x3d","JinNoseWrinkler.x3d"]

Group122.children.append(Inline126)

Switch6.children.append(Group122)
Group127 = x3d.Group()
Script128 = x3d.Script(DEF="Choice24")
field129 = x3d.field()
field129.accessType = "inputOnly"
field129.type = "SFTime"
field129.name = "touchTime"

Script128.field.append(field129)
field130 = x3d.field()
field130.accessType = "outputOnly"
field130.type = "SFInt32"
field130.name = "choice"

Script128.field.append(field130)

Script128.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 24;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 24;\n"+
"      }'''

Group127.children.append(Script128)
Inline131 = x3d.Inline(DEF="JinOuterBrowRaiser")
Inline131.url = ["../resources/JinOuterBrowRaiser.x3d","JinOuterBrowRaiser.x3d"]

Group127.children.append(Inline131)

Switch6.children.append(Group127)
Group132 = x3d.Group()
Script133 = x3d.Script(DEF="Choice25")
field134 = x3d.field()
field134.accessType = "inputOnly"
field134.type = "SFTime"
field134.name = "touchTime"

Script133.field.append(field134)
field135 = x3d.field()
field135.accessType = "outputOnly"
field135.type = "SFInt32"
field135.name = "choice"

Script133.field.append(field135)

Script133.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 25;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 25;\n"+
"      }'''

Group132.children.append(Script133)
Inline136 = x3d.Inline(DEF="JinSlit")
Inline136.url = ["../resources/JinSlit.x3d","JinSlit.x3d"]

Group132.children.append(Inline136)

Switch6.children.append(Group132)
Group137 = x3d.Group()
Script138 = x3d.Script(DEF="Choice26")
field139 = x3d.field()
field139.accessType = "inputOnly"
field139.type = "SFTime"
field139.name = "touchTime"

Script138.field.append(field139)
field140 = x3d.field()
field140.accessType = "outputOnly"
field140.type = "SFInt32"
field140.name = "choice"

Script138.field.append(field140)

Script138.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 26;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 26;\n"+
"      }'''

Group137.children.append(Script138)
Inline141 = x3d.Inline(DEF="JinSquint")
Inline141.url = ["../resources/JinSquint.x3d","JinSquint.x3d"]

Group137.children.append(Inline141)

Switch6.children.append(Group137)
Group142 = x3d.Group()
Script143 = x3d.Script(DEF="Choice27")
field144 = x3d.field()
field144.accessType = "inputOnly"
field144.type = "SFTime"
field144.name = "touchTime"

Script143.field.append(field144)
field145 = x3d.field()
field145.accessType = "outputOnly"
field145.type = "SFInt32"
field145.name = "choice"

Script143.field.append(field145)

Script143.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 27;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 27;\n"+
"      }'''

Group142.children.append(Script143)
Inline146 = x3d.Inline(DEF="JinUpperLidRaiser")
Inline146.url = ["../resources/JinUpperLidRaiser.x3d","JinUpperLidRaiser.x3d"]

Group142.children.append(Inline146)

Switch6.children.append(Group142)
Group147 = x3d.Group()
Script148 = x3d.Script(DEF="Choice28")
field149 = x3d.field()
field149.accessType = "inputOnly"
field149.type = "SFTime"
field149.name = "touchTime"

Script148.field.append(field149)
field150 = x3d.field()
field150.accessType = "outputOnly"
field150.type = "SFInt32"
field150.name = "choice"

Script148.field.append(field150)

Script148.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 28;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 28;\n"+
"      }'''

Group147.children.append(Script148)
Inline151 = x3d.Inline(DEF="JinUpperLipRaiser")
Inline151.url = ["../resources/JinUpperLipRaiser.x3d","JinUpperLipRaiser.x3d"]

Group147.children.append(Inline151)

Switch6.children.append(Group147)
Group152 = x3d.Group()
Script153 = x3d.Script(DEF="Choice29")
field154 = x3d.field()
field154.accessType = "inputOnly"
field154.type = "SFTime"
field154.name = "touchTime"

Script153.field.append(field154)
field155 = x3d.field()
field155.accessType = "outputOnly"
field155.type = "SFInt32"
field155.name = "choice"

Script153.field.append(field155)

Script153.sourceCode = '''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 29;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 29;\n"+
"      }'''

Group152.children.append(Script153)
Inline156 = x3d.Inline(DEF="JinWink")
Inline156.url = ["../resources/JinWink.x3d","JinWink.x3d"]

Group152.children.append(Inline156)

Switch6.children.append(Group152)

Group5.children.append(Switch6)
Transform157 = x3d.Transform()
Transform157.translation = [48,63.4,0]
TouchSensor158 = x3d.TouchSensor(DEF="JinBlink_Sensor")
TouchSensor158.description = "TSJinBlink"

Transform157.children.append(TouchSensor158)
Shape159 = x3d.Shape()
Appearance160 = x3d.Appearance()
Material161 = x3d.Material()
Material161.diffuseColor = [1,1,1]

Appearance160.material = Material161

Shape159.appearance = Appearance160
Text162 = x3d.Text()
Text162.string = ["JinBlink"]
FontStyle163 = x3d.FontStyle()
FontStyle163.size = 2.4
FontStyle163.spacing = 1.2
FontStyle163.justify = ["MIDDLE","MIDDLE"]

Text162.fontStyle = FontStyle163

Shape159.geometry = Text162

Transform157.children.append(Shape159)
Shape164 = x3d.Shape()
Appearance165 = x3d.Appearance()
Material166 = x3d.Material()
Material166.diffuseColor = [0,0,1]

Appearance165.material = Material166

Shape164.appearance = Appearance165
IndexedFaceSet167 = x3d.IndexedFaceSet()
IndexedFaceSet167.coordIndex = [0,1,2,3,-1]
Coordinate168 = x3d.Coordinate()
Coordinate168.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet167.coord = Coordinate168

Shape164.geometry = IndexedFaceSet167

Transform157.children.append(Shape164)

Group5.children.append(Transform157)
Transform169 = x3d.Transform()
Transform169.translation = [48,60.4,0]
TouchSensor170 = x3d.TouchSensor(DEF="JinBrowLowerer_Sensor")
TouchSensor170.description = "TSJinBrowLowerer"

Transform169.children.append(TouchSensor170)
Shape171 = x3d.Shape()
Appearance172 = x3d.Appearance()
Material173 = x3d.Material()
Material173.diffuseColor = [1,1,1]

Appearance172.material = Material173

Shape171.appearance = Appearance172
Text174 = x3d.Text()
Text174.string = ["JinBrowLowerer"]
FontStyle175 = x3d.FontStyle()
FontStyle175.size = 2.4
FontStyle175.spacing = 1.2
FontStyle175.justify = ["MIDDLE","MIDDLE"]

Text174.fontStyle = FontStyle175

Shape171.geometry = Text174

Transform169.children.append(Shape171)
Shape176 = x3d.Shape()
Appearance177 = x3d.Appearance()
Material178 = x3d.Material()
Material178.diffuseColor = [0,0,1]

Appearance177.material = Material178

Shape176.appearance = Appearance177
IndexedFaceSet179 = x3d.IndexedFaceSet()
IndexedFaceSet179.coordIndex = [0,1,2,3,-1]
Coordinate180 = x3d.Coordinate()
Coordinate180.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet179.coord = Coordinate180

Shape176.geometry = IndexedFaceSet179

Transform169.children.append(Shape176)

Group5.children.append(Transform169)
Transform181 = x3d.Transform()
Transform181.translation = [48,57.4,0]
TouchSensor182 = x3d.TouchSensor(DEF="JinCheekPuffer_Sensor")
TouchSensor182.description = "TSJinCheekPuffer"

Transform181.children.append(TouchSensor182)
Shape183 = x3d.Shape()
Appearance184 = x3d.Appearance()
Material185 = x3d.Material()
Material185.diffuseColor = [1,1,1]

Appearance184.material = Material185

Shape183.appearance = Appearance184
Text186 = x3d.Text()
Text186.string = ["JinCheekPuffer"]
FontStyle187 = x3d.FontStyle()
FontStyle187.size = 2.4
FontStyle187.spacing = 1.2
FontStyle187.justify = ["MIDDLE","MIDDLE"]

Text186.fontStyle = FontStyle187

Shape183.geometry = Text186

Transform181.children.append(Shape183)
Shape188 = x3d.Shape()
Appearance189 = x3d.Appearance()
Material190 = x3d.Material()
Material190.diffuseColor = [0,0,1]

Appearance189.material = Material190

Shape188.appearance = Appearance189
IndexedFaceSet191 = x3d.IndexedFaceSet()
IndexedFaceSet191.coordIndex = [0,1,2,3,-1]
Coordinate192 = x3d.Coordinate()
Coordinate192.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet191.coord = Coordinate192

Shape188.geometry = IndexedFaceSet191

Transform181.children.append(Shape188)

Group5.children.append(Transform181)
Transform193 = x3d.Transform()
Transform193.translation = [48,54.4,0]
TouchSensor194 = x3d.TouchSensor(DEF="JinCheekRaiser_Sensor")
TouchSensor194.description = "TSJinCheekRaiser"

Transform193.children.append(TouchSensor194)
Shape195 = x3d.Shape()
Appearance196 = x3d.Appearance()
Material197 = x3d.Material()
Material197.diffuseColor = [1,1,1]

Appearance196.material = Material197

Shape195.appearance = Appearance196
Text198 = x3d.Text()
Text198.string = ["JinCheekRaiser"]
FontStyle199 = x3d.FontStyle()
FontStyle199.size = 2.4
FontStyle199.spacing = 1.2
FontStyle199.justify = ["MIDDLE","MIDDLE"]

Text198.fontStyle = FontStyle199

Shape195.geometry = Text198

Transform193.children.append(Shape195)
Shape200 = x3d.Shape()
Appearance201 = x3d.Appearance()
Material202 = x3d.Material()
Material202.diffuseColor = [0,0,1]

Appearance201.material = Material202

Shape200.appearance = Appearance201
IndexedFaceSet203 = x3d.IndexedFaceSet()
IndexedFaceSet203.coordIndex = [0,1,2,3,-1]
Coordinate204 = x3d.Coordinate()
Coordinate204.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet203.coord = Coordinate204

Shape200.geometry = IndexedFaceSet203

Transform193.children.append(Shape200)

Group5.children.append(Transform193)
Transform205 = x3d.Transform()
Transform205.translation = [48,51.4,0]
TouchSensor206 = x3d.TouchSensor(DEF="JinChinRaiser_Sensor")
TouchSensor206.description = "TSJinChinRaiser"

Transform205.children.append(TouchSensor206)
Shape207 = x3d.Shape()
Appearance208 = x3d.Appearance()
Material209 = x3d.Material()
Material209.diffuseColor = [1,1,1]

Appearance208.material = Material209

Shape207.appearance = Appearance208
Text210 = x3d.Text()
Text210.string = ["JinChinRaiser"]
FontStyle211 = x3d.FontStyle()
FontStyle211.size = 2.4
FontStyle211.spacing = 1.2
FontStyle211.justify = ["MIDDLE","MIDDLE"]

Text210.fontStyle = FontStyle211

Shape207.geometry = Text210

Transform205.children.append(Shape207)
Shape212 = x3d.Shape()
Appearance213 = x3d.Appearance()
Material214 = x3d.Material()
Material214.diffuseColor = [0,0,1]

Appearance213.material = Material214

Shape212.appearance = Appearance213
IndexedFaceSet215 = x3d.IndexedFaceSet()
IndexedFaceSet215.coordIndex = [0,1,2,3,-1]
Coordinate216 = x3d.Coordinate()
Coordinate216.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet215.coord = Coordinate216

Shape212.geometry = IndexedFaceSet215

Transform205.children.append(Shape212)

Group5.children.append(Transform205)
Transform217 = x3d.Transform()
Transform217.translation = [48,48.4,0]
TouchSensor218 = x3d.TouchSensor(DEF="JinDimpler_Sensor")
TouchSensor218.description = "TSJinDimpler"

Transform217.children.append(TouchSensor218)
Shape219 = x3d.Shape()
Appearance220 = x3d.Appearance()
Material221 = x3d.Material()
Material221.diffuseColor = [1,1,1]

Appearance220.material = Material221

Shape219.appearance = Appearance220
Text222 = x3d.Text()
Text222.string = ["JinDimpler"]
FontStyle223 = x3d.FontStyle()
FontStyle223.size = 2.4
FontStyle223.spacing = 1.2
FontStyle223.justify = ["MIDDLE","MIDDLE"]

Text222.fontStyle = FontStyle223

Shape219.geometry = Text222

Transform217.children.append(Shape219)
Shape224 = x3d.Shape()
Appearance225 = x3d.Appearance()
Material226 = x3d.Material()
Material226.diffuseColor = [0,0,1]

Appearance225.material = Material226

Shape224.appearance = Appearance225
IndexedFaceSet227 = x3d.IndexedFaceSet()
IndexedFaceSet227.coordIndex = [0,1,2,3,-1]
Coordinate228 = x3d.Coordinate()
Coordinate228.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet227.coord = Coordinate228

Shape224.geometry = IndexedFaceSet227

Transform217.children.append(Shape224)

Group5.children.append(Transform217)
Transform229 = x3d.Transform()
Transform229.translation = [48,45.4,0]
TouchSensor230 = x3d.TouchSensor(DEF="JinEyesClosed_Sensor")
TouchSensor230.description = "TSJinEyesClosed"

Transform229.children.append(TouchSensor230)
Shape231 = x3d.Shape()
Appearance232 = x3d.Appearance()
Material233 = x3d.Material()
Material233.diffuseColor = [1,1,1]

Appearance232.material = Material233

Shape231.appearance = Appearance232
Text234 = x3d.Text()
Text234.string = ["JinEyesClosed"]
FontStyle235 = x3d.FontStyle()
FontStyle235.size = 2.4
FontStyle235.spacing = 1.2
FontStyle235.justify = ["MIDDLE","MIDDLE"]

Text234.fontStyle = FontStyle235

Shape231.geometry = Text234

Transform229.children.append(Shape231)
Shape236 = x3d.Shape()
Appearance237 = x3d.Appearance()
Material238 = x3d.Material()
Material238.diffuseColor = [0,0,1]

Appearance237.material = Material238

Shape236.appearance = Appearance237
IndexedFaceSet239 = x3d.IndexedFaceSet()
IndexedFaceSet239.coordIndex = [0,1,2,3,-1]
Coordinate240 = x3d.Coordinate()
Coordinate240.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet239.coord = Coordinate240

Shape236.geometry = IndexedFaceSet239

Transform229.children.append(Shape236)

Group5.children.append(Transform229)
Transform241 = x3d.Transform()
Transform241.translation = [48,42.4,0]
TouchSensor242 = x3d.TouchSensor(DEF="JinInnerBrowRaiser_Sensor")
TouchSensor242.description = "TSJinInnerBrowRaiser"

Transform241.children.append(TouchSensor242)
Shape243 = x3d.Shape()
Appearance244 = x3d.Appearance()
Material245 = x3d.Material()
Material245.diffuseColor = [1,1,1]

Appearance244.material = Material245

Shape243.appearance = Appearance244
Text246 = x3d.Text()
Text246.string = ["JinInnerBrowRaiser"]
FontStyle247 = x3d.FontStyle()
FontStyle247.size = 2.4
FontStyle247.spacing = 1.2
FontStyle247.justify = ["MIDDLE","MIDDLE"]

Text246.fontStyle = FontStyle247

Shape243.geometry = Text246

Transform241.children.append(Shape243)
Shape248 = x3d.Shape()
Appearance249 = x3d.Appearance()
Material250 = x3d.Material()
Material250.diffuseColor = [0,0,1]

Appearance249.material = Material250

Shape248.appearance = Appearance249
IndexedFaceSet251 = x3d.IndexedFaceSet()
IndexedFaceSet251.coordIndex = [0,1,2,3,-1]
Coordinate252 = x3d.Coordinate()
Coordinate252.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet251.coord = Coordinate252

Shape248.geometry = IndexedFaceSet251

Transform241.children.append(Shape248)

Group5.children.append(Transform241)
Transform253 = x3d.Transform()
Transform253.translation = [48,39.4,0]
TouchSensor254 = x3d.TouchSensor(DEF="JinJawDrop_Sensor")
TouchSensor254.description = "TSJinJawDrop"

Transform253.children.append(TouchSensor254)
Shape255 = x3d.Shape()
Appearance256 = x3d.Appearance()
Material257 = x3d.Material()
Material257.diffuseColor = [1,1,1]

Appearance256.material = Material257

Shape255.appearance = Appearance256
Text258 = x3d.Text()
Text258.string = ["JinJawDrop"]
FontStyle259 = x3d.FontStyle()
FontStyle259.size = 2.4
FontStyle259.spacing = 1.2
FontStyle259.justify = ["MIDDLE","MIDDLE"]

Text258.fontStyle = FontStyle259

Shape255.geometry = Text258

Transform253.children.append(Shape255)
Shape260 = x3d.Shape()
Appearance261 = x3d.Appearance()
Material262 = x3d.Material()
Material262.diffuseColor = [0,0,1]

Appearance261.material = Material262

Shape260.appearance = Appearance261
IndexedFaceSet263 = x3d.IndexedFaceSet()
IndexedFaceSet263.coordIndex = [0,1,2,3,-1]
Coordinate264 = x3d.Coordinate()
Coordinate264.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet263.coord = Coordinate264

Shape260.geometry = IndexedFaceSet263

Transform253.children.append(Shape260)

Group5.children.append(Transform253)
Transform265 = x3d.Transform()
Transform265.translation = [48,36.4,0]
TouchSensor266 = x3d.TouchSensor(DEF="JinLidDroop_Sensor")
TouchSensor266.description = "TSJinLidDroop"

Transform265.children.append(TouchSensor266)
Shape267 = x3d.Shape()
Appearance268 = x3d.Appearance()
Material269 = x3d.Material()
Material269.diffuseColor = [1,1,1]

Appearance268.material = Material269

Shape267.appearance = Appearance268
Text270 = x3d.Text()
Text270.string = ["JinLidDroop"]
FontStyle271 = x3d.FontStyle()
FontStyle271.size = 2.4
FontStyle271.spacing = 1.2
FontStyle271.justify = ["MIDDLE","MIDDLE"]

Text270.fontStyle = FontStyle271

Shape267.geometry = Text270

Transform265.children.append(Shape267)
Shape272 = x3d.Shape()
Appearance273 = x3d.Appearance()
Material274 = x3d.Material()
Material274.diffuseColor = [0,0,1]

Appearance273.material = Material274

Shape272.appearance = Appearance273
IndexedFaceSet275 = x3d.IndexedFaceSet()
IndexedFaceSet275.coordIndex = [0,1,2,3,-1]
Coordinate276 = x3d.Coordinate()
Coordinate276.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet275.coord = Coordinate276

Shape272.geometry = IndexedFaceSet275

Transform265.children.append(Shape272)

Group5.children.append(Transform265)
Transform277 = x3d.Transform()
Transform277.translation = [48,33.4,0]
TouchSensor278 = x3d.TouchSensor(DEF="JinLidTightener_Sensor")
TouchSensor278.description = "TSJinLidTightener"

Transform277.children.append(TouchSensor278)
Shape279 = x3d.Shape()
Appearance280 = x3d.Appearance()
Material281 = x3d.Material()
Material281.diffuseColor = [1,1,1]

Appearance280.material = Material281

Shape279.appearance = Appearance280
Text282 = x3d.Text()
Text282.string = ["JinLidTightener"]
FontStyle283 = x3d.FontStyle()
FontStyle283.size = 2.4
FontStyle283.spacing = 1.2
FontStyle283.justify = ["MIDDLE","MIDDLE"]

Text282.fontStyle = FontStyle283

Shape279.geometry = Text282

Transform277.children.append(Shape279)
Shape284 = x3d.Shape()
Appearance285 = x3d.Appearance()
Material286 = x3d.Material()
Material286.diffuseColor = [0,0,1]

Appearance285.material = Material286

Shape284.appearance = Appearance285
IndexedFaceSet287 = x3d.IndexedFaceSet()
IndexedFaceSet287.coordIndex = [0,1,2,3,-1]
Coordinate288 = x3d.Coordinate()
Coordinate288.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet287.coord = Coordinate288

Shape284.geometry = IndexedFaceSet287

Transform277.children.append(Shape284)

Group5.children.append(Transform277)
Transform289 = x3d.Transform()
Transform289.translation = [48,30.4,0]
TouchSensor290 = x3d.TouchSensor(DEF="JinLipCornerDepressor_Sensor")
TouchSensor290.description = "TSJinLipCornerDepressor"

Transform289.children.append(TouchSensor290)
Shape291 = x3d.Shape()
Appearance292 = x3d.Appearance()
Material293 = x3d.Material()
Material293.diffuseColor = [1,1,1]

Appearance292.material = Material293

Shape291.appearance = Appearance292
Text294 = x3d.Text()
Text294.string = ["JinLipCornerDepressor"]
FontStyle295 = x3d.FontStyle()
FontStyle295.size = 2.4
FontStyle295.spacing = 1.2
FontStyle295.justify = ["MIDDLE","MIDDLE"]

Text294.fontStyle = FontStyle295

Shape291.geometry = Text294

Transform289.children.append(Shape291)
Shape296 = x3d.Shape()
Appearance297 = x3d.Appearance()
Material298 = x3d.Material()
Material298.diffuseColor = [0,0,1]

Appearance297.material = Material298

Shape296.appearance = Appearance297
IndexedFaceSet299 = x3d.IndexedFaceSet()
IndexedFaceSet299.coordIndex = [0,1,2,3,-1]
Coordinate300 = x3d.Coordinate()
Coordinate300.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet299.coord = Coordinate300

Shape296.geometry = IndexedFaceSet299

Transform289.children.append(Shape296)

Group5.children.append(Transform289)
Transform301 = x3d.Transform()
Transform301.translation = [48,27.4,0]
TouchSensor302 = x3d.TouchSensor(DEF="JinLipCornerPuller_Sensor")
TouchSensor302.description = "TSJinLipCornerPuller"

Transform301.children.append(TouchSensor302)
Shape303 = x3d.Shape()
Appearance304 = x3d.Appearance()
Material305 = x3d.Material()
Material305.diffuseColor = [1,1,1]

Appearance304.material = Material305

Shape303.appearance = Appearance304
Text306 = x3d.Text()
Text306.string = ["JinLipCornerPuller"]
FontStyle307 = x3d.FontStyle()
FontStyle307.size = 2.4
FontStyle307.spacing = 1.2
FontStyle307.justify = ["MIDDLE","MIDDLE"]

Text306.fontStyle = FontStyle307

Shape303.geometry = Text306

Transform301.children.append(Shape303)
Shape308 = x3d.Shape()
Appearance309 = x3d.Appearance()
Material310 = x3d.Material()
Material310.diffuseColor = [0,0,1]

Appearance309.material = Material310

Shape308.appearance = Appearance309
IndexedFaceSet311 = x3d.IndexedFaceSet()
IndexedFaceSet311.coordIndex = [0,1,2,3,-1]
Coordinate312 = x3d.Coordinate()
Coordinate312.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet311.coord = Coordinate312

Shape308.geometry = IndexedFaceSet311

Transform301.children.append(Shape308)

Group5.children.append(Transform301)
Transform313 = x3d.Transform()
Transform313.translation = [48,24.4,0]
TouchSensor314 = x3d.TouchSensor(DEF="JinLipFunneler_Sensor")
TouchSensor314.description = "TSJinLipFunneler"

Transform313.children.append(TouchSensor314)
Shape315 = x3d.Shape()
Appearance316 = x3d.Appearance()
Material317 = x3d.Material()
Material317.diffuseColor = [1,1,1]

Appearance316.material = Material317

Shape315.appearance = Appearance316
Text318 = x3d.Text()
Text318.string = ["JinLipFunneler"]
FontStyle319 = x3d.FontStyle()
FontStyle319.size = 2.4
FontStyle319.spacing = 1.2
FontStyle319.justify = ["MIDDLE","MIDDLE"]

Text318.fontStyle = FontStyle319

Shape315.geometry = Text318

Transform313.children.append(Shape315)
Shape320 = x3d.Shape()
Appearance321 = x3d.Appearance()
Material322 = x3d.Material()
Material322.diffuseColor = [0,0,1]

Appearance321.material = Material322

Shape320.appearance = Appearance321
IndexedFaceSet323 = x3d.IndexedFaceSet()
IndexedFaceSet323.coordIndex = [0,1,2,3,-1]
Coordinate324 = x3d.Coordinate()
Coordinate324.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet323.coord = Coordinate324

Shape320.geometry = IndexedFaceSet323

Transform313.children.append(Shape320)

Group5.children.append(Transform313)
Transform325 = x3d.Transform()
Transform325.translation = [48,21.4,0]
TouchSensor326 = x3d.TouchSensor(DEF="JinLipPressor_Sensor")
TouchSensor326.description = "TSJinLipPressor"

Transform325.children.append(TouchSensor326)
Shape327 = x3d.Shape()
Appearance328 = x3d.Appearance()
Material329 = x3d.Material()
Material329.diffuseColor = [1,1,1]

Appearance328.material = Material329

Shape327.appearance = Appearance328
Text330 = x3d.Text()
Text330.string = ["JinLipPressor"]
FontStyle331 = x3d.FontStyle()
FontStyle331.size = 2.4
FontStyle331.spacing = 1.2
FontStyle331.justify = ["MIDDLE","MIDDLE"]

Text330.fontStyle = FontStyle331

Shape327.geometry = Text330

Transform325.children.append(Shape327)
Shape332 = x3d.Shape()
Appearance333 = x3d.Appearance()
Material334 = x3d.Material()
Material334.diffuseColor = [0,0,1]

Appearance333.material = Material334

Shape332.appearance = Appearance333
IndexedFaceSet335 = x3d.IndexedFaceSet()
IndexedFaceSet335.coordIndex = [0,1,2,3,-1]
Coordinate336 = x3d.Coordinate()
Coordinate336.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet335.coord = Coordinate336

Shape332.geometry = IndexedFaceSet335

Transform325.children.append(Shape332)

Group5.children.append(Transform325)
Transform337 = x3d.Transform()
Transform337.translation = [48,18.4,0]
TouchSensor338 = x3d.TouchSensor(DEF="JinLipPuckerer_Sensor")
TouchSensor338.description = "TSJinLipPuckerer"

Transform337.children.append(TouchSensor338)
Shape339 = x3d.Shape()
Appearance340 = x3d.Appearance()
Material341 = x3d.Material()
Material341.diffuseColor = [1,1,1]

Appearance340.material = Material341

Shape339.appearance = Appearance340
Text342 = x3d.Text()
Text342.string = ["JinLipPuckerer"]
FontStyle343 = x3d.FontStyle()
FontStyle343.size = 2.4
FontStyle343.spacing = 1.2
FontStyle343.justify = ["MIDDLE","MIDDLE"]

Text342.fontStyle = FontStyle343

Shape339.geometry = Text342

Transform337.children.append(Shape339)
Shape344 = x3d.Shape()
Appearance345 = x3d.Appearance()
Material346 = x3d.Material()
Material346.diffuseColor = [0,0,1]

Appearance345.material = Material346

Shape344.appearance = Appearance345
IndexedFaceSet347 = x3d.IndexedFaceSet()
IndexedFaceSet347.coordIndex = [0,1,2,3,-1]
Coordinate348 = x3d.Coordinate()
Coordinate348.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet347.coord = Coordinate348

Shape344.geometry = IndexedFaceSet347

Transform337.children.append(Shape344)

Group5.children.append(Transform337)
Transform349 = x3d.Transform()
Transform349.translation = [48,15.4,0]
TouchSensor350 = x3d.TouchSensor(DEF="JinLipsPart_Sensor")
TouchSensor350.description = "TSJinLipsPart"

Transform349.children.append(TouchSensor350)
Shape351 = x3d.Shape()
Appearance352 = x3d.Appearance()
Material353 = x3d.Material()
Material353.diffuseColor = [1,1,1]

Appearance352.material = Material353

Shape351.appearance = Appearance352
Text354 = x3d.Text()
Text354.string = ["JinLipsPart"]
FontStyle355 = x3d.FontStyle()
FontStyle355.size = 2.4
FontStyle355.spacing = 1.2
FontStyle355.justify = ["MIDDLE","MIDDLE"]

Text354.fontStyle = FontStyle355

Shape351.geometry = Text354

Transform349.children.append(Shape351)
Shape356 = x3d.Shape()
Appearance357 = x3d.Appearance()
Material358 = x3d.Material()
Material358.diffuseColor = [0,0,1]

Appearance357.material = Material358

Shape356.appearance = Appearance357
IndexedFaceSet359 = x3d.IndexedFaceSet()
IndexedFaceSet359.coordIndex = [0,1,2,3,-1]
Coordinate360 = x3d.Coordinate()
Coordinate360.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet359.coord = Coordinate360

Shape356.geometry = IndexedFaceSet359

Transform349.children.append(Shape356)

Group5.children.append(Transform349)
Transform361 = x3d.Transform()
Transform361.translation = [48,12.4,0]
TouchSensor362 = x3d.TouchSensor(DEF="JinLipStretcher_Sensor")
TouchSensor362.description = "TSJinLipStretcher"

Transform361.children.append(TouchSensor362)
Shape363 = x3d.Shape()
Appearance364 = x3d.Appearance()
Material365 = x3d.Material()
Material365.diffuseColor = [1,1,1]

Appearance364.material = Material365

Shape363.appearance = Appearance364
Text366 = x3d.Text()
Text366.string = ["JinLipStretcher"]
FontStyle367 = x3d.FontStyle()
FontStyle367.size = 2.4
FontStyle367.spacing = 1.2
FontStyle367.justify = ["MIDDLE","MIDDLE"]

Text366.fontStyle = FontStyle367

Shape363.geometry = Text366

Transform361.children.append(Shape363)
Shape368 = x3d.Shape()
Appearance369 = x3d.Appearance()
Material370 = x3d.Material()
Material370.diffuseColor = [0,0,1]

Appearance369.material = Material370

Shape368.appearance = Appearance369
IndexedFaceSet371 = x3d.IndexedFaceSet()
IndexedFaceSet371.coordIndex = [0,1,2,3,-1]
Coordinate372 = x3d.Coordinate()
Coordinate372.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet371.coord = Coordinate372

Shape368.geometry = IndexedFaceSet371

Transform361.children.append(Shape368)

Group5.children.append(Transform361)
Transform373 = x3d.Transform()
Transform373.translation = [48,9.4,0]
TouchSensor374 = x3d.TouchSensor(DEF="JinLipSuck_Sensor")
TouchSensor374.description = "TSJinLipSuck"

Transform373.children.append(TouchSensor374)
Shape375 = x3d.Shape()
Appearance376 = x3d.Appearance()
Material377 = x3d.Material()
Material377.diffuseColor = [1,1,1]

Appearance376.material = Material377

Shape375.appearance = Appearance376
Text378 = x3d.Text()
Text378.string = ["JinLipSuck"]
FontStyle379 = x3d.FontStyle()
FontStyle379.size = 2.4
FontStyle379.spacing = 1.2
FontStyle379.justify = ["MIDDLE","MIDDLE"]

Text378.fontStyle = FontStyle379

Shape375.geometry = Text378

Transform373.children.append(Shape375)
Shape380 = x3d.Shape()
Appearance381 = x3d.Appearance()
Material382 = x3d.Material()
Material382.diffuseColor = [0,0,1]

Appearance381.material = Material382

Shape380.appearance = Appearance381
IndexedFaceSet383 = x3d.IndexedFaceSet()
IndexedFaceSet383.coordIndex = [0,1,2,3,-1]
Coordinate384 = x3d.Coordinate()
Coordinate384.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet383.coord = Coordinate384

Shape380.geometry = IndexedFaceSet383

Transform373.children.append(Shape380)

Group5.children.append(Transform373)
Transform385 = x3d.Transform()
Transform385.translation = [48,6.4,0]
TouchSensor386 = x3d.TouchSensor(DEF="JinLipTightener_Sensor")
TouchSensor386.description = "TSJinLipTightener"

Transform385.children.append(TouchSensor386)
Shape387 = x3d.Shape()
Appearance388 = x3d.Appearance()
Material389 = x3d.Material()
Material389.diffuseColor = [1,1,1]

Appearance388.material = Material389

Shape387.appearance = Appearance388
Text390 = x3d.Text()
Text390.string = ["JinLipTightener"]
FontStyle391 = x3d.FontStyle()
FontStyle391.size = 2.4
FontStyle391.spacing = 1.2
FontStyle391.justify = ["MIDDLE","MIDDLE"]

Text390.fontStyle = FontStyle391

Shape387.geometry = Text390

Transform385.children.append(Shape387)
Shape392 = x3d.Shape()
Appearance393 = x3d.Appearance()
Material394 = x3d.Material()
Material394.diffuseColor = [0,0,1]

Appearance393.material = Material394

Shape392.appearance = Appearance393
IndexedFaceSet395 = x3d.IndexedFaceSet()
IndexedFaceSet395.coordIndex = [0,1,2,3,-1]
Coordinate396 = x3d.Coordinate()
Coordinate396.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet395.coord = Coordinate396

Shape392.geometry = IndexedFaceSet395

Transform385.children.append(Shape392)

Group5.children.append(Transform385)
Transform397 = x3d.Transform()
Transform397.translation = [48,3.4,0]
TouchSensor398 = x3d.TouchSensor(DEF="JinLowerLipDepressor_Sensor")
TouchSensor398.description = "TSJinLowerLipDepressor"

Transform397.children.append(TouchSensor398)
Shape399 = x3d.Shape()
Appearance400 = x3d.Appearance()
Material401 = x3d.Material()
Material401.diffuseColor = [1,1,1]

Appearance400.material = Material401

Shape399.appearance = Appearance400
Text402 = x3d.Text()
Text402.string = ["JinLowerLipDepressor"]
FontStyle403 = x3d.FontStyle()
FontStyle403.size = 2.4
FontStyle403.spacing = 1.2
FontStyle403.justify = ["MIDDLE","MIDDLE"]

Text402.fontStyle = FontStyle403

Shape399.geometry = Text402

Transform397.children.append(Shape399)
Shape404 = x3d.Shape()
Appearance405 = x3d.Appearance()
Material406 = x3d.Material()
Material406.diffuseColor = [0,0,1]

Appearance405.material = Material406

Shape404.appearance = Appearance405
IndexedFaceSet407 = x3d.IndexedFaceSet()
IndexedFaceSet407.coordIndex = [0,1,2,3,-1]
Coordinate408 = x3d.Coordinate()
Coordinate408.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet407.coord = Coordinate408

Shape404.geometry = IndexedFaceSet407

Transform397.children.append(Shape404)

Group5.children.append(Transform397)
Transform409 = x3d.Transform()
Transform409.translation = [48,0.4,0]
TouchSensor410 = x3d.TouchSensor(DEF="JinMouthStretch_Sensor")
TouchSensor410.description = "TSJinMouthStretch"

Transform409.children.append(TouchSensor410)
Shape411 = x3d.Shape()
Appearance412 = x3d.Appearance()
Material413 = x3d.Material()
Material413.diffuseColor = [1,1,1]

Appearance412.material = Material413

Shape411.appearance = Appearance412
Text414 = x3d.Text()
Text414.string = ["JinMouthStretch"]
FontStyle415 = x3d.FontStyle()
FontStyle415.size = 2.4
FontStyle415.spacing = 1.2
FontStyle415.justify = ["MIDDLE","MIDDLE"]

Text414.fontStyle = FontStyle415

Shape411.geometry = Text414

Transform409.children.append(Shape411)
Shape416 = x3d.Shape()
Appearance417 = x3d.Appearance()
Material418 = x3d.Material()
Material418.diffuseColor = [0,0,1]

Appearance417.material = Material418

Shape416.appearance = Appearance417
IndexedFaceSet419 = x3d.IndexedFaceSet()
IndexedFaceSet419.coordIndex = [0,1,2,3,-1]
Coordinate420 = x3d.Coordinate()
Coordinate420.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet419.coord = Coordinate420

Shape416.geometry = IndexedFaceSet419

Transform409.children.append(Shape416)

Group5.children.append(Transform409)
Transform421 = x3d.Transform()
Transform421.translation = [48,-2.6,0]
TouchSensor422 = x3d.TouchSensor(DEF="JinNasolabialDeepener_Sensor")
TouchSensor422.description = "TSJinNasolabialDeepener"

Transform421.children.append(TouchSensor422)
Shape423 = x3d.Shape()
Appearance424 = x3d.Appearance()
Material425 = x3d.Material()
Material425.diffuseColor = [1,1,1]

Appearance424.material = Material425

Shape423.appearance = Appearance424
Text426 = x3d.Text()
Text426.string = ["JinNasolabialDeepener"]
FontStyle427 = x3d.FontStyle()
FontStyle427.size = 2.4
FontStyle427.spacing = 1.2
FontStyle427.justify = ["MIDDLE","MIDDLE"]

Text426.fontStyle = FontStyle427

Shape423.geometry = Text426

Transform421.children.append(Shape423)
Shape428 = x3d.Shape()
Appearance429 = x3d.Appearance()
Material430 = x3d.Material()
Material430.diffuseColor = [0,0,1]

Appearance429.material = Material430

Shape428.appearance = Appearance429
IndexedFaceSet431 = x3d.IndexedFaceSet()
IndexedFaceSet431.coordIndex = [0,1,2,3,-1]
Coordinate432 = x3d.Coordinate()
Coordinate432.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet431.coord = Coordinate432

Shape428.geometry = IndexedFaceSet431

Transform421.children.append(Shape428)

Group5.children.append(Transform421)
Transform433 = x3d.Transform()
Transform433.translation = [48,-5.6,0]
TouchSensor434 = x3d.TouchSensor(DEF="JinNoseWrinkler_Sensor")
TouchSensor434.description = "TSJinNoseWrinkler"

Transform433.children.append(TouchSensor434)
Shape435 = x3d.Shape()
Appearance436 = x3d.Appearance()
Material437 = x3d.Material()
Material437.diffuseColor = [1,1,1]

Appearance436.material = Material437

Shape435.appearance = Appearance436
Text438 = x3d.Text()
Text438.string = ["JinNoseWrinkler"]
FontStyle439 = x3d.FontStyle()
FontStyle439.size = 2.4
FontStyle439.spacing = 1.2
FontStyle439.justify = ["MIDDLE","MIDDLE"]

Text438.fontStyle = FontStyle439

Shape435.geometry = Text438

Transform433.children.append(Shape435)
Shape440 = x3d.Shape()
Appearance441 = x3d.Appearance()
Material442 = x3d.Material()
Material442.diffuseColor = [0,0,1]

Appearance441.material = Material442

Shape440.appearance = Appearance441
IndexedFaceSet443 = x3d.IndexedFaceSet()
IndexedFaceSet443.coordIndex = [0,1,2,3,-1]
Coordinate444 = x3d.Coordinate()
Coordinate444.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet443.coord = Coordinate444

Shape440.geometry = IndexedFaceSet443

Transform433.children.append(Shape440)

Group5.children.append(Transform433)
Transform445 = x3d.Transform()
Transform445.translation = [48,-8.6,0]
TouchSensor446 = x3d.TouchSensor(DEF="JinOuterBrowRaiser_Sensor")
TouchSensor446.description = "TSJinOuterBrowRaiser"

Transform445.children.append(TouchSensor446)
Shape447 = x3d.Shape()
Appearance448 = x3d.Appearance()
Material449 = x3d.Material()
Material449.diffuseColor = [1,1,1]

Appearance448.material = Material449

Shape447.appearance = Appearance448
Text450 = x3d.Text()
Text450.string = ["JinOuterBrowRaiser"]
FontStyle451 = x3d.FontStyle()
FontStyle451.size = 2.4
FontStyle451.spacing = 1.2
FontStyle451.justify = ["MIDDLE","MIDDLE"]

Text450.fontStyle = FontStyle451

Shape447.geometry = Text450

Transform445.children.append(Shape447)
Shape452 = x3d.Shape()
Appearance453 = x3d.Appearance()
Material454 = x3d.Material()
Material454.diffuseColor = [0,0,1]

Appearance453.material = Material454

Shape452.appearance = Appearance453
IndexedFaceSet455 = x3d.IndexedFaceSet()
IndexedFaceSet455.coordIndex = [0,1,2,3,-1]
Coordinate456 = x3d.Coordinate()
Coordinate456.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet455.coord = Coordinate456

Shape452.geometry = IndexedFaceSet455

Transform445.children.append(Shape452)

Group5.children.append(Transform445)
Transform457 = x3d.Transform()
Transform457.translation = [48,-11.6,0]
TouchSensor458 = x3d.TouchSensor(DEF="JinSlit_Sensor")
TouchSensor458.description = "TSJinSlit"

Transform457.children.append(TouchSensor458)
Shape459 = x3d.Shape()
Appearance460 = x3d.Appearance()
Material461 = x3d.Material()
Material461.diffuseColor = [1,1,1]

Appearance460.material = Material461

Shape459.appearance = Appearance460
Text462 = x3d.Text()
Text462.string = ["JinSlit"]
FontStyle463 = x3d.FontStyle()
FontStyle463.size = 2.4
FontStyle463.spacing = 1.2
FontStyle463.justify = ["MIDDLE","MIDDLE"]

Text462.fontStyle = FontStyle463

Shape459.geometry = Text462

Transform457.children.append(Shape459)
Shape464 = x3d.Shape()
Appearance465 = x3d.Appearance()
Material466 = x3d.Material()
Material466.diffuseColor = [0,0,1]

Appearance465.material = Material466

Shape464.appearance = Appearance465
IndexedFaceSet467 = x3d.IndexedFaceSet()
IndexedFaceSet467.coordIndex = [0,1,2,3,-1]
Coordinate468 = x3d.Coordinate()
Coordinate468.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet467.coord = Coordinate468

Shape464.geometry = IndexedFaceSet467

Transform457.children.append(Shape464)

Group5.children.append(Transform457)
Transform469 = x3d.Transform()
Transform469.translation = [48,-14.6,0]
TouchSensor470 = x3d.TouchSensor(DEF="JinSquint_Sensor")
TouchSensor470.description = "TSJinSquint"

Transform469.children.append(TouchSensor470)
Shape471 = x3d.Shape()
Appearance472 = x3d.Appearance()
Material473 = x3d.Material()
Material473.diffuseColor = [1,1,1]

Appearance472.material = Material473

Shape471.appearance = Appearance472
Text474 = x3d.Text()
Text474.string = ["JinSquint"]
FontStyle475 = x3d.FontStyle()
FontStyle475.size = 2.4
FontStyle475.spacing = 1.2
FontStyle475.justify = ["MIDDLE","MIDDLE"]

Text474.fontStyle = FontStyle475

Shape471.geometry = Text474

Transform469.children.append(Shape471)
Shape476 = x3d.Shape()
Appearance477 = x3d.Appearance()
Material478 = x3d.Material()
Material478.diffuseColor = [0,0,1]

Appearance477.material = Material478

Shape476.appearance = Appearance477
IndexedFaceSet479 = x3d.IndexedFaceSet()
IndexedFaceSet479.coordIndex = [0,1,2,3,-1]
Coordinate480 = x3d.Coordinate()
Coordinate480.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet479.coord = Coordinate480

Shape476.geometry = IndexedFaceSet479

Transform469.children.append(Shape476)

Group5.children.append(Transform469)
Transform481 = x3d.Transform()
Transform481.translation = [48,-17.6,0]
TouchSensor482 = x3d.TouchSensor(DEF="JinUpperLidRaiser_Sensor")
TouchSensor482.description = "TSJinUpperLidRaiser"

Transform481.children.append(TouchSensor482)
Shape483 = x3d.Shape()
Appearance484 = x3d.Appearance()
Material485 = x3d.Material()
Material485.diffuseColor = [1,1,1]

Appearance484.material = Material485

Shape483.appearance = Appearance484
Text486 = x3d.Text()
Text486.string = ["JinUpperLidRaiser"]
FontStyle487 = x3d.FontStyle()
FontStyle487.size = 2.4
FontStyle487.spacing = 1.2
FontStyle487.justify = ["MIDDLE","MIDDLE"]

Text486.fontStyle = FontStyle487

Shape483.geometry = Text486

Transform481.children.append(Shape483)
Shape488 = x3d.Shape()
Appearance489 = x3d.Appearance()
Material490 = x3d.Material()
Material490.diffuseColor = [0,0,1]

Appearance489.material = Material490

Shape488.appearance = Appearance489
IndexedFaceSet491 = x3d.IndexedFaceSet()
IndexedFaceSet491.coordIndex = [0,1,2,3,-1]
Coordinate492 = x3d.Coordinate()
Coordinate492.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet491.coord = Coordinate492

Shape488.geometry = IndexedFaceSet491

Transform481.children.append(Shape488)

Group5.children.append(Transform481)
Transform493 = x3d.Transform()
Transform493.translation = [48,-20.6,0]
TouchSensor494 = x3d.TouchSensor(DEF="JinUpperLipRaiser_Sensor")
TouchSensor494.description = "TSJinUpperLipRaiser"

Transform493.children.append(TouchSensor494)
Shape495 = x3d.Shape()
Appearance496 = x3d.Appearance()
Material497 = x3d.Material()
Material497.diffuseColor = [1,1,1]

Appearance496.material = Material497

Shape495.appearance = Appearance496
Text498 = x3d.Text()
Text498.string = ["JinUpperLipRaiser"]
FontStyle499 = x3d.FontStyle()
FontStyle499.size = 2.4
FontStyle499.spacing = 1.2
FontStyle499.justify = ["MIDDLE","MIDDLE"]

Text498.fontStyle = FontStyle499

Shape495.geometry = Text498

Transform493.children.append(Shape495)
Shape500 = x3d.Shape()
Appearance501 = x3d.Appearance()
Material502 = x3d.Material()
Material502.diffuseColor = [0,0,1]

Appearance501.material = Material502

Shape500.appearance = Appearance501
IndexedFaceSet503 = x3d.IndexedFaceSet()
IndexedFaceSet503.coordIndex = [0,1,2,3,-1]
Coordinate504 = x3d.Coordinate()
Coordinate504.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet503.coord = Coordinate504

Shape500.geometry = IndexedFaceSet503

Transform493.children.append(Shape500)

Group5.children.append(Transform493)
Transform505 = x3d.Transform()
Transform505.translation = [48,-23.6,0]
TouchSensor506 = x3d.TouchSensor(DEF="JinWink_Sensor")
TouchSensor506.description = "TSJinWink"

Transform505.children.append(TouchSensor506)
Shape507 = x3d.Shape()
Appearance508 = x3d.Appearance()
Material509 = x3d.Material()
Material509.diffuseColor = [1,1,1]

Appearance508.material = Material509

Shape507.appearance = Appearance508
Text510 = x3d.Text()
Text510.string = ["JinWink"]
FontStyle511 = x3d.FontStyle()
FontStyle511.size = 2.4
FontStyle511.spacing = 1.2
FontStyle511.justify = ["MIDDLE","MIDDLE"]

Text510.fontStyle = FontStyle511

Shape507.geometry = Text510

Transform505.children.append(Shape507)
Shape512 = x3d.Shape()
Appearance513 = x3d.Appearance()
Material514 = x3d.Material()
Material514.diffuseColor = [0,0,1]

Appearance513.material = Material514

Shape512.appearance = Appearance513
IndexedFaceSet515 = x3d.IndexedFaceSet()
IndexedFaceSet515.coordIndex = [0,1,2,3,-1]
Coordinate516 = x3d.Coordinate()
Coordinate516.point = [(20, 1.383333, -0.1),(-20, 1.383333, -0.1),(-20, -1.616667, -0.1),(20, -1.616667, -0.1)]

IndexedFaceSet515.coord = Coordinate516

Shape512.geometry = IndexedFaceSet515

Transform505.children.append(Shape512)

Group5.children.append(Transform505)

Scene3.children.append(Group5)
ROUTE517 = x3d.ROUTE()
ROUTE517.fromNode = "JinBlink_Sensor"
ROUTE517.fromField = "touchTime"
ROUTE517.toNode = "Choice0"
ROUTE517.toField = "touchTime"

Scene3.children.append(ROUTE517)
ROUTE518 = x3d.ROUTE()
ROUTE518.fromNode = "Choice0"
ROUTE518.fromField = "choice"
ROUTE518.toNode = "SceneSwitcher"
ROUTE518.toField = "set_whichChoice"

Scene3.children.append(ROUTE518)
ROUTE519 = x3d.ROUTE()
ROUTE519.fromNode = "JinBrowLowerer_Sensor"
ROUTE519.fromField = "touchTime"
ROUTE519.toNode = "Choice1"
ROUTE519.toField = "touchTime"

Scene3.children.append(ROUTE519)
ROUTE520 = x3d.ROUTE()
ROUTE520.fromNode = "Choice1"
ROUTE520.fromField = "choice"
ROUTE520.toNode = "SceneSwitcher"
ROUTE520.toField = "set_whichChoice"

Scene3.children.append(ROUTE520)
ROUTE521 = x3d.ROUTE()
ROUTE521.fromNode = "JinCheekPuffer_Sensor"
ROUTE521.fromField = "touchTime"
ROUTE521.toNode = "Choice2"
ROUTE521.toField = "touchTime"

Scene3.children.append(ROUTE521)
ROUTE522 = x3d.ROUTE()
ROUTE522.fromNode = "Choice2"
ROUTE522.fromField = "choice"
ROUTE522.toNode = "SceneSwitcher"
ROUTE522.toField = "set_whichChoice"

Scene3.children.append(ROUTE522)
ROUTE523 = x3d.ROUTE()
ROUTE523.fromNode = "JinCheekRaiser_Sensor"
ROUTE523.fromField = "touchTime"
ROUTE523.toNode = "Choice3"
ROUTE523.toField = "touchTime"

Scene3.children.append(ROUTE523)
ROUTE524 = x3d.ROUTE()
ROUTE524.fromNode = "Choice3"
ROUTE524.fromField = "choice"
ROUTE524.toNode = "SceneSwitcher"
ROUTE524.toField = "set_whichChoice"

Scene3.children.append(ROUTE524)
ROUTE525 = x3d.ROUTE()
ROUTE525.fromNode = "JinChinRaiser_Sensor"
ROUTE525.fromField = "touchTime"
ROUTE525.toNode = "Choice4"
ROUTE525.toField = "touchTime"

Scene3.children.append(ROUTE525)
ROUTE526 = x3d.ROUTE()
ROUTE526.fromNode = "Choice4"
ROUTE526.fromField = "choice"
ROUTE526.toNode = "SceneSwitcher"
ROUTE526.toField = "set_whichChoice"

Scene3.children.append(ROUTE526)
ROUTE527 = x3d.ROUTE()
ROUTE527.fromNode = "JinDimpler_Sensor"
ROUTE527.fromField = "touchTime"
ROUTE527.toNode = "Choice5"
ROUTE527.toField = "touchTime"

Scene3.children.append(ROUTE527)
ROUTE528 = x3d.ROUTE()
ROUTE528.fromNode = "Choice5"
ROUTE528.fromField = "choice"
ROUTE528.toNode = "SceneSwitcher"
ROUTE528.toField = "set_whichChoice"

Scene3.children.append(ROUTE528)
ROUTE529 = x3d.ROUTE()
ROUTE529.fromNode = "JinEyesClosed_Sensor"
ROUTE529.fromField = "touchTime"
ROUTE529.toNode = "Choice6"
ROUTE529.toField = "touchTime"

Scene3.children.append(ROUTE529)
ROUTE530 = x3d.ROUTE()
ROUTE530.fromNode = "Choice6"
ROUTE530.fromField = "choice"
ROUTE530.toNode = "SceneSwitcher"
ROUTE530.toField = "set_whichChoice"

Scene3.children.append(ROUTE530)
ROUTE531 = x3d.ROUTE()
ROUTE531.fromNode = "JinInnerBrowRaiser_Sensor"
ROUTE531.fromField = "touchTime"
ROUTE531.toNode = "Choice7"
ROUTE531.toField = "touchTime"

Scene3.children.append(ROUTE531)
ROUTE532 = x3d.ROUTE()
ROUTE532.fromNode = "Choice7"
ROUTE532.fromField = "choice"
ROUTE532.toNode = "SceneSwitcher"
ROUTE532.toField = "set_whichChoice"

Scene3.children.append(ROUTE532)
ROUTE533 = x3d.ROUTE()
ROUTE533.fromNode = "JinJawDrop_Sensor"
ROUTE533.fromField = "touchTime"
ROUTE533.toNode = "Choice8"
ROUTE533.toField = "touchTime"

Scene3.children.append(ROUTE533)
ROUTE534 = x3d.ROUTE()
ROUTE534.fromNode = "Choice8"
ROUTE534.fromField = "choice"
ROUTE534.toNode = "SceneSwitcher"
ROUTE534.toField = "set_whichChoice"

Scene3.children.append(ROUTE534)
ROUTE535 = x3d.ROUTE()
ROUTE535.fromNode = "JinLidDroop_Sensor"
ROUTE535.fromField = "touchTime"
ROUTE535.toNode = "Choice9"
ROUTE535.toField = "touchTime"

Scene3.children.append(ROUTE535)
ROUTE536 = x3d.ROUTE()
ROUTE536.fromNode = "Choice9"
ROUTE536.fromField = "choice"
ROUTE536.toNode = "SceneSwitcher"
ROUTE536.toField = "set_whichChoice"

Scene3.children.append(ROUTE536)
ROUTE537 = x3d.ROUTE()
ROUTE537.fromNode = "JinLidTightener_Sensor"
ROUTE537.fromField = "touchTime"
ROUTE537.toNode = "Choice10"
ROUTE537.toField = "touchTime"

Scene3.children.append(ROUTE537)
ROUTE538 = x3d.ROUTE()
ROUTE538.fromNode = "Choice10"
ROUTE538.fromField = "choice"
ROUTE538.toNode = "SceneSwitcher"
ROUTE538.toField = "set_whichChoice"

Scene3.children.append(ROUTE538)
ROUTE539 = x3d.ROUTE()
ROUTE539.fromNode = "JinLipCornerDepressor_Sensor"
ROUTE539.fromField = "touchTime"
ROUTE539.toNode = "Choice11"
ROUTE539.toField = "touchTime"

Scene3.children.append(ROUTE539)
ROUTE540 = x3d.ROUTE()
ROUTE540.fromNode = "Choice11"
ROUTE540.fromField = "choice"
ROUTE540.toNode = "SceneSwitcher"
ROUTE540.toField = "set_whichChoice"

Scene3.children.append(ROUTE540)
ROUTE541 = x3d.ROUTE()
ROUTE541.fromNode = "JinLipCornerPuller_Sensor"
ROUTE541.fromField = "touchTime"
ROUTE541.toNode = "Choice12"
ROUTE541.toField = "touchTime"

Scene3.children.append(ROUTE541)
ROUTE542 = x3d.ROUTE()
ROUTE542.fromNode = "Choice12"
ROUTE542.fromField = "choice"
ROUTE542.toNode = "SceneSwitcher"
ROUTE542.toField = "set_whichChoice"

Scene3.children.append(ROUTE542)
ROUTE543 = x3d.ROUTE()
ROUTE543.fromNode = "JinLipFunneler_Sensor"
ROUTE543.fromField = "touchTime"
ROUTE543.toNode = "Choice13"
ROUTE543.toField = "touchTime"

Scene3.children.append(ROUTE543)
ROUTE544 = x3d.ROUTE()
ROUTE544.fromNode = "Choice13"
ROUTE544.fromField = "choice"
ROUTE544.toNode = "SceneSwitcher"
ROUTE544.toField = "set_whichChoice"

Scene3.children.append(ROUTE544)
ROUTE545 = x3d.ROUTE()
ROUTE545.fromNode = "JinLipPressor_Sensor"
ROUTE545.fromField = "touchTime"
ROUTE545.toNode = "Choice14"
ROUTE545.toField = "touchTime"

Scene3.children.append(ROUTE545)
ROUTE546 = x3d.ROUTE()
ROUTE546.fromNode = "Choice14"
ROUTE546.fromField = "choice"
ROUTE546.toNode = "SceneSwitcher"
ROUTE546.toField = "set_whichChoice"

Scene3.children.append(ROUTE546)
ROUTE547 = x3d.ROUTE()
ROUTE547.fromNode = "JinLipPuckerer_Sensor"
ROUTE547.fromField = "touchTime"
ROUTE547.toNode = "Choice15"
ROUTE547.toField = "touchTime"

Scene3.children.append(ROUTE547)
ROUTE548 = x3d.ROUTE()
ROUTE548.fromNode = "Choice15"
ROUTE548.fromField = "choice"
ROUTE548.toNode = "SceneSwitcher"
ROUTE548.toField = "set_whichChoice"

Scene3.children.append(ROUTE548)
ROUTE549 = x3d.ROUTE()
ROUTE549.fromNode = "JinLipsPart_Sensor"
ROUTE549.fromField = "touchTime"
ROUTE549.toNode = "Choice16"
ROUTE549.toField = "touchTime"

Scene3.children.append(ROUTE549)
ROUTE550 = x3d.ROUTE()
ROUTE550.fromNode = "Choice16"
ROUTE550.fromField = "choice"
ROUTE550.toNode = "SceneSwitcher"
ROUTE550.toField = "set_whichChoice"

Scene3.children.append(ROUTE550)
ROUTE551 = x3d.ROUTE()
ROUTE551.fromNode = "JinLipStretcher_Sensor"
ROUTE551.fromField = "touchTime"
ROUTE551.toNode = "Choice17"
ROUTE551.toField = "touchTime"

Scene3.children.append(ROUTE551)
ROUTE552 = x3d.ROUTE()
ROUTE552.fromNode = "Choice17"
ROUTE552.fromField = "choice"
ROUTE552.toNode = "SceneSwitcher"
ROUTE552.toField = "set_whichChoice"

Scene3.children.append(ROUTE552)
ROUTE553 = x3d.ROUTE()
ROUTE553.fromNode = "JinLipSuck_Sensor"
ROUTE553.fromField = "touchTime"
ROUTE553.toNode = "Choice18"
ROUTE553.toField = "touchTime"

Scene3.children.append(ROUTE553)
ROUTE554 = x3d.ROUTE()
ROUTE554.fromNode = "Choice18"
ROUTE554.fromField = "choice"
ROUTE554.toNode = "SceneSwitcher"
ROUTE554.toField = "set_whichChoice"

Scene3.children.append(ROUTE554)
ROUTE555 = x3d.ROUTE()
ROUTE555.fromNode = "JinLipTightener_Sensor"
ROUTE555.fromField = "touchTime"
ROUTE555.toNode = "Choice19"
ROUTE555.toField = "touchTime"

Scene3.children.append(ROUTE555)
ROUTE556 = x3d.ROUTE()
ROUTE556.fromNode = "Choice19"
ROUTE556.fromField = "choice"
ROUTE556.toNode = "SceneSwitcher"
ROUTE556.toField = "set_whichChoice"

Scene3.children.append(ROUTE556)
ROUTE557 = x3d.ROUTE()
ROUTE557.fromNode = "JinLowerLipDepressor_Sensor"
ROUTE557.fromField = "touchTime"
ROUTE557.toNode = "Choice20"
ROUTE557.toField = "touchTime"

Scene3.children.append(ROUTE557)
ROUTE558 = x3d.ROUTE()
ROUTE558.fromNode = "Choice20"
ROUTE558.fromField = "choice"
ROUTE558.toNode = "SceneSwitcher"
ROUTE558.toField = "set_whichChoice"

Scene3.children.append(ROUTE558)
ROUTE559 = x3d.ROUTE()
ROUTE559.fromNode = "JinMouthStretch_Sensor"
ROUTE559.fromField = "touchTime"
ROUTE559.toNode = "Choice21"
ROUTE559.toField = "touchTime"

Scene3.children.append(ROUTE559)
ROUTE560 = x3d.ROUTE()
ROUTE560.fromNode = "Choice21"
ROUTE560.fromField = "choice"
ROUTE560.toNode = "SceneSwitcher"
ROUTE560.toField = "set_whichChoice"

Scene3.children.append(ROUTE560)
ROUTE561 = x3d.ROUTE()
ROUTE561.fromNode = "JinNasolabialDeepener_Sensor"
ROUTE561.fromField = "touchTime"
ROUTE561.toNode = "Choice22"
ROUTE561.toField = "touchTime"

Scene3.children.append(ROUTE561)
ROUTE562 = x3d.ROUTE()
ROUTE562.fromNode = "Choice22"
ROUTE562.fromField = "choice"
ROUTE562.toNode = "SceneSwitcher"
ROUTE562.toField = "set_whichChoice"

Scene3.children.append(ROUTE562)
ROUTE563 = x3d.ROUTE()
ROUTE563.fromNode = "JinNoseWrinkler_Sensor"
ROUTE563.fromField = "touchTime"
ROUTE563.toNode = "Choice23"
ROUTE563.toField = "touchTime"

Scene3.children.append(ROUTE563)
ROUTE564 = x3d.ROUTE()
ROUTE564.fromNode = "Choice23"
ROUTE564.fromField = "choice"
ROUTE564.toNode = "SceneSwitcher"
ROUTE564.toField = "set_whichChoice"

Scene3.children.append(ROUTE564)
ROUTE565 = x3d.ROUTE()
ROUTE565.fromNode = "JinOuterBrowRaiser_Sensor"
ROUTE565.fromField = "touchTime"
ROUTE565.toNode = "Choice24"
ROUTE565.toField = "touchTime"

Scene3.children.append(ROUTE565)
ROUTE566 = x3d.ROUTE()
ROUTE566.fromNode = "Choice24"
ROUTE566.fromField = "choice"
ROUTE566.toNode = "SceneSwitcher"
ROUTE566.toField = "set_whichChoice"

Scene3.children.append(ROUTE566)
ROUTE567 = x3d.ROUTE()
ROUTE567.fromNode = "JinSlit_Sensor"
ROUTE567.fromField = "touchTime"
ROUTE567.toNode = "Choice25"
ROUTE567.toField = "touchTime"

Scene3.children.append(ROUTE567)
ROUTE568 = x3d.ROUTE()
ROUTE568.fromNode = "Choice25"
ROUTE568.fromField = "choice"
ROUTE568.toNode = "SceneSwitcher"
ROUTE568.toField = "set_whichChoice"

Scene3.children.append(ROUTE568)
ROUTE569 = x3d.ROUTE()
ROUTE569.fromNode = "JinSquint_Sensor"
ROUTE569.fromField = "touchTime"
ROUTE569.toNode = "Choice26"
ROUTE569.toField = "touchTime"

Scene3.children.append(ROUTE569)
ROUTE570 = x3d.ROUTE()
ROUTE570.fromNode = "Choice26"
ROUTE570.fromField = "choice"
ROUTE570.toNode = "SceneSwitcher"
ROUTE570.toField = "set_whichChoice"

Scene3.children.append(ROUTE570)
ROUTE571 = x3d.ROUTE()
ROUTE571.fromNode = "JinUpperLidRaiser_Sensor"
ROUTE571.fromField = "touchTime"
ROUTE571.toNode = "Choice27"
ROUTE571.toField = "touchTime"

Scene3.children.append(ROUTE571)
ROUTE572 = x3d.ROUTE()
ROUTE572.fromNode = "Choice27"
ROUTE572.fromField = "choice"
ROUTE572.toNode = "SceneSwitcher"
ROUTE572.toField = "set_whichChoice"

Scene3.children.append(ROUTE572)
ROUTE573 = x3d.ROUTE()
ROUTE573.fromNode = "JinUpperLipRaiser_Sensor"
ROUTE573.fromField = "touchTime"
ROUTE573.toNode = "Choice28"
ROUTE573.toField = "touchTime"

Scene3.children.append(ROUTE573)
ROUTE574 = x3d.ROUTE()
ROUTE574.fromNode = "Choice28"
ROUTE574.fromField = "choice"
ROUTE574.toNode = "SceneSwitcher"
ROUTE574.toField = "set_whichChoice"

Scene3.children.append(ROUTE574)
ROUTE575 = x3d.ROUTE()
ROUTE575.fromNode = "JinWink_Sensor"
ROUTE575.fromField = "touchTime"
ROUTE575.toNode = "Choice29"
ROUTE575.toField = "touchTime"

Scene3.children.append(ROUTE575)
ROUTE576 = x3d.ROUTE()
ROUTE576.fromNode = "Choice29"
ROUTE576.fromField = "choice"
ROUTE576.toNode = "SceneSwitcher"
ROUTE576.toField = "set_whichChoice"

Scene3.children.append(ROUTE576)

X3D0.Scene = Scene3
f = open("../data/MenuJin.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/MenuJin.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/MenuJin.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
