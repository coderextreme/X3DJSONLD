import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Scripting")
component2.setLevel(1)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("EnvironmentalEffects")
component3.setLevel(3)

head1.addComponent(component3)
component4 = x3d.component()
component4.setName("Shaders")
component4.setLevel(1)

head1.addComponent(component4)
component5 = x3d.component()
component5.setName("CubeMapTexturing")
component5.setLevel(1)

head1.addComponent(component5)
component6 = x3d.component()
component6.setName("Texturing")
component6.setLevel(1)

head1.addComponent(component6)
component7 = x3d.component()
component7.setName("Rendering")
component7.setLevel(1)

head1.addComponent(component7)
component8 = x3d.component()
component8.setName("Shape")
component8.setLevel(4)

head1.addComponent(component8)
component9 = x3d.component()
component9.setName("Grouping")
component9.setLevel(3)

head1.addComponent(component9)
component10 = x3d.component()
component10.setName("Core")
component10.setLevel(1)

head1.addComponent(component10)
meta11 = x3d.meta()
meta11.setName("title")
meta11.setContent("flowerproto.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("creator")
meta12.setContent("John Carlson")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("description")
meta13.setContent("A flower proto with configurable shaders")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("generator")
meta14.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("identifier")
meta15.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d")

head1.addMeta(meta15)

X3D0.setHead(head1)
Scene16 = x3d.Scene()
ProtoDeclare17 = x3d.ProtoDeclare()
ProtoDeclare17.setName("FlowerProto")
ProtoInterface18 = x3d.ProtoInterface()
field19 = x3d.field()
field19.setName("vertex")
field19.setAccessType("inputOutput")
field19.setType("MFString")
field19.setValue("\"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl_flowers_chromatic.vs\"")

ProtoInterface18.addField(field19)
field20 = x3d.field()
field20.setName("fragment")
field20.setAccessType("inputOutput")
field20.setType("MFString")
field20.setValue("\"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_flowers.fs\"")

ProtoInterface18.addField(field20)

ProtoDeclare17.setProtoInterface(ProtoInterface18)
ProtoBody21 = x3d.ProtoBody()
Transform22 = x3d.Transform()
Transform22.setDEF("transform")
Shape23 = x3d.Shape()
Appearance24 = x3d.Appearance()
Material25 = x3d.Material()
Material25.setDiffuseColor([0.7,0.7,0.7])
Material25.setSpecularColor([0.5,0.5,0.5])

Appearance24.setMaterial(Material25)
ComposedCubeMapTexture26 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture26.setDEF("texture")
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture26.setBackTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture26.setBottomTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture26.setFrontTexture(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture26.setLeftTexture(ImageTexture30)
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture26.setRightTexture(ImageTexture31)
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture26.setTopTexture(ImageTexture32)

Appearance24.setTexture(ComposedCubeMapTexture26)
ComposedShader33 = x3d.ComposedShader()
ComposedShader33.setDEF("shader")
ComposedShader33.setLanguage("GLSL")
field34 = x3d.field()
field34.setName("cube")
field34.setType("SFInt32")
field34.setAccessType("inputOutput")
field34.setValue("0")

ComposedShader33.addField(field34)
field35 = x3d.field()
field35.setName("chromaticDispertion")
field35.setAccessType("initializeOnly")
field35.setType("SFVec3f")
field35.setValue("0.98 1 1.033")

ComposedShader33.addField(field35)
field36 = x3d.field()
field36.setName("bias")
field36.setType("SFFloat")
field36.setAccessType("inputOutput")
field36.setValue("0.5")

ComposedShader33.addField(field36)
field37 = x3d.field()
field37.setName("scale")
field37.setType("SFFloat")
field37.setAccessType("inputOutput")
field37.setValue("0.5")

ComposedShader33.addField(field37)
field38 = x3d.field()
field38.setName("power")
field38.setType("SFFloat")
field38.setAccessType("inputOutput")
field38.setValue("2")

ComposedShader33.addField(field38)
field39 = x3d.field()
field39.setName("a")
field39.setType("SFFloat")
field39.setAccessType("inputOutput")
field39.setValue("10")

ComposedShader33.addField(field39)
field40 = x3d.field()
field40.setName("b")
field40.setType("SFFloat")
field40.setAccessType("inputOutput")
field40.setValue("1")

ComposedShader33.addField(field40)
field41 = x3d.field()
field41.setName("c")
field41.setType("SFFloat")
field41.setAccessType("inputOutput")
field41.setValue("20")

ComposedShader33.addField(field41)
field42 = x3d.field()
field42.setName("d")
field42.setType("SFFloat")
field42.setAccessType("inputOutput")
field42.setValue("20")

ComposedShader33.addField(field42)
field43 = x3d.field()
field43.setName("tdelta")
field43.setType("SFFloat")
field43.setAccessType("inputOutput")
field43.setValue("0")

ComposedShader33.addField(field43)
field44 = x3d.field()
field44.setName("pdelta")
field44.setType("SFFloat")
field44.setAccessType("inputOutput")
field44.setValue("0")

ComposedShader33.addField(field44)
#<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart45 = x3d.ShaderPart()
ShaderPart45.setType("VERTEX")
IS46 = x3d.IS()
connect47 = x3d.connect()
connect47.setNodeField("url")
connect47.setProtoField("vertex")

IS46.addConnect(connect47)

ShaderPart45.setIS(IS46)

ComposedShader33.addParts(ShaderPart45)
ShaderPart48 = x3d.ShaderPart()
ShaderPart48.setType("FRAGMENT")
IS49 = x3d.IS()
connect50 = x3d.connect()
connect50.setNodeField("url")
connect50.setProtoField("fragment")

IS49.addConnect(connect50)

ShaderPart48.setIS(IS49)

ComposedShader33.addParts(ShaderPart48)

Appearance24.addShaders(ComposedShader33)

Shape23.setAppearance(Appearance24)
Sphere51 = x3d.Sphere()

Shape23.setGeometry(Sphere51)

Transform22.addChild(Shape23)
Script52 = x3d.Script()
Script52.setDEF("Animate")
field53 = x3d.field()
field53.setName("translation")
field53.setAccessType("inputOutput")
field53.setType("SFVec3f")
field53.setValue("0 0 0")

Script52.addField(field53)
field54 = x3d.field()
field54.setName("velocity")
field54.setAccessType("inputOutput")
field54.setType("SFVec3f")
field54.setValue("0 0 0")

Script52.addField(field54)
field55 = x3d.field()
field55.setName("set_fraction")
field55.setAccessType("inputOnly")
field55.setType("SFFloat")

Script52.addField(field55)
field56 = x3d.field()
field56.setName("a")
field56.setType("SFFloat")
field56.setAccessType("inputOutput")
field56.setValue("0.5")

Script52.addField(field56)
field57 = x3d.field()
field57.setName("b")
field57.setType("SFFloat")
field57.setAccessType("inputOutput")
field57.setValue("0.5")

Script52.addField(field57)
field58 = x3d.field()
field58.setName("c")
field58.setType("SFFloat")
field58.setAccessType("inputOutput")
field58.setValue("3")

Script52.addField(field58)
field59 = x3d.field()
field59.setName("d")
field59.setType("SFFloat")
field59.setAccessType("inputOutput")
field59.setValue("3")

Script52.addField(field59)
field60 = x3d.field()
field60.setName("tdelta")
field60.setType("SFFloat")
field60.setAccessType("inputOutput")
field60.setValue("0.5")

Script52.addField(field60)
field61 = x3d.field()
field61.setName("pdelta")
field61.setType("SFFloat")
field61.setAccessType("inputOutput")
field61.setValue("0.5")

Script52.addField(field61)

Script52.setSourceCode('''ecmascript:\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation.x) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.y) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.z) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity.x += Math.random() * 0.2 - 0.1;\n"+
"					velocity.y += Math.random() * 0.2 - 0.1;\n"+
"					velocity.z += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					a += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 1:\n"+
"					b += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 2:\n"+
"					c += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					d += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				tdelta += 0.5;\n"+
"				pdelta += 0.5;\n"+
"				if (a > 1) {\n"+
"					a =  0.5;\n"+
"				}\n"+
"				if (b > 1) {\n"+
"					b =  0.5;\n"+
"				}\n"+
"				if (c < 1) {\n"+
"					c =  4;\n"+
"				}\n"+
"				if (d < 1) {\n"+
"					d =  4;\n"+
"				}\n"+
"				if (c > 10) {\n"+
"					c = 4;\n"+
"				}\n"+
"				if (d > 10) {\n"+
"					d = 4;\n"+
"				}\n"+
"			}''')

Transform22.addChildren(Script52)
TimeSensor62 = x3d.TimeSensor()
TimeSensor62.setDEF("TourTime")
TimeSensor62.setCycleInterval(5)
TimeSensor62.setLoop(True)

Transform22.addChildren(TimeSensor62)
ROUTE63 = x3d.ROUTE()
ROUTE63.setFromNode("TourTime")
ROUTE63.setFromField("fraction_changed")
ROUTE63.setToNode("Animate")
ROUTE63.setToField("set_fraction")

Transform22.addChildren(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromNode("Animate")
ROUTE64.setFromField("translation_changed")
ROUTE64.setToNode("transform")
ROUTE64.setToField("set_translation")

Transform22.addChildren(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.setFromNode("Animate")
ROUTE65.setFromField("a")
ROUTE65.setToNode("shader")
ROUTE65.setToField("a")

Transform22.addChildren(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.setFromNode("Animate")
ROUTE66.setFromField("b")
ROUTE66.setToNode("shader")
ROUTE66.setToField("b")

Transform22.addChildren(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.setFromNode("Animate")
ROUTE67.setFromField("c")
ROUTE67.setToNode("shader")
ROUTE67.setToField("c")

Transform22.addChildren(ROUTE67)
ROUTE68 = x3d.ROUTE()
ROUTE68.setFromNode("Animate")
ROUTE68.setFromField("d")
ROUTE68.setToNode("shader")
ROUTE68.setToField("d")

Transform22.addChildren(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.setFromNode("Animate")
ROUTE69.setFromField("tdelta")
ROUTE69.setToNode("shader")
ROUTE69.setToField("tdelta")

Transform22.addChildren(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.setFromNode("Animate")
ROUTE70.setFromField("pdelta")
ROUTE70.setToNode("shader")
ROUTE70.setToField("pdelta")

Transform22.addChildren(ROUTE70)

ProtoBody21.addChildren(Transform22)

ProtoDeclare17.setProtoBody(ProtoBody21)

Scene16.addChildren(ProtoDeclare17)

X3D0.setScene(Scene16)
X3D0.toFileX3D("../data/flowerproto.new.python.x3d")
X3D0.toFileJSON("../data/flowerproto.new.python.json")
