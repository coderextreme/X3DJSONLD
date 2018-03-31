# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("ArchPrototype.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("description")
meta3.setContent("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("description")
meta4.setContent("Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information.")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("creator")
meta5.setContent("Michele Foti, Don Brutzman")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("created")
meta6.setContent("15 December 2014")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("modified")
meta7.setContent("27 November 2015")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("reference")
meta8.setContent("ArchModelingDiagrams.pdf")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("reference")
meta9.setContent("https://en.wikipedia.org/wiki/Arch")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("identifier")
meta10.setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d")

head1.addMeta(meta10)
meta11 = metaObject()
meta11.setName("generator")
meta11.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta11)
meta12 = metaObject()
meta12.setName("license")
meta12.setContent("../license.html")

head1.addMeta(meta12)
X3D0.setHead(head1)
Scene13 = SceneObject()

ProtoDeclare14 = ProtoDeclareObject()
ProtoDeclare14.setName("ArchPrototype")
ProtoDeclare14.setAppinfo("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.")

ProtoInterface15 = ProtoInterfaceObject()


ProtoInterface15.addComments(CommentsBlock("""COLOR OF ARCH"""))

ProtoInterface15.addComments(CommentsBlock("""INPUT PARAMETERS"""))

ProtoInterface15.addComments(CommentsBlock("""General parameters: measures in meters"""))

ProtoInterface15.addComments(CommentsBlock("""Parameters to create to create shapes related to arch: put true to apply"""))
field16 = fieldObject()
field16.setType(fieldObject.TYPE_SFCOLOR)
field16.setName("diffuseColor")
field16.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field16.setAppinfo("color of arch")
field16.setValue("0.2 0.8 0.8")

ProtoInterface15.addField(field16)
field17 = fieldObject()
field17.setType(fieldObject.TYPE_SFCOLOR)
field17.setName("emissiveColor")
field17.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field17.setAppinfo("color of arch")
field17.setValue("0.2 0.8 0.8")

ProtoInterface15.addField(field17)
field18 = fieldObject()
field18.setType(fieldObject.TYPE_SFFLOAT)
field18.setName("clearSpanWidth")
field18.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field18.setAppinfo("clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference")
field18.setValue("4")

ProtoInterface15.addField(field18)
field19 = fieldObject()
field19.setType(fieldObject.TYPE_SFFLOAT)
field19.setName("riseHeight")
field19.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field19.setAppinfo("riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference")
field19.setValue("2")

ProtoInterface15.addField(field19)
field20 = fieldObject()
field20.setType(fieldObject.TYPE_SFFLOAT)
field20.setName("depth")
field20.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field20.setAppinfo("depth")
field20.setValue("3")

ProtoInterface15.addField(field20)
field21 = fieldObject()
field21.setType(fieldObject.TYPE_SFFLOAT)
field21.setName("topAbutmentHeight")
field21.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field21.setAppinfo("topAbutmentHeight:topAbutmentHeight=0 means no topAbutment")
field21.setValue("0.5")

ProtoInterface15.addField(field21)
field22 = fieldObject()
field22.setType(fieldObject.TYPE_SFFLOAT)
field22.setName("pierWidth")
field22.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field22.setAppinfo("pierWidth:pierWidtht=0 means no pierWidth")
field22.setValue("0.5")

ProtoInterface15.addField(field22)
field23 = fieldObject()
field23.setType(fieldObject.TYPE_SFFLOAT)
field23.setName("pierHeight")
field23.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field23.setAppinfo("pierHeight: pierHeight=0 means no pierHeight")
field23.setValue("1")

ProtoInterface15.addField(field23)
field24 = fieldObject()
field24.setType(fieldObject.TYPE_SFBOOL)
field24.setName("archHalf")
field24.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field24.setAppinfo("archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width")
field24.setValue("false")

ProtoInterface15.addField(field24)
field25 = fieldObject()
field25.setType(fieldObject.TYPE_SFFLOAT)
field25.setName("archHalfExtensionWidth")
field25.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field25.setAppinfo("archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.")
field25.setValue("0")

