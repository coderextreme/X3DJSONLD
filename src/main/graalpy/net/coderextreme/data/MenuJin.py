import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("Menu.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("X3D scene with a Switch of Inlines controlled by a menu")

head1.addMeta(meta3)

X3D0.setHead(head1)
Scene4 = x3d.Scene()

Scene4.addComments(x3d.CommentsBlock("""Viewpoint and any other scene setup"""))
Viewpoint5 = x3d.Viewpoint()
Viewpoint5.setPosition(x3d.doubleToFloat([0,20,110]))

Scene4.addChild(Viewpoint5)
Group6 = x3d.Group()
Switch7 = x3d.Switch()
Switch7.setDEF("SceneSwitcher")
Switch7.setWhichChoice(0)
Group8 = x3d.Group()
Script9 = x3d.Script()
Script9.setDEF("Choice0")
field10 = x3d.field()
field10.setName("touchTime")
field10.setType("SFTime")
field10.setAccessType("inputOnly")

Script9.addField(field10)
field11 = x3d.field()
field11.setName("choice")
field11.setType("SFInt32")
field11.setAccessType("outputOnly")

Script9.addField(field11)

Script9.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 0;
      }
      function touchTime(value) {
          choice = 0;
      }''')

Group8.addChild(Script9)
Inline12 = x3d.Inline()
Inline12.setDEF("JinBlink")
Inline12.setUrl(["../resources/JinBlink.x3d","JinBlink.x3d"])

Group8.addChild(Inline12)

Switch7.addChild(Group8)
Group13 = x3d.Group()
Script14 = x3d.Script()
Script14.setDEF("Choice1")
field15 = x3d.field()
field15.setName("touchTime")
field15.setType("SFTime")
field15.setAccessType("inputOnly")

Script14.addField(field15)
field16 = x3d.field()
field16.setName("choice")
field16.setType("SFInt32")
field16.setAccessType("outputOnly")

Script14.addField(field16)

Script14.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 1;
      }
      function touchTime(value) {
          choice = 1;
      }''')

Group13.addChild(Script14)
Inline17 = x3d.Inline()
Inline17.setDEF("JinBrowLowerer")
Inline17.setUrl(["../resources/JinBrowLowerer.x3d","JinBrowLowerer.x3d"])

Group13.addChild(Inline17)

Switch7.addChild(Group13)
Group18 = x3d.Group()
Script19 = x3d.Script()
Script19.setDEF("Choice2")
field20 = x3d.field()
field20.setName("touchTime")
field20.setType("SFTime")
field20.setAccessType("inputOnly")

Script19.addField(field20)
field21 = x3d.field()
field21.setName("choice")
field21.setType("SFInt32")
field21.setAccessType("outputOnly")

Script19.addField(field21)

Script19.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 2;
      }
      function touchTime(value) {
          choice = 2;
      }''')

Group18.addChild(Script19)
Inline22 = x3d.Inline()
Inline22.setDEF("JinCheekPuffer")
Inline22.setUrl(["../resources/JinCheekPuffer.x3d","JinCheekPuffer.x3d"])

Group18.addChild(Inline22)

Switch7.addChild(Group18)
Group23 = x3d.Group()
Script24 = x3d.Script()
Script24.setDEF("Choice3")
field25 = x3d.field()
field25.setName("touchTime")
field25.setType("SFTime")
field25.setAccessType("inputOnly")

Script24.addField(field25)
field26 = x3d.field()
field26.setName("choice")
field26.setType("SFInt32")
field26.setAccessType("outputOnly")

Script24.addField(field26)

Script24.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 3;
      }
      function touchTime(value) {
          choice = 3;
      }''')

Group23.addChild(Script24)
Inline27 = x3d.Inline()
Inline27.setDEF("JinCheekRaiser")
Inline27.setUrl(["../resources/JinCheekRaiser.x3d","JinCheekRaiser.x3d"])

Group23.addChild(Inline27)

Switch7.addChild(Group23)
Group28 = x3d.Group()
Script29 = x3d.Script()
Script29.setDEF("Choice4")
field30 = x3d.field()
field30.setName("touchTime")
field30.setType("SFTime")
field30.setAccessType("inputOnly")

Script29.addField(field30)
field31 = x3d.field()
field31.setName("choice")
field31.setType("SFInt32")
field31.setAccessType("outputOnly")

Script29.addField(field31)

Script29.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 4;
      }
      function touchTime(value) {
          choice = 4;
      }''')

Group28.addChild(Script29)
Inline32 = x3d.Inline()
Inline32.setDEF("JinChinRaiser")
Inline32.setUrl(["../resources/JinChinRaiser.x3d","JinChinRaiser.x3d"])

Group28.addChild(Inline32)

Switch7.addChild(Group28)
Group33 = x3d.Group()
Script34 = x3d.Script()
Script34.setDEF("Choice5")
field35 = x3d.field()
field35.setName("touchTime")
field35.setType("SFTime")
field35.setAccessType("inputOnly")

Script34.addField(field35)
field36 = x3d.field()
field36.setName("choice")
field36.setType("SFInt32")
field36.setAccessType("outputOnly")

Script34.addField(field36)

Script34.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 5;
      }
      function touchTime(value) {
          choice = 5;
      }''')

Group33.addChild(Script34)
Inline37 = x3d.Inline()
Inline37.setDEF("JinDimpler")
Inline37.setUrl(["../resources/JinDimpler.x3d","JinDimpler.x3d"])

Group33.addChild(Inline37)

Switch7.addChild(Group33)
Group38 = x3d.Group()
Script39 = x3d.Script()
Script39.setDEF("Choice6")
field40 = x3d.field()
field40.setName("touchTime")
field40.setType("SFTime")
field40.setAccessType("inputOnly")

Script39.addField(field40)
field41 = x3d.field()
field41.setName("choice")
field41.setType("SFInt32")
field41.setAccessType("outputOnly")

Script39.addField(field41)

Script39.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 6;
      }
      function touchTime(value) {
          choice = 6;
      }''')

Group38.addChild(Script39)
Inline42 = x3d.Inline()
Inline42.setDEF("JinEyesClosed")
Inline42.setUrl(["../resources/JinEyesClosed.x3d","JinEyesClosed.x3d"])

Group38.addChild(Inline42)

Switch7.addChild(Group38)
Group43 = x3d.Group()
Script44 = x3d.Script()
Script44.setDEF("Choice7")
field45 = x3d.field()
field45.setName("touchTime")
field45.setType("SFTime")
field45.setAccessType("inputOnly")

Script44.addField(field45)
field46 = x3d.field()
field46.setName("choice")
field46.setType("SFInt32")
field46.setAccessType("outputOnly")

Script44.addField(field46)

Script44.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 7;
      }
      function touchTime(value) {
          choice = 7;
      }''')

Group43.addChild(Script44)
Inline47 = x3d.Inline()
Inline47.setDEF("JinInnerBrowRaiser")
Inline47.setUrl(["../resources/JinInnerBrowRaiser.x3d","JinInnerBrowRaiser.x3d"])

Group43.addChild(Inline47)

Switch7.addChild(Group43)
Group48 = x3d.Group()
Script49 = x3d.Script()
Script49.setDEF("Choice8")
field50 = x3d.field()
field50.setName("touchTime")
field50.setType("SFTime")
field50.setAccessType("inputOnly")

Script49.addField(field50)
field51 = x3d.field()
field51.setName("choice")
field51.setType("SFInt32")
field51.setAccessType("outputOnly")

Script49.addField(field51)

Script49.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 8;
      }
      function touchTime(value) {
          choice = 8;
      }''')

Group48.addChild(Script49)
Inline52 = x3d.Inline()
Inline52.setDEF("JinJawDrop")
Inline52.setUrl(["../resources/JinJawDrop.x3d","JinJawDrop.x3d"])

Group48.addChild(Inline52)

Switch7.addChild(Group48)
Group53 = x3d.Group()
Script54 = x3d.Script()
Script54.setDEF("Choice9")
field55 = x3d.field()
field55.setName("touchTime")
field55.setType("SFTime")
field55.setAccessType("inputOnly")

Script54.addField(field55)
field56 = x3d.field()
field56.setName("choice")
field56.setType("SFInt32")
field56.setAccessType("outputOnly")

Script54.addField(field56)

Script54.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 9;
      }
      function touchTime(value) {
          choice = 9;
      }''')

Group53.addChild(Script54)
Inline57 = x3d.Inline()
Inline57.setDEF("JinLidDroop")
Inline57.setUrl(["../resources/JinLidDroop.x3d","JinLidDroop.x3d"])

Group53.addChild(Inline57)

Switch7.addChild(Group53)
Group58 = x3d.Group()
Script59 = x3d.Script()
Script59.setDEF("Choice10")
field60 = x3d.field()
field60.setName("touchTime")
field60.setType("SFTime")
field60.setAccessType("inputOnly")

Script59.addField(field60)
field61 = x3d.field()
field61.setName("choice")
field61.setType("SFInt32")
field61.setAccessType("outputOnly")

Script59.addField(field61)

Script59.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 10;
      }
      function touchTime(value) {
          choice = 10;
      }''')

Group58.addChild(Script59)
Inline62 = x3d.Inline()
Inline62.setDEF("JinLidTightener")
Inline62.setUrl(["../resources/JinLidTightener.x3d","JinLidTightener.x3d"])

Group58.addChild(Inline62)

Switch7.addChild(Group58)
Group63 = x3d.Group()
Script64 = x3d.Script()
Script64.setDEF("Choice11")
field65 = x3d.field()
field65.setName("touchTime")
field65.setType("SFTime")
field65.setAccessType("inputOnly")

Script64.addField(field65)
field66 = x3d.field()
field66.setName("choice")
field66.setType("SFInt32")
field66.setAccessType("outputOnly")

Script64.addField(field66)

Script64.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 11;
      }
      function touchTime(value) {
          choice = 11;
      }''')

Group63.addChild(Script64)
Inline67 = x3d.Inline()
Inline67.setDEF("JinLipCornerDepressor")
Inline67.setUrl(["../resources/JinLipCornerDepressor.x3d","JinLipCornerDepressor.x3d"])

Group63.addChild(Inline67)

Switch7.addChild(Group63)
Group68 = x3d.Group()
Script69 = x3d.Script()
Script69.setDEF("Choice12")
field70 = x3d.field()
field70.setName("touchTime")
field70.setType("SFTime")
field70.setAccessType("inputOnly")

Script69.addField(field70)
field71 = x3d.field()
field71.setName("choice")
field71.setType("SFInt32")
field71.setAccessType("outputOnly")

Script69.addField(field71)

