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
meta2.setContent("ArchPrototype.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information.")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("Michele Foti, Don Brutzman")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("created")
meta6.setContent("15 December 2014")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("27 November 2015")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("ArchModelingDiagrams.pdf")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("https://en.wikipedia.org/wiki/Arch")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("identifier")
meta10.setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("generator")
meta11.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("license")
meta12.setContent("../license.html")

head1.addMeta(meta12)

X3D0.setHead(head1)
Scene13 = x3d.Scene()
ProtoDeclare14 = x3d.ProtoDeclare()
ProtoDeclare14.setName("ArchPrototype")
ProtoDeclare14.setAppinfo("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.")
ProtoInterface15 = x3d.ProtoInterface()

ProtoInterface15.addComments(x3d.CommentsBlock('''COLOR OF ARCH'''))

ProtoInterface15.addComments(x3d.CommentsBlock('''INPUT PARAMETERS'''))

ProtoInterface15.addComments(x3d.CommentsBlock('''General parameters: measures in meters'''))

ProtoInterface15.addComments(x3d.CommentsBlock('''Parameters to create to create shapes related to arch: put true to apply'''))
field16 = x3d.field()
field16.setName("diffuseColor")
field16.setAccessType("inputOutput")
field16.setAppinfo("color of arch")
field16.setType("SFColor")
field16.setValue("0.2 0.8 0.8")

ProtoInterface15.addField(field16)
field17 = x3d.field()
field17.setName("emissiveColor")
field17.setAccessType("inputOutput")
field17.setAppinfo("color of arch")
field17.setType("SFColor")
field17.setValue("0.2 0.8 0.8")

ProtoInterface15.addField(field17)
field18 = x3d.field()
field18.setName("clearSpanWidth")
field18.setAccessType("initializeOnly")
field18.setAppinfo("clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference")
field18.setType("SFFloat")
field18.setValue("4")

ProtoInterface15.addField(field18)
field19 = x3d.field()
field19.setName("riseHeight")
field19.setAccessType("initializeOnly")
field19.setAppinfo("riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference")
field19.setType("SFFloat")
field19.setValue("2")

ProtoInterface15.addField(field19)
field20 = x3d.field()
field20.setName("depth")
field20.setAccessType("initializeOnly")
field20.setAppinfo("depth")
field20.setType("SFFloat")
field20.setValue("3")

ProtoInterface15.addField(field20)
field21 = x3d.field()
field21.setName("topAbutmentHeight")
field21.setAccessType("initializeOnly")
field21.setAppinfo("topAbutmentHeight:topAbutmentHeight=0 means no topAbutment")
field21.setType("SFFloat")
field21.setValue("0.5")

ProtoInterface15.addField(field21)
field22 = x3d.field()
field22.setName("pierWidth")
field22.setAccessType("initializeOnly")
field22.setAppinfo("pierWidth:pierWidtht=0 means no pierWidth")
field22.setType("SFFloat")
field22.setValue("0.5")

ProtoInterface15.addField(field22)
field23 = x3d.field()
field23.setName("pierHeight")
field23.setAccessType("initializeOnly")
field23.setAppinfo("pierHeight: pierHeight=0 means no pierHeight")
field23.setType("SFFloat")
field23.setValue("1")

ProtoInterface15.addField(field23)
field24 = x3d.field()
field24.setName("archHalf")
field24.setAccessType("initializeOnly")
field24.setAppinfo("archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width")
field24.setType("SFBool")
field24.setValue("false")

ProtoInterface15.addField(field24)
field25 = x3d.field()
field25.setName("archHalfExtensionWidth")
field25.setAccessType("initializeOnly")
field25.setAppinfo("archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.")
field25.setType("SFFloat")
field25.setValue("0")

ProtoInterface15.addField(field25)
field26 = x3d.field()
field26.setName("onlyIntrados")
field26.setAccessType("initializeOnly")
field26.setAppinfo("onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.")
field26.setType("SFBool")
field26.setValue("false")

