import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("rubikFurnace.x3d")

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
meta5.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/rubikFurnace.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("a green rubik cube")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()
NavigationInfo8.setType(["EXAMINE"])

Scene7.addChild(NavigationInfo8)
Viewpoint9 = x3d.Viewpoint()
Viewpoint9.setDescription("Rubiks Cube on Fire")
Viewpoint9.setPosition(x3d.doubleToFloat([0,0,12]))

Scene7.addChild(Viewpoint9)
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
Material17.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance16.setMaterial(Material17)

Shape14.setAppearance(Appearance16)

field13.addChild(Shape14)

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

ProtoBody18.addChild(Transform19)

ProtoDeclare10.setProtoBody(ProtoBody18)

Scene7.addChild(ProtoDeclare10)
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
Sphere28 = x3d.Sphere()

Shape27.setGeometry(Sphere28)
Appearance29 = x3d.Appearance()
Material30 = x3d.Material()
Material30.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance29.setMaterial(Material30)

Shape27.setAppearance(Appearance29)

field26.addChild(Shape27)

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

Transform32.addChild(ProtoInstance35)
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

Transform32.addChild(ProtoInstance39)
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

Transform32.addChild(ProtoInstance43)

ProtoBody31.addChild(Transform32)

ProtoDeclare23.setProtoBody(ProtoBody31)

Scene7.addChild(ProtoDeclare23)
ProtoDeclare47 = x3d.ProtoDeclare()
ProtoDeclare47.setName("nine")
ProtoInterface48 = x3d.ProtoInterface()
field49 = x3d.field()
field49.setName("ztranslation")
field49.setAccessType("inputOutput")
field49.setType("SFVec3f")
field49.setValue("0 0 0")

ProtoInterface48.addField(field49)
field50 = x3d.field()
field50.setName("myShape")
field50.setAccessType("inputOutput")
field50.setType("MFNode")
Shape51 = x3d.Shape()
Sphere52 = x3d.Sphere()

Shape51.setGeometry(Sphere52)
Appearance53 = x3d.Appearance()
Material54 = x3d.Material()
Material54.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance53.setMaterial(Material54)

Shape51.setAppearance(Appearance53)

field50.addChild(Shape51)

ProtoInterface48.addField(field50)

ProtoDeclare47.setProtoInterface(ProtoInterface48)
ProtoBody55 = x3d.ProtoBody()
Transform56 = x3d.Transform()
IS57 = x3d.IS()
connect58 = x3d.connect()
connect58.setNodeField("translation")
connect58.setProtoField("ztranslation")

IS57.addConnect(connect58)

Transform56.setIS(IS57)
ProtoInstance59 = x3d.ProtoInstance()
ProtoInstance59.setName("three")
fieldValue60 = x3d.fieldValue()
fieldValue60.setName("ytranslation")
fieldValue60.setValue("0 0 0")

ProtoInstance59.addFieldValue(fieldValue60)
IS61 = x3d.IS()
connect62 = x3d.connect()
connect62.setNodeField("myShape")
connect62.setProtoField("myShape")

IS61.addConnect(connect62)

ProtoInstance59.setIS(IS61)

Transform56.addChild(ProtoInstance59)
ProtoInstance63 = x3d.ProtoInstance()
ProtoInstance63.setName("three")
fieldValue64 = x3d.fieldValue()
fieldValue64.setName("ytranslation")
fieldValue64.setValue("0 2 0")

ProtoInstance63.addFieldValue(fieldValue64)
IS65 = x3d.IS()
connect66 = x3d.connect()
connect66.setNodeField("myShape")
connect66.setProtoField("myShape")

IS65.addConnect(connect66)

ProtoInstance63.setIS(IS65)

Transform56.addChild(ProtoInstance63)
ProtoInstance67 = x3d.ProtoInstance()
ProtoInstance67.setName("three")
fieldValue68 = x3d.fieldValue()
fieldValue68.setName("ytranslation")
fieldValue68.setValue("0 -2 0")

ProtoInstance67.addFieldValue(fieldValue68)
IS69 = x3d.IS()
connect70 = x3d.connect()
connect70.setNodeField("myShape")
connect70.setProtoField("myShape")

IS69.addConnect(connect70)

ProtoInstance67.setIS(IS69)

Transform56.addChild(ProtoInstance67)

ProtoBody55.addChild(Transform56)

ProtoDeclare47.setProtoBody(ProtoBody55)

Scene7.addChild(ProtoDeclare47)
ProtoDeclare71 = x3d.ProtoDeclare()
ProtoDeclare71.setName("twentyseven")
ProtoInterface72 = x3d.ProtoInterface()
field73 = x3d.field()
field73.setName("ttranslation")
field73.setAccessType("inputOutput")
field73.setType("SFVec3f")
field73.setValue("0 0 0")

ProtoInterface72.addField(field73)
field74 = x3d.field()
field74.setName("myShape")
field74.setAccessType("inputOutput")
field74.setType("MFNode")
Shape75 = x3d.Shape()
Sphere76 = x3d.Sphere()

