print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
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
meta6.content = "20 October 2019"

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
meta12.content = "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "generator"
meta13.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "license"
meta14.content = "../license.html"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
WorldInfo16 = x3d.WorldInfo()
WorldInfo16.title = "ViewFrustumPrototype.x3d"

Scene15.children.append(WorldInfo16)
ProtoDeclare17 = x3d.ProtoDeclare()
ProtoDeclare17.name = "ViewFrustum"
ProtoDeclare17.appinfo = "Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes"
ProtoInterface18 = x3d.ProtoInterface()
field19 = x3d.field()
field19.name = "ViewpointNode"
field19.accessType = "initializeOnly"
field19.appinfo = "required: insert Viewpoint DEF or USE node for view of interest"
field19.type = "SFNode"
"""NULL node, ProtoInstance must provide"""

ProtoInterface18.field.append(field19)
field20 = x3d.field()
field20.name = "NavigationInfoNode"
field20.accessType = "initializeOnly"
field20.appinfo = "required: insert NavigationInfo DEF or USE node of interest"
field20.type = "SFNode"
"""NULL node, ProtoInstance must provide"""

ProtoInterface18.field.append(field20)
field21 = x3d.field()
field21.name = "visible"
field21.accessType = "inputOutput"
field21.appinfo = "whether or not frustum geometry is rendered"
field21.type = "SFBool"
field21.value = True

ProtoInterface18.field.append(field21)
field22 = x3d.field()
field22.name = "lineColor"
field22.accessType = "inputOutput"
field22.appinfo = "RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"
field22.type = "SFColor"
field22.value = [0.9,0.9,0.9]

ProtoInterface18.field.append(field22)
field23 = x3d.field()
field23.name = "frustumColor"
field23.accessType = "inputOutput"
field23.appinfo = "RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"
field23.type = "SFColor"
field23.value = [0.8,0.8,0.8]

ProtoInterface18.field.append(field23)
field24 = x3d.field()
field24.name = "transparency"
field24.accessType = "inputOutput"
field24.appinfo = "transparency of ViewFrustum hull geometry, default value 0.5"
field24.type = "SFFloat"
field24.value = 0.5

ProtoInterface18.field.append(field24)
field25 = x3d.field()
field25.name = "aspectRatio"
field25.accessType = "inputOutput"
field25.appinfo = "assumed ratio height/width, default value 0.75"
field25.type = "SFFloat"
field25.value = 0.75

ProtoInterface18.field.append(field25)
field26 = x3d.field()
field26.name = "trace"
field26.accessType = "initializeOnly"
field26.appinfo = "debug support, default false"
field26.type = "SFBool"
field26.value = False

ProtoInterface18.field.append(field26)

ProtoDeclare17.ProtoInterface = ProtoInterface18
ProtoBody27 = x3d.ProtoBody()
Switch28 = x3d.Switch()
Switch28.DEF = "VisibilitySwitch"
Switch28.whichChoice = -1
Transform29 = x3d.Transform()
Transform29.DEF = "PositionTransform"
Transform29.rotation = [0,1,0,3.14159]
Transform30 = x3d.Transform()
Transform30.DEF = "OrientationTransform"
Shape31 = x3d.Shape()
IndexedLineSet32 = x3d.IndexedLineSet()
IndexedLineSet32.DEF = "FrustumLines"
IndexedLineSet32.coordIndex = [0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1]
Coordinate33 = x3d.Coordinate()
Coordinate33.DEF = "FrustumCoordinate"

IndexedLineSet32.coord = Coordinate33

Shape31.geometry = IndexedLineSet32
Appearance34 = x3d.Appearance()
Material35 = x3d.Material()
IS36 = x3d.IS()
connect37 = x3d.connect()
connect37.nodeField = "emissiveColor"
connect37.protoField = "lineColor"

IS36.connect.append(connect37)

Material35.IS = IS36

Appearance34.material = Material35

Shape31.appearance = Appearance34

Transform30.children.append(Shape31)
Shape38 = x3d.Shape()
Extrusion39 = x3d.Extrusion()
Extrusion39.DEF = "FrustumExtrusion"

