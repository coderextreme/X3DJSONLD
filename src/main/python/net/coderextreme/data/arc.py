import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("arc")

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
meta5.setContent("https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d")

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
X3DScript27 = x3d.X3DScript()
X3DScript27.setDEF("MB1")
field28 = x3d.field()
field28.setName("translation")
field28.setAccessType("inputOutput")
field28.setType("SFVec3f")
field28.setValue("50 50 0")

X3DScript27.addField(field28)
field29 = x3d.field()
field29.setName("old")
field29.setAccessType("inputOutput")
field29.setType("SFVec3f")
field29.setValue("0 0 0")

X3DScript27.addField(field29)
field30 = x3d.field()
field30.setName("set_location")
field30.setAccessType("inputOnly")
field30.setType("SFTime")

X3DScript27.addField(field30)
field31 = x3d.field()
field31.setName("keyValue")
field31.setAccessType("inputOutput")
field31.setType("MFVec3f")
field31.setValue("0 0 0 0 5 0")

X3DScript27.addField(field31)

Transform14.addX3DScript(X3DScript27)

ProtoBody13.addChildren(Transform14)

ProtoDeclare10.setProtoBody(ProtoBody13)

Scene7.addChildren(ProtoDeclare10)
ProtoDeclare32 = x3d.ProtoDeclare()
ProtoDeclare32.setName("x3dconnector")
ProtoInterface33 = x3d.ProtoInterface()
field34 = x3d.field()
field34.setName("startnode")
field34.setAccessType("initializeOnly")
field34.setType("SFNode")

ProtoInterface33.addField(field34)
field35 = x3d.field()
field35.setName("endnode")
field35.setAccessType("initializeOnly")
field35.setType("SFNode")

ProtoInterface33.addField(field35)
field36 = x3d.field()
field36.setName("set_startpoint")
field36.setAccessType("inputOnly")
field36.setType("SFVec3f")

ProtoInterface33.addField(field36)
field37 = x3d.field()
field37.setName("set_endpoint")
field37.setAccessType("inputOnly")
field37.setType("SFVec3f")

ProtoInterface33.addField(field37)

ProtoDeclare32.setProtoInterface(ProtoInterface33)
ProtoBody38 = x3d.ProtoBody()
Group39 = x3d.Group()
Group39.setBboxCenter([0,0,0])
Group39.setBboxSize([-1,-1,-1])
Transform40 = x3d.Transform()
Transform40.setDEF("trans")
Transform40.setBboxCenter([0,0,0])
Transform40.setBboxSize([-1,-1,-1])
Transform41 = x3d.Transform()
Transform41.setDEF("rotscale")
Transform41.setBboxCenter([0,0,0])
Transform41.setBboxSize([-1,-1,-1])
Shape42 = x3d.Shape()
Shape42.setBboxCenter([0,0,0])
Shape42.setBboxSize([-1,-1,-1])
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()
Material44.setDiffuseColor([0.2,0.7,0.7])
Material44.setTransparency(0.5)

Appearance43.setMaterial(Material44)

Shape42.setAppearance(Appearance43)
Cylinder45 = x3d.Cylinder()
Cylinder45.setRadius(0.05)

Shape42.setGeometry(Cylinder45)

Transform41.addChildren(Shape42)

Transform40.addChildren(Transform41)

Group39.addChildren(Transform40)
X3DScript46 = x3d.X3DScript()
X3DScript46.setDEF("S1")
field47 = x3d.field()
field47.setName("startnode")
field47.setAccessType("initializeOnly")
field47.setType("SFNode")

X3DScript46.addField(field47)
field48 = x3d.field()
field48.setName("endnode")
field48.setAccessType("initializeOnly")
field48.setType("SFNode")

X3DScript46.addField(field48)
field49 = x3d.field()
field49.setName("position")
field49.setAccessType("inputOutput")
field49.setType("SFNode")
Transform50 = x3d.Transform()
Transform50.setUSE("trans")

field49.addChildren(Transform50)

X3DScript46.addField(field49)
field51 = x3d.field()
field51.setName("rotscale")
field51.setAccessType("inputOutput")
field51.setType("SFNode")
Transform52 = x3d.Transform()
Transform52.setUSE("rotscale")

field51.addChildren(Transform52)

X3DScript46.addField(field51)
field53 = x3d.field()
field53.setName("set_startpoint")
field53.setAccessType("inputOnly")
field53.setType("SFVec3f")

X3DScript46.addField(field53)
field54 = x3d.field()
field54.setName("set_endpoint")
field54.setAccessType("inputOnly")
field54.setType("SFVec3f")

X3DScript46.addField(field54)
IS55 = x3d.IS()
connect56 = x3d.connect()
connect56.setNodeField("startnode")
connect56.setProtoField("startnode")

IS55.addConnect(connect56)
connect57 = x3d.connect()
connect57.setNodeField("endnode")
connect57.setProtoField("endnode")

IS55.addConnect(connect57)
connect58 = x3d.connect()
connect58.setNodeField("set_startpoint")
connect58.setProtoField("set_startpoint")

IS55.addConnect(connect58)
connect59 = x3d.connect()
connect59.setNodeField("set_endpoint")
connect59.setProtoField("set_endpoint")

IS55.addConnect(connect59)

X3DScript46.setIS(IS55)

Group39.addX3DScript(X3DScript46)

ProtoBody38.addChildren(Group39)

ProtoDeclare32.setProtoBody(ProtoBody38)

Scene7.addChildren(ProtoDeclare32)
ProtoInstance60 = x3d.ProtoInstance()
ProtoInstance60.setName("point")
ProtoInstance60.setDEF("G1")

