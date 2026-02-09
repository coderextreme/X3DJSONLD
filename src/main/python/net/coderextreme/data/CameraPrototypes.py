print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta6.content = "Mon, 09 Feb 2026 07:09:51 GMT"

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
meta13.content = "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"

head1.children.append(meta13)

X3D0.head = head1
Scene14 = x3d.Scene()
ProtoDeclare15 = x3d.ProtoDeclare()
ProtoDeclare15.name = "Camera"
ProtoDeclare15.appinfo = "Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images."
ProtoInterface16 = x3d.ProtoInterface()
field17 = x3d.field()
field17.accessType = "inputOutput"
field17.type = "SFString"
field17.name = "description"
field17.appinfo = "Text description to be displayed for this Camera"

ProtoInterface16.field.append(field17)
field18 = x3d.field()
field18.accessType = "inputOutput"
field18.type = "SFVec3f"
field18.name = "position"
field18.value = [0,0,10]
field18.appinfo = "Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"

ProtoInterface16.field.append(field18)
field19 = x3d.field()
field19.accessType = "inputOutput"
field19.type = "SFRotation"
field19.name = "orientation"
field19.appinfo = "Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"

ProtoInterface16.field.append(field19)
field20 = x3d.field()
field20.accessType = "inputOutput"
field20.type = "SFFloat"
field20.name = "fieldOfView"
field20.value = 0.7854
field20.appinfo = "pi/4"

ProtoInterface16.field.append(field20)
field21 = x3d.field()
field21.accessType = "inputOnly"
field21.type = "SFFloat"
field21.name = "set_fraction"
field21.appinfo = "input fraction drives interpolators"

ProtoInterface16.field.append(field21)
field22 = x3d.field()
field22.accessType = "inputOnly"
field22.type = "SFBool"
field22.name = "set_bind"
field22.appinfo = "input event binds or unbinds this Camera"

ProtoInterface16.field.append(field22)
field23 = x3d.field()
field23.accessType = "outputOnly"
field23.type = "SFTime"
field23.name = "bindTime"
field23.appinfo = "output event indicates when this Camera is bound"

ProtoInterface16.field.append(field23)
field24 = x3d.field()
field24.accessType = "outputOnly"
field24.type = "SFBool"
field24.name = "isBound"
field24.appinfo = "output event indicates whether this Camera is bound or unbound"

ProtoInterface16.field.append(field24)
field25 = x3d.field()
field25.accessType = "inputOutput"
field25.type = "SFFloat"
field25.name = "nearClipPlane"
field25.value = 0.25
field25.appinfo = "Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]"

ProtoInterface16.field.append(field25)
field26 = x3d.field()
field26.accessType = "inputOutput"
field26.type = "SFFloat"
field26.name = "farClipPlane"
field26.appinfo = "Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit"

ProtoInterface16.field.append(field26)
field27 = x3d.field()
field27.accessType = "inputOutput"
field27.type = "MFNode"
field27.name = "shots"
field27.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes"

ProtoInterface16.field.append(field27)
field28 = x3d.field()
field28.accessType = "inputOutput"
field28.type = "SFBool"
field28.name = "headlight"
field28.value = True
field28.appinfo = "Whether camera headlight is on or off"

ProtoInterface16.field.append(field28)
field29 = x3d.field()
field29.accessType = "inputOutput"
field29.type = "SFColor"
field29.name = "headlightColor"
field29.value = [1,1,1]
field29.appinfo = "Camera headlight color"

ProtoInterface16.field.append(field29)
field30 = x3d.field()
field30.accessType = "inputOutput"
field30.type = "SFFloat"
field30.name = "headlightIntensity"
field30.value = 1
field30.appinfo = "Camera headlight intensity"

ProtoInterface16.field.append(field30)
field31 = x3d.field()
field31.accessType = "inputOutput"
field31.type = "SFColor"
field31.name = "filterColor"
field31.value = [1,1,1]
field31.appinfo = "Camera filter color that modifies virtual lens capture"

ProtoInterface16.field.append(field31)
field32 = x3d.field()
field32.accessType = "inputOutput"
field32.type = "SFFloat"
field32.name = "filterTransparency"
field32.value = 1
field32.appinfo = "Camera filter transparency that modifies virtual lens capture"

ProtoInterface16.field.append(field32)
field33 = x3d.field()
field33.accessType = "inputOutput"
field33.type = "SFVec3f"
field33.name = "upVector"
field33.value = [0,1,0]
field33.appinfo = "upVector changes modify camera orientation (and possibly vice versa)"

ProtoInterface16.field.append(field33)
field34 = x3d.field()
field34.accessType = "inputOutput"
field34.type = "SFFloat"
field34.name = "fStop"
field34.value = 5.6
field34.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane"

ProtoInterface16.field.append(field34)
field35 = x3d.field()
field35.accessType = "inputOutput"
field35.type = "SFFloat"
field35.name = "focusDistance"
field35.value = 10
field35.appinfo = "Distance to focal plane of sharpest focus"

ProtoInterface16.field.append(field35)
field36 = x3d.field()
field36.accessType = "outputOnly"
field36.type = "SFBool"
field36.name = "isActive"
field36.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations"

ProtoInterface16.field.append(field36)
field37 = x3d.field()
field37.accessType = "outputOnly"
field37.type = "SFTime"
field37.name = "totalDuration"
field37.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"

ProtoInterface16.field.append(field37)
field38 = x3d.field()
field38.accessType = "inputOutput"
field38.type = "SFNode"
field38.name = "offlineRender"
field38.appinfo = "OfflineRender node"

ProtoInterface16.field.append(field38)
field39 = x3d.field()
field39.accessType = "initializeOnly"
field39.type = "SFBool"
field39.name = "traceEnabled"
field39.appinfo = "enable console output to trace script computations and prototype progress"

ProtoInterface16.field.append(field39)

