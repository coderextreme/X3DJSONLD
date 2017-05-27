from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
meta2 = metaObject().setName("title").setContent("bubble.x3d")
head1.addMeta(meta2)
meta3 = metaObject().setName("creator").setContent("John Carlson")
head1.addMeta(meta3)
meta4 = metaObject().setName("description").setContent("Tour around a prismatic sphere")
head1.addMeta(meta4)
meta5 = metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")
head1.addMeta(meta5)
meta6 = metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/bubble.x3d")
head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()
NavigationInfo8 = NavigationInfoObject().setType(["EXAMINE"])
Scene7.addChild(NavigationInfo8)
Viewpoint9 = ViewpointObject().setPosition([0,0,4]).setOrientation([1,0,0,0]).setDescription("Bubble in action")
Scene7.addChild(Viewpoint9)
ProtoDeclare10 = ProtoDeclareObject().setName("Bubble")
ProtoBody11 = ProtoBodyObject()
Transform12 = TransformObject().setDEF("transform")
Shape13 = ShapeObject()
Sphere14 = SphereObject().setRadius(0.25)
Shape13.setGeometry(Sphere14)
Appearance15 = AppearanceObject()
Material16 = MaterialObject().setDiffuseColor([1,0,0]).setTransparency(0.2)
Appearance15.setMaterial(Material16)
Shape13.setAppearance(Appearance15)
Transform12.addChild(Shape13)
Script17 = ScriptObject().setDEF("bounce")
field18 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1")
Script17.addField(field18)
field19 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script17.addField(field19)
field20 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("velocity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script17.addField(field20)
field21 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("scalvel").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script17.addField(field21)
field22 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script17.addField(field22)

Script17.setSourceCode("\n"+
"ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"	translation = new SFVec3f(\n"+
"		translation.x + velocity.x,\n"+
"		translation.y + velocity.y,\n"+
"		translation.z + velocity.z);\n"+
"	scale = new SFVec3f(\n"+
"		scale.x + scalvel.x,\n"+
"		scale.y + scalvel.y,\n"+
"		scale.z + scalvel.z);\n"+
"        // if you get to far away or too big, explode\n"+
"        if ( Math.abs(translation.x) > 256) {\n"+
"		translation.x = 0;\n"+
"		initialize();\n"+
"	}\n"+
"        if ( Math.abs(translation.y) > 256) {\n"+
"		translation.y = 0;\n"+
"		initialize();\n"+
"	}\n"+
"        if ( Math.abs(translation.z) > 256) {\n"+
"		translation.z = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.x) > 20) {\n"+
"		scale.x = scale.x/2;\n"+
"		translation.x = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.y) > 20) {\n"+
"		scale.y = scale.y/2;\n"+
"		translation.y = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.z) > 20) {\n"+
"		scale.z = scale.z/2;\n"+
"		translation.z = 0;\n"+
"		initialize();\n"+
"	}\n"+
"}\n"+
"")
Transform12.addChild(Script17)
TimeSensor23 = TimeSensorObject().setDEF("bubbleClock").setCycleInterval(10).setLoop(True)
Transform12.addChild(TimeSensor23)
ROUTE24 = ROUTEObject().setFromNode("bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation")
Transform12.addChild(ROUTE24)
ROUTE25 = ROUTEObject().setFromNode("bounce").setFromField("scale_changed").setToNode("transform").setToField("set_scale")
Transform12.addChild(ROUTE25)
ROUTE26 = ROUTEObject().setFromNode("bubbleClock").setFromField("fraction_changed").setToNode("bounce").setToField("set_fraction")
Transform12.addChild(ROUTE26)
ProtoBody11.addChild(Transform12)
ProtoDeclare10.setProtoBody(ProtoBody11)
Scene7.addChild(ProtoDeclare10)
ProtoInstance27 = ProtoInstanceObject().setName("Bubble").setDEF("bubbleA")
Scene7.addChild(ProtoInstance27)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/bubble.new.x3d")
