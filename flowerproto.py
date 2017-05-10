from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
meta2 = metaObject().setName("title").setContent("flowerproto.x3d")
head1.addMeta(meta2)
meta3 = metaObject().setName("creator").setContent("John Carlson")
head1.addMeta(meta3)
meta4 = metaObject().setName("description").setContent("A flower proto with configurable shaders")
head1.addMeta(meta4)
meta5 = metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")
head1.addMeta(meta5)
meta6 = metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/flowerproto.x3d")
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
ProtoDeclare13 = ProtoDeclareObject().setName("FlowerProto")
ProtoInterface14 = ProtoInterfaceObject()
field15 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("vertex").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("\"gl_flowers_chromatic.vs\"")
ProtoInterface14.addField(field15)
field16 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("fragment").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("\"pc_flowers.fs\"")
ProtoInterface14.addField(field16)
ProtoDeclare13.setProtoInterface(ProtoInterface14)
ProtoBody17 = ProtoBodyObject()
Transform18 = TransformObject().setDEF("transform")
Shape19 = ShapeObject()
Appearance20 = AppearanceObject()
Material21 = MaterialObject().setDiffuseColor([0.7,0.7,0.7])
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
ComposedShader29 = ComposedShaderObject().setDEF("shader").setLanguage("GLSL")
field30 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")
ComposedShader29.addField(field30)
field31 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033")
ComposedShader29.addField(field31)
field32 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("10")
ComposedShader29.addField(field32)
field33 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("10")
ComposedShader29.addField(field33)
field34 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2")
ComposedShader29.addField(field34)
field35 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("a").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3")
ComposedShader29.addField(field35)
field36 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("b").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1")
ComposedShader29.addField(field36)
field37 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("c").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3")
ComposedShader29.addField(field37)
field38 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("d").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3")
ComposedShader29.addField(field38)
field39 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
ComposedShader29.addField(field39)
field40 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
ComposedShader29.addField(field40)

ComposedShader29.addComments(CommentsBlock("<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>"))
ShaderPart41 = ShaderPartObject().setType("VERTEX")
IS42 = ISObject()
connect43 = connectObject().setNodeField("url").setProtoField("vertex")
IS42.addConnect(connect43)
ShaderPart41.setIS(IS42)
ComposedShader29.addParts(ShaderPart41)
ShaderPart44 = ShaderPartObject().setType("FRAGMENT")
IS45 = ISObject()
connect46 = connectObject().setNodeField("url").setProtoField("fragment")
IS45.addConnect(connect46)
ShaderPart44.setIS(IS45)
ComposedShader29.addParts(ShaderPart44)
Appearance20.addShaders(ComposedShader29)
Shape19.setAppearance(Appearance20)
Sphere47 = SphereObject()
Shape19.setGeometry(Sphere47)
Transform18.addChild(Shape19)
Script48 = ScriptObject().setDEF("Bounce")
field49 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script48.addField(field49)
field50 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("velocity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script48.addField(field50)
field51 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script48.addField(field51)
field52 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("a").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
Script48.addField(field52)
field53 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("b").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
Script48.addField(field53)
field54 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("c").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3")
Script48.addField(field54)
field55 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("d").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3")
Script48.addField(field55)
field56 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
Script48.addField(field56)
field57 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
Script48.addField(field57)

Script48.setSourceCode("ecmascript:\n"+
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
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				choice = Math.floor(Math.random() * 4);\n"+
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
"			}\n"+
"")
Transform18.addChild(Script48)
TimeSensor58 = TimeSensorObject().setDEF("TourTime").setCycleInterval(0.15).setLoop(True)
Transform18.addChild(TimeSensor58)
ROUTE59 = ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("Bounce").setToField("set_fraction")
Transform18.addChild(ROUTE59)
ROUTE60 = ROUTEObject().setFromNode("Bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation")
Transform18.addChild(ROUTE60)
ROUTE61 = ROUTEObject().setFromNode("Bounce").setFromField("a").setToNode("shader").setToField("a")
Transform18.addChild(ROUTE61)
ROUTE62 = ROUTEObject().setFromNode("Bounce").setFromField("b").setToNode("shader").setToField("b")
Transform18.addChild(ROUTE62)
ROUTE63 = ROUTEObject().setFromNode("Bounce").setFromField("c").setToNode("shader").setToField("c")
Transform18.addChild(ROUTE63)
ROUTE64 = ROUTEObject().setFromNode("Bounce").setFromField("d").setToNode("shader").setToField("d")
Transform18.addChild(ROUTE64)
ROUTE65 = ROUTEObject().setFromNode("Bounce").setFromField("tdelta").setToNode("shader").setToField("tdelta")
Transform18.addChild(ROUTE65)
ROUTE66 = ROUTEObject().setFromNode("Bounce").setFromField("pdelta").setToNode("shader").setToField("pdelta")
Transform18.addChild(ROUTE66)
ProtoBody17.addChild(Transform18)
ProtoDeclare13.setProtoBody(ProtoBody17)
Scene12.addChild(ProtoDeclare13)
X3D0.setScene(Scene12)

X3D0.toFileX3D("flowerproto.new.x3d")