Script69.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 12;
      }
      function touchTime(value) {
          choice = 12;
      }''')

Group68.addChild(Script69)
Inline72 = x3d.Inline()
Inline72.setDEF("JinLipCornerPuller")
Inline72.setUrl(["../resources/JinLipCornerPuller.x3d","JinLipCornerPuller.x3d"])

Group68.addChild(Inline72)

Switch7.addChild(Group68)
Group73 = x3d.Group()
Script74 = x3d.Script()
Script74.setDEF("Choice13")
field75 = x3d.field()
field75.setName("touchTime")
field75.setType("SFTime")
field75.setAccessType("inputOnly")

Script74.addField(field75)
field76 = x3d.field()
field76.setName("choice")
field76.setType("SFInt32")
field76.setAccessType("outputOnly")

Script74.addField(field76)

Script74.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 13;
      }
      function touchTime(value) {
          choice = 13;
      }''')

Group73.addChild(Script74)
Inline77 = x3d.Inline()
Inline77.setDEF("JinLipFunneler")
Inline77.setUrl(["../resources/JinLipFunneler.x3d","JinLipFunneler.x3d"])

Group73.addChild(Inline77)

Switch7.addChild(Group73)
Group78 = x3d.Group()
Script79 = x3d.Script()
Script79.setDEF("Choice14")
field80 = x3d.field()
field80.setName("touchTime")
field80.setType("SFTime")
field80.setAccessType("inputOnly")

Script79.addField(field80)
field81 = x3d.field()
field81.setName("choice")
field81.setType("SFInt32")
field81.setAccessType("outputOnly")

Script79.addField(field81)

Script79.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 14;
      }
      function touchTime(value) {
          choice = 14;
      }''')

Group78.addChild(Script79)
Inline82 = x3d.Inline()
Inline82.setDEF("JinLipPressor")
Inline82.setUrl(["../resources/JinLipPressor.x3d","JinLipPressor.x3d"])

Group78.addChild(Inline82)

Switch7.addChild(Group78)
Group83 = x3d.Group()
Script84 = x3d.Script()
Script84.setDEF("Choice15")
field85 = x3d.field()
field85.setName("touchTime")
field85.setType("SFTime")
field85.setAccessType("inputOnly")

Script84.addField(field85)
field86 = x3d.field()
field86.setName("choice")
field86.setType("SFInt32")
field86.setAccessType("outputOnly")

Script84.addField(field86)

Script84.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 15;
      }
      function touchTime(value) {
          choice = 15;
      }''')

Group83.addChild(Script84)
Inline87 = x3d.Inline()
Inline87.setDEF("JinLipPuckerer")
Inline87.setUrl(["../resources/JinLipPuckerer.x3d","JinLipPuckerer.x3d"])

Group83.addChild(Inline87)

Switch7.addChild(Group83)
Group88 = x3d.Group()
Script89 = x3d.Script()
Script89.setDEF("Choice16")
field90 = x3d.field()
field90.setName("touchTime")
field90.setType("SFTime")
field90.setAccessType("inputOnly")

Script89.addField(field90)
field91 = x3d.field()
field91.setName("choice")
field91.setType("SFInt32")
field91.setAccessType("outputOnly")

Script89.addField(field91)

Script89.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 16;
      }
      function touchTime(value) {
          choice = 16;
      }''')

Group88.addChild(Script89)
Inline92 = x3d.Inline()
Inline92.setDEF("JinLipsPart")
Inline92.setUrl(["../resources/JinLipsPart.x3d","JinLipsPart.x3d"])

Group88.addChild(Inline92)

Switch7.addChild(Group88)
Group93 = x3d.Group()
Script94 = x3d.Script()
Script94.setDEF("Choice17")
field95 = x3d.field()
field95.setName("touchTime")
field95.setType("SFTime")
field95.setAccessType("inputOnly")

Script94.addField(field95)
field96 = x3d.field()
field96.setName("choice")
field96.setType("SFInt32")
field96.setAccessType("outputOnly")

Script94.addField(field96)

Script94.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 17;
      }
      function touchTime(value) {
          choice = 17;
      }''')

Group93.addChild(Script94)
Inline97 = x3d.Inline()
Inline97.setDEF("JinLipStretcher")
Inline97.setUrl(["../resources/JinLipStretcher.x3d","JinLipStretcher.x3d"])

Group93.addChild(Inline97)

Switch7.addChild(Group93)
Group98 = x3d.Group()
Script99 = x3d.Script()
Script99.setDEF("Choice18")
field100 = x3d.field()
field100.setName("touchTime")
field100.setType("SFTime")
field100.setAccessType("inputOnly")

Script99.addField(field100)
field101 = x3d.field()
field101.setName("choice")
field101.setType("SFInt32")
field101.setAccessType("outputOnly")

Script99.addField(field101)

Script99.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 18;
      }
      function touchTime(value) {
          choice = 18;
      }''')

Group98.addChild(Script99)
Inline102 = x3d.Inline()
Inline102.setDEF("JinLipSuck")
Inline102.setUrl(["../resources/JinLipSuck.x3d","JinLipSuck.x3d"])

Group98.addChild(Inline102)

Switch7.addChild(Group98)
Group103 = x3d.Group()
Script104 = x3d.Script()
Script104.setDEF("Choice19")
field105 = x3d.field()
field105.setName("touchTime")
field105.setType("SFTime")
field105.setAccessType("inputOnly")

Script104.addField(field105)
field106 = x3d.field()
field106.setName("choice")
field106.setType("SFInt32")
field106.setAccessType("outputOnly")

Script104.addField(field106)

Script104.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 19;
      }
      function touchTime(value) {
          choice = 19;
      }''')

Group103.addChild(Script104)
Inline107 = x3d.Inline()
Inline107.setDEF("JinLipTightener")
Inline107.setUrl(["../resources/JinLipTightener.x3d","JinLipTightener.x3d"])

Group103.addChild(Inline107)

Switch7.addChild(Group103)
Group108 = x3d.Group()
Script109 = x3d.Script()
Script109.setDEF("Choice20")
field110 = x3d.field()
field110.setName("touchTime")
field110.setType("SFTime")
field110.setAccessType("inputOnly")

Script109.addField(field110)
field111 = x3d.field()
field111.setName("choice")
field111.setType("SFInt32")
field111.setAccessType("outputOnly")

Script109.addField(field111)

Script109.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 20;
      }
      function touchTime(value) {
          choice = 20;
      }''')

Group108.addChild(Script109)
Inline112 = x3d.Inline()
Inline112.setDEF("JinLowerLipDepressor")
Inline112.setUrl(["../resources/JinLowerLipDepressor.x3d","JinLowerLipDepressor.x3d"])

Group108.addChild(Inline112)

Switch7.addChild(Group108)
Group113 = x3d.Group()
Script114 = x3d.Script()
Script114.setDEF("Choice21")
field115 = x3d.field()
field115.setName("touchTime")
field115.setType("SFTime")
field115.setAccessType("inputOnly")

Script114.addField(field115)
field116 = x3d.field()
field116.setName("choice")
field116.setType("SFInt32")
field116.setAccessType("outputOnly")

Script114.addField(field116)

Script114.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 21;
      }
      function touchTime(value) {
          choice = 21;
      }''')

Group113.addChild(Script114)
Inline117 = x3d.Inline()
Inline117.setDEF("JinMouthStretch")
Inline117.setUrl(["../resources/JinMouthStretch.x3d","JinMouthStretch.x3d"])

Group113.addChild(Inline117)

Switch7.addChild(Group113)
Group118 = x3d.Group()
Script119 = x3d.Script()
Script119.setDEF("Choice22")
field120 = x3d.field()
field120.setName("touchTime")
field120.setType("SFTime")
field120.setAccessType("inputOnly")

Script119.addField(field120)
field121 = x3d.field()
field121.setName("choice")
field121.setType("SFInt32")
field121.setAccessType("outputOnly")

Script119.addField(field121)

Script119.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 22;
      }
      function touchTime(value) {
          choice = 22;
      }''')

Group118.addChild(Script119)
Inline122 = x3d.Inline()
Inline122.setDEF("JinNasolabialDeepener")
Inline122.setUrl(["../resources/JinNasolabialDeepener.x3d","JinNasolabialDeepener.x3d"])

Group118.addChild(Inline122)

Switch7.addChild(Group118)
Group123 = x3d.Group()
Script124 = x3d.Script()
Script124.setDEF("Choice23")
field125 = x3d.field()
field125.setName("touchTime")
field125.setType("SFTime")
field125.setAccessType("inputOnly")

Script124.addField(field125)
field126 = x3d.field()
field126.setName("choice")
field126.setType("SFInt32")
field126.setAccessType("outputOnly")

Script124.addField(field126)

Script124.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 23;
      }
      function touchTime(value) {
          choice = 23;
      }''')

Group123.addChild(Script124)
Inline127 = x3d.Inline()
Inline127.setDEF("JinNoseWrinkler")
Inline127.setUrl(["../resources/JinNoseWrinkler.x3d","JinNoseWrinkler.x3d"])

Group123.addChild(Inline127)

Switch7.addChild(Group123)
Group128 = x3d.Group()
Script129 = x3d.Script()
Script129.setDEF("Choice24")
field130 = x3d.field()
field130.setName("touchTime")
field130.setType("SFTime")
field130.setAccessType("inputOnly")

Script129.addField(field130)
field131 = x3d.field()
field131.setName("choice")
field131.setType("SFInt32")
field131.setAccessType("outputOnly")

Script129.addField(field131)

Script129.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 24;
      }
      function touchTime(value) {
          choice = 24;
      }''')

Group128.addChild(Script129)
Inline132 = x3d.Inline()
Inline132.setDEF("JinOuterBrowRaiser")
Inline132.setUrl(["../resources/JinOuterBrowRaiser.x3d","JinOuterBrowRaiser.x3d"])

Group128.addChild(Inline132)

Switch7.addChild(Group128)
Group133 = x3d.Group()
Script134 = x3d.Script()
Script134.setDEF("Choice25")
field135 = x3d.field()
field135.setName("touchTime")
field135.setType("SFTime")
field135.setAccessType("inputOnly")

Script134.addField(field135)
field136 = x3d.field()
field136.setName("choice")
field136.setType("SFInt32")
field136.setAccessType("outputOnly")

Script134.addField(field136)

Script134.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 25;
      }
      function touchTime(value) {
          choice = 25;
      }''')

Group133.addChild(Script134)
Inline137 = x3d.Inline()
Inline137.setDEF("JinSlit")
Inline137.setUrl(["../resources/JinSlit.x3d","JinSlit.x3d"])

Group133.addChild(Inline137)

Switch7.addChild(Group133)
Group138 = x3d.Group()
Script139 = x3d.Script()
Script139.setDEF("Choice26")
field140 = x3d.field()
field140.setName("touchTime")
field140.setType("SFTime")
field140.setAccessType("inputOnly")

Script139.addField(field140)
field141 = x3d.field()
field141.setName("choice")
field141.setType("SFInt32")
field141.setAccessType("outputOnly")

Script139.addField(field141)

