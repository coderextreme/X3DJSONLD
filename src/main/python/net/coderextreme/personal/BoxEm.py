from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("BoxEm.x3d")

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
meta5.setContent("https://coderextreme.net/X3DJSONLD/box.x3d")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("description")
meta6.setContent("3 boxes")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = Scene()
NavigationInfo8 = NavigationInfo()
NavigationInfo8.setType(["EXAMINE"])

Scene7.addChildren(NavigationInfo8)
Viewpoint9 = Viewpoint()
Viewpoint9.setDescription("Cubes on Fire")
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
field13.setType("MFNode")
Shape14 = Shape()
Sphere15 = Sphere()

Shape14.setGeometry(Sphere15)
Appearance16 = Appearance()
Material17 = Material()
Material17.setDiffuseColor([1,1,1])

Appearance16.setMaterial(Material17)

Shape14.setAppearance(Appearance16)

field13.addChildren(Shape14)

ProtoInterface11.addField(field13)

ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody18 = ProtoBody()
Transform19 = Transform()
IS20 = IS()
connect21 = connect()
connect21.setNodeField("translation")
connect21.setProtoField("xtranslation")

IS20.addConnect(connect21)
connect22 = connect()
connect22.setNodeField("children")
connect22.setProtoField("myShape")

IS20.addConnect(connect22)

Transform19.setIS(IS20)

ProtoBody18.addChildren(Transform19)

ProtoDeclare10.setProtoBody(ProtoBody18)

Scene7.addChildren(ProtoDeclare10)
ProtoDeclare23 = ProtoDeclare()
ProtoDeclare23.setName("three")
ProtoInterface24 = ProtoInterface()
field25 = field()
field25.setName("ytranslation")
field25.setAccessType("inputOutput")
field25.setType("SFVec3f")
field25.setValue("0 0 0")

ProtoInterface24.addField(field25)
field26 = field()
field26.setName("myShape")
field26.setAccessType("inputOutput")
field26.setType("MFNode")
Shape27 = Shape()
Cylinder28 = Cylinder()

Shape27.setGeometry(Cylinder28)
Appearance29 = Appearance()
Material30 = Material()
Material30.setDiffuseColor([1,1,1])

Appearance29.setMaterial(Material30)

Shape27.setAppearance(Appearance29)

field26.addChildren(Shape27)

ProtoInterface24.addField(field26)

ProtoDeclare23.setProtoInterface(ProtoInterface24)
ProtoBody31 = ProtoBody()
Transform32 = Transform()
IS33 = IS()
connect34 = connect()
connect34.setNodeField("translation")
connect34.setProtoField("ytranslation")

IS33.addConnect(connect34)

Transform32.setIS(IS33)
ProtoInstance35 = ProtoInstance()
ProtoInstance35.setName("anyShape")
fieldValue36 = fieldValue()
fieldValue36.setName("xtranslation")
fieldValue36.setValue("0 0 0")

ProtoInstance35.addFieldValue(fieldValue36)
IS37 = IS()
connect38 = connect()
connect38.setNodeField("myShape")
connect38.setProtoField("myShape")

IS37.addConnect(connect38)

ProtoInstance35.setIS(IS37)

Transform32.addChildren(ProtoInstance35)
ProtoInstance39 = ProtoInstance()
ProtoInstance39.setName("anyShape")
fieldValue40 = fieldValue()
fieldValue40.setName("xtranslation")
fieldValue40.setValue("2 0 0")

ProtoInstance39.addFieldValue(fieldValue40)
IS41 = IS()
connect42 = connect()
connect42.setNodeField("myShape")
connect42.setProtoField("myShape")

IS41.addConnect(connect42)

ProtoInstance39.setIS(IS41)

Transform32.addChildren(ProtoInstance39)
ProtoInstance43 = ProtoInstance()
ProtoInstance43.setName("anyShape")
fieldValue44 = fieldValue()
fieldValue44.setName("xtranslation")
fieldValue44.setValue("-2 0 0")

ProtoInstance43.addFieldValue(fieldValue44)
IS45 = IS()
connect46 = connect()
connect46.setNodeField("myShape")
connect46.setProtoField("myShape")

IS45.addConnect(connect46)

ProtoInstance43.setIS(IS45)

Transform32.addChildren(ProtoInstance43)

ProtoBody31.addChildren(Transform32)

ProtoDeclare23.setProtoBody(ProtoBody31)

Scene7.addChildren(ProtoDeclare23)
ProtoInstance47 = ProtoInstance()
ProtoInstance47.setName("three")
ProtoInstance47.setDEF("threepi")
fieldValue48 = fieldValue()
fieldValue48.setName("ytranslation")
fieldValue48.setValue("0 0 0")

ProtoInstance47.addFieldValue(fieldValue48)
fieldValue49 = fieldValue()
fieldValue49.setName("myShape")
Shape50 = Shape()
Shape50.setDEF("box")
Box51 = Box()
Box51.setSize([1,1,1])

Shape50.setGeometry(Box51)
Appearance52 = Appearance()
Material53 = Material()
Material53.setDiffuseColor([0,1,0])

Appearance52.setMaterial(Material53)

Shape50.setAppearance(Appearance52)

fieldValue49.addChildren(Shape50)

ProtoInstance47.addFieldValue(fieldValue49)

Scene7.addChildren(ProtoInstance47)
Transform54 = Transform()
Transform54.setTranslation([0,2,0])
Shape55 = Shape()
Shape55.setUSE("box")

Transform54.addChildren(Shape55)

Scene7.addChildren(Transform54)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../personal/BoxEm_RoundTrip.x3d")