ProtoDeclare15.ProtoInterface = ProtoInterface16
ProtoBody40 = x3d.ProtoBody()
Viewpoint41 = x3d.Viewpoint(DEF="CameraViewpoint")
IS42 = x3d.IS()
connect43 = x3d.connect()
connect43.nodeField = "set_bind"
connect43.protoField = "set_bind"

IS42.connect.append(connect43)
connect44 = x3d.connect()
connect44.nodeField = "description"
connect44.protoField = "description"

IS42.connect.append(connect44)
connect45 = x3d.connect()
connect45.nodeField = "position"
connect45.protoField = "position"

IS42.connect.append(connect45)
connect46 = x3d.connect()
connect46.nodeField = "orientation"
connect46.protoField = "orientation"

IS42.connect.append(connect46)
connect47 = x3d.connect()
connect47.nodeField = "fieldOfView"
connect47.protoField = "fieldOfView"

IS42.connect.append(connect47)
connect48 = x3d.connect()
connect48.nodeField = "isBound"
connect48.protoField = "isBound"

IS42.connect.append(connect48)
connect49 = x3d.connect()
connect49.nodeField = "bindTime"
connect49.protoField = "bindTime"

IS42.connect.append(connect49)

Viewpoint41.IS = IS42

ProtoBody40.children.append(Viewpoint41)
NavigationInfo50 = x3d.NavigationInfo(DEF="CameraNavInfo")
NavigationInfo50.type = ["EXAMINE","FLY","ANY"]
IS51 = x3d.IS()
connect52 = x3d.connect()
connect52.nodeField = "set_bind"
connect52.protoField = "set_bind"

IS51.connect.append(connect52)
connect53 = x3d.connect()
connect53.nodeField = "headlight"
connect53.protoField = "headlight"

IS51.connect.append(connect53)
connect54 = x3d.connect()
connect54.nodeField = "visibilityLimit"
connect54.protoField = "farClipPlane"

IS51.connect.append(connect54)

NavigationInfo50.IS = IS51

ProtoBody40.children.append(NavigationInfo50)
DirectionalLight55 = x3d.DirectionalLight(DEF="CameraDirectionalLight")
DirectionalLight55.global_ = True
IS56 = x3d.IS()
connect57 = x3d.connect()
connect57.nodeField = "on"
connect57.protoField = "headlight"

IS56.connect.append(connect57)
connect58 = x3d.connect()
connect58.nodeField = "color"
connect58.protoField = "headlightColor"

IS56.connect.append(connect58)
connect59 = x3d.connect()
connect59.nodeField = "intensity"
connect59.protoField = "headlightIntensity"

IS56.connect.append(connect59)

DirectionalLight55.IS = IS56

ProtoBody40.children.append(DirectionalLight55)
PositionInterpolator60 = x3d.PositionInterpolator(DEF="CameraPositionInterpolator")
PositionInterpolator60.key = [0,1]
PositionInterpolator60.keyValue = [(0, 0, 0),(0, 0, 0)]
IS61 = x3d.IS()
connect62 = x3d.connect()
connect62.nodeField = "set_fraction"
connect62.protoField = "set_fraction"

IS61.connect.append(connect62)

PositionInterpolator60.IS = IS61

ProtoBody40.children.append(PositionInterpolator60)
OrientationInterpolator63 = x3d.OrientationInterpolator(DEF="CameraOrientationInterpolator")
OrientationInterpolator63.key = [0,1]
OrientationInterpolator63.keyValue = [(0, 1, 0, 0),(0, 1, 0, 0)]
IS64 = x3d.IS()
connect65 = x3d.connect()
connect65.nodeField = "set_fraction"
connect65.protoField = "set_fraction"

IS64.connect.append(connect65)

OrientationInterpolator63.IS = IS64

ProtoBody40.children.append(OrientationInterpolator63)
Script66 = x3d.Script(DEF="CameraScript")
Script66.directOutput = True
Script66.mustEvaluate = True
field67 = x3d.field()
field67.accessType = "inputOutput"
field67.type = "SFString"
field67.name = "description"
field67.appinfo = "Text description to be displayed for this Camera"

Script66.field.append(field67)
field68 = x3d.field()
field68.accessType = "inputOutput"
field68.type = "SFVec3f"
field68.name = "position"
field68.appinfo = "Camera position in local transformation frame"

Script66.field.append(field68)
field69 = x3d.field()
field69.accessType = "inputOutput"
field69.type = "SFRotation"
field69.name = "orientation"
field69.appinfo = "Camera rotation in local transformation frame"

Script66.field.append(field69)
field70 = x3d.field()
field70.accessType = "inputOnly"
field70.type = "SFFloat"
field70.name = "set_fraction"
field70.appinfo = "input fraction drives interpolators"

Script66.field.append(field70)
field71 = x3d.field()
field71.accessType = "inputOnly"
field71.type = "SFBool"
field71.name = "set_bind"
field71.appinfo = "input event binds or unbinds this Camera"

Script66.field.append(field71)
field72 = x3d.field()
field72.accessType = "inputOutput"
field72.type = "SFFloat"
field72.name = "fieldOfView"
field72.appinfo = "pi/4"

Script66.field.append(field72)
field73 = x3d.field()
field73.accessType = "inputOutput"
field73.type = "SFFloat"
field73.name = "nearClipPlane"
field73.appinfo = "Vector distance to near clipping plane"

Script66.field.append(field73)
field74 = x3d.field()
field74.accessType = "inputOutput"
field74.type = "SFFloat"
field74.name = "farClipPlane"
field74.appinfo = "Vector distance to far clipping plane"

Script66.field.append(field74)
field75 = x3d.field()
field75.accessType = "inputOutput"
field75.type = "MFNode"
field75.name = "shots"
field75.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes"

Script66.field.append(field75)
field76 = x3d.field()
field76.accessType = "inputOutput"
field76.type = "SFColor"
field76.name = "filterColor"
field76.appinfo = "Camera filter color that modifies virtual lens capture"