Shape75.setGeometry(Sphere76)
Appearance77 = x3d.Appearance()
Material78 = x3d.Material()
Material78.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance77.setMaterial(Material78)

Shape75.setAppearance(Appearance77)

field74.addChild(Shape75)

ProtoInterface72.addField(field74)

ProtoDeclare71.setProtoInterface(ProtoInterface72)
ProtoBody79 = x3d.ProtoBody()
Transform80 = x3d.Transform()
IS81 = x3d.IS()
connect82 = x3d.connect()
connect82.setNodeField("translation")
connect82.setProtoField("ttranslation")

IS81.addConnect(connect82)

Transform80.setIS(IS81)
ProtoInstance83 = x3d.ProtoInstance()
ProtoInstance83.setName("nine")
fieldValue84 = x3d.fieldValue()
fieldValue84.setName("ztranslation")
fieldValue84.setValue("0 0 0")

ProtoInstance83.addFieldValue(fieldValue84)
IS85 = x3d.IS()
connect86 = x3d.connect()
connect86.setNodeField("myShape")
connect86.setProtoField("myShape")

IS85.addConnect(connect86)

ProtoInstance83.setIS(IS85)

Transform80.addChild(ProtoInstance83)
ProtoInstance87 = x3d.ProtoInstance()
ProtoInstance87.setName("nine")
fieldValue88 = x3d.fieldValue()
fieldValue88.setName("ztranslation")
fieldValue88.setValue("0 0 2")

ProtoInstance87.addFieldValue(fieldValue88)
IS89 = x3d.IS()
connect90 = x3d.connect()
connect90.setNodeField("myShape")
connect90.setProtoField("myShape")

IS89.addConnect(connect90)

ProtoInstance87.setIS(IS89)

Transform80.addChild(ProtoInstance87)
ProtoInstance91 = x3d.ProtoInstance()
ProtoInstance91.setName("nine")
fieldValue92 = x3d.fieldValue()
fieldValue92.setName("ztranslation")
fieldValue92.setValue("0 0 -2")

ProtoInstance91.addFieldValue(fieldValue92)
IS93 = x3d.IS()
connect94 = x3d.connect()
connect94.setNodeField("myShape")
connect94.setProtoField("myShape")

IS93.addConnect(connect94)

ProtoInstance91.setIS(IS93)

Transform80.addChild(ProtoInstance91)

ProtoBody79.addChild(Transform80)

ProtoDeclare71.setProtoBody(ProtoBody79)

Scene7.addChild(ProtoDeclare71)
ProtoInstance95 = x3d.ProtoInstance()
ProtoInstance95.setName("twentyseven")
fieldValue96 = x3d.fieldValue()
fieldValue96.setName("ttranslation")
fieldValue96.setValue("0 0 0")

ProtoInstance95.addFieldValue(fieldValue96)
fieldValue97 = x3d.fieldValue()
fieldValue97.setName("myShape")
Group98 = x3d.Group()
Shape99 = x3d.Shape()
IndexedFaceSet100 = x3d.IndexedFaceSet()
IndexedFaceSet100.setConvex(False)
IndexedFaceSet100.setCoordIndex([0,1,2,-1,0,2,3,-1,7,6,5,4,-1,0,4,5,1,-1,1,5,6,2,-1,2,6,7,3,-1,3,7,4,0])
IndexedFaceSet100.setColorIndex([0,1,2,-1,0,2,3,-1,7,6,5,4,-1,0,4,5,1,-1,1,5,6,2,-1,2,6,7,3,-1,3,7,4,0])
Coordinate101 = x3d.Coordinate()
Coordinate101.setPoint(x3d.doubleToFloat([0,0,0,0,0,1,0,1,1,0,1,0,1,0,0,1,0,1,1,1,1,1,1,0]))

IndexedFaceSet100.setCoord(Coordinate101)
Color102 = x3d.Color()
Color102.setColor(x3d.doubleToFloat([1,0,0,1,0,0,1,0,0,1,0,0,0,0,1,0,0,1,0,0,1,0,0,1]))

IndexedFaceSet100.setColor(Color102)

Shape99.setGeometry(IndexedFaceSet100)

Group98.addChild(Shape99)
Shape103 = x3d.Shape()
IndexedLineSet104 = x3d.IndexedLineSet()
IndexedLineSet104.setCoordIndex([0,1,-1,1,2,-1,2,3,-1,3,0,-1,2,0,-1])
Coordinate105 = x3d.Coordinate()
Coordinate105.setPoint(x3d.doubleToFloat([0,0,0,0,0,1,0,1,1,0,1,0,1,0,0,1,0,1,1,1,1,1,1,0]))

IndexedLineSet104.setCoord(Coordinate105)
Color106 = x3d.Color()
Color106.setColor(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1,1,1,1,0,0,0]))

IndexedLineSet104.setColor(Color106)

Shape103.setGeometry(IndexedLineSet104)

Group98.addChild(Shape103)

fieldValue97.addChild(Group98)

ProtoInstance95.addFieldValue(fieldValue97)

Scene7.addChild(ProtoInstance95)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/rubikPly.new.graalpy.x3d")
X3D0.toFileJSON("../data/rubikPly.new.graalpy.json")
