# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("rubik.x3d")

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
meta5.setContent("https://coderextreme.net/X3DJSONLD/rubik.x3d")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("description")
meta6.setContent("a kind of rubik cube with spheres")

head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()

NavigationInfo8 = NavigationInfoObject()
NavigationInfo8.setType(["EXAMINE"])

Scene7.addChild(NavigationInfo8)
Viewpoint9 = ViewpointObject()
Viewpoint9.setDescription("Rubiks Cube")
Viewpoint9.setPosition([0,0,12])

Scene7.addChild(Viewpoint9)
ProtoDeclare10 = ProtoDeclareObject()
ProtoDeclare10.setName("sphere")

ProtoInterface11 = ProtoInterfaceObject()

field12 = fieldObject()
field12.setType(fieldObject.TYPE_SFVEC3F)
field12.setName("xtranslation")
field12.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field12.setValue("0 0 0")

ProtoInterface11.addField(field12)
ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody13 = ProtoBodyObject()

Transform14 = TransformObject()

IS15 = ISObject()

connect16 = connectObject()
connect16.setNodeField("translation")
connect16.setProtoField("xtranslation")

IS15.addConnect(connect16)
Transform14.setIS(IS15)
Shape17 = ShapeObject()

Sphere18 = SphereObject()

Shape17.setGeometry(Sphere18)
Appearance19 = AppearanceObject()

Material20 = MaterialObject()
Material20.setDiffuseColor([1,1,1])

Appearance19.setMaterial(Material20)
Shape17.setAppearance(Appearance19)
Transform14.addChild(Shape17)
ProtoBody13.addChild(Transform14)
ProtoDeclare10.setProtoBody(ProtoBody13)
Scene7.addChild(ProtoDeclare10)
ProtoDeclare21 = ProtoDeclareObject()
ProtoDeclare21.setName("three")

ProtoInterface22 = ProtoInterfaceObject()

field23 = fieldObject()
field23.setType(fieldObject.TYPE_SFVEC3F)
field23.setName("ytranslation")
field23.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field23.setValue("0 0 0")

ProtoInterface22.addField(field23)
ProtoDeclare21.setProtoInterface(ProtoInterface22)
ProtoBody24 = ProtoBodyObject()

Transform25 = TransformObject()

IS26 = ISObject()

connect27 = connectObject()
connect27.setNodeField("translation")
connect27.setProtoField("ytranslation")

IS26.addConnect(connect27)
Transform25.setIS(IS26)
ProtoInstance28 = ProtoInstanceObject()
ProtoInstance28.setName("sphere")

fieldValue29 = fieldValueObject()
fieldValue29.setName("xtranslation")
fieldValue29.setValue("0 0 0")

ProtoInstance28.addFieldValue(fieldValue29)
Transform25.addChild(ProtoInstance28)
ProtoInstance30 = ProtoInstanceObject()
ProtoInstance30.setName("sphere")

fieldValue31 = fieldValueObject()
fieldValue31.setName("xtranslation")
fieldValue31.setValue("2 0 0")

ProtoInstance30.addFieldValue(fieldValue31)
Transform25.addChild(ProtoInstance30)
ProtoInstance32 = ProtoInstanceObject()
ProtoInstance32.setName("sphere")

fieldValue33 = fieldValueObject()
fieldValue33.setName("xtranslation")
fieldValue33.setValue("-2 0 0")

ProtoInstance32.addFieldValue(fieldValue33)
Transform25.addChild(ProtoInstance32)
ProtoBody24.addChild(Transform25)
ProtoDeclare21.setProtoBody(ProtoBody24)
Scene7.addChild(ProtoDeclare21)
ProtoDeclare34 = ProtoDeclareObject()
ProtoDeclare34.setName("nine")

ProtoInterface35 = ProtoInterfaceObject()

field36 = fieldObject()
field36.setType(fieldObject.TYPE_SFVEC3F)
field36.setName("ztranslation")
field36.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field36.setValue("0 0 0")

