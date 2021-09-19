from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("rubik2x2x2.x3d")

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
meta6.setContent("a kind of 2x2x2 rubik cube")

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
ProtoDeclare10.setName("boxproto")
ProtoInterface11 = ProtoInterface()
field12 = field()
field12.setName("xtranslation")
field12.setAccessType("inputOutput")
field12.setType("SFVec3f")
field12.setValue("0 0 0")

ProtoInterface11.addField(field12)
field13 = field()
field13.setName("diffuseColor")
field13.setAccessType("inputOutput")
field13.setType("SFColor")
field13.setValue("1 1 1")

ProtoInterface11.addField(field13)

ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody14 = ProtoBody()
Transform15 = Transform()
IS16 = IS()
connect17 = connect()
connect17.setNodeField("translation")
connect17.setProtoField("xtranslation")

IS16.addConnect(connect17)

Transform15.setIS(IS16)
Shape18 = Shape()
Box19 = Box()

Shape18.setGeometry(Box19)
Appearance20 = Appearance()
Material21 = Material()
Material21.setDiffuseColor([1,1,1])
IS22 = IS()
connect23 = connect()
connect23.setNodeField("diffuseColor")
connect23.setProtoField("diffuseColor")

IS22.addConnect(connect23)

Material21.setIS(IS22)

Appearance20.setMaterial(Material21)

Shape18.setAppearance(Appearance20)

Transform15.addChildren(Shape18)

ProtoBody14.addChildren(Transform15)

ProtoDeclare10.setProtoBody(ProtoBody14)

Scene7.addChildren(ProtoDeclare10)
ProtoDeclare24 = ProtoDeclare()
ProtoDeclare24.setName("two")
ProtoInterface25 = ProtoInterface()
field26 = field()
field26.setName("ytranslation")
field26.setAccessType("inputOutput")
field26.setType("SFVec3f")
field26.setValue("0 0 0")

ProtoInterface25.addField(field26)
field27 = field()
field27.setName("diffuseColor")
field27.setAccessType("inputOutput")
field27.setType("SFColor")
field27.setValue("1 0 0")

ProtoInterface25.addField(field27)

ProtoDeclare24.setProtoInterface(ProtoInterface25)
ProtoBody28 = ProtoBody()
Transform29 = Transform()
IS30 = IS()
connect31 = connect()
connect31.setNodeField("translation")
connect31.setProtoField("ytranslation")

IS30.addConnect(connect31)

Transform29.setIS(IS30)
ProtoInstance32 = ProtoInstance()
ProtoInstance32.setName("boxproto")
fieldValue33 = fieldValue()
fieldValue33.setName("xtranslation")
fieldValue33.setValue("0 0 0")

ProtoInstance32.addFieldValue(fieldValue33)
fieldValue34 = fieldValue()
fieldValue34.setName("diffuseColor")
IS35 = IS()
connect36 = connect()
connect36.setNodeField("diffuseColor")
connect36.setProtoField("diffuseColor")

IS35.addConnect(connect36)

fieldValue34.setIS(IS35)

ProtoInstance32.addFieldValue(fieldValue34)

Transform29.addChildren(ProtoInstance32)
ProtoInstance37 = ProtoInstance()
ProtoInstance37.setName("boxproto")
fieldValue38 = fieldValue()
fieldValue38.setName("xtranslation")
fieldValue38.setValue("2 0 0")

ProtoInstance37.addFieldValue(fieldValue38)
fieldValue39 = fieldValue()
fieldValue39.setName("diffuseColor")
IS40 = IS()
connect41 = connect()
connect41.setNodeField("diffuseColor")
connect41.setProtoField("diffuseColor")

IS40.addConnect(connect41)

fieldValue39.setIS(IS40)

ProtoInstance37.addFieldValue(fieldValue39)

Transform29.addChildren(ProtoInstance37)

ProtoBody28.addChildren(Transform29)

ProtoDeclare24.setProtoBody(ProtoBody28)

Scene7.addChildren(ProtoDeclare24)
ProtoDeclare42 = ProtoDeclare()
ProtoDeclare42.setName("four")
ProtoInterface43 = ProtoInterface()
field44 = field()
field44.setName("ztranslation")
field44.setAccessType("inputOutput")
field44.setType("SFVec3f")
field44.setValue("0 0 0")

ProtoInterface43.addField(field44)
field45 = field()
field45.setName("x1diffuseColor")
field45.setAccessType("inputOutput")
field45.setType("SFColor")
field45.setValue("1 0 0")

ProtoInterface43.addField(field45)
field46 = field()
field46.setName("x2diffuseColor")
field46.setAccessType("inputOutput")
field46.setType("SFColor")
field46.setValue("0 1 0")

