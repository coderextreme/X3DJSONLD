from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("rubikOnFire.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/rubikOnFire.x3d")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("description")
meta6.setContent("a white rubik cube")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = Scene()
NavigationInfo8 = NavigationInfo()
NavigationInfo8.setType(["EXAMINE"])

Scene7.addChildren(NavigationInfo8)
Viewpoint9 = Viewpoint()
Viewpoint9.setDescription("Rubiks Cube on Fire")
Viewpoint9.setPosition([0,0,12])

Scene7.addChildren(Viewpoint9)
ProtoDeclare10 = ProtoDeclare()
ProtoDeclare10.setName("anyShape")
ProtoInterface11 = ProtoInterface()
field12 = field()
field12.setName("xtranslation")
field12.setAccessType("inputOutput")
field12.setType("SFVec3f")
field12.setValue("0 0 0")

ProtoInterface11.addField(field12)
field13 = field()
field13.setName("myShape")
field13.setAccessType("inputOutput")
field13.setType("SFNode")
Sphere14 = Sphere()

field13.addChildren(Sphere14)

ProtoInterface11.addField(field13)

ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody15 = ProtoBody()
Transform16 = Transform()
IS17 = IS()
connect18 = connect()
connect18.setNodeField("translation")
connect18.setProtoField("xtranslation")

IS17.addConnect(connect18)

Transform16.setIS(IS17)
Shape19 = Shape()
IS20 = IS()
connect21 = connect()
connect21.setNodeField("geometry")
connect21.setProtoField("myShape")

IS20.addConnect(connect21)

Shape19.setIS(IS20)
Appearance22 = Appearance()
Material23 = Material()
Material23.setDiffuseColor([1,1,1])

Appearance22.setMaterial(Material23)

Shape19.setAppearance(Appearance22)

Transform16.addChildren(Shape19)

ProtoBody15.addChildren(Transform16)

ProtoDeclare10.setProtoBody(ProtoBody15)

Scene7.addChildren(ProtoDeclare10)
ProtoDeclare24 = ProtoDeclare()
ProtoDeclare24.setName("three")
ProtoInterface25 = ProtoInterface()
field26 = field()
field26.setName("ytranslation")
field26.setAccessType("inputOutput")
field26.setType("SFVec3f")
field26.setValue("0 0 0")

ProtoInterface25.addField(field26)
field27 = field()
field27.setName("myShape")
field27.setAccessType("inputOutput")
field27.setType("SFNode")
Sphere28 = Sphere()

field27.addChildren(Sphere28)

ProtoInterface25.addField(field27)

ProtoDeclare24.setProtoInterface(ProtoInterface25)
ProtoBody29 = ProtoBody()
Transform30 = Transform()
IS31 = IS()
connect32 = connect()
connect32.setNodeField("translation")
connect32.setProtoField("ytranslation")

IS31.addConnect(connect32)

Transform30.setIS(IS31)
ProtoInstance33 = ProtoInstance()
ProtoInstance33.setName("anyShape")
fieldValue34 = fieldValue()
fieldValue34.setName("xtranslation")
fieldValue34.setValue("0 0 0")

ProtoInstance33.addFieldValue(fieldValue34)
IS35 = IS()
connect36 = connect()
connect36.setNodeField("myShape")
connect36.setProtoField("myShape")

IS35.addConnect(connect36)

ProtoInstance33.setIS(IS35)

Transform30.addChildren(ProtoInstance33)
ProtoInstance37 = ProtoInstance()
ProtoInstance37.setName("anyShape")
fieldValue38 = fieldValue()
fieldValue38.setName("xtranslation")
fieldValue38.setValue("2 0 0")

ProtoInstance37.addFieldValue(fieldValue38)
IS39 = IS()
connect40 = connect()
connect40.setNodeField("myShape")
connect40.setProtoField("myShape")

IS39.addConnect(connect40)

ProtoInstance37.setIS(IS39)

Transform30.addChildren(ProtoInstance37)
ProtoInstance41 = ProtoInstance()
ProtoInstance41.setName("anyShape")
fieldValue42 = fieldValue()
fieldValue42.setName("xtranslation")
fieldValue42.setValue("-2 0 0")

ProtoInstance41.addFieldValue(fieldValue42)
IS43 = IS()
connect44 = connect()
connect44.setNodeField("myShape")
connect44.setProtoField("myShape")

IS43.addConnect(connect44)

ProtoInstance41.setIS(IS43)

Transform30.addChildren(ProtoInstance41)

ProtoBody29.addChildren(Transform30)

ProtoDeclare24.setProtoBody(ProtoBody29)

Scene7.addChildren(ProtoDeclare24)
ProtoDeclare45 = ProtoDeclare()
ProtoDeclare45.setName("nine")
ProtoInterface46 = ProtoInterface()
field47 = field()
field47.setName("ztranslation")
field47.setAccessType("inputOutput")
field47.setType("SFVec3f")
field47.setValue("0 0 0")

ProtoInterface46.addField(field47)
field48 = field()
field48.setName("myShape")
field48.setAccessType("inputOutput")
field48.setType("SFNode")
Sphere49 = Sphere()

field48.addChildren(Sphere49)

ProtoInterface46.addField(field48)

