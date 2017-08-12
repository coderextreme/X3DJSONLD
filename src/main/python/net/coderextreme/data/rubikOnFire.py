# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("rubikOnFire.x3d")

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
meta5.setContent("https://coderextreme.net/X3DJSONLD/rubikOnFire.x3d")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("description")
meta6.setContent("a white rubik cube")

head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()

NavigationInfo8 = NavigationInfoObject()
NavigationInfo8.setType(["EXAMINE"])

Scene7.addChild(NavigationInfo8)
Viewpoint9 = ViewpointObject()
Viewpoint9.setDescription("Rubiks Cube on Fire")
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
field13.setType(fieldObject.TYPE_SFNODE)
field13.setName("myShape")
field13.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Sphere14 = SphereObject()

field13.addChild(Sphere14)
ProtoInterface11.addField(field13)
ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody15 = ProtoBodyObject()

Transform16 = TransformObject()

IS17 = ISObject()

connect18 = connectObject()
connect18.setNodeField("translation")
connect18.setProtoField("xtranslation")

IS17.addConnect(connect18)
Transform16.setIS(IS17)
Shape19 = ShapeObject()

IS20 = ISObject()

connect21 = connectObject()
connect21.setNodeField("geometry")
connect21.setProtoField("myShape")

IS20.addConnect(connect21)
Shape19.setIS(IS20)
Appearance22 = AppearanceObject()

Material23 = MaterialObject()
Material23.setDiffuseColor([1,1,1])

Appearance22.setMaterial(Material23)
Shape19.setAppearance(Appearance22)
Transform16.addChild(Shape19)
ProtoBody15.addChild(Transform16)
ProtoDeclare10.setProtoBody(ProtoBody15)
Scene7.addChild(ProtoDeclare10)
ProtoDeclare24 = ProtoDeclareObject()
ProtoDeclare24.setName("three")

ProtoInterface25 = ProtoInterfaceObject()

field26 = fieldObject()
field26.setType(fieldObject.TYPE_SFVEC3F)
field26.setName("ytranslation")
field26.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field26.setValue("0 0 0")

ProtoInterface25.addField(field26)
field27 = fieldObject()
field27.setType(fieldObject.TYPE_SFNODE)
field27.setName("myShape")
field27.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Sphere28 = SphereObject()

field27.addChild(Sphere28)
ProtoInterface25.addField(field27)
ProtoDeclare24.setProtoInterface(ProtoInterface25)
ProtoBody29 = ProtoBodyObject()

Transform30 = TransformObject()

IS31 = ISObject()

connect32 = connectObject()
connect32.setNodeField("translation")
connect32.setProtoField("ytranslation")

IS31.addConnect(connect32)
Transform30.setIS(IS31)
ProtoInstance33 = ProtoInstanceObject()
ProtoInstance33.setName("anyShape")

fieldValue34 = fieldValueObject()
fieldValue34.setName("xtranslation")
fieldValue34.setValue("0 0 0")

ProtoInstance33.addFieldValue(fieldValue34)
IS35 = ISObject()

connect36 = connectObject()
connect36.setNodeField("myShape")
connect36.setProtoField("myShape")

IS35.addConnect(connect36)
ProtoInstance33.setIS(IS35)
Transform30.addChild(ProtoInstance33)
ProtoInstance37 = ProtoInstanceObject()
ProtoInstance37.setName("anyShape")

fieldValue38 = fieldValueObject()
fieldValue38.setName("xtranslation")
fieldValue38.setValue("2 0 0")

ProtoInstance37.addFieldValue(fieldValue38)
IS39 = ISObject()

connect40 = connectObject()
connect40.setNodeField("myShape")
connect40.setProtoField("myShape")

IS39.addConnect(connect40)
ProtoInstance37.setIS(IS39)
Transform30.addChild(ProtoInstance37)
ProtoInstance41 = ProtoInstanceObject()
ProtoInstance41.setName("anyShape")

fieldValue42 = fieldValueObject()
fieldValue42.setName("xtranslation")
fieldValue42.setValue("-2 0 0")

ProtoInstance41.addFieldValue(fieldValue42)
IS43 = ISObject()

connect44 = connectObject()
connect44.setNodeField("myShape")
connect44.setProtoField("myShape")

IS43.addConnect(connect44)
ProtoInstance41.setIS(IS43)
Transform30.addChild(ProtoInstance41)
ProtoBody29.addChild(Transform30)
ProtoDeclare24.setProtoBody(ProtoBody29)
Scene7.addChild(ProtoDeclare24)
ProtoDeclare45 = ProtoDeclareObject()
ProtoDeclare45.setName("nine")

ProtoInterface46 = ProtoInterfaceObject()

field47 = fieldObject()
field47.setType(fieldObject.TYPE_SFVEC3F)
field47.setName("ztranslation")
field47.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field47.setValue("0 0 0")

ProtoInterface46.addField(field47)
field48 = fieldObject()
field48.setType(fieldObject.TYPE_SFNODE)
field48.setName("myShape")
field48.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Sphere49 = SphereObject()

field48.addChild(Sphere49)
ProtoInterface46.addField(field48)
ProtoDeclare45.setProtoInterface(ProtoInterface46)
ProtoBody50 = ProtoBodyObject()

Transform51 = TransformObject()

IS52 = ISObject()