Shape38.geometry = Extrusion39
Appearance40 = x3d.Appearance()
Appearance40.DEF = "FrustumAppearance"
Material41 = x3d.Material()
IS42 = x3d.IS()
connect43 = x3d.connect()
connect43.nodeField = "diffuseColor"
connect43.protoField = "frustumColor"

IS42.connect.append(connect43)
connect44 = x3d.connect()
connect44.nodeField = "transparency"
connect44.protoField = "transparency"

IS42.connect.append(connect44)

Material41.IS = IS42

Appearance40.material = Material41

Shape38.appearance = Appearance40

Transform30.children.append(Shape38)
Shape45 = x3d.Shape()
Sphere46 = x3d.Sphere()
Sphere46.radius = 0.08

Shape45.geometry = Sphere46
Appearance47 = x3d.Appearance()
Appearance47.USE = "FrustumAppearance"

Shape45.appearance = Appearance47

Transform30.children.append(Shape45)

Transform29.children.append(Transform30)

Switch28.children.append(Transform29)

ProtoBody27.children.append(Switch28)
Script48 = x3d.Script()
Script48.DEF = "GeometryComputationScript"
Script48.directOutput = True
Script48.url = ["ViewFrustumPrototypeScript.js"]
field49 = x3d.field()
field49.name = "visible"
field49.accessType = "inputOutput"
field49.appinfo = "Whether or not frustum geometry is rendered"
field49.type = "SFBool"

Script48.field.append(field49)
field50 = x3d.field()
field50.name = "visibilitySwitchSelection"
field50.accessType = "outputOnly"
field50.appinfo = "Adjust Switch selection to make geometry visible or not"
field50.type = "SFInt32"

Script48.field.append(field50)
field51 = x3d.field()
field51.name = "ViewpointNode"
field51.accessType = "initializeOnly"
field51.type = "SFNode"
"""initialization node (if any) goes here"""

Script48.field.append(field51)
field52 = x3d.field()
field52.name = "NavigationInfoNode"
field52.accessType = "initializeOnly"
field52.type = "SFNode"
"""initialization node (if any) goes here"""

Script48.field.append(field52)
field53 = x3d.field()
field53.name = "FrustumCoordinate"
field53.accessType = "initializeOnly"
field53.type = "SFNode"
Coordinate54 = x3d.Coordinate()
Coordinate54.USE = "FrustumCoordinate"

field53.children.append(Coordinate54)

Script48.field.append(field53)
field55 = x3d.field()
field55.name = "FrustumExtrusion"
field55.accessType = "initializeOnly"
field55.type = "SFNode"
Extrusion56 = x3d.Extrusion()
Extrusion56.USE = "FrustumExtrusion"

field55.children.append(Extrusion56)

Script48.field.append(field55)
field57 = x3d.field()
field57.name = "recompute"
field57.accessType = "inputOnly"
field57.type = "SFBool"

Script48.field.append(field57)
field58 = x3d.field()
field58.name = "aspectRatio"
field58.accessType = "inputOutput"
field58.appinfo = "assumed ratio height/width"
field58.type = "SFFloat"

Script48.field.append(field58)
field59 = x3d.field()
field59.name = "position_changed"
field59.accessType = "outputOnly"
field59.type = "SFVec3f"

Script48.field.append(field59)
field60 = x3d.field()
field60.name = "orientation_changed"
field60.accessType = "outputOnly"
field60.type = "SFRotation"

Script48.field.append(field60)
field61 = x3d.field()
field61.name = "spine_changed"
field61.accessType = "outputOnly"
field61.type = "MFVec3f"

Script48.field.append(field61)
field62 = x3d.field()
field62.name = "scale_changed"
field62.accessType = "outputOnly"
field62.type = "MFVec2f"

Script48.field.append(field62)
field63 = x3d.field()
field63.name = "point_changed"
field63.accessType = "outputOnly"
field63.type = "MFVec3f"