Scene7.addChildren(ProtoInstance60)
ProtoInstance61 = x3d.ProtoInstance()
ProtoInstance61.setName("point")
ProtoInstance61.setDEF("G2")

Scene7.addChildren(ProtoInstance61)
ProtoInstance62 = x3d.ProtoInstance()
ProtoInstance62.setName("point")
ProtoInstance62.setDEF("G3")

Scene7.addChildren(ProtoInstance62)
ProtoInstance63 = x3d.ProtoInstance()
ProtoInstance63.setName("point")
ProtoInstance63.setDEF("G4")

Scene7.addChildren(ProtoInstance63)
ProtoInstance64 = x3d.ProtoInstance()
ProtoInstance64.setName("x3dconnector")
ProtoInstance64.setDEF("connector1")
fieldValue65 = x3d.fieldValue()
fieldValue65.setName("startnode")
ProtoInstance66 = x3d.ProtoInstance()
ProtoInstance66.setUSE("G1")

fieldValue65.addChildren(ProtoInstance66)

ProtoInstance64.addFieldValue(fieldValue65)
fieldValue67 = x3d.fieldValue()
fieldValue67.setName("endnode")
ProtoInstance68 = x3d.ProtoInstance()
ProtoInstance68.setUSE("G2")

fieldValue67.addChildren(ProtoInstance68)

ProtoInstance64.addFieldValue(fieldValue67)
fieldValue69 = x3d.fieldValue()
fieldValue69.setName("set_startpoint")

ProtoInstance64.addFieldValue(fieldValue69)
fieldValue70 = x3d.fieldValue()
fieldValue70.setName("set_endpoint")

ProtoInstance64.addFieldValue(fieldValue70)

Scene7.addChildren(ProtoInstance64)
ProtoInstance71 = x3d.ProtoInstance()
ProtoInstance71.setName("x3dconnector")
ProtoInstance71.setDEF("connector2")
fieldValue72 = x3d.fieldValue()
fieldValue72.setName("startnode")
ProtoInstance73 = x3d.ProtoInstance()
ProtoInstance73.setUSE("G1")

fieldValue72.addChildren(ProtoInstance73)

ProtoInstance71.addFieldValue(fieldValue72)
fieldValue74 = x3d.fieldValue()
fieldValue74.setName("endnode")
ProtoInstance75 = x3d.ProtoInstance()
ProtoInstance75.setUSE("G3")

fieldValue74.addChildren(ProtoInstance75)

ProtoInstance71.addFieldValue(fieldValue74)
fieldValue76 = x3d.fieldValue()
fieldValue76.setName("set_startpoint")

ProtoInstance71.addFieldValue(fieldValue76)
fieldValue77 = x3d.fieldValue()
fieldValue77.setName("set_endpoint")

ProtoInstance71.addFieldValue(fieldValue77)

Scene7.addChildren(ProtoInstance71)
ProtoInstance78 = x3d.ProtoInstance()
ProtoInstance78.setName("x3dconnector")
ProtoInstance78.setDEF("connector3")
fieldValue79 = x3d.fieldValue()
fieldValue79.setName("startnode")
ProtoInstance80 = x3d.ProtoInstance()
ProtoInstance80.setUSE("G1")

fieldValue79.addChildren(ProtoInstance80)

ProtoInstance78.addFieldValue(fieldValue79)
fieldValue81 = x3d.fieldValue()
fieldValue81.setName("endnode")
ProtoInstance82 = x3d.ProtoInstance()
ProtoInstance82.setUSE("G4")

fieldValue81.addChildren(ProtoInstance82)

ProtoInstance78.addFieldValue(fieldValue81)
fieldValue83 = x3d.fieldValue()
fieldValue83.setName("set_startpoint")

ProtoInstance78.addFieldValue(fieldValue83)
fieldValue84 = x3d.fieldValue()
fieldValue84.setName("set_endpoint")

ProtoInstance78.addFieldValue(fieldValue84)

Scene7.addChildren(ProtoInstance78)
ROUTE85 = x3d.ROUTE()
ROUTE85.setFromNode("G1")
ROUTE85.setFromField("translation")
ROUTE85.setToNode("connector1")
ROUTE85.setToField("set_startpoint")

Scene7.addChildren(ROUTE85)
ROUTE86 = x3d.ROUTE()
ROUTE86.setFromNode("G2")
ROUTE86.setFromField("translation")
ROUTE86.setToNode("connector1")
ROUTE86.setToField("set_endpoint")

Scene7.addChildren(ROUTE86)
ROUTE87 = x3d.ROUTE()
ROUTE87.setFromNode("G1")
ROUTE87.setFromField("translation")
ROUTE87.setToNode("connector2")
ROUTE87.setToField("set_startpoint")

Scene7.addChildren(ROUTE87)
ROUTE88 = x3d.ROUTE()
ROUTE88.setFromNode("G3")
ROUTE88.setFromField("translation")
ROUTE88.setToNode("connector2")
ROUTE88.setToField("set_endpoint")

Scene7.addChildren(ROUTE88)
ROUTE89 = x3d.ROUTE()
ROUTE89.setFromNode("G1")
ROUTE89.setFromField("translation")
ROUTE89.setToNode("connector3")
ROUTE89.setToField("set_startpoint")

Scene7.addChildren(ROUTE89)
ROUTE90 = x3d.ROUTE()
ROUTE90.setFromNode("G4")
ROUTE90.setFromField("translation")
ROUTE90.setToNode("connector3")
ROUTE90.setToField("set_endpoint")

Scene7.addChildren(ROUTE90)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/arc_RoundTrip.x3d")