Script139.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 26;
      }
      function touchTime(value) {
          choice = 26;
      }''')

Group138.addChild(Script139)
Inline142 = x3d.Inline()
Inline142.setDEF("JinSquint")
Inline142.setUrl(["../resources/JinSquint.x3d","JinSquint.x3d"])

Group138.addChild(Inline142)

Switch7.addChild(Group138)
Group143 = x3d.Group()
Script144 = x3d.Script()
Script144.setDEF("Choice27")
field145 = x3d.field()
field145.setName("touchTime")
field145.setType("SFTime")
field145.setAccessType("inputOnly")

Script144.addField(field145)
field146 = x3d.field()
field146.setName("choice")
field146.setType("SFInt32")
field146.setAccessType("outputOnly")

Script144.addField(field146)

Script144.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 27;
      }
      function touchTime(value) {
          choice = 27;
      }''')

Group143.addChild(Script144)
Inline147 = x3d.Inline()
Inline147.setDEF("JinUpperLidRaiser")
Inline147.setUrl(["../resources/JinUpperLidRaiser.x3d","JinUpperLidRaiser.x3d"])

Group143.addChild(Inline147)

Switch7.addChild(Group143)
Group148 = x3d.Group()
Script149 = x3d.Script()
Script149.setDEF("Choice28")
field150 = x3d.field()
field150.setName("touchTime")
field150.setType("SFTime")
field150.setAccessType("inputOnly")

Script149.addField(field150)
field151 = x3d.field()
field151.setName("choice")
field151.setType("SFInt32")
field151.setAccessType("outputOnly")

Script149.addField(field151)