Script66.field.append(field76)
field77 = x3d.field()
field77.accessType = "inputOutput"
field77.type = "SFFloat"
field77.name = "filterTransparency"
field77.appinfo = "Camera filter transparency that modifies virtual lens capture"

Script66.field.append(field77)
field78 = x3d.field()
field78.accessType = "inputOutput"
field78.type = "SFVec3f"
field78.name = "upVector"
field78.appinfo = "upVector changes modify camera orientation (and possibly vice versa)"

Script66.field.append(field78)
field79 = x3d.field()
field79.accessType = "inputOutput"
field79.type = "SFFloat"
field79.name = "fStop"
field79.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane"

Script66.field.append(field79)
field80 = x3d.field()
field80.accessType = "inputOutput"
field80.type = "SFFloat"
field80.name = "focusDistance"
field80.appinfo = "Distance to focal plane of sharpest focus"

Script66.field.append(field80)
field81 = x3d.field()
field81.accessType = "outputOnly"
field81.type = "SFBool"
field81.name = "isActive"
field81.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations"

Script66.field.append(field81)
field82 = x3d.field()
field82.accessType = "outputOnly"
field82.type = "SFTime"
field82.name = "totalDuration"
field82.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"

Script66.field.append(field82)
field83 = x3d.field()
field83.accessType = "inputOutput"
field83.type = "SFNode"
field83.name = "offlineRender"
field83.appinfo = "OfflineRender node"

Script66.field.append(field83)
field84 = x3d.field()
field84.accessType = "initializeOnly"
field84.type = "SFNode"
field84.name = "ViewpointNode"
field84.appinfo = "node reference to permit getting setting fields from within Script"
Viewpoint85 = x3d.Viewpoint(USE="CameraViewpoint")

field84.children.append(Viewpoint85)

Script66.field.append(field84)
field86 = x3d.field()
field86.accessType = "initializeOnly"
field86.type = "SFNode"
field86.name = "NavInfoNode"
field86.appinfo = "node reference to permit getting setting fields from within Script"
NavigationInfo87 = x3d.NavigationInfo(USE="CameraNavInfo")

field86.children.append(NavigationInfo87)

Script66.field.append(field86)
field88 = x3d.field()
field88.accessType = "initializeOnly"
field88.type = "SFNode"
field88.name = "CameraPI"
field88.appinfo = "node reference to permit getting setting fields from within Script"
PositionInterpolator89 = x3d.PositionInterpolator(USE="CameraPositionInterpolator")

field88.children.append(PositionInterpolator89)

Script66.field.append(field88)
field90 = x3d.field()
field90.accessType = "initializeOnly"
field90.type = "SFNode"
field90.name = "CameraOI"
field90.appinfo = "node reference to permit getting setting fields from within Script"
OrientationInterpolator91 = x3d.OrientationInterpolator(USE="CameraOrientationInterpolator")

field90.children.append(OrientationInterpolator91)

Script66.field.append(field90)
field92 = x3d.field()
field92.accessType = "inputOutput"
field92.type = "MFFloat"
field92.name = "key"
field92.appinfo = "key array for interpolators"

Script66.field.append(field92)
field93 = x3d.field()
field93.accessType = "inputOutput"
field93.type = "MFVec3f"
field93.name = "keyValuePosition"
field93.appinfo = "keyValue array for PositionInterpolator"

Script66.field.append(field93)
field94 = x3d.field()
field94.accessType = "inputOutput"
field94.type = "MFRotation"
field94.name = "keyValueOrientation"
field94.appinfo = "keyValue array for OrientationInterpolator"

Script66.field.append(field94)
field95 = x3d.field()
field95.accessType = "inputOutput"
field95.type = "SFBool"
field95.name = "animated"
field95.appinfo = "whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events"

Script66.field.append(field95)
field96 = x3d.field()
field96.accessType = "initializeOnly"
field96.type = "SFBool"
field96.name = "initialized"
field96.appinfo = "perform checkShots() function once immediately after initialization"

Script66.field.append(field96)
field97 = x3d.field()
field97.accessType = "initializeOnly"
field97.type = "SFInt32"
field97.name = "shotCount"
field97.appinfo = "how many CameraShot nodes are contained in shots array"

Script66.field.append(field97)
field98 = x3d.field()
field98.accessType = "initializeOnly"
field98.type = "SFInt32"
field98.name = "movesCount"
field98.appinfo = "how many CameraMove nodes are contained in moves array"

Script66.field.append(field98)
field99 = x3d.field()
field99.accessType = "initializeOnly"
field99.type = "SFFloat"
field99.name = "frameCount"
field99.appinfo = "how many frames were created in current loop"

Script66.field.append(field99)
field100 = x3d.field()
field100.accessType = "initializeOnly"
field100.type = "SFTime"
field100.name = "startTime"
field100.value = 0
field100.appinfo = "holding variable"

Script66.field.append(field100)
field101 = x3d.field()
field101.accessType = "initializeOnly"
field101.type = "SFTime"
field101.name = "priorTraceTime"
field101.value = 0
field101.appinfo = "holding variable"

Script66.field.append(field101)
field102 = x3d.field()
field102.accessType = "initializeOnly"
field102.type = "SFBool"
field102.name = "traceEnabled"
field102.appinfo = "enable console output to trace script computations and prototype progress"

Script66.field.append(field102)

