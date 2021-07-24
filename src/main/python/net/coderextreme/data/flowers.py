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
component3.setName("Shaders")
component3.setLevel(1)

head1.addComponent(component3)
component4 = x3d.component()
component4.setName("CubeMapTexturing")
component4.setLevel(1)

head1.addComponent(component4)
component5 = x3d.component()
component5.setName("Texturing")
component5.setLevel(1)

head1.addComponent(component5)
component6 = x3d.component()
component6.setName("Rendering")
component6.setLevel(1)

head1.addComponent(component6)
component7 = x3d.component()
component7.setName("Shape")
component7.setLevel(4)

head1.addComponent(component7)
component8 = x3d.component()
component8.setName("Grouping")
component8.setLevel(3)

head1.addComponent(component8)
meta9 = x3d.meta()
meta9.setName("title")
meta9.setContent("flowers.x3d")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("creator")
meta10.setContent("John Carlson")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("description")
meta11.setContent("5 or more prismatic flowers")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("generator")
meta12.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("identifier")
meta13.setContent("https://coderextreme.net/X3DJSONLD/flowers.x3d")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = x3d.Scene()
NavigationInfo15 = x3d.NavigationInfo()

Scene14.addChildren(NavigationInfo15)
#Images courtesy of Paul Debevec's Light Probe Image Gallery
Background16 = x3d.Background()
Background16.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
Background16.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background16.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
Background16.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
Background16.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
Background16.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene14.addChildren(Background16)
ProtoDeclare17 = x3d.ProtoDeclare()
ProtoDeclare17.setName("flower")
ProtoBody18 = x3d.ProtoBody()
Transform19 = x3d.Transform()
Transform19.setDEF("animate_transform")
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.setDiffuseColor([0.7,0.7,0.7])
Material22.setSpecularColor([0.5,0.5,0.5])

Appearance21.setMaterial(Material22)
ComposedCubeMapTexture23 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture23.setDEF("texture")
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture23.setBackTexture(ImageTexture24)
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture23.setBottomTexture(ImageTexture25)
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture23.setFrontTexture(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture23.setLeftTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture23.setRightTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture23.setTopTexture(ImageTexture29)

Appearance21.setTexture(ComposedCubeMapTexture23)
ComposedShader30 = x3d.ComposedShader()
ComposedShader30.setDEF("x3dom")
ComposedShader30.setLanguage("GLSL")
field31 = x3d.field()
field31.setName("cube")
field31.setType("SFInt32")
field31.setAccessType("inputOutput")
field31.setValue("0")

ComposedShader30.addField(field31)
field32 = x3d.field()
field32.setName("chromaticDispertion")
field32.setAccessType("initializeOnly")
field32.setType("SFVec3f")
field32.setValue("0.98 1 1.033")

ComposedShader30.addField(field32)
field33 = x3d.field()
field33.setName("bias")
field33.setType("SFFloat")
field33.setAccessType("inputOutput")
field33.setValue("0.5")

ComposedShader30.addField(field33)
field34 = x3d.field()
field34.setName("scale")
field34.setType("SFFloat")
field34.setAccessType("inputOutput")
field34.setValue("0.5")

ComposedShader30.addField(field34)
field35 = x3d.field()
field35.setName("power")
field35.setType("SFFloat")
field35.setAccessType("inputOutput")
field35.setValue("2")

ComposedShader30.addField(field35)
field36 = x3d.field()
field36.setName("a")
field36.setType("SFFloat")
field36.setAccessType("inputOutput")
field36.setValue("10")

ComposedShader30.addField(field36)
field37 = x3d.field()
field37.setName("b")
field37.setType("SFFloat")
field37.setAccessType("inputOutput")
field37.setValue("1")

ComposedShader30.addField(field37)
field38 = x3d.field()
field38.setName("c")
field38.setType("SFFloat")
field38.setAccessType("inputOutput")
field38.setValue("20")

ComposedShader30.addField(field38)
field39 = x3d.field()
field39.setName("d")
field39.setType("SFFloat")
field39.setAccessType("inputOutput")
field39.setValue("20")

ComposedShader30.addField(field39)
field40 = x3d.field()
field40.setName("tdelta")
field40.setType("SFFloat")
field40.setAccessType("inputOutput")
field40.setValue("0")

ComposedShader30.addField(field40)
field41 = x3d.field()
field41.setName("pdelta")
field41.setType("SFFloat")
field41.setAccessType("inputOutput")
field41.setValue("0")

ComposedShader30.addField(field41)
#<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart42 = x3d.ShaderPart()
ShaderPart42.setUrl(["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"])
ShaderPart42.setType("VERTEX")

ComposedShader30.addParts(ShaderPart42)
ShaderPart43 = x3d.ShaderPart()
ShaderPart43.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])
ShaderPart43.setType("FRAGMENT")

