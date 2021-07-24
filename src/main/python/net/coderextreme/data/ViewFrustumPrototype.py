from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("ViewFrustumPrototype.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("description")
meta3.setContent("Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype.")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("creator")
meta4.setContent("Don Brutzman")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("translated")
meta5.setContent("16 August 2008")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("modified")
meta6.setContent("20 October 2019")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("reference")
meta7.setContent("ViewFrustumExample.x3d")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("drawing")
meta8.setContent("ViewFrustumComputation.png")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("Image")
meta9.setContent("ViewFrustumOverheadView.png")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("Image")
meta10.setContent("ViewFrustumObliqueView.png")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("subject")
meta11.setContent("view culling frustum")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("identifier")
meta12.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("generator")
meta13.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta13)
meta14 = meta()
meta14.setName("license")
meta14.setContent("../license.html")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = Scene()
WorldInfo16 = WorldInfo()
WorldInfo16.setTitle("ViewFrustumPrototype.x3d")

Scene15.addChildren(WorldInfo16)
ProtoDeclare17 = ProtoDeclare()
ProtoDeclare17.setName("ViewFrustum")
ProtoDeclare17.setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes")
ProtoInterface18 = ProtoInterface()
field19 = field()
field19.setName("ViewpointNode")
field19.setAccessType("initializeOnly")
field19.setAppinfo("required: insert Viewpoint DEF or USE node for view of interest")
field19.setType("SFNode")
#NULL node, ProtoInstance must provide

ProtoInterface18.addField(field19)
field20 = field()
field20.setName("NavigationInfoNode")
field20.setAccessType("initializeOnly")
field20.setAppinfo("required: insert NavigationInfo DEF or USE node of interest")
field20.setType("SFNode")
#NULL node, ProtoInstance must provide

ProtoInterface18.addField(field20)
field21 = field()
field21.setName("visible")
field21.setAccessType("inputOutput")
field21.setAppinfo("whether or not frustum geometry is rendered")
field21.setType("SFBool")
field21.setValue("true")

ProtoInterface18.addField(field21)
field22 = field()
field22.setName("lineColor")
field22.setAccessType("inputOutput")
field22.setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9")
field22.setType("SFColor")
field22.setValue("0.9 0.9 0.9")

ProtoInterface18.addField(field22)
field23 = field()
field23.setName("frustumColor")
field23.setAccessType("inputOutput")
field23.setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8")
field23.setType("SFColor")
field23.setValue("0.8 0.8 0.8")

ProtoInterface18.addField(field23)
field24 = field()
field24.setName("transparency")
field24.setAccessType("inputOutput")
field24.setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5")
field24.setType("SFFloat")
field24.setValue("0.5")

ProtoInterface18.addField(field24)
field25 = field()
field25.setName("aspectRatio")
field25.setAccessType("inputOutput")
field25.setAppinfo("assumed ratio height/width, default value 0.75")
field25.setType("SFFloat")
field25.setValue("0.75")

ProtoInterface18.addField(field25)
field26 = field()
field26.setName("trace")
field26.setAccessType("initializeOnly")
field26.setAppinfo("debug support, default false")
field26.setType("SFBool")
field26.setValue("false")

ProtoInterface18.addField(field26)

ProtoDeclare17.setProtoInterface(ProtoInterface18)
ProtoBody27 = ProtoBody()
Switch28 = Switch()
Switch28.setDEF("VisibilitySwitch")
Switch28.setWhichChoice(-1)
Transform29 = Transform()
Transform29.setDEF("PositionTransform")
Transform29.setRotation([0,1,0,3.14159])
Transform30 = Transform()
Transform30.setDEF("OrientationTransform")
Shape31 = Shape()
IndexedLineSet32 = IndexedLineSet()
IndexedLineSet32.setDEF("FrustumLines")
IndexedLineSet32.setCoordIndex([0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1])
Coordinate33 = Coordinate()
Coordinate33.setDEF("FrustumCoordinate")
Coordinate33.setPoint([0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0])

IndexedLineSet32.setCoord(Coordinate33)

