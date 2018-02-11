# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("geo.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("description")
meta4.setContent("Tour around a prismatic sphere")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("generator")
meta5.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/geo.x3d")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("translated")
meta7.setContent("13 March 2016")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("generator")
meta8.setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html")

head1.addMeta(meta8)
X3D0.setHead(head1)
Scene9 = SceneObject()

NavigationInfo10 = NavigationInfoObject()
NavigationInfo10.setType(["EXAMINE"])

Scene9.addChild(NavigationInfo10)
Viewpoint11 = ViewpointObject()
Viewpoint11.setPosition([0,0,4])
Viewpoint11.setOrientation([1,0,0,0])
Viewpoint11.setDescription("Bubbles in action")

Scene9.addChild(Viewpoint11)
Background12 = BackgroundObject()
Background12.setBackUrl(["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"])
Background12.setBottomUrl(["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"])
Background12.setFrontUrl(["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"])
Background12.setLeftUrl(["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"])
Background12.setRightUrl(["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"])
Background12.setTopUrl(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"])

Scene9.addChild(Background12)
ProtoDeclare13 = ProtoDeclareObject()
ProtoDeclare13.setName("Bubble")

ProtoBody14 = ProtoBodyObject()

Transform15 = TransformObject()
Transform15.setDEF("transform")

Shape16 = ShapeObject()

Sphere17 = SphereObject()
Sphere17.setRadius(0.25)

Shape16.setGeometry(Sphere17)
Appearance18 = AppearanceObject()

Material19 = MaterialObject()
Material19.setDiffuseColor([1,0,0])
Material19.setTransparency(0.2)

Appearance18.setMaterial(Material19)
Shape16.setAppearance(Appearance18)
Transform15.addChild(Shape16)
Script20 = ScriptObject()
Script20.setDEF("bounce")

field21 = fieldObject()
field21.setType(fieldObject.TYPE_SFVEC3F)
field21.setName("scale")
field21.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field21.setValue("1 1 1")

Script20.addField(field21)
field22 = fieldObject()
field22.setType(fieldObject.TYPE_SFVEC3F)
field22.setName("translation")
field22.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field22.setValue("0 0 0")

Script20.addField(field22)
field23 = fieldObject()
field23.setType(fieldObject.TYPE_SFVEC3F)
field23.setName("velocity")
field23.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field23.setValue("0 0 0")

Script20.addField(field23)
field24 = fieldObject()
field24.setType(fieldObject.TYPE_SFVEC3F)
field24.setName("scalvel")
field24.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field24.setValue("0 0 0")

Script20.addField(field24)
field25 = fieldObject()
field25.setType(fieldObject.TYPE_SFFLOAT)
field25.setName("set_fraction")
field25.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script20.addField(field25)

Script20.setSourceCode("ecmascript: function initialize() { velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125); scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4); } function set_fraction(value) { if (typeof translation === 'undefined') { translation = new SFVec3f(0, 0, 0); } if (typeof velocity === 'undefined') { velocity = new SFVec3f(0, 0, 0); } if (typeof scalevel === 'undefined') { scalevel = new SFVec3f(0, 0, 0); } if (typeof scale === 'undefined') { scale = new SFVec3f(1, 1, 1); } translation = new SFVec3f( translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z); scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z); // if you get to far away or too big, explode if ( Math.abs(translation.x) > 256) { translation.x = 0; initialize(); } if ( Math.abs(translation.y) > 256) { translation.y = 0; initialize(); } if ( Math.abs(translation.z) > 256) { translation.z = 0; initialize(); } if (Math.abs(scale.x) > 20) { scale.x = scale.x/20; translation.x = 0; initialize(); } if (Math.abs(scale.y) > 20) { scale.y = scale.y/20; translation.y = 0; initialize(); } if (Math.abs(scale.z) > 20) { scale.z = scale.z/20; translation.z = 0; initialize(); } }\n"+
"")
Transform15.addChild(Script20)
TimeSensor26 = TimeSensorObject()
TimeSensor26.setDEF("bubbleClock")
TimeSensor26.setCycleInterval(10)
TimeSensor26.setLoop(True)

Transform15.addChild(TimeSensor26)
ROUTE27 = ROUTEObject()
ROUTE27.setFromNode("bounce")
ROUTE27.setFromField("translation_changed")
ROUTE27.setToNode("transform")
ROUTE27.setToField("set_translation")

Transform15.addChild(ROUTE27)
ROUTE28 = ROUTEObject()
ROUTE28.setFromNode("bounce")
ROUTE28.setFromField("scale_changed")
ROUTE28.setToNode("transform")
ROUTE28.setToField("set_scale")

Transform15.addChild(ROUTE28)
ROUTE29 = ROUTEObject()
ROUTE29.setFromNode("bubbleClock")
ROUTE29.setFromField("fraction_changed")
ROUTE29.setToNode("bounce")
ROUTE29.setToField("set_fraction")

Transform15.addChild(ROUTE29)
ProtoBody14.addChild(Transform15)
ProtoDeclare13.setProtoBody(ProtoBody14)
Scene9.addChild(ProtoDeclare13)
ProtoInstance30 = ProtoInstanceObject()
ProtoInstance30.setName("Bubble")
ProtoInstance30.setDEF("bubbleA")

Scene9.addChild(ProtoInstance30)
ProtoInstance31 = ProtoInstanceObject()
ProtoInstance31.setName("Bubble")
ProtoInstance31.setDEF("bubbleB")

Scene9.addChild(ProtoInstance31)
ProtoInstance32 = ProtoInstanceObject()
ProtoInstance32.setName("Bubble")
ProtoInstance32.setDEF("bubbleC")

Scene9.addChild(ProtoInstance32)
ProtoInstance33 = ProtoInstanceObject()
ProtoInstance33.setName("Bubble")
ProtoInstance33.setDEF("bubbleD")

Scene9.addChild(ProtoInstance33)
X3D0.setScene(Scene9)

X3D0.toFileX3D("../data/bubs2.new.x3d")