Script66.sourceCode = '''ecmascript:\n"+
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
IS103 = x3d.IS()
connect104 = x3d.connect()
connect104.nodeField = "description"
connect104.protoField = "description"

IS103.connect.append(connect104)
connect105 = x3d.connect()
connect105.nodeField = "position"
connect105.protoField = "position"

IS103.connect.append(connect105)
connect106 = x3d.connect()
connect106.nodeField = "orientation"
connect106.protoField = "orientation"

IS103.connect.append(connect106)
connect107 = x3d.connect()
connect107.nodeField = "set_fraction"
connect107.protoField = "set_fraction"

IS103.connect.append(connect107)
connect108 = x3d.connect()
connect108.nodeField = "set_bind"
connect108.protoField = "set_bind"

IS103.connect.append(connect108)
connect109 = x3d.connect()
connect109.nodeField = "fieldOfView"
connect109.protoField = "fieldOfView"

IS103.connect.append(connect109)
connect110 = x3d.connect()
connect110.nodeField = "nearClipPlane"
connect110.protoField = "nearClipPlane"

IS103.connect.append(connect110)
connect111 = x3d.connect()
connect111.nodeField = "farClipPlane"
connect111.protoField = "farClipPlane"

IS103.connect.append(connect111)
connect112 = x3d.connect()
connect112.nodeField = "shots"
connect112.protoField = "shots"

IS103.connect.append(connect112)
connect113 = x3d.connect()
connect113.nodeField = "filterColor"
connect113.protoField = "filterColor"

IS103.connect.append(connect113)
connect114 = x3d.connect()
connect114.nodeField = "filterTransparency"
connect114.protoField = "filterTransparency"

IS103.connect.append(connect114)
connect115 = x3d.connect()
connect115.nodeField = "upVector"
connect115.protoField = "upVector"

IS103.connect.append(connect115)
connect116 = x3d.connect()
connect116.nodeField = "fStop"
connect116.protoField = "fStop"

IS103.connect.append(connect116)
connect117 = x3d.connect()
connect117.nodeField = "focusDistance"
connect117.protoField = "focusDistance"

IS103.connect.append(connect117)
connect118 = x3d.connect()
connect118.nodeField = "isActive"
connect118.protoField = "isActive"

IS103.connect.append(connect118)
connect119 = x3d.connect()
connect119.nodeField = "totalDuration"
connect119.protoField = "totalDuration"

IS103.connect.append(connect119)
connect120 = x3d.connect()
connect120.nodeField = "offlineRender"
connect120.protoField = "offlineRender"

IS103.connect.append(connect120)
connect121 = x3d.connect()
connect121.nodeField = "traceEnabled"
connect121.protoField = "traceEnabled"

IS103.connect.append(connect121)

Script66.IS = IS103

ProtoBody40.children.append(Script66)
ROUTE122 = x3d.ROUTE()
ROUTE122.fromNode = "CameraPositionInterpolator"
ROUTE122.fromField = "value_changed"
ROUTE122.toNode = "CameraViewpoint"
ROUTE122.toField = "set_position"

ProtoBody40.children.append(ROUTE122)
ROUTE123 = x3d.ROUTE()
ROUTE123.fromNode = "CameraOrientationInterpolator"
ROUTE123.fromField = "value_changed"
ROUTE123.toNode = "CameraViewpoint"
ROUTE123.toField = "set_orientation"

ProtoBody40.children.append(ROUTE123)
ROUTE124 = x3d.ROUTE()
ROUTE124.fromNode = "CameraScript"
ROUTE124.fromField = "position_changed"
ROUTE124.toNode = "CameraViewpoint"
ROUTE124.toField = "set_position"

ProtoBody40.children.append(ROUTE124)
ROUTE125 = x3d.ROUTE()
ROUTE125.fromNode = "CameraScript"
ROUTE125.fromField = "orientation_changed"
ROUTE125.toNode = "CameraViewpoint"
ROUTE125.toField = "set_orientation"

ProtoBody40.children.append(ROUTE125)
ROUTE126 = x3d.ROUTE()
ROUTE126.fromNode = "CameraScript"
ROUTE126.fromField = "isActive"
ROUTE126.toNode = "CameraViewpoint"
ROUTE126.toField = "set_bind"

ProtoBody40.children.append(ROUTE126)
ROUTE127 = x3d.ROUTE()
ROUTE127.fromNode = "CameraScript"
ROUTE127.fromField = "isActive"
ROUTE127.toNode = "CameraNavInfo"
ROUTE127.toField = "set_bind"

ProtoBody40.children.append(ROUTE127)
ROUTE128 = x3d.ROUTE()
ROUTE128.fromNode = "CameraScript"
ROUTE128.fromField = "isActive"
ROUTE128.toNode = "CameraDirectionalLight"
ROUTE128.toField = "set_on"

ProtoBody40.children.append(ROUTE128)

ProtoDeclare15.ProtoBody = ProtoBody40

Scene14.children.append(ProtoDeclare15)
ProtoDeclare129 = x3d.ProtoDeclare()
ProtoDeclare129.name = "CameraShot"
ProtoDeclare129.appinfo = "CameraShot collects a specific set of CameraMovement animations that make up an individual shot."
ProtoInterface130 = x3d.ProtoInterface()
field131 = x3d.field()
field131.accessType = "inputOutput"
field131.type = "SFString"
field131.name = "description"
field131.appinfo = "Text description to be displayed for this CameraShot"

ProtoInterface130.field.append(field131)
field132 = x3d.field()
field132.accessType = "inputOutput"
field132.type = "SFBool"
field132.name = "enabled"
field132.value = True
field132.appinfo = "Whether this CameraShot can be activated"

ProtoInterface130.field.append(field132)
field133 = x3d.field()
field133.accessType = "inputOutput"
field133.type = "MFNode"
field133.name = "moves"
field133.appinfo = "Set of CameraMovement nodes"

ProtoInterface130.field.append(field133)
field134 = x3d.field()
field134.accessType = "inputOutput"
field134.type = "SFVec3f"
field134.name = "initialPosition"
field134.value = [0,0,10]
field134.appinfo = "Setup to reinitialize camera position for this shot"

ProtoInterface130.field.append(field134)
field135 = x3d.field()
field135.accessType = "inputOutput"
field135.type = "SFRotation"
field135.name = "initialOrientation"
field135.appinfo = "Setup to reinitialize camera rotation for this shot"

ProtoInterface130.field.append(field135)
field136 = x3d.field()
field136.accessType = "inputOutput"
field136.type = "SFVec3f"
field136.name = "initialAimPoint"
field136.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot"

ProtoInterface130.field.append(field136)
field137 = x3d.field()
field137.accessType = "inputOutput"
field137.type = "SFFloat"
field137.name = "initialFieldOfView"
field137.value = 0.7854
field137.appinfo = "pi/4"

ProtoInterface130.field.append(field137)
field138 = x3d.field()
field138.accessType = "inputOutput"
field138.type = "SFFloat"
field138.name = "initialFStop"
field138.value = 5.6
field138.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane"

ProtoInterface130.field.append(field138)
field139 = x3d.field()
field139.accessType = "inputOutput"
field139.type = "SFFloat"
field139.name = "initialFocusDistance"
field139.value = 10
field139.appinfo = "Distance to focal plane of sharpest focus"

ProtoInterface130.field.append(field139)
field140 = x3d.field()
field140.accessType = "outputOnly"
field140.type = "SFTime"
field140.name = "shotDuration"
field140.appinfo = "Subtotal duration of contained CameraMovement move durations"

ProtoInterface130.field.append(field140)
field141 = x3d.field()
field141.accessType = "outputOnly"
field141.type = "SFBool"
field141.name = "isActive"
field141.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations"

ProtoInterface130.field.append(field141)
field142 = x3d.field()
field142.accessType = "initializeOnly"
field142.type = "SFBool"
field142.name = "traceEnabled"
field142.appinfo = "enable console output to trace script computations and prototype progress"

ProtoInterface130.field.append(field142)

ProtoDeclare129.ProtoInterface = ProtoInterface130
ProtoBody143 = x3d.ProtoBody()
Script144 = x3d.Script(DEF="CameraShotScript")
Script144.directOutput = True
Script144.mustEvaluate = True
field145 = x3d.field()
field145.accessType = "inputOutput"
field145.type = "SFString"
field145.name = "description"
field145.appinfo = "Text description to be displayed for this CameraShot"

Script144.field.append(field145)
field146 = x3d.field()
field146.accessType = "inputOutput"
field146.type = "SFBool"
field146.name = "enabled"
field146.appinfo = "Whether this CameraShot can be activated"

Script144.field.append(field146)
field147 = x3d.field()
field147.accessType = "inputOutput"
field147.type = "MFNode"
field147.name = "moves"
field147.appinfo = "Set of CameraMovement nodes"

Script144.field.append(field147)
field148 = x3d.field()
field148.accessType = "inputOutput"
field148.type = "SFVec3f"
field148.name = "initialPosition"
field148.appinfo = "Setup to reinitialize camera position for this shot"

Script144.field.append(field148)
field149 = x3d.field()
field149.accessType = "inputOutput"
field149.type = "SFRotation"
field149.name = "initialOrientation"
field149.appinfo = "Setup to reinitialize camera rotation for this shot"

Script144.field.append(field149)
field150 = x3d.field()
field150.accessType = "inputOutput"
field150.type = "SFVec3f"
field150.name = "initialAimPoint"
field150.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot"

Script144.field.append(field150)
field151 = x3d.field()
field151.accessType = "inputOutput"
field151.type = "SFFloat"
field151.name = "initialFieldOfView"
field151.appinfo = "pi/4"

Script144.field.append(field151)
field152 = x3d.field()
field152.accessType = "inputOutput"
field152.type = "SFFloat"
field152.name = "initialFStop"
field152.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane"

Script144.field.append(field152)
field153 = x3d.field()
field153.accessType = "inputOutput"
field153.type = "SFFloat"
field153.name = "initialFocusDistance"
field153.appinfo = "Distance to focal plane of sharpest focus"

Script144.field.append(field153)
field154 = x3d.field()
field154.accessType = "outputOnly"
field154.type = "SFTime"
field154.name = "shotDuration"
field154.appinfo = "Subtotal duration of contained CameraMovement move durations"

Script144.field.append(field154)
field155 = x3d.field()
field155.accessType = "outputOnly"
field155.type = "SFBool"
field155.name = "isActive"
field155.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations"

Script144.field.append(field155)
field156 = x3d.field()
field156.accessType = "initializeOnly"
field156.type = "SFBool"
field156.name = "traceEnabled"
field156.appinfo = "enable console output to trace script computations and prototype progress"

Script144.field.append(field156)
field157 = x3d.field()
field157.accessType = "inputOutput"
field157.type = "MFFloat"
field157.name = "key"
field157.appinfo = "key array for interpolators"

Script144.field.append(field157)
field158 = x3d.field()
field158.accessType = "inputOutput"
field158.type = "MFVec3f"
field158.name = "keyValuePosition"
field158.appinfo = "keyValue array for PositionInterpolator"

Script144.field.append(field158)
field159 = x3d.field()
field159.accessType = "inputOutput"
field159.type = "MFRotation"
field159.name = "keyValueOrientation"
field159.appinfo = "keyValue array for OrientationInterpolator"

Script144.field.append(field159)

Script144.sourceCode = '''ecmascript:\n"+
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
IS160 = x3d.IS()
connect161 = x3d.connect()
connect161.nodeField = "description"
connect161.protoField = "description"

