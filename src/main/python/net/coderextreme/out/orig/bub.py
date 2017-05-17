from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
meta2 = metaObject().setName("title").setContent("bub.x3d")
head1.addMeta(meta2)
meta3 = metaObject().setName("creator").setContent("John Carlson")
head1.addMeta(meta3)
meta4 = metaObject().setName("description").setContent("3 prismatic spheres")
head1.addMeta(meta4)
meta5 = metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")
head1.addMeta(meta5)
meta6 = metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/bub.x3d")
head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()
NavigationInfo8 = NavigationInfoObject()
Scene7.addChild(NavigationInfo8)
Background9 = BackgroundObject().setBackUrl(["images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]).setBottomUrl(["images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]).setFrontUrl(["images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]).setLeftUrl(["images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]).setRightUrl(["images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]).setTopUrl(["images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])
Scene7.addChild(Background9)
Viewpoint10 = ViewpointObject().setPosition([0,0,20]).setDescription("Look at the bubbles flying")
Scene7.addChild(Viewpoint10)
ProtoDeclare11 = ProtoDeclareObject().setName("Bubble")
ProtoBody12 = ProtoBodyObject()
Transform13 = TransformObject().setDEF("transform")
Shape14 = ShapeObject().setDEF("myShape")
Appearance15 = AppearanceObject()
Material16 = MaterialObject().setDiffuseColor([0.7,0.7,0.7]).setSpecularColor([0.5,0.5,0.5])
Appearance15.setMaterial(Material16)
ComposedCubeMapTexture17 = ComposedCubeMapTextureObject().setDEF("texture")
ImageTexture18 = ImageTextureObject().setUrl(["images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
ComposedCubeMapTexture17.setBack(ImageTexture18)
ImageTexture19 = ImageTextureObject().setUrl(["images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
ComposedCubeMapTexture17.setBottom(ImageTexture19)
ImageTexture20 = ImageTextureObject().setUrl(["images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
ComposedCubeMapTexture17.setFront(ImageTexture20)
ImageTexture21 = ImageTextureObject().setUrl(["images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
ComposedCubeMapTexture17.setLeft(ImageTexture21)
ImageTexture22 = ImageTextureObject().setUrl(["images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
ComposedCubeMapTexture17.setRight(ImageTexture22)
ImageTexture23 = ImageTextureObject().setUrl(["images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])
ComposedCubeMapTexture17.setTop(ImageTexture23)
Appearance15.setTexture(ComposedCubeMapTexture17)

Appearance15.addComments(CommentsBlock("<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='x3dom' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"shaders/x3dom.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/x3dom.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>"))
ComposedShader24 = ComposedShaderObject().setDEF("cobweb").setLanguage("GLSL")
field25 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
ComposedCubeMapTexture26 = ComposedCubeMapTextureObject().setUSE("texture")
field25.addChild(ComposedCubeMapTexture26)
ComposedShader24.addField(field25)
field27 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033")
ComposedShader24.addField(field27)
field28 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
ComposedShader24.addField(field28)
field29 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
ComposedShader24.addField(field29)
field30 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2")
ComposedShader24.addField(field30)
ShaderPart31 = ShaderPartObject().setType("VERTEX").setUrl(["shaders/cobweb.vs","https://coderextreme.net/X3DJSONLD/shaders/cobweb.vs"])
ComposedShader24.addParts(ShaderPart31)
ShaderPart32 = ShaderPartObject().setType("FRAGMENT").setUrl(["shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/shaders/pc.fs"])
ComposedShader24.addParts(ShaderPart32)
Appearance15.addShaders(ComposedShader24)
Shape14.setAppearance(Appearance15)
Sphere33 = SphereObject()
Shape14.setGeometry(Sphere33)
Transform13.addChild(Shape14)
ProtoBody12.addChild(Transform13)
Script34 = ScriptObject().setDEF("Bounce")
field35 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script34.addField(field35)
field36 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("velocity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script34.addField(field36)
field37 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script34.addField(field37)

Script34.setSourceCode("ecmascript:\n"+
"			function set_translation(value) {\n"+
"				translation = value;\n"+
"			}\n"+
"			function translation_changed() {\n"+
"				return translation;\n"+
"			}\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation[0] + velocity[0],\n"+
"				translation[1] + velocity[1],\n"+
"				translation[2] + velocity[2]);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation[j]) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity[0] += Math.random() * 0.2 - 0.1;\n"+
"					velocity[1] += Math.random() * 0.2 - 0.1;\n"+
"					velocity[2] += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			}\n"+
"")
ProtoBody12.addChild(Script34)
TimeSensor38 = TimeSensorObject().setDEF("TourTime").setCycleInterval(0.15).setLoop(True)
ProtoBody12.addChild(TimeSensor38)
ROUTE39 = ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("Bounce").setToField("set_fraction")
ProtoBody12.addChild(ROUTE39)
ROUTE40 = ROUTEObject().setFromNode("Bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation")
ProtoBody12.addChild(ROUTE40)
ProtoDeclare11.setProtoBody(ProtoBody12)
Scene7.addChild(ProtoDeclare11)
ProtoInstance41 = ProtoInstanceObject().setName("Bubble")
Scene7.addChild(ProtoInstance41)
ProtoInstance42 = ProtoInstanceObject().setName("Bubble")
Scene7.addChild(ProtoInstance42)
ProtoInstance43 = ProtoInstanceObject().setName("Bubble")
Scene7.addChild(ProtoInstance43)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../out/orig/bub.new.x3d")
