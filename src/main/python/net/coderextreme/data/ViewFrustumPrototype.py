print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "ViewFrustumPrototype.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Don Brutzman"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "translated"
meta5.content = "16 August 2008"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "modified"
meta6.content = "Mon, 09 Feb 2026 07:13:15 GMT"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "reference"
meta7.content = "ViewFrustumExample.x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "drawing"
meta8.content = "ViewFrustumComputation.png"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "Image"
meta9.content = "ViewFrustumOverheadView.png"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "Image"
meta10.content = "ViewFrustumObliqueView.png"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "subject"
meta11.content = "view culling frustum"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "identifier"
meta12.content = "https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d"

head1.children.append(meta12)

X3D0.head = head1
Scene13 = x3d.Scene()
ProtoDeclare14 = x3d.ProtoDeclare()
ProtoDeclare14.name = "ViewFrustum"
ProtoDeclare14.appinfo = "Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes"
ProtoInterface15 = x3d.ProtoInterface()
field16 = x3d.field()
field16.accessType = "initializeOnly"
field16.type = "SFNode"
field16.name = "ViewpointNode"
field16.appinfo = "required: insert Viewpoint DEF or USE node for view of interest"

ProtoInterface15.field.append(field16)
field17 = x3d.field()
field17.accessType = "initializeOnly"
field17.type = "SFNode"
field17.name = "NavigationInfoNode"
field17.appinfo = "required: insert NavigationInfo DEF or USE node of interest"

ProtoInterface15.field.append(field17)
field18 = x3d.field()
field18.accessType = "inputOutput"
field18.type = "SFBool"
field18.name = "visible"
field18.value = True
field18.appinfo = "whether or not frustum geometry is rendered"

ProtoInterface15.field.append(field18)
field19 = x3d.field()
field19.accessType = "inputOutput"
field19.type = "SFColor"
field19.name = "lineColor"
field19.value = [0.9,0.9,0.9]
field19.appinfo = "RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"

ProtoInterface15.field.append(field19)
field20 = x3d.field()
field20.accessType = "inputOutput"
field20.type = "SFColor"
field20.name = "frustumColor"
field20.value = [0.8,0.8,0.8]
field20.appinfo = "RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"

ProtoInterface15.field.append(field20)
field21 = x3d.field()
field21.accessType = "inputOutput"
field21.type = "SFFloat"
field21.name = "transparency"
field21.value = 0.5
field21.appinfo = "transparency of ViewFrustum hull geometry, default value 0.5"

ProtoInterface15.field.append(field21)
field22 = x3d.field()
field22.accessType = "inputOutput"
field22.type = "SFFloat"
field22.name = "aspectRatio"
field22.value = 0.75
field22.appinfo = "assumed ratio height/width, default value 0.75"

ProtoInterface15.field.append(field22)
field23 = x3d.field()
field23.accessType = "initializeOnly"
field23.type = "SFBool"
field23.name = "trace"
field23.appinfo = "debug support, default false"

ProtoInterface15.field.append(field23)

ProtoDeclare14.ProtoInterface = ProtoInterface15
ProtoBody24 = x3d.ProtoBody()
Switch25 = x3d.Switch(DEF="VisibilitySwitch")
Transform26 = x3d.Transform(DEF="PositionTransform")
Transform26.rotation = [0,1,0,3.14159]
Transform27 = x3d.Transform(DEF="OrientationTransform")
Shape28 = x3d.Shape()
Appearance29 = x3d.Appearance()
Material30 = x3d.Material()
IS31 = x3d.IS()
connect32 = x3d.connect()
connect32.nodeField = "emissiveColor"
connect32.protoField = "lineColor"

IS31.connect.append(connect32)

Material30.IS = IS31

Appearance29.material = Material30

Shape28.appearance = Appearance29
IndexedLineSet33 = x3d.IndexedLineSet(DEF="FrustumLines")
IndexedLineSet33.coordIndex = [0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1]
Coordinate34 = x3d.Coordinate(DEF="FrustumCoordinate")
Coordinate34.point = [(0, 0, 0),(0, 0, 0),(0, 0, 0),(0, 0, 0),(0, 0, 0),(0, 0, 0),(0, 0, 0),(0, 0, 0)]