ProtoInterface15.addField(field25)
field26 = fieldObject()
field26.setType(fieldObject.TYPE_SFBOOL)
field26.setName("onlyIntrados")
field26.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field26.setAppinfo("onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.")
field26.setValue("false")

ProtoInterface15.addField(field26)
field27 = fieldObject()
field27.setType(fieldObject.TYPE_SFBOOL)
field27.setName("archFilled")
field27.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field27.setAppinfo("archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.")
field27.setValue("false")

ProtoInterface15.addField(field27)
field28 = fieldObject()
field28.setType(fieldObject.TYPE_SFBOOL)
field28.setName("archHalfFilled")
field28.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field28.setAppinfo("archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.")
field28.setValue("false")

ProtoInterface15.addField(field28)
field29 = fieldObject()
field29.setType(fieldObject.TYPE_SFBOOL)
field29.setName("lintel")
field29.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field29.setAppinfo("lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.")
field29.setValue("false")

ProtoInterface15.addField(field29)
ProtoDeclare14.setProtoInterface(ProtoInterface15)
ProtoBody30 = ProtoBodyObject()


ProtoBody30.addComments(CommentsBlock("""First node determines node type of this prototype"""))

ProtoBody30.addComments(CommentsBlock("""IndexedFaceset creates arch"""))
Transform31 = TransformObject()
Transform31.setDEF("ArchTransform")

Shape32 = ShapeObject()
Shape32.setDEF("Arch")


Shape32.addComments(CommentsBlock("""note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly"""))
IndexedFaceSet33 = IndexedFaceSetObject()
IndexedFaceSet33.setDEF("ArchIndex")
IndexedFaceSet33.setConvex(False)
IndexedFaceSet33.setSolid(False)

Coordinate34 = CoordinateObject()
Coordinate34.setDEF("ArchChord")

IndexedFaceSet33.setCoord(Coordinate34)
Shape32.setGeometry(IndexedFaceSet33)
Appearance35 = AppearanceObject()

Material36 = MaterialObject()
Material36.setDEF("MaterialNode")

IS37 = ISObject()

connect38 = connectObject()
connect38.setNodeField("emissiveColor")
connect38.setProtoField("emissiveColor")

IS37.addConnect(connect38)
connect39 = connectObject()
connect39.setNodeField("diffuseColor")
connect39.setProtoField("diffuseColor")

IS37.addConnect(connect39)
Material36.setIS(IS37)
Appearance35.setMaterial(Material36)
Shape32.setAppearance(Appearance35)
Transform31.addChild(Shape32)
ProtoBody30.addChild(Transform31)

ProtoBody30.addComments(CommentsBlock("""Subsequent nodes do not render, but still must be a valid X3D subgraph"""))

ProtoBody30.addComments(CommentsBlock("""This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs"""))
Script40 = ScriptObject()
Script40.setDEF("ArchPrototypeScript")
Script40.setUrl(["../node/ArchPrototypeScript.js"])


Script40.addComments(CommentsBlock("""INPUT PARAMETERS"""))

Script40.addComments(CommentsBlock("""General parameters"""))

Script40.addComments(CommentsBlock("""Parameters to create to create shapes related to arch: put true to apply"""))

Script40.addComments(CommentsBlock("""OUTPUT PARAMETERS"""))
field41 = fieldObject()
field41.setType(fieldObject.TYPE_SFFLOAT)
field41.setName("clearSpanWidth")
field41.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field41.setAppinfo("user or default input for clearSpanWidth parameter")

Script40.addField(field41)
field42 = fieldObject()
field42.setType(fieldObject.TYPE_SFFLOAT)
field42.setName("riseHeight")
field42.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field42.setAppinfo("user or default input for riseHeight parameter")