Script48.field.append(field63)
field64 = x3d.field()
field64.name = "trace"
field64.accessType = "initializeOnly"
field64.type = "SFBool"

Script48.field.append(field64)
IS65 = x3d.IS()
connect66 = x3d.connect()
connect66.nodeField = "visible"
connect66.protoField = "visible"

IS65.connect.append(connect66)
connect67 = x3d.connect()
connect67.nodeField = "ViewpointNode"
connect67.protoField = "ViewpointNode"

IS65.connect.append(connect67)
connect68 = x3d.connect()
connect68.nodeField = "NavigationInfoNode"
connect68.protoField = "NavigationInfoNode"

IS65.connect.append(connect68)
connect69 = x3d.connect()
connect69.nodeField = "aspectRatio"
connect69.protoField = "aspectRatio"

IS65.connect.append(connect69)
connect70 = x3d.connect()
connect70.nodeField = "trace"
connect70.protoField = "trace"

IS65.connect.append(connect70)

Script48.IS = IS65

ProtoBody27.children.append(Script48)
ROUTE71 = x3d.ROUTE()
ROUTE71.fromField = "visibilitySwitchSelection"
ROUTE71.fromNode = "GeometryComputationScript"
ROUTE71.toField = "whichChoice"
ROUTE71.toNode = "VisibilitySwitch"

ProtoBody27.children.append(ROUTE71)
ROUTE72 = x3d.ROUTE()
ROUTE72.fromField = "position_changed"
ROUTE72.fromNode = "GeometryComputationScript"
ROUTE72.toField = "translation"
ROUTE72.toNode = "PositionTransform"

ProtoBody27.children.append(ROUTE72)
ROUTE73 = x3d.ROUTE()
ROUTE73.fromField = "orientation_changed"
ROUTE73.fromNode = "GeometryComputationScript"
ROUTE73.toField = "rotation"
ROUTE73.toNode = "OrientationTransform"

ProtoBody27.children.append(ROUTE73)
ROUTE74 = x3d.ROUTE()
ROUTE74.fromField = "spine_changed"
ROUTE74.fromNode = "GeometryComputationScript"
ROUTE74.toField = "set_spine"
ROUTE74.toNode = "FrustumExtrusion"

ProtoBody27.children.append(ROUTE74)
ROUTE75 = x3d.ROUTE()
ROUTE75.fromField = "scale_changed"
ROUTE75.fromNode = "GeometryComputationScript"
ROUTE75.toField = "set_scale"
ROUTE75.toNode = "FrustumExtrusion"

ProtoBody27.children.append(ROUTE75)
ROUTE76 = x3d.ROUTE()
ROUTE76.fromField = "point_changed"
ROUTE76.fromNode = "GeometryComputationScript"
ROUTE76.toField = "point"
ROUTE76.toNode = "FrustumCoordinate"

ProtoBody27.children.append(ROUTE76)

ProtoDeclare17.ProtoBody = ProtoBody27

Scene15.children.append(ProtoDeclare17)
"""Example use is in separate scene"""
Anchor77 = x3d.Anchor()
Anchor77.description = "ViewFrustum Example"
Anchor77.url = ["ViewFrustumExample.x3d"]
Shape78 = x3d.Shape()
Appearance79 = x3d.Appearance()
Material80 = x3d.Material()
Material80.diffuseColor = [0.8,0.4,0]

Appearance79.material = Material80

Shape78.appearance = Appearance79
Text81 = x3d.Text()
Text81.string = ["ViewFrustumPrototype.x3d","is a Prototype declaration file.","For an example scene using the prototype,","click this text and view","ViewFrustumExample.x3d"]
FontStyle82 = x3d.FontStyle()
FontStyle82.justify = ["MIDDLE","MIDDLE"]
FontStyle82.size = 0.8

Text81.fontStyle = FontStyle82

Shape78.geometry = Text81

Anchor77.children.append(Shape78)

Scene15.children.append(Anchor77)

X3D0.Scene = Scene15
f = open("../data/ViewFrustumPrototype.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ViewFrustumPrototype.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
