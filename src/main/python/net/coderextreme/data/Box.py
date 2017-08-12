# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("box.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/box.x3d")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("description")
meta6.setContent("3 boxes")

head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()

NavigationInfo8 = NavigationInfoObject()
NavigationInfo8.setType(["EXAMINE"])

Scene7.addChild(NavigationInfo8)
Viewpoint9 = ViewpointObject()
Viewpoint9.setDescription("Cubes on Fire")
Viewpoint9.setPosition([0,0,12])

Scene7.addChild(Viewpoint9)
ProtoDeclare10 = ProtoDeclareObject()
ProtoDeclare10.setName("anyShape")

ProtoInterface11 = ProtoInterfaceObject()

field12 = fieldObject()
field12.setType(fieldObject.TYPE_SFVEC3F)
field12.setName("xtranslation")
field12.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field12.setValue("0 0 0")

ProtoInterface11.addField(field12)
field13 = fieldObject()
field13.setType(fieldObject.TYPE_MFNODE)
field13.setName("myShape")
field13.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Shape14 = ShapeObject()

Sphere15 = SphereObject()

Shape14.setGeometry(Sphere15)
Appearance16 = AppearanceObject()

Material17 = MaterialObject()
Material17.setDiffuseColor([1,1,1])

Appearance16.setMaterial(Material17)
Shape14.setAppearance(Appearance16)
field13.addChild(Shape14)
ProtoInterface11.addField(field13)
ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody18 = ProtoBodyObject()

Transform19 = TransformObject()

IS20 = ISObject()

connect21 = connectObject()
connect21.setNodeField("translation")
connect21.setProtoField("xtranslation")

IS20.addConnect(connect21)
connect22 = connectObject()
connect22.setNodeField("children")
connect22.setProtoField("myShape")

IS20.addConnect(connect22)
Transform19.setIS(IS20)
ProtoBody18.addChild(Transform19)
ProtoDeclare10.setProtoBody(ProtoBody18)
Scene7.addChild(ProtoDeclare10)
ProtoDeclare23 = ProtoDeclareObject()
ProtoDeclare23.setName("three")

ProtoInterface24 = ProtoInterfaceObject()

field25 = fieldObject()
field25.setType(fieldObject.TYPE_SFVEC3F)
field25.setName("ytranslation")
field25.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field25.setValue("0 0 0")

ProtoInterface24.addField(field25)
field26 = fieldObject()
field26.setType(fieldObject.TYPE_MFNODE)
field26.setName("myShape")
field26.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Shape27 = ShapeObject()

Cylinder28 = CylinderObject()

Shape27.setGeometry(Cylinder28)
Appearance29 = AppearanceObject()

Material30 = MaterialObject()
Material30.setDiffuseColor([1,1,1])

Appearance29.setMaterial(Material30)
Shape27.setAppearance(Appearance29)
field26.addChild(Shape27)
ProtoInterface24.addField(field26)
ProtoDeclare23.setProtoInterface(ProtoInterface24)
ProtoBody31 = ProtoBodyObject()

Transform32 = TransformObject()

IS33 = ISObject()

connect34 = connectObject()
connect34.setNodeField("translation")
connect34.setProtoField("ytranslation")

IS33.addConnect(connect34)
Transform32.setIS(IS33)
ProtoInstance35 = ProtoInstanceObject()
ProtoInstance35.setName("anyShape")

fieldValue36 = fieldValueObject()
fieldValue36.setName("xtranslation")
fieldValue36.setValue("0 0 0")

ProtoInstance35.addFieldValue(fieldValue36)
IS37 = ISObject()

connect38 = connectObject()
connect38.setNodeField("myShape")
connect38.setProtoField("myShape")

IS37.addConnect(connect38)
ProtoInstance35.setIS(IS37)
Transform32.addChild(ProtoInstance35)
ProtoInstance39 = ProtoInstanceObject()
ProtoInstance39.setName("anyShape")

fieldValue40 = fieldValueObject()
fieldValue40.setName("xtranslation")
fieldValue40.setValue("2 0 0")

ProtoInstance39.addFieldValue(fieldValue40)
IS41 = ISObject()

connect42 = connectObject()
connect42.setNodeField("myShape")
connect42.setProtoField("myShape")

IS41.addConnect(connect42)
ProtoInstance39.setIS(IS41)
Transform32.addChild(ProtoInstance39)
ProtoInstance43 = ProtoInstanceObject()
ProtoInstance43.setName("anyShape")

fieldValue44 = fieldValueObject()
fieldValue44.setName("xtranslation")
fieldValue44.setValue("-2 0 0")

ProtoInstance43.addFieldValue(fieldValue44)
IS45 = ISObject()

connect46 = connectObject()
connect46.setNodeField("myShape")
connect46.setProtoField("myShape")

IS45.addConnect(connect46)
ProtoInstance43.setIS(IS45)
Transform32.addChild(ProtoInstance43)
ProtoBody31.addChild(Transform32)
ProtoDeclare23.setProtoBody(ProtoBody31)
Scene7.addChild(ProtoDeclare23)
ProtoInstance47 = ProtoInstanceObject()
ProtoInstance47.setName("three")

fieldValue48 = fieldValueObject()
fieldValue48.setName("ytranslation")
fieldValue48.setValue("0 0 0")

ProtoInstance47.addFieldValue(fieldValue48)
fieldValue49 = fieldValueObject()
fieldValue49.setName("myShape")

Shape50 = ShapeObject()

Box51 = BoxObject()
Box51.setSize([1,1,1])

Shape50.setGeometry(Box51)
Appearance52 = AppearanceObject()

Material53 = MaterialObject()
Material53.setDiffuseColor([0,1,0])

Appearance52.setMaterial(Material53)
Shape50.setAppearance(Appearance52)
fieldValue49.addChild(Shape50)
ProtoInstance47.addFieldValue(fieldValue49)
Scene7.addChild(ProtoInstance47)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/Box.new.x3d")
