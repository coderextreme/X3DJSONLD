# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("bubs.x3d")

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
meta6.setContent("https://coderextreme.net/X3DJSONLD/bubs.x3d")

head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()

NavigationInfo8 = NavigationInfoObject()
NavigationInfo8.setType(["EXAMINE"])

Scene7.addChild(NavigationInfo8)
Viewpoint9 = ViewpointObject()
Viewpoint9.setPosition([0,0,4])
Viewpoint9.setOrientation([1,0,0,0])
Viewpoint9.setDescription("Bubbles in action")

Scene7.addChild(Viewpoint9)
Background10 = BackgroundObject()
Background10.setBackUrl(["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"])
Background10.setBottomUrl(["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"])
Background10.setFrontUrl(["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"])
Background10.setLeftUrl(["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"])
Background10.setRightUrl(["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"])
Background10.setTopUrl(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"])

Scene7.addChild(Background10)
ProtoDeclare11 = ProtoDeclareObject()
ProtoDeclare11.setName("Bubble")

ProtoBody12 = ProtoBodyObject()

Transform13 = TransformObject()
Transform13.setDEF("transform")

Shape14 = ShapeObject()

Sphere15 = SphereObject()
Sphere15.setRadius(0.25)

Shape14.setGeometry(Sphere15)
Appearance16 = AppearanceObject()

Material17 = MaterialObject()
Material17.setDiffuseColor([1,0,0])
Material17.setTransparency(0.2)

Appearance16.setMaterial(Material17)
Shape14.setAppearance(Appearance16)
Transform13.addChild(Shape14)
Script18 = ScriptObject()
Script18.setDEF("bounce")

field19 = fieldObject()
field19.setType(fieldObject.TYPE_SFVEC3F)
field19.setName("scale")
field19.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field19.setValue("1 1 1")

Script18.addField(field19)
field20 = fieldObject()
field20.setType(fieldObject.TYPE_SFVEC3F)
field20.setName("translation")
field20.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field20.setValue("0 0 0")

Script18.addField(field20)
field21 = fieldObject()
field21.setType(fieldObject.TYPE_SFVEC3F)
field21.setName("velocity")
field21.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field21.setValue("0 0 0")

Script18.addField(field21)
field22 = fieldObject()
field22.setType(fieldObject.TYPE_SFVEC3F)
field22.setName("scalvel")
field22.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field22.setValue("0 0 0")

Script18.addField(field22)
field23 = fieldObject()
field23.setType(fieldObject.TYPE_SFFLOAT)
field23.setName("set_fraction")
field23.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script18.addField(field23)

Script18.setSourceCode("ecmascript: function initialize() { velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125); scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4); } function set_fraction(value) { translation = new SFVec3f( translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z); scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z); // if you get to far away or too big, explode if ( Math.abs(translation.x) > 256) { translation.x = 0; initialize(); } if ( Math.abs(translation.y) > 256) { translation.y = 0; initialize(); } if ( Math.abs(translation.z) > 256) { translation.z = 0; initialize(); } if (Math.abs(scale.x) > 20) { scale.x = scale.x/20; translation.x = 0; initialize(); } if (Math.abs(scale.y) > 20) { scale.y = scale.y/20; translation.y = 0; initialize(); } if (Math.abs(scale.z) > 20) { scale.z = scale.z/20; translation.z = 0; initialize(); } }\n"+
"")
Transform13.addChild(Script18)
TimeSensor24 = TimeSensorObject()
TimeSensor24.setDEF("bubbleClock")
TimeSensor24.setCycleInterval(10)
TimeSensor24.setLoop(True)

Transform13.addChild(TimeSensor24)
ROUTE25 = ROUTEObject()
ROUTE25.setFromNode("bounce")
ROUTE25.setFromField("translation_changed")
ROUTE25.setToNode("transform")
ROUTE25.setToField("set_translation")

Transform13.addChild(ROUTE25)
ROUTE26 = ROUTEObject()
ROUTE26.setFromNode("bounce")
ROUTE26.setFromField("scale_changed")
ROUTE26.setToNode("transform")
ROUTE26.setToField("set_scale")

Transform13.addChild(ROUTE26)
ROUTE27 = ROUTEObject()
ROUTE27.setFromNode("bubbleClock")
ROUTE27.setFromField("fraction_changed")
ROUTE27.setToNode("bounce")
ROUTE27.setToField("set_fraction")

Transform13.addChild(ROUTE27)
ProtoBody12.addChild(Transform13)
ProtoDeclare11.setProtoBody(ProtoBody12)
Scene7.addChild(ProtoDeclare11)
ProtoInstance28 = ProtoInstanceObject()
ProtoInstance28.setName("Bubble")
ProtoInstance28.setDEF("bubbleA")

Scene7.addChild(ProtoInstance28)
ProtoInstance29 = ProtoInstanceObject()
ProtoInstance29.setName("Bubble")
ProtoInstance29.setDEF("bubbleB")

Scene7.addChild(ProtoInstance29)
ProtoInstance30 = ProtoInstanceObject()
ProtoInstance30.setName("Bubble")
ProtoInstance30.setDEF("bubbleC")

Scene7.addChild(ProtoInstance30)
ProtoInstance31 = ProtoInstanceObject()
ProtoInstance31.setName("Bubble")
ProtoInstance31.setDEF("bubbleD")

Scene7.addChild(ProtoInstance31)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/bubs.new.x3d")