ComposedShader30.addParts(ShaderPart43)

Appearance21.addShaders(ComposedShader30)
ComposedShader44 = x3d.ComposedShader()
ComposedShader44.setDEF("x_ite")
ComposedShader44.setLanguage("GLSL")
field45 = x3d.field()
field45.setName("cube")
field45.setType("SFNode")
field45.setAccessType("inputOutput")
ComposedCubeMapTexture46 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture46.setUSE("texture")

field45.addChildren(ComposedCubeMapTexture46)

ComposedShader44.addField(field45)
field47 = x3d.field()
field47.setName("chromaticDispertion")
field47.setAccessType("initializeOnly")
field47.setType("SFVec3f")
field47.setValue("0.98 1 1.033")

ComposedShader44.addField(field47)
field48 = x3d.field()
field48.setName("bias")
field48.setType("SFFloat")
field48.setAccessType("inputOnly")
field48.setValue("0.5")

ComposedShader44.addField(field48)
field49 = x3d.field()
field49.setName("scale")
field49.setType("SFFloat")
field49.setAccessType("inputOnly")
field49.setValue("0.5")

ComposedShader44.addField(field49)
field50 = x3d.field()
field50.setName("power")
field50.setType("SFFloat")
field50.setAccessType("inputOnly")
field50.setValue("2")

ComposedShader44.addField(field50)
field51 = x3d.field()
field51.setName("a")
field51.setType("SFFloat")
field51.setAccessType("inputOnly")
field51.setValue("10")

ComposedShader44.addField(field51)
field52 = x3d.field()
field52.setName("b")
field52.setType("SFFloat")
field52.setAccessType("inputOnly")
field52.setValue("1")

ComposedShader44.addField(field52)
field53 = x3d.field()
field53.setName("c")
field53.setType("SFFloat")
field53.setAccessType("inputOnly")
field53.setValue("20")

ComposedShader44.addField(field53)
field54 = x3d.field()
field54.setName("d")
field54.setType("SFFloat")
field54.setAccessType("inputOnly")
field54.setValue("20")

ComposedShader44.addField(field54)
field55 = x3d.field()
field55.setName("tdelta")
field55.setType("SFFloat")
field55.setAccessType("inputOnly")
field55.setValue("0")

ComposedShader44.addField(field55)
field56 = x3d.field()
field56.setName("pdelta")
field56.setType("SFFloat")
field56.setAccessType("inputOnly")
field56.setValue("0")

ComposedShader44.addField(field56)
ShaderPart57 = x3d.ShaderPart()
ShaderPart57.setUrl(["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"])
ShaderPart57.setType("VERTEX")

ComposedShader44.addParts(ShaderPart57)
ShaderPart58 = x3d.ShaderPart()
ShaderPart58.setUrl(["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"])
ShaderPart58.setType("FRAGMENT")

ComposedShader44.addParts(ShaderPart58)

Appearance21.addShaders(ComposedShader44)

Shape20.setAppearance(Appearance21)
Sphere59 = x3d.Sphere()

Shape20.setGeometry(Sphere59)

Transform19.addChildren(Shape20)

ProtoBody18.addChildren(Transform19)
Script60 = x3d.Script()
Script60.setDEF("Animate")
field61 = x3d.field()
field61.setName("translation")
field61.setAccessType("inputOutput")
field61.setType("SFVec3f")
field61.setValue("0 0 0")

Script60.addField(field61)
field62 = x3d.field()
field62.setName("velocity")
field62.setAccessType("inputOutput")
field62.setType("SFVec3f")
field62.setValue("0 0 0")

Script60.addField(field62)
field63 = x3d.field()
field63.setName("set_fraction")
field63.setAccessType("inputOnly")
field63.setType("SFFloat")

Script60.addField(field63)
field64 = x3d.field()
field64.setName("a")
field64.setType("SFFloat")
field64.setAccessType("inputOutput")
field64.setValue("0.5")

Script60.addField(field64)
field65 = x3d.field()
field65.setName("b")
field65.setType("SFFloat")
field65.setAccessType("inputOutput")
field65.setValue("0.5")

Script60.addField(field65)
field66 = x3d.field()
field66.setName("c")
field66.setType("SFFloat")
field66.setAccessType("inputOutput")
field66.setValue("3")

Script60.addField(field66)
field67 = x3d.field()
field67.setName("d")
field67.setType("SFFloat")
field67.setAccessType("inputOutput")
field67.setValue("3")

Script60.addField(field67)
field68 = x3d.field()
field68.setName("tdelta")
field68.setType("SFFloat")
field68.setAccessType("inputOutput")
field68.setValue("0.5")