IndexedLineSet33.coord = Coordinate34

Shape28.geometry = IndexedLineSet33

Transform27.children.append(Shape28)
Shape35 = x3d.Shape()
Appearance36 = x3d.Appearance(DEF="FrustumAppearance")
Material37 = x3d.Material()
IS38 = x3d.IS()
connect39 = x3d.connect()
connect39.nodeField = "diffuseColor"
connect39.protoField = "frustumColor"

IS38.connect.append(connect39)
connect40 = x3d.connect()
connect40.nodeField = "transparency"
connect40.protoField = "transparency"

IS38.connect.append(connect40)

Material37.IS = IS38

Appearance36.material = Material37

Shape35.appearance = Appearance36
Extrusion41 = x3d.Extrusion(DEF="FrustumExtrusion")

Shape35.geometry = Extrusion41

Transform27.children.append(Shape35)
Shape42 = x3d.Shape()
Appearance43 = x3d.Appearance(USE="FrustumAppearance")

Shape42.appearance = Appearance43
Sphere44 = x3d.Sphere()
Sphere44.radius = 0.08

Shape42.geometry = Sphere44

Transform27.children.append(Shape42)

Transform26.children.append(Transform27)

Switch25.children.append(Transform26)

ProtoBody24.children.append(Switch25)
Script45 = x3d.Script(DEF="GeometryComputationScript")
Script45.url = ["ViewFrustumPrototypeScript.js"]
Script45.directOutput = True
field46 = x3d.field()
field46.accessType = "inputOutput"
field46.type = "SFBool"
field46.name = "visible"
field46.appinfo = "Whether or not frustum geometry is rendered"

Script45.field.append(field46)
field47 = x3d.field()
field47.accessType = "outputOnly"
field47.type = "SFInt32"
field47.name = "visibilitySwitchSelection"
field47.appinfo = "Adjust Switch selection to make geometry visible or not"

Script45.field.append(field47)
field48 = x3d.field()
field48.accessType = "initializeOnly"
field48.type = "SFNode"
field48.name = "ViewpointNode"

Script45.field.append(field48)
field49 = x3d.field()
field49.accessType = "initializeOnly"
field49.type = "SFNode"
field49.name = "NavigationInfoNode"

Script45.field.append(field49)
field50 = x3d.field()
field50.accessType = "initializeOnly"
field50.type = "SFNode"
field50.name = "FrustumCoordinate"
Coordinate51 = x3d.Coordinate(USE="FrustumCoordinate")

field50.children.append(Coordinate51)

Script45.field.append(field50)
field52 = x3d.field()
field52.accessType = "initializeOnly"
field52.type = "SFNode"
field52.name = "FrustumExtrusion"
Extrusion53 = x3d.Extrusion(USE="FrustumExtrusion")

field52.children.append(Extrusion53)

Script45.field.append(field52)
field54 = x3d.field()
field54.accessType = "inputOnly"
field54.type = "SFBool"
field54.name = "recompute"

Script45.field.append(field54)
field55 = x3d.field()
field55.accessType = "inputOutput"
field55.type = "SFFloat"
field55.name = "aspectRatio"
field55.appinfo = "assumed ratio height/width"

Script45.field.append(field55)
field56 = x3d.field()
field56.accessType = "outputOnly"
field56.type = "SFVec3f"
field56.name = "position_changed"

Script45.field.append(field56)
field57 = x3d.field()
field57.accessType = "outputOnly"
field57.type = "SFRotation"
field57.name = "orientation_changed"

Script45.field.append(field57)
field58 = x3d.field()
field58.accessType = "outputOnly"
field58.type = "MFVec3f"
field58.name = "spine_changed"

Script45.field.append(field58)
field59 = x3d.field()
field59.accessType = "outputOnly"
field59.type = "MFVec2f"
field59.name = "scale_changed"

Script45.field.append(field59)
field60 = x3d.field()
field60.accessType = "outputOnly"
field60.type = "MFVec3f"
field60.name = "point_changed"