IS160.connect.append(connect161)
connect162 = x3d.connect()
connect162.nodeField = "enabled"
connect162.protoField = "enabled"

IS160.connect.append(connect162)
connect163 = x3d.connect()
connect163.nodeField = "moves"
connect163.protoField = "moves"

IS160.connect.append(connect163)
connect164 = x3d.connect()
connect164.nodeField = "initialPosition"
connect164.protoField = "initialPosition"

IS160.connect.append(connect164)
connect165 = x3d.connect()
connect165.nodeField = "initialOrientation"
connect165.protoField = "initialOrientation"

IS160.connect.append(connect165)
connect166 = x3d.connect()
connect166.nodeField = "initialAimPoint"
connect166.protoField = "initialAimPoint"

IS160.connect.append(connect166)
connect167 = x3d.connect()
connect167.nodeField = "initialFieldOfView"
connect167.protoField = "initialFieldOfView"

IS160.connect.append(connect167)
connect168 = x3d.connect()
connect168.nodeField = "initialFStop"
connect168.protoField = "initialFStop"

IS160.connect.append(connect168)
connect169 = x3d.connect()
connect169.nodeField = "initialFocusDistance"
connect169.protoField = "initialFocusDistance"

IS160.connect.append(connect169)
connect170 = x3d.connect()
connect170.nodeField = "shotDuration"
connect170.protoField = "shotDuration"

