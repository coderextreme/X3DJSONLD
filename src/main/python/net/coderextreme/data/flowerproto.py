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
component8.setName("Grouping")
component8.setLevel(3)

head1.addComponent(component8)
component9 = x3d.component()
component9.setName("Core")
component9.setLevel(1)

head1.addComponent(component9)
#<component name='Shape' level='4'></component>
meta10 = x3d.meta()
meta10.setName("title")
meta10.setContent("flowerproto.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("creator")
meta11.setContent("John Carlson")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("description")
meta12.setContent("A flower proto with configurable shaders")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("generator")
meta13.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("identifier")
meta14.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = x3d.Scene()
ProtoDeclare16 = x3d.ProtoDeclare()
ProtoDeclare16.setName("FlowerProto")
ProtoInterface17 = x3d.ProtoInterface()
field18 = x3d.field()
field18.setName("vertex")
field18.setAccessType("inputOutput")
field18.setType("MFString")
field18.setValue("\"../shaders/gl_flowers_chromatic.vs\"")

ProtoInterface17.addField(field18)
field19 = x3d.field()
field19.setName("fragment")
field19.setAccessType("inputOutput")
field19.setType("MFString")
field19.setValue("\"../shaders/pc_flowers.fs\"")

ProtoInterface17.addField(field19)

ProtoDeclare16.setProtoInterface(ProtoInterface17)
ProtoBody20 = x3d.ProtoBody()
Transform21 = x3d.Transform()
Transform21.setDEF("transform")
Shape22 = x3d.Shape()
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()
Material24.setDiffuseColor([0.7,0.7,0.7])
Material24.setSpecularColor([0.5,0.5,0.5])

Appearance23.setMaterial(Material24)
ComposedCubeMapTexture25 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture25.setDEF("texture")
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture25.setBackTexture(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture25.setBottomTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture25.setFrontTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture25.setLeftTexture(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture25.setRightTexture(ImageTexture30)
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture25.setTopTexture(ImageTexture31)

Appearance23.setTexture(ComposedCubeMapTexture25)
ComposedShader32 = x3d.ComposedShader()
ComposedShader32.setDEF("shader")
ComposedShader32.setLanguage("GLSL")
field33 = x3d.field()
field33.setName("cube")
field33.setType("SFInt32")
field33.setAccessType("inputOutput")
field33.setValue("0")

ComposedShader32.addField(field33)
field34 = x3d.field()
field34.setName("chromaticDispertion")
field34.setAccessType("initializeOnly")
field34.setType("SFVec3f")
field34.setValue("0.98 1 1.033")

ComposedShader32.addField(field34)
field35 = x3d.field()
field35.setName("bias")
field35.setType("SFFloat")
field35.setAccessType("inputOutput")
field35.setValue("0.5")

ComposedShader32.addField(field35)
field36 = x3d.field()
field36.setName("scale")
field36.setType("SFFloat")
field36.setAccessType("inputOutput")
field36.setValue("0.5")

ComposedShader32.addField(field36)
field37 = x3d.field()
field37.setName("power")
field37.setType("SFFloat")
field37.setAccessType("inputOutput")
field37.setValue("2")

ComposedShader32.addField(field37)
field38 = x3d.field()
field38.setName("a")
field38.setType("SFFloat")
field38.setAccessType("inputOutput")
field38.setValue("10")

ComposedShader32.addField(field38)
field39 = x3d.field()
field39.setName("b")
field39.setType("SFFloat")
field39.setAccessType("inputOutput")
field39.setValue("1")

ComposedShader32.addField(field39)
field40 = x3d.field()
field40.setName("c")
field40.setType("SFFloat")
field40.setAccessType("inputOutput")
field40.setValue("20")

ComposedShader32.addField(field40)
field41 = x3d.field()
field41.setName("d")
field41.setType("SFFloat")
field41.setAccessType("inputOutput")
field41.setValue("20")

ComposedShader32.addField(field41)
field42 = x3d.field()
field42.setName("tdelta")
field42.setType("SFFloat")
field42.setAccessType("inputOutput")
field42.setValue("0")

ComposedShader32.addField(field42)
field43 = x3d.field()
field43.setName("pdelta")
field43.setType("SFFloat")
field43.setAccessType("inputOutput")
field43.setValue("0")

ComposedShader32.addField(field43)
#<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart44 = x3d.ShaderPart()
ShaderPart44.setType("VERTEX")
IS45 = x3d.IS()
connect46 = x3d.connect()
connect46.setNodeField("url")
connect46.setProtoField("vertex")

IS45.addConnect(connect46)

ShaderPart44.setIS(IS45)

ComposedShader32.addParts(ShaderPart44)
ShaderPart47 = x3d.ShaderPart()
ShaderPart47.setType("FRAGMENT")
IS48 = x3d.IS()
connect49 = x3d.connect()
connect49.setNodeField("url")
connect49.setProtoField("fragment")

IS48.addConnect(connect49)

ShaderPart47.setIS(IS48)

ComposedShader32.addParts(ShaderPart47)

Appearance23.addShaders(ComposedShader32)

Shape22.setAppearance(Appearance23)
Sphere50 = x3d.Sphere()

Shape22.setGeometry(Sphere50)

Transform21.addChild(Shape22)
Script51 = x3d.Script()
Script51.setDEF("Animate")
field52 = x3d.field()
field52.setName("translation")
field52.setAccessType("inputOutput")
field52.setType("SFVec3f")
field52.setValue("0 0 0")

Script51.addField(field52)
field53 = x3d.field()
field53.setName("velocity")
field53.setAccessType("inputOutput")
field53.setType("SFVec3f")
field53.setValue("0 0 0")

Script51.addField(field53)
field54 = x3d.field()
field54.setName("set_fraction")
field54.setAccessType("inputOnly")
field54.setType("SFFloat")

Script51.addField(field54)
field55 = x3d.field()
field55.setName("a")
field55.setType("SFFloat")
field55.setAccessType("inputOutput")
field55.setValue("0.5")

Script51.addField(field55)
field56 = x3d.field()
field56.setName("b")
field56.setType("SFFloat")
field56.setAccessType("inputOutput")
field56.setValue("0.5")

Script51.addField(field56)
field57 = x3d.field()
field57.setName("c")
field57.setType("SFFloat")
field57.setAccessType("inputOutput")
field57.setValue("3")

Script51.addField(field57)
field58 = x3d.field()
field58.setName("d")
field58.setType("SFFloat")
field58.setAccessType("inputOutput")
field58.setValue("3")

Script51.addField(field58)
field59 = x3d.field()
field59.setName("tdelta")
field59.setType("SFFloat")
field59.setAccessType("inputOutput")
field59.setValue("0.5")

Script51.addField(field59)
field60 = x3d.field()
field60.setName("pdelta")
field60.setType("SFFloat")
field60.setAccessType("inputOutput")
field60.setValue("0.5")

Script51.addField(field60)

Script51.setSourceCode('''ecmascript:\n"+
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

Transform21.addChildren(Script51)
TimeSensor61 = x3d.TimeSensor()
TimeSensor61.setDEF("TourTime")
TimeSensor61.setCycleInterval(5)
TimeSensor61.setLoop(True)

Transform21.addChildren(TimeSensor61)
ROUTE62 = x3d.ROUTE()
ROUTE62.setFromNode("TourTime")
ROUTE62.setFromField("fraction_changed")
ROUTE62.setToNode("Animate")
ROUTE62.setToField("set_fraction")

Transform21.addChildren(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.setFromNode("Animate")
ROUTE63.setFromField("translation_changed")
ROUTE63.setToNode("transform")
ROUTE63.setToField("set_translation")

Transform21.addChildren(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromNode("Animate")
ROUTE64.setFromField("a")
ROUTE64.setToNode("shader")
ROUTE64.setToField("a")

Transform21.addChildren(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.setFromNode("Animate")
ROUTE65.setFromField("b")
ROUTE65.setToNode("shader")
ROUTE65.setToField("b")

Transform21.addChildren(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.setFromNode("Animate")
ROUTE66.setFromField("c")
ROUTE66.setToNode("shader")
ROUTE66.setToField("c")

Transform21.addChildren(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.setFromNode("Animate")
ROUTE67.setFromField("d")
ROUTE67.setToNode("shader")
ROUTE67.setToField("d")

Transform21.addChildren(ROUTE67)
ROUTE68 = x3d.ROUTE()
ROUTE68.setFromNode("Animate")
ROUTE68.setFromField("tdelta")
ROUTE68.setToNode("shader")
ROUTE68.setToField("tdelta")

Transform21.addChildren(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.setFromNode("Animate")
ROUTE69.setFromField("pdelta")
ROUTE69.setToNode("shader")
ROUTE69.setToField("pdelta")

Transform21.addChildren(ROUTE69)

ProtoBody20.addChildren(Transform21)

ProtoDeclare16.setProtoBody(ProtoBody20)

Scene15.addChildren(ProtoDeclare16)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../data/flowerproto.new.python.x3d")
