import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Full")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("personal.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("identifier")
meta3.setContent("https://someAddress/somePath/personal.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("John's Portfolio")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("generator")
meta5.setContent("vim and X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta5)

X3D0.setHead(head1)
Scene6 = x3d.Scene()
Viewpoint7 = x3d.Viewpoint()
Viewpoint7.setDescription("Tour Views")
Viewpoint7.setPosition(x3d.doubleToFloat([0,0,12]))

Scene6.addChild(Viewpoint7)
Switch8 = x3d.Switch()
Switch8.setDEF("SceneSwitcher")
Switch8.setWhichChoice(0)

Switch8.addComments(x3d.CommentsBlock("""<Inline url='\"../data/myextrusion.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d\"'/>"""))

Switch8.addComments(x3d.CommentsBlock("""<Inline url='\"../data/ballx_ite.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/ballx_ite.x3d\"'/>"""))

Switch8.addComments(x3d.CommentsBlock("""<Inline url='\"../data/flower.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flower.x3d\"'/>"""))

Switch8.addComments(x3d.CommentsBlock("""<Inline url='\"../data/flower3.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d\"'/>"""))

Switch8.addComments(x3d.CommentsBlock("""<Inline url='\"../data/flowers.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d\"'/>"""))

Switch8.addComments(x3d.CommentsBlock("""<Inline url='\"../data/flowers2.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d\"'/>"""))

Switch8.addComments(x3d.CommentsBlock("""<Inline url='\"../data/flowers4.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d\"'/>"""))

Switch8.addComments(x3d.CommentsBlock("""<Inline url='\"../data/flowers7.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d\"'/>"""))
Inline9 = x3d.Inline()
Inline9.setUrl(["../data/force-tidy.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/force-tidy.x3d"])

Switch8.addChild(Inline9)

Scene6.addChild(Switch8)

Scene6.addComments(x3d.CommentsBlock("""<Script DEF=\"Choice0\">"""))

Scene6.addComments(x3d.CommentsBlock("""<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<![CDATA[ ecmascript: function set_touchTime(value) { choice = 0; } function touchTime(value) { choice = 0; } ]]>"""))

Scene6.addComments(x3d.CommentsBlock("""</Script>"""))

Scene6.addComments(x3d.CommentsBlock("""<Transform translation=\"0 4 0\">"""))

Scene6.addComments(x3d.CommentsBlock("""<TouchSensor description=\"Ball Prism\" DEF=\"BallPrism_Sensor\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Material diffuseColor=\"1 1 1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Text string='\"Ball Prism\"'>"""))

Scene6.addComments(x3d.CommentsBlock("""<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Text>"""))

Scene6.addComments(x3d.CommentsBlock("""</Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Material diffuseColor=\"0 0 1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<IndexedFaceSet coordIndex='0 1 2 3 -1'>"""))

Scene6.addComments(x3d.CommentsBlock("""<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</IndexedFaceSet>"""))

Scene6.addComments(x3d.CommentsBlock("""</Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""</Transform>"""))

Scene6.addComments(x3d.CommentsBlock("""<ROUTE fromNode=\"BallPrism_Sensor\" fromField=\"touchTime\" toNode=\"Choice0\" toField=\"touchTime\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<ROUTE fromNode=\"Choice0\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<Script DEF=\"Choice1\">"""))

Scene6.addComments(x3d.CommentsBlock("""<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<![CDATA[ ecmascript: function set_touchTime(value) { choice = 1; } function touchTime(value) { choice = 1; } ]]>"""))

Scene6.addComments(x3d.CommentsBlock("""</Script>"""))

Scene6.addComments(x3d.CommentsBlock("""<Transform translation=\"0 3 0\">"""))

Scene6.addComments(x3d.CommentsBlock("""<TouchSensor description=\"Floating Extrusion\" DEF=\"FloatingExtrusion_Sensor\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Material diffuseColor=\"1 1 1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Text string='\"Floating Extrusion\"'>"""))

Scene6.addComments(x3d.CommentsBlock("""<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Text>"""))

Scene6.addComments(x3d.CommentsBlock("""</Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Material diffuseColor=\"0 0 1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<IndexedFaceSet coordIndex='0 1 2 3 -1'>"""))

Scene6.addComments(x3d.CommentsBlock("""<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</IndexedFaceSet>"""))

Scene6.addComments(x3d.CommentsBlock("""</Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""</Transform>"""))

Scene6.addComments(x3d.CommentsBlock("""<ROUTE fromNode=\"FloatingExtrusion_Sensor\" fromField=\"touchTime\" toNode=\"Choice1\" toField=\"touchTime\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<ROUTE fromNode=\"Choice1\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<Script DEF=\"Choice2\">"""))

Scene6.addComments(x3d.CommentsBlock("""<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<![CDATA[ ecmascript: function set_touchTime(value) { choice = 2; } function touchTime(value) { choice = 2; } ]]>"""))

Scene6.addComments(x3d.CommentsBlock("""</Script>"""))

Scene6.addComments(x3d.CommentsBlock("""<Transform translation=\"0 2 0\">"""))

Scene6.addComments(x3d.CommentsBlock("""<TouchSensor description=\"Flower\" DEF=\"Flower_Sensor\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Material diffuseColor=\"1 1 1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Text string='\"Flower\"'>"""))

Scene6.addComments(x3d.CommentsBlock("""<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Text>"""))

Scene6.addComments(x3d.CommentsBlock("""</Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Material diffuseColor=\"0 0 1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<IndexedFaceSet coordIndex='0 1 2 3 -1'>"""))

Scene6.addComments(x3d.CommentsBlock("""<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</IndexedFaceSet>"""))

Scene6.addComments(x3d.CommentsBlock("""</Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""</Transform>"""))

Scene6.addComments(x3d.CommentsBlock("""<ROUTE fromNode=\"Flower_Sensor\" fromField=\"touchTime\" toNode=\"Choice2\" toField=\"touchTime\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<ROUTE fromNode=\"Choice2\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<Script DEF=\"Choice3\">"""))

Scene6.addComments(x3d.CommentsBlock("""<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<![CDATA[ ecmascript: function set_touchTime(value) { choice = 3; } function touchTime(value) { choice = 3; } ]]>"""))

Scene6.addComments(x3d.CommentsBlock("""</Script>"""))

Scene6.addComments(x3d.CommentsBlock("""<Transform translation=\"0 1 0\">"""))

Scene6.addComments(x3d.CommentsBlock("""<TouchSensor description=\"Flower 3\" DEF=\"Flower3_Sensor\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Material diffuseColor=\"1 1 1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Text string='\"Flower 3\"'>"""))

Scene6.addComments(x3d.CommentsBlock("""<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Text>"""))

Scene6.addComments(x3d.CommentsBlock("""</Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Material diffuseColor=\"0 0 1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<IndexedFaceSet coordIndex='0 1 2 3 -1'>"""))

Scene6.addComments(x3d.CommentsBlock("""<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</IndexedFaceSet>"""))

Scene6.addComments(x3d.CommentsBlock("""</Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""</Transform>"""))

Scene6.addComments(x3d.CommentsBlock("""<ROUTE fromNode=\"Flower3_Sensor\" fromField=\"touchTime\" toNode=\"Choice3\" toField=\"touchTime\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<ROUTE fromNode=\"Choice3\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<Script DEF=\"Choice4\">"""))

Scene6.addComments(x3d.CommentsBlock("""<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<![CDATA[ ecmascript: function set_touchTime(value) { choice = 4; } function touchTime(value) { choice = 4; } ]]>"""))

Scene6.addComments(x3d.CommentsBlock("""</Script>"""))

Scene6.addComments(x3d.CommentsBlock("""<Transform>"""))

Scene6.addComments(x3d.CommentsBlock("""<TouchSensor description=\"Flowers\" DEF=\"Flowers_Sensor\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Material diffuseColor=\"1 1 1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Text string='\"Flowers\"'>"""))

Scene6.addComments(x3d.CommentsBlock("""<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Text>"""))

Scene6.addComments(x3d.CommentsBlock("""</Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Material diffuseColor=\"0 0 1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<IndexedFaceSet coordIndex='0 1 2 3 -1'>"""))

Scene6.addComments(x3d.CommentsBlock("""<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</IndexedFaceSet>"""))

Scene6.addComments(x3d.CommentsBlock("""</Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""</Transform>"""))

Scene6.addComments(x3d.CommentsBlock("""<ROUTE fromNode=\"Flowers_Sensor\" fromField=\"touchTime\" toNode=\"Choice4\" toField=\"touchTime\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<ROUTE fromNode=\"Choice4\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<Script DEF=\"Choice5\">"""))

Scene6.addComments(x3d.CommentsBlock("""<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<![CDATA[ ecmascript: function set_touchTime(value) { choice = 5; } function touchTime(value) { choice = 5; } ]]>"""))

Scene6.addComments(x3d.CommentsBlock("""</Script>"""))

Scene6.addComments(x3d.CommentsBlock("""<Transform translation=\"0 -1 0\">"""))

Scene6.addComments(x3d.CommentsBlock("""<TouchSensor description=\"Flowers 2\" DEF=\"Flowers2_Sensor\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Material diffuseColor=\"1 1 1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Text string='\"Flowers 2\"'>"""))

Scene6.addComments(x3d.CommentsBlock("""<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Text>"""))

Scene6.addComments(x3d.CommentsBlock("""</Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Material diffuseColor=\"0 0 1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<IndexedFaceSet coordIndex='0 1 2 3 -1'>"""))

Scene6.addComments(x3d.CommentsBlock("""<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</IndexedFaceSet>"""))

Scene6.addComments(x3d.CommentsBlock("""</Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""</Transform>"""))

Scene6.addComments(x3d.CommentsBlock("""<ROUTE fromNode=\"Flowers2_Sensor\" fromField=\"touchTime\" toNode=\"Choice5\" toField=\"touchTime\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<ROUTE fromNode=\"Choice5\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<Script DEF=\"Choice6\">"""))

Scene6.addComments(x3d.CommentsBlock("""<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<![CDATA[ ecmascript: function set_touchTime(value) { choice = 6; } function touchTime(value) { choice = 6; } ]]>"""))

Scene6.addComments(x3d.CommentsBlock("""</Script>"""))

Scene6.addComments(x3d.CommentsBlock("""<Transform translation=\"0 -2 0\">"""))

Scene6.addComments(x3d.CommentsBlock("""<TouchSensor description=\"Flowers 4\" DEF=\"Flowers4_Sensor\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Material diffuseColor=\"1 1 1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Text string='\"Flowers 4\"'>"""))

Scene6.addComments(x3d.CommentsBlock("""<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Text>"""))

Scene6.addComments(x3d.CommentsBlock("""</Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Material diffuseColor=\"0 0 1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<IndexedFaceSet coordIndex='0 1 2 3 -1'>"""))

Scene6.addComments(x3d.CommentsBlock("""<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</IndexedFaceSet>"""))

Scene6.addComments(x3d.CommentsBlock("""</Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""</Transform>"""))

Scene6.addComments(x3d.CommentsBlock("""<ROUTE fromNode=\"Flowers4_Sensor\" fromField=\"touchTime\" toNode=\"Choice6\" toField=\"touchTime\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<ROUTE fromNode=\"Choice6\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<Script DEF=\"Choice7\">"""))

Scene6.addComments(x3d.CommentsBlock("""<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<![CDATA[ ecmascript: function set_touchTime(value) { choice = 7; } function touchTime(value) { choice = 7; } ]]>"""))

Scene6.addComments(x3d.CommentsBlock("""</Script>"""))

Scene6.addComments(x3d.CommentsBlock("""<Transform translation=\"0 -3 0\">"""))

Scene6.addComments(x3d.CommentsBlock("""<TouchSensor description=\"Flowers 7 Inner Brow Raiser\" DEF=\"Flowers7_Sensor\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Material diffuseColor=\"1 1 1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Text string='\"Flowers 7\"'>"""))

Scene6.addComments(x3d.CommentsBlock("""<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Text>"""))

Scene6.addComments(x3d.CommentsBlock("""</Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Material diffuseColor=\"0 0 1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<IndexedFaceSet coordIndex='0 1 2 3 -1'>"""))

Scene6.addComments(x3d.CommentsBlock("""<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</IndexedFaceSet>"""))

Scene6.addComments(x3d.CommentsBlock("""</Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""</Transform>"""))

Scene6.addComments(x3d.CommentsBlock("""<ROUTE fromNode=\"Flowers7_Sensor\" fromField=\"touchTime\" toNode=\"Choice7\" toField=\"touchTime\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<ROUTE fromNode=\"Choice7\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<Script DEF=\"Choice8\">"""))

Scene6.addComments(x3d.CommentsBlock("""<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<![CDATA[ ecmascript: function set_touchTime(value) { choice = 8; } function touchTime(value) { choice = 8; } ]]>"""))

Scene6.addComments(x3d.CommentsBlock("""</Script>"""))

Scene6.addComments(x3d.CommentsBlock("""<Transform translation=\"0 -4 0\">"""))

Scene6.addComments(x3d.CommentsBlock("""<TouchSensor description=\"Force\" DEF=\"Force_Sensor\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Material diffuseColor=\"1 1 1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Text string='\"Force\"'>"""))

Scene6.addComments(x3d.CommentsBlock("""<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Text>"""))

Scene6.addComments(x3d.CommentsBlock("""</Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""<Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<Material diffuseColor=\"0 0 1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</Appearance>"""))

Scene6.addComments(x3d.CommentsBlock("""<IndexedFaceSet coordIndex='0 1 2 3 -1'>"""))

Scene6.addComments(x3d.CommentsBlock("""<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""</IndexedFaceSet>"""))

Scene6.addComments(x3d.CommentsBlock("""</Shape>"""))

Scene6.addComments(x3d.CommentsBlock("""</Transform>"""))

Scene6.addComments(x3d.CommentsBlock("""<ROUTE fromNode=\"Force_Sensor\" fromField=\"touchTime\" toNode=\"Choice8\" toField=\"touchTime\"/>"""))

Scene6.addComments(x3d.CommentsBlock("""<ROUTE fromNode=\"Choice8\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>"""))

X3D0.setScene(Scene6)
X3D0.toFileX3D("../data/personal.new.graalpy.x3d")
X3D0.toFileJSON("../data/personal.new.graalpy.x3dj")