ProtoInterface15.addField(field26)
field27 = x3d.field()
field27.setName("archFilled")
field27.setAccessType("initializeOnly")
field27.setAppinfo("archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.")
field27.setType("SFBool")
field27.setValue("false")

ProtoInterface15.addField(field27)
field28 = x3d.field()
field28.setName("archHalfFilled")
field28.setAccessType("initializeOnly")
field28.setAppinfo("archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.")
field28.setType("SFBool")
field28.setValue("false")

ProtoInterface15.addField(field28)
field29 = x3d.field()
field29.setName("lintel")
field29.setAccessType("initializeOnly")
field29.setAppinfo("lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.")
field29.setType("SFBool")
field29.setValue("false")

ProtoInterface15.addField(field29)

ProtoDeclare14.setProtoInterface(ProtoInterface15)
ProtoBody30 = x3d.ProtoBody()

ProtoBody30.addComments(x3d.CommentsBlock('''First node determines node type of this prototype'''))

ProtoBody30.addComments(x3d.CommentsBlock('''IndexedFaceset creates arch'''))
Transform31 = x3d.Transform()
Transform31.setDEF("ArchTransform")
Shape32 = x3d.Shape()
Shape32.setDEF("Arch")

Shape32.addComments(x3d.CommentsBlock('''note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly'''))
IndexedFaceSet33 = x3d.IndexedFaceSet()
IndexedFaceSet33.setDEF("ArchIndex")
IndexedFaceSet33.setConvex(False)
IndexedFaceSet33.setSolid(False)
Coordinate34 = x3d.Coordinate()
Coordinate34.setDEF("ArchChord")

IndexedFaceSet33.setCoord(Coordinate34)

Shape32.setGeometry(IndexedFaceSet33)
Appearance35 = x3d.Appearance()
Material36 = x3d.Material()
Material36.setDEF("MaterialNode")
IS37 = x3d.IS()
connect38 = x3d.connect()
connect38.setNodeField("emissiveColor")
connect38.setProtoField("emissiveColor")

IS37.addConnect(connect38)
connect39 = x3d.connect()
connect39.setNodeField("diffuseColor")
connect39.setProtoField("diffuseColor")

IS37.addConnect(connect39)

Material36.setIS(IS37)

Appearance35.setMaterial(Material36)

Shape32.setAppearance(Appearance35)

Transform31.addChild(Shape32)

ProtoBody30.addChild(Transform31)

ProtoBody30.addComments(x3d.CommentsBlock('''Subsequent nodes do not render, but still must be a valid X3D subgraph'''))

ProtoBody30.addComments(x3d.CommentsBlock('''This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs'''))
Script40 = x3d.Script()
Script40.setDEF("ArchPrototypeScript")
Script40.setUrl(["../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"])

Script40.addComments(x3d.CommentsBlock('''INPUT PARAMETERS'''))

Script40.addComments(x3d.CommentsBlock('''General parameters'''))

Script40.addComments(x3d.CommentsBlock('''Parameters to create to create shapes related to arch: put true to apply'''))

Script40.addComments(x3d.CommentsBlock('''OUTPUT PARAMETERS'''))
field41 = x3d.field()
field41.setName("clearSpanWidth")
field41.setAccessType("initializeOnly")
field41.setAppinfo("user or default input for clearSpanWidth parameter")
field41.setType("SFFloat")

Script40.addField(field41)
field42 = x3d.field()
field42.setName("riseHeight")
field42.setAccessType("initializeOnly")
field42.setAppinfo("user or default input for riseHeight parameter")
field42.setType("SFFloat")

Script40.addField(field42)
field43 = x3d.field()
field43.setName("depth")
field43.setAccessType("initializeOnly")
field43.setAppinfo("user or default input for depth parameter")
field43.setType("SFFloat")