Script45.field.append(field60)
field61 = x3d.field()
field61.accessType = "initializeOnly"
field61.type = "SFBool"
field61.name = "trace"

Script45.field.append(field61)
IS62 = x3d.IS()
connect63 = x3d.connect()
connect63.nodeField = "visible"
connect63.protoField = "visible"

IS62.connect.append(connect63)
connect64 = x3d.connect()
connect64.nodeField = "ViewpointNode"
connect64.protoField = "ViewpointNode"

IS62.connect.append(connect64)
connect65 = x3d.connect()
connect65.nodeField = "NavigationInfoNode"
connect65.protoField = "NavigationInfoNode"

IS62.connect.append(connect65)
connect66 = x3d.connect()
connect66.nodeField = "aspectRatio"
connect66.protoField = "aspectRatio"

IS62.connect.append(connect66)
connect67 = x3d.connect()
connect67.nodeField = "trace"
connect67.protoField = "trace"

IS62.connect.append(connect67)

Script45.IS = IS62

ProtoBody24.children.append(Script45)
ROUTE68 = x3d.ROUTE()
ROUTE68.fromNode = "GeometryComputationScript"
ROUTE68.fromField = "visibilitySwitchSelection"
ROUTE68.toNode = "VisibilitySwitch"
ROUTE68.toField = "set_whichChoice"

ProtoBody24.children.append(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.fromNode = "GeometryComputationScript"
ROUTE69.fromField = "position_changed"
ROUTE69.toNode = "PositionTransform"
ROUTE69.toField = "set_translation"

ProtoBody24.children.append(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.fromNode = "GeometryComputationScript"
ROUTE70.fromField = "orientation_changed"
ROUTE70.toNode = "OrientationTransform"
ROUTE70.toField = "set_rotation"

ProtoBody24.children.append(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.fromNode = "GeometryComputationScript"
ROUTE71.fromField = "spine_changed"
ROUTE71.toNode = "FrustumExtrusion"
ROUTE71.toField = "set_spine"

ProtoBody24.children.append(ROUTE71)
ROUTE72 = x3d.ROUTE()
ROUTE72.fromNode = "GeometryComputationScript"
ROUTE72.fromField = "scale_changed"
ROUTE72.toNode = "FrustumExtrusion"
ROUTE72.toField = "set_scale"

ProtoBody24.children.append(ROUTE72)
ROUTE73 = x3d.ROUTE()
ROUTE73.fromNode = "GeometryComputationScript"
ROUTE73.fromField = "point_changed"
ROUTE73.toNode = "FrustumCoordinate"
ROUTE73.toField = "set_point"

ProtoBody24.children.append(ROUTE73)

ProtoDeclare14.ProtoBody = ProtoBody24

Scene13.children.append(ProtoDeclare14)
WorldInfo74 = x3d.WorldInfo()
WorldInfo74.title = "ViewFrustumPrototype.x3d"

Scene13.children.append(WorldInfo74)
Anchor75 = x3d.Anchor()
Anchor75.description = "ViewFrustum Example"
Anchor75.url = ["ViewFrustumExample.x3d"]
Shape76 = x3d.Shape()
Appearance77 = x3d.Appearance()
Material78 = x3d.Material()
Material78.diffuseColor = [0.8,0.4,0]

Appearance77.material = Material78

Shape76.appearance = Appearance77
Text79 = x3d.Text()
Text79.string = ["ViewFrustumPrototype.x3d","is a Prototype declaration file.","For an example scene using the prototype,","click this text and view","ViewFrustumExample.x3d"]
FontStyle80 = x3d.FontStyle()
FontStyle80.size = 0.8
FontStyle80.justify = ["MIDDLE","MIDDLE"]

Text79.fontStyle = FontStyle80

Shape76.geometry = Text79

Anchor75.children.append(Shape76)

Scene13.children.append(Anchor75)

X3D0.Scene = Scene13
f = open("../data/ViewFrustumPrototype.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ViewFrustumPrototype.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ViewFrustumPrototype.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
