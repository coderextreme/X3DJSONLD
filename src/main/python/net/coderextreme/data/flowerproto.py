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
meta6 = metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/flowerproto.x3d")
head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()
ProtoDeclare8 = ProtoDeclareObject().setName("FlowerProto")
ProtoInterface9 = ProtoInterfaceObject()
field10 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("vertex").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("\"shaders/gl_flowers_chromatic.vs\"")
ProtoInterface9.addField(field10)
field11 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("fragment").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("\"shaders/pc_flowers.fs\"")
ProtoInterface9.addField(field11)
ProtoDeclare8.setProtoInterface(ProtoInterface9)
ProtoBody12 = ProtoBodyObject()
Transform13 = TransformObject().setDEF("transform")
Shape14 = ShapeObject()
Appearance15 = AppearanceObject()
Material16 = MaterialObject().setDiffuseColor([0.7,0.7,0.7])
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
ComposedShader24 = ComposedShaderObject().setDEF("shader").setLanguage("GLSL")
field25 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")
ComposedShader24.addField(field25)
field26 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033")
ComposedShader24.addField(field26)
field27 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("10")
ComposedShader24.addField(field27)
field28 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("10")
ComposedShader24.addField(field28)
field29 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2")
ComposedShader24.addField(field29)
field30 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("a").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3")
ComposedShader24.addField(field30)
field31 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("b").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1")
ComposedShader24.addField(field31)
field32 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("c").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3")
ComposedShader24.addField(field32)
field33 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("d").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3")
ComposedShader24.addField(field33)
field34 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
ComposedShader24.addField(field34)
field35 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
ComposedShader24.addField(field35)

ComposedShader24.addComments(CommentsBlock("<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>"))
ShaderPart36 = ShaderPartObject().setType("VERTEX")
IS37 = ISObject()
connect38 = connectObject().setNodeField("url").setProtoField("vertex")
IS37.addConnect(connect38)
ShaderPart36.setIS(IS37)
ComposedShader24.addParts(ShaderPart36)
ShaderPart39 = ShaderPartObject().setType("FRAGMENT")
IS40 = ISObject()
connect41 = connectObject().setNodeField("url").setProtoField("fragment")
IS40.addConnect(connect41)
ShaderPart39.setIS(IS40)
ComposedShader24.addParts(ShaderPart39)
Appearance15.addShaders(ComposedShader24)
Shape14.setAppearance(Appearance15)
Sphere42 = SphereObject()
Shape14.setGeometry(Sphere42)
Transform13.addChild(Shape14)
Script43 = ScriptObject().setDEF("Bounce")
field44 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script43.addField(field44)
field45 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("velocity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script43.addField(field45)
field46 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script43.addField(field46)
field47 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("a").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
Script43.addField(field47)
field48 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("b").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
Script43.addField(field48)
field49 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("c").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3")
Script43.addField(field49)
field50 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("d").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3")
Script43.addField(field50)
field51 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
Script43.addField(field51)
field52 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
Script43.addField(field52)

Script43.setSourceCode("ecmascript:\n"+
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
Transform13.addChild(Script43)
TimeSensor53 = TimeSensorObject().setDEF("TourTime").setCycleInterval(0.15).setLoop(True)
Transform13.addChild(TimeSensor53)
ROUTE54 = ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("Bounce").setToField("set_fraction")
Transform13.addChild(ROUTE54)
ROUTE55 = ROUTEObject().setFromNode("Bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation")
Transform13.addChild(ROUTE55)
ROUTE56 = ROUTEObject().setFromNode("Bounce").setFromField("a").setToNode("shader").setToField("a")
Transform13.addChild(ROUTE56)
ROUTE57 = ROUTEObject().setFromNode("Bounce").setFromField("b").setToNode("shader").setToField("b")
Transform13.addChild(ROUTE57)
ROUTE58 = ROUTEObject().setFromNode("Bounce").setFromField("c").setToNode("shader").setToField("c")
Transform13.addChild(ROUTE58)
ROUTE59 = ROUTEObject().setFromNode("Bounce").setFromField("d").setToNode("shader").setToField("d")
Transform13.addChild(ROUTE59)
ROUTE60 = ROUTEObject().setFromNode("Bounce").setFromField("tdelta").setToNode("shader").setToField("tdelta")
Transform13.addChild(ROUTE60)
ROUTE61 = ROUTEObject().setFromNode("Bounce").setFromField("pdelta").setToNode("shader").setToField("pdelta")
Transform13.addChild(ROUTE61)
ProtoBody12.addChild(Transform13)
ProtoDeclare8.setProtoBody(ProtoBody12)
Scene7.addChild(ProtoDeclare8)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/flowerproto.new.x3d")
