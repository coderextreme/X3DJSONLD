import x3dpsail as x3d
ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("BoxEm2.x3d")

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
meta5.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/BoxEm2.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("3 boxes")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()
NavigationInfo8.setType(["EXAMINE"])

Scene7.addChildren(NavigationInfo8)
Viewpoint9 = x3d.Viewpoint()
Viewpoint9.setDescription("Cubes on Fire")
Viewpoint9.setPosition([0,0,12])

Scene7.addChildren(Viewpoint9)
ProtoDeclare10 = x3d.ProtoDeclare()
ProtoDeclare10.setName("anyShape")
ProtoInterface11 = x3d.ProtoInterface()
field12 = x3d.field()
field12.setName("xtranslation")
field12.setAccessType("inputOutput")
field12.setType("SFVec3f")
field12.setValue("0 0 0")

ProtoInterface11.addField(field12)
field13 = x3d.field()
field13.setName("myShape")
field13.setAccessType("inputOutput")
field13.setType("MFNode")
Shape14 = x3d.Shape()
Sphere15 = x3d.Sphere()

Shape14.setGeometry(Sphere15)
Appearance16 = x3d.Appearance()
Material17 = x3d.Material()
Material17.setDiffuseColor([1,1,1])

Appearance16.setMaterial(Material17)

Shape14.setAppearance(Appearance16)

field13.addChildren(Shape14)

ProtoInterface11.addField(field13)

ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody18 = x3d.ProtoBody()
Transform19 = x3d.Transform()
IS20 = x3d.IS()
connect21 = x3d.connect()
connect21.setNodeField("translation")
connect21.setProtoField("xtranslation")

IS20.addConnect(connect21)
connect22 = x3d.connect()
connect22.setNodeField("children")
connect22.setProtoField("myShape")

IS20.addConnect(connect22)

Transform19.setIS(IS20)

ProtoBody18.addChildren(Transform19)

ProtoDeclare10.setProtoBody(ProtoBody18)

Scene7.addChildren(ProtoDeclare10)
ProtoDeclare23 = x3d.ProtoDeclare()
ProtoDeclare23.setName("three")
ProtoInterface24 = x3d.ProtoInterface()
field25 = x3d.field()
field25.setName("ytranslation")
field25.setAccessType("inputOutput")
field25.setType("SFVec3f")
field25.setValue("0 0 0")

ProtoInterface24.addField(field25)
field26 = x3d.field()
field26.setName("myShape")
field26.setAccessType("inputOutput")
field26.setType("MFNode")
Shape27 = x3d.Shape()
Cylinder28 = x3d.Cylinder()

Shape27.setGeometry(Cylinder28)
Appearance29 = x3d.Appearance()
Material30 = x3d.Material()
Material30.setDiffuseColor([1,1,1])

Appearance29.setMaterial(Material30)

Shape27.setAppearance(Appearance29)

field26.addChildren(Shape27)

ProtoInterface24.addField(field26)

ProtoDeclare23.setProtoInterface(ProtoInterface24)
ProtoBody31 = x3d.ProtoBody()
Transform32 = x3d.Transform()
IS33 = x3d.IS()
connect34 = x3d.connect()
connect34.setNodeField("translation")
connect34.setProtoField("ytranslation")

IS33.addConnect(connect34)

Transform32.setIS(IS33)
ProtoInstance35 = x3d.ProtoInstance()
ProtoInstance35.setName("anyShape")
fieldValue36 = x3d.fieldValue()
fieldValue36.setName("xtranslation")
fieldValue36.setValue("0 0 0")

ProtoInstance35.addFieldValue(fieldValue36)
IS37 = x3d.IS()
connect38 = x3d.connect()
connect38.setNodeField("myShape")
connect38.setProtoField("myShape")

IS37.addConnect(connect38)

ProtoInstance35.setIS(IS37)

Transform32.addChildren(ProtoInstance35)
ProtoInstance39 = x3d.ProtoInstance()
ProtoInstance39.setName("anyShape")
fieldValue40 = x3d.fieldValue()
fieldValue40.setName("xtranslation")
fieldValue40.setValue("2 0 0")

ProtoInstance39.addFieldValue(fieldValue40)
IS41 = x3d.IS()
connect42 = x3d.connect()
connect42.setNodeField("myShape")
connect42.setProtoField("myShape")

IS41.addConnect(connect42)

ProtoInstance39.setIS(IS41)

Transform32.addChildren(ProtoInstance39)
ProtoInstance43 = x3d.ProtoInstance()
ProtoInstance43.setName("anyShape")
fieldValue44 = x3d.fieldValue()
fieldValue44.setName("xtranslation")
fieldValue44.setValue("-2 0 0")

ProtoInstance43.addFieldValue(fieldValue44)
IS45 = x3d.IS()
connect46 = x3d.connect()
connect46.setNodeField("myShape")
connect46.setProtoField("myShape")

IS45.addConnect(connect46)

ProtoInstance43.setIS(IS45)

Transform32.addChildren(ProtoInstance43)

ProtoBody31.addChildren(Transform32)

ProtoDeclare23.setProtoBody(ProtoBody31)

Scene7.addChildren(ProtoDeclare23)
ProtoInstance47 = x3d.ProtoInstance()
ProtoInstance47.setName("three")
ProtoInstance47.setDEF("threepi")
fieldValue48 = x3d.fieldValue()
fieldValue48.setName("ytranslation")
fieldValue48.setValue("0 0 0")

ProtoInstance47.addFieldValue(fieldValue48)
fieldValue49 = x3d.fieldValue()
fieldValue49.setName("myShape")
Shape50 = x3d.Shape()
Shape50.setDEF("box")
Box51 = x3d.Box()
Box51.setSize([1,1,1])

Shape50.setGeometry(Box51)
Appearance52 = x3d.Appearance()
Material53 = x3d.Material()
Material53.setDiffuseColor([0,1,0])

Appearance52.setMaterial(Material53)

Shape50.setAppearance(Appearance52)

fieldValue49.addChildren(Shape50)

ProtoInstance47.addFieldValue(fieldValue49)

Scene7.addChildren(ProtoInstance47)
Transform54 = x3d.Transform()
Transform54.setTranslation([0,2,0])
Shape55 = x3d.Shape()
Shape55.setUSE("box")

Transform54.addChild(Shape55)

Scene7.addChildren(Transform54)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/BoxEm2.new.python.x3d")
X3D0.toFileJSON("../data/BoxEm2.new.python.json")
