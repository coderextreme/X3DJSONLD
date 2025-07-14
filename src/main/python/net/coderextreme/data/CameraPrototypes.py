print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "CameraPrototypes.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Don Brutzman and Jeff Weekley"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "created"
meta5.content = "16 March 2009"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "modified"
meta6.content = "25 October 2016"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "TODO"
meta7.content = "Schematron rules, backed up by initialize() checks"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "BeyondViewpointCameraNodesWeb3D2009.pdf"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "subject"
meta10.content = "Camera nodes for Viewpoint navigation control"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "CameraExamples.x3d"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "identifier"
meta12.content = "https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "generator"
meta14.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "license"
meta15.content = "../license.html"

head1.children.append(meta15)

X3D0.head = head1
Scene16 = x3d.Scene()
"""=============== Camera =============="""
ProtoDeclare17 = x3d.ProtoDeclare()
ProtoDeclare17.name = "Camera"
ProtoDeclare17.appinfo = "Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images."
ProtoInterface18 = x3d.ProtoInterface()
"""Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields"""
field19 = x3d.field()
field19.name = "description"
field19.accessType = "inputOutput"
field19.appinfo = "Text description to be displayed for this Camera"
field19.type = "SFString"

ProtoInterface18.field.append(field19)
field20 = x3d.field()
field20.name = "position"
field20.accessType = "inputOutput"
field20.appinfo = "Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"
field20.type = "SFVec3f"
field20.value = [0,0,10]

ProtoInterface18.field.append(field20)
field21 = x3d.field()
field21.name = "orientation"
field21.accessType = "inputOutput"
field21.appinfo = "Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"
field21.type = "SFRotation"
field21.value = [0,0,1,0]

ProtoInterface18.field.append(field21)
field22 = x3d.field()
field22.name = "fieldOfView"
field22.accessType = "inputOutput"
field22.appinfo = "pi/4"
field22.type = "SFFloat"
field22.value = 0.7854

ProtoInterface18.field.append(field22)
field23 = x3d.field()
field23.name = "set_fraction"
field23.accessType = "inputOnly"
field23.appinfo = "input fraction drives interpolators"
field23.type = "SFFloat"

ProtoInterface18.field.append(field23)
field24 = x3d.field()
field24.name = "set_bind"
field24.accessType = "inputOnly"
field24.appinfo = "input event binds or unbinds this Camera"
field24.type = "SFBool"

ProtoInterface18.field.append(field24)
field25 = x3d.field()
field25.name = "bindTime"
field25.accessType = "outputOnly"
field25.appinfo = "output event indicates when this Camera is bound"
field25.type = "SFTime"

ProtoInterface18.field.append(field25)
field26 = x3d.field()
field26.name = "isBound"
field26.accessType = "outputOnly"
field26.appinfo = "output event indicates whether this Camera is bound or unbound"
field26.type = "SFBool"

ProtoInterface18.field.append(field26)
field27 = x3d.field()
field27.name = "nearClipPlane"
field27.accessType = "inputOutput"
field27.appinfo = "Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]"
field27.type = "SFFloat"
field27.value = 0.25

ProtoInterface18.field.append(field27)
field28 = x3d.field()
field28.name = "farClipPlane"
field28.accessType = "inputOutput"
field28.appinfo = "Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit"
field28.type = "SFFloat"
field28.value = 0

ProtoInterface18.field.append(field28)
field29 = x3d.field()
field29.name = "shots"
field29.accessType = "inputOutput"
field29.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes"
field29.type = "MFNode"
"""initialization nodes (if any) go here"""

ProtoInterface18.field.append(field29)
field30 = x3d.field()
field30.name = "headlight"
field30.accessType = "inputOutput"
field30.appinfo = "Whether camera headlight is on or off"
field30.type = "SFBool"
field30.value = True

ProtoInterface18.field.append(field30)
field31 = x3d.field()
field31.name = "headlightColor"
field31.accessType = "inputOutput"
field31.appinfo = "Camera headlight color"
field31.type = "SFColor"
field31.value = [1,1,1]

ProtoInterface18.field.append(field31)
field32 = x3d.field()
field32.name = "headlightIntensity"
field32.accessType = "inputOutput"
field32.appinfo = "Camera headlight intensity"
field32.type = "SFFloat"
field32.value = 1

ProtoInterface18.field.append(field32)
field33 = x3d.field()
field33.name = "filterColor"
field33.accessType = "inputOutput"
field33.appinfo = "Camera filter color that modifies virtual lens capture"
field33.type = "SFColor"
field33.value = [1,1,1]

ProtoInterface18.field.append(field33)
field34 = x3d.field()
field34.name = "filterTransparency"
field34.accessType = "inputOutput"
field34.appinfo = "Camera filter transparency that modifies virtual lens capture"
field34.type = "SFFloat"
field34.value = 1

ProtoInterface18.field.append(field34)
field35 = x3d.field()
field35.name = "upVector"
field35.accessType = "inputOutput"
field35.appinfo = "upVector changes modify camera orientation (and possibly vice versa)"
field35.type = "SFVec3f"
field35.value = [0,1,0]

ProtoInterface18.field.append(field35)
field36 = x3d.field()
field36.name = "fStop"
field36.accessType = "inputOutput"
field36.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane"
field36.type = "SFFloat"
field36.value = 5.6

ProtoInterface18.field.append(field36)
field37 = x3d.field()
field37.name = "focusDistance"
field37.accessType = "inputOutput"
field37.appinfo = "Distance to focal plane of sharpest focus"
field37.type = "SFFloat"
field37.value = 10

ProtoInterface18.field.append(field37)
field38 = x3d.field()
field38.name = "isActive"
field38.accessType = "outputOnly"
field38.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations"
field38.type = "SFBool"

ProtoInterface18.field.append(field38)
field39 = x3d.field()
field39.name = "totalDuration"
field39.accessType = "outputOnly"
field39.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"
field39.type = "SFTime"

ProtoInterface18.field.append(field39)
field40 = x3d.field()
field40.name = "offlineRender"
field40.accessType = "inputOutput"
field40.appinfo = "OfflineRender node"
field40.type = "SFNode"
"""initialization node (if any) goes here"""

ProtoInterface18.field.append(field40)
field41 = x3d.field()
field41.name = "traceEnabled"
field41.accessType = "initializeOnly"
field41.appinfo = "enable console output to trace script computations and prototype progress"
field41.type = "SFBool"
field41.value = False

ProtoInterface18.field.append(field41)

ProtoDeclare17.ProtoInterface = ProtoInterface18
ProtoBody42 = x3d.ProtoBody()
Viewpoint43 = x3d.Viewpoint()
Viewpoint43.DEF = "CameraViewpoint"
IS44 = x3d.IS()
connect45 = x3d.connect()
connect45.nodeField = "description"
connect45.protoField = "description"

IS44.connect.append(connect45)
connect46 = x3d.connect()
connect46.nodeField = "position"
connect46.protoField = "position"

IS44.connect.append(connect46)
connect47 = x3d.connect()
connect47.nodeField = "orientation"
connect47.protoField = "orientation"

IS44.connect.append(connect47)
connect48 = x3d.connect()
connect48.nodeField = "fieldOfView"
connect48.protoField = "fieldOfView"

IS44.connect.append(connect48)
connect49 = x3d.connect()
connect49.nodeField = "set_bind"
connect49.protoField = "set_bind"

IS44.connect.append(connect49)
connect50 = x3d.connect()
connect50.nodeField = "bindTime"
connect50.protoField = "bindTime"

IS44.connect.append(connect50)
connect51 = x3d.connect()
connect51.nodeField = "isBound"
connect51.protoField = "isBound"

IS44.connect.append(connect51)

Viewpoint43.IS = IS44

