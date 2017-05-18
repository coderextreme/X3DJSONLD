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
meta6 = metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/cobweb.x3d")
head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()
NavigationInfo8 = NavigationInfoObject().setType(["EXAMINE"])
Scene7.addChild(NavigationInfo8)
Viewpoint9 = ViewpointObject().setPosition([0,0,4]).setOrientation([1,0,0,0]).setDescription("Bubbles in action")
Scene7.addChild(Viewpoint9)
Background10 = BackgroundObject().setBackUrl(["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"]).setBottomUrl(["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"]).setFrontUrl(["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"]).setLeftUrl(["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"]).setRightUrl(["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"]).setTopUrl(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"])
Scene7.addChild(Background10)
ProtoDeclare11 = ProtoDeclareObject().setName("Bubble")
ProtoBody12 = ProtoBodyObject()
Transform13 = TransformObject().setDEF("transform")
Shape14 = ShapeObject()
Sphere15 = SphereObject().setRadius(0.25)
Shape14.setGeometry(Sphere15)
Appearance16 = AppearanceObject()
Material17 = MaterialObject().setDiffuseColor([1,0,0]).setTransparency(0.2)
Appearance16.setMaterial(Material17)
Shape14.setAppearance(Appearance16)
Transform13.addChild(Shape14)
Script18 = ScriptObject().setDEF("bounce")
field19 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1")
Script18.addField(field19)
field20 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script18.addField(field20)
field21 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("velocity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script18.addField(field21)
field22 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("scalvel").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script18.addField(field22)
field23 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script18.addField(field23)

Script18.setSourceCode("ecmascript:\n"+
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
Transform13.addChild(Script18)
TimeSensor24 = TimeSensorObject().setDEF("bubbleClock").setCycleInterval(10).setLoop(True)
Transform13.addChild(TimeSensor24)
ROUTE25 = ROUTEObject().setFromNode("bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation")
Transform13.addChild(ROUTE25)
ROUTE26 = ROUTEObject().setFromNode("bounce").setFromField("scale_changed").setToNode("transform").setToField("set_scale")
Transform13.addChild(ROUTE26)
ROUTE27 = ROUTEObject().setFromNode("bubbleClock").setFromField("fraction_changed").setToNode("bounce").setToField("set_fraction")
Transform13.addChild(ROUTE27)
ProtoBody12.addChild(Transform13)
ProtoDeclare11.setProtoBody(ProtoBody12)
Scene7.addChild(ProtoDeclare11)
ProtoInstance28 = ProtoInstanceObject().setName("Bubble").setDEF("bubbleA")
Scene7.addChild(ProtoInstance28)
ProtoInstance29 = ProtoInstanceObject().setName("Bubble").setDEF("bubbleB")
Scene7.addChild(ProtoInstance29)
ProtoInstance30 = ProtoInstanceObject().setName("Bubble").setDEF("bubbleC")
Scene7.addChild(ProtoInstance30)
ProtoInstance31 = ProtoInstanceObject().setName("Bubble").setDEF("bubbleD")
Scene7.addChild(ProtoInstance31)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/cobweb.new.x3d")
