import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("arc1.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("Lost, Doug Sanden I think")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("a generic proto to connect two objects")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
Viewpoint8 = x3d.Viewpoint()
Viewpoint8.setPosition([0,0,5])
Viewpoint8.setDescription("Only Viewpoint")

Scene7.addChildren(Viewpoint8)
Background9 = x3d.Background()
Background9.setSkyColor([0.4,0.4,0.4])
Background9.setTransparency(0)

Scene7.addChildren(Background9)
ProtoDeclare10 = x3d.ProtoDeclare()
ProtoDeclare10.setName("point")
ProtoInterface11 = x3d.ProtoInterface()
field12 = x3d.field()
field12.setName("translation")
field12.setAccessType("inputOutput")
field12.setType("SFVec3f")
field12.setValue("0 0 0")

ProtoInterface11.addField(field12)

ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody13 = x3d.ProtoBody()
Transform14 = x3d.Transform()
Transform14.setDEF("node")
Transform14.setBboxCenter([0,0,0])
Transform14.setBboxSize([-1,-1,-1])
IS15 = x3d.IS()
connect16 = x3d.connect()
connect16.setNodeField("translation")
connect16.setProtoField("translation")

IS15.addConnect(connect16)

Transform14.setIS(IS15)
Shape17 = x3d.Shape()
Shape17.setBboxCenter([0,0,0])
Shape17.setBboxSize([-1,-1,-1])
Sphere18 = x3d.Sphere()
Sphere18.setRadius(0.1)

Shape17.setGeometry(Sphere18)
Appearance19 = x3d.Appearance()
Material20 = x3d.Material()
Material20.setDiffuseColor([1,0,0])

Appearance19.setMaterial(Material20)

Shape17.setAppearance(Appearance19)

Transform14.addChildren(Shape17)
PositionInterpolator21 = x3d.PositionInterpolator()
PositionInterpolator21.setDEF("PI1")
PositionInterpolator21.setKey([0,1])
PositionInterpolator21.setKeyValue([0,0,0,0,5,0])

Transform14.addChildren(PositionInterpolator21)
TimeSensor22 = x3d.TimeSensor()
TimeSensor22.setDEF("CL1")
TimeSensor22.setCycleInterval(3)
TimeSensor22.setLoop(True)

Transform14.addChildren(TimeSensor22)
ROUTE23 = x3d.ROUTE()
ROUTE23.setFromNode("CL1")
ROUTE23.setFromField("cycleTime")
ROUTE23.setToNode("MB1")
ROUTE23.setToField("set_location")

Transform14.addChildren(ROUTE23)
ROUTE24 = x3d.ROUTE()
ROUTE24.setFromNode("CL1")
ROUTE24.setFromField("fraction_changed")
ROUTE24.setToNode("PI1")
ROUTE24.setToField("set_fraction")

Transform14.addChildren(ROUTE24)
ROUTE25 = x3d.ROUTE()
ROUTE25.setFromNode("MB1")
ROUTE25.setFromField("keyValue")
ROUTE25.setToNode("PI1")
ROUTE25.setToField("keyValue")

Transform14.addChildren(ROUTE25)
ROUTE26 = x3d.ROUTE()
ROUTE26.setFromNode("PI1")
ROUTE26.setFromField("value_changed")
ROUTE26.setToNode("node")
ROUTE26.setToField("set_translation")

Transform14.addChildren(ROUTE26)
ROUTE27 = x3d.ROUTE()
ROUTE27.setFromNode("MB1")
ROUTE27.setFromField("translation_changed")
ROUTE27.setToNode("node")
ROUTE27.setToField("set_translation")

Transform14.addChildren(ROUTE27)
X3DScript28 = x3d.X3DScript()
X3DScript28.setDEF("MB1")
field29 = x3d.field()
field29.setName("translation")
field29.setAccessType("inputOutput")
field29.setType("SFVec3f")
field29.setValue("50 50 0")

X3DScript28.addField(field29)
field30 = x3d.field()
field30.setName("old")
field30.setAccessType("inputOutput")
field30.setType("SFVec3f")
field30.setValue("0 0 0")

X3DScript28.addField(field30)
field31 = x3d.field()
field31.setName("set_location")
field31.setAccessType("inputOnly")
field31.setType("SFTime")

X3DScript28.addField(field31)
field32 = x3d.field()
field32.setName("keyValue")
field32.setAccessType("inputOutput")
field32.setType("MFVec3f")
field32.setValue("0 0 0 0 5 0")

X3DScript28.addField(field32)

Transform14.addX3DScript(X3DScript28)

ProtoBody13.addChildren(Transform14)

ProtoDeclare10.setProtoBody(ProtoBody13)

Scene7.addChildren(ProtoDeclare10)
Transform33 = x3d.Transform()
Transform33.setDEF("G1")
Transform33.setBboxCenter([0,0,0])
Transform33.setBboxSize([-1,-1,-1])
ProtoInstance34 = x3d.ProtoInstance()
ProtoInstance34.setName("point")

Transform33.addChildren(ProtoInstance34)

Scene7.addChildren(Transform33)
Transform35 = x3d.Transform()
Transform35.setDEF("G2")
Transform35.setBboxCenter([0,0,0])
Transform35.setBboxSize([-1,-1,-1])
ProtoInstance36 = x3d.ProtoInstance()
ProtoInstance36.setName("point")

Transform35.addChildren(ProtoInstance36)

Scene7.addChildren(Transform35)
Transform37 = x3d.Transform()
Transform37.setDEF("transC1")
Transform37.setBboxCenter([0,0,0])
Transform37.setBboxSize([-1,-1,-1])
Transform38 = x3d.Transform()
Transform38.setDEF("rotscaleC1")
Transform38.setBboxCenter([0,0,0])
Transform38.setBboxSize([-1,-1,-1])
Shape39 = x3d.Shape()
Shape39.setBboxCenter([0,0,0])
Shape39.setBboxSize([-1,-1,-1])
Appearance40 = x3d.Appearance()
Material41 = x3d.Material()
Material41.setDiffuseColor([0.2,0.7,0.7])
Material41.setTransparency(0.5)

Appearance40.setMaterial(Material41)

Shape39.setAppearance(Appearance40)
Cylinder42 = x3d.Cylinder()
Cylinder42.setRadius(0.05)

Shape39.setGeometry(Cylinder42)

Transform38.addChildren(Shape39)

Transform37.addChildren(Transform38)

Scene7.addChildren(Transform37)
ProtoDeclare43 = x3d.ProtoDeclare()
ProtoDeclare43.setName("x3dconnector")
ProtoInterface44 = x3d.ProtoInterface()
field45 = x3d.field()
field45.setName("startnode")
field45.setAccessType("initializeOnly")
field45.setType("SFNode")

ProtoInterface44.addField(field45)
field46 = x3d.field()
field46.setName("endnode")
field46.setAccessType("initializeOnly")
field46.setType("SFNode")

ProtoInterface44.addField(field46)
field47 = x3d.field()
field47.setName("transnode")
field47.setAccessType("inputOutput")
field47.setType("SFNode")

ProtoInterface44.addField(field47)
field48 = x3d.field()
field48.setName("rotscalenode")
field48.setAccessType("inputOutput")
field48.setType("SFNode")

ProtoInterface44.addField(field48)
field49 = x3d.field()
field49.setName("set_startpoint")
field49.setAccessType("inputOnly")
field49.setType("SFVec3f")

ProtoInterface44.addField(field49)
field50 = x3d.field()
field50.setName("set_endpoint")
field50.setAccessType("inputOnly")
field50.setType("SFVec3f")

ProtoInterface44.addField(field50)

ProtoDeclare43.setProtoInterface(ProtoInterface44)
ProtoBody51 = x3d.ProtoBody()
X3DScript52 = x3d.X3DScript()
X3DScript52.setDEF("S1")
field53 = x3d.field()
field53.setName("startnode")
field53.setAccessType("initializeOnly")
field53.setType("SFNode")

X3DScript52.addField(field53)
field54 = x3d.field()
field54.setName("endnode")
field54.setAccessType("initializeOnly")
field54.setType("SFNode")

X3DScript52.addField(field54)
field55 = x3d.field()
field55.setName("transnode")
field55.setAccessType("initializeOnly")
field55.setType("SFNode")

X3DScript52.addField(field55)
field56 = x3d.field()
field56.setName("rotscalenode")
field56.setAccessType("initializeOnly")
field56.setType("SFNode")

X3DScript52.addField(field56)
field57 = x3d.field()
field57.setName("set_startpoint")
field57.setAccessType("inputOnly")
field57.setType("SFVec3f")

X3DScript52.addField(field57)
field58 = x3d.field()
field58.setName("set_endpoint")
field58.setAccessType("inputOnly")
field58.setType("SFVec3f")

X3DScript52.addField(field58)
IS59 = x3d.IS()
connect60 = x3d.connect()
connect60.setNodeField("startnode")
connect60.setProtoField("startnode")

IS59.addConnect(connect60)
connect61 = x3d.connect()
connect61.setNodeField("endnode")
connect61.setProtoField("endnode")

IS59.addConnect(connect61)
connect62 = x3d.connect()
connect62.setNodeField("transnode")
connect62.setProtoField("transnode")

IS59.addConnect(connect62)
connect63 = x3d.connect()
connect63.setNodeField("rotscalenode")
connect63.setProtoField("rotscalenode")

IS59.addConnect(connect63)
connect64 = x3d.connect()
connect64.setNodeField("set_startpoint")
connect64.setProtoField("set_startpoint")

IS59.addConnect(connect64)
connect65 = x3d.connect()
connect65.setNodeField("set_endpoint")
connect65.setProtoField("set_endpoint")

IS59.addConnect(connect65)

X3DScript52.setIS(IS59)

ProtoBody51.setX3DScript(X3DScript52)

ProtoDeclare43.setProtoBody(ProtoBody51)

Scene7.addChildren(ProtoDeclare43)
ProtoInstance66 = x3d.ProtoInstance()
ProtoInstance66.setName("x3dconnector")
ProtoInstance66.setDEF("connector1")
fieldValue67 = x3d.fieldValue()
fieldValue67.setName("startnode")
Transform68 = x3d.Transform()
Transform68.setUSE("G1")

fieldValue67.addChildren(Transform68)

ProtoInstance66.addFieldValue(fieldValue67)
fieldValue69 = x3d.fieldValue()
fieldValue69.setName("endnode")
Transform70 = x3d.Transform()
Transform70.setUSE("G2")

fieldValue69.addChildren(Transform70)

ProtoInstance66.addFieldValue(fieldValue69)
fieldValue71 = x3d.fieldValue()
fieldValue71.setName("transnode")
Transform72 = x3d.Transform()
Transform72.setUSE("transC1")

fieldValue71.addChildren(Transform72)

ProtoInstance66.addFieldValue(fieldValue71)
fieldValue73 = x3d.fieldValue()
fieldValue73.setName("rotscalenode")
Transform74 = x3d.Transform()
Transform74.setUSE("rotscaleC1")

fieldValue73.addChildren(Transform74)

ProtoInstance66.addFieldValue(fieldValue73)
fieldValue75 = x3d.fieldValue()
fieldValue75.setName("set_startpoint")

ProtoInstance66.addFieldValue(fieldValue75)
fieldValue76 = x3d.fieldValue()
fieldValue76.setName("set_endpoint")

ProtoInstance66.addFieldValue(fieldValue76)

Scene7.addChildren(ProtoInstance66)
ROUTE77 = x3d.ROUTE()
ROUTE77.setFromNode("G1")
ROUTE77.setFromField("translation_changed")
ROUTE77.setToNode("connector1")
ROUTE77.setToField("set_startpoint")

Scene7.addChildren(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.setFromNode("G2")
ROUTE78.setFromField("translation_changed")
ROUTE78.setToNode("connector1")
ROUTE78.setToField("set_endpoint")

Scene7.addChildren(ROUTE78)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/arc1_RoundTrip.x3d")