Script60.addField(field68)
field69 = x3d.field()
field69.setName("pdelta")
field69.setType("SFFloat")
field69.setAccessType("inputOutput")
field69.setValue("0.5")

Script60.addField(field69)

Script60.setSourceCode('''ecmascript:\n"+
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

ProtoBody18.addChildren(Script60)
TimeSensor70 = x3d.TimeSensor()
TimeSensor70.setDEF("TourTime")
TimeSensor70.setCycleInterval(5)
TimeSensor70.setLoop(True)

ProtoBody18.addChildren(TimeSensor70)
ROUTE71 = x3d.ROUTE()
ROUTE71.setFromNode("TourTime")
ROUTE71.setFromField("fraction_changed")
ROUTE71.setToNode("Animate")
ROUTE71.setToField("set_fraction")

ProtoBody18.addChildren(ROUTE71)
ROUTE72 = x3d.ROUTE()
ROUTE72.setFromNode("Animate")
ROUTE72.setFromField("translation_changed")
ROUTE72.setToNode("animate_transform")
ROUTE72.setToField("set_translation")

ProtoBody18.addChildren(ROUTE72)
ROUTE73 = x3d.ROUTE()
ROUTE73.setFromNode("Animate")
ROUTE73.setFromField("a")
ROUTE73.setToNode("x_ite")
ROUTE73.setToField("a")

ProtoBody18.addChildren(ROUTE73)
ROUTE74 = x3d.ROUTE()
ROUTE74.setFromNode("Animate")
ROUTE74.setFromField("b")
ROUTE74.setToNode("x_ite")
ROUTE74.setToField("b")

ProtoBody18.addChildren(ROUTE74)
ROUTE75 = x3d.ROUTE()
ROUTE75.setFromNode("Animate")
ROUTE75.setFromField("c")
ROUTE75.setToNode("x_ite")
ROUTE75.setToField("c")

ProtoBody18.addChildren(ROUTE75)
ROUTE76 = x3d.ROUTE()
ROUTE76.setFromNode("Animate")
ROUTE76.setFromField("d")
ROUTE76.setToNode("x_ite")
ROUTE76.setToField("d")

ProtoBody18.addChildren(ROUTE76)
ROUTE77 = x3d.ROUTE()
ROUTE77.setFromNode("Animate")
ROUTE77.setFromField("pdelta")
ROUTE77.setToNode("x_ite")
ROUTE77.setToField("pdelta")

ProtoBody18.addChildren(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.setFromNode("Animate")
ROUTE78.setFromField("tdelta")
ROUTE78.setToNode("x_ite")
ROUTE78.setToField("tdelta")

ProtoBody18.addChildren(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.setFromNode("Animate")
ROUTE79.setFromField("a")
ROUTE79.setToNode("x3dom")
ROUTE79.setToField("a")

ProtoBody18.addChildren(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.setFromNode("Animate")
ROUTE80.setFromField("b")
ROUTE80.setToNode("x3dom")
ROUTE80.setToField("b")

ProtoBody18.addChildren(ROUTE80)
ROUTE81 = x3d.ROUTE()
ROUTE81.setFromNode("Animate")
ROUTE81.setFromField("c")
ROUTE81.setToNode("x3dom")
ROUTE81.setToField("c")

ProtoBody18.addChildren(ROUTE81)
ROUTE82 = x3d.ROUTE()
ROUTE82.setFromNode("Animate")
ROUTE82.setFromField("d")
ROUTE82.setToNode("x3dom")
ROUTE82.setToField("d")

ProtoBody18.addChildren(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.setFromNode("Animate")
ROUTE83.setFromField("pdelta")
ROUTE83.setToNode("x3dom")
ROUTE83.setToField("pdelta")

ProtoBody18.addChildren(ROUTE83)
ROUTE84 = x3d.ROUTE()
ROUTE84.setFromNode("Animate")
ROUTE84.setFromField("tdelta")
ROUTE84.setToNode("x3dom")
ROUTE84.setToField("tdelta")

ProtoBody18.addChildren(ROUTE84)

ProtoDeclare17.setProtoBody(ProtoBody18)

Scene14.addChildren(ProtoDeclare17)
ProtoInstance85 = x3d.ProtoInstance()
ProtoInstance85.setName("flower")

Scene14.addChildren(ProtoInstance85)
ProtoInstance86 = x3d.ProtoInstance()
ProtoInstance86.setName("flower")

Scene14.addChildren(ProtoInstance86)
ProtoInstance87 = x3d.ProtoInstance()
ProtoInstance87.setName("flower")

Scene14.addChildren(ProtoInstance87)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/flowers_RoundTrip.x3d")
