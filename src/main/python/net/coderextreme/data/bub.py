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
meta4 = x3d.meta()
meta4.setName("title")
meta4.setContent("bub.x3d")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("John Carlson")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("3 prismatic spheres")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("generator")
meta7.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("identifier")
meta8.setContent("https://coderextreme.net/X3DJSONLD/bub.x3d")

head1.addMeta(meta8)

X3D0.setHead(head1)
Scene9 = x3d.Scene()
NavigationInfo10 = x3d.NavigationInfo()
NavigationInfo10.setType(["EXAMINE","ANY"])

Scene9.addChildren(NavigationInfo10)
Background11 = x3d.Background()
Background11.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
Background11.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background11.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
Background11.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
Background11.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
Background11.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene9.addChildren(Background11)
Viewpoint12 = x3d.Viewpoint()
Viewpoint12.setPosition([0,0,20])
Viewpoint12.setDescription("Look at the bubbles flying")

Scene9.addChildren(Viewpoint12)
ProtoDeclare13 = x3d.ProtoDeclare()
ProtoDeclare13.setName("Bubble")
ProtoBody14 = x3d.ProtoBody()
Transform15 = x3d.Transform()
Transform15.setDEF("transform")
Transform15.setTranslation([0,0,0])
Shape16 = x3d.Shape()
Shape16.setDEF("myShape")
Appearance17 = x3d.Appearance()
Material18 = x3d.Material()
Material18.setDiffuseColor([0.7,0.7,0.7])
Material18.setSpecularColor([0.5,0.5,0.5])

Appearance17.setMaterial(Material18)
ComposedCubeMapTexture19 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture19.setDEF("texture")
ImageTexture20 = x3d.ImageTexture()
ImageTexture20.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture19.setBack(ImageTexture20)
ImageTexture21 = x3d.ImageTexture()
ImageTexture21.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture19.setBottom(ImageTexture21)
ImageTexture22 = x3d.ImageTexture()
ImageTexture22.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture19.setFront(ImageTexture22)
ImageTexture23 = x3d.ImageTexture()
ImageTexture23.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture19.setLeft(ImageTexture23)
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture19.setRight(ImageTexture24)
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture19.setTop(ImageTexture25)

Appearance17.setTexture(ComposedCubeMapTexture19)
#
#					<ComposedShader DEF='gl' language=\"GLSL\">
#					  <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/>
#					  <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/>
#					  <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/>
#					  <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/>
#					  <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/>
#
#					  <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"' type='VERTEX'></ShaderPart>
#					  <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart>
#					</ComposedShader>
#					<ComposedShader DEF='freewrl' language=\"GLSL\">
#					  <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/>
#					  <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/>
#					  <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/>
#					  <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/>
#					  <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/>
#
#					  <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart>
#					  <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart>
#					</ComposedShader>
#					
#
#					<ComposedShader DEF='instant' language=\"GLSL\">
#					  <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/>
#					  <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/>
#					  <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/>
#					  <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/>
#					  <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/>
#
#			      <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type='VERTEX'></ShaderPart>
#			      <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart>
#                            </ComposedShader>
#                            
ComposedShader26 = x3d.ComposedShader()
ComposedShader26.setDEF("x3dom")
ComposedShader26.setLanguage("GLSL")
field27 = x3d.field()
field27.setName("cube")
field27.setType("SFInt32")
field27.setAccessType("inputOutput")
field27.setValue("0")

ComposedShader26.addField(field27)
field28 = x3d.field()
field28.setName("chromaticDispertion")
field28.setType("SFVec3f")
field28.setAccessType("inputOutput")
field28.setValue("0.98 1 1.033")

ComposedShader26.addField(field28)
field29 = x3d.field()
field29.setName("bias")
field29.setType("SFFloat")
field29.setAccessType("inputOutput")
field29.setValue("0.5")

ComposedShader26.addField(field29)
field30 = x3d.field()
field30.setName("scale")
field30.setType("SFFloat")
field30.setAccessType("inputOutput")
field30.setValue("0.5")

ComposedShader26.addField(field30)
field31 = x3d.field()
field31.setName("power")
field31.setType("SFFloat")
field31.setAccessType("inputOutput")
field31.setValue("2")

ComposedShader26.addField(field31)
ShaderPart32 = x3d.ShaderPart()
ShaderPart32.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart32.setType("VERTEX")

