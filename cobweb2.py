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
meta9 = metaObject().setName("translated").setContent("10 May 2017")
head1.addMeta(meta9)
meta10 = metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html")
head1.addMeta(meta10)
meta11 = metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
head1.addMeta(meta11)
meta12 = metaObject().setName("translated").setContent("10 May 2017")
head1.addMeta(meta12)
meta13 = metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")
head1.addMeta(meta13)
X3D0.setHead(head1)
Scene14 = SceneObject()
NavigationInfo15 = NavigationInfoObject().setType(["EXAMINE"])
Scene14.addChild(NavigationInfo15)
Viewpoint16 = ViewpointObject().setPosition([0,0,4]).setOrientation([1,0,0,0]).setDescription("Bubbles in action")
Scene14.addChild(Viewpoint16)
Background17 = BackgroundObject().setBackUrl(["cubemap/BK.png","http://coderextreme.net/X3DJSONLD/cubemap/BK.png"]).setBottomUrl(["cubemap/BT.png","http://coderextreme.net/X3DJSONLD/cubemap/BT.png"]).setFrontUrl(["cubemap/FR.png","http://coderextreme.net/X3DJSONLD/cubemap/FR.png"]).setLeftUrl(["cubemap/LF.png","http://coderextreme.net/X3DJSONLD/cubemap/LF.png"]).setRightUrl(["cubemap/RT.png","http://coderextreme.net/X3DJSONLD/cubemap/RT.png"]).setTopUrl(["cubemap/TP.png","http://coderextreme.net/X3DJSONLD/cubemap/TP.png"])
Scene14.addChild(Background17)
ProtoDeclare18 = ProtoDeclareObject().setName("Bubble")
ProtoBody19 = ProtoBodyObject()
Transform20 = TransformObject().setDEF("transform")
Shape21 = ShapeObject()
Sphere22 = SphereObject().setRadius(0.25)
Shape21.setGeometry(Sphere22)
Appearance23 = AppearanceObject()
Material24 = MaterialObject().setDiffuseColor([1,0,0]).setTransparency(0.2)
Appearance23.setMaterial(Material24)
Shape21.setAppearance(Appearance23)
Transform20.addChild(Shape21)
Script25 = ScriptObject().setDEF("bounce")
field26 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1")
Script25.addField(field26)
field27 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script25.addField(field27)
field28 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("velocity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script25.addField(field28)
field29 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("scalvel").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script25.addField(field29)
field30 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script25.addField(field30)

Script25.setSourceCode("ecmascript:\n"+
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
Transform20.addChild(Script25)
TimeSensor31 = TimeSensorObject().setDEF("bubbleClock").setCycleInterval(10).setLoop(True)
Transform20.addChild(TimeSensor31)
ROUTE32 = ROUTEObject().setFromNode("transform").setFromField("translation_changed").setToNode("bounce").setToField("set_translation")
Transform20.addChild(ROUTE32)
ROUTE33 = ROUTEObject().setFromNode("transform").setFromField("scale_changed").setToNode("bounce").setToField("set_scale")
Transform20.addChild(ROUTE33)
ROUTE34 = ROUTEObject().setFromNode("bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation")
Transform20.addChild(ROUTE34)
ROUTE35 = ROUTEObject().setFromNode("bounce").setFromField("scale_changed").setToNode("transform").setToField("set_scale")
Transform20.addChild(ROUTE35)
ROUTE36 = ROUTEObject().setFromNode("bubbleClock").setFromField("fraction_changed").setToNode("bounce").setToField("set_fraction")
Transform20.addChild(ROUTE36)
ProtoBody19.addChild(Transform20)
ProtoDeclare18.setProtoBody(ProtoBody19)
Scene14.addChild(ProtoDeclare18)
ProtoInstance37 = ProtoInstanceObject().setName("Bubble").setDEF("bubbleA")
Scene14.addChild(ProtoInstance37)
ProtoInstance38 = ProtoInstanceObject().setName("Bubble").setDEF("bubbleB")
Scene14.addChild(ProtoInstance38)
ProtoInstance39 = ProtoInstanceObject().setName("Bubble").setDEF("bubbleC")
Scene14.addChild(ProtoInstance39)
ProtoInstance40 = ProtoInstanceObject().setName("Bubble").setDEF("bubbleD")
Scene14.addChild(ProtoInstance40)
X3D0.setScene(Scene14)

X3D0.toFileX3D("cobweb2.new.x3d")