ProtoDeclare45.setProtoInterface(ProtoInterface46)
ProtoBody50 = ProtoBody()
Transform51 = Transform()
IS52 = IS()
connect53 = connect()
connect53.setNodeField("translation")
connect53.setProtoField("ztranslation")

IS52.addConnect(connect53)

Transform51.setIS(IS52)
ProtoInstance54 = ProtoInstance()
ProtoInstance54.setName("three")
fieldValue55 = fieldValue()
fieldValue55.setName("ytranslation")
fieldValue55.setValue("0 0 0")

ProtoInstance54.addFieldValue(fieldValue55)
IS56 = IS()
connect57 = connect()
connect57.setNodeField("myShape")
connect57.setProtoField("myShape")

IS56.addConnect(connect57)

ProtoInstance54.setIS(IS56)

Transform51.addChildren(ProtoInstance54)
ProtoInstance58 = ProtoInstance()
ProtoInstance58.setName("three")
fieldValue59 = fieldValue()
fieldValue59.setName("ytranslation")
fieldValue59.setValue("0 2 0")

ProtoInstance58.addFieldValue(fieldValue59)
IS60 = IS()
connect61 = connect()
connect61.setNodeField("myShape")
connect61.setProtoField("myShape")

IS60.addConnect(connect61)

ProtoInstance58.setIS(IS60)

Transform51.addChildren(ProtoInstance58)
ProtoInstance62 = ProtoInstance()
ProtoInstance62.setName("three")
fieldValue63 = fieldValue()
fieldValue63.setName("ytranslation")
fieldValue63.setValue("0 -2 0")

ProtoInstance62.addFieldValue(fieldValue63)
IS64 = IS()
connect65 = connect()
connect65.setNodeField("myShape")
connect65.setProtoField("myShape")

IS64.addConnect(connect65)

ProtoInstance62.setIS(IS64)

Transform51.addChildren(ProtoInstance62)

ProtoBody50.addChildren(Transform51)

ProtoDeclare45.setProtoBody(ProtoBody50)

Scene7.addChildren(ProtoDeclare45)
ProtoDeclare66 = ProtoDeclare()
ProtoDeclare66.setName("twentyseven")
ProtoInterface67 = ProtoInterface()
field68 = field()
field68.setName("ttranslation")
field68.setAccessType("inputOutput")
field68.setType("SFVec3f")
field68.setValue("0 0 0")

ProtoInterface67.addField(field68)
field69 = field()
field69.setName("myShape")
field69.setAccessType("inputOutput")
field69.setType("SFNode")
Sphere70 = Sphere()

field69.addChildren(Sphere70)

ProtoInterface67.addField(field69)

ProtoDeclare66.setProtoInterface(ProtoInterface67)
ProtoBody71 = ProtoBody()
Transform72 = Transform()
IS73 = IS()
connect74 = connect()
connect74.setNodeField("translation")
connect74.setProtoField("ttranslation")

IS73.addConnect(connect74)

Transform72.setIS(IS73)
ProtoInstance75 = ProtoInstance()
ProtoInstance75.setName("nine")
fieldValue76 = fieldValue()
fieldValue76.setName("ztranslation")
fieldValue76.setValue("0 0 0")

ProtoInstance75.addFieldValue(fieldValue76)
IS77 = IS()
connect78 = connect()
connect78.setNodeField("myShape")
connect78.setProtoField("myShape")

IS77.addConnect(connect78)

ProtoInstance75.setIS(IS77)

Transform72.addChildren(ProtoInstance75)
ProtoInstance79 = ProtoInstance()
ProtoInstance79.setName("nine")
fieldValue80 = fieldValue()
fieldValue80.setName("ztranslation")
fieldValue80.setValue("0 0 2")

ProtoInstance79.addFieldValue(fieldValue80)
IS81 = IS()
connect82 = connect()
connect82.setNodeField("myShape")
connect82.setProtoField("myShape")

IS81.addConnect(connect82)

ProtoInstance79.setIS(IS81)

Transform72.addChildren(ProtoInstance79)
ProtoInstance83 = ProtoInstance()
ProtoInstance83.setName("nine")
fieldValue84 = fieldValue()
fieldValue84.setName("ztranslation")
fieldValue84.setValue("0 0 -2")

ProtoInstance83.addFieldValue(fieldValue84)
IS85 = IS()
connect86 = connect()
connect86.setNodeField("myShape")
connect86.setProtoField("myShape")

IS85.addConnect(connect86)

ProtoInstance83.setIS(IS85)

Transform72.addChildren(ProtoInstance83)

ProtoBody71.addChildren(Transform72)

ProtoDeclare66.setProtoBody(ProtoBody71)

Scene7.addChildren(ProtoDeclare66)
ProtoInstance87 = ProtoInstance()
ProtoInstance87.setName("twentyseven")
fieldValue88 = fieldValue()
fieldValue88.setName("ttranslation")
fieldValue88.setValue("0 0 0")

ProtoInstance87.addFieldValue(fieldValue88)
fieldValue89 = fieldValue()
fieldValue89.setName("myShape")
Box90 = Box()
Box90.setSize([1,1,1])

fieldValue89.addChildren(Box90)

ProtoInstance87.addFieldValue(fieldValue89)

Scene7.addChildren(ProtoInstance87)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/rubikOnFire_RoundTrip.x3d")
