import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Shaders")
component2.setLevel(1)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("CubeMapTexturing")
component3.setLevel(1)

head1.addComponent(component3)
component4 = x3d.component()
component4.setName("Texturing")
component4.setLevel(1)

head1.addComponent(component4)
component5 = x3d.component()
component5.setName("Rendering")
component5.setLevel(1)

head1.addComponent(component5)
component6 = x3d.component()
component6.setName("Shape")
component6.setLevel(4)

head1.addComponent(component6)
component7 = x3d.component()
component7.setName("Grouping")
component7.setLevel(3)

head1.addComponent(component7)
meta8 = x3d.meta()
meta8.setName("title")
meta8.setContent("flowerproto.x3d")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("creator")
meta9.setContent("John Carlson")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("description")
meta10.setContent("A flower proto with configurable shaders")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("generator")
meta11.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("identifier")
meta12.setContent("https://coderextreme.net/X3DJSONLD/flowerproto.x3d")

head1.addMeta(meta12)

X3D0.setHead(head1)
Scene13 = x3d.Scene()
ProtoDeclare14 = x3d.ProtoDeclare()
ProtoDeclare14.setName("FlowerProto")
ProtoInterface15 = x3d.ProtoInterface()
field16 = x3d.field()
field16.setAccessType("inputOutput")
field16.setName("vertex")
field16.setType("MFString")
field16.setValue("\"../shaders/gl_flowers_chromatic.vs\"")

ProtoInterface15.addField(field16)
field17 = x3d.field()
field17.setAccessType("inputOutput")
field17.setName("fragment")
field17.setType("MFString")
field17.setValue("\"../shaders/pc_flowers.fs\"")

ProtoInterface15.addField(field17)

ProtoDeclare14.setProtoInterface(ProtoInterface15)
ProtoBody18 = x3d.ProtoBody()
Transform19 = x3d.Transform()
Transform19.setDEF("transform")
Transform19.setTranslation([0,0,0])
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

ComposedCubeMapTexture23.setBack(ImageTexture24)
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture23.setBottom(ImageTexture25)
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture23.setFront(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture23.setLeft(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture23.setRight(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture23.setTop(ImageTexture29)

Appearance21.setTexture(ComposedCubeMapTexture23)
ComposedShader30 = x3d.ComposedShader()
ComposedShader30.setDEF("shader")
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
# 
#		       <field name='cube' type='SFNode' accessType=\"inputOutput\">
#			  <ComposedCubeMapTexture USE=\"texture\"/>
#		  </field>
#		  
ShaderPart42 = x3d.ShaderPart()
ShaderPart42.setType("VERTEX")
IS43 = x3d.IS()
connect44 = x3d.connect()
connect44.setNodeField("url")
connect44.setProtoField("vertex")

IS43.addConnect(connect44)

ShaderPart42.setIS(IS43)

ComposedShader30.addParts(ShaderPart42)
ShaderPart45 = x3d.ShaderPart()
ShaderPart45.setType("FRAGMENT")
IS46 = x3d.IS()
connect47 = x3d.connect()
connect47.setNodeField("url")
connect47.setProtoField("fragment")

IS46.addConnect(connect47)

ShaderPart45.setIS(IS46)

ComposedShader30.addParts(ShaderPart45)

Appearance21.addShaders(ComposedShader30)

Shape20.setAppearance(Appearance21)
Sphere48 = x3d.Sphere()

Shape20.setGeometry(Sphere48)

Transform19.addChildren(Shape20)
Script49 = x3d.Script()
Script49.setDEF("Animate")
field50 = x3d.field()
field50.setName("translation")
field50.setAccessType("inputOutput")
field50.setType("SFVec3f")
field50.setValue("0 0 0")

Script49.addField(field50)
field51 = x3d.field()
field51.setName("velocity")
field51.setAccessType("inputOutput")
field51.setType("SFVec3f")
field51.setValue("0 0 0")

Script49.addField(field51)
field52 = x3d.field()
field52.setName("set_fraction")
field52.setAccessType("inputOnly")
field52.setType("SFFloat")

Script49.addField(field52)
field53 = x3d.field()
field53.setName("a")
field53.setType("SFFloat")
field53.setAccessType("inputOutput")
field53.setValue("0.5")

Script49.addField(field53)
field54 = x3d.field()
field54.setName("b")
field54.setType("SFFloat")
field54.setAccessType("inputOutput")
field54.setValue("0.5")

Script49.addField(field54)
field55 = x3d.field()
field55.setName("c")
field55.setType("SFFloat")
field55.setAccessType("inputOutput")
field55.setValue("3")

Script49.addField(field55)
field56 = x3d.field()
field56.setName("d")
field56.setType("SFFloat")
field56.setAccessType("inputOutput")
field56.setValue("3")

Script49.addField(field56)
field57 = x3d.field()
field57.setName("tdelta")
field57.setType("SFFloat")
field57.setAccessType("inputOutput")
field57.setValue("0.5")

Script49.addField(field57)
field58 = x3d.field()
field58.setName("pdelta")
field58.setType("SFFloat")
field58.setAccessType("inputOutput")
field58.setValue("0.5")

Script49.addField(field58)

Script49.setSourceCode('''ecmascript:\n"+
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

Transform19.addChildren(Script49)
TimeSensor59 = x3d.TimeSensor()
TimeSensor59.setDEF("TourTime")
TimeSensor59.setCycleInterval(5)
TimeSensor59.setLoop(True)

Transform19.addChildren(TimeSensor59)
ROUTE60 = x3d.ROUTE()
ROUTE60.setFromNode("TourTime")
ROUTE60.setFromField("fraction_changed")
ROUTE60.setToNode("Animate")
ROUTE60.setToField("set_fraction")

Transform19.addChildren(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.setFromNode("Animate")
ROUTE61.setFromField("translation_changed")
ROUTE61.setToNode("transform")
ROUTE61.setToField("set_translation")

Transform19.addChildren(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.setFromNode("Animate")
ROUTE62.setFromField("a")
ROUTE62.setToNode("shader")
ROUTE62.setToField("a")

Transform19.addChildren(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.setFromNode("Animate")
ROUTE63.setFromField("b")
ROUTE63.setToNode("shader")
ROUTE63.setToField("b")

Transform19.addChildren(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromNode("Animate")
ROUTE64.setFromField("c")
ROUTE64.setToNode("shader")
ROUTE64.setToField("c")

Transform19.addChildren(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.setFromNode("Animate")
ROUTE65.setFromField("d")
ROUTE65.setToNode("shader")
ROUTE65.setToField("d")

Transform19.addChildren(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.setFromNode("Animate")
ROUTE66.setFromField("tdelta")
ROUTE66.setToNode("shader")
ROUTE66.setToField("tdelta")

Transform19.addChildren(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.setFromNode("Animate")
ROUTE67.setFromField("pdelta")
ROUTE67.setToNode("shader")
ROUTE67.setToField("pdelta")

Transform19.addChildren(ROUTE67)

ProtoBody18.addChildren(Transform19)

ProtoDeclare14.setProtoBody(ProtoBody18)

Scene13.addChildren(ProtoDeclare14)

X3D0.setScene(Scene13)
X3D0.toFileX3D("../data/flowerproto_RoundTrip.x3d")
