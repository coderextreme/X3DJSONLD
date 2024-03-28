import x3dpsail as x3d
ConfigurationProperties.setStripDefaultAttributes(True)
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
meta10.setContent("bub.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("creator")
meta11.setContent("John Carlson")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("description")
meta12.setContent("3 prismatic spheres")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("generator")
meta13.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("identifier")
meta14.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/bub.x3d")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = x3d.Scene()
NavigationInfo16 = x3d.NavigationInfo()

Scene15.addChildren(NavigationInfo16)
Background17 = x3d.Background()
Background17.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background17.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background17.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background17.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background17.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background17.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene15.addChildren(Background17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.setPosition([0,0,20])
Viewpoint18.setDescription("Look at the bubbles flying")

Scene15.addChildren(Viewpoint18)
ProtoDeclare19 = x3d.ProtoDeclare()
ProtoDeclare19.setName("Bubble")
ProtoBody20 = x3d.ProtoBody()
Transform21 = x3d.Transform()
Transform21.setDEF("transform")
Shape22 = x3d.Shape()
Shape22.setDEF("myShape")
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
#<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
#<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
ComposedShader32 = x3d.ComposedShader()
ComposedShader32.setDEF("x3dom")
ComposedShader32.setLanguage("GLSL")
field33 = x3d.field()
field33.setName("cube")
field33.setType("SFInt32")
field33.setAccessType("inputOutput")
field33.setValue("0")

ComposedShader32.addField(field33)
field34 = x3d.field()
field34.setName("chromaticDispertion")
field34.setType("SFVec3f")
field34.setAccessType("inputOutput")
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
ShaderPart38 = x3d.ShaderPart()
ShaderPart38.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart38.setType("VERTEX")

ComposedShader32.addParts(ShaderPart38)
ShaderPart39 = x3d.ShaderPart()
ShaderPart39.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"])
ShaderPart39.setType("FRAGMENT")

ComposedShader32.addParts(ShaderPart39)

Appearance23.addShaders(ComposedShader32)
ComposedShader40 = x3d.ComposedShader()
ComposedShader40.setDEF("x_ite")
ComposedShader40.setLanguage("GLSL")
field41 = x3d.field()
field41.setName("cube")
field41.setType("SFNode")
field41.setAccessType("inputOutput")
ComposedCubeMapTexture42 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture42.setUSE("texture")

field41.addChildren(ComposedCubeMapTexture42)

ComposedShader40.addField(field41)
field43 = x3d.field()
field43.setName("chromaticDispertion")
field43.setType("SFVec3f")
field43.setAccessType("inputOutput")
field43.setValue("0.98 1 1.033")

ComposedShader40.addField(field43)
field44 = x3d.field()
field44.setName("bias")
field44.setType("SFFloat")
field44.setAccessType("inputOutput")
field44.setValue("0.5")

ComposedShader40.addField(field44)
field45 = x3d.field()
field45.setName("scale")
field45.setType("SFFloat")
field45.setAccessType("inputOutput")
field45.setValue("0.5")

ComposedShader40.addField(field45)
field46 = x3d.field()
field46.setName("power")
field46.setType("SFFloat")
field46.setAccessType("inputOutput")
field46.setValue("2")

ComposedShader40.addField(field46)
ShaderPart47 = x3d.ShaderPart()
ShaderPart47.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart47.setType("VERTEX")

ComposedShader40.addParts(ShaderPart47)
ShaderPart48 = x3d.ShaderPart()
ShaderPart48.setUrl(["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"])
ShaderPart48.setType("FRAGMENT")

ComposedShader40.addParts(ShaderPart48)

Appearance23.addShaders(ComposedShader40)

Shape22.setAppearance(Appearance23)
Sphere49 = x3d.Sphere()

Shape22.setGeometry(Sphere49)

Transform21.addChild(Shape22)

ProtoBody20.addChildren(Transform21)
Script50 = x3d.Script()
Script50.setDEF("Bounce")
field51 = x3d.field()
field51.setName("translation")
field51.setAccessType("inputOutput")
field51.setType("SFVec3f")
field51.setValue("0 0 0")

Script50.addField(field51)
field52 = x3d.field()
field52.setName("velocity")
field52.setAccessType("inputOutput")
field52.setType("SFVec3f")
field52.setValue("0 0 0")

Script50.addField(field52)
field53 = x3d.field()
field53.setName("set_fraction")
field53.setAccessType("inputOnly")
field53.setType("SFTime")

Script50.addField(field53)

Script50.setSourceCode('''ecmascript:\n"+
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

ProtoBody20.addChildren(Script50)
TimeSensor54 = x3d.TimeSensor()
TimeSensor54.setDEF("TourTime")
TimeSensor54.setCycleInterval(0.15)
TimeSensor54.setLoop(True)

ProtoBody20.addChildren(TimeSensor54)
ROUTE55 = x3d.ROUTE()
ROUTE55.setFromNode("TourTime")
ROUTE55.setFromField("cycleTime")
ROUTE55.setToNode("Bounce")
ROUTE55.setToField("set_fraction")

ProtoBody20.addChildren(ROUTE55)
ROUTE56 = x3d.ROUTE()
ROUTE56.setFromNode("Bounce")
ROUTE56.setFromField("translation_changed")
ROUTE56.setToNode("transform")
ROUTE56.setToField("set_translation")

ProtoBody20.addChildren(ROUTE56)

ProtoDeclare19.setProtoBody(ProtoBody20)

Scene15.addChildren(ProtoDeclare19)
ProtoInstance57 = x3d.ProtoInstance()
ProtoInstance57.setName("Bubble")

Scene15.addChildren(ProtoInstance57)
ProtoInstance58 = x3d.ProtoInstance()
ProtoInstance58.setName("Bubble")

Scene15.addChildren(ProtoInstance58)
ProtoInstance59 = x3d.ProtoInstance()
ProtoInstance59.setName("Bubble")

Scene15.addChildren(ProtoInstance59)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../data/bub.new.python.x3d")
X3D0.toFileJSON("../data/bub.new.python.json")