ProtoInterface35.addField(field36)
ProtoDeclare34.setProtoInterface(ProtoInterface35)
ProtoBody37 = ProtoBodyObject()

Transform38 = TransformObject()

IS39 = ISObject()

connect40 = connectObject()
connect40.setNodeField("translation")
connect40.setProtoField("ztranslation")

IS39.addConnect(connect40)
Transform38.setIS(IS39)
ProtoInstance41 = ProtoInstanceObject()
ProtoInstance41.setName("three")

fieldValue42 = fieldValueObject()
fieldValue42.setName("ytranslation")
fieldValue42.setValue("0 0 0")

ProtoInstance41.addFieldValue(fieldValue42)
Transform38.addChild(ProtoInstance41)
ProtoInstance43 = ProtoInstanceObject()
ProtoInstance43.setName("three")

fieldValue44 = fieldValueObject()
fieldValue44.setName("ytranslation")
fieldValue44.setValue("0 2 0")

ProtoInstance43.addFieldValue(fieldValue44)
Transform38.addChild(ProtoInstance43)
ProtoInstance45 = ProtoInstanceObject()
ProtoInstance45.setName("three")

fieldValue46 = fieldValueObject()
fieldValue46.setName("ytranslation")
fieldValue46.setValue("0 -2 0")

ProtoInstance45.addFieldValue(fieldValue46)
Transform38.addChild(ProtoInstance45)
ProtoBody37.addChild(Transform38)
ProtoDeclare34.setProtoBody(ProtoBody37)
Scene7.addChild(ProtoDeclare34)
ProtoDeclare47 = ProtoDeclareObject()
ProtoDeclare47.setName("twentyseven")

ProtoInterface48 = ProtoInterfaceObject()

field49 = fieldObject()
field49.setType(fieldObject.TYPE_SFVEC3F)
field49.setName("ttranslation")
field49.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field49.setValue("0 0 0")

ProtoInterface48.addField(field49)
ProtoDeclare47.setProtoInterface(ProtoInterface48)
ProtoBody50 = ProtoBodyObject()

Transform51 = TransformObject()

IS52 = ISObject()

connect53 = connectObject()
connect53.setNodeField("translation")
connect53.setProtoField("ttranslation")

IS52.addConnect(connect53)
Transform51.setIS(IS52)
ProtoInstance54 = ProtoInstanceObject()
ProtoInstance54.setName("nine")

fieldValue55 = fieldValueObject()
fieldValue55.setName("ztranslation")
fieldValue55.setValue("0 0 0")

ProtoInstance54.addFieldValue(fieldValue55)
Transform51.addChild(ProtoInstance54)
ProtoInstance56 = ProtoInstanceObject()
ProtoInstance56.setName("nine")

fieldValue57 = fieldValueObject()
fieldValue57.setName("ztranslation")
fieldValue57.setValue("0 0 2")

ProtoInstance56.addFieldValue(fieldValue57)
Transform51.addChild(ProtoInstance56)
ProtoInstance58 = ProtoInstanceObject()
ProtoInstance58.setName("nine")

fieldValue59 = fieldValueObject()
fieldValue59.setName("ztranslation")
fieldValue59.setValue("0 0 -2")

ProtoInstance58.addFieldValue(fieldValue59)
Transform51.addChild(ProtoInstance58)
ProtoBody50.addChild(Transform51)
ProtoDeclare47.setProtoBody(ProtoBody50)
Scene7.addChild(ProtoDeclare47)
ProtoInstance60 = ProtoInstanceObject()
ProtoInstance60.setName("twentyseven")

fieldValue61 = fieldValueObject()
fieldValue61.setName("ttranslation")
fieldValue61.setValue("0 0 0")

ProtoInstance60.addFieldValue(fieldValue61)
Scene7.addChild(ProtoInstance60)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/rubik.new.x3d")