Shape31.setGeometry(IndexedLineSet32)
Appearance34 = Appearance()
Material35 = Material()
IS36 = IS()
connect37 = connect()
connect37.setNodeField("emissiveColor")
connect37.setProtoField("lineColor")

IS36.addConnect(connect37)

Material35.setIS(IS36)

Appearance34.setMaterial(Material35)

Shape31.setAppearance(Appearance34)

Transform30.addChildren(Shape31)
Shape38 = Shape()
Extrusion39 = Extrusion()
Extrusion39.setDEF("FrustumExtrusion")

Shape38.setGeometry(Extrusion39)
Appearance40 = Appearance()
Appearance40.setDEF("FrustumAppearance")
Material41 = Material()
IS42 = IS()
connect43 = connect()
connect43.setNodeField("diffuseColor")
connect43.setProtoField("frustumColor")

IS42.addConnect(connect43)
connect44 = connect()
connect44.setNodeField("transparency")
connect44.setProtoField("transparency")

IS42.addConnect(connect44)

Material41.setIS(IS42)

Appearance40.setMaterial(Material41)

Shape38.setAppearance(Appearance40)

Transform30.addChildren(Shape38)
Shape45 = Shape()
Sphere46 = Sphere()
Sphere46.setRadius(0.08)

Shape45.setGeometry(Sphere46)
Appearance47 = Appearance()
Appearance47.setUSE("FrustumAppearance")

Shape45.setAppearance(Appearance47)

Transform30.addChildren(Shape45)

Transform29.addChildren(Transform30)

Switch28.addChildren(Transform29)

ProtoBody27.addChildren(Switch28)
Script48 = Script()
Script48.setDEF("GeometryComputationScript")
Script48.setDirectOutput(True)
Script48.setUrl(["ViewFrustumPrototypeScript.js"])
field49 = field()
field49.setName("visible")
field49.setAccessType("inputOutput")
field49.setAppinfo("Whether or not frustum geometry is rendered")
field49.setType("SFBool")

Script48.addField(field49)
field50 = field()
field50.setName("visibilitySwitchSelection")
field50.setAccessType("outputOnly")
field50.setAppinfo("Adjust Switch selection to make geometry visible or not")
field50.setType("SFInt32")

Script48.addField(field50)
field51 = field()
field51.setName("ViewpointNode")
field51.setAccessType("initializeOnly")
field51.setType("SFNode")
#initialization node (if any) goes here

Script48.addField(field51)
field52 = field()
field52.setName("NavigationInfoNode")
field52.setAccessType("initializeOnly")
field52.setType("SFNode")
#initialization node (if any) goes here

Script48.addField(field52)
field53 = field()
field53.setName("FrustumCoordinate")
field53.setAccessType("initializeOnly")
field53.setType("SFNode")
Coordinate54 = Coordinate()
Coordinate54.setUSE("FrustumCoordinate")

field53.addChildren(Coordinate54)

Script48.addField(field53)
field55 = field()
field55.setName("FrustumExtrusion")
field55.setAccessType("initializeOnly")
field55.setType("SFNode")
Extrusion56 = Extrusion()
Extrusion56.setUSE("FrustumExtrusion")

field55.addChildren(Extrusion56)

Script48.addField(field55)
field57 = field()
field57.setName("recompute")
field57.setAccessType("inputOnly")
field57.setType("SFBool")

Script48.addField(field57)
field58 = field()
field58.setName("aspectRatio")
field58.setAccessType("inputOutput")
field58.setAppinfo("assumed ratio height/width")
field58.setType("SFFloat")

Script48.addField(field58)
field59 = field()
field59.setName("position_changed")
field59.setAccessType("outputOnly")
field59.setType("SFVec3f")

Script48.addField(field59)
field60 = field()
field60.setName("orientation_changed")
field60.setAccessType("outputOnly")
field60.setType("SFRotation")

Script48.addField(field60)
field61 = field()
field61.setName("spine_changed")
field61.setAccessType("outputOnly")
field61.setType("MFVec3f")

Script48.addField(field61)
field62 = field()
field62.setName("scale_changed")
field62.setAccessType("outputOnly")
field62.setType("MFVec2f")