Script149.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 28;
      }
      function touchTime(value) {
          choice = 28;
      }''')

Group148.addChild(Script149)
Inline152 = x3d.Inline()
Inline152.setDEF("JinUpperLipRaiser")
Inline152.setUrl(["../resources/JinUpperLipRaiser.x3d","JinUpperLipRaiser.x3d"])

Group148.addChild(Inline152)

Switch7.addChild(Group148)
Group153 = x3d.Group()
Script154 = x3d.Script()
Script154.setDEF("Choice29")
field155 = x3d.field()
field155.setName("touchTime")
field155.setType("SFTime")
field155.setAccessType("inputOnly")

Script154.addField(field155)
field156 = x3d.field()
field156.setName("choice")
field156.setType("SFInt32")
field156.setAccessType("outputOnly")

Script154.addField(field156)

Script154.setSourceCode('''ecmascript:
      function set_touchTime(value) {
          choice = 29;
      }
      function touchTime(value) {
          choice = 29;
      }''')

Group153.addChild(Script154)
Inline157 = x3d.Inline()
Inline157.setDEF("JinWink")
Inline157.setUrl(["../resources/JinWink.x3d","JinWink.x3d"])

Group153.addChild(Inline157)

Switch7.addChild(Group153)

Group6.addChild(Switch7)
Transform158 = x3d.Transform()
Transform158.setTranslation(x3d.doubleToFloat([48,63.4,0]))
TouchSensor159 = x3d.TouchSensor()
TouchSensor159.setDescription("TSJinBlink")
TouchSensor159.setDEF("JinBlink_Sensor")

Transform158.addChild(TouchSensor159)
Shape160 = x3d.Shape()
Appearance161 = x3d.Appearance()
Material162 = x3d.Material()
Material162.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance161.setMaterial(Material162)

Shape160.setAppearance(Appearance161)
Text163 = x3d.Text()
Text163.setString(["JinBlink"])
FontStyle164 = x3d.FontStyle()
FontStyle164.setSize(2.4)
FontStyle164.setSpacing(1.2)
FontStyle164.setJustify(["MIDDLE","MIDDLE"])

Text163.setFontStyle(FontStyle164)

Shape160.setGeometry(Text163)

Transform158.addChild(Shape160)
Shape165 = x3d.Shape()
Appearance166 = x3d.Appearance()
Material167 = x3d.Material()
Material167.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance166.setMaterial(Material167)

Shape165.setAppearance(Appearance166)
IndexedFaceSet168 = x3d.IndexedFaceSet()
IndexedFaceSet168.setCoordIndex([0,1,2,3,-1])
Coordinate169 = x3d.Coordinate()
Coordinate169.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet168.setCoord(Coordinate169)

Shape165.setGeometry(IndexedFaceSet168)

Transform158.addChild(Shape165)

Group6.addChild(Transform158)
ROUTE170 = x3d.ROUTE()
ROUTE170.setFromNode("JinBlink_Sensor")
ROUTE170.setFromField("touchTime")
ROUTE170.setToNode("Choice0")
ROUTE170.setToField("touchTime")

Group6.addChild(ROUTE170)
ROUTE171 = x3d.ROUTE()
ROUTE171.setFromNode("Choice0")
ROUTE171.setFromField("choice")
ROUTE171.setToNode("SceneSwitcher")
ROUTE171.setToField("whichChoice")

Group6.addChild(ROUTE171)
Transform172 = x3d.Transform()
Transform172.setTranslation(x3d.doubleToFloat([48,60.4,0]))
TouchSensor173 = x3d.TouchSensor()
TouchSensor173.setDescription("TSJinBrowLowerer")
TouchSensor173.setDEF("JinBrowLowerer_Sensor")

Transform172.addChild(TouchSensor173)
Shape174 = x3d.Shape()
Appearance175 = x3d.Appearance()
Material176 = x3d.Material()
Material176.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance175.setMaterial(Material176)

Shape174.setAppearance(Appearance175)
Text177 = x3d.Text()
Text177.setString(["JinBrowLowerer"])
FontStyle178 = x3d.FontStyle()
FontStyle178.setSize(2.4)
FontStyle178.setSpacing(1.2)
FontStyle178.setJustify(["MIDDLE","MIDDLE"])

Text177.setFontStyle(FontStyle178)

Shape174.setGeometry(Text177)

Transform172.addChild(Shape174)
Shape179 = x3d.Shape()
Appearance180 = x3d.Appearance()
Material181 = x3d.Material()
Material181.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance180.setMaterial(Material181)

Shape179.setAppearance(Appearance180)
IndexedFaceSet182 = x3d.IndexedFaceSet()
IndexedFaceSet182.setCoordIndex([0,1,2,3,-1])
Coordinate183 = x3d.Coordinate()
Coordinate183.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet182.setCoord(Coordinate183)

Shape179.setGeometry(IndexedFaceSet182)

Transform172.addChild(Shape179)

Group6.addChild(Transform172)
ROUTE184 = x3d.ROUTE()
ROUTE184.setFromNode("JinBrowLowerer_Sensor")
ROUTE184.setFromField("touchTime")
ROUTE184.setToNode("Choice1")
ROUTE184.setToField("touchTime")

Group6.addChild(ROUTE184)
ROUTE185 = x3d.ROUTE()
ROUTE185.setFromNode("Choice1")
ROUTE185.setFromField("choice")
ROUTE185.setToNode("SceneSwitcher")
ROUTE185.setToField("whichChoice")

Group6.addChild(ROUTE185)
Transform186 = x3d.Transform()
Transform186.setTranslation(x3d.doubleToFloat([48,57.39999999999999,0]))
TouchSensor187 = x3d.TouchSensor()
TouchSensor187.setDescription("TSJinCheekPuffer")
TouchSensor187.setDEF("JinCheekPuffer_Sensor")

Transform186.addChild(TouchSensor187)
Shape188 = x3d.Shape()
Appearance189 = x3d.Appearance()
Material190 = x3d.Material()
Material190.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance189.setMaterial(Material190)

Shape188.setAppearance(Appearance189)
Text191 = x3d.Text()
Text191.setString(["JinCheekPuffer"])
FontStyle192 = x3d.FontStyle()
FontStyle192.setSize(2.4)
FontStyle192.setSpacing(1.2)
FontStyle192.setJustify(["MIDDLE","MIDDLE"])

Text191.setFontStyle(FontStyle192)

Shape188.setGeometry(Text191)

Transform186.addChild(Shape188)
Shape193 = x3d.Shape()
Appearance194 = x3d.Appearance()
Material195 = x3d.Material()
Material195.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance194.setMaterial(Material195)

Shape193.setAppearance(Appearance194)
IndexedFaceSet196 = x3d.IndexedFaceSet()
IndexedFaceSet196.setCoordIndex([0,1,2,3,-1])
Coordinate197 = x3d.Coordinate()
Coordinate197.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet196.setCoord(Coordinate197)

Shape193.setGeometry(IndexedFaceSet196)

Transform186.addChild(Shape193)

Group6.addChild(Transform186)
ROUTE198 = x3d.ROUTE()
ROUTE198.setFromNode("JinCheekPuffer_Sensor")
ROUTE198.setFromField("touchTime")
ROUTE198.setToNode("Choice2")
ROUTE198.setToField("touchTime")

Group6.addChild(ROUTE198)
ROUTE199 = x3d.ROUTE()
ROUTE199.setFromNode("Choice2")
ROUTE199.setFromField("choice")
ROUTE199.setToNode("SceneSwitcher")
ROUTE199.setToField("whichChoice")

Group6.addChild(ROUTE199)
Transform200 = x3d.Transform()
Transform200.setTranslation(x3d.doubleToFloat([48,54.39999999999999,0]))
TouchSensor201 = x3d.TouchSensor()
TouchSensor201.setDescription("TSJinCheekRaiser")
TouchSensor201.setDEF("JinCheekRaiser_Sensor")

Transform200.addChild(TouchSensor201)
Shape202 = x3d.Shape()
Appearance203 = x3d.Appearance()
Material204 = x3d.Material()
Material204.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance203.setMaterial(Material204)

Shape202.setAppearance(Appearance203)
Text205 = x3d.Text()
Text205.setString(["JinCheekRaiser"])
FontStyle206 = x3d.FontStyle()
FontStyle206.setSize(2.4)
FontStyle206.setSpacing(1.2)
FontStyle206.setJustify(["MIDDLE","MIDDLE"])

Text205.setFontStyle(FontStyle206)

Shape202.setGeometry(Text205)

Transform200.addChild(Shape202)
Shape207 = x3d.Shape()
Appearance208 = x3d.Appearance()
Material209 = x3d.Material()
Material209.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance208.setMaterial(Material209)

Shape207.setAppearance(Appearance208)
IndexedFaceSet210 = x3d.IndexedFaceSet()
IndexedFaceSet210.setCoordIndex([0,1,2,3,-1])
Coordinate211 = x3d.Coordinate()
Coordinate211.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet210.setCoord(Coordinate211)

Shape207.setGeometry(IndexedFaceSet210)

Transform200.addChild(Shape207)

Group6.addChild(Transform200)
ROUTE212 = x3d.ROUTE()
ROUTE212.setFromNode("JinCheekRaiser_Sensor")
ROUTE212.setFromField("touchTime")
ROUTE212.setToNode("Choice3")
ROUTE212.setToField("touchTime")

Group6.addChild(ROUTE212)
ROUTE213 = x3d.ROUTE()
ROUTE213.setFromNode("Choice3")
ROUTE213.setFromField("choice")
ROUTE213.setToNode("SceneSwitcher")
ROUTE213.setToField("whichChoice")

Group6.addChild(ROUTE213)
Transform214 = x3d.Transform()
Transform214.setTranslation(x3d.doubleToFloat([48,51.39999999999999,0]))
TouchSensor215 = x3d.TouchSensor()
TouchSensor215.setDescription("TSJinChinRaiser")
TouchSensor215.setDEF("JinChinRaiser_Sensor")

Transform214.addChild(TouchSensor215)
Shape216 = x3d.Shape()
Appearance217 = x3d.Appearance()
Material218 = x3d.Material()
Material218.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance217.setMaterial(Material218)

Shape216.setAppearance(Appearance217)
Text219 = x3d.Text()
Text219.setString(["JinChinRaiser"])
FontStyle220 = x3d.FontStyle()
FontStyle220.setSize(2.4)
FontStyle220.setSpacing(1.2)
FontStyle220.setJustify(["MIDDLE","MIDDLE"])

Text219.setFontStyle(FontStyle220)

Shape216.setGeometry(Text219)

Transform214.addChild(Shape216)
Shape221 = x3d.Shape()
Appearance222 = x3d.Appearance()
Material223 = x3d.Material()
Material223.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance222.setMaterial(Material223)

Shape221.setAppearance(Appearance222)
IndexedFaceSet224 = x3d.IndexedFaceSet()
IndexedFaceSet224.setCoordIndex([0,1,2,3,-1])
Coordinate225 = x3d.Coordinate()
Coordinate225.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet224.setCoord(Coordinate225)

Shape221.setGeometry(IndexedFaceSet224)

Transform214.addChild(Shape221)

Group6.addChild(Transform214)
ROUTE226 = x3d.ROUTE()
ROUTE226.setFromNode("JinChinRaiser_Sensor")
ROUTE226.setFromField("touchTime")
ROUTE226.setToNode("Choice4")
ROUTE226.setToField("touchTime")

Group6.addChild(ROUTE226)
ROUTE227 = x3d.ROUTE()
ROUTE227.setFromNode("Choice4")
ROUTE227.setFromField("choice")
ROUTE227.setToNode("SceneSwitcher")
ROUTE227.setToField("whichChoice")

Group6.addChild(ROUTE227)
Transform228 = x3d.Transform()
Transform228.setTranslation(x3d.doubleToFloat([48,48.39999999999999,0]))
TouchSensor229 = x3d.TouchSensor()
TouchSensor229.setDescription("TSJinDimpler")
TouchSensor229.setDEF("JinDimpler_Sensor")

Transform228.addChild(TouchSensor229)
Shape230 = x3d.Shape()
Appearance231 = x3d.Appearance()
Material232 = x3d.Material()
Material232.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance231.setMaterial(Material232)

Shape230.setAppearance(Appearance231)
Text233 = x3d.Text()
Text233.setString(["JinDimpler"])
FontStyle234 = x3d.FontStyle()
FontStyle234.setSize(2.4)
FontStyle234.setSpacing(1.2)
FontStyle234.setJustify(["MIDDLE","MIDDLE"])

Text233.setFontStyle(FontStyle234)

Shape230.setGeometry(Text233)

Transform228.addChild(Shape230)
Shape235 = x3d.Shape()
Appearance236 = x3d.Appearance()
Material237 = x3d.Material()
Material237.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance236.setMaterial(Material237)

Shape235.setAppearance(Appearance236)
IndexedFaceSet238 = x3d.IndexedFaceSet()
IndexedFaceSet238.setCoordIndex([0,1,2,3,-1])
Coordinate239 = x3d.Coordinate()
Coordinate239.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet238.setCoord(Coordinate239)

Shape235.setGeometry(IndexedFaceSet238)

Transform228.addChild(Shape235)

Group6.addChild(Transform228)
ROUTE240 = x3d.ROUTE()
ROUTE240.setFromNode("JinDimpler_Sensor")
ROUTE240.setFromField("touchTime")
ROUTE240.setToNode("Choice5")
ROUTE240.setToField("touchTime")

Group6.addChild(ROUTE240)
ROUTE241 = x3d.ROUTE()
ROUTE241.setFromNode("Choice5")
ROUTE241.setFromField("choice")
ROUTE241.setToNode("SceneSwitcher")
ROUTE241.setToField("whichChoice")

Group6.addChild(ROUTE241)
Transform242 = x3d.Transform()
Transform242.setTranslation(x3d.doubleToFloat([48,45.39999999999999,0]))
TouchSensor243 = x3d.TouchSensor()
TouchSensor243.setDescription("TSJinEyesClosed")
TouchSensor243.setDEF("JinEyesClosed_Sensor")

Transform242.addChild(TouchSensor243)
Shape244 = x3d.Shape()
Appearance245 = x3d.Appearance()
Material246 = x3d.Material()
Material246.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance245.setMaterial(Material246)

Shape244.setAppearance(Appearance245)
Text247 = x3d.Text()
Text247.setString(["JinEyesClosed"])
FontStyle248 = x3d.FontStyle()
FontStyle248.setSize(2.4)
FontStyle248.setSpacing(1.2)
FontStyle248.setJustify(["MIDDLE","MIDDLE"])

Text247.setFontStyle(FontStyle248)

Shape244.setGeometry(Text247)

Transform242.addChild(Shape244)
Shape249 = x3d.Shape()
Appearance250 = x3d.Appearance()
Material251 = x3d.Material()
Material251.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance250.setMaterial(Material251)

Shape249.setAppearance(Appearance250)
IndexedFaceSet252 = x3d.IndexedFaceSet()
IndexedFaceSet252.setCoordIndex([0,1,2,3,-1])
Coordinate253 = x3d.Coordinate()
Coordinate253.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet252.setCoord(Coordinate253)

Shape249.setGeometry(IndexedFaceSet252)

Transform242.addChild(Shape249)

Group6.addChild(Transform242)
ROUTE254 = x3d.ROUTE()
ROUTE254.setFromNode("JinEyesClosed_Sensor")
ROUTE254.setFromField("touchTime")
ROUTE254.setToNode("Choice6")
ROUTE254.setToField("touchTime")

Group6.addChild(ROUTE254)
ROUTE255 = x3d.ROUTE()
ROUTE255.setFromNode("Choice6")
ROUTE255.setFromField("choice")
ROUTE255.setToNode("SceneSwitcher")
ROUTE255.setToField("whichChoice")

Group6.addChild(ROUTE255)
Transform256 = x3d.Transform()
Transform256.setTranslation(x3d.doubleToFloat([48,42.39999999999999,0]))
TouchSensor257 = x3d.TouchSensor()
TouchSensor257.setDescription("TSJinInnerBrowRaiser")
TouchSensor257.setDEF("JinInnerBrowRaiser_Sensor")

Transform256.addChild(TouchSensor257)
Shape258 = x3d.Shape()
Appearance259 = x3d.Appearance()
Material260 = x3d.Material()
Material260.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance259.setMaterial(Material260)

Shape258.setAppearance(Appearance259)
Text261 = x3d.Text()
Text261.setString(["JinInnerBrowRaiser"])
FontStyle262 = x3d.FontStyle()
FontStyle262.setSize(2.4)
FontStyle262.setSpacing(1.2)
FontStyle262.setJustify(["MIDDLE","MIDDLE"])

Text261.setFontStyle(FontStyle262)

Shape258.setGeometry(Text261)

Transform256.addChild(Shape258)
Shape263 = x3d.Shape()
Appearance264 = x3d.Appearance()
Material265 = x3d.Material()
Material265.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance264.setMaterial(Material265)

Shape263.setAppearance(Appearance264)
IndexedFaceSet266 = x3d.IndexedFaceSet()
IndexedFaceSet266.setCoordIndex([0,1,2,3,-1])
Coordinate267 = x3d.Coordinate()
Coordinate267.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet266.setCoord(Coordinate267)

Shape263.setGeometry(IndexedFaceSet266)

Transform256.addChild(Shape263)

Group6.addChild(Transform256)
ROUTE268 = x3d.ROUTE()
ROUTE268.setFromNode("JinInnerBrowRaiser_Sensor")
ROUTE268.setFromField("touchTime")
ROUTE268.setToNode("Choice7")
ROUTE268.setToField("touchTime")

Group6.addChild(ROUTE268)
ROUTE269 = x3d.ROUTE()
ROUTE269.setFromNode("Choice7")
ROUTE269.setFromField("choice")
ROUTE269.setToNode("SceneSwitcher")
ROUTE269.setToField("whichChoice")

Group6.addChild(ROUTE269)
Transform270 = x3d.Transform()
Transform270.setTranslation(x3d.doubleToFloat([48,39.39999999999999,0]))
TouchSensor271 = x3d.TouchSensor()
TouchSensor271.setDescription("TSJinJawDrop")
TouchSensor271.setDEF("JinJawDrop_Sensor")

Transform270.addChild(TouchSensor271)
Shape272 = x3d.Shape()
Appearance273 = x3d.Appearance()
Material274 = x3d.Material()
Material274.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance273.setMaterial(Material274)

Shape272.setAppearance(Appearance273)
Text275 = x3d.Text()
Text275.setString(["JinJawDrop"])
FontStyle276 = x3d.FontStyle()
FontStyle276.setSize(2.4)
FontStyle276.setSpacing(1.2)
FontStyle276.setJustify(["MIDDLE","MIDDLE"])

Text275.setFontStyle(FontStyle276)

Shape272.setGeometry(Text275)

Transform270.addChild(Shape272)
Shape277 = x3d.Shape()
Appearance278 = x3d.Appearance()
Material279 = x3d.Material()
Material279.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance278.setMaterial(Material279)

Shape277.setAppearance(Appearance278)
IndexedFaceSet280 = x3d.IndexedFaceSet()
IndexedFaceSet280.setCoordIndex([0,1,2,3,-1])
Coordinate281 = x3d.Coordinate()
Coordinate281.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet280.setCoord(Coordinate281)

Shape277.setGeometry(IndexedFaceSet280)

Transform270.addChild(Shape277)

Group6.addChild(Transform270)
ROUTE282 = x3d.ROUTE()
ROUTE282.setFromNode("JinJawDrop_Sensor")
ROUTE282.setFromField("touchTime")
ROUTE282.setToNode("Choice8")
ROUTE282.setToField("touchTime")

Group6.addChild(ROUTE282)
ROUTE283 = x3d.ROUTE()
ROUTE283.setFromNode("Choice8")
ROUTE283.setFromField("choice")
ROUTE283.setToNode("SceneSwitcher")
ROUTE283.setToField("whichChoice")

Group6.addChild(ROUTE283)
Transform284 = x3d.Transform()
Transform284.setTranslation(x3d.doubleToFloat([48,36.39999999999999,0]))
TouchSensor285 = x3d.TouchSensor()
TouchSensor285.setDescription("TSJinLidDroop")
TouchSensor285.setDEF("JinLidDroop_Sensor")

Transform284.addChild(TouchSensor285)
Shape286 = x3d.Shape()
Appearance287 = x3d.Appearance()
Material288 = x3d.Material()
Material288.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance287.setMaterial(Material288)

Shape286.setAppearance(Appearance287)
Text289 = x3d.Text()
Text289.setString(["JinLidDroop"])
FontStyle290 = x3d.FontStyle()
FontStyle290.setSize(2.4)
FontStyle290.setSpacing(1.2)
FontStyle290.setJustify(["MIDDLE","MIDDLE"])

Text289.setFontStyle(FontStyle290)

Shape286.setGeometry(Text289)

Transform284.addChild(Shape286)
Shape291 = x3d.Shape()
Appearance292 = x3d.Appearance()
Material293 = x3d.Material()
Material293.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance292.setMaterial(Material293)

Shape291.setAppearance(Appearance292)
IndexedFaceSet294 = x3d.IndexedFaceSet()
IndexedFaceSet294.setCoordIndex([0,1,2,3,-1])
Coordinate295 = x3d.Coordinate()
Coordinate295.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet294.setCoord(Coordinate295)

Shape291.setGeometry(IndexedFaceSet294)

Transform284.addChild(Shape291)

Group6.addChild(Transform284)
ROUTE296 = x3d.ROUTE()
ROUTE296.setFromNode("JinLidDroop_Sensor")
ROUTE296.setFromField("touchTime")
ROUTE296.setToNode("Choice9")
ROUTE296.setToField("touchTime")

Group6.addChild(ROUTE296)
ROUTE297 = x3d.ROUTE()
ROUTE297.setFromNode("Choice9")
ROUTE297.setFromField("choice")
ROUTE297.setToNode("SceneSwitcher")
ROUTE297.setToField("whichChoice")

Group6.addChild(ROUTE297)
Transform298 = x3d.Transform()
Transform298.setTranslation(x3d.doubleToFloat([48,33.39999999999999,0]))
TouchSensor299 = x3d.TouchSensor()
TouchSensor299.setDescription("TSJinLidTightener")
TouchSensor299.setDEF("JinLidTightener_Sensor")

Transform298.addChild(TouchSensor299)
Shape300 = x3d.Shape()
Appearance301 = x3d.Appearance()
Material302 = x3d.Material()
Material302.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance301.setMaterial(Material302)

Shape300.setAppearance(Appearance301)
Text303 = x3d.Text()
Text303.setString(["JinLidTightener"])
FontStyle304 = x3d.FontStyle()
FontStyle304.setSize(2.4)
FontStyle304.setSpacing(1.2)
FontStyle304.setJustify(["MIDDLE","MIDDLE"])

Text303.setFontStyle(FontStyle304)

Shape300.setGeometry(Text303)

Transform298.addChild(Shape300)
Shape305 = x3d.Shape()
Appearance306 = x3d.Appearance()
Material307 = x3d.Material()
Material307.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance306.setMaterial(Material307)

Shape305.setAppearance(Appearance306)
IndexedFaceSet308 = x3d.IndexedFaceSet()
IndexedFaceSet308.setCoordIndex([0,1,2,3,-1])
Coordinate309 = x3d.Coordinate()
Coordinate309.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet308.setCoord(Coordinate309)

Shape305.setGeometry(IndexedFaceSet308)

Transform298.addChild(Shape305)

Group6.addChild(Transform298)
ROUTE310 = x3d.ROUTE()
ROUTE310.setFromNode("JinLidTightener_Sensor")
ROUTE310.setFromField("touchTime")
ROUTE310.setToNode("Choice10")
ROUTE310.setToField("touchTime")

Group6.addChild(ROUTE310)
ROUTE311 = x3d.ROUTE()
ROUTE311.setFromNode("Choice10")
ROUTE311.setFromField("choice")
ROUTE311.setToNode("SceneSwitcher")
ROUTE311.setToField("whichChoice")

Group6.addChild(ROUTE311)
Transform312 = x3d.Transform()
Transform312.setTranslation(x3d.doubleToFloat([48,30.399999999999995,0]))
TouchSensor313 = x3d.TouchSensor()
TouchSensor313.setDescription("TSJinLipCornerDepressor")
TouchSensor313.setDEF("JinLipCornerDepressor_Sensor")

Transform312.addChild(TouchSensor313)
Shape314 = x3d.Shape()
Appearance315 = x3d.Appearance()
Material316 = x3d.Material()
Material316.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance315.setMaterial(Material316)

Shape314.setAppearance(Appearance315)
Text317 = x3d.Text()
Text317.setString(["JinLipCornerDepressor"])
FontStyle318 = x3d.FontStyle()
FontStyle318.setSize(2.4)
FontStyle318.setSpacing(1.2)
FontStyle318.setJustify(["MIDDLE","MIDDLE"])

Text317.setFontStyle(FontStyle318)

Shape314.setGeometry(Text317)

Transform312.addChild(Shape314)
Shape319 = x3d.Shape()
Appearance320 = x3d.Appearance()
Material321 = x3d.Material()
Material321.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance320.setMaterial(Material321)

Shape319.setAppearance(Appearance320)
IndexedFaceSet322 = x3d.IndexedFaceSet()
IndexedFaceSet322.setCoordIndex([0,1,2,3,-1])
Coordinate323 = x3d.Coordinate()
Coordinate323.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet322.setCoord(Coordinate323)

Shape319.setGeometry(IndexedFaceSet322)

Transform312.addChild(Shape319)

Group6.addChild(Transform312)
ROUTE324 = x3d.ROUTE()
ROUTE324.setFromNode("JinLipCornerDepressor_Sensor")
ROUTE324.setFromField("touchTime")
ROUTE324.setToNode("Choice11")
ROUTE324.setToField("touchTime")

Group6.addChild(ROUTE324)
ROUTE325 = x3d.ROUTE()
ROUTE325.setFromNode("Choice11")
ROUTE325.setFromField("choice")
ROUTE325.setToNode("SceneSwitcher")
ROUTE325.setToField("whichChoice")

Group6.addChild(ROUTE325)
Transform326 = x3d.Transform()
Transform326.setTranslation(x3d.doubleToFloat([48,27.399999999999995,0]))
TouchSensor327 = x3d.TouchSensor()
TouchSensor327.setDescription("TSJinLipCornerPuller")
TouchSensor327.setDEF("JinLipCornerPuller_Sensor")

Transform326.addChild(TouchSensor327)
Shape328 = x3d.Shape()
Appearance329 = x3d.Appearance()
Material330 = x3d.Material()
Material330.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance329.setMaterial(Material330)

Shape328.setAppearance(Appearance329)
Text331 = x3d.Text()
Text331.setString(["JinLipCornerPuller"])
FontStyle332 = x3d.FontStyle()
FontStyle332.setSize(2.4)
FontStyle332.setSpacing(1.2)
FontStyle332.setJustify(["MIDDLE","MIDDLE"])

Text331.setFontStyle(FontStyle332)

Shape328.setGeometry(Text331)

Transform326.addChild(Shape328)
Shape333 = x3d.Shape()
Appearance334 = x3d.Appearance()
Material335 = x3d.Material()
Material335.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance334.setMaterial(Material335)

Shape333.setAppearance(Appearance334)
IndexedFaceSet336 = x3d.IndexedFaceSet()
IndexedFaceSet336.setCoordIndex([0,1,2,3,-1])
Coordinate337 = x3d.Coordinate()
Coordinate337.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet336.setCoord(Coordinate337)

Shape333.setGeometry(IndexedFaceSet336)

Transform326.addChild(Shape333)

Group6.addChild(Transform326)
ROUTE338 = x3d.ROUTE()
ROUTE338.setFromNode("JinLipCornerPuller_Sensor")
ROUTE338.setFromField("touchTime")
ROUTE338.setToNode("Choice12")
ROUTE338.setToField("touchTime")

Group6.addChild(ROUTE338)
ROUTE339 = x3d.ROUTE()
ROUTE339.setFromNode("Choice12")
ROUTE339.setFromField("choice")
ROUTE339.setToNode("SceneSwitcher")
ROUTE339.setToField("whichChoice")

Group6.addChild(ROUTE339)
Transform340 = x3d.Transform()
Transform340.setTranslation(x3d.doubleToFloat([48,24.399999999999995,0]))
TouchSensor341 = x3d.TouchSensor()
TouchSensor341.setDescription("TSJinLipFunneler")
TouchSensor341.setDEF("JinLipFunneler_Sensor")

Transform340.addChild(TouchSensor341)
Shape342 = x3d.Shape()
Appearance343 = x3d.Appearance()
Material344 = x3d.Material()
Material344.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance343.setMaterial(Material344)

Shape342.setAppearance(Appearance343)
Text345 = x3d.Text()
Text345.setString(["JinLipFunneler"])
FontStyle346 = x3d.FontStyle()
FontStyle346.setSize(2.4)
FontStyle346.setSpacing(1.2)
FontStyle346.setJustify(["MIDDLE","MIDDLE"])

Text345.setFontStyle(FontStyle346)

Shape342.setGeometry(Text345)

Transform340.addChild(Shape342)
Shape347 = x3d.Shape()
Appearance348 = x3d.Appearance()
Material349 = x3d.Material()
Material349.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance348.setMaterial(Material349)

Shape347.setAppearance(Appearance348)
IndexedFaceSet350 = x3d.IndexedFaceSet()
IndexedFaceSet350.setCoordIndex([0,1,2,3,-1])
Coordinate351 = x3d.Coordinate()
Coordinate351.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet350.setCoord(Coordinate351)

Shape347.setGeometry(IndexedFaceSet350)

Transform340.addChild(Shape347)

Group6.addChild(Transform340)
ROUTE352 = x3d.ROUTE()
ROUTE352.setFromNode("JinLipFunneler_Sensor")
ROUTE352.setFromField("touchTime")
ROUTE352.setToNode("Choice13")
ROUTE352.setToField("touchTime")

Group6.addChild(ROUTE352)
ROUTE353 = x3d.ROUTE()
ROUTE353.setFromNode("Choice13")
ROUTE353.setFromField("choice")
ROUTE353.setToNode("SceneSwitcher")
ROUTE353.setToField("whichChoice")

Group6.addChild(ROUTE353)
Transform354 = x3d.Transform()
Transform354.setTranslation(x3d.doubleToFloat([48,21.399999999999995,0]))
TouchSensor355 = x3d.TouchSensor()
TouchSensor355.setDescription("TSJinLipPressor")
TouchSensor355.setDEF("JinLipPressor_Sensor")

Transform354.addChild(TouchSensor355)
Shape356 = x3d.Shape()
Appearance357 = x3d.Appearance()
Material358 = x3d.Material()
Material358.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance357.setMaterial(Material358)

Shape356.setAppearance(Appearance357)
Text359 = x3d.Text()
Text359.setString(["JinLipPressor"])
FontStyle360 = x3d.FontStyle()
FontStyle360.setSize(2.4)
FontStyle360.setSpacing(1.2)
FontStyle360.setJustify(["MIDDLE","MIDDLE"])

Text359.setFontStyle(FontStyle360)

Shape356.setGeometry(Text359)

Transform354.addChild(Shape356)
Shape361 = x3d.Shape()
Appearance362 = x3d.Appearance()
Material363 = x3d.Material()
Material363.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance362.setMaterial(Material363)

Shape361.setAppearance(Appearance362)
IndexedFaceSet364 = x3d.IndexedFaceSet()
IndexedFaceSet364.setCoordIndex([0,1,2,3,-1])
Coordinate365 = x3d.Coordinate()
Coordinate365.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet364.setCoord(Coordinate365)

Shape361.setGeometry(IndexedFaceSet364)

Transform354.addChild(Shape361)

Group6.addChild(Transform354)
ROUTE366 = x3d.ROUTE()
ROUTE366.setFromNode("JinLipPressor_Sensor")
ROUTE366.setFromField("touchTime")
ROUTE366.setToNode("Choice14")
ROUTE366.setToField("touchTime")

Group6.addChild(ROUTE366)
ROUTE367 = x3d.ROUTE()
ROUTE367.setFromNode("Choice14")
ROUTE367.setFromField("choice")
ROUTE367.setToNode("SceneSwitcher")
ROUTE367.setToField("whichChoice")

Group6.addChild(ROUTE367)
Transform368 = x3d.Transform()
Transform368.setTranslation(x3d.doubleToFloat([48,18.4,0]))
TouchSensor369 = x3d.TouchSensor()
TouchSensor369.setDescription("TSJinLipPuckerer")
TouchSensor369.setDEF("JinLipPuckerer_Sensor")

Transform368.addChild(TouchSensor369)
Shape370 = x3d.Shape()
Appearance371 = x3d.Appearance()
Material372 = x3d.Material()
Material372.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance371.setMaterial(Material372)

Shape370.setAppearance(Appearance371)
Text373 = x3d.Text()
Text373.setString(["JinLipPuckerer"])
FontStyle374 = x3d.FontStyle()
FontStyle374.setSize(2.4)
FontStyle374.setSpacing(1.2)
FontStyle374.setJustify(["MIDDLE","MIDDLE"])

Text373.setFontStyle(FontStyle374)

Shape370.setGeometry(Text373)

Transform368.addChild(Shape370)
Shape375 = x3d.Shape()
Appearance376 = x3d.Appearance()
Material377 = x3d.Material()
Material377.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance376.setMaterial(Material377)

Shape375.setAppearance(Appearance376)
IndexedFaceSet378 = x3d.IndexedFaceSet()
IndexedFaceSet378.setCoordIndex([0,1,2,3,-1])
Coordinate379 = x3d.Coordinate()
Coordinate379.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet378.setCoord(Coordinate379)

Shape375.setGeometry(IndexedFaceSet378)

Transform368.addChild(Shape375)

Group6.addChild(Transform368)
ROUTE380 = x3d.ROUTE()
ROUTE380.setFromNode("JinLipPuckerer_Sensor")
ROUTE380.setFromField("touchTime")
ROUTE380.setToNode("Choice15")
ROUTE380.setToField("touchTime")

Group6.addChild(ROUTE380)
ROUTE381 = x3d.ROUTE()
ROUTE381.setFromNode("Choice15")
ROUTE381.setFromField("choice")
ROUTE381.setToNode("SceneSwitcher")
ROUTE381.setToField("whichChoice")

Group6.addChild(ROUTE381)
Transform382 = x3d.Transform()
Transform382.setTranslation(x3d.doubleToFloat([48,15.399999999999997,0]))
TouchSensor383 = x3d.TouchSensor()
TouchSensor383.setDescription("TSJinLipsPart")
TouchSensor383.setDEF("JinLipsPart_Sensor")

Transform382.addChild(TouchSensor383)
Shape384 = x3d.Shape()
Appearance385 = x3d.Appearance()
Material386 = x3d.Material()
Material386.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance385.setMaterial(Material386)

Shape384.setAppearance(Appearance385)
Text387 = x3d.Text()
Text387.setString(["JinLipsPart"])
FontStyle388 = x3d.FontStyle()
FontStyle388.setSize(2.4)
FontStyle388.setSpacing(1.2)
FontStyle388.setJustify(["MIDDLE","MIDDLE"])

Text387.setFontStyle(FontStyle388)

Shape384.setGeometry(Text387)

Transform382.addChild(Shape384)
Shape389 = x3d.Shape()
Appearance390 = x3d.Appearance()
Material391 = x3d.Material()
Material391.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance390.setMaterial(Material391)

Shape389.setAppearance(Appearance390)
IndexedFaceSet392 = x3d.IndexedFaceSet()
IndexedFaceSet392.setCoordIndex([0,1,2,3,-1])
Coordinate393 = x3d.Coordinate()
Coordinate393.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet392.setCoord(Coordinate393)

Shape389.setGeometry(IndexedFaceSet392)

Transform382.addChild(Shape389)

Group6.addChild(Transform382)
ROUTE394 = x3d.ROUTE()
ROUTE394.setFromNode("JinLipsPart_Sensor")
ROUTE394.setFromField("touchTime")
ROUTE394.setToNode("Choice16")
ROUTE394.setToField("touchTime")

Group6.addChild(ROUTE394)
ROUTE395 = x3d.ROUTE()
ROUTE395.setFromNode("Choice16")
ROUTE395.setFromField("choice")
ROUTE395.setToNode("SceneSwitcher")
ROUTE395.setToField("whichChoice")

Group6.addChild(ROUTE395)
Transform396 = x3d.Transform()
Transform396.setTranslation(x3d.doubleToFloat([48,12.399999999999999,0]))
TouchSensor397 = x3d.TouchSensor()
TouchSensor397.setDescription("TSJinLipStretcher")
TouchSensor397.setDEF("JinLipStretcher_Sensor")

Transform396.addChild(TouchSensor397)
Shape398 = x3d.Shape()
Appearance399 = x3d.Appearance()
Material400 = x3d.Material()
Material400.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance399.setMaterial(Material400)

Shape398.setAppearance(Appearance399)
Text401 = x3d.Text()
Text401.setString(["JinLipStretcher"])
FontStyle402 = x3d.FontStyle()
FontStyle402.setSize(2.4)
FontStyle402.setSpacing(1.2)
FontStyle402.setJustify(["MIDDLE","MIDDLE"])

Text401.setFontStyle(FontStyle402)

Shape398.setGeometry(Text401)

Transform396.addChild(Shape398)
Shape403 = x3d.Shape()
Appearance404 = x3d.Appearance()
Material405 = x3d.Material()
Material405.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance404.setMaterial(Material405)

Shape403.setAppearance(Appearance404)
IndexedFaceSet406 = x3d.IndexedFaceSet()
IndexedFaceSet406.setCoordIndex([0,1,2,3,-1])
Coordinate407 = x3d.Coordinate()
Coordinate407.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet406.setCoord(Coordinate407)

Shape403.setGeometry(IndexedFaceSet406)

Transform396.addChild(Shape403)

Group6.addChild(Transform396)
ROUTE408 = x3d.ROUTE()
ROUTE408.setFromNode("JinLipStretcher_Sensor")
ROUTE408.setFromField("touchTime")
ROUTE408.setToNode("Choice17")
ROUTE408.setToField("touchTime")

Group6.addChild(ROUTE408)
ROUTE409 = x3d.ROUTE()
ROUTE409.setFromNode("Choice17")
ROUTE409.setFromField("choice")
ROUTE409.setToNode("SceneSwitcher")
ROUTE409.setToField("whichChoice")

Group6.addChild(ROUTE409)
Transform410 = x3d.Transform()
Transform410.setTranslation(x3d.doubleToFloat([48,9.399999999999999,0]))
TouchSensor411 = x3d.TouchSensor()
TouchSensor411.setDescription("TSJinLipSuck")
TouchSensor411.setDEF("JinLipSuck_Sensor")

Transform410.addChild(TouchSensor411)
Shape412 = x3d.Shape()
Appearance413 = x3d.Appearance()
Material414 = x3d.Material()
Material414.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance413.setMaterial(Material414)

Shape412.setAppearance(Appearance413)
Text415 = x3d.Text()
Text415.setString(["JinLipSuck"])
FontStyle416 = x3d.FontStyle()
FontStyle416.setSize(2.4)
FontStyle416.setSpacing(1.2)
FontStyle416.setJustify(["MIDDLE","MIDDLE"])

Text415.setFontStyle(FontStyle416)

Shape412.setGeometry(Text415)

Transform410.addChild(Shape412)
Shape417 = x3d.Shape()
Appearance418 = x3d.Appearance()
Material419 = x3d.Material()
Material419.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance418.setMaterial(Material419)

Shape417.setAppearance(Appearance418)
IndexedFaceSet420 = x3d.IndexedFaceSet()
IndexedFaceSet420.setCoordIndex([0,1,2,3,-1])
Coordinate421 = x3d.Coordinate()
Coordinate421.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet420.setCoord(Coordinate421)

Shape417.setGeometry(IndexedFaceSet420)

Transform410.addChild(Shape417)

Group6.addChild(Transform410)
ROUTE422 = x3d.ROUTE()
ROUTE422.setFromNode("JinLipSuck_Sensor")
ROUTE422.setFromField("touchTime")
ROUTE422.setToNode("Choice18")
ROUTE422.setToField("touchTime")

Group6.addChild(ROUTE422)
ROUTE423 = x3d.ROUTE()
ROUTE423.setFromNode("Choice18")
ROUTE423.setFromField("choice")
ROUTE423.setToNode("SceneSwitcher")
ROUTE423.setToField("whichChoice")

Group6.addChild(ROUTE423)
Transform424 = x3d.Transform()
Transform424.setTranslation(x3d.doubleToFloat([48,6.399999999999999,0]))
TouchSensor425 = x3d.TouchSensor()
TouchSensor425.setDescription("TSJinLipTightener")
TouchSensor425.setDEF("JinLipTightener_Sensor")

Transform424.addChild(TouchSensor425)
Shape426 = x3d.Shape()
Appearance427 = x3d.Appearance()
Material428 = x3d.Material()
Material428.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance427.setMaterial(Material428)

Shape426.setAppearance(Appearance427)
Text429 = x3d.Text()
Text429.setString(["JinLipTightener"])
FontStyle430 = x3d.FontStyle()
FontStyle430.setSize(2.4)
FontStyle430.setSpacing(1.2)
FontStyle430.setJustify(["MIDDLE","MIDDLE"])

Text429.setFontStyle(FontStyle430)

Shape426.setGeometry(Text429)

Transform424.addChild(Shape426)
Shape431 = x3d.Shape()
Appearance432 = x3d.Appearance()
Material433 = x3d.Material()
Material433.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance432.setMaterial(Material433)

Shape431.setAppearance(Appearance432)
IndexedFaceSet434 = x3d.IndexedFaceSet()
IndexedFaceSet434.setCoordIndex([0,1,2,3,-1])
Coordinate435 = x3d.Coordinate()
Coordinate435.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet434.setCoord(Coordinate435)

Shape431.setGeometry(IndexedFaceSet434)

Transform424.addChild(Shape431)

Group6.addChild(Transform424)
ROUTE436 = x3d.ROUTE()
ROUTE436.setFromNode("JinLipTightener_Sensor")
ROUTE436.setFromField("touchTime")
ROUTE436.setToNode("Choice19")
ROUTE436.setToField("touchTime")

Group6.addChild(ROUTE436)
ROUTE437 = x3d.ROUTE()
ROUTE437.setFromNode("Choice19")
ROUTE437.setFromField("choice")
ROUTE437.setToNode("SceneSwitcher")
ROUTE437.setToField("whichChoice")

Group6.addChild(ROUTE437)
Transform438 = x3d.Transform()
Transform438.setTranslation(x3d.doubleToFloat([48,3.399999999999995,0]))
TouchSensor439 = x3d.TouchSensor()
TouchSensor439.setDescription("TSJinLowerLipDepressor")
TouchSensor439.setDEF("JinLowerLipDepressor_Sensor")

Transform438.addChild(TouchSensor439)
Shape440 = x3d.Shape()
Appearance441 = x3d.Appearance()
Material442 = x3d.Material()
Material442.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance441.setMaterial(Material442)

Shape440.setAppearance(Appearance441)
Text443 = x3d.Text()
Text443.setString(["JinLowerLipDepressor"])
FontStyle444 = x3d.FontStyle()
FontStyle444.setSize(2.4)
FontStyle444.setSpacing(1.2)
FontStyle444.setJustify(["MIDDLE","MIDDLE"])

Text443.setFontStyle(FontStyle444)

Shape440.setGeometry(Text443)

Transform438.addChild(Shape440)
Shape445 = x3d.Shape()
Appearance446 = x3d.Appearance()
Material447 = x3d.Material()
Material447.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance446.setMaterial(Material447)

Shape445.setAppearance(Appearance446)
IndexedFaceSet448 = x3d.IndexedFaceSet()
IndexedFaceSet448.setCoordIndex([0,1,2,3,-1])
Coordinate449 = x3d.Coordinate()
Coordinate449.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet448.setCoord(Coordinate449)

Shape445.setGeometry(IndexedFaceSet448)

Transform438.addChild(Shape445)

Group6.addChild(Transform438)
ROUTE450 = x3d.ROUTE()
ROUTE450.setFromNode("JinLowerLipDepressor_Sensor")
ROUTE450.setFromField("touchTime")
ROUTE450.setToNode("Choice20")
ROUTE450.setToField("touchTime")

Group6.addChild(ROUTE450)
ROUTE451 = x3d.ROUTE()
ROUTE451.setFromNode("Choice20")
ROUTE451.setFromField("choice")
ROUTE451.setToNode("SceneSwitcher")
ROUTE451.setToField("whichChoice")

Group6.addChild(ROUTE451)
Transform452 = x3d.Transform()
Transform452.setTranslation(x3d.doubleToFloat([48,0.399999999999995,0]))
TouchSensor453 = x3d.TouchSensor()
TouchSensor453.setDescription("TSJinMouthStretch")
TouchSensor453.setDEF("JinMouthStretch_Sensor")

Transform452.addChild(TouchSensor453)
Shape454 = x3d.Shape()
Appearance455 = x3d.Appearance()
Material456 = x3d.Material()
Material456.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance455.setMaterial(Material456)

Shape454.setAppearance(Appearance455)
Text457 = x3d.Text()
Text457.setString(["JinMouthStretch"])
FontStyle458 = x3d.FontStyle()
FontStyle458.setSize(2.4)
FontStyle458.setSpacing(1.2)
FontStyle458.setJustify(["MIDDLE","MIDDLE"])

Text457.setFontStyle(FontStyle458)

Shape454.setGeometry(Text457)

Transform452.addChild(Shape454)
Shape459 = x3d.Shape()
Appearance460 = x3d.Appearance()
Material461 = x3d.Material()
Material461.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance460.setMaterial(Material461)

Shape459.setAppearance(Appearance460)
IndexedFaceSet462 = x3d.IndexedFaceSet()
IndexedFaceSet462.setCoordIndex([0,1,2,3,-1])
Coordinate463 = x3d.Coordinate()
Coordinate463.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet462.setCoord(Coordinate463)

Shape459.setGeometry(IndexedFaceSet462)

Transform452.addChild(Shape459)

Group6.addChild(Transform452)
ROUTE464 = x3d.ROUTE()
ROUTE464.setFromNode("JinMouthStretch_Sensor")
ROUTE464.setFromField("touchTime")
ROUTE464.setToNode("Choice21")
ROUTE464.setToField("touchTime")

Group6.addChild(ROUTE464)
ROUTE465 = x3d.ROUTE()
ROUTE465.setFromNode("Choice21")
ROUTE465.setFromField("choice")
ROUTE465.setToNode("SceneSwitcher")
ROUTE465.setToField("whichChoice")

Group6.addChild(ROUTE465)
Transform466 = x3d.Transform()
Transform466.setTranslation(x3d.doubleToFloat([48,-2.6000000000000085,0]))
TouchSensor467 = x3d.TouchSensor()
TouchSensor467.setDescription("TSJinNasolabialDeepener")
TouchSensor467.setDEF("JinNasolabialDeepener_Sensor")

Transform466.addChild(TouchSensor467)
Shape468 = x3d.Shape()
Appearance469 = x3d.Appearance()
Material470 = x3d.Material()
Material470.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance469.setMaterial(Material470)

Shape468.setAppearance(Appearance469)
Text471 = x3d.Text()
Text471.setString(["JinNasolabialDeepener"])
FontStyle472 = x3d.FontStyle()
FontStyle472.setSize(2.4)
FontStyle472.setSpacing(1.2)
FontStyle472.setJustify(["MIDDLE","MIDDLE"])

Text471.setFontStyle(FontStyle472)

Shape468.setGeometry(Text471)

Transform466.addChild(Shape468)
Shape473 = x3d.Shape()
Appearance474 = x3d.Appearance()
Material475 = x3d.Material()
Material475.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance474.setMaterial(Material475)

Shape473.setAppearance(Appearance474)
IndexedFaceSet476 = x3d.IndexedFaceSet()
IndexedFaceSet476.setCoordIndex([0,1,2,3,-1])
Coordinate477 = x3d.Coordinate()
Coordinate477.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet476.setCoord(Coordinate477)

Shape473.setGeometry(IndexedFaceSet476)

Transform466.addChild(Shape473)

Group6.addChild(Transform466)
ROUTE478 = x3d.ROUTE()
ROUTE478.setFromNode("JinNasolabialDeepener_Sensor")
ROUTE478.setFromField("touchTime")
ROUTE478.setToNode("Choice22")
ROUTE478.setToField("touchTime")

Group6.addChild(ROUTE478)
ROUTE479 = x3d.ROUTE()
ROUTE479.setFromNode("Choice22")
ROUTE479.setFromField("choice")
ROUTE479.setToNode("SceneSwitcher")
ROUTE479.setToField("whichChoice")

Group6.addChild(ROUTE479)
Transform480 = x3d.Transform()
Transform480.setTranslation(x3d.doubleToFloat([48,-5.6000000000000085,0]))
TouchSensor481 = x3d.TouchSensor()
TouchSensor481.setDescription("TSJinNoseWrinkler")
TouchSensor481.setDEF("JinNoseWrinkler_Sensor")

Transform480.addChild(TouchSensor481)
Shape482 = x3d.Shape()
Appearance483 = x3d.Appearance()
Material484 = x3d.Material()
Material484.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance483.setMaterial(Material484)

Shape482.setAppearance(Appearance483)
Text485 = x3d.Text()
Text485.setString(["JinNoseWrinkler"])
FontStyle486 = x3d.FontStyle()
FontStyle486.setSize(2.4)
FontStyle486.setSpacing(1.2)
FontStyle486.setJustify(["MIDDLE","MIDDLE"])

Text485.setFontStyle(FontStyle486)

Shape482.setGeometry(Text485)

Transform480.addChild(Shape482)
Shape487 = x3d.Shape()
Appearance488 = x3d.Appearance()
Material489 = x3d.Material()
Material489.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance488.setMaterial(Material489)

Shape487.setAppearance(Appearance488)
IndexedFaceSet490 = x3d.IndexedFaceSet()
IndexedFaceSet490.setCoordIndex([0,1,2,3,-1])
Coordinate491 = x3d.Coordinate()
Coordinate491.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet490.setCoord(Coordinate491)

Shape487.setGeometry(IndexedFaceSet490)

Transform480.addChild(Shape487)

Group6.addChild(Transform480)
ROUTE492 = x3d.ROUTE()
ROUTE492.setFromNode("JinNoseWrinkler_Sensor")
ROUTE492.setFromField("touchTime")
ROUTE492.setToNode("Choice23")
ROUTE492.setToField("touchTime")

Group6.addChild(ROUTE492)
ROUTE493 = x3d.ROUTE()
ROUTE493.setFromNode("Choice23")
ROUTE493.setFromField("choice")
ROUTE493.setToNode("SceneSwitcher")
ROUTE493.setToField("whichChoice")

Group6.addChild(ROUTE493)
Transform494 = x3d.Transform()
Transform494.setTranslation(x3d.doubleToFloat([48,-8.600000000000009,0]))
TouchSensor495 = x3d.TouchSensor()
TouchSensor495.setDescription("TSJinOuterBrowRaiser")
TouchSensor495.setDEF("JinOuterBrowRaiser_Sensor")

Transform494.addChild(TouchSensor495)
Shape496 = x3d.Shape()
Appearance497 = x3d.Appearance()
Material498 = x3d.Material()
Material498.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance497.setMaterial(Material498)

Shape496.setAppearance(Appearance497)
Text499 = x3d.Text()
Text499.setString(["JinOuterBrowRaiser"])
FontStyle500 = x3d.FontStyle()
FontStyle500.setSize(2.4)
FontStyle500.setSpacing(1.2)
FontStyle500.setJustify(["MIDDLE","MIDDLE"])

Text499.setFontStyle(FontStyle500)

Shape496.setGeometry(Text499)

Transform494.addChild(Shape496)
Shape501 = x3d.Shape()
Appearance502 = x3d.Appearance()
Material503 = x3d.Material()
Material503.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance502.setMaterial(Material503)

Shape501.setAppearance(Appearance502)
IndexedFaceSet504 = x3d.IndexedFaceSet()
IndexedFaceSet504.setCoordIndex([0,1,2,3,-1])
Coordinate505 = x3d.Coordinate()
Coordinate505.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet504.setCoord(Coordinate505)

Shape501.setGeometry(IndexedFaceSet504)

Transform494.addChild(Shape501)

Group6.addChild(Transform494)
ROUTE506 = x3d.ROUTE()
ROUTE506.setFromNode("JinOuterBrowRaiser_Sensor")
ROUTE506.setFromField("touchTime")
ROUTE506.setToNode("Choice24")
ROUTE506.setToField("touchTime")

Group6.addChild(ROUTE506)
ROUTE507 = x3d.ROUTE()
ROUTE507.setFromNode("Choice24")
ROUTE507.setFromField("choice")
ROUTE507.setToNode("SceneSwitcher")
ROUTE507.setToField("whichChoice")

Group6.addChild(ROUTE507)
Transform508 = x3d.Transform()
Transform508.setTranslation(x3d.doubleToFloat([48,-11.600000000000009,0]))
TouchSensor509 = x3d.TouchSensor()
TouchSensor509.setDescription("TSJinSlit")
TouchSensor509.setDEF("JinSlit_Sensor")

Transform508.addChild(TouchSensor509)
Shape510 = x3d.Shape()
Appearance511 = x3d.Appearance()
Material512 = x3d.Material()
Material512.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance511.setMaterial(Material512)

Shape510.setAppearance(Appearance511)
Text513 = x3d.Text()
Text513.setString(["JinSlit"])
FontStyle514 = x3d.FontStyle()
FontStyle514.setSize(2.4)
FontStyle514.setSpacing(1.2)
FontStyle514.setJustify(["MIDDLE","MIDDLE"])

Text513.setFontStyle(FontStyle514)

Shape510.setGeometry(Text513)

Transform508.addChild(Shape510)
Shape515 = x3d.Shape()
Appearance516 = x3d.Appearance()
Material517 = x3d.Material()
Material517.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance516.setMaterial(Material517)

Shape515.setAppearance(Appearance516)
IndexedFaceSet518 = x3d.IndexedFaceSet()
IndexedFaceSet518.setCoordIndex([0,1,2,3,-1])
Coordinate519 = x3d.Coordinate()
Coordinate519.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet518.setCoord(Coordinate519)

Shape515.setGeometry(IndexedFaceSet518)

Transform508.addChild(Shape515)

Group6.addChild(Transform508)
ROUTE520 = x3d.ROUTE()
ROUTE520.setFromNode("JinSlit_Sensor")
ROUTE520.setFromField("touchTime")
ROUTE520.setToNode("Choice25")
ROUTE520.setToField("touchTime")

Group6.addChild(ROUTE520)
ROUTE521 = x3d.ROUTE()
ROUTE521.setFromNode("Choice25")
ROUTE521.setFromField("choice")
ROUTE521.setToNode("SceneSwitcher")
ROUTE521.setToField("whichChoice")

Group6.addChild(ROUTE521)
Transform522 = x3d.Transform()
Transform522.setTranslation(x3d.doubleToFloat([48,-14.600000000000001,0]))
TouchSensor523 = x3d.TouchSensor()
TouchSensor523.setDescription("TSJinSquint")
TouchSensor523.setDEF("JinSquint_Sensor")

Transform522.addChild(TouchSensor523)
Shape524 = x3d.Shape()
Appearance525 = x3d.Appearance()
Material526 = x3d.Material()
Material526.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance525.setMaterial(Material526)

Shape524.setAppearance(Appearance525)
Text527 = x3d.Text()
Text527.setString(["JinSquint"])
FontStyle528 = x3d.FontStyle()
FontStyle528.setSize(2.4)
FontStyle528.setSpacing(1.2)
FontStyle528.setJustify(["MIDDLE","MIDDLE"])

Text527.setFontStyle(FontStyle528)

Shape524.setGeometry(Text527)

Transform522.addChild(Shape524)
Shape529 = x3d.Shape()
Appearance530 = x3d.Appearance()
Material531 = x3d.Material()
Material531.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance530.setMaterial(Material531)

Shape529.setAppearance(Appearance530)
IndexedFaceSet532 = x3d.IndexedFaceSet()
IndexedFaceSet532.setCoordIndex([0,1,2,3,-1])
Coordinate533 = x3d.Coordinate()
Coordinate533.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet532.setCoord(Coordinate533)

Shape529.setGeometry(IndexedFaceSet532)

Transform522.addChild(Shape529)

Group6.addChild(Transform522)
ROUTE534 = x3d.ROUTE()
ROUTE534.setFromNode("JinSquint_Sensor")
ROUTE534.setFromField("touchTime")
ROUTE534.setToNode("Choice26")
ROUTE534.setToField("touchTime")

Group6.addChild(ROUTE534)
ROUTE535 = x3d.ROUTE()
ROUTE535.setFromNode("Choice26")
ROUTE535.setFromField("choice")
ROUTE535.setToNode("SceneSwitcher")
ROUTE535.setToField("whichChoice")

Group6.addChild(ROUTE535)
Transform536 = x3d.Transform()
Transform536.setTranslation(x3d.doubleToFloat([48,-17.6,0]))
TouchSensor537 = x3d.TouchSensor()
TouchSensor537.setDescription("TSJinUpperLidRaiser")
TouchSensor537.setDEF("JinUpperLidRaiser_Sensor")

Transform536.addChild(TouchSensor537)
Shape538 = x3d.Shape()
Appearance539 = x3d.Appearance()
Material540 = x3d.Material()
Material540.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance539.setMaterial(Material540)

Shape538.setAppearance(Appearance539)
Text541 = x3d.Text()
Text541.setString(["JinUpperLidRaiser"])
FontStyle542 = x3d.FontStyle()
FontStyle542.setSize(2.4)
FontStyle542.setSpacing(1.2)
FontStyle542.setJustify(["MIDDLE","MIDDLE"])

Text541.setFontStyle(FontStyle542)

Shape538.setGeometry(Text541)

Transform536.addChild(Shape538)
Shape543 = x3d.Shape()
Appearance544 = x3d.Appearance()
Material545 = x3d.Material()
Material545.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance544.setMaterial(Material545)

Shape543.setAppearance(Appearance544)
IndexedFaceSet546 = x3d.IndexedFaceSet()
IndexedFaceSet546.setCoordIndex([0,1,2,3,-1])
Coordinate547 = x3d.Coordinate()
Coordinate547.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet546.setCoord(Coordinate547)

Shape543.setGeometry(IndexedFaceSet546)

Transform536.addChild(Shape543)

Group6.addChild(Transform536)
ROUTE548 = x3d.ROUTE()
ROUTE548.setFromNode("JinUpperLidRaiser_Sensor")
ROUTE548.setFromField("touchTime")
ROUTE548.setToNode("Choice27")
ROUTE548.setToField("touchTime")

Group6.addChild(ROUTE548)
ROUTE549 = x3d.ROUTE()
ROUTE549.setFromNode("Choice27")
ROUTE549.setFromField("choice")
ROUTE549.setToNode("SceneSwitcher")
ROUTE549.setToField("whichChoice")

Group6.addChild(ROUTE549)
Transform550 = x3d.Transform()
Transform550.setTranslation(x3d.doubleToFloat([48,-20.6,0]))
TouchSensor551 = x3d.TouchSensor()
TouchSensor551.setDescription("TSJinUpperLipRaiser")
TouchSensor551.setDEF("JinUpperLipRaiser_Sensor")

Transform550.addChild(TouchSensor551)
Shape552 = x3d.Shape()
Appearance553 = x3d.Appearance()
Material554 = x3d.Material()
Material554.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance553.setMaterial(Material554)

Shape552.setAppearance(Appearance553)
Text555 = x3d.Text()
Text555.setString(["JinUpperLipRaiser"])
FontStyle556 = x3d.FontStyle()
FontStyle556.setSize(2.4)
FontStyle556.setSpacing(1.2)
FontStyle556.setJustify(["MIDDLE","MIDDLE"])

Text555.setFontStyle(FontStyle556)

Shape552.setGeometry(Text555)

Transform550.addChild(Shape552)
Shape557 = x3d.Shape()
Appearance558 = x3d.Appearance()
Material559 = x3d.Material()
Material559.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance558.setMaterial(Material559)

Shape557.setAppearance(Appearance558)
IndexedFaceSet560 = x3d.IndexedFaceSet()
IndexedFaceSet560.setCoordIndex([0,1,2,3,-1])
Coordinate561 = x3d.Coordinate()
Coordinate561.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet560.setCoord(Coordinate561)

Shape557.setGeometry(IndexedFaceSet560)

Transform550.addChild(Shape557)

Group6.addChild(Transform550)
ROUTE562 = x3d.ROUTE()
ROUTE562.setFromNode("JinUpperLipRaiser_Sensor")
ROUTE562.setFromField("touchTime")
ROUTE562.setToNode("Choice28")
ROUTE562.setToField("touchTime")

Group6.addChild(ROUTE562)
ROUTE563 = x3d.ROUTE()
ROUTE563.setFromNode("Choice28")
ROUTE563.setFromField("choice")
ROUTE563.setToNode("SceneSwitcher")
ROUTE563.setToField("whichChoice")

Group6.addChild(ROUTE563)
Transform564 = x3d.Transform()
Transform564.setTranslation(x3d.doubleToFloat([48,-23.599999999999994,0]))
TouchSensor565 = x3d.TouchSensor()
TouchSensor565.setDescription("TSJinWink")
TouchSensor565.setDEF("JinWink_Sensor")

Transform564.addChild(TouchSensor565)
Shape566 = x3d.Shape()
Appearance567 = x3d.Appearance()
Material568 = x3d.Material()
Material568.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance567.setMaterial(Material568)

Shape566.setAppearance(Appearance567)
Text569 = x3d.Text()
Text569.setString(["JinWink"])
FontStyle570 = x3d.FontStyle()
FontStyle570.setSize(2.4)
FontStyle570.setSpacing(1.2)
FontStyle570.setJustify(["MIDDLE","MIDDLE"])

Text569.setFontStyle(FontStyle570)

Shape566.setGeometry(Text569)

Transform564.addChild(Shape566)
Shape571 = x3d.Shape()
Appearance572 = x3d.Appearance()
Material573 = x3d.Material()
Material573.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance572.setMaterial(Material573)

Shape571.setAppearance(Appearance572)
IndexedFaceSet574 = x3d.IndexedFaceSet()
IndexedFaceSet574.setCoordIndex([0,1,2,3,-1])
Coordinate575 = x3d.Coordinate()
Coordinate575.setPoint(x3d.doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]))

IndexedFaceSet574.setCoord(Coordinate575)

Shape571.setGeometry(IndexedFaceSet574)

Transform564.addChild(Shape571)

Group6.addChild(Transform564)
ROUTE576 = x3d.ROUTE()
ROUTE576.setFromNode("JinWink_Sensor")
ROUTE576.setFromField("touchTime")
ROUTE576.setToNode("Choice29")
ROUTE576.setToField("touchTime")

Group6.addChild(ROUTE576)
ROUTE577 = x3d.ROUTE()
ROUTE577.setFromNode("Choice29")
ROUTE577.setFromField("choice")
ROUTE577.setToNode("SceneSwitcher")
ROUTE577.setToField("whichChoice")

Group6.addChild(ROUTE577)

Scene4.addChild(Group6)

X3D0.setScene(Scene4)
X3D0.toFileX3D("../data/MenuJin.new.graalpy.x3d")
X3D0.toFileJSON("../data/MenuJin.new.graalpy.x3dj")
