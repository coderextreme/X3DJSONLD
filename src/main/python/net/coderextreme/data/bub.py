# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("bub.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("description")
meta4.setContent("3 prismatic spheres")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("generator")
meta5.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/bub.x3d")

head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()

NavigationInfo8 = NavigationInfoObject()

Scene7.addChild(NavigationInfo8)
Background9 = BackgroundObject()
Background9.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
Background9.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background9.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
Background9.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
Background9.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
Background9.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene7.addChild(Background9)
Viewpoint10 = ViewpointObject()
Viewpoint10.setPosition([0,0,20])
Viewpoint10.setDescription("Look at the bubbles flying")

Scene7.addChild(Viewpoint10)
ProtoDeclare11 = ProtoDeclareObject()
ProtoDeclare11.setName("Bubble")

ProtoBody12 = ProtoBodyObject()

Transform13 = TransformObject()
Transform13.setDEF("transform")

Shape14 = ShapeObject()
Shape14.setDEF("myShape")

Appearance15 = AppearanceObject()

Material16 = MaterialObject()
Material16.setDiffuseColor([0.7,0.7,0.7])
Material16.setSpecularColor([0.5,0.5,0.5])

Appearance15.setMaterial(Material16)
ComposedCubeMapTexture17 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture17.setDEF("texture")

ImageTexture18 = ImageTextureObject()
ImageTexture18.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture17.setBack(ImageTexture18)
ImageTexture19 = ImageTextureObject()
ImageTexture19.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture17.setBottom(ImageTexture19)
ImageTexture20 = ImageTextureObject()
ImageTexture20.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture17.setFront(ImageTexture20)
ImageTexture21 = ImageTextureObject()
ImageTexture21.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture17.setLeft(ImageTexture21)
ImageTexture22 = ImageTextureObject()
ImageTexture22.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture17.setRight(ImageTexture22)
ImageTexture23 = ImageTextureObject()
ImageTexture23.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture17.setTop(ImageTexture23)
Appearance15.setTexture(ComposedCubeMapTexture17)

Appearance15.addComments(CommentsBlock("<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>"))

Appearance15.addComments(CommentsBlock("<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>"))
ComposedShader24 = ComposedShaderObject()
ComposedShader24.setDEF("x3dom")
ComposedShader24.setLanguage("GLSL")

field25 = fieldObject()
field25.setType(fieldObject.TYPE_SFINT32)
field25.setName("cube")
field25.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field25.setValue("0")

ComposedShader24.addField(field25)
field26 = fieldObject()
field26.setType(fieldObject.TYPE_SFVEC3F)
field26.setName("chromaticDispertion")
field26.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field26.setValue("0.98 1 1.033")

ComposedShader24.addField(field26)
field27 = fieldObject()
field27.setType(fieldObject.TYPE_SFFLOAT)
field27.setName("bias")
field27.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field27.setValue("0.5")

ComposedShader24.addField(field27)
field28 = fieldObject()
field28.setType(fieldObject.TYPE_SFFLOAT)
field28.setName("scale")
field28.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field28.setValue("0.5")

ComposedShader24.addField(field28)
field29 = fieldObject()
field29.setType(fieldObject.TYPE_SFFLOAT)
field29.setName("power")
field29.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field29.setValue("2")

ComposedShader24.addField(field29)
ShaderPart30 = ShaderPartObject()
ShaderPart30.setType("VERTEX")
ShaderPart30.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/shaders/x3dom.vs"])

ComposedShader24.addParts(ShaderPart30)
ShaderPart31 = ShaderPartObject()
ShaderPart31.setType("FRAGMENT")
ShaderPart31.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs"])

ComposedShader24.addParts(ShaderPart31)
Appearance15.addShaders(ComposedShader24)
ComposedShader32 = ComposedShaderObject()
ComposedShader32.setDEF("cobweb")
ComposedShader32.setLanguage("GLSL")

