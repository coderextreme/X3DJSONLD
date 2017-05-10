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
meta6 = metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/bub.x3d")
head1.addMeta(meta6)
meta7 = metaObject().setName("translated").setContent("10 May 2017")
head1.addMeta(meta7)
meta8 = metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html")
head1.addMeta(meta8)
meta9 = metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
head1.addMeta(meta9)
meta10 = metaObject().setName("translated").setContent("10 May 2017")
head1.addMeta(meta10)
meta11 = metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")
head1.addMeta(meta11)
X3D0.setHead(head1)
Scene12 = SceneObject()
NavigationInfo13 = NavigationInfoObject()
Scene12.addChild(NavigationInfo13)
Background14 = BackgroundObject().setBackUrl(["cubemap/all_probes/stpeters_cross/stpeters_back.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_back.png"]).setBottomUrl(["cubemap/all_probes/stpeters_cross/stpeters_bottom.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_bottom.png"]).setFrontUrl(["cubemap/all_probes/stpeters_cross/stpeters_front.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_front.png"]).setLeftUrl(["cubemap/all_probes/stpeters_cross/stpeters_left.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_left.png"]).setRightUrl(["cubemap/all_probes/stpeters_cross/stpeters_right.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_right.png"]).setTopUrl(["cubemap/all_probes/stpeters_cross/stpeters_top.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_top.png"])
Scene12.addChild(Background14)
Viewpoint15 = ViewpointObject().setPosition([0,0,20]).setDescription("Look at the bubbles flying")
Scene12.addChild(Viewpoint15)
ProtoDeclare16 = ProtoDeclareObject().setName("Bubble")
ProtoBody17 = ProtoBodyObject()
Transform18 = TransformObject().setDEF("transform")
Shape19 = ShapeObject().setDEF("myShape")
Appearance20 = AppearanceObject()
Material21 = MaterialObject().setDiffuseColor([0.7,0.7,0.7]).setSpecularColor([0.5,0.5,0.5])
Appearance20.setMaterial(Material21)
ComposedCubeMapTexture22 = ComposedCubeMapTextureObject().setDEF("texture")
ImageTexture23 = ImageTextureObject().setUrl(["cubemap/all_probes/stpeters_cross/stpeters_back.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_back.png"])
ComposedCubeMapTexture22.setBack(ImageTexture23)
ImageTexture24 = ImageTextureObject().setUrl(["cubemap/all_probes/stpeters_cross/stpeters_bottom.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_bottom.png"])
ComposedCubeMapTexture22.setBottom(ImageTexture24)
ImageTexture25 = ImageTextureObject().setUrl(["cubemap/all_probes/stpeters_cross/stpeters_front.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_front.png"])
ComposedCubeMapTexture22.setFront(ImageTexture25)
ImageTexture26 = ImageTextureObject().setUrl(["cubemap/all_probes/stpeters_cross/stpeters_left.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_left.png"])
ComposedCubeMapTexture22.setLeft(ImageTexture26)
ImageTexture27 = ImageTextureObject().setUrl(["cubemap/all_probes/stpeters_cross/stpeters_right.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_right.png"])
ComposedCubeMapTexture22.setRight(ImageTexture27)
ImageTexture28 = ImageTextureObject().setUrl(["cubemap/all_probes/stpeters_cross/stpeters_top.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_top.png"])
ComposedCubeMapTexture22.setTop(ImageTexture28)
Appearance20.setTexture(ComposedCubeMapTexture22)

Appearance20.addComments(CommentsBlock("<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"gl.vs\" \"http://coderextreme.net/X3DJSONLD/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"pc_bubbles.fs\" \"http://coderextreme.net/X3DJSONLD/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"freewrl.vs\" \"http://coderextreme.net/X3DJSONLD/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"pc_bubbles.fs\" \"http://coderextreme.net/X3DJSONLD/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='x3dom' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"x3dom.vs\" \"http://coderextreme.net/X3DJSONLD/x3dom.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"pc_bubbles.fs\" \"http://coderextreme.net/X3DJSONLD/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"instant.vs\" \"http://coderextreme.net/X3DJSONLD/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"pc_bubbles.fs\" \"http://coderextreme.net/X3DJSONLD/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>"))
ComposedShader29 = ComposedShaderObject().setDEF("cobweb").setLanguage("GLSL")
field30 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
ComposedCubeMapTexture31 = ComposedCubeMapTextureObject().setUSE("texture")
field30.addChild(ComposedCubeMapTexture31)
ComposedShader29.addField(field30)
field32 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033")
ComposedShader29.addField(field32)
field33 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
ComposedShader29.addField(field33)
field34 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
ComposedShader29.addField(field34)
field35 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2")
ComposedShader29.addField(field35)
ShaderPart36 = ShaderPartObject().setType("VERTEX").setUrl(["cobweb.vs","http://coderextreme.net/X3DJSONLD/cobweb.vs"])
ComposedShader29.addParts(ShaderPart36)
ShaderPart37 = ShaderPartObject().setType("FRAGMENT").setUrl(["pc_bubbles.fs","http://coderextreme.net/X3DJSONLD/pc.fs"])
ComposedShader29.addParts(ShaderPart37)
Appearance20.addShaders(ComposedShader29)
Shape19.setAppearance(Appearance20)
Sphere38 = SphereObject()
Shape19.setGeometry(Sphere38)
Transform18.addChild(Shape19)
ProtoBody17.addChild(Transform18)
Script39 = ScriptObject().setDEF("Bounce")
field40 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script39.addField(field40)
field41 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("velocity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script39.addField(field41)
field42 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script39.addField(field42)

Script39.setSourceCode("ecmascript:\n"+
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
ProtoBody17.addChild(Script39)
TimeSensor43 = TimeSensorObject().setDEF("TourTime").setCycleInterval(0.15).setLoop(True)
ProtoBody17.addChild(TimeSensor43)
ROUTE44 = ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("Bounce").setToField("set_fraction")
ProtoBody17.addChild(ROUTE44)
ROUTE45 = ROUTEObject().setFromNode("Bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation")
ProtoBody17.addChild(ROUTE45)
ProtoDeclare16.setProtoBody(ProtoBody17)
Scene12.addChild(ProtoDeclare16)
ProtoInstance46 = ProtoInstanceObject().setName("Bubble")
Scene12.addChild(ProtoInstance46)
ProtoInstance47 = ProtoInstanceObject().setName("Bubble")
Scene12.addChild(ProtoInstance47)
ProtoInstance48 = ProtoInstanceObject().setName("Bubble")
Scene12.addChild(ProtoInstance48)
X3D0.setScene(Scene12)

X3D0.toFileX3D("bub.new.x3d")