ProtoBody42.children.append(Viewpoint43)
"""NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation"""
NavigationInfo52 = x3d.NavigationInfo()
NavigationInfo52.DEF = "CameraNavInfo"
NavigationInfo52.type = ["EXAMINE","FLY","ANY"]
IS53 = x3d.IS()
connect54 = x3d.connect()
connect54.nodeField = "set_bind"
connect54.protoField = "set_bind"

IS53.connect.append(connect54)
connect55 = x3d.connect()
connect55.nodeField = "headlight"
connect55.protoField = "headlight"

IS53.connect.append(connect55)
connect56 = x3d.connect()
connect56.nodeField = "visibilityLimit"
connect56.protoField = "farClipPlane"

IS53.connect.append(connect56)
"""No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing."""

NavigationInfo52.IS = IS53

ProtoBody42.children.append(NavigationInfo52)
"""this DirectionalLight replaces NavigationInfo headlight in order to add color capability"""
DirectionalLight57 = x3d.DirectionalLight()
DirectionalLight57.DEF = "CameraDirectionalLight"
DirectionalLight57.global_ = True
"""TODO confirm other default field values match NavigationInfo spec"""
IS58 = x3d.IS()
connect59 = x3d.connect()
connect59.nodeField = "on"
connect59.protoField = "headlight"

IS58.connect.append(connect59)
connect60 = x3d.connect()
connect60.nodeField = "color"
connect60.protoField = "headlightColor"

IS58.connect.append(connect60)
connect61 = x3d.connect()
connect61.nodeField = "intensity"
connect61.protoField = "headlightIntensity"

IS58.connect.append(connect61)

DirectionalLight57.IS = IS58

ProtoBody42.children.append(DirectionalLight57)
PositionInterpolator62 = x3d.PositionInterpolator()
PositionInterpolator62.DEF = "CameraPositionInterpolator"
PositionInterpolator62.key = [0,1]
IS63 = x3d.IS()
connect64 = x3d.connect()
connect64.nodeField = "set_fraction"
connect64.protoField = "set_fraction"

IS63.connect.append(connect64)

PositionInterpolator62.IS = IS63

ProtoBody42.children.append(PositionInterpolator62)
OrientationInterpolator65 = x3d.OrientationInterpolator()
OrientationInterpolator65.DEF = "CameraOrientationInterpolator"
OrientationInterpolator65.key = [0,1]
IS66 = x3d.IS()
connect67 = x3d.connect()
connect67.nodeField = "set_fraction"
connect67.protoField = "set_fraction"

IS66.connect.append(connect67)

OrientationInterpolator65.IS = IS66

ProtoBody42.children.append(OrientationInterpolator65)
ROUTE68 = x3d.ROUTE()
ROUTE68.fromField = "value_changed"
ROUTE68.fromNode = "CameraPositionInterpolator"
ROUTE68.toField = "position"
ROUTE68.toNode = "CameraViewpoint"