ProtoInterface43.addField(field46)

ProtoDeclare42.setProtoInterface(ProtoInterface43)
ProtoBody47 = ProtoBody()
Transform48 = Transform()
IS49 = IS()
connect50 = connect()
connect50.setNodeField("translation")
connect50.setProtoField("ztranslation")

IS49.addConnect(connect50)

Transform48.setIS(IS49)
ProtoInstance51 = ProtoInstance()
ProtoInstance51.setName("two")
fieldValue52 = fieldValue()
fieldValue52.setName("ytranslation")
fieldValue52.setValue("0 0 0")

ProtoInstance51.addFieldValue(fieldValue52)
fieldValue53 = fieldValue()
fieldValue53.setName("diffuseColor")
IS54 = IS()
connect55 = connect()
connect55.setNodeField("diffuseColor")
connect55.setProtoField("x1diffuseColor")

IS54.addConnect(connect55)

fieldValue53.setIS(IS54)

ProtoInstance51.addFieldValue(fieldValue53)

Transform48.addChildren(ProtoInstance51)
ProtoInstance56 = ProtoInstance()
ProtoInstance56.setName("two")
fieldValue57 = fieldValue()
fieldValue57.setName("ytranslation")
fieldValue57.setValue("0 2 0")

ProtoInstance56.addFieldValue(fieldValue57)
fieldValue58 = fieldValue()
fieldValue58.setName("diffuseColor")
IS59 = IS()
connect60 = connect()
connect60.setNodeField("diffuseColor")
connect60.setProtoField("x2diffuseColor")

IS59.addConnect(connect60)

fieldValue58.setIS(IS59)

ProtoInstance56.addFieldValue(fieldValue58)

Transform48.addChildren(ProtoInstance56)

ProtoBody47.addChildren(Transform48)

ProtoDeclare42.setProtoBody(ProtoBody47)

Scene7.addChildren(ProtoDeclare42)
ProtoDeclare61 = ProtoDeclare()
ProtoDeclare61.setName("eight")
ProtoInterface62 = ProtoInterface()
field63 = field()
field63.setName("ttranslation")
field63.setAccessType("inputOutput")
field63.setType("SFVec3f")
field63.setValue("0 0 0")

ProtoInterface62.addField(field63)

ProtoDeclare61.setProtoInterface(ProtoInterface62)
ProtoBody64 = ProtoBody()
Transform65 = Transform()
IS66 = IS()
connect67 = connect()
connect67.setNodeField("translation")
connect67.setProtoField("ttranslation")

IS66.addConnect(connect67)

Transform65.setIS(IS66)
ProtoInstance68 = ProtoInstance()
ProtoInstance68.setName("four")
fieldValue69 = fieldValue()
fieldValue69.setName("ztranslation")
fieldValue69.setValue("0 0 0")

ProtoInstance68.addFieldValue(fieldValue69)
fieldValue70 = fieldValue()
fieldValue70.setName("x1diffuseColor")
fieldValue70.setValue("1 0 0")

ProtoInstance68.addFieldValue(fieldValue70)
fieldValue71 = fieldValue()
fieldValue71.setName("x2diffuseColor")
fieldValue71.setValue("0 1 0")

ProtoInstance68.addFieldValue(fieldValue71)

Transform65.addChildren(ProtoInstance68)
ProtoInstance72 = ProtoInstance()
ProtoInstance72.setName("four")
fieldValue73 = fieldValue()
fieldValue73.setName("ztranslation")
fieldValue73.setValue("0 0 2")

ProtoInstance72.addFieldValue(fieldValue73)
fieldValue74 = fieldValue()
fieldValue74.setName("x1diffuseColor")
fieldValue74.setValue("0 0 1")

ProtoInstance72.addFieldValue(fieldValue74)
fieldValue75 = fieldValue()
fieldValue75.setName("x2diffuseColor")
fieldValue75.setValue("1 1 0")

ProtoInstance72.addFieldValue(fieldValue75)

Transform65.addChildren(ProtoInstance72)

ProtoBody64.addChildren(Transform65)

ProtoDeclare61.setProtoBody(ProtoBody64)

Scene7.addChildren(ProtoDeclare61)
ProtoInstance76 = ProtoInstance()
ProtoInstance76.setName("eight")
fieldValue77 = fieldValue()
fieldValue77.setName("ttranslation")
fieldValue77.setValue("0 0 0")

ProtoInstance76.addFieldValue(fieldValue77)

Scene7.addChildren(ProtoInstance76)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../personal/rubik2x2x2_RoundTrip.x3d")