connect53 = connectObject()
connect53.setNodeField("translation")
connect53.setProtoField("ztranslation")

IS52.addConnect(connect53)
Transform51.setIS(IS52)
ProtoInstance54 = ProtoInstanceObject()
ProtoInstance54.setName("three")

fieldValue55 = fieldValueObject()
fieldValue55.setName("ytranslation")
fieldValue55.setValue("0 0 0")

ProtoInstance54.addFieldValue(fieldValue55)
IS56 = ISObject()

connect57 = connectObject()
connect57.setNodeField("myShape")
connect57.setProtoField("myShape")

IS56.addConnect(connect57)
ProtoInstance54.setIS(IS56)
Transform51.addChild(ProtoInstance54)
ProtoInstance58 = ProtoInstanceObject()
ProtoInstance58.setName("three")

fieldValue59 = fieldValueObject()
fieldValue59.setName("ytranslation")
fieldValue59.setValue("0 2 0")

ProtoInstance58.addFieldValue(fieldValue59)
IS60 = ISObject()

connect61 = connectObject()
connect61.setNodeField("myShape")
connect61.setProtoField("myShape")

IS60.addConnect(connect61)
ProtoInstance58.setIS(IS60)
Transform51.addChild(ProtoInstance58)
ProtoInstance62 = ProtoInstanceObject()
ProtoInstance62.setName("three")

fieldValue63 = fieldValueObject()
fieldValue63.setName("ytranslation")
fieldValue63.setValue("0 -2 0")

ProtoInstance62.addFieldValue(fieldValue63)
IS64 = ISObject()

connect65 = connectObject()
connect65.setNodeField("myShape")
connect65.setProtoField("myShape")

IS64.addConnect(connect65)
ProtoInstance62.setIS(IS64)
Transform51.addChild(ProtoInstance62)
ProtoBody50.addChild(Transform51)
ProtoDeclare45.setProtoBody(ProtoBody50)
Scene7.addChild(ProtoDeclare45)
ProtoDeclare66 = ProtoDeclareObject()
ProtoDeclare66.setName("twentyseven")

ProtoInterface67 = ProtoInterfaceObject()

field68 = fieldObject()
field68.setType(fieldObject.TYPE_SFVEC3F)
field68.setName("ttranslation")
field68.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field68.setValue("0 0 0")

ProtoInterface67.addField(field68)
field69 = fieldObject()
field69.setType(fieldObject.TYPE_SFNODE)
field69.setName("myShape")
field69.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Sphere70 = SphereObject()

field69.addChild(Sphere70)
ProtoInterface67.addField(field69)
ProtoDeclare66.setProtoInterface(ProtoInterface67)
ProtoBody71 = ProtoBodyObject()

Transform72 = TransformObject()

IS73 = ISObject()

connect74 = connectObject()
connect74.setNodeField("translation")
connect74.setProtoField("ttranslation")

IS73.addConnect(connect74)
Transform72.setIS(IS73)
ProtoInstance75 = ProtoInstanceObject()
ProtoInstance75.setName("nine")

fieldValue76 = fieldValueObject()
fieldValue76.setName("ztranslation")
fieldValue76.setValue("0 0 0")

ProtoInstance75.addFieldValue(fieldValue76)
IS77 = ISObject()

connect78 = connectObject()
connect78.setNodeField("myShape")
connect78.setProtoField("myShape")

IS77.addConnect(connect78)
ProtoInstance75.setIS(IS77)
Transform72.addChild(ProtoInstance75)
ProtoInstance79 = ProtoInstanceObject()
ProtoInstance79.setName("nine")

fieldValue80 = fieldValueObject()
fieldValue80.setName("ztranslation")
fieldValue80.setValue("0 0 2")

ProtoInstance79.addFieldValue(fieldValue80)
IS81 = ISObject()

connect82 = connectObject()
connect82.setNodeField("myShape")
connect82.setProtoField("myShape")

IS81.addConnect(connect82)
ProtoInstance79.setIS(IS81)
Transform72.addChild(ProtoInstance79)
ProtoInstance83 = ProtoInstanceObject()
ProtoInstance83.setName("nine")

fieldValue84 = fieldValueObject()
fieldValue84.setName("ztranslation")
fieldValue84.setValue("0 0 -2")

ProtoInstance83.addFieldValue(fieldValue84)
IS85 = ISObject()

connect86 = connectObject()
connect86.setNodeField("myShape")
connect86.setProtoField("myShape")

IS85.addConnect(connect86)
ProtoInstance83.setIS(IS85)
Transform72.addChild(ProtoInstance83)
ProtoBody71.addChild(Transform72)
ProtoDeclare66.setProtoBody(ProtoBody71)
Scene7.addChild(ProtoDeclare66)
ProtoInstance87 = ProtoInstanceObject()
ProtoInstance87.setName("twentyseven")

fieldValue88 = fieldValueObject()
fieldValue88.setName("ttranslation")
fieldValue88.setValue("0 0 0")

ProtoInstance87.addFieldValue(fieldValue88)
fieldValue89 = fieldValueObject()
fieldValue89.setName("myShape")

Box90 = BoxObject()
Box90.setSize([1,1,1])

fieldValue89.addChild(Box90)
ProtoInstance87.addFieldValue(fieldValue89)
Scene7.addChild(ProtoInstance87)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/rubikOnFire.new.x3d")
