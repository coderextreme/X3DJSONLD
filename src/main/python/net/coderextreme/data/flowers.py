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
meta10.setContent("flowers.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("creator")
meta11.setContent("John Carlson")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("description")
meta12.setContent("5 or more prismatic flowers")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("generator")
meta13.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("identifier")
meta14.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = x3d.Scene()
NavigationInfo16 = x3d.NavigationInfo()

Scene15.addChildren(NavigationInfo16)
#Images courtesy of Paul Debevec's Light Probe Image Gallery
Background17 = x3d.Background()
Background17.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background17.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background17.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background17.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background17.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background17.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene15.addChildren(Background17)
ProtoDeclare18 = x3d.ProtoDeclare()
ProtoDeclare18.setName("flower")
ProtoBody19 = x3d.ProtoBody()
Transform20 = x3d.Transform()
Transform20.setDEF("animate_transform")
Shape21 = x3d.Shape()
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.setDiffuseColor([0.7,0.7,0.7])
Material23.setSpecularColor([0.5,0.5,0.5])

Appearance22.setMaterial(Material23)
ComposedCubeMapTexture24 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture24.setDEF("texture")
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture24.setBackTexture(ImageTexture25)
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture24.setBottomTexture(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture24.setFrontTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture24.setLeftTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture24.setRightTexture(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture24.setTopTexture(ImageTexture30)

Appearance22.setTexture(ComposedCubeMapTexture24)
ComposedShader31 = x3d.ComposedShader()
ComposedShader31.setDEF("x3dom")
ComposedShader31.setLanguage("GLSL")
field32 = x3d.field()
field32.setName("cube")
field32.setType("SFInt32")
field32.setAccessType("inputOutput")
field32.setValue("0")

ComposedShader31.addField(field32)
field33 = x3d.field()
field33.setName("chromaticDispertion")
field33.setAccessType("initializeOnly")
field33.setType("SFVec3f")
field33.setValue("0.98 1 1.033")

ComposedShader31.addField(field33)
field34 = x3d.field()
field34.setName("bias")
field34.setType("SFFloat")
field34.setAccessType("inputOutput")
field34.setValue("0.5")

ComposedShader31.addField(field34)
field35 = x3d.field()
field35.setName("scale")
field35.setType("SFFloat")
field35.setAccessType("inputOutput")
field35.setValue("0.5")

ComposedShader31.addField(field35)
field36 = x3d.field()
field36.setName("power")
field36.setType("SFFloat")
field36.setAccessType("inputOutput")
field36.setValue("2")

ComposedShader31.addField(field36)
field37 = x3d.field()
field37.setName("a")
field37.setType("SFFloat")
field37.setAccessType("inputOutput")
field37.setValue("10")

ComposedShader31.addField(field37)
field38 = x3d.field()
field38.setName("b")
field38.setType("SFFloat")
field38.setAccessType("inputOutput")
field38.setValue("1")

ComposedShader31.addField(field38)
field39 = x3d.field()
field39.setName("c")
field39.setType("SFFloat")
field39.setAccessType("inputOutput")
field39.setValue("20")

ComposedShader31.addField(field39)
field40 = x3d.field()
field40.setName("d")
field40.setType("SFFloat")
field40.setAccessType("inputOutput")
field40.setValue("20")

ComposedShader31.addField(field40)
field41 = x3d.field()
field41.setName("tdelta")
field41.setType("SFFloat")
field41.setAccessType("inputOutput")
field41.setValue("0")

ComposedShader31.addField(field41)
field42 = x3d.field()
field42.setName("pdelta")
field42.setType("SFFloat")
field42.setAccessType("inputOutput")
field42.setValue("0")

ComposedShader31.addField(field42)
#<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart43 = x3d.ShaderPart()
ShaderPart43.setUrl(["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"])
ShaderPart43.setType("VERTEX")

ComposedShader31.addParts(ShaderPart43)
ShaderPart44 = x3d.ShaderPart()
ShaderPart44.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])
ShaderPart44.setType("FRAGMENT")

ComposedShader31.addParts(ShaderPart44)

Appearance22.addShaders(ComposedShader31)
ComposedShader45 = x3d.ComposedShader()
ComposedShader45.setDEF("x_ite")
ComposedShader45.setLanguage("GLSL")
field46 = x3d.field()
field46.setName("cube")
field46.setType("SFNode")
field46.setAccessType("inputOutput")
ComposedCubeMapTexture47 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture47.setUSE("texture")

field46.addChildren(ComposedCubeMapTexture47)

ComposedShader45.addField(field46)
field48 = x3d.field()
field48.setName("chromaticDispertion")
field48.setAccessType("initializeOnly")
field48.setType("SFVec3f")
field48.setValue("0.98 1 1.033")

ComposedShader45.addField(field48)
field49 = x3d.field()
field49.setName("bias")
field49.setType("SFFloat")
field49.setAccessType("inputOnly")
field49.setValue("0.5")

ComposedShader45.addField(field49)
field50 = x3d.field()
field50.setName("scale")
field50.setType("SFFloat")
field50.setAccessType("inputOnly")
field50.setValue("0.5")

ComposedShader45.addField(field50)
field51 = x3d.field()
field51.setName("power")
field51.setType("SFFloat")
field51.setAccessType("inputOnly")
field51.setValue("2")

ComposedShader45.addField(field51)
field52 = x3d.field()
field52.setName("a")
field52.setType("SFFloat")
field52.setAccessType("inputOnly")
field52.setValue("10")

ComposedShader45.addField(field52)
field53 = x3d.field()
field53.setName("b")
field53.setType("SFFloat")
field53.setAccessType("inputOnly")
field53.setValue("1")

ComposedShader45.addField(field53)
field54 = x3d.field()
field54.setName("c")
field54.setType("SFFloat")
field54.setAccessType("inputOnly")
field54.setValue("20")

ComposedShader45.addField(field54)
field55 = x3d.field()
field55.setName("d")
field55.setType("SFFloat")
field55.setAccessType("inputOnly")
field55.setValue("20")

ComposedShader45.addField(field55)
field56 = x3d.field()
field56.setName("tdelta")
field56.setType("SFFloat")
field56.setAccessType("inputOnly")
field56.setValue("0")

ComposedShader45.addField(field56)
field57 = x3d.field()
field57.setName("pdelta")
field57.setType("SFFloat")
field57.setAccessType("inputOnly")
field57.setValue("0")

ComposedShader45.addField(field57)
ShaderPart58 = x3d.ShaderPart()
ShaderPart58.setUrl(["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"])
ShaderPart58.setType("VERTEX")

ComposedShader45.addParts(ShaderPart58)
ShaderPart59 = x3d.ShaderPart()
ShaderPart59.setUrl(["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"])
ShaderPart59.setType("FRAGMENT")

ComposedShader45.addParts(ShaderPart59)

Appearance22.addShaders(ComposedShader45)

Shape21.setAppearance(Appearance22)
Sphere60 = x3d.Sphere()

Shape21.setGeometry(Sphere60)

Transform20.addChild(Shape21)

ProtoBody19.addChildren(Transform20)
Script61 = x3d.Script()
Script61.setDEF("Animate")
field62 = x3d.field()
field62.setName("translation")
field62.setAccessType("inputOutput")
field62.setType("SFVec3f")
field62.setValue("0 0 0")

Script61.addField(field62)
field63 = x3d.field()
field63.setName("velocity")
field63.setAccessType("inputOutput")
field63.setType("SFVec3f")
field63.setValue("0 0 0")

Script61.addField(field63)
field64 = x3d.field()
field64.setName("set_fraction")
field64.setAccessType("inputOnly")
field64.setType("SFFloat")

Script61.addField(field64)
field65 = x3d.field()
field65.setName("a")
field65.setType("SFFloat")
field65.setAccessType("inputOutput")
field65.setValue("0.5")

Script61.addField(field65)
field66 = x3d.field()
field66.setName("b")
field66.setType("SFFloat")
field66.setAccessType("inputOutput")
field66.setValue("0.5")

Script61.addField(field66)
field67 = x3d.field()
field67.setName("c")
field67.setType("SFFloat")
field67.setAccessType("inputOutput")
field67.setValue("3")

Script61.addField(field67)
field68 = x3d.field()
field68.setName("d")
field68.setType("SFFloat")
field68.setAccessType("inputOutput")
field68.setValue("3")

Script61.addField(field68)
field69 = x3d.field()
field69.setName("tdelta")
field69.setType("SFFloat")
field69.setAccessType("inputOutput")
field69.setValue("0.5")

Script61.addField(field69)
field70 = x3d.field()
field70.setName("pdelta")
field70.setType("SFFloat")
field70.setAccessType("inputOutput")
field70.setValue("0.5")

Script61.addField(field70)

Script61.setSourceCode('''ecmascript:\n"+
"\n"+
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
"				tdelta = tdelta + 0.5;\n"+
"				pdelta = pdelta + 0.5;\n"+
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

ProtoBody19.addChildren(Script61)
TimeSensor71 = x3d.TimeSensor()
TimeSensor71.setDEF("TourTime")
TimeSensor71.setCycleInterval(5)
TimeSensor71.setLoop(True)

ProtoBody19.addChildren(TimeSensor71)
ROUTE72 = x3d.ROUTE()
ROUTE72.setFromNode("TourTime")
ROUTE72.setFromField("fraction_changed")
ROUTE72.setToNode("Animate")
ROUTE72.setToField("set_fraction")

ProtoBody19.addChildren(ROUTE72)
ROUTE73 = x3d.ROUTE()
ROUTE73.setFromNode("Animate")
ROUTE73.setFromField("translation_changed")
ROUTE73.setToNode("animate_transform")
ROUTE73.setToField("set_translation")

ProtoBody19.addChildren(ROUTE73)
ROUTE74 = x3d.ROUTE()
ROUTE74.setFromNode("Animate")
ROUTE74.setFromField("a")
ROUTE74.setToNode("x_ite")
ROUTE74.setToField("a")

ProtoBody19.addChildren(ROUTE74)
ROUTE75 = x3d.ROUTE()
ROUTE75.setFromNode("Animate")
ROUTE75.setFromField("b")
ROUTE75.setToNode("x_ite")
ROUTE75.setToField("b")

ProtoBody19.addChildren(ROUTE75)
ROUTE76 = x3d.ROUTE()
ROUTE76.setFromNode("Animate")
ROUTE76.setFromField("c")
ROUTE76.setToNode("x_ite")
ROUTE76.setToField("c")

ProtoBody19.addChildren(ROUTE76)
ROUTE77 = x3d.ROUTE()
ROUTE77.setFromNode("Animate")
ROUTE77.setFromField("d")
ROUTE77.setToNode("x_ite")
ROUTE77.setToField("d")

ProtoBody19.addChildren(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.setFromNode("Animate")
ROUTE78.setFromField("pdelta")
ROUTE78.setToNode("x_ite")
ROUTE78.setToField("pdelta")

ProtoBody19.addChildren(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.setFromNode("Animate")
ROUTE79.setFromField("tdelta")
ROUTE79.setToNode("x_ite")
ROUTE79.setToField("tdelta")

ProtoBody19.addChildren(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.setFromNode("Animate")
ROUTE80.setFromField("a")
ROUTE80.setToNode("x3dom")
ROUTE80.setToField("a")

ProtoBody19.addChildren(ROUTE80)
ROUTE81 = x3d.ROUTE()
ROUTE81.setFromNode("Animate")
ROUTE81.setFromField("b")
ROUTE81.setToNode("x3dom")
ROUTE81.setToField("b")

ProtoBody19.addChildren(ROUTE81)
ROUTE82 = x3d.ROUTE()
ROUTE82.setFromNode("Animate")
ROUTE82.setFromField("c")
ROUTE82.setToNode("x3dom")
ROUTE82.setToField("c")

ProtoBody19.addChildren(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.setFromNode("Animate")
ROUTE83.setFromField("d")
ROUTE83.setToNode("x3dom")
ROUTE83.setToField("d")

ProtoBody19.addChildren(ROUTE83)
ROUTE84 = x3d.ROUTE()
ROUTE84.setFromNode("Animate")
ROUTE84.setFromField("pdelta")
ROUTE84.setToNode("x3dom")
ROUTE84.setToField("pdelta")

ProtoBody19.addChildren(ROUTE84)
ROUTE85 = x3d.ROUTE()
ROUTE85.setFromNode("Animate")
ROUTE85.setFromField("tdelta")
ROUTE85.setToNode("x3dom")
ROUTE85.setToField("tdelta")

ProtoBody19.addChildren(ROUTE85)

ProtoDeclare18.setProtoBody(ProtoBody19)

Scene15.addChildren(ProtoDeclare18)
ProtoInstance86 = x3d.ProtoInstance()
ProtoInstance86.setName("flower")

Scene15.addChildren(ProtoInstance86)
ProtoInstance87 = x3d.ProtoInstance()
ProtoInstance87.setName("flower")

Scene15.addChildren(ProtoInstance87)
ProtoInstance88 = x3d.ProtoInstance()
ProtoInstance88.setName("flower")

Scene15.addChildren(ProtoInstance88)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../data/flowers.new.python.x3d")
X3D0.toFileJSON("../data/flowers.new.python.json")
