from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
meta2 = metaObject().setName("title").setContent("cobweb.x3d")
head1.addMeta(meta2)
meta3 = metaObject().setName("creator").setContent("John Carlson")
head1.addMeta(meta3)
meta4 = metaObject().setName("description").setContent("Tour around a prismatic sphere")
head1.addMeta(meta4)
meta5 = metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")
head1.addMeta(meta5)
meta6 = metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/cobweb.x3d")
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
NavigationInfo13 = NavigationInfoObject().setType(["EXAMINE"])
Scene12.addChild(NavigationInfo13)
Viewpoint14 = ViewpointObject().setPosition([0,0,4]).setOrientation([1,0,0,0]).setDescription("Bubbles in action")
Scene12.addChild(Viewpoint14)
Background15 = BackgroundObject().setBackUrl(["cubemap/BK.png","http://coderextreme.net/X3DJSONLD/cubemap/BK.png"]).setBottomUrl(["cubemap/BT.png","http://coderextreme.net/X3DJSONLD/cubemap/BT.png"]).setFrontUrl(["cubemap/FR.png","http://coderextreme.net/X3DJSONLD/cubemap/FR.png"]).setLeftUrl(["cubemap/LF.png","http://coderextreme.net/X3DJSONLD/cubemap/LF.png"]).setRightUrl(["cubemap/RT.png","http://coderextreme.net/X3DJSONLD/cubemap/RT.png"]).setTopUrl(["cubemap/TP.png","http://coderextreme.net/X3DJSONLD/cubemap/TP.png"])
Scene12.addChild(Background15)
ProtoDeclare16 = ProtoDeclareObject().setName("Bubble")
ProtoBody17 = ProtoBodyObject()
Transform18 = TransformObject().setDEF("transform")
Shape19 = ShapeObject()
Sphere20 = SphereObject().setRadius(0.25)
Shape19.setGeometry(Sphere20)
Appearance21 = AppearanceObject()
Material22 = MaterialObject().setDiffuseColor([1,0,0]).setTransparency(0.2)
Appearance21.setMaterial(Material22)
Shape19.setAppearance(Appearance21)
Transform18.addChild(Shape19)
Script23 = ScriptObject().setDEF("bounce")
field24 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1")
Script23.addField(field24)
field25 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script23.addField(field25)
field26 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("velocity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script23.addField(field26)
field27 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("scalvel").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script23.addField(field27)
field28 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script23.addField(field28)

Script23.setSourceCode("ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_translation(value) {\n"+
"   translation = value;\n"+
"}\n"+
"\n"+
"function set_scale(value) {\n"+
"   scale = value;\n"+
"}\n"+
"\n"+
"function translation_changed() {\n"+
"	return translation;\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    translation = new SFVec3f(	translation[0] + velocity[0], translation[1] + velocity[1], translation[2] + velocity[2]);\n"+
"    scale = new SFVec3f(scale[0] + scalvel[0], scale[1] + scalvel[1], scale[2] + scalvel[2]);\n"+
"    for (var j = 0; j < 3; j++) {\n"+
"	    // if you get to far away or too big, explode\n"+
"	    if ( Math.abs(translation[j]) > 256) {\n"+
"		translation[j] = 0;\n"+
"		initialize();\n"+
"	    }\n"+
"	    if (Math.abs(scale[j]) > 20) {\n"+
"		scale[j] = scale[j]/2;\n"+
"		translation[j] = 0;\n"+
"		initialize();\n"+
"	    }\n"+
"    }\n"+
"}\n"+
"")
Transform18.addChild(Script23)
TimeSensor29 = TimeSensorObject().setDEF("bubbleClock").setCycleInterval(10).setLoop(True)
Transform18.addChild(TimeSensor29)
ROUTE30 = ROUTEObject().setFromNode("bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation")
Transform18.addChild(ROUTE30)
ROUTE31 = ROUTEObject().setFromNode("bounce").setFromField("scale_changed").setToNode("transform").setToField("set_scale")
Transform18.addChild(ROUTE31)
ROUTE32 = ROUTEObject().setFromNode("bubbleClock").setFromField("fraction_changed").setToNode("bounce").setToField("set_fraction")
Transform18.addChild(ROUTE32)
ProtoBody17.addChild(Transform18)
ProtoDeclare16.setProtoBody(ProtoBody17)
Scene12.addChild(ProtoDeclare16)
ProtoInstance33 = ProtoInstanceObject().setName("Bubble").setDEF("bubbleA")
Scene12.addChild(ProtoInstance33)
ProtoInstance34 = ProtoInstanceObject().setName("Bubble").setDEF("bubbleB")
Scene12.addChild(ProtoInstance34)
ProtoInstance35 = ProtoInstanceObject().setName("Bubble").setDEF("bubbleC")
Scene12.addChild(ProtoInstance35)
ProtoInstance36 = ProtoInstanceObject().setName("Bubble").setDEF("bubbleD")
Scene12.addChild(ProtoInstance36)
X3D0.setScene(Scene12)

X3D0.toFileX3D("cobweb.new.x3d")
