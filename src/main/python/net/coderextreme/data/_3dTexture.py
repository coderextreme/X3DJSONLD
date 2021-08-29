from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("rubik.x3d")

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
meta5.setContent("https://coderextreme.net/X3DJSONLD/rubik.x3d")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("description")
meta6.setContent("a kind of rubik cube with spheres")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = Scene()
NavigationInfo8 = NavigationInfo()
NavigationInfo8.setType(["EXAMINE"])

Scene7.addChildren(NavigationInfo8)
Viewpoint9 = Viewpoint()
Viewpoint9.setDescription("Rubiks Cube")
Viewpoint9.setPosition([0,0,12])

Scene7.addChildren(Viewpoint9)
ProtoDeclare10 = ProtoDeclare()
ProtoDeclare10.setName("sphereproto")
ProtoInterface11 = ProtoInterface()
field12 = field()
field12.setName("xtranslation")
field12.setAccessType("inputOutput")
field12.setType("SFVec3f")
field12.setValue("0 0 0")

ProtoInterface11.addField(field12)

ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody13 = ProtoBody()
Transform14 = Transform()
IS15 = IS()
connect16 = connect()
connect16.setNodeField("translation")
connect16.setProtoField("xtranslation")

IS15.addConnect(connect16)

Transform14.setIS(IS15)
Shape17 = Shape()
Sphere18 = Sphere()

Shape17.setGeometry(Sphere18)
Appearance19 = Appearance()
Material20 = Material()
Material20.setDiffuseColor([1,1,1])

Appearance19.setMaterial(Material20)

Shape17.setAppearance(Appearance19)

Transform14.addChildren(Shape17)

ProtoBody13.addChildren(Transform14)

ProtoDeclare10.setProtoBody(ProtoBody13)

Scene7.addChildren(ProtoDeclare10)
ProtoDeclare21 = ProtoDeclare()
ProtoDeclare21.setName("three")
ProtoInterface22 = ProtoInterface()
field23 = field()
field23.setName("ytranslation")
field23.setAccessType("inputOutput")
field23.setType("SFVec3f")
field23.setValue("0 0 0")

ProtoInterface22.addField(field23)

ProtoDeclare21.setProtoInterface(ProtoInterface22)
ProtoBody24 = ProtoBody()
Transform25 = Transform()
IS26 = IS()
connect27 = connect()
connect27.setNodeField("translation")
connect27.setProtoField("ytranslation")

IS26.addConnect(connect27)

Transform25.setIS(IS26)
ProtoInstance28 = ProtoInstance()
ProtoInstance28.setName("sphereproto")
fieldValue29 = fieldValue()
fieldValue29.setName("xtranslation")
fieldValue29.setValue("0 0 0")

ProtoInstance28.addFieldValue(fieldValue29)

Transform25.addChildren(ProtoInstance28)
ProtoInstance30 = ProtoInstance()
ProtoInstance30.setName("sphereproto")
fieldValue31 = fieldValue()
fieldValue31.setName("xtranslation")
fieldValue31.setValue("2 0 0")

ProtoInstance30.addFieldValue(fieldValue31)

Transform25.addChildren(ProtoInstance30)
ProtoInstance32 = ProtoInstance()
ProtoInstance32.setName("sphereproto")
fieldValue33 = fieldValue()
fieldValue33.setName("xtranslation")
fieldValue33.setValue("-2 0 0")

ProtoInstance32.addFieldValue(fieldValue33)

Transform25.addChildren(ProtoInstance32)

ProtoBody24.addChildren(Transform25)

ProtoDeclare21.setProtoBody(ProtoBody24)

Scene7.addChildren(ProtoDeclare21)
ProtoDeclare34 = ProtoDeclare()
ProtoDeclare34.setName("nine")
ProtoInterface35 = ProtoInterface()
field36 = field()
field36.setName("ztranslation")
field36.setAccessType("inputOutput")
field36.setType("SFVec3f")
field36.setValue("0 0 0")

ProtoInterface35.addField(field36)

ProtoDeclare34.setProtoInterface(ProtoInterface35)
ProtoBody37 = ProtoBody()
Transform38 = Transform()
IS39 = IS()
connect40 = connect()
connect40.setNodeField("translation")
connect40.setProtoField("ztranslation")

IS39.addConnect(connect40)

Transform38.setIS(IS39)
ProtoInstance41 = ProtoInstance()
ProtoInstance41.setName("three")
fieldValue42 = fieldValue()
fieldValue42.setName("ytranslation")
fieldValue42.setValue("0 0 0")

ProtoInstance41.addFieldValue(fieldValue42)

Transform38.addChildren(ProtoInstance41)
ProtoInstance43 = ProtoInstance()
ProtoInstance43.setName("three")
fieldValue44 = fieldValue()
fieldValue44.setName("ytranslation")
fieldValue44.setValue("0 2 0")

ProtoInstance43.addFieldValue(fieldValue44)

Transform38.addChildren(ProtoInstance43)
ProtoInstance45 = ProtoInstance()
ProtoInstance45.setName("three")
fieldValue46 = fieldValue()
fieldValue46.setName("ytranslation")
fieldValue46.setValue("0 -2 0")

ProtoInstance45.addFieldValue(fieldValue46)

Transform38.addChildren(ProtoInstance45)

ProtoBody37.addChildren(Transform38)

ProtoDeclare34.setProtoBody(ProtoBody37)

Scene7.addChildren(ProtoDeclare34)
ProtoDeclare47 = ProtoDeclare()
ProtoDeclare47.setName("twentyseven")
ProtoInterface48 = ProtoInterface()
field49 = field()
field49.setName("ttranslation")
field49.setAccessType("inputOutput")
field49.setType("SFVec3f")
field49.setValue("0 0 0")

ProtoInterface48.addField(field49)

ProtoDeclare47.setProtoInterface(ProtoInterface48)
ProtoBody50 = ProtoBody()
Transform51 = Transform()
IS52 = IS()
connect53 = connect()
connect53.setNodeField("translation")
connect53.setProtoField("ttranslation")

IS52.addConnect(connect53)

Transform51.setIS(IS52)
ProtoInstance54 = ProtoInstance()
ProtoInstance54.setName("nine")
fieldValue55 = fieldValue()
fieldValue55.setName("ztranslation")
fieldValue55.setValue("0 0 0")

ProtoInstance54.addFieldValue(fieldValue55)

Transform51.addChildren(ProtoInstance54)
ProtoInstance56 = ProtoInstance()
ProtoInstance56.setName("nine")
fieldValue57 = fieldValue()
fieldValue57.setName("ztranslation")
fieldValue57.setValue("0 0 2")

ProtoInstance56.addFieldValue(fieldValue57)

Transform51.addChildren(ProtoInstance56)
ProtoInstance58 = ProtoInstance()
ProtoInstance58.setName("nine")
fieldValue59 = fieldValue()
fieldValue59.setName("ztranslation")
fieldValue59.setValue("0 0 -2")

ProtoInstance58.addFieldValue(fieldValue59)

Transform51.addChildren(ProtoInstance58)

ProtoBody50.addChildren(Transform51)

ProtoDeclare47.setProtoBody(ProtoBody50)

Scene7.addChildren(ProtoDeclare47)
ProtoInstance60 = ProtoInstance()
ProtoInstance60.setName("twentyseven")
fieldValue61 = fieldValue()
fieldValue61.setName("ttranslation")
fieldValue61.setValue("0 0 0")

ProtoInstance60.addFieldValue(fieldValue61)

Scene7.addChildren(ProtoInstance60)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/_3dTexture_RoundTrip.x3d")