field33 = fieldObject()
field33.setType(fieldObject.TYPE_SFNODE)
field33.setName("cube")
field33.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

ComposedCubeMapTexture34 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture34.setUSE("texture")

field33.addChild(ComposedCubeMapTexture34)
ComposedShader32.addField(field33)
field35 = fieldObject()
field35.setType(fieldObject.TYPE_SFVEC3F)
field35.setName("chromaticDispertion")
field35.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field35.setValue("0.98 1 1.033")

ComposedShader32.addField(field35)
field36 = fieldObject()
field36.setType(fieldObject.TYPE_SFFLOAT)
field36.setName("bias")
field36.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field36.setValue("0.5")

ComposedShader32.addField(field36)
field37 = fieldObject()
field37.setType(fieldObject.TYPE_SFFLOAT)
field37.setName("scale")
field37.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field37.setValue("0.5")

ComposedShader32.addField(field37)
field38 = fieldObject()
field38.setType(fieldObject.TYPE_SFFLOAT)
field38.setName("power")
field38.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field38.setValue("2")

ComposedShader32.addField(field38)
ShaderPart39 = ShaderPartObject()
ShaderPart39.setType("VERTEX")
ShaderPart39.setUrl(["../shaders/cobweb.vs","https://coderextreme.net/X3DJSONLD/shaders/cobweb.vs"])

ComposedShader32.addParts(ShaderPart39)
ShaderPart40 = ShaderPartObject()
ShaderPart40.setType("FRAGMENT")
ShaderPart40.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/shaders/pc.fs"])

ComposedShader32.addParts(ShaderPart40)
Appearance15.addShaders(ComposedShader32)
Shape14.setAppearance(Appearance15)
Sphere41 = SphereObject()

Shape14.setGeometry(Sphere41)
Transform13.addChild(Shape14)
ProtoBody12.addChild(Transform13)
Script42 = ScriptObject()
Script42.setDEF("Bounce")

field43 = fieldObject()
field43.setType(fieldObject.TYPE_SFVEC3F)
field43.setName("translation")
field43.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field43.setValue("0 0 0")

Script42.addField(field43)
field44 = fieldObject()
field44.setType(fieldObject.TYPE_SFVEC3F)
field44.setName("velocity")
field44.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field44.setValue("0 0 0")

Script42.addField(field44)
field45 = fieldObject()
field45.setType(fieldObject.TYPE_SFTIME)
field45.setName("set_fraction")
field45.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script42.addField(field45)

Script42.setSourceCode("ecmascript:\n"+
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
ProtoBody12.addChild(Script42)
TimeSensor46 = TimeSensorObject()
TimeSensor46.setDEF("TourTime")
TimeSensor46.setCycleInterval(0.15)
TimeSensor46.setLoop(True)

ProtoBody12.addChild(TimeSensor46)
ROUTE47 = ROUTEObject()
ROUTE47.setFromNode("TourTime")
ROUTE47.setFromField("cycleTime")
ROUTE47.setToNode("Bounce")
ROUTE47.setToField("set_fraction")

ProtoBody12.addChild(ROUTE47)
ROUTE48 = ROUTEObject()
ROUTE48.setFromNode("Bounce")
ROUTE48.setFromField("translation_changed")
ROUTE48.setToNode("transform")
ROUTE48.setToField("set_translation")

ProtoBody12.addChild(ROUTE48)
ProtoDeclare11.setProtoBody(ProtoBody12)
Scene7.addChild(ProtoDeclare11)
ProtoInstance49 = ProtoInstanceObject()
ProtoInstance49.setName("Bubble")

Scene7.addChild(ProtoInstance49)
ProtoInstance50 = ProtoInstanceObject()
ProtoInstance50.setName("Bubble")

Scene7.addChild(ProtoInstance50)
ProtoInstance51 = ProtoInstanceObject()
ProtoInstance51.setName("Bubble")

Scene7.addChild(ProtoInstance51)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/bub.new.x3d")