Script40.addField(field42)
field43 = fieldObject()
field43.setType(fieldObject.TYPE_SFFLOAT)
field43.setName("depth")
field43.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field43.setAppinfo("user or default input for depth parameter")

Script40.addField(field43)
field44 = fieldObject()
field44.setType(fieldObject.TYPE_SFFLOAT)
field44.setName("topAbutmentHeight")
field44.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field44.setAppinfo("user or default input for topAbutmentHeight parameter")

Script40.addField(field44)
field45 = fieldObject()
field45.setType(fieldObject.TYPE_SFFLOAT)
field45.setName("pierWidth")
field45.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field45.setAppinfo("user or default input for pierWidth parameter")

Script40.addField(field45)
field46 = fieldObject()
field46.setType(fieldObject.TYPE_SFFLOAT)
field46.setName("pierHeight")
field46.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field46.setAppinfo("user or default input for pierHeight parameter")

Script40.addField(field46)
field47 = fieldObject()
field47.setType(fieldObject.TYPE_SFBOOL)
field47.setName("archHalf")
field47.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field47.setAppinfo("user or default input for archHalf parameter")

Script40.addField(field47)
field48 = fieldObject()
field48.setType(fieldObject.TYPE_SFFLOAT)
field48.setName("archHalfExtensionWidth")
field48.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field48.setAppinfo("user or default input for archHalfExtensionWidth parameter")

Script40.addField(field48)
field49 = fieldObject()
field49.setType(fieldObject.TYPE_SFBOOL)
field49.setName("onlyIntrados")
field49.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field49.setAppinfo("user or default input for onlyIntrados parameter")

Script40.addField(field49)
field50 = fieldObject()
field50.setType(fieldObject.TYPE_SFBOOL)
field50.setName("archFilled")
field50.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field50.setAppinfo("user or default input for archFilled parameter")

Script40.addField(field50)
field51 = fieldObject()
field51.setType(fieldObject.TYPE_SFBOOL)
field51.setName("archHalfFilled")
field51.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field51.setAppinfo("user or default input for archHalfFilled parameter")

Script40.addField(field51)
field52 = fieldObject()
field52.setType(fieldObject.TYPE_SFBOOL)
field52.setName("lintel")
field52.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field52.setAppinfo("user or default input for lintel parameter")

Script40.addField(field52)
field53 = fieldObject()
field53.setType(fieldObject.TYPE_SFVEC3F)
field53.setName("computedScale")
field53.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field53.setAppinfo("computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth")

Script40.addField(field53)
field54 = fieldObject()
field54.setType(fieldObject.TYPE_MFVEC3F)
field54.setName("pointOut")
field54.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field54.setAppinfo("send computed points to the Coordinate node")

Script40.addField(field54)
field55 = fieldObject()
field55.setType(fieldObject.TYPE_MFINT32)
field55.setName("indexOut")
field55.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field55.setAppinfo("send computed indices to the IndexedFaceSet node")

Script40.addField(field55)
IS56 = ISObject()

connect57 = connectObject()
connect57.setNodeField("clearSpanWidth")
connect57.setProtoField("clearSpanWidth")

IS56.addConnect(connect57)
connect58 = connectObject()
connect58.setNodeField("riseHeight")
connect58.setProtoField("riseHeight")

IS56.addConnect(connect58)
connect59 = connectObject()
connect59.setNodeField("depth")
connect59.setProtoField("depth")

IS56.addConnect(connect59)
connect60 = connectObject()
connect60.setNodeField("pierWidth")
connect60.setProtoField("pierWidth")

IS56.addConnect(connect60)
connect61 = connectObject()
connect61.setNodeField("topAbutmentHeight")
connect61.setProtoField("topAbutmentHeight")

IS56.addConnect(connect61)
connect62 = connectObject()
connect62.setNodeField("pierHeight")
connect62.setProtoField("pierHeight")

IS56.addConnect(connect62)
connect63 = connectObject()
connect63.setNodeField("archHalf")
connect63.setProtoField("archHalf")