Script40.addField(field43)
field44 = x3d.field()
field44.setName("topAbutmentHeight")
field44.setAccessType("initializeOnly")
field44.setAppinfo("user or default input for topAbutmentHeight parameter")
field44.setType("SFFloat")

Script40.addField(field44)
field45 = x3d.field()
field45.setName("pierWidth")
field45.setAccessType("initializeOnly")
field45.setAppinfo("user or default input for pierWidth parameter")
field45.setType("SFFloat")

Script40.addField(field45)
field46 = x3d.field()
field46.setName("pierHeight")
field46.setAccessType("initializeOnly")
field46.setAppinfo("user or default input for pierHeight parameter")
field46.setType("SFFloat")

Script40.addField(field46)
field47 = x3d.field()
field47.setName("archHalf")
field47.setAccessType("initializeOnly")
field47.setAppinfo("user or default input for archHalf parameter")
field47.setType("SFBool")

Script40.addField(field47)
field48 = x3d.field()
field48.setName("archHalfExtensionWidth")
field48.setAccessType("initializeOnly")
field48.setAppinfo("user or default input for archHalfExtensionWidth parameter")
field48.setType("SFFloat")

Script40.addField(field48)
field49 = x3d.field()
field49.setName("onlyIntrados")
field49.setAccessType("initializeOnly")
field49.setAppinfo("user or default input for onlyIntrados parameter")
field49.setType("SFBool")

Script40.addField(field49)
field50 = x3d.field()
field50.setName("archFilled")
field50.setAccessType("initializeOnly")
field50.setAppinfo("user or default input for archFilled parameter")
field50.setType("SFBool")

Script40.addField(field50)
field51 = x3d.field()
field51.setName("archHalfFilled")
field51.setAccessType("initializeOnly")
field51.setAppinfo("user or default input for archHalfFilled parameter")
field51.setType("SFBool")

Script40.addField(field51)
field52 = x3d.field()
field52.setName("lintel")
field52.setAccessType("initializeOnly")
field52.setAppinfo("user or default input for lintel parameter")
field52.setType("SFBool")

Script40.addField(field52)
field53 = x3d.field()
field53.setName("computedScale")
field53.setAccessType("outputOnly")
field53.setAppinfo("computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth")
field53.setType("SFVec3f")

Script40.addField(field53)
field54 = x3d.field()
field54.setName("pointOut")
field54.setAccessType("outputOnly")
field54.setAppinfo("send computed points to the Coordinate node")
field54.setType("MFVec3f")

Script40.addField(field54)
field55 = x3d.field()
field55.setName("indexOut")
field55.setAccessType("outputOnly")
field55.setAppinfo("send computed indices to the IndexedFaceSet node")
field55.setType("MFInt32")

Script40.addField(field55)
IS56 = x3d.IS()
connect57 = x3d.connect()
connect57.setNodeField("clearSpanWidth")
connect57.setProtoField("clearSpanWidth")

IS56.addConnect(connect57)
connect58 = x3d.connect()
connect58.setNodeField("riseHeight")
connect58.setProtoField("riseHeight")

IS56.addConnect(connect58)
connect59 = x3d.connect()
connect59.setNodeField("depth")
connect59.setProtoField("depth")

IS56.addConnect(connect59)
connect60 = x3d.connect()
connect60.setNodeField("pierWidth")
connect60.setProtoField("pierWidth")

IS56.addConnect(connect60)
connect61 = x3d.connect()
connect61.setNodeField("topAbutmentHeight")
connect61.setProtoField("topAbutmentHeight")

IS56.addConnect(connect61)
connect62 = x3d.connect()
connect62.setNodeField("pierHeight")
connect62.setProtoField("pierHeight")

IS56.addConnect(connect62)
connect63 = x3d.connect()
connect63.setNodeField("archHalf")
connect63.setProtoField("archHalf")

IS56.addConnect(connect63)
connect64 = x3d.connect()
connect64.setNodeField("archHalfExtensionWidth")
connect64.setProtoField("archHalfExtensionWidth")

