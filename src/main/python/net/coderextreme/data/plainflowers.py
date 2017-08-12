# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("sphereflowers.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("description")
meta4.setContent("5 or more prismatic flowers")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("generator")
meta5.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/sphereflowers.x3d")

head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()

NavigationInfo8 = NavigationInfoObject()

Scene7.addChild(NavigationInfo8)
Background9 = BackgroundObject()
Background9.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
Background9.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background9.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
Background9.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
Background9.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
Background9.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene7.addChild(Background9)
Group10 = GroupObject()

ExternProtoDeclare11 = ExternProtoDeclareObject()
ExternProtoDeclare11.setName("FlowerProto")
ExternProtoDeclare11.setUrl(["../data/flowerproto.x3d#FlowerProto"])

field12 = fieldObject()
field12.setType(fieldObject.TYPE_MFSTRING)
field12.setName("vertex")
field12.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

ExternProtoDeclare11.addField(field12)
field13 = fieldObject()
field13.setType(fieldObject.TYPE_MFSTRING)
field13.setName("fragment")
field13.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

ExternProtoDeclare11.addField(field13)
Group10.addChild(ExternProtoDeclare11)
ProtoDeclare14 = ProtoDeclareObject()
ProtoDeclare14.setName("flower")

ProtoBody15 = ProtoBodyObject()

Group16 = GroupObject()

ProtoInstance17 = ProtoInstanceObject()
ProtoInstance17.setName("FlowerProto")

fieldValue18 = fieldValueObject()
fieldValue18.setName("vertex")
fieldValue18.setValue("\"../shaders/cobweb_flowers_plain.vs\"")

ProtoInstance17.addFieldValue(fieldValue18)
fieldValue19 = fieldValueObject()
fieldValue19.setName("fragment")
fieldValue19.setValue("\"../shaders/plain.fs\"")

ProtoInstance17.addFieldValue(fieldValue19)
Group16.addChild(ProtoInstance17)
ProtoBody15.addChild(Group16)
ProtoDeclare14.setProtoBody(ProtoBody15)
Group10.addChild(ProtoDeclare14)
ProtoInstance20 = ProtoInstanceObject()
ProtoInstance20.setName("flower")

Group10.addChild(ProtoInstance20)
ProtoInstance21 = ProtoInstanceObject()
ProtoInstance21.setName("flower")

Group10.addChild(ProtoInstance21)
ProtoInstance22 = ProtoInstanceObject()
ProtoInstance22.setName("flower")

Group10.addChild(ProtoInstance22)
ProtoInstance23 = ProtoInstanceObject()
ProtoInstance23.setName("flower")

Group10.addChild(ProtoInstance23)
ProtoInstance24 = ProtoInstanceObject()
ProtoInstance24.setName("flower")

Group10.addChild(ProtoInstance24)
ProtoInstance25 = ProtoInstanceObject()
ProtoInstance25.setName("flower")

Group10.addChild(ProtoInstance25)
Scene7.addChild(Group10)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/plainflowers.new.x3d")