IS160.connect.append(connect170)
connect171 = x3d.connect()
connect171.nodeField = "isActive"
connect171.protoField = "isActive"

IS160.connect.append(connect171)
connect172 = x3d.connect()
connect172.nodeField = "traceEnabled"
connect172.protoField = "traceEnabled"

IS160.connect.append(connect172)

Script144.IS = IS160

ProtoBody143.children.append(Script144)

ProtoDeclare129.ProtoBody = ProtoBody143

Scene14.children.append(ProtoDeclare129)
ProtoDeclare173 = x3d.ProtoDeclare()
ProtoDeclare173.name = "CameraMovement"
ProtoDeclare173.appinfo = "CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView."
ProtoInterface174 = x3d.ProtoInterface()
field175 = x3d.field()
field175.accessType = "inputOutput"
field175.type = "SFString"
field175.name = "description"
field175.appinfo = "Text description to be displayed for this CameraMovement"

ProtoInterface174.field.append(field175)
field176 = x3d.field()
field176.accessType = "inputOutput"
field176.type = "SFBool"
field176.name = "enabled"
field176.value = True
field176.appinfo = "Whether this CameraMovement can be activated"

ProtoInterface174.field.append(field176)
field177 = x3d.field()
field177.accessType = "inputOutput"
field177.type = "SFFloat"
field177.name = "duration"
field177.appinfo = "Duration in seconds for this move"

ProtoInterface174.field.append(field177)
field178 = x3d.field()
field178.accessType = "inputOutput"
field178.type = "SFVec3f"
field178.name = "goalPosition"
field178.value = [0,0,10]
field178.appinfo = "Goal camera position for this move"

ProtoInterface174.field.append(field178)
field179 = x3d.field()
field179.accessType = "inputOutput"
field179.type = "SFRotation"
field179.name = "goalOrientation"
field179.appinfo = "Goal camera rotation for this move"

ProtoInterface174.field.append(field179)
field180 = x3d.field()
field180.accessType = "inputOutput"
field180.type = "SFBool"
field180.name = "tracking"
field180.appinfo = "Whether or not camera direction is tracking towards the aimPoint"

ProtoInterface174.field.append(field180)
field181 = x3d.field()
field181.accessType = "inputOutput"
field181.type = "SFVec3f"
field181.name = "goalAimPoint"
field181.appinfo = "Goal aimPoint for this move, ignored if tracking=false"

ProtoInterface174.field.append(field181)
field182 = x3d.field()
field182.accessType = "inputOutput"
field182.type = "SFFloat"
field182.name = "goalFieldOfView"
field182.value = 0.7854
field182.appinfo = "Goal fieldOfView for this move"

ProtoInterface174.field.append(field182)
field183 = x3d.field()
field183.accessType = "inputOutput"
field183.type = "SFFloat"
field183.name = "goalFStop"
field183.value = 5.6
field183.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane"

ProtoInterface174.field.append(field183)
field184 = x3d.field()
field184.accessType = "inputOutput"
field184.type = "SFFloat"
field184.name = "goalFocusDistance"
field184.value = 10
field184.appinfo = "Distance to focal plane of sharpest focus"

ProtoInterface174.field.append(field184)
field185 = x3d.field()
field185.accessType = "outputOnly"
field185.type = "SFBool"
field185.name = "isActive"
field185.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations"

ProtoInterface174.field.append(field185)
field186 = x3d.field()
field186.accessType = "initializeOnly"
field186.type = "SFBool"
field186.name = "traceEnabled"
field186.appinfo = "enable console output to trace script computations and prototype progress"

ProtoInterface174.field.append(field186)

ProtoDeclare173.ProtoInterface = ProtoInterface174
ProtoBody187 = x3d.ProtoBody()
Script188 = x3d.Script(DEF="CameraMovementScript")
Script188.directOutput = True
Script188.mustEvaluate = True
field189 = x3d.field()
field189.accessType = "inputOutput"
field189.type = "SFString"
field189.name = "description"
field189.appinfo = "Text description to be displayed for this CameraMovement"

Script188.field.append(field189)
field190 = x3d.field()
field190.accessType = "inputOutput"
field190.type = "SFBool"
field190.name = "enabled"
field190.appinfo = "Whether this CameraMovement can be activated"

Script188.field.append(field190)
field191 = x3d.field()
field191.accessType = "inputOutput"
field191.type = "SFFloat"
field191.name = "duration"
field191.appinfo = "Duration in seconds for this move"

Script188.field.append(field191)
field192 = x3d.field()
field192.accessType = "inputOutput"
field192.type = "SFVec3f"
field192.name = "goalPosition"
field192.appinfo = "Goal camera position for this move"

Script188.field.append(field192)
field193 = x3d.field()
field193.accessType = "inputOutput"
field193.type = "SFRotation"
field193.name = "goalOrientation"
field193.appinfo = "Goal camera rotation for this move"

Script188.field.append(field193)
field194 = x3d.field()
field194.accessType = "inputOutput"
field194.type = "SFBool"
field194.name = "tracking"
field194.appinfo = "Whether or not camera direction is tracking towards the aimPoint"