ComposedShader26.addParts(ShaderPart32)
ShaderPart33 = x3d.ShaderPart()
ShaderPart33.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"])
ShaderPart33.setType("FRAGMENT")

ComposedShader26.addParts(ShaderPart33)

Appearance17.addShaders(ComposedShader26)
ComposedShader34 = x3d.ComposedShader()
ComposedShader34.setDEF("x_ite")
ComposedShader34.setLanguage("GLSL")
field35 = x3d.field()
field35.setName("cube")
field35.setType("SFNode")
field35.setAccessType("inputOutput")
ComposedCubeMapTexture36 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture36.setUSE("texture")

field35.addChildren(ComposedCubeMapTexture36)

ComposedShader34.addField(field35)
field37 = x3d.field()
field37.setName("chromaticDispertion")
field37.setType("SFVec3f")
field37.setAccessType("inputOutput")
field37.setValue("0.98 1 1.033")

ComposedShader34.addField(field37)
field38 = x3d.field()
field38.setName("bias")
field38.setType("SFFloat")
field38.setAccessType("inputOutput")
field38.setValue("0.5")

ComposedShader34.addField(field38)
field39 = x3d.field()
field39.setName("scale")
field39.setType("SFFloat")
field39.setAccessType("inputOutput")
field39.setValue("0.5")

ComposedShader34.addField(field39)
field40 = x3d.field()
field40.setName("power")
field40.setType("SFFloat")
field40.setAccessType("inputOutput")
field40.setValue("2")

ComposedShader34.addField(field40)
ShaderPart41 = x3d.ShaderPart()
ShaderPart41.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/src/main/shaders/x_ite.vs"])
ShaderPart41.setType("VERTEX")

ComposedShader34.addParts(ShaderPart41)
ShaderPart42 = x3d.ShaderPart()
ShaderPart42.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"])
ShaderPart42.setType("FRAGMENT")

ComposedShader34.addParts(ShaderPart42)

Appearance17.addShaders(ComposedShader34)

Shape16.setAppearance(Appearance17)
Sphere43 = x3d.Sphere()

Shape16.setGeometry(Sphere43)

Transform15.addChildren(Shape16)

ProtoBody14.addChildren(Transform15)
Script44 = x3d.Script()
Script44.setDEF("Bounce")
field45 = x3d.field()
field45.setName("translation")
field45.setAccessType("inputOutput")
field45.setType("SFVec3f")
field45.setValue("0 0 0")

Script44.addField(field45)
field46 = x3d.field()
field46.setName("velocity")
field46.setAccessType("inputOutput")
field46.setType("SFVec3f")
field46.setValue("0 0 0")

Script44.addField(field46)
field47 = x3d.field()
field47.setName("set_fraction")
field47.setAccessType("inputOnly")
field47.setType("SFTime")

Script44.addField(field47)

Script44.setSourceCode('''ecmascript:\n"+
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

ProtoBody14.addChildren(Script44)
TimeSensor48 = x3d.TimeSensor()
TimeSensor48.setDEF("TourTime")
TimeSensor48.setCycleInterval(0.15)
TimeSensor48.setLoop(True)

ProtoBody14.addChildren(TimeSensor48)
ROUTE49 = x3d.ROUTE()
ROUTE49.setFromNode("TourTime")
ROUTE49.setFromField("cycleTime")
ROUTE49.setToNode("Bounce")
ROUTE49.setToField("set_fraction")

ProtoBody14.addChildren(ROUTE49)
ROUTE50 = x3d.ROUTE()
ROUTE50.setFromNode("Bounce")
ROUTE50.setFromField("translation_changed")
ROUTE50.setToNode("transform")
ROUTE50.setToField("set_translation")

ProtoBody14.addChildren(ROUTE50)

ProtoDeclare13.setProtoBody(ProtoBody14)

Scene9.addChildren(ProtoDeclare13)
ProtoInstance51 = x3d.ProtoInstance()
ProtoInstance51.setName("Bubble")

Scene9.addChildren(ProtoInstance51)
ProtoInstance52 = x3d.ProtoInstance()
ProtoInstance52.setName("Bubble")

Scene9.addChildren(ProtoInstance52)
ProtoInstance53 = x3d.ProtoInstance()
ProtoInstance53.setName("Bubble")

Scene9.addChildren(ProtoInstance53)

X3D0.setScene(Scene9)
X3D0.toFileX3D("../data/bub_RoundTrip.x3d")
