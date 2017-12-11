# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

component2 = componentObject()
component2.setName("Shaders")
component2.setLevel(1)

head1.addComponent(component2)
component3 = componentObject()
component3.setName("CubeMapTexturing")
component3.setLevel(1)

head1.addComponent(component3)
meta4 = metaObject()
meta4.setName("title")
meta4.setContent("bub.x3d")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("creator")
meta5.setContent("John Carlson")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("description")
meta6.setContent("3 prismatic spheres")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("generator")
meta7.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("identifier")
meta8.setContent("https://coderextreme.net/X3DJSONLD/bub.x3d")

head1.addMeta(meta8)
X3D0.setHead(head1)
Scene9 = SceneObject()

NavigationInfo10 = NavigationInfoObject()

Scene9.addChild(NavigationInfo10)
Background11 = BackgroundObject()
Background11.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
Background11.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background11.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
Background11.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
Background11.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
Background11.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene9.addChild(Background11)
Viewpoint12 = ViewpointObject()
Viewpoint12.setPosition([0,0,20])
Viewpoint12.setDescription("Look at the bubbles flying")

Scene9.addChild(Viewpoint12)
ProtoDeclare13 = ProtoDeclareObject()
ProtoDeclare13.setName("Bubble")

ProtoBody14 = ProtoBodyObject()

Transform15 = TransformObject()
Transform15.setDEF("transform")

Shape16 = ShapeObject()
Shape16.setDEF("myShape")

Appearance17 = AppearanceObject()

Material18 = MaterialObject()
Material18.setDiffuseColor([0.7,0.7,0.7])
Material18.setSpecularColor([0.5,0.5,0.5])

Appearance17.setMaterial(Material18)
ComposedCubeMapTexture19 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture19.setDEF("texture")

ImageTexture20 = ImageTextureObject()
ImageTexture20.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture19.setBack(ImageTexture20)
ImageTexture21 = ImageTextureObject()
ImageTexture21.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture19.setBottom(ImageTexture21)
ImageTexture22 = ImageTextureObject()
ImageTexture22.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture19.setFront(ImageTexture22)
ImageTexture23 = ImageTextureObject()
ImageTexture23.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture19.setLeft(ImageTexture23)
ImageTexture24 = ImageTextureObject()
ImageTexture24.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture19.setRight(ImageTexture24)
ImageTexture25 = ImageTextureObject()
ImageTexture25.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture19.setTop(ImageTexture25)
Appearance17.setTexture(ComposedCubeMapTexture19)

Appearance17.addComments(CommentsBlock("""<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>"""))

Appearance17.addComments(CommentsBlock("""<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>"""))
ComposedShader26 = ComposedShaderObject()
ComposedShader26.setDEF("x3dom")
ComposedShader26.setLanguage("GLSL")

field27 = fieldObject()
field27.setType(fieldObject.TYPE_SFINT32)
field27.setName("cube")
field27.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field27.setValue("0")

ComposedShader26.addField(field27)
field28 = fieldObject()
field28.setType(fieldObject.TYPE_SFVEC3F)
field28.setName("chromaticDispertion")
field28.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field28.setValue("0.98 1 1.033")

ComposedShader26.addField(field28)
field29 = fieldObject()
field29.setType(fieldObject.TYPE_SFFLOAT)
field29.setName("bias")
field29.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field29.setValue("0.5")

ComposedShader26.addField(field29)
field30 = fieldObject()
field30.setType(fieldObject.TYPE_SFFLOAT)
field30.setName("scale")
field30.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field30.setValue("0.5")

ComposedShader26.addField(field30)
field31 = fieldObject()
field31.setType(fieldObject.TYPE_SFFLOAT)
field31.setName("power")
field31.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field31.setValue("2")

ComposedShader26.addField(field31)
ShaderPart32 = ShaderPartObject()
ShaderPart32.setType("VERTEX")
ShaderPart32.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/shaders/x3dom.vs"])

ComposedShader26.addParts(ShaderPart32)
ShaderPart33 = ShaderPartObject()
ShaderPart33.setType("FRAGMENT")
ShaderPart33.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs"])