Script188.field.append(field194)
field195 = x3d.field()
field195.accessType = "inputOutput"
field195.type = "SFVec3f"
field195.name = "goalAimPoint"
field195.appinfo = "Goal aimPoint for this move, ignored if tracking=false"

Script188.field.append(field195)
field196 = x3d.field()
field196.accessType = "inputOutput"
field196.type = "SFFloat"
field196.name = "goalFieldOfView"
field196.appinfo = "Goal fieldOfView for this move"

Script188.field.append(field196)
field197 = x3d.field()
field197.accessType = "inputOutput"
field197.type = "SFFloat"
field197.name = "goalFStop"
field197.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane"

Script188.field.append(field197)
field198 = x3d.field()
field198.accessType = "inputOutput"
field198.type = "SFFloat"
field198.name = "goalFocusDistance"
field198.appinfo = "Distance to focal plane of sharpest focus"

Script188.field.append(field198)
field199 = x3d.field()
field199.accessType = "outputOnly"
field199.type = "SFBool"
field199.name = "isActive"
field199.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations"

Script188.field.append(field199)
field200 = x3d.field()
field200.accessType = "initializeOnly"
field200.type = "SFBool"
field200.name = "traceEnabled"
field200.appinfo = "enable console output to trace script computations and prototype progress"

Script188.field.append(field200)

Script188.sourceCode = '''ecmascript:\n"+
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
IS201 = x3d.IS()
connect202 = x3d.connect()
connect202.nodeField = "description"
connect202.protoField = "description"

IS201.connect.append(connect202)
connect203 = x3d.connect()
connect203.nodeField = "enabled"
connect203.protoField = "enabled"

IS201.connect.append(connect203)
connect204 = x3d.connect()
connect204.nodeField = "duration"
connect204.protoField = "duration"

IS201.connect.append(connect204)
connect205 = x3d.connect()
connect205.nodeField = "goalPosition"
connect205.protoField = "goalPosition"

IS201.connect.append(connect205)
connect206 = x3d.connect()
connect206.nodeField = "goalOrientation"
connect206.protoField = "goalOrientation"

IS201.connect.append(connect206)
connect207 = x3d.connect()
connect207.nodeField = "tracking"
connect207.protoField = "tracking"

IS201.connect.append(connect207)
connect208 = x3d.connect()
connect208.nodeField = "goalAimPoint"
connect208.protoField = "goalAimPoint"

IS201.connect.append(connect208)
connect209 = x3d.connect()
connect209.nodeField = "goalFieldOfView"
connect209.protoField = "goalFieldOfView"

IS201.connect.append(connect209)
connect210 = x3d.connect()
connect210.nodeField = "goalFStop"
connect210.protoField = "goalFStop"

IS201.connect.append(connect210)
connect211 = x3d.connect()
connect211.nodeField = "goalFocusDistance"
connect211.protoField = "goalFocusDistance"

IS201.connect.append(connect211)
connect212 = x3d.connect()
connect212.nodeField = "isActive"
connect212.protoField = "isActive"

IS201.connect.append(connect212)
connect213 = x3d.connect()
connect213.nodeField = "traceEnabled"
connect213.protoField = "traceEnabled"

IS201.connect.append(connect213)

Script188.IS = IS201

ProtoBody187.children.append(Script188)

ProtoDeclare173.ProtoBody = ProtoBody187

Scene14.children.append(ProtoDeclare173)
ProtoDeclare214 = x3d.ProtoDeclare()
ProtoDeclare214.name = "OfflineRender"
ProtoDeclare214.appinfo = "OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)."
ProtoInterface215 = x3d.ProtoInterface()
field216 = x3d.field()
field216.accessType = "inputOutput"
field216.type = "SFString"
field216.name = "description"
field216.appinfo = "Text description to be displayed for this OfflineRender"

ProtoInterface215.field.append(field216)
field217 = x3d.field()
field217.accessType = "inputOutput"
field217.type = "SFBool"
field217.name = "enabled"
field217.value = True
field217.appinfo = "Whether this OfflineRender can be activated"

ProtoInterface215.field.append(field217)
field218 = x3d.field()
field218.accessType = "inputOutput"
field218.type = "SFFloat"
field218.name = "frameRate"
field218.value = 30
field218.appinfo = "Frames per second recorded for this rendering"

ProtoInterface215.field.append(field218)
field219 = x3d.field()
field219.accessType = "inputOutput"
field219.type = "SFVec2f"
field219.name = "frameSize"
field219.value = [640,480]
field219.appinfo = "Size of frame in number of pixels width and height"

ProtoInterface215.field.append(field219)
field220 = x3d.field()
field220.accessType = "inputOutput"
field220.type = "SFFloat"
field220.name = "pixelAspectRatio"
field220.value = 1.33
field220.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1"

ProtoInterface215.field.append(field220)
field221 = x3d.field()
field221.accessType = "inputOnly"
field221.type = "SFTime"
field221.name = "set_startTime"
field221.appinfo = "Begin render operation"

ProtoInterface215.field.append(field221)
field222 = x3d.field()
field222.accessType = "outputOnly"
field222.type = "SFFloat"
field222.name = "progress"
field222.appinfo = "Progress performing render operation (0..1)"

ProtoInterface215.field.append(field222)
field223 = x3d.field()
field223.accessType = "outputOnly"
field223.type = "SFTime"
field223.name = "renderCompleteTime"
field223.appinfo = "Render operation complete"

ProtoInterface215.field.append(field223)
field224 = x3d.field()
field224.accessType = "initializeOnly"
field224.type = "MFString"
field224.name = "movieFormat"
field224.value = ["mpeg"]
field224.appinfo = "Format of rendered output movie (mpeg mp4 etc.), use first supported format"

ProtoInterface215.field.append(field224)
field225 = x3d.field()
field225.accessType = "initializeOnly"
field225.type = "MFString"
field225.name = "imageFormat"
field225.value = ["png"]
field225.appinfo = "Format of rendered output images (png jpeg gif tiff etc.) use first supported format"

ProtoInterface215.field.append(field225)
field226 = x3d.field()
field226.accessType = "initializeOnly"
field226.type = "SFBool"
field226.name = "traceEnabled"
field226.appinfo = "enable console output to trace script computations and prototype progress"

ProtoInterface215.field.append(field226)

ProtoDeclare214.ProtoInterface = ProtoInterface215
ProtoBody227 = x3d.ProtoBody()
Script228 = x3d.Script(DEF="OfflineRenderScript")
Script228.mustEvaluate = True
field229 = x3d.field()
field229.accessType = "inputOutput"
field229.type = "SFString"
field229.name = "description"
field229.appinfo = "Text description to be displayed for this OfflineRender"

Script228.field.append(field229)
field230 = x3d.field()
field230.accessType = "inputOutput"
field230.type = "SFBool"
field230.name = "enabled"
field230.appinfo = "Whether this OfflineRender can be activated"

Script228.field.append(field230)
field231 = x3d.field()
field231.accessType = "inputOutput"
field231.type = "SFFloat"
field231.name = "frameRate"
field231.appinfo = "Frames per second recorded for this rendering"

Script228.field.append(field231)
field232 = x3d.field()
field232.accessType = "inputOutput"
field232.type = "SFVec2f"
field232.name = "frameSize"
field232.appinfo = "Size of frame in number of pixels width and height"

Script228.field.append(field232)
field233 = x3d.field()
field233.accessType = "inputOutput"
field233.type = "SFFloat"
field233.name = "pixelAspectRatio"
field233.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1"

Script228.field.append(field233)
field234 = x3d.field()
field234.accessType = "inputOnly"
field234.type = "SFTime"
field234.name = "set_startTime"
field234.appinfo = "Begin render operation"

Script228.field.append(field234)
field235 = x3d.field()
field235.accessType = "outputOnly"
field235.type = "SFFloat"
field235.name = "progress"
field235.appinfo = "Progress performing render operation (0..1)"

Script228.field.append(field235)
field236 = x3d.field()
field236.accessType = "outputOnly"
field236.type = "SFTime"
field236.name = "renderCompleteTime"
field236.appinfo = "Render operation complete"

Script228.field.append(field236)
field237 = x3d.field()
field237.accessType = "initializeOnly"
field237.type = "MFString"
field237.name = "movieFormat"
field237.appinfo = "Format of rendered output movie (mpeg mp4 etc.)"

Script228.field.append(field237)
field238 = x3d.field()
field238.accessType = "initializeOnly"
field238.type = "MFString"
field238.name = "imageFormat"
field238.appinfo = "Format of rendered output images (png jpeg gif tiff etc.)"

Script228.field.append(field238)
field239 = x3d.field()
field239.accessType = "initializeOnly"
field239.type = "SFBool"
field239.name = "traceEnabled"
field239.appinfo = "enable console output to trace script computations and prototype progress"

Script228.field.append(field239)

Script228.sourceCode = '''ecmascript:\n"+
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
IS240 = x3d.IS()
connect241 = x3d.connect()
connect241.nodeField = "description"
connect241.protoField = "description"

