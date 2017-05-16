from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
meta2 = metaObject().setName("title").setContent("geo.x3d")
head1.addMeta(meta2)
meta3 = metaObject().setName("creator").setContent("John Carlson")
head1.addMeta(meta3)
meta4 = metaObject().setName("description").setContent("Tour around a prismatic sphere")
head1.addMeta(meta4)
meta5 = metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")
head1.addMeta(meta5)
meta6 = metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/geo.x3d")
head1.addMeta(meta6)
meta7 = metaObject().setName("translated").setContent("13 March 2016")
head1.addMeta(meta7)
meta8 = metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html")
head1.addMeta(meta8)
X3D0.setHead(head1)
Scene9 = SceneObject()
NavigationInfo10 = NavigationInfoObject().setType(["EXAMINE"])
Scene9.addChild(NavigationInfo10)
Viewpoint11 = ViewpointObject().setPosition([0,0,4]).setOrientation([1,0,0,0]).setDescription("Bubbles in action")
Scene9.addChild(Viewpoint11)
Background12 = BackgroundObject().setBackUrl(["cubemap/BK.png","http://coderextreme.net/X3DJSONLD/cubemap/BK.png"]).setBottomUrl(["cubemap/BT.png","http://coderextreme.net/X3DJSONLD/cubemap/BT.png"]).setFrontUrl(["cubemap/FR.png","http://coderextreme.net/X3DJSONLD/cubemap/FR.png"]).setLeftUrl(["cubemap/LF.png","http://coderextreme.net/X3DJSONLD/cubemap/LF.png"]).setRightUrl(["cubemap/RT.png","http://coderextreme.net/X3DJSONLD/cubemap/RT.png"]).setTopUrl(["cubemap/TP.png","http://coderextreme.net/X3DJSONLD/cubemap/TP.png"])
Scene9.addChild(Background12)
ProtoDeclare13 = ProtoDeclareObject().setName("Bubble")
ProtoBody14 = ProtoBodyObject()
Transform15 = TransformObject().setDEF("transform")
Shape16 = ShapeObject()
Sphere17 = SphereObject().setRadius(0.25)
Shape16.setGeometry(Sphere17)
Appearance18 = AppearanceObject()
Material19 = MaterialObject().setDiffuseColor([1,0,0]).setTransparency(0.2)
Appearance18.setMaterial(Material19)
Shape16.setAppearance(Appearance18)
Transform15.addChild(Shape16)
Script20 = ScriptObject().setDEF("bounce")
field21 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1")
Script20.addField(field21)
field22 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script20.addField(field22)
field23 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("velocity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script20.addField(field23)
field24 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("scalvel").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script20.addField(field24)
field25 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script20.addField(field25)

Script20.setSourceCode("ecmascript:\n"+
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
"    if (typeof translation === 'undefined') {\n"+
"		translation = [0, 0, 0];\n"+
"    }\n"+
"    if (typeof velocity === 'undefined') {\n"+
"		velocity = [0, 0, 0];\n"+
"    }\n"+
"    if (typeof scalevel === 'undefined') {\n"+
"		scalevel = [0, 0, 0];\n"+
"    }\n"+
"    if (typeof scale === 'undefined') {\n"+
"		scale = [1, 1, 1];\n"+
"    }\n"+
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
Transform15.addChild(Script20)
TimeSensor26 = TimeSensorObject().setDEF("bubbleClock").setCycleInterval(10).setLoop(True)
Transform15.addChild(TimeSensor26)
ROUTE27 = ROUTEObject().setFromNode("transform").setFromField("translation_changed").setToNode("bounce").setToField("set_translation")
Transform15.addChild(ROUTE27)
ROUTE28 = ROUTEObject().setFromNode("transform").setFromField("scale_changed").setToNode("bounce").setToField("set_scale")
Transform15.addChild(ROUTE28)
ROUTE29 = ROUTEObject().setFromNode("bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation")
Transform15.addChild(ROUTE29)
ROUTE30 = ROUTEObject().setFromNode("bounce").setFromField("scale_changed").setToNode("transform").setToField("set_scale")
Transform15.addChild(ROUTE30)
ROUTE31 = ROUTEObject().setFromNode("bubbleClock").setFromField("fraction_changed").setToNode("bounce").setToField("set_fraction")
Transform15.addChild(ROUTE31)
ProtoBody14.addChild(Transform15)
ProtoDeclare13.setProtoBody(ProtoBody14)
Scene9.addChild(ProtoDeclare13)
ProtoInstance32 = ProtoInstanceObject().setName("Bubble").setDEF("bubbleA")
Scene9.addChild(ProtoInstance32)
ProtoInstance33 = ProtoInstanceObject().setName("Bubble").setDEF("bubbleB")
Scene9.addChild(ProtoInstance33)
ProtoInstance34 = ProtoInstanceObject().setName("Bubble").setDEF("bubbleC")
Scene9.addChild(ProtoInstance34)
ProtoInstance35 = ProtoInstanceObject().setName("Bubble").setDEF("bubbleD")
Scene9.addChild(ProtoInstance35)
X3D0.setScene(Scene9)

X3D0.toFileX3D("cobweb2.new.x3d")
