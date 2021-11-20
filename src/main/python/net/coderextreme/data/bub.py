from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = head()
component2 = component()
component2.setName("Shaders")
component2.setLevel(1)

head1.addComponent(component2)
component3 = component()
component3.setName("CubeMapTexturing")
component3.setLevel(1)

head1.addComponent(component3)
component4 = component()
component4.setName("Texturing")
component4.setLevel(1)

head1.addComponent(component4)
component5 = component()
component5.setName("Rendering")
component5.setLevel(1)

head1.addComponent(component5)
component6 = component()
component6.setName("Shape")
component6.setLevel(4)

head1.addComponent(component6)
component7 = component()
component7.setName("Grouping")
component7.setLevel(3)

head1.addComponent(component7)
meta8 = meta()
meta8.setName("title")
meta8.setContent("bub.x3d")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("creator")
meta9.setContent("John Carlson")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("description")
meta10.setContent("3 prismatic spheres")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("generator")
meta11.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("identifier")
meta12.setContent("https://coderextreme.net/X3DJSONLD/bub.x3d")

head1.addMeta(meta12)

X3D0.setHead(head1)
Scene13 = Scene()
NavigationInfo14 = NavigationInfo()

Scene13.addChildren(NavigationInfo14)
Background15 = Background()
Background15.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
Background15.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background15.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
Background15.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
Background15.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
Background15.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene13.addChildren(Background15)
Viewpoint16 = Viewpoint()
Viewpoint16.setPosition([0,0,20])
Viewpoint16.setDescription("Look at the bubbles flying")

Scene13.addChildren(Viewpoint16)
ProtoDeclare17 = ProtoDeclare()
ProtoDeclare17.setName("Bubble")
ProtoBody18 = ProtoBody()
Transform19 = Transform()
Transform19.setDEF("transform")
Shape20 = Shape()
Shape20.setDEF("myShape")
Appearance21 = Appearance()
Material22 = Material()
Material22.setDiffuseColor([0.7,0.7,0.7])
Material22.setSpecularColor([0.5,0.5,0.5])

Appearance21.setMaterial(Material22)
ComposedCubeMapTexture23 = ComposedCubeMapTexture()
ComposedCubeMapTexture23.setDEF("texture")
ImageTexture24 = ImageTexture()
ImageTexture24.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture23.setBack(ImageTexture24)
ImageTexture25 = ImageTexture()
ImageTexture25.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture23.setBottom(ImageTexture25)
ImageTexture26 = ImageTexture()
ImageTexture26.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture23.setFront(ImageTexture26)
ImageTexture27 = ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture23.setLeft(ImageTexture27)
ImageTexture28 = ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture23.setRight(ImageTexture28)
ImageTexture29 = ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture23.setTop(ImageTexture29)

Appearance21.setTexture(ComposedCubeMapTexture23)
#<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
#<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
ComposedShader30 = ComposedShader()
ComposedShader30.setDEF("x3dom")
ComposedShader30.setLanguage("GLSL")
field31 = field()
field31.setName("cube")
field31.setType("SFInt32")
field31.setAccessType("inputOutput")
field31.setValue("0")

ComposedShader30.addField(field31)
field32 = field()
field32.setName("chromaticDispertion")
field32.setType("SFVec3f")
field32.setAccessType("inputOutput")
field32.setValue("0.98 1 1.033")

ComposedShader30.addField(field32)
field33 = field()
field33.setName("bias")
field33.setType("SFFloat")
field33.setAccessType("inputOutput")
field33.setValue("0.5")

ComposedShader30.addField(field33)
field34 = field()
field34.setName("scale")
field34.setType("SFFloat")
field34.setAccessType("inputOutput")
field34.setValue("0.5")

ComposedShader30.addField(field34)
field35 = field()
field35.setName("power")
field35.setType("SFFloat")
field35.setAccessType("inputOutput")
field35.setValue("2")

ComposedShader30.addField(field35)
ShaderPart36 = ShaderPart()
ShaderPart36.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart36.setType("VERTEX")

ComposedShader30.addParts(ShaderPart36)
ShaderPart37 = ShaderPart()
ShaderPart37.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"])
ShaderPart37.setType("FRAGMENT")

ComposedShader30.addParts(ShaderPart37)

