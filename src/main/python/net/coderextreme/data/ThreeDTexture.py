import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("ThreeDTexture.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/ThreeDTexture.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("a kind of ThreeDTexture cube with spheres")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()
NavigationInfo8.setType(["EXAMINE"])

Scene7.addChildren(NavigationInfo8)
Viewpoint9 = x3d.Viewpoint()
Viewpoint9.setDescription("Rubiks Cube")
Viewpoint9.setPosition([0,0,12])

Scene7.addChildren(Viewpoint9)
ProtoDeclare10 = x3d.ProtoDeclare()
ProtoDeclare10.setName("sphereproto")
ProtoInterface11 = x3d.ProtoInterface()
field12 = x3d.field()
field12.setName("xtranslation")
field12.setAccessType("inputOutput")
field12.setType("SFVec3f")
field12.setValue("0 0 0")

ProtoInterface11.addField(field12)

ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody13 = x3d.ProtoBody()
Transform14 = x3d.Transform()
IS15 = x3d.IS()
connect16 = x3d.connect()
connect16.setNodeField("translation")
connect16.setProtoField("xtranslation")

IS15.addConnect(connect16)

Transform14.setIS(IS15)
Shape17 = x3d.Shape()
Sphere18 = x3d.Sphere()

Shape17.setGeometry(Sphere18)
Appearance19 = x3d.Appearance()
Material20 = x3d.Material()
Material20.setDiffuseColor([1,1,1])

Appearance19.setMaterial(Material20)

Shape17.setAppearance(Appearance19)

Transform14.addChild(Shape17)

ProtoBody13.addChildren(Transform14)

ProtoDeclare10.setProtoBody(ProtoBody13)

Scene7.addChildren(ProtoDeclare10)
ProtoDeclare21 = x3d.ProtoDeclare()
ProtoDeclare21.setName("three")
ProtoInterface22 = x3d.ProtoInterface()
field23 = x3d.field()
field23.setName("ytranslation")
field23.setAccessType("inputOutput")
field23.setType("SFVec3f")
field23.setValue("0 0 0")

ProtoInterface22.addField(field23)

ProtoDeclare21.setProtoInterface(ProtoInterface22)
ProtoBody24 = x3d.ProtoBody()
Transform25 = x3d.Transform()
IS26 = x3d.IS()
connect27 = x3d.connect()
connect27.setNodeField("translation")
connect27.setProtoField("ytranslation")

IS26.addConnect(connect27)

Transform25.setIS(IS26)
ProtoInstance28 = x3d.ProtoInstance()
ProtoInstance28.setName("sphereproto")
fieldValue29 = x3d.fieldValue()
fieldValue29.setName("xtranslation")
fieldValue29.setValue("0 0 0")

ProtoInstance28.addFieldValue(fieldValue29)

Transform25.addChildren(ProtoInstance28)
ProtoInstance30 = x3d.ProtoInstance()
ProtoInstance30.setName("sphereproto")
fieldValue31 = x3d.fieldValue()
fieldValue31.setName("xtranslation")
fieldValue31.setValue("2 0 0")

ProtoInstance30.addFieldValue(fieldValue31)

Transform25.addChildren(ProtoInstance30)
ProtoInstance32 = x3d.ProtoInstance()
ProtoInstance32.setName("sphereproto")
fieldValue33 = x3d.fieldValue()
fieldValue33.setName("xtranslation")
fieldValue33.setValue("-2 0 0")

ProtoInstance32.addFieldValue(fieldValue33)

Transform25.addChildren(ProtoInstance32)

ProtoBody24.addChildren(Transform25)

ProtoDeclare21.setProtoBody(ProtoBody24)

Scene7.addChildren(ProtoDeclare21)
ProtoDeclare34 = x3d.ProtoDeclare()
ProtoDeclare34.setName("nine")
ProtoInterface35 = x3d.ProtoInterface()
field36 = x3d.field()
field36.setName("ztranslation")
field36.setAccessType("inputOutput")
field36.setType("SFVec3f")
field36.setValue("0 0 0")

ProtoInterface35.addField(field36)

ProtoDeclare34.setProtoInterface(ProtoInterface35)
ProtoBody37 = x3d.ProtoBody()
Transform38 = x3d.Transform()
IS39 = x3d.IS()
connect40 = x3d.connect()
connect40.setNodeField("translation")
connect40.setProtoField("ztranslation")

IS39.addConnect(connect40)

Transform38.setIS(IS39)
ProtoInstance41 = x3d.ProtoInstance()
ProtoInstance41.setName("three")
fieldValue42 = x3d.fieldValue()
fieldValue42.setName("ytranslation")
fieldValue42.setValue("0 0 0")

ProtoInstance41.addFieldValue(fieldValue42)

Transform38.addChildren(ProtoInstance41)
ProtoInstance43 = x3d.ProtoInstance()
ProtoInstance43.setName("three")
fieldValue44 = x3d.fieldValue()
fieldValue44.setName("ytranslation")
fieldValue44.setValue("0 2 0")

ProtoInstance43.addFieldValue(fieldValue44)

Transform38.addChildren(ProtoInstance43)
ProtoInstance45 = x3d.ProtoInstance()
ProtoInstance45.setName("three")
fieldValue46 = x3d.fieldValue()
fieldValue46.setName("ytranslation")
fieldValue46.setValue("0 -2 0")

ProtoInstance45.addFieldValue(fieldValue46)

Transform38.addChildren(ProtoInstance45)

ProtoBody37.addChildren(Transform38)

ProtoDeclare34.setProtoBody(ProtoBody37)

Scene7.addChildren(ProtoDeclare34)
ProtoDeclare47 = x3d.ProtoDeclare()
ProtoDeclare47.setName("twentyseven")
ProtoInterface48 = x3d.ProtoInterface()
field49 = x3d.field()
field49.setName("ttranslation")
field49.setAccessType("inputOutput")
field49.setType("SFVec3f")
field49.setValue("0 0 0")

ProtoInterface48.addField(field49)

ProtoDeclare47.setProtoInterface(ProtoInterface48)
ProtoBody50 = x3d.ProtoBody()
Transform51 = x3d.Transform()
IS52 = x3d.IS()
connect53 = x3d.connect()
connect53.setNodeField("translation")
connect53.setProtoField("ttranslation")

IS52.addConnect(connect53)

Transform51.setIS(IS52)
ProtoInstance54 = x3d.ProtoInstance()
ProtoInstance54.setName("nine")
fieldValue55 = x3d.fieldValue()
fieldValue55.setName("ztranslation")
fieldValue55.setValue("0 0 0")

ProtoInstance54.addFieldValue(fieldValue55)

Transform51.addChildren(ProtoInstance54)
ProtoInstance56 = x3d.ProtoInstance()
ProtoInstance56.setName("nine")
fieldValue57 = x3d.fieldValue()
fieldValue57.setName("ztranslation")
fieldValue57.setValue("0 0 2")

ProtoInstance56.addFieldValue(fieldValue57)

Transform51.addChildren(ProtoInstance56)
ProtoInstance58 = x3d.ProtoInstance()
ProtoInstance58.setName("nine")
fieldValue59 = x3d.fieldValue()
fieldValue59.setName("ztranslation")
fieldValue59.setValue("0 0 -2")

ProtoInstance58.addFieldValue(fieldValue59)

Transform51.addChildren(ProtoInstance58)

ProtoBody50.addChildren(Transform51)

ProtoDeclare47.setProtoBody(ProtoBody50)

Scene7.addChildren(ProtoDeclare47)
ProtoInstance60 = x3d.ProtoInstance()
ProtoInstance60.setName("twentyseven")
fieldValue61 = x3d.fieldValue()
fieldValue61.setName("ttranslation")
fieldValue61.setValue("0 0 0")

ProtoInstance60.addFieldValue(fieldValue61)

Scene7.addChildren(ProtoInstance60)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/ThreeDTexture.new.python.x3d")
X3D0.toFileJSON("../data/ThreeDTexture.new.python.json")