IS56.addConnect(connect63)
connect64 = connectObject()
connect64.setNodeField("archHalfExtensionWidth")
connect64.setProtoField("archHalfExtensionWidth")

IS56.addConnect(connect64)
connect65 = connectObject()
connect65.setNodeField("onlyIntrados")
connect65.setProtoField("onlyIntrados")

IS56.addConnect(connect65)
connect66 = connectObject()
connect66.setNodeField("archFilled")
connect66.setProtoField("archFilled")

IS56.addConnect(connect66)
connect67 = connectObject()
connect67.setNodeField("archHalfFilled")
connect67.setProtoField("archHalfFilled")

IS56.addConnect(connect67)
connect68 = connectObject()
connect68.setNodeField("lintel")
connect68.setProtoField("lintel")

IS56.addConnect(connect68)
Script40.setIS(IS56)
ProtoBody30.addChild(Script40)
ROUTE69 = ROUTEObject()
ROUTE69.setFromField("computedScale")
ROUTE69.setFromNode("ArchPrototypeScript")
ROUTE69.setToField("scale")
ROUTE69.setToNode("ArchTransform")

ProtoBody30.addChild(ROUTE69)
ROUTE70 = ROUTEObject()
ROUTE70.setFromField("pointOut")
ROUTE70.setFromNode("ArchPrototypeScript")
ROUTE70.setToField("point")
ROUTE70.setToNode("ArchChord")

ProtoBody30.addChild(ROUTE70)
ROUTE71 = ROUTEObject()
ROUTE71.setFromField("indexOut")
ROUTE71.setFromNode("ArchPrototypeScript")
ROUTE71.setToField("set_coordIndex")
ROUTE71.setToNode("ArchIndex")

ProtoBody30.addChild(ROUTE71)
ProtoDeclare14.setProtoBody(ProtoBody30)
Scene13.addChild(ProtoDeclare14)
ProtoInstance72 = ProtoInstanceObject()
ProtoInstance72.setName("ArchPrototype")
ProtoInstance72.setDEF("ArchInstance")

fieldValue73 = fieldValueObject()
fieldValue73.setName("diffuseColor")
fieldValue73.setValue("0.5 0.3 0.6")

ProtoInstance72.addFieldValue(fieldValue73)
fieldValue74 = fieldValueObject()
fieldValue74.setName("emissiveColor")
fieldValue74.setValue("0.5 0.3 0.6")

ProtoInstance72.addFieldValue(fieldValue74)
fieldValue75 = fieldValueObject()
fieldValue75.setName("clearSpanWidth")
fieldValue75.setValue("5")

ProtoInstance72.addFieldValue(fieldValue75)
fieldValue76 = fieldValueObject()
fieldValue76.setName("riseHeight")
fieldValue76.setValue("2.5")

ProtoInstance72.addFieldValue(fieldValue76)
fieldValue77 = fieldValueObject()
fieldValue77.setName("depth")
fieldValue77.setValue("2")

ProtoInstance72.addFieldValue(fieldValue77)
fieldValue78 = fieldValueObject()
fieldValue78.setName("topAbutmentHeight")
fieldValue78.setValue("0.6")

ProtoInstance72.addFieldValue(fieldValue78)
fieldValue79 = fieldValueObject()
fieldValue79.setName("pierWidth")
fieldValue79.setValue("1")

ProtoInstance72.addFieldValue(fieldValue79)
fieldValue80 = fieldValueObject()
fieldValue80.setName("pierHeight")
fieldValue80.setValue("2")

ProtoInstance72.addFieldValue(fieldValue80)
Scene13.addChild(ProtoInstance72)

Scene13.addComments(CommentsBlock("""Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare)"""))
Inline81 = InlineObject()
Inline81.setDEF("CoordinateAxes")
Inline81.setUrl(["../data/CoordinateAxes.x3d"])

Scene13.addChild(Inline81)
X3D0.setScene(Scene13)

X3D0.toFileX3D("../data/ArchPrototype.new.x3d")