Appearance21.addShaders(ComposedShader30)
ComposedShader38 = ComposedShader()
ComposedShader38.setDEF("x_ite")
ComposedShader38.setLanguage("GLSL")
field39 = field()
field39.setName("cube")
field39.setType("SFNode")
field39.setAccessType("inputOutput")
ComposedCubeMapTexture40 = ComposedCubeMapTexture()
ComposedCubeMapTexture40.setUSE("texture")

field39.addChildren(ComposedCubeMapTexture40)

ComposedShader38.addField(field39)
field41 = field()
field41.setName("chromaticDispertion")
field41.setType("SFVec3f")
field41.setAccessType("inputOutput")
field41.setValue("0.98 1 1.033")

ComposedShader38.addField(field41)
field42 = field()
field42.setName("bias")
field42.setType("SFFloat")
field42.setAccessType("inputOutput")
field42.setValue("0.5")

ComposedShader38.addField(field42)
field43 = field()
field43.setName("scale")
field43.setType("SFFloat")
field43.setAccessType("inputOutput")
field43.setValue("0.5")

ComposedShader38.addField(field43)
field44 = field()
field44.setName("power")
field44.setType("SFFloat")
field44.setAccessType("inputOutput")
field44.setValue("2")

ComposedShader38.addField(field44)
ShaderPart45 = ShaderPart()
ShaderPart45.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart45.setType("VERTEX")

ComposedShader38.addParts(ShaderPart45)
ShaderPart46 = ShaderPart()
ShaderPart46.setUrl(["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"])
ShaderPart46.setType("FRAGMENT")

ComposedShader38.addParts(ShaderPart46)

Appearance21.addShaders(ComposedShader38)

Shape20.setAppearance(Appearance21)
Sphere47 = Sphere()

Shape20.setGeometry(Sphere47)

Transform19.addChildren(Shape20)

ProtoBody18.addChildren(Transform19)
Script48 = Script()
Script48.setDEF("Bounce")
field49 = field()
field49.setName("translation")
field49.setAccessType("inputOutput")
field49.setType("SFVec3f")
field49.setValue("0 0 0")

Script48.addField(field49)
field50 = field()
field50.setName("velocity")
field50.setAccessType("inputOutput")
field50.setType("SFVec3f")
field50.setValue("0 0 0")

Script48.addField(field50)
field51 = field()
field51.setName("set_fraction")
field51.setAccessType("inputOnly")
field51.setType("SFTime")

Script48.addField(field51)

Script48.setSourceCode('''ecmascript:\n"+
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
"			    if (Math.abs(translation.x) > 10) {\n"+
"				initialize();\n"+
"			    } else if (Math.abs(translation.y) > 10) {\n"+
"				initialize();\n"+
"			    } else if (Math.abs(translation.z) > 10) {\n"+
"				initialize();\n"+
"			    } else {\n"+
"				velocity.x += Math.random() * 0.2 - 0.1;\n"+
"				velocity.y += Math.random() * 0.2 - 0.1;\n"+
"				velocity.z += Math.random() * 0.2 - 0.1;\n"+
"			    }\n"+
"			}''')

ProtoBody18.addChildren(Script48)
TimeSensor52 = TimeSensor()
TimeSensor52.setDEF("TourTime")
TimeSensor52.setCycleInterval(0.15)
TimeSensor52.setLoop(True)

ProtoBody18.addChildren(TimeSensor52)
ROUTE53 = ROUTE()
ROUTE53.setFromNode("TourTime")
ROUTE53.setFromField("cycleTime")
ROUTE53.setToNode("Bounce")
ROUTE53.setToField("set_fraction")

ProtoBody18.addChildren(ROUTE53)
ROUTE54 = ROUTE()
ROUTE54.setFromNode("Bounce")
ROUTE54.setFromField("translation_changed")
ROUTE54.setToNode("transform")
ROUTE54.setToField("set_translation")

ProtoBody18.addChildren(ROUTE54)

ProtoDeclare17.setProtoBody(ProtoBody18)

Scene13.addChildren(ProtoDeclare17)
ProtoInstance55 = ProtoInstance()
ProtoInstance55.setName("Bubble")

Scene13.addChildren(ProtoInstance55)
ProtoInstance56 = ProtoInstance()
ProtoInstance56.setName("Bubble")

Scene13.addChildren(ProtoInstance56)
ProtoInstance57 = ProtoInstance()
ProtoInstance57.setName("Bubble")

Scene13.addChildren(ProtoInstance57)

X3D0.setScene(Scene13)
X3D0.toFileX3D("../data/bub_RoundTrip.x3d")