IS56.addConnect(connect64)
connect65 = x3d.connect()
connect65.setNodeField("onlyIntrados")
connect65.setProtoField("onlyIntrados")

IS56.addConnect(connect65)
connect66 = x3d.connect()
connect66.setNodeField("archFilled")
connect66.setProtoField("archFilled")

IS56.addConnect(connect66)
connect67 = x3d.connect()
connect67.setNodeField("archHalfFilled")
connect67.setProtoField("archHalfFilled")

IS56.addConnect(connect67)
connect68 = x3d.connect()
connect68.setNodeField("lintel")
connect68.setProtoField("lintel")

IS56.addConnect(connect68)

Script40.setIS(IS56)

ProtoBody30.addChild(Script40)
ROUTE69 = x3d.ROUTE()
ROUTE69.setFromField("computedScale")
ROUTE69.setFromNode("ArchPrototypeScript")
ROUTE69.setToField("scale")
ROUTE69.setToNode("ArchTransform")

ProtoBody30.addChild(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.setFromField("pointOut")
ROUTE70.setFromNode("ArchPrototypeScript")
ROUTE70.setToField("point")
ROUTE70.setToNode("ArchChord")

ProtoBody30.addChild(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.setFromField("indexOut")
ROUTE71.setFromNode("ArchPrototypeScript")
ROUTE71.setToField("set_coordIndex")
ROUTE71.setToNode("ArchIndex")

ProtoBody30.addChild(ROUTE71)

ProtoDeclare14.setProtoBody(ProtoBody30)

Scene13.addChild(ProtoDeclare14)
ProtoInstance72 = x3d.ProtoInstance()
ProtoInstance72.setName("ArchPrototype")
ProtoInstance72.setDEF("ArchInstance")
fieldValue73 = x3d.fieldValue()
fieldValue73.setName("diffuseColor")
fieldValue73.setValue("0.5 0.3 0.6")

ProtoInstance72.addFieldValue(fieldValue73)
fieldValue74 = x3d.fieldValue()
fieldValue74.setName("emissiveColor")
fieldValue74.setValue("0.5 0.3 0.6")

ProtoInstance72.addFieldValue(fieldValue74)
fieldValue75 = x3d.fieldValue()
fieldValue75.setName("clearSpanWidth")
fieldValue75.setValue("5")

ProtoInstance72.addFieldValue(fieldValue75)
fieldValue76 = x3d.fieldValue()
fieldValue76.setName("riseHeight")
fieldValue76.setValue("2.5")

ProtoInstance72.addFieldValue(fieldValue76)
fieldValue77 = x3d.fieldValue()
fieldValue77.setName("depth")
fieldValue77.setValue("2")

ProtoInstance72.addFieldValue(fieldValue77)
fieldValue78 = x3d.fieldValue()
fieldValue78.setName("topAbutmentHeight")
fieldValue78.setValue("0.6")

ProtoInstance72.addFieldValue(fieldValue78)
fieldValue79 = x3d.fieldValue()
fieldValue79.setName("pierWidth")
fieldValue79.setValue("1")

ProtoInstance72.addFieldValue(fieldValue79)
fieldValue80 = x3d.fieldValue()
fieldValue80.setName("pierHeight")
fieldValue80.setValue("2")

ProtoInstance72.addFieldValue(fieldValue80)

Scene13.addChild(ProtoInstance72)

Scene13.addComments(x3d.CommentsBlock('''Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare)'''))
Inline81 = x3d.Inline()
Inline81.setDEF("CoordinateAxes")
Inline81.setUrl(["../data/CoordinateAxes.x3d"])

Scene13.addChild(Inline81)

X3D0.setScene(Scene13)
X3D0.toFileX3D("../data/ArchPrototype.new.graalpy.x3d")
X3D0.toFileJSON("../data/ArchPrototype.new.graalpy.json")