IS240.connect.append(connect241)
connect242 = x3d.connect()
connect242.nodeField = "enabled"
connect242.protoField = "enabled"

IS240.connect.append(connect242)
connect243 = x3d.connect()
connect243.nodeField = "frameRate"
connect243.protoField = "frameRate"

IS240.connect.append(connect243)
connect244 = x3d.connect()
connect244.nodeField = "frameSize"
connect244.protoField = "frameSize"

IS240.connect.append(connect244)
connect245 = x3d.connect()
connect245.nodeField = "pixelAspectRatio"
connect245.protoField = "pixelAspectRatio"

IS240.connect.append(connect245)
connect246 = x3d.connect()
connect246.nodeField = "set_startTime"
connect246.protoField = "set_startTime"

IS240.connect.append(connect246)
connect247 = x3d.connect()
connect247.nodeField = "progress"
connect247.protoField = "progress"

IS240.connect.append(connect247)
connect248 = x3d.connect()
connect248.nodeField = "renderCompleteTime"
connect248.protoField = "renderCompleteTime"

IS240.connect.append(connect248)
connect249 = x3d.connect()
connect249.nodeField = "movieFormat"
connect249.protoField = "movieFormat"

IS240.connect.append(connect249)
connect250 = x3d.connect()
connect250.nodeField = "imageFormat"
connect250.protoField = "imageFormat"

IS240.connect.append(connect250)
connect251 = x3d.connect()
connect251.nodeField = "traceEnabled"
connect251.protoField = "traceEnabled"

IS240.connect.append(connect251)

Script228.IS = IS240

ProtoBody227.children.append(Script228)

ProtoDeclare214.ProtoBody = ProtoBody227

Scene14.children.append(ProtoDeclare214)
Background252 = x3d.Background()
Background252.skyColor = [(0.282353, 0.380392, 0.470588)]

Scene14.children.append(Background252)
Anchor253 = x3d.Anchor()
Anchor253.description = "launch CameraExample scene"
Anchor253.url = ["CameraExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"]
Transform254 = x3d.Transform()
Shape255 = x3d.Shape()
Appearance256 = x3d.Appearance()
Material257 = x3d.Material()
Material257.diffuseColor = [1,1,0.2]

Appearance256.material = Material257

Shape255.appearance = Appearance256
Text258 = x3d.Text()
Text258.string = ["CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"]
FontStyle259 = x3d.FontStyle()
FontStyle259.justify = ["MIDDLE","MIDDLE"]

Text258.fontStyle = FontStyle259

Shape255.geometry = Text258

Transform254.children.append(Shape255)

Anchor253.children.append(Transform254)

Scene14.children.append(Anchor253)

X3D0.Scene = Scene14
f = open("../data/CameraPrototypes.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/CameraPrototypes.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/CameraPrototypes.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