ComposedShader26.addParts(ShaderPart33)
Appearance17.addShaders(ComposedShader26)
ComposedShader34 = ComposedShaderObject()
ComposedShader34.setDEF("cobweb")
ComposedShader34.setLanguage("GLSL")

field35 = fieldObject()
field35.setType(fieldObject.TYPE_SFNODE)
field35.setName("cube")
field35.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

ComposedCubeMapTexture36 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture36.setUSE("texture")

field35.addChild(ComposedCubeMapTexture36)
ComposedShader34.addField(field35)
field37 = fieldObject()
field37.setType(fieldObject.TYPE_SFVEC3F)
field37.setName("chromaticDispertion")
field37.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field37.setValue("0.98 1 1.033")

ComposedShader34.addField(field37)
field38 = fieldObject()
field38.setType(fieldObject.TYPE_SFFLOAT)
field38.setName("bias")
field38.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field38.setValue("0.5")

ComposedShader34.addField(field38)
field39 = fieldObject()
field39.setType(fieldObject.TYPE_SFFLOAT)
field39.setName("scale")
field39.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field39.setValue("0.5")

ComposedShader34.addField(field39)
field40 = fieldObject()
field40.setType(fieldObject.TYPE_SFFLOAT)
field40.setName("power")
field40.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field40.setValue("2")

ComposedShader34.addField(field40)
ShaderPart41 = ShaderPartObject()
ShaderPart41.setType("VERTEX")
ShaderPart41.setUrl(["../shaders/cobweb.vs","https://coderextreme.net/X3DJSONLD/shaders/cobweb.vs"])

ComposedShader34.addParts(ShaderPart41)
ShaderPart42 = ShaderPartObject()
ShaderPart42.setType("FRAGMENT")
ShaderPart42.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/shaders/pc.fs"])

ComposedShader34.addParts(ShaderPart42)
Appearance17.addShaders(ComposedShader34)
Shape16.setAppearance(Appearance17)
Sphere43 = SphereObject()

Shape16.setGeometry(Sphere43)
Transform15.addChild(Shape16)
ProtoBody14.addChild(Transform15)
Script44 = ScriptObject()
Script44.setDEF("Bounce")

field45 = fieldObject()
field45.setType(fieldObject.TYPE_SFVEC3F)
field45.setName("translation")
field45.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field45.setValue("0 0 0")

Script44.addField(field45)
field46 = fieldObject()
field46.setType(fieldObject.TYPE_SFVEC3F)
field46.setName("velocity")
field46.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field46.setValue("0 0 0")

Script44.addField(field46)
field47 = fieldObject()
field47.setType(fieldObject.TYPE_SFTIME)
field47.setName("set_fraction")
field47.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script44.addField(field47)

Script44.setSourceCode("ecmascript:\n"+
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
"			}\n"+
"")
ProtoBody14.addChild(Script44)
TimeSensor48 = TimeSensorObject()
TimeSensor48.setDEF("TourTime")
TimeSensor48.setCycleInterval(0.15)
TimeSensor48.setLoop(True)

ProtoBody14.addChild(TimeSensor48)
ROUTE49 = ROUTEObject()
ROUTE49.setFromNode("TourTime")
ROUTE49.setFromField("cycleTime")
ROUTE49.setToNode("Bounce")
ROUTE49.setToField("set_fraction")

ProtoBody14.addChild(ROUTE49)
ROUTE50 = ROUTEObject()
ROUTE50.setFromNode("Bounce")
ROUTE50.setFromField("translation_changed")
ROUTE50.setToNode("transform")
ROUTE50.setToField("set_translation")

ProtoBody14.addChild(ROUTE50)
ProtoDeclare13.setProtoBody(ProtoBody14)
Scene9.addChild(ProtoDeclare13)
ProtoInstance51 = ProtoInstanceObject()
ProtoInstance51.setName("Bubble")

Scene9.addChild(ProtoInstance51)
ProtoInstance52 = ProtoInstanceObject()
ProtoInstance52.setName("Bubble")

Scene9.addChild(ProtoInstance52)
ProtoInstance53 = ProtoInstanceObject()
ProtoInstance53.setName("Bubble")

Scene9.addChild(ProtoInstance53)
X3D0.setScene(Scene9)

X3D0.toFileX3D("../data/bub.new.x3d")