Script48.addField(field62)
field63 = field()
field63.setName("point_changed")
field63.setAccessType("outputOnly")
field63.setType("MFVec3f")

Script48.addField(field63)
field64 = field()
field64.setName("trace")
field64.setAccessType("initializeOnly")
field64.setType("SFBool")

Script48.addField(field64)
IS65 = IS()
connect66 = connect()
connect66.setNodeField("visible")
connect66.setProtoField("visible")

IS65.addConnect(connect66)
connect67 = connect()
connect67.setNodeField("ViewpointNode")
connect67.setProtoField("ViewpointNode")

IS65.addConnect(connect67)
connect68 = connect()
connect68.setNodeField("NavigationInfoNode")
connect68.setProtoField("NavigationInfoNode")

IS65.addConnect(connect68)
connect69 = connect()
connect69.setNodeField("aspectRatio")
connect69.setProtoField("aspectRatio")

IS65.addConnect(connect69)
connect70 = connect()
connect70.setNodeField("trace")
connect70.setProtoField("trace")

IS65.addConnect(connect70)

Script48.setIS(IS65)

ProtoBody27.addChildren(Script48)
ROUTE71 = ROUTE()
ROUTE71.setFromField("visibilitySwitchSelection")
ROUTE71.setFromNode("GeometryComputationScript")
ROUTE71.setToField("whichChoice")
ROUTE71.setToNode("VisibilitySwitch")

ProtoBody27.addChildren(ROUTE71)
ROUTE72 = ROUTE()
ROUTE72.setFromField("position_changed")
ROUTE72.setFromNode("GeometryComputationScript")
ROUTE72.setToField("translation")
ROUTE72.setToNode("PositionTransform")

ProtoBody27.addChildren(ROUTE72)
ROUTE73 = ROUTE()
ROUTE73.setFromField("orientation_changed")
ROUTE73.setFromNode("GeometryComputationScript")
ROUTE73.setToField("rotation")
ROUTE73.setToNode("OrientationTransform")

ProtoBody27.addChildren(ROUTE73)
ROUTE74 = ROUTE()
ROUTE74.setFromField("spine_changed")
ROUTE74.setFromNode("GeometryComputationScript")
ROUTE74.setToField("set_spine")
ROUTE74.setToNode("FrustumExtrusion")

ProtoBody27.addChildren(ROUTE74)
ROUTE75 = ROUTE()
ROUTE75.setFromField("scale_changed")
ROUTE75.setFromNode("GeometryComputationScript")
ROUTE75.setToField("set_scale")
ROUTE75.setToNode("FrustumExtrusion")

ProtoBody27.addChildren(ROUTE75)
ROUTE76 = ROUTE()
ROUTE76.setFromField("point_changed")
ROUTE76.setFromNode("GeometryComputationScript")
ROUTE76.setToField("point")
ROUTE76.setToNode("FrustumCoordinate")

ProtoBody27.addChildren(ROUTE76)

ProtoDeclare17.setProtoBody(ProtoBody27)

Scene15.addChildren(ProtoDeclare17)
#Example use is in separate scene
Anchor77 = Anchor()
Anchor77.setDescription("ViewFrustum Example")
Anchor77.setUrl(["ViewFrustumExample.x3d"])
Shape78 = Shape()
Appearance79 = Appearance()
Material80 = Material()
Material80.setDiffuseColor([0.8,0.4,0])

Appearance79.setMaterial(Material80)

Shape78.setAppearance(Appearance79)
Text81 = Text()
Text81.setString(["ViewFrustumPrototype.x3d","is a Prototype declaration file.","For an example scene using the prototype,","click this text and view","ViewFrustumExample.x3d"])
FontStyle82 = FontStyle()
FontStyle82.setJustify(["MIDDLE","MIDDLE"])
FontStyle82.setSize(0.8)

Text81.setFontStyle(FontStyle82)

Shape78.setGeometry(Text81)

Anchor77.addChildren(Shape78)

Scene15.addChildren(Anchor77)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../data/ViewFrustumPrototype_RoundTrip.x3d")