ProtoBody42.children.append(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.fromField = "value_changed"
ROUTE69.fromNode = "CameraOrientationInterpolator"
ROUTE69.toField = "orientation"
ROUTE69.toNode = "CameraViewpoint"

ProtoBody42.children.append(ROUTE69)
Script70 = x3d.Script()
Script70.DEF = "CameraScript"
Script70.directOutput = True
Script70.mustEvaluate = True
"""binding is controlled externally, all camera operations proceed the same regardless of whether bound or not"""
field71 = x3d.field()
field71.name = "description"
field71.accessType = "inputOutput"
field71.appinfo = "Text description to be displayed for this Camera"
field71.type = "SFString"

Script70.field.append(field71)
field72 = x3d.field()
field72.name = "position"
field72.accessType = "inputOutput"
field72.appinfo = "Camera position in local transformation frame"
field72.type = "SFVec3f"

Script70.field.append(field72)
field73 = x3d.field()
field73.name = "orientation"
field73.accessType = "inputOutput"
field73.appinfo = "Camera rotation in local transformation frame"
field73.type = "SFRotation"

Script70.field.append(field73)
field74 = x3d.field()
field74.name = "set_fraction"
field74.accessType = "inputOnly"
field74.appinfo = "input fraction drives interpolators"
field74.type = "SFFloat"

Script70.field.append(field74)
field75 = x3d.field()
field75.name = "set_bind"
field75.accessType = "inputOnly"
field75.appinfo = "input event binds or unbinds this Camera"
field75.type = "SFBool"

Script70.field.append(field75)
field76 = x3d.field()
field76.name = "fieldOfView"
field76.accessType = "inputOutput"
field76.appinfo = "pi/4"
field76.type = "SFFloat"

Script70.field.append(field76)
field77 = x3d.field()
field77.name = "nearClipPlane"
field77.accessType = "inputOutput"
field77.appinfo = "Vector distance to near clipping plane"
field77.type = "SFFloat"

Script70.field.append(field77)
field78 = x3d.field()
field78.name = "farClipPlane"
field78.accessType = "inputOutput"
field78.appinfo = "Vector distance to far clipping plane"
field78.type = "SFFloat"

Script70.field.append(field78)
field79 = x3d.field()
field79.name = "shots"
field79.accessType = "inputOutput"
field79.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes"
field79.type = "MFNode"
"""initialization nodes (if any) go here"""

Script70.field.append(field79)
field80 = x3d.field()
field80.name = "filterColor"
field80.accessType = "inputOutput"
field80.appinfo = "Camera filter color that modifies virtual lens capture"
field80.type = "SFColor"

Script70.field.append(field80)
field81 = x3d.field()
field81.name = "filterTransparency"
field81.accessType = "inputOutput"
field81.appinfo = "Camera filter transparency that modifies virtual lens capture"
field81.type = "SFFloat"

Script70.field.append(field81)
field82 = x3d.field()
field82.name = "upVector"
field82.accessType = "inputOutput"
field82.appinfo = "upVector changes modify camera orientation (and possibly vice versa)"
field82.type = "SFVec3f"

Script70.field.append(field82)
field83 = x3d.field()
field83.name = "fStop"
field83.accessType = "inputOutput"
field83.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane"
field83.type = "SFFloat"

Script70.field.append(field83)
field84 = x3d.field()
field84.name = "focusDistance"
field84.accessType = "inputOutput"
field84.appinfo = "Distance to focal plane of sharpest focus"
field84.type = "SFFloat"

Script70.field.append(field84)
field85 = x3d.field()
field85.name = "isActive"
field85.accessType = "outputOnly"
field85.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations"
field85.type = "SFBool"

Script70.field.append(field85)
field86 = x3d.field()
field86.name = "totalDuration"
field86.accessType = "outputOnly"
field86.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"
field86.type = "SFTime"

Script70.field.append(field86)
field87 = x3d.field()
field87.name = "offlineRender"
field87.accessType = "inputOutput"
field87.appinfo = "OfflineRender node"
field87.type = "SFNode"
"""initialization node (if any) goes here"""

Script70.field.append(field87)
field88 = x3d.field()
field88.name = "ViewpointNode"
field88.accessType = "initializeOnly"
field88.appinfo = "node reference to permit getting setting fields from within Script"
field88.type = "SFNode"
Viewpoint89 = x3d.Viewpoint()
Viewpoint89.USE = "CameraViewpoint"

field88.children.append(Viewpoint89)

Script70.field.append(field88)
field90 = x3d.field()
field90.name = "NavInfoNode"
field90.accessType = "initializeOnly"
field90.appinfo = "node reference to permit getting setting fields from within Script"
field90.type = "SFNode"
NavigationInfo91 = x3d.NavigationInfo()
NavigationInfo91.USE = "CameraNavInfo"

field90.children.append(NavigationInfo91)

Script70.field.append(field90)
field92 = x3d.field()
field92.name = "CameraPI"
field92.accessType = "initializeOnly"
field92.appinfo = "node reference to permit getting setting fields from within Script"
field92.type = "SFNode"
PositionInterpolator93 = x3d.PositionInterpolator()
PositionInterpolator93.USE = "CameraPositionInterpolator"

field92.children.append(PositionInterpolator93)

Script70.field.append(field92)
field94 = x3d.field()
field94.name = "CameraOI"
field94.accessType = "initializeOnly"
field94.appinfo = "node reference to permit getting setting fields from within Script"
field94.type = "SFNode"
OrientationInterpolator95 = x3d.OrientationInterpolator()
OrientationInterpolator95.USE = "CameraOrientationInterpolator"

field94.children.append(OrientationInterpolator95)

Script70.field.append(field94)
field96 = x3d.field()
field96.name = "key"
field96.accessType = "inputOutput"
field96.appinfo = "key array for interpolators"
field96.type = "MFFloat"

Script70.field.append(field96)
field97 = x3d.field()
field97.name = "keyValuePosition"
field97.accessType = "inputOutput"
field97.appinfo = "keyValue array for PositionInterpolator"
field97.type = "MFVec3f"

Script70.field.append(field97)
field98 = x3d.field()
field98.name = "keyValueOrientation"
field98.accessType = "inputOutput"
field98.appinfo = "keyValue array for OrientationInterpolator"
field98.type = "MFRotation"

Script70.field.append(field98)
field99 = x3d.field()
field99.name = "animated"
field99.accessType = "inputOutput"
field99.appinfo = "whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events"
field99.type = "SFBool"
field99.value = False

Script70.field.append(field99)
field100 = x3d.field()
field100.name = "initialized"
field100.accessType = "initializeOnly"
field100.appinfo = "perform checkShots() function once immediately after initialization"
field100.type = "SFBool"
field100.value = False

Script70.field.append(field100)
field101 = x3d.field()
field101.name = "shotCount"
field101.accessType = "initializeOnly"
field101.appinfo = "how many CameraShot nodes are contained in shots array"
field101.type = "SFInt32"
field101.value = 0

Script70.field.append(field101)
field102 = x3d.field()
field102.name = "movesCount"
field102.accessType = "initializeOnly"
field102.appinfo = "how many CameraMove nodes are contained in moves array"
field102.type = "SFInt32"
field102.value = 0

Script70.field.append(field102)
field103 = x3d.field()
field103.name = "frameCount"
field103.accessType = "initializeOnly"
field103.appinfo = "how many frames were created in current loop"
field103.type = "SFFloat"
field103.value = 0

Script70.field.append(field103)
field104 = x3d.field()
field104.name = "startTime"
field104.accessType = "initializeOnly"
field104.appinfo = "holding variable"
field104.type = "SFTime"
field104.value = 0

Script70.field.append(field104)
field105 = x3d.field()
field105.name = "priorTraceTime"
field105.accessType = "initializeOnly"
field105.appinfo = "holding variable"
field105.type = "SFTime"
field105.value = 0

Script70.field.append(field105)
field106 = x3d.field()
field106.name = "traceEnabled"
field106.accessType = "initializeOnly"
field106.appinfo = "enable console output to trace script computations and prototype progress"
field106.type = "SFBool"

Script70.field.append(field106)
IS107 = x3d.IS()
connect108 = x3d.connect()
connect108.nodeField = "description"
connect108.protoField = "description"

IS107.connect.append(connect108)
connect109 = x3d.connect()
connect109.nodeField = "position"
connect109.protoField = "position"

IS107.connect.append(connect109)
connect110 = x3d.connect()
connect110.nodeField = "orientation"
connect110.protoField = "orientation"

IS107.connect.append(connect110)
connect111 = x3d.connect()
connect111.nodeField = "set_fraction"
connect111.protoField = "set_fraction"

IS107.connect.append(connect111)
connect112 = x3d.connect()
connect112.nodeField = "set_bind"
connect112.protoField = "set_bind"

IS107.connect.append(connect112)
connect113 = x3d.connect()
connect113.nodeField = "fieldOfView"
connect113.protoField = "fieldOfView"

IS107.connect.append(connect113)
connect114 = x3d.connect()
connect114.nodeField = "nearClipPlane"
connect114.protoField = "nearClipPlane"

IS107.connect.append(connect114)
connect115 = x3d.connect()
connect115.nodeField = "farClipPlane"
connect115.protoField = "farClipPlane"

IS107.connect.append(connect115)
connect116 = x3d.connect()
connect116.nodeField = "shots"
connect116.protoField = "shots"

IS107.connect.append(connect116)
connect117 = x3d.connect()
connect117.nodeField = "filterColor"
connect117.protoField = "filterColor"

IS107.connect.append(connect117)
connect118 = x3d.connect()
connect118.nodeField = "filterTransparency"
connect118.protoField = "filterTransparency"

IS107.connect.append(connect118)
connect119 = x3d.connect()
connect119.nodeField = "upVector"
connect119.protoField = "upVector"

IS107.connect.append(connect119)
connect120 = x3d.connect()
connect120.nodeField = "fStop"
connect120.protoField = "fStop"

IS107.connect.append(connect120)
connect121 = x3d.connect()
connect121.nodeField = "focusDistance"
connect121.protoField = "focusDistance"

IS107.connect.append(connect121)
connect122 = x3d.connect()
connect122.nodeField = "isActive"
connect122.protoField = "isActive"

IS107.connect.append(connect122)
connect123 = x3d.connect()
connect123.nodeField = "totalDuration"
connect123.protoField = "totalDuration"

IS107.connect.append(connect123)
connect124 = x3d.connect()
connect124.nodeField = "offlineRender"
connect124.protoField = "offlineRender"

IS107.connect.append(connect124)
connect125 = x3d.connect()
connect125.nodeField = "traceEnabled"
connect125.protoField = "traceEnabled"

IS107.connect.append(connect125)

Script70.IS = IS107

Script70.sourceCode = '''ecmascript:\n"+
"function initialize () // CameraScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"    NavInfoNode.avatarSize[0]   = nearClipPlane;\n"+
"\n"+
"    // remaining setups deferred to invocation of checkShots() method\n"+
"    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization\n"+
"    alwaysPrint ('initialize complete');\n"+
"}\n"+
"\n"+
"function checkShots (eventValue)\n"+
"{\n"+
"    tracePrint ('checkShots() method should only occur after initialize() methods in all other Scripts are complete');\n"+
"\n"+
"    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes\n"+
"    totalDuration= 0;\n"+
"    shotCount  = shots.length;\n"+
"    movesCount = 0;\n"+
"    for (i = 0; i < shotCount; i++) // shots index\n"+
"    {\n"+
"       tracePrint ('shots[' + i + '].moves.length=' + shots[i].moves.length);\n"+
"       movesCount   += shots[i].moves.length;\n"+
"       totalDuration = totalDuration + shots[i].shotDuration;\n"+
"       if (shots[i].moves.length == 0)\n"+
"       {\n"+
"          alwaysPrint ('warning: CameraShot[' + i + '][' + shots[i].description + '] has no contained CameraMove nodes');\n"+
"       }\n"+
"    }\n"+
"    // size checks before proceeding\n"+
"    if (shotCount == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: no CameraShot nodes found for the shots, nothing to do!');\n"+
"       return;\n"+
"    }\n"+
"    else if (movesCount == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: no CameraMove nodes found for the shots, nothing to do!');\n"+
"       return;\n"+
"    }\n"+
"    else if (totalDuration == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: totalDuration = 0 seconds, nothing to do!');\n"+
"       return;\n"+
"    }\n"+
"    tracePrint ('number of contained CameraShot nodes=' + shotCount);\n"+
"    tracePrint ('number of contained CameraMove nodes=' + movesCount);\n"+
"    tracePrint ('totalDuration=' + totalDuration + ' seconds for all shots and moves');\n"+
"\n"+
"    // compute interpolators\n"+
"    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation\n"+
"    for (i = 0; i < shotCount; i++) // shots index\n"+
"    {\n"+
"        if (i==0) // initial entries\n"+
"        {\n"+
"           key[0]                   = 0.0; // no previous move\n"+
"           keyValuePosition[0]      = shots[i].initialPosition;\n"+
"           keyValueOrientation[0]   = shots[i].initialOrientation;\n"+
"        }\n"+
"        else     // new shot repositions, reorients camera as clean break from preceding shot/move\n"+
"        {\n"+
"           key[k+1]                 = key[k]; // start from end from previous move\n"+
"           keyValuePosition[k+1]    = shots[i].initialPosition;\n"+
"           keyValueOrientation[k+1] = shots[i].initialOrientation;\n"+
"           k++;\n"+
"        }\n"+
"        tracePrint (shots[i].description);\n"+
"        tracePrint ('shots[i].moves.length=' + shots[i].moves.length);\n"+
"\n"+
"        for (j = 0; j < shots[i].moves.length; j++) // moves index\n"+
"        {\n"+
"            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime\n"+
"            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime\n"+
"            //  tracePrint ('durationFloat=' + durationFloat);\n"+
"            key[k+1]               = key[k] + (durationFloat / totalDuration);\n"+
"            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;\n"+
"            if (!animated)\n"+
"            {\n"+
"                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\n"+
"            }\n"+
"            else\n"+
"            {\n"+
"                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)\n"+
"                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions\n"+
"\n"+
"                // test if difference vector is zero, if so maintain previous rotation\n"+
"                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();\n"+
"                if (shotVector.length() >= 0)\n"+
"                {\n"+
"                    // default view direction is along -Z axis\n"+
"                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);\n"+
"                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\n"+
"                }\n"+
"                else // note (k > 0)\n"+
"                {\n"+
"                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change\n"+
"                }\n"+
"\n"+
"                tracePrint ('shots[' + i + '].moves[' + j + '].goalAimPoint=' + shots[i].moves[j].goalAimPoint.toString());\n"+
"                tracePrint ('        ViewpointNode.position=' + ViewpointNode.position.toString());\n"+
"                tracePrint ('          shotVector     delta=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());\n"+
"                tracePrint ('          shotVector normalize=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());\n"+
"                tracePrint ('               goalOrientation=' + shots[i].moves[j].goalOrientation.toString());\n"+
"                tracePrint ('      keyValueOrientation[k+1]=' + keyValueOrientation[k+1].toString() + '\\n');\n"+
"            }\n"+
"            k++; // update index to match latest key, keyValuePosition, keyValueOrientation\n"+
"\n"+
"            // check animated parameter:  set true if any of moves are tracking moves\n"+
"            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true\n"+
"         // tracePrint ('shots[' + i + '].moves[' + j + '].tracking=' + shots[i].moves[j].tracking + ', animated=' + animated);\n"+
"\n"+
"            // intermediate trace\n"+
"            tracePrint ('                key=' + key);\n"+
"            tracePrint ('   keyValuePosition=' + keyValuePosition);\n"+
"            tracePrint ('keyValueOrientation=' + keyValueOrientation);\n"+
"            tracePrint ('- ' + shots[i].moves[j].description);\n"+
"        }\n"+
"    }\n"+
"    tracePrint ('                key=' + key);\n"+
"    tracePrint ('   keyValuePosition=' + keyValuePosition);\n"+
"    tracePrint ('keyValueOrientation=' + keyValueOrientation);\n"+
"    if (key.length != keyValuePosition.length)\n"+
"    {\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"                  'keyValuePosition.length=' + keyValuePosition.length);\n"+
"    }\n"+
"    if (key.length != keyValueOrientation.length)\n"+
"    {\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"                  'keyValueOrientation.length=' + keyValueOrientation.length);\n"+
"    }\n"+
"    if (key.length != (shotCount + movesCount))\n"+
"    {\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"                  '(shotCount + movesCount)=' + (shotCount + movesCount));\n"+
"    }\n"+
"    tracePrint ('           animated=' + animated);\n"+
"    // set node values\n"+
"    CameraPI.key      = key;\n"+
"    CameraOI.key      = key;\n"+
"    CameraPI.keyValue = keyValuePosition;\n"+
"    CameraOI.keyValue = keyValueOrientation;\n"+
"\n"+
"    if (!animated) // output results\n"+
"    {\n"+
"        tracePrint ('<PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"        tracePrint ('<OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"    }\n"+
"    tracePrint ('checkShots() complete');\n"+
"}\n"+
"\n"+
"function stripBrackets (fieldArray)\n"+
"{\n"+
"    // some browsers add brackets to array output strings, this function strips them\n"+
"    outputString = '';\n"+
"    for (i = 0; i < fieldArray.length; i++)\n"+
"    {\n"+
"       outputString += fieldArray[i].toString();\n"+
"       if (i < fieldArray.length - 1) outputString += ' ';\n"+
"    }\n"+
"    return outputString;\n"+
"}\n"+
"\n"+
"function set_fraction (eventValue, timestamp) // input event received for inputOnly field\n"+
"{\n"+
"   // traceEnabled = false;  // for testing purposes\n"+
"\n"+
"   // if Camera is being animated, immediately recompute interpolator settings\n"+
"   if (animated) checkShots (true);\n"+
"\n"+
"   // trace progress on console with reduced output frequency\n"+
"   if (frameCount == 0)\n"+
"   {\n"+
"      alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);\n"+
"      startTime      = timestamp;\n"+
"      priorTraceTime = timestamp;\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"\n"+
"      if (animated) // output results\n"+
"      {\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"        tracePrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"      }\n"+
"   }\n"+
"   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval\n"+
"   {\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"      priorTraceTime = timestamp;\n"+
"\n"+
"      if (animated) // output results\n"+
"      {\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"        alwaysPrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"      }\n"+
"   }\n"+
"   if (eventValue == 0)\n"+
"   {\n"+
"      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored\n"+
"      frameCount++;\n"+
"   }\n"+
"   else if (eventValue == 1)\n"+
"   {\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ', frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"      if (animated) // output results\n"+
"      {\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"      }\n"+
"      alwaysPrint ('Animation loop complete.');\n"+
"      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally\n"+
"   }\n"+
"   else\n"+
"   {\n"+
"      frameCount++;\n"+
"   }\n"+
"}\n"+
"\n"+
"function set_bind (eventValue) // input event received for inputOnly field\n"+
"{\n"+
"   // need to ensure CameraShot nodes are properly initialized\n"+
"   if (initialized == false)\n"+
"   {\n"+
"      checkShots (true);\n"+
"      initialized = true;\n"+
"   }\n"+
"   if (eventValue)\n"+
"   {\n"+
"       tracePrint ('Camera has been bound');\n"+
"   }\n"+
"   else\n"+
"   {\n"+
"       tracePrint ('Camera has been unbound');\n"+
"   }\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_position (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    position = eventValue;\n"+
"}\n"+
"\n"+
"function set_orientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    orientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_fieldOfView (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    fieldOfView = eventValue;\n"+
"}\n"+
"\n"+
"function set_nearClipPlane (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    nearClipPlane = eventValue;\n"+
"}\n"+
"\n"+
"function set_farClipPlane (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    farClipPlane = eventValue;\n"+
"}\n"+
"\n"+
"function set_shots (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    shots = eventValue;\n"+
"}\n"+
"\n"+
"function set_filterColor (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    filterColor = eventValue;\n"+
"}\n"+
"\n"+
"function set_filterTransparency (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    filterTransparency = eventValue;\n"+
"}\n"+
"\n"+
"function set_upVector (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    upVector = eventValue;\n"+
"}\n"+
"\n"+
"function set_fStop (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    fStop = eventValue;\n"+
"}\n"+
"\n"+
"function set_focusDistance (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    focusDistance = eventValue;\n"+
"}\n"+
"\n"+
"function set_offlineRender (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    offlineRender = eventValue;\n"+
"}\n"+
"\n"+
"function set_key (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    key = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValuePosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValuePosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValueOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValueOrientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_animated (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    animated = eventValue;\n"+
"}\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[Camera: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[Camera] ' + outputString + '\\n');\n"+
"}'''

ProtoBody42.children.append(Script70)
ROUTE126 = x3d.ROUTE()
ROUTE126.fromField = "position"
ROUTE126.fromNode = "CameraScript"
ROUTE126.toField = "position"
ROUTE126.toNode = "CameraViewpoint"

ProtoBody42.children.append(ROUTE126)
ROUTE127 = x3d.ROUTE()
ROUTE127.fromField = "orientation"
ROUTE127.fromNode = "CameraScript"
ROUTE127.toField = "orientation"
ROUTE127.toNode = "CameraViewpoint"

ProtoBody42.children.append(ROUTE127)
ROUTE128 = x3d.ROUTE()
ROUTE128.fromField = "isActive"
ROUTE128.fromNode = "CameraScript"
ROUTE128.toField = "set_bind"
ROUTE128.toNode = "CameraViewpoint"

ProtoBody42.children.append(ROUTE128)
ROUTE129 = x3d.ROUTE()
ROUTE129.fromField = "isActive"
ROUTE129.fromNode = "CameraScript"
ROUTE129.toField = "set_bind"
ROUTE129.toNode = "CameraNavInfo"

ProtoBody42.children.append(ROUTE129)
ROUTE130 = x3d.ROUTE()
ROUTE130.fromField = "isActive"
ROUTE130.fromNode = "CameraScript"
ROUTE130.toField = "on"
ROUTE130.toNode = "CameraDirectionalLight"

ProtoBody42.children.append(ROUTE130)

ProtoDeclare17.ProtoBody = ProtoBody42

Scene16.children.append(ProtoDeclare17)
"""=============== CameraShot =============="""
ProtoDeclare131 = x3d.ProtoDeclare()
ProtoDeclare131.name = "CameraShot"
ProtoDeclare131.appinfo = "CameraShot collects a specific set of CameraMovement animations that make up an individual shot."
ProtoInterface132 = x3d.ProtoInterface()
field133 = x3d.field()
field133.name = "description"
field133.accessType = "inputOutput"
field133.appinfo = "Text description to be displayed for this CameraShot"
field133.type = "SFString"

ProtoInterface132.field.append(field133)
field134 = x3d.field()
field134.name = "enabled"
field134.accessType = "inputOutput"
field134.appinfo = "Whether this CameraShot can be activated"
field134.type = "SFBool"
field134.value = True

ProtoInterface132.field.append(field134)
field135 = x3d.field()
field135.name = "moves"
field135.accessType = "inputOutput"
field135.appinfo = "Set of CameraMovement nodes"
field135.type = "MFNode"
"""initializing CameraMovement nodes are inserted here by scene author using ProtoInstance"""

ProtoInterface132.field.append(field135)
field136 = x3d.field()
field136.name = "initialPosition"
field136.accessType = "inputOutput"
field136.appinfo = "Setup to reinitialize camera position for this shot"
field136.type = "SFVec3f"
field136.value = [0,0,10]

ProtoInterface132.field.append(field136)
field137 = x3d.field()
field137.name = "initialOrientation"
field137.accessType = "inputOutput"
field137.appinfo = "Setup to reinitialize camera rotation for this shot"
field137.type = "SFRotation"
field137.value = [0,0,1,0]

ProtoInterface132.field.append(field137)
field138 = x3d.field()
field138.name = "initialAimPoint"
field138.accessType = "inputOutput"
field138.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot"
field138.type = "SFVec3f"
field138.value = [0,0,0]

ProtoInterface132.field.append(field138)
field139 = x3d.field()
field139.name = "initialFieldOfView"
field139.accessType = "inputOutput"
field139.appinfo = "pi/4"
field139.type = "SFFloat"
field139.value = 0.7854

ProtoInterface132.field.append(field139)
field140 = x3d.field()
field140.name = "initialFStop"
field140.accessType = "inputOutput"
field140.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane"
field140.type = "SFFloat"
field140.value = 5.6

ProtoInterface132.field.append(field140)
field141 = x3d.field()
field141.name = "initialFocusDistance"
field141.accessType = "inputOutput"
field141.appinfo = "Distance to focal plane of sharpest focus"
field141.type = "SFFloat"
field141.value = 10

ProtoInterface132.field.append(field141)
field142 = x3d.field()
field142.name = "shotDuration"
field142.accessType = "outputOnly"
field142.appinfo = "Subtotal duration of contained CameraMovement move durations"
field142.type = "SFTime"

ProtoInterface132.field.append(field142)
field143 = x3d.field()
field143.name = "isActive"
field143.accessType = "outputOnly"
field143.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations"
field143.type = "SFBool"

ProtoInterface132.field.append(field143)
field144 = x3d.field()
field144.name = "traceEnabled"
field144.accessType = "initializeOnly"
field144.appinfo = "enable console output to trace script computations and prototype progress"
field144.type = "SFBool"
field144.value = False

ProtoInterface132.field.append(field144)

ProtoDeclare131.ProtoInterface = ProtoInterface132
ProtoBody145 = x3d.ProtoBody()
Script146 = x3d.Script()
Script146.DEF = "CameraShotScript"
Script146.directOutput = True
Script146.mustEvaluate = True
field147 = x3d.field()
field147.name = "description"
field147.accessType = "inputOutput"
field147.appinfo = "Text description to be displayed for this CameraShot"
field147.type = "SFString"

Script146.field.append(field147)
field148 = x3d.field()
field148.name = "enabled"
field148.accessType = "inputOutput"
field148.appinfo = "Whether this CameraShot can be activated"
field148.type = "SFBool"

Script146.field.append(field148)
field149 = x3d.field()
field149.name = "moves"
field149.accessType = "inputOutput"
field149.appinfo = "Set of CameraMovement nodes"
field149.type = "MFNode"
"""initialization nodes (if any) go here"""

Script146.field.append(field149)
field150 = x3d.field()
field150.name = "initialPosition"
field150.accessType = "inputOutput"
field150.appinfo = "Setup to reinitialize camera position for this shot"
field150.type = "SFVec3f"

Script146.field.append(field150)
field151 = x3d.field()
field151.name = "initialOrientation"
field151.accessType = "inputOutput"
field151.appinfo = "Setup to reinitialize camera rotation for this shot"
field151.type = "SFRotation"

Script146.field.append(field151)
field152 = x3d.field()
field152.name = "initialAimPoint"
field152.accessType = "inputOutput"
field152.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot"
field152.type = "SFVec3f"

Script146.field.append(field152)
field153 = x3d.field()
field153.name = "initialFieldOfView"
field153.accessType = "inputOutput"
field153.appinfo = "pi/4"
field153.type = "SFFloat"

Script146.field.append(field153)
field154 = x3d.field()
field154.name = "initialFStop"
field154.accessType = "inputOutput"
field154.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane"
field154.type = "SFFloat"

Script146.field.append(field154)
field155 = x3d.field()
field155.name = "initialFocusDistance"
field155.accessType = "inputOutput"
field155.appinfo = "Distance to focal plane of sharpest focus"
field155.type = "SFFloat"

Script146.field.append(field155)
field156 = x3d.field()
field156.name = "shotDuration"
field156.accessType = "outputOnly"
field156.appinfo = "Subtotal duration of contained CameraMovement move durations"
field156.type = "SFTime"

Script146.field.append(field156)
field157 = x3d.field()
field157.name = "isActive"
field157.accessType = "outputOnly"
field157.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations"
field157.type = "SFBool"

Script146.field.append(field157)
field158 = x3d.field()
field158.name = "traceEnabled"
field158.accessType = "initializeOnly"
field158.appinfo = "enable console output to trace script computations and prototype progress"
field158.type = "SFBool"

Script146.field.append(field158)
field159 = x3d.field()
field159.name = "key"
field159.accessType = "inputOutput"
field159.appinfo = "key array for interpolators"
field159.type = "MFFloat"

Script146.field.append(field159)
field160 = x3d.field()
field160.name = "keyValuePosition"
field160.accessType = "inputOutput"
field160.appinfo = "keyValue array for PositionInterpolator"
field160.type = "MFVec3f"

Script146.field.append(field160)
field161 = x3d.field()
field161.name = "keyValueOrientation"
field161.accessType = "inputOutput"
field161.appinfo = "keyValue array for OrientationInterpolator"
field161.type = "MFRotation"

Script146.field.append(field161)
IS162 = x3d.IS()
connect163 = x3d.connect()
connect163.nodeField = "description"
connect163.protoField = "description"

IS162.connect.append(connect163)
connect164 = x3d.connect()
connect164.nodeField = "enabled"
connect164.protoField = "enabled"

IS162.connect.append(connect164)
connect165 = x3d.connect()
connect165.nodeField = "moves"
connect165.protoField = "moves"

IS162.connect.append(connect165)
connect166 = x3d.connect()
connect166.nodeField = "initialPosition"
connect166.protoField = "initialPosition"

IS162.connect.append(connect166)
connect167 = x3d.connect()
connect167.nodeField = "initialOrientation"
connect167.protoField = "initialOrientation"

IS162.connect.append(connect167)
connect168 = x3d.connect()
connect168.nodeField = "initialAimPoint"
connect168.protoField = "initialAimPoint"

IS162.connect.append(connect168)
connect169 = x3d.connect()
connect169.nodeField = "initialFieldOfView"
connect169.protoField = "initialFieldOfView"

IS162.connect.append(connect169)
connect170 = x3d.connect()
connect170.nodeField = "initialFStop"
connect170.protoField = "initialFStop"

IS162.connect.append(connect170)
connect171 = x3d.connect()
connect171.nodeField = "initialFocusDistance"
connect171.protoField = "initialFocusDistance"

IS162.connect.append(connect171)
connect172 = x3d.connect()
connect172.nodeField = "shotDuration"
connect172.protoField = "shotDuration"

IS162.connect.append(connect172)
connect173 = x3d.connect()
connect173.nodeField = "isActive"
connect173.protoField = "isActive"

IS162.connect.append(connect173)
connect174 = x3d.connect()
connect174.nodeField = "traceEnabled"
connect174.protoField = "traceEnabled"

IS162.connect.append(connect174)

Script146.IS = IS162

Script146.sourceCode = '''ecmascript:\n"+
"function initialize () // CameraShotScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"    // compute shotDuration by summing durations from contained CameraMovement nodes\n"+
"    shotDuration = 0;\n"+
"    for (i = 0; i < moves.length; i++)\n"+
"    {\n"+
"        shotDuration = shotDuration + moves[i].duration;\n"+
"    }\n"+
"    alwaysPrint ('number of contained CameraMove nodes=' + moves.length + ', shotDuration=' + shotDuration + ' seconds');\n"+
"\n"+
"//  tracePrint ('... initialize() complete');\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    enabled = eventValue;\n"+
"}\n"+
"\n"+
"function set_moves (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    moves = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialPosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialPosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialOrientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialAimPoint (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialAimPoint = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialFieldOfView (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialFieldOfView = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialFStop (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialFStop = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialFocusDistance (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialFocusDistance = eventValue;\n"+
"}\n"+
"\n"+
"function set_key (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    key = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValuePosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValuePosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValueOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValueOrientation = eventValue;\n"+
"}\n"+
"\n"+
"// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[CameraShot] ' + outputString + '\\n');\n"+
"}'''

ProtoBody145.children.append(Script146)
"""Add any ROUTEs here, going from Script to other nodes within ProtoBody"""

ProtoDeclare131.ProtoBody = ProtoBody145

Scene16.children.append(ProtoDeclare131)
"""=============== CameraMovement =============="""
ProtoDeclare175 = x3d.ProtoDeclare()
ProtoDeclare175.name = "CameraMovement"
ProtoDeclare175.appinfo = "CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView."
ProtoInterface176 = x3d.ProtoInterface()
field177 = x3d.field()
field177.name = "description"
field177.accessType = "inputOutput"
field177.appinfo = "Text description to be displayed for this CameraMovement"
field177.type = "SFString"

ProtoInterface176.field.append(field177)
field178 = x3d.field()
field178.name = "enabled"
field178.accessType = "inputOutput"
field178.appinfo = "Whether this CameraMovement can be activated"
field178.type = "SFBool"
field178.value = True

ProtoInterface176.field.append(field178)
field179 = x3d.field()
field179.name = "duration"
field179.accessType = "inputOutput"
field179.appinfo = "Duration in seconds for this move"
field179.type = "SFFloat"
field179.value = 0

ProtoInterface176.field.append(field179)
field180 = x3d.field()
field180.name = "goalPosition"
field180.accessType = "inputOutput"
field180.appinfo = "Goal camera position for this move"
field180.type = "SFVec3f"
field180.value = [0,0,10]

ProtoInterface176.field.append(field180)
field181 = x3d.field()
field181.name = "goalOrientation"
field181.accessType = "inputOutput"
field181.appinfo = "Goal camera rotation for this move"
field181.type = "SFRotation"
field181.value = [0,0,1,0]

ProtoInterface176.field.append(field181)
field182 = x3d.field()
field182.name = "tracking"
field182.accessType = "inputOutput"
field182.appinfo = "Whether or not camera direction is tracking towards the aimPoint"
field182.type = "SFBool"
field182.value = False

ProtoInterface176.field.append(field182)
field183 = x3d.field()
field183.name = "goalAimPoint"
field183.accessType = "inputOutput"
field183.appinfo = "Goal aimPoint for this move, ignored if tracking=false"
field183.type = "SFVec3f"
field183.value = [0,0,0]

ProtoInterface176.field.append(field183)
field184 = x3d.field()
field184.name = "goalFieldOfView"
field184.accessType = "inputOutput"
field184.appinfo = "Goal fieldOfView for this move"
field184.type = "SFFloat"
field184.value = 0.7854

ProtoInterface176.field.append(field184)
field185 = x3d.field()
field185.name = "goalFStop"
field185.accessType = "inputOutput"
field185.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane"
field185.type = "SFFloat"
field185.value = 5.6

ProtoInterface176.field.append(field185)
field186 = x3d.field()
field186.name = "goalFocusDistance"
field186.accessType = "inputOutput"
field186.appinfo = "Distance to focal plane of sharpest focus"
field186.type = "SFFloat"
field186.value = 10

ProtoInterface176.field.append(field186)
field187 = x3d.field()
field187.name = "isActive"
field187.accessType = "outputOnly"
field187.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations"
field187.type = "SFBool"

ProtoInterface176.field.append(field187)
field188 = x3d.field()
field188.name = "traceEnabled"
field188.accessType = "initializeOnly"
field188.appinfo = "enable console output to trace script computations and prototype progress"
field188.type = "SFBool"
field188.value = False

ProtoInterface176.field.append(field188)

ProtoDeclare175.ProtoInterface = ProtoInterface176
ProtoBody189 = x3d.ProtoBody()
"""First node determines node type of this prototype"""
"""Subsequent nodes do not render, but still must be a valid X3D subgraph"""
"""Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events"""
Script190 = x3d.Script()
Script190.DEF = "CameraMovementScript"
Script190.directOutput = True
Script190.mustEvaluate = True
field191 = x3d.field()
field191.name = "description"
field191.accessType = "inputOutput"
field191.appinfo = "Text description to be displayed for this CameraMovement"
field191.type = "SFString"

Script190.field.append(field191)
field192 = x3d.field()
field192.name = "enabled"
field192.accessType = "inputOutput"
field192.appinfo = "Whether this CameraMovement can be activated"
field192.type = "SFBool"

Script190.field.append(field192)
field193 = x3d.field()
field193.name = "duration"
field193.accessType = "inputOutput"
field193.appinfo = "Duration in seconds for this move"
field193.type = "SFFloat"

Script190.field.append(field193)
field194 = x3d.field()
field194.name = "goalPosition"
field194.accessType = "inputOutput"
field194.appinfo = "Goal camera position for this move"
field194.type = "SFVec3f"

Script190.field.append(field194)
field195 = x3d.field()
field195.name = "goalOrientation"
field195.accessType = "inputOutput"
field195.appinfo = "Goal camera rotation for this move"
field195.type = "SFRotation"

Script190.field.append(field195)
field196 = x3d.field()
field196.name = "tracking"
field196.accessType = "inputOutput"
field196.appinfo = "Whether or not camera direction is tracking towards the aimPoint"
field196.type = "SFBool"

Script190.field.append(field196)
field197 = x3d.field()
field197.name = "goalAimPoint"
field197.accessType = "inputOutput"
field197.appinfo = "Goal aimPoint for this move, ignored if tracking=false"
field197.type = "SFVec3f"

Script190.field.append(field197)
field198 = x3d.field()
field198.name = "goalFieldOfView"
field198.accessType = "inputOutput"
field198.appinfo = "Goal fieldOfView for this move"
field198.type = "SFFloat"

Script190.field.append(field198)
field199 = x3d.field()
field199.name = "goalFStop"
field199.accessType = "inputOutput"
field199.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane"
field199.type = "SFFloat"

Script190.field.append(field199)
field200 = x3d.field()
field200.name = "goalFocusDistance"
field200.accessType = "inputOutput"
field200.appinfo = "Distance to focal plane of sharpest focus"
field200.type = "SFFloat"

Script190.field.append(field200)
field201 = x3d.field()
field201.name = "isActive"
field201.accessType = "outputOnly"
field201.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations"
field201.type = "SFBool"

Script190.field.append(field201)
field202 = x3d.field()
field202.name = "traceEnabled"
field202.accessType = "initializeOnly"
field202.appinfo = "enable console output to trace script computations and prototype progress"
field202.type = "SFBool"

Script190.field.append(field202)
IS203 = x3d.IS()
connect204 = x3d.connect()
connect204.nodeField = "description"
connect204.protoField = "description"

IS203.connect.append(connect204)
connect205 = x3d.connect()
connect205.nodeField = "enabled"
connect205.protoField = "enabled"

IS203.connect.append(connect205)
connect206 = x3d.connect()
connect206.nodeField = "duration"
connect206.protoField = "duration"

IS203.connect.append(connect206)
connect207 = x3d.connect()
connect207.nodeField = "goalPosition"
connect207.protoField = "goalPosition"

IS203.connect.append(connect207)
connect208 = x3d.connect()
connect208.nodeField = "goalOrientation"
connect208.protoField = "goalOrientation"

IS203.connect.append(connect208)
connect209 = x3d.connect()
connect209.nodeField = "tracking"
connect209.protoField = "tracking"

IS203.connect.append(connect209)
connect210 = x3d.connect()
connect210.nodeField = "goalAimPoint"
connect210.protoField = "goalAimPoint"

IS203.connect.append(connect210)
connect211 = x3d.connect()
connect211.nodeField = "goalFieldOfView"
connect211.protoField = "goalFieldOfView"

IS203.connect.append(connect211)
connect212 = x3d.connect()
connect212.nodeField = "goalFStop"
connect212.protoField = "goalFStop"

IS203.connect.append(connect212)
connect213 = x3d.connect()
connect213.nodeField = "goalFocusDistance"
connect213.protoField = "goalFocusDistance"

IS203.connect.append(connect213)
connect214 = x3d.connect()
connect214.nodeField = "isActive"
connect214.protoField = "isActive"

IS203.connect.append(connect214)
connect215 = x3d.connect()
connect215.nodeField = "traceEnabled"
connect215.protoField = "traceEnabled"

IS203.connect.append(connect215)

Script190.IS = IS203

Script190.sourceCode = '''ecmascript:\n"+
"function initialize () // CameraMovementScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"    alwaysPrint ('initialize goalPosition=' + goalPosition.toString() + ', goalOrientation=' + goalOrientation.toString() +\n"+
"                           ', goalAimPoint=' + goalAimPoint.toString() // + ', tracking=' + tracking.toString()\n"+
"                           );\n"+
"    if (duration < 0)\n"+
"    {\n"+
"       alwaysPrint ('error: negative duration=' + duration + ', reset to 0 and ignored');\n"+
"       duration = 0;\n"+
"    }\n"+
"    else if (duration == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: duration=0, nothing to do!');\n"+
"    }\n"+
"    tracePrint ('... initialize complete');\n"+
"}\n"+
"\n"+
"function set_goalAimPoint (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalAimPoint_changed = eventValue;\n"+
"    tracePrint ('goalAimPoint=' + goalAimPoint.toString());\n"+
"\n"+
"    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    enabled = eventValue;\n"+
"}\n"+
"\n"+
"function set_duration (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    duration = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalPosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalPosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalOrientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_tracking (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    tracking = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalFieldOfView (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalFieldOfView = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalFStop (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalFStop = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalFocusDistance (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalFocusDistance = eventValue;\n"+
"}\n"+
"\n"+
"// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[CameraMovement] ' + outputString + '\\n');\n"+
"}'''

ProtoBody189.children.append(Script190)
"""Add any ROUTEs here, going from Script to other nodes within ProtoBody"""

ProtoDeclare175.ProtoBody = ProtoBody189

Scene16.children.append(ProtoDeclare175)
"""=============== OfflineRender =============="""
ProtoDeclare216 = x3d.ProtoDeclare()
ProtoDeclare216.name = "OfflineRender"
ProtoDeclare216.appinfo = "OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)."
ProtoInterface217 = x3d.ProtoInterface()
"""TODO non-photorealistic rendering (NPR) parameters"""
field218 = x3d.field()
field218.name = "description"
field218.accessType = "inputOutput"
field218.appinfo = "Text description to be displayed for this OfflineRender"
field218.type = "SFString"

ProtoInterface217.field.append(field218)
field219 = x3d.field()
field219.name = "enabled"
field219.accessType = "inputOutput"
field219.appinfo = "Whether this OfflineRender can be activated"
field219.type = "SFBool"
field219.value = True

ProtoInterface217.field.append(field219)
field220 = x3d.field()
field220.name = "frameRate"
field220.accessType = "inputOutput"
field220.appinfo = "Frames per second recorded for this rendering"
field220.type = "SFFloat"
field220.value = 30

ProtoInterface217.field.append(field220)
field221 = x3d.field()
field221.name = "frameSize"
field221.accessType = "inputOutput"
field221.appinfo = "Size of frame in number of pixels width and height"
field221.type = "SFVec2f"
field221.value = [640,480]

ProtoInterface217.field.append(field221)
field222 = x3d.field()
field222.name = "pixelAspectRatio"
field222.accessType = "inputOutput"
field222.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1"
field222.type = "SFFloat"
field222.value = 1.33

ProtoInterface217.field.append(field222)
field223 = x3d.field()
field223.name = "set_startTime"
field223.accessType = "inputOnly"
field223.appinfo = "Begin render operation"
field223.type = "SFTime"

ProtoInterface217.field.append(field223)
field224 = x3d.field()
field224.name = "progress"
field224.accessType = "outputOnly"
field224.appinfo = "Progress performing render operation (0..1)"
field224.type = "SFFloat"

ProtoInterface217.field.append(field224)
field225 = x3d.field()
field225.name = "renderCompleteTime"
field225.accessType = "outputOnly"
field225.appinfo = "Render operation complete"
field225.type = "SFTime"

ProtoInterface217.field.append(field225)
field226 = x3d.field()
field226.name = "movieFormat"
field226.accessType = "initializeOnly"
field226.appinfo = "Format of rendered output movie (mpeg mp4 etc.), use first supported format"
field226.type = "MFString"
field226.value = ["mpeg"]

ProtoInterface217.field.append(field226)
field227 = x3d.field()
field227.name = "imageFormat"
field227.accessType = "initializeOnly"
field227.appinfo = "Format of rendered output images (png jpeg gif tiff etc.) use first supported format"
field227.type = "MFString"
field227.value = ["png"]

ProtoInterface217.field.append(field227)
field228 = x3d.field()
field228.name = "traceEnabled"
field228.accessType = "initializeOnly"
field228.appinfo = "enable console output to trace script computations and prototype progress"
field228.type = "SFBool"
field228.value = False

ProtoInterface217.field.append(field228)

ProtoDeclare216.ProtoInterface = ProtoInterface217
ProtoBody229 = x3d.ProtoBody()
"""First node determines node type of this prototype"""
"""Subsequent nodes do not render, but still must be a valid X3D subgraph"""
Script230 = x3d.Script()
Script230.DEF = "OfflineRenderScript"
Script230.mustEvaluate = True
field231 = x3d.field()
field231.name = "description"
field231.accessType = "inputOutput"
field231.appinfo = "Text description to be displayed for this OfflineRender"
field231.type = "SFString"

Script230.field.append(field231)
field232 = x3d.field()
field232.name = "enabled"
field232.accessType = "inputOutput"
field232.appinfo = "Whether this OfflineRender can be activated"
field232.type = "SFBool"

Script230.field.append(field232)
field233 = x3d.field()
field233.name = "frameRate"
field233.accessType = "inputOutput"
field233.appinfo = "Frames per second recorded for this rendering"
field233.type = "SFFloat"

Script230.field.append(field233)
field234 = x3d.field()
field234.name = "frameSize"
field234.accessType = "inputOutput"
field234.appinfo = "Size of frame in number of pixels width and height"
field234.type = "SFVec2f"

Script230.field.append(field234)
field235 = x3d.field()
field235.name = "pixelAspectRatio"
field235.accessType = "inputOutput"
field235.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1"
field235.type = "SFFloat"

Script230.field.append(field235)
field236 = x3d.field()
field236.name = "set_startTime"
field236.accessType = "inputOnly"
field236.appinfo = "Begin render operation"
field236.type = "SFTime"

Script230.field.append(field236)
field237 = x3d.field()
field237.name = "progress"
field237.accessType = "outputOnly"
field237.appinfo = "Progress performing render operation (0..1)"
field237.type = "SFFloat"

Script230.field.append(field237)
field238 = x3d.field()
field238.name = "renderCompleteTime"
field238.accessType = "outputOnly"
field238.appinfo = "Render operation complete"
field238.type = "SFTime"

Script230.field.append(field238)
field239 = x3d.field()
field239.name = "movieFormat"
field239.accessType = "initializeOnly"
field239.appinfo = "Format of rendered output movie (mpeg mp4 etc.)"
field239.type = "MFString"

Script230.field.append(field239)
field240 = x3d.field()
field240.name = "imageFormat"
field240.accessType = "initializeOnly"
field240.appinfo = "Format of rendered output images (png jpeg gif tiff etc.)"
field240.type = "MFString"

Script230.field.append(field240)
field241 = x3d.field()
field241.name = "traceEnabled"
field241.accessType = "initializeOnly"
field241.appinfo = "enable console output to trace script computations and prototype progress"
field241.type = "SFBool"

Script230.field.append(field241)
IS242 = x3d.IS()
connect243 = x3d.connect()
connect243.nodeField = "description"
connect243.protoField = "description"

IS242.connect.append(connect243)
connect244 = x3d.connect()
connect244.nodeField = "enabled"
connect244.protoField = "enabled"

IS242.connect.append(connect244)
connect245 = x3d.connect()
connect245.nodeField = "frameRate"
connect245.protoField = "frameRate"

IS242.connect.append(connect245)
connect246 = x3d.connect()
connect246.nodeField = "frameSize"
connect246.protoField = "frameSize"

IS242.connect.append(connect246)
connect247 = x3d.connect()
connect247.nodeField = "pixelAspectRatio"
connect247.protoField = "pixelAspectRatio"

IS242.connect.append(connect247)
connect248 = x3d.connect()
connect248.nodeField = "set_startTime"
connect248.protoField = "set_startTime"

IS242.connect.append(connect248)
connect249 = x3d.connect()
connect249.nodeField = "progress"
connect249.protoField = "progress"

IS242.connect.append(connect249)
connect250 = x3d.connect()
connect250.nodeField = "renderCompleteTime"
connect250.protoField = "renderCompleteTime"

IS242.connect.append(connect250)
connect251 = x3d.connect()
connect251.nodeField = "movieFormat"
connect251.protoField = "movieFormat"

IS242.connect.append(connect251)
connect252 = x3d.connect()
connect252.nodeField = "imageFormat"
connect252.protoField = "imageFormat"

IS242.connect.append(connect252)
connect253 = x3d.connect()
connect253.nodeField = "traceEnabled"
connect253.protoField = "traceEnabled"

IS242.connect.append(connect253)

Script230.IS = IS242

Script230.sourceCode = '''ecmascript:\n"+
"function initialize () // OfflineRenderScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"    tracePrint ('... initialize complete');\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    enabled = eventValue;\n"+
"}\n"+
"\n"+
"function set_frameRate (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    frameRate = eventValue;\n"+
"}\n"+
"\n"+
"function set_frameSize (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    frameSize = eventValue;\n"+
"}\n"+
"\n"+
"function set_pixelAspectRatio (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    pixelAspectRatio = eventValue;\n"+
"}\n"+
"\n"+
"function set_startTime (eventValue) // input event received for inputOnly field\n"+
"{\n"+
"   // do something with input eventValue;\n"+
"}\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[OfflineRender] ' + outputString + '\\n');\n"+
"}'''

ProtoBody229.children.append(Script230)
"""Add any ROUTEs here, going from Script to other nodes within ProtoBody"""

ProtoDeclare216.ProtoBody = ProtoBody229

Scene16.children.append(ProtoDeclare216)
"""=============== Launch Prototype Example =============="""
Background254 = x3d.Background()

Scene16.children.append(Background254)
Anchor255 = x3d.Anchor()
Anchor255.description = "launch CameraExample scene"
Anchor255.url = ["CameraExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"]
Transform256 = x3d.Transform()
Shape257 = x3d.Shape()
Text258 = x3d.Text()
Text258.string = ["CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"]
FontStyle259 = x3d.FontStyle()
FontStyle259.justify = ["MIDDLE","MIDDLE"]

Text258.fontStyle = FontStyle259

Shape257.geometry = Text258
Appearance260 = x3d.Appearance()
Material261 = x3d.Material()
Material261.diffuseColor = [1,1,0.2]

Appearance260.material = Material261

Shape257.appearance = Appearance260

Transform256.children.append(Shape257)

Anchor255.children.append(Transform256)

Scene16.children.append(Anchor255)

X3D0.Scene = Scene16
f = open("../data/CameraPrototypes.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/CameraPrototypes.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
