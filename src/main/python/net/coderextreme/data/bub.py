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
meta8.setContent("bub.x3d")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("creator")
meta9.setContent("John Carlson")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("description")
meta10.setContent("3 prismatic spheres")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("generator")
meta11.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("identifier")
meta12.setContent("https://coderextreme.net/X3DJSONLD/bub.x3d")

head1.addMeta(meta12)

X3D0.setHead(head1)
Scene13 = x3d.Scene()
NavigationInfo14 = x3d.NavigationInfo()

Scene13.addChildren(NavigationInfo14)
Background15 = x3d.Background()
Background15.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
Background15.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background15.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
Background15.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
Background15.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
Background15.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])
Background15.setSkyColor([0,0,0])
Background15.setTransparency(0)

Scene13.addChildren(Background15)
Viewpoint16 = x3d.Viewpoint()
Viewpoint16.setPosition([0,0,20])
Viewpoint16.setDescription("Look at the bubbles flying")

Scene13.addChildren(Viewpoint16)
ProtoDeclare17 = x3d.ProtoDeclare()
ProtoDeclare17.setName("Bubble")
ProtoBody18 = x3d.ProtoBody()
Transform19 = x3d.Transform()
Transform19.setDEF("transform")
Transform19.setBboxCenter([0,0,0])
Transform19.setBboxSize([-1,-1,-1])
Shape20 = x3d.Shape()
Shape20.setDEF("myShape")
Shape20.setBboxCenter([0,0,0])
Shape20.setBboxSize([-1,-1,-1])
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
#<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
#<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
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
field32.setType("SFVec3f")
field32.setAccessType("inputOutput")
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
ShaderPart36 = x3d.ShaderPart()
ShaderPart36.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart36.setType("VERTEX")

ComposedShader30.addParts(ShaderPart36)
ShaderPart37 = x3d.ShaderPart()
ShaderPart37.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"])
ShaderPart37.setType("FRAGMENT")

ComposedShader30.addParts(ShaderPart37)

Appearance21.addShaders(ComposedShader30)
ComposedShader38 = x3d.ComposedShader()
ComposedShader38.setDEF("x_ite")
ComposedShader38.setLanguage("GLSL")
field39 = x3d.field()
field39.setName("cube")
field39.setType("SFNode")
field39.setAccessType("inputOutput")
ComposedCubeMapTexture40 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture40.setUSE("texture")

field39.addChildren(ComposedCubeMapTexture40)

ComposedShader38.addField(field39)
field41 = x3d.field()
field41.setName("chromaticDispertion")
field41.setType("SFVec3f")
field41.setAccessType("inputOutput")
field41.setValue("0.98 1 1.033")

ComposedShader38.addField(field41)
field42 = x3d.field()
field42.setName("bias")
field42.setType("SFFloat")
field42.setAccessType("inputOutput")
field42.setValue("0.5")

ComposedShader38.addField(field42)
field43 = x3d.field()
field43.setName("scale")
field43.setType("SFFloat")
field43.setAccessType("inputOutput")
field43.setValue("0.5")

ComposedShader38.addField(field43)
field44 = x3d.field()
field44.setName("power")
field44.setType("SFFloat")
field44.setAccessType("inputOutput")
field44.setValue("2")

ComposedShader38.addField(field44)
ShaderPart45 = x3d.ShaderPart()
ShaderPart45.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/src/main/shaders/x_ite.vs"])
ShaderPart45.setType("VERTEX")

ComposedShader38.addParts(ShaderPart45)
ShaderPart46 = x3d.ShaderPart()
ShaderPart46.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"])
ShaderPart46.setType("FRAGMENT")

ComposedShader38.addParts(ShaderPart46)

Appearance21.addShaders(ComposedShader38)

Shape20.setAppearance(Appearance21)
Sphere47 = x3d.Sphere()

Shape20.setGeometry(Sphere47)

Transform19.addChildren(Shape20)

ProtoBody18.addChildren(Transform19)
X3DScript48 = x3d.X3DScript()
X3DScript48.setDEF("Bounce")
field49 = x3d.field()
field49.setName("translation")
field49.setAccessType("inputOutput")
field49.setType("SFVec3f")
field49.setValue("0 0 0")

X3DScript48.addField(field49)
field50 = x3d.field()
field50.setName("velocity")
field50.setAccessType("inputOutput")
field50.setType("SFVec3f")
field50.setValue("0 0 0")

X3DScript48.addField(field50)
field51 = x3d.field()
field51.setName("set_fraction")
field51.setAccessType("inputOnly")
field51.setType("SFTime")

X3DScript48.addField(field51)

ProtoBody18.addX3DScript(X3DScript48)
TimeSensor52 = x3d.TimeSensor()
TimeSensor52.setDEF("TourTime")
TimeSensor52.setCycleInterval(0.15)
TimeSensor52.setLoop(True)

ProtoBody18.addChildren(TimeSensor52)
ROUTE53 = x3d.ROUTE()
ROUTE53.setFromNode("TourTime")
ROUTE53.setFromField("cycleTime")
ROUTE53.setToNode("Bounce")
ROUTE53.setToField("set_fraction")

ProtoBody18.addChildren(ROUTE53)
ROUTE54 = x3d.ROUTE()
ROUTE54.setFromNode("Bounce")
ROUTE54.setFromField("translation_changed")
ROUTE54.setToNode("transform")
ROUTE54.setToField("set_translation")

ProtoBody18.addChildren(ROUTE54)

ProtoDeclare17.setProtoBody(ProtoBody18)

Scene13.addChildren(ProtoDeclare17)
ProtoInstance55 = x3d.ProtoInstance()
ProtoInstance55.setName("Bubble")

Scene13.addChildren(ProtoInstance55)
ProtoInstance56 = x3d.ProtoInstance()
ProtoInstance56.setName("Bubble")

Scene13.addChildren(ProtoInstance56)
ProtoInstance57 = x3d.ProtoInstance()
ProtoInstance57.setName("Bubble")

Scene13.addChildren(ProtoInstance57)

X3D0.setScene(Scene13)
X3D0.toFileX3D("../data/bub_RoundTrip.x3d")
