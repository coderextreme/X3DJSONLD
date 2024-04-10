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
meta11.setContent("bub.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("creator")
meta12.setContent("John Carlson")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("description")
meta13.setContent("3 prismatic spheres")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("generator")
meta14.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("identifier")
meta15.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/bub.x3d")

head1.addMeta(meta15)

X3D0.setHead(head1)
Scene16 = x3d.Scene()
NavigationInfo17 = x3d.NavigationInfo()

Scene16.addChildren(NavigationInfo17)
Background18 = x3d.Background()
Background18.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background18.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background18.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background18.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background18.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background18.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene16.addChildren(Background18)
Viewpoint19 = x3d.Viewpoint()
Viewpoint19.setPosition([0,0,20])
Viewpoint19.setDescription("Look at the bubbles flying")

Scene16.addChildren(Viewpoint19)
ProtoDeclare20 = x3d.ProtoDeclare()
ProtoDeclare20.setName("Bubble")
ProtoBody21 = x3d.ProtoBody()
Transform22 = x3d.Transform()
Transform22.setDEF("transform")
Shape23 = x3d.Shape()
Shape23.setDEF("myShape")
Appearance24 = x3d.Appearance()
Material25 = x3d.Material()
Material25.setDiffuseColor([0.7,0.7,0.7])
Material25.setSpecularColor([0.5,0.5,0.5])

Appearance24.setMaterial(Material25)
ComposedCubeMapTexture26 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture26.setDEF("texture")
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture26.setBack(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture26.setBottom(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture26.setFront(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture26.setLeft(ImageTexture30)
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture26.setRight(ImageTexture31)
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture26.setTop(ImageTexture32)

Appearance24.setTexture(ComposedCubeMapTexture26)
#<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
#<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
ComposedShader33 = x3d.ComposedShader()
ComposedShader33.setDEF("x3dom")
ComposedShader33.setLanguage("GLSL")
field34 = x3d.field()
field34.setName("cube")
field34.setType("SFInt32")
field34.setAccessType("inputOutput")
field34.setValue("0")

ComposedShader33.addField(field34)
field35 = x3d.field()
field35.setName("chromaticDispertion")
field35.setType("SFVec3f")
field35.setAccessType("inputOutput")
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
ShaderPart39 = x3d.ShaderPart()
ShaderPart39.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart39.setType("VERTEX")

ComposedShader33.addParts(ShaderPart39)
ShaderPart40 = x3d.ShaderPart()
ShaderPart40.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"])
ShaderPart40.setType("FRAGMENT")

ComposedShader33.addParts(ShaderPart40)

Appearance24.addShaders(ComposedShader33)
ComposedShader41 = x3d.ComposedShader()
ComposedShader41.setDEF("x_ite")
ComposedShader41.setLanguage("GLSL")
field42 = x3d.field()
field42.setName("cube")
field42.setType("SFNode")
field42.setAccessType("inputOutput")
ComposedCubeMapTexture43 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture43.setUSE("texture")

field42.addChildren(ComposedCubeMapTexture43)

ComposedShader41.addField(field42)
field44 = x3d.field()
field44.setName("chromaticDispertion")
field44.setType("SFVec3f")
field44.setAccessType("inputOutput")
field44.setValue("0.98 1 1.033")

ComposedShader41.addField(field44)
field45 = x3d.field()
field45.setName("bias")
field45.setType("SFFloat")
field45.setAccessType("inputOutput")
field45.setValue("0.5")

ComposedShader41.addField(field45)
field46 = x3d.field()
field46.setName("scale")
field46.setType("SFFloat")
field46.setAccessType("inputOutput")
field46.setValue("0.5")

ComposedShader41.addField(field46)
field47 = x3d.field()
field47.setName("power")
field47.setType("SFFloat")
field47.setAccessType("inputOutput")
field47.setValue("2")

ComposedShader41.addField(field47)
ShaderPart48 = x3d.ShaderPart()
ShaderPart48.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart48.setType("VERTEX")

ComposedShader41.addParts(ShaderPart48)
ShaderPart49 = x3d.ShaderPart()
ShaderPart49.setUrl(["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"])
ShaderPart49.setType("FRAGMENT")

ComposedShader41.addParts(ShaderPart49)

Appearance24.addShaders(ComposedShader41)

Shape23.setAppearance(Appearance24)
Sphere50 = x3d.Sphere()

Shape23.setGeometry(Sphere50)

Transform22.addChild(Shape23)

ProtoBody21.addChildren(Transform22)
Script51 = x3d.Script()
Script51.setDEF("Bounce")
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
field54.setType("SFTime")

Script51.addField(field54)

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

ProtoBody21.addChildren(Script51)
TimeSensor55 = x3d.TimeSensor()
TimeSensor55.setDEF("TourTime")
TimeSensor55.setCycleInterval(0.15)
TimeSensor55.setLoop(True)

ProtoBody21.addChildren(TimeSensor55)
ROUTE56 = x3d.ROUTE()
ROUTE56.setFromNode("TourTime")
ROUTE56.setFromField("cycleTime")
ROUTE56.setToNode("Bounce")
ROUTE56.setToField("set_fraction")

ProtoBody21.addChildren(ROUTE56)
ROUTE57 = x3d.ROUTE()
ROUTE57.setFromNode("Bounce")
ROUTE57.setFromField("translation_changed")
ROUTE57.setToNode("transform")
ROUTE57.setToField("set_translation")

ProtoBody21.addChildren(ROUTE57)

ProtoDeclare20.setProtoBody(ProtoBody21)

Scene16.addChildren(ProtoDeclare20)
ProtoInstance58 = x3d.ProtoInstance()
ProtoInstance58.setName("Bubble")

Scene16.addChildren(ProtoInstance58)
ProtoInstance59 = x3d.ProtoInstance()
ProtoInstance59.setName("Bubble")

Scene16.addChildren(ProtoInstance59)
ProtoInstance60 = x3d.ProtoInstance()
ProtoInstance60.setName("Bubble")

Scene16.addChildren(ProtoInstance60)

X3D0.setScene(Scene16)
X3D0.toFileX3D("../personal/bub.new.python.x3d")
X3D0.toFileJSON("../personal/bub.new.python.json")
