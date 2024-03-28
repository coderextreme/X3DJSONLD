import x3dpsail as x3d
ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.2")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("CameraPrototypes.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Don Brutzman and Jeff Weekley")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("created")
meta5.setContent("16 March 2009")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("modified")
meta6.setContent("25 October 2016")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("TODO")
meta7.setContent("Schematron rules, backed up by initialize() checks")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("BeyondViewpointCameraNodesWeb3D2009.pdf")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("subject")
meta10.setContent("Camera nodes for Viewpoint navigation control")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("CameraExamples.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("identifier")
meta12.setContent("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("reference")
meta13.setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("generator")
meta14.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("license")
meta15.setContent("../license.html")

head1.addMeta(meta15)

X3D0.setHead(head1)
Scene16 = x3d.Scene()
#=============== Camera ==============
ProtoDeclare17 = x3d.ProtoDeclare()
ProtoDeclare17.setName("Camera")
ProtoDeclare17.setAppinfo("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.")
ProtoInterface18 = x3d.ProtoInterface()
#Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields
field19 = x3d.field()
field19.setName("description")
field19.setAccessType("inputOutput")
field19.setAppinfo("Text description to be displayed for this Camera")
field19.setType("SFString")

ProtoInterface18.addField(field19)
field20 = x3d.field()
field20.setName("position")
field20.setAccessType("inputOutput")
field20.setAppinfo("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated")
field20.setType("SFVec3f")
field20.setValue("0 0 10")

ProtoInterface18.addField(field20)
field21 = x3d.field()
field21.setName("orientation")
field21.setAccessType("inputOutput")
field21.setAppinfo("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated")
field21.setType("SFRotation")
field21.setValue("0 0 1 0")

ProtoInterface18.addField(field21)
field22 = x3d.field()
field22.setName("fieldOfView")
field22.setAccessType("inputOutput")
field22.setAppinfo("pi/4")
field22.setType("SFFloat")
field22.setValue("0.7854")

ProtoInterface18.addField(field22)
field23 = x3d.field()
field23.setName("set_fraction")
field23.setAccessType("inputOnly")
field23.setAppinfo("input fraction drives interpolators")
field23.setType("SFFloat")

ProtoInterface18.addField(field23)
field24 = x3d.field()
field24.setName("set_bind")
field24.setAccessType("inputOnly")
field24.setAppinfo("input event binds or unbinds this Camera")
field24.setType("SFBool")

ProtoInterface18.addField(field24)
field25 = x3d.field()
field25.setName("bindTime")
field25.setAccessType("outputOnly")
field25.setAppinfo("output event indicates when this Camera is bound")
field25.setType("SFTime")

ProtoInterface18.addField(field25)
field26 = x3d.field()
field26.setName("isBound")
field26.setAccessType("outputOnly")
field26.setAppinfo("output event indicates whether this Camera is bound or unbound")
field26.setType("SFBool")

ProtoInterface18.addField(field26)
field27 = x3d.field()
field27.setName("nearClipPlane")
field27.setAccessType("inputOutput")
field27.setAppinfo("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]")
field27.setType("SFFloat")
field27.setValue("0.25")

ProtoInterface18.addField(field27)
field28 = x3d.field()
field28.setName("farClipPlane")
field28.setAccessType("inputOutput")
field28.setAppinfo("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit")
field28.setType("SFFloat")
field28.setValue("0")

ProtoInterface18.addField(field28)
field29 = x3d.field()
field29.setName("shots")
field29.setAccessType("inputOutput")
field29.setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes")
field29.setType("MFNode")
#initialization nodes (if any) go here

ProtoInterface18.addField(field29)
field30 = x3d.field()
field30.setName("headlight")
field30.setAccessType("inputOutput")
field30.setAppinfo("Whether camera headlight is on or off")
field30.setType("SFBool")
field30.setValue("true")

ProtoInterface18.addField(field30)
field31 = x3d.field()
field31.setName("headlightColor")
field31.setAccessType("inputOutput")
field31.setAppinfo("Camera headlight color")
field31.setType("SFColor")
field31.setValue("1 1 1")

ProtoInterface18.addField(field31)
field32 = x3d.field()
field32.setName("headlightIntensity")
field32.setAccessType("inputOutput")
field32.setAppinfo("Camera headlight intensity")
field32.setType("SFFloat")
field32.setValue("1")

ProtoInterface18.addField(field32)
field33 = x3d.field()
field33.setName("filterColor")
field33.setAccessType("inputOutput")
field33.setAppinfo("Camera filter color that modifies virtual lens capture")
field33.setType("SFColor")
field33.setValue("1 1 1")

ProtoInterface18.addField(field33)
field34 = x3d.field()
field34.setName("filterTransparency")
field34.setAccessType("inputOutput")
field34.setAppinfo("Camera filter transparency that modifies virtual lens capture")
field34.setType("SFFloat")
field34.setValue("1")

ProtoInterface18.addField(field34)
field35 = x3d.field()
field35.setName("upVector")
field35.setAccessType("inputOutput")
field35.setAppinfo("upVector changes modify camera orientation (and possibly vice versa)")
field35.setType("SFVec3f")
field35.setValue("0 1 0")

ProtoInterface18.addField(field35)
field36 = x3d.field()
field36.setName("fStop")
field36.setAccessType("inputOutput")
field36.setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")
field36.setType("SFFloat")
field36.setValue("5.6")

ProtoInterface18.addField(field36)
field37 = x3d.field()
field37.setName("focusDistance")
field37.setAccessType("inputOutput")
field37.setAppinfo("Distance to focal plane of sharpest focus")
field37.setType("SFFloat")
field37.setValue("10")

ProtoInterface18.addField(field37)
field38 = x3d.field()
field38.setName("isActive")
field38.setAccessType("outputOnly")
field38.setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")
field38.setType("SFBool")

ProtoInterface18.addField(field38)
field39 = x3d.field()
field39.setName("totalDuration")
field39.setAccessType("outputOnly")
field39.setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations")
field39.setType("SFTime")

ProtoInterface18.addField(field39)
field40 = x3d.field()
field40.setName("offlineRender")
field40.setAccessType("inputOutput")
field40.setAppinfo("OfflineRender node")
field40.setType("SFNode")
#initialization node (if any) goes here

ProtoInterface18.addField(field40)
field41 = x3d.field()
field41.setName("traceEnabled")
field41.setAccessType("initializeOnly")
field41.setAppinfo("enable console output to trace script computations and prototype progress")
field41.setType("SFBool")
field41.setValue("false")

ProtoInterface18.addField(field41)

ProtoDeclare17.setProtoInterface(ProtoInterface18)
ProtoBody42 = x3d.ProtoBody()
Viewpoint43 = x3d.Viewpoint()
Viewpoint43.setDEF("CameraViewpoint")
IS44 = x3d.IS()
connect45 = x3d.connect()
connect45.setNodeField("description")
connect45.setProtoField("description")

IS44.addConnect(connect45)
connect46 = x3d.connect()
connect46.setNodeField("position")
connect46.setProtoField("position")

IS44.addConnect(connect46)
connect47 = x3d.connect()
connect47.setNodeField("orientation")
connect47.setProtoField("orientation")

IS44.addConnect(connect47)
connect48 = x3d.connect()
connect48.setNodeField("fieldOfView")
connect48.setProtoField("fieldOfView")

IS44.addConnect(connect48)
connect49 = x3d.connect()
connect49.setNodeField("set_bind")
connect49.setProtoField("set_bind")

IS44.addConnect(connect49)
connect50 = x3d.connect()
connect50.setNodeField("bindTime")
connect50.setProtoField("bindTime")

IS44.addConnect(connect50)
connect51 = x3d.connect()
connect51.setNodeField("isBound")
connect51.setProtoField("isBound")

IS44.addConnect(connect51)

Viewpoint43.setIS(IS44)

ProtoBody42.addChildren(Viewpoint43)
#NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation
NavigationInfo52 = x3d.NavigationInfo()
NavigationInfo52.setDEF("CameraNavInfo")
NavigationInfo52.setType(["EXAMINE","FLY","ANY"])
IS53 = x3d.IS()
connect54 = x3d.connect()
connect54.setNodeField("set_bind")
connect54.setProtoField("set_bind")

IS53.addConnect(connect54)
connect55 = x3d.connect()
connect55.setNodeField("headlight")
connect55.setProtoField("headlight")

IS53.addConnect(connect55)
connect56 = x3d.connect()
connect56.setNodeField("visibilityLimit")
connect56.setProtoField("farClipPlane")

IS53.addConnect(connect56)
#No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing.

NavigationInfo52.setIS(IS53)

ProtoBody42.addChildren(NavigationInfo52)
#this DirectionalLight replaces NavigationInfo headlight in order to add color capability
DirectionalLight57 = x3d.DirectionalLight()
DirectionalLight57.setDEF("CameraDirectionalLight")
DirectionalLight57.setGlobal(True)
#TODO confirm other default field values match NavigationInfo spec
IS58 = x3d.IS()
connect59 = x3d.connect()
connect59.setNodeField("on")
connect59.setProtoField("headlight")

IS58.addConnect(connect59)
connect60 = x3d.connect()
connect60.setNodeField("color")
connect60.setProtoField("headlightColor")

IS58.addConnect(connect60)
connect61 = x3d.connect()
connect61.setNodeField("intensity")
connect61.setProtoField("headlightIntensity")

IS58.addConnect(connect61)

DirectionalLight57.setIS(IS58)

ProtoBody42.addChildren(DirectionalLight57)
PositionInterpolator62 = x3d.PositionInterpolator()
PositionInterpolator62.setDEF("CameraPositionInterpolator")
PositionInterpolator62.setKey([0,1])
PositionInterpolator62.setKeyValue([0,0,0,0,0,0])
IS63 = x3d.IS()
connect64 = x3d.connect()
connect64.setNodeField("set_fraction")
connect64.setProtoField("set_fraction")

IS63.addConnect(connect64)

PositionInterpolator62.setIS(IS63)

ProtoBody42.addChildren(PositionInterpolator62)
OrientationInterpolator65 = x3d.OrientationInterpolator()
OrientationInterpolator65.setDEF("CameraOrientationInterpolator")
OrientationInterpolator65.setKey([0,1])
OrientationInterpolator65.setKeyValue([0,1,0,0,0,1,0,0])
IS66 = x3d.IS()
connect67 = x3d.connect()
connect67.setNodeField("set_fraction")
connect67.setProtoField("set_fraction")

IS66.addConnect(connect67)

OrientationInterpolator65.setIS(IS66)

ProtoBody42.addChildren(OrientationInterpolator65)
ROUTE68 = x3d.ROUTE()
ROUTE68.setFromField("value_changed")
ROUTE68.setFromNode("CameraPositionInterpolator")
ROUTE68.setToField("position")
ROUTE68.setToNode("CameraViewpoint")

ProtoBody42.addChildren(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.setFromField("value_changed")
ROUTE69.setFromNode("CameraOrientationInterpolator")
ROUTE69.setToField("orientation")
ROUTE69.setToNode("CameraViewpoint")

ProtoBody42.addChildren(ROUTE69)
Script70 = x3d.Script()
Script70.setDEF("CameraScript")
Script70.setDirectOutput(True)
Script70.setMustEvaluate(True)
#binding is controlled externally, all camera operations proceed the same regardless of whether bound or not
field71 = x3d.field()
field71.setName("description")
field71.setAccessType("inputOutput")
field71.setAppinfo("Text description to be displayed for this Camera")
field71.setType("SFString")

Script70.addField(field71)
field72 = x3d.field()
field72.setName("position")
field72.setAccessType("inputOutput")
field72.setAppinfo("Camera position in local transformation frame")
field72.setType("SFVec3f")

Script70.addField(field72)
field73 = x3d.field()
field73.setName("orientation")
field73.setAccessType("inputOutput")
field73.setAppinfo("Camera rotation in local transformation frame")
field73.setType("SFRotation")

Script70.addField(field73)
field74 = x3d.field()
field74.setName("set_fraction")
field74.setAccessType("inputOnly")
field74.setAppinfo("input fraction drives interpolators")
field74.setType("SFFloat")

Script70.addField(field74)
field75 = x3d.field()
field75.setName("set_bind")
field75.setAccessType("inputOnly")
field75.setAppinfo("input event binds or unbinds this Camera")
field75.setType("SFBool")

Script70.addField(field75)
field76 = x3d.field()
field76.setName("fieldOfView")
field76.setAccessType("inputOutput")
field76.setAppinfo("pi/4")
field76.setType("SFFloat")

Script70.addField(field76)
field77 = x3d.field()
field77.setName("nearClipPlane")
field77.setAccessType("inputOutput")
field77.setAppinfo("Vector distance to near clipping plane")
field77.setType("SFFloat")

Script70.addField(field77)
field78 = x3d.field()
field78.setName("farClipPlane")
field78.setAccessType("inputOutput")
field78.setAppinfo("Vector distance to far clipping plane")
field78.setType("SFFloat")

Script70.addField(field78)
field79 = x3d.field()
field79.setName("shots")
field79.setAccessType("inputOutput")
field79.setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes")
field79.setType("MFNode")
#initialization nodes (if any) go here

Script70.addField(field79)
field80 = x3d.field()
field80.setName("filterColor")
field80.setAccessType("inputOutput")
field80.setAppinfo("Camera filter color that modifies virtual lens capture")
field80.setType("SFColor")

Script70.addField(field80)
field81 = x3d.field()
field81.setName("filterTransparency")
field81.setAccessType("inputOutput")
field81.setAppinfo("Camera filter transparency that modifies virtual lens capture")
field81.setType("SFFloat")

Script70.addField(field81)
field82 = x3d.field()
field82.setName("upVector")
field82.setAccessType("inputOutput")
field82.setAppinfo("upVector changes modify camera orientation (and possibly vice versa)")
field82.setType("SFVec3f")

Script70.addField(field82)
field83 = x3d.field()
field83.setName("fStop")
field83.setAccessType("inputOutput")
field83.setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")
field83.setType("SFFloat")

Script70.addField(field83)
field84 = x3d.field()
field84.setName("focusDistance")
field84.setAccessType("inputOutput")
field84.setAppinfo("Distance to focal plane of sharpest focus")
field84.setType("SFFloat")

Script70.addField(field84)
field85 = x3d.field()
field85.setName("isActive")
field85.setAccessType("outputOnly")
field85.setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")
field85.setType("SFBool")

Script70.addField(field85)
field86 = x3d.field()
field86.setName("totalDuration")
field86.setAccessType("outputOnly")
field86.setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations")
field86.setType("SFTime")

Script70.addField(field86)
field87 = x3d.field()
field87.setName("offlineRender")
field87.setAccessType("inputOutput")
field87.setAppinfo("OfflineRender node")
field87.setType("SFNode")
#initialization node (if any) goes here

Script70.addField(field87)
field88 = x3d.field()
field88.setName("ViewpointNode")
field88.setAccessType("initializeOnly")
field88.setAppinfo("node reference to permit getting setting fields from within Script")
field88.setType("SFNode")
Viewpoint89 = x3d.Viewpoint()
Viewpoint89.setUSE("CameraViewpoint")

field88.addChildren(Viewpoint89)

Script70.addField(field88)
field90 = x3d.field()
field90.setName("NavInfoNode")
field90.setAccessType("initializeOnly")
field90.setAppinfo("node reference to permit getting setting fields from within Script")
field90.setType("SFNode")
NavigationInfo91 = x3d.NavigationInfo()
NavigationInfo91.setUSE("CameraNavInfo")

field90.addChildren(NavigationInfo91)

Script70.addField(field90)
field92 = x3d.field()
field92.setName("CameraPI")
field92.setAccessType("initializeOnly")
field92.setAppinfo("node reference to permit getting setting fields from within Script")
field92.setType("SFNode")
PositionInterpolator93 = x3d.PositionInterpolator()
PositionInterpolator93.setUSE("CameraPositionInterpolator")

field92.addChildren(PositionInterpolator93)

Script70.addField(field92)
field94 = x3d.field()
field94.setName("CameraOI")
field94.setAccessType("initializeOnly")
field94.setAppinfo("node reference to permit getting setting fields from within Script")
field94.setType("SFNode")
OrientationInterpolator95 = x3d.OrientationInterpolator()
OrientationInterpolator95.setUSE("CameraOrientationInterpolator")

field94.addChildren(OrientationInterpolator95)

Script70.addField(field94)
field96 = x3d.field()
field96.setName("key")
field96.setAccessType("inputOutput")
field96.setAppinfo("key array for interpolators")
field96.setType("MFFloat")

Script70.addField(field96)
field97 = x3d.field()
field97.setName("keyValuePosition")
field97.setAccessType("inputOutput")
field97.setAppinfo("keyValue array for PositionInterpolator")
field97.setType("MFVec3f")

Script70.addField(field97)
field98 = x3d.field()
field98.setName("keyValueOrientation")
field98.setAccessType("inputOutput")
field98.setAppinfo("keyValue array for OrientationInterpolator")
field98.setType("MFRotation")

Script70.addField(field98)
field99 = x3d.field()
field99.setName("animated")
field99.setAccessType("inputOutput")
field99.setAppinfo("whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events")
field99.setType("SFBool")
field99.setValue("false")

Script70.addField(field99)
field100 = x3d.field()
field100.setName("initialized")
field100.setAccessType("initializeOnly")
field100.setAppinfo("perform checkShots() function once immediately after initialization")
field100.setType("SFBool")
field100.setValue("false")

Script70.addField(field100)
field101 = x3d.field()
field101.setName("shotCount")
field101.setAccessType("initializeOnly")
field101.setAppinfo("how many CameraShot nodes are contained in shots array")
field101.setType("SFInt32")
field101.setValue("0")

Script70.addField(field101)
field102 = x3d.field()
field102.setName("movesCount")
field102.setAccessType("initializeOnly")
field102.setAppinfo("how many CameraMove nodes are contained in moves array")
field102.setType("SFInt32")
field102.setValue("0")

Script70.addField(field102)
field103 = x3d.field()
field103.setName("frameCount")
field103.setAccessType("initializeOnly")
field103.setAppinfo("how many frames were created in current loop")
field103.setType("SFFloat")
field103.setValue("0")

Script70.addField(field103)
field104 = x3d.field()
field104.setName("startTime")
field104.setAccessType("initializeOnly")
field104.setAppinfo("holding variable")
field104.setType("SFTime")
field104.setValue("0")

Script70.addField(field104)
field105 = x3d.field()
field105.setName("priorTraceTime")
field105.setAccessType("initializeOnly")
field105.setAppinfo("holding variable")
field105.setType("SFTime")
field105.setValue("0")

Script70.addField(field105)
field106 = x3d.field()
field106.setName("traceEnabled")
field106.setAccessType("initializeOnly")
field106.setAppinfo("enable console output to trace script computations and prototype progress")
field106.setType("SFBool")

Script70.addField(field106)
IS107 = x3d.IS()
connect108 = x3d.connect()
connect108.setNodeField("description")
connect108.setProtoField("description")

IS107.addConnect(connect108)
connect109 = x3d.connect()
connect109.setNodeField("position")
connect109.setProtoField("position")

IS107.addConnect(connect109)
connect110 = x3d.connect()
connect110.setNodeField("orientation")
connect110.setProtoField("orientation")

IS107.addConnect(connect110)
connect111 = x3d.connect()
connect111.setNodeField("set_fraction")
connect111.setProtoField("set_fraction")

IS107.addConnect(connect111)
connect112 = x3d.connect()
connect112.setNodeField("set_bind")
connect112.setProtoField("set_bind")

IS107.addConnect(connect112)
connect113 = x3d.connect()
connect113.setNodeField("fieldOfView")
connect113.setProtoField("fieldOfView")

IS107.addConnect(connect113)
connect114 = x3d.connect()
connect114.setNodeField("nearClipPlane")
connect114.setProtoField("nearClipPlane")

IS107.addConnect(connect114)
connect115 = x3d.connect()
connect115.setNodeField("farClipPlane")
connect115.setProtoField("farClipPlane")

IS107.addConnect(connect115)
connect116 = x3d.connect()
connect116.setNodeField("shots")
connect116.setProtoField("shots")

IS107.addConnect(connect116)
connect117 = x3d.connect()
connect117.setNodeField("filterColor")
connect117.setProtoField("filterColor")

IS107.addConnect(connect117)
connect118 = x3d.connect()
connect118.setNodeField("filterTransparency")
connect118.setProtoField("filterTransparency")

IS107.addConnect(connect118)
connect119 = x3d.connect()
connect119.setNodeField("upVector")
connect119.setProtoField("upVector")

IS107.addConnect(connect119)
connect120 = x3d.connect()
connect120.setNodeField("fStop")
connect120.setProtoField("fStop")

IS107.addConnect(connect120)
connect121 = x3d.connect()
connect121.setNodeField("focusDistance")
connect121.setProtoField("focusDistance")

IS107.addConnect(connect121)
connect122 = x3d.connect()
connect122.setNodeField("isActive")
connect122.setProtoField("isActive")

IS107.addConnect(connect122)
connect123 = x3d.connect()
connect123.setNodeField("totalDuration")
connect123.setProtoField("totalDuration")

IS107.addConnect(connect123)
connect124 = x3d.connect()
connect124.setNodeField("offlineRender")
connect124.setProtoField("offlineRender")

IS107.addConnect(connect124)
connect125 = x3d.connect()
connect125.setNodeField("traceEnabled")
connect125.setProtoField("traceEnabled")

IS107.addConnect(connect125)

Script70.setIS(IS107)

Script70.setSourceCode('''ecmascript:\n"+
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
"}''')

ProtoBody42.addChildren(Script70)
ROUTE126 = x3d.ROUTE()
ROUTE126.setFromField("position")
ROUTE126.setFromNode("CameraScript")
ROUTE126.setToField("position")
ROUTE126.setToNode("CameraViewpoint")

ProtoBody42.addChildren(ROUTE126)
ROUTE127 = x3d.ROUTE()
ROUTE127.setFromField("orientation")
ROUTE127.setFromNode("CameraScript")
ROUTE127.setToField("orientation")
ROUTE127.setToNode("CameraViewpoint")

ProtoBody42.addChildren(ROUTE127)
ROUTE128 = x3d.ROUTE()
ROUTE128.setFromField("isActive")
ROUTE128.setFromNode("CameraScript")
ROUTE128.setToField("set_bind")
ROUTE128.setToNode("CameraViewpoint")

ProtoBody42.addChildren(ROUTE128)
ROUTE129 = x3d.ROUTE()
ROUTE129.setFromField("isActive")
ROUTE129.setFromNode("CameraScript")
ROUTE129.setToField("set_bind")
ROUTE129.setToNode("CameraNavInfo")

ProtoBody42.addChildren(ROUTE129)
ROUTE130 = x3d.ROUTE()
ROUTE130.setFromField("isActive")
ROUTE130.setFromNode("CameraScript")
ROUTE130.setToField("on")
ROUTE130.setToNode("CameraDirectionalLight")

ProtoBody42.addChildren(ROUTE130)

ProtoDeclare17.setProtoBody(ProtoBody42)

Scene16.addChildren(ProtoDeclare17)
#=============== CameraShot ==============
ProtoDeclare131 = x3d.ProtoDeclare()
ProtoDeclare131.setName("CameraShot")
ProtoDeclare131.setAppinfo("CameraShot collects a specific set of CameraMovement animations that make up an individual shot.")
ProtoInterface132 = x3d.ProtoInterface()
field133 = x3d.field()
field133.setName("description")
field133.setAccessType("inputOutput")
field133.setAppinfo("Text description to be displayed for this CameraShot")
field133.setType("SFString")

ProtoInterface132.addField(field133)
field134 = x3d.field()
field134.setName("enabled")
field134.setAccessType("inputOutput")
field134.setAppinfo("Whether this CameraShot can be activated")
field134.setType("SFBool")
field134.setValue("true")

ProtoInterface132.addField(field134)
field135 = x3d.field()
field135.setName("moves")
field135.setAccessType("inputOutput")
field135.setAppinfo("Set of CameraMovement nodes")
field135.setType("MFNode")
#initializing CameraMovement nodes are inserted here by scene author using ProtoInstance

ProtoInterface132.addField(field135)
field136 = x3d.field()
field136.setName("initialPosition")
field136.setAccessType("inputOutput")
field136.setAppinfo("Setup to reinitialize camera position for this shot")
field136.setType("SFVec3f")
field136.setValue("0 0 10")

ProtoInterface132.addField(field136)
field137 = x3d.field()
field137.setName("initialOrientation")
field137.setAccessType("inputOutput")
field137.setAppinfo("Setup to reinitialize camera rotation for this shot")
field137.setType("SFRotation")
field137.setValue("0 0 1 0")

ProtoInterface132.addField(field137)
field138 = x3d.field()
field138.setName("initialAimPoint")
field138.setAccessType("inputOutput")
field138.setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot")
field138.setType("SFVec3f")
field138.setValue("0 0 0")

ProtoInterface132.addField(field138)
field139 = x3d.field()
field139.setName("initialFieldOfView")
field139.setAccessType("inputOutput")
field139.setAppinfo("pi/4")
field139.setType("SFFloat")
field139.setValue("0.7854")

ProtoInterface132.addField(field139)
field140 = x3d.field()
field140.setName("initialFStop")
field140.setAccessType("inputOutput")
field140.setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")
field140.setType("SFFloat")
field140.setValue("5.6")

ProtoInterface132.addField(field140)
field141 = x3d.field()
field141.setName("initialFocusDistance")
field141.setAccessType("inputOutput")
field141.setAppinfo("Distance to focal plane of sharpest focus")
field141.setType("SFFloat")
field141.setValue("10")

ProtoInterface132.addField(field141)
field142 = x3d.field()
field142.setName("shotDuration")
field142.setAccessType("outputOnly")
field142.setAppinfo("Subtotal duration of contained CameraMovement move durations")
field142.setType("SFTime")

ProtoInterface132.addField(field142)
field143 = x3d.field()
field143.setName("isActive")
field143.setAccessType("outputOnly")
field143.setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")
field143.setType("SFBool")

ProtoInterface132.addField(field143)
field144 = x3d.field()
field144.setName("traceEnabled")
field144.setAccessType("initializeOnly")
field144.setAppinfo("enable console output to trace script computations and prototype progress")
field144.setType("SFBool")
field144.setValue("false")

ProtoInterface132.addField(field144)

ProtoDeclare131.setProtoInterface(ProtoInterface132)
ProtoBody145 = x3d.ProtoBody()
Script146 = x3d.Script()
Script146.setDEF("CameraShotScript")
Script146.setDirectOutput(True)
Script146.setMustEvaluate(True)
field147 = x3d.field()
field147.setName("description")
field147.setAccessType("inputOutput")
field147.setAppinfo("Text description to be displayed for this CameraShot")
field147.setType("SFString")

Script146.addField(field147)
field148 = x3d.field()
field148.setName("enabled")
field148.setAccessType("inputOutput")
field148.setAppinfo("Whether this CameraShot can be activated")
field148.setType("SFBool")

Script146.addField(field148)
field149 = x3d.field()
field149.setName("moves")
field149.setAccessType("inputOutput")
field149.setAppinfo("Set of CameraMovement nodes")
field149.setType("MFNode")
#initialization nodes (if any) go here

Script146.addField(field149)
field150 = x3d.field()
field150.setName("initialPosition")
field150.setAccessType("inputOutput")
field150.setAppinfo("Setup to reinitialize camera position for this shot")
field150.setType("SFVec3f")

Script146.addField(field150)
field151 = x3d.field()
field151.setName("initialOrientation")
field151.setAccessType("inputOutput")
field151.setAppinfo("Setup to reinitialize camera rotation for this shot")
field151.setType("SFRotation")

Script146.addField(field151)
field152 = x3d.field()
field152.setName("initialAimPoint")
field152.setAccessType("inputOutput")
field152.setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot")
field152.setType("SFVec3f")

Script146.addField(field152)
field153 = x3d.field()
field153.setName("initialFieldOfView")
field153.setAccessType("inputOutput")
field153.setAppinfo("pi/4")
field153.setType("SFFloat")

Script146.addField(field153)
field154 = x3d.field()
field154.setName("initialFStop")
field154.setAccessType("inputOutput")
field154.setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")
field154.setType("SFFloat")

Script146.addField(field154)
field155 = x3d.field()
field155.setName("initialFocusDistance")
field155.setAccessType("inputOutput")
field155.setAppinfo("Distance to focal plane of sharpest focus")
field155.setType("SFFloat")

Script146.addField(field155)
field156 = x3d.field()
field156.setName("shotDuration")
field156.setAccessType("outputOnly")
field156.setAppinfo("Subtotal duration of contained CameraMovement move durations")
field156.setType("SFTime")

Script146.addField(field156)
field157 = x3d.field()
field157.setName("isActive")
field157.setAccessType("outputOnly")
field157.setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")
field157.setType("SFBool")

Script146.addField(field157)
field158 = x3d.field()
field158.setName("traceEnabled")
field158.setAccessType("initializeOnly")
field158.setAppinfo("enable console output to trace script computations and prototype progress")
field158.setType("SFBool")

Script146.addField(field158)
field159 = x3d.field()
field159.setName("key")
field159.setAccessType("inputOutput")
field159.setAppinfo("key array for interpolators")
field159.setType("MFFloat")

Script146.addField(field159)
field160 = x3d.field()
field160.setName("keyValuePosition")
field160.setAccessType("inputOutput")
field160.setAppinfo("keyValue array for PositionInterpolator")
field160.setType("MFVec3f")

Script146.addField(field160)
field161 = x3d.field()
field161.setName("keyValueOrientation")
field161.setAccessType("inputOutput")
field161.setAppinfo("keyValue array for OrientationInterpolator")
field161.setType("MFRotation")

Script146.addField(field161)
IS162 = x3d.IS()
connect163 = x3d.connect()
connect163.setNodeField("description")
connect163.setProtoField("description")

IS162.addConnect(connect163)
connect164 = x3d.connect()
connect164.setNodeField("enabled")
connect164.setProtoField("enabled")

IS162.addConnect(connect164)
connect165 = x3d.connect()
connect165.setNodeField("moves")
connect165.setProtoField("moves")

IS162.addConnect(connect165)
connect166 = x3d.connect()
connect166.setNodeField("initialPosition")
connect166.setProtoField("initialPosition")

IS162.addConnect(connect166)
connect167 = x3d.connect()
connect167.setNodeField("initialOrientation")
connect167.setProtoField("initialOrientation")

IS162.addConnect(connect167)
connect168 = x3d.connect()
connect168.setNodeField("initialAimPoint")
connect168.setProtoField("initialAimPoint")

IS162.addConnect(connect168)
connect169 = x3d.connect()
connect169.setNodeField("initialFieldOfView")
connect169.setProtoField("initialFieldOfView")

IS162.addConnect(connect169)
connect170 = x3d.connect()
connect170.setNodeField("initialFStop")
connect170.setProtoField("initialFStop")

IS162.addConnect(connect170)
connect171 = x3d.connect()
connect171.setNodeField("initialFocusDistance")
connect171.setProtoField("initialFocusDistance")

IS162.addConnect(connect171)
connect172 = x3d.connect()
connect172.setNodeField("shotDuration")
connect172.setProtoField("shotDuration")

IS162.addConnect(connect172)
connect173 = x3d.connect()
connect173.setNodeField("isActive")
connect173.setProtoField("isActive")

IS162.addConnect(connect173)
connect174 = x3d.connect()
connect174.setNodeField("traceEnabled")
connect174.setProtoField("traceEnabled")

IS162.addConnect(connect174)

Script146.setIS(IS162)

Script146.setSourceCode('''ecmascript:\n"+
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
"}''')

ProtoBody145.addChildren(Script146)
#Add any ROUTEs here, going from Script to other nodes within ProtoBody

ProtoDeclare131.setProtoBody(ProtoBody145)

Scene16.addChildren(ProtoDeclare131)
#=============== CameraMovement ==============
ProtoDeclare175 = x3d.ProtoDeclare()
ProtoDeclare175.setName("CameraMovement")
ProtoDeclare175.setAppinfo("CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.")
ProtoInterface176 = x3d.ProtoInterface()
field177 = x3d.field()
field177.setName("description")
field177.setAccessType("inputOutput")
field177.setAppinfo("Text description to be displayed for this CameraMovement")
field177.setType("SFString")

ProtoInterface176.addField(field177)
field178 = x3d.field()
field178.setName("enabled")
field178.setAccessType("inputOutput")
field178.setAppinfo("Whether this CameraMovement can be activated")
field178.setType("SFBool")
field178.setValue("true")

ProtoInterface176.addField(field178)
field179 = x3d.field()
field179.setName("duration")
field179.setAccessType("inputOutput")
field179.setAppinfo("Duration in seconds for this move")
field179.setType("SFFloat")
field179.setValue("0")

ProtoInterface176.addField(field179)
field180 = x3d.field()
field180.setName("goalPosition")
field180.setAccessType("inputOutput")
field180.setAppinfo("Goal camera position for this move")
field180.setType("SFVec3f")
field180.setValue("0 0 10")

ProtoInterface176.addField(field180)
field181 = x3d.field()
field181.setName("goalOrientation")
field181.setAccessType("inputOutput")
field181.setAppinfo("Goal camera rotation for this move")
field181.setType("SFRotation")
field181.setValue("0 0 1 0")

ProtoInterface176.addField(field181)
field182 = x3d.field()
field182.setName("tracking")
field182.setAccessType("inputOutput")
field182.setAppinfo("Whether or not camera direction is tracking towards the aimPoint")
field182.setType("SFBool")
field182.setValue("false")

ProtoInterface176.addField(field182)
field183 = x3d.field()
field183.setName("goalAimPoint")
field183.setAccessType("inputOutput")
field183.setAppinfo("Goal aimPoint for this move, ignored if tracking=false")
field183.setType("SFVec3f")
field183.setValue("0 0 0")

ProtoInterface176.addField(field183)
field184 = x3d.field()
field184.setName("goalFieldOfView")
field184.setAccessType("inputOutput")
field184.setAppinfo("Goal fieldOfView for this move")
field184.setType("SFFloat")
field184.setValue("0.7854")

ProtoInterface176.addField(field184)
field185 = x3d.field()
field185.setName("goalFStop")
field185.setAccessType("inputOutput")
field185.setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")
field185.setType("SFFloat")
field185.setValue("5.6")

ProtoInterface176.addField(field185)
field186 = x3d.field()
field186.setName("goalFocusDistance")
field186.setAccessType("inputOutput")
field186.setAppinfo("Distance to focal plane of sharpest focus")
field186.setType("SFFloat")
field186.setValue("10")

ProtoInterface176.addField(field186)
field187 = x3d.field()
field187.setName("isActive")
field187.setAccessType("outputOnly")
field187.setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")
field187.setType("SFBool")

ProtoInterface176.addField(field187)
field188 = x3d.field()
field188.setName("traceEnabled")
field188.setAccessType("initializeOnly")
field188.setAppinfo("enable console output to trace script computations and prototype progress")
field188.setType("SFBool")
field188.setValue("false")

ProtoInterface176.addField(field188)

ProtoDeclare175.setProtoInterface(ProtoInterface176)
ProtoBody189 = x3d.ProtoBody()
#First node determines node type of this prototype
#Subsequent nodes do not render, but still must be a valid X3D subgraph
#Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events
Script190 = x3d.Script()
Script190.setDEF("CameraMovementScript")
Script190.setDirectOutput(True)
Script190.setMustEvaluate(True)
field191 = x3d.field()
field191.setName("description")
field191.setAccessType("inputOutput")
field191.setAppinfo("Text description to be displayed for this CameraMovement")
field191.setType("SFString")

Script190.addField(field191)
field192 = x3d.field()
field192.setName("enabled")
field192.setAccessType("inputOutput")
field192.setAppinfo("Whether this CameraMovement can be activated")
field192.setType("SFBool")

Script190.addField(field192)
field193 = x3d.field()
field193.setName("duration")
field193.setAccessType("inputOutput")
field193.setAppinfo("Duration in seconds for this move")
field193.setType("SFFloat")

Script190.addField(field193)
field194 = x3d.field()
field194.setName("goalPosition")
field194.setAccessType("inputOutput")
field194.setAppinfo("Goal camera position for this move")
field194.setType("SFVec3f")

Script190.addField(field194)
field195 = x3d.field()
field195.setName("goalOrientation")
field195.setAccessType("inputOutput")
field195.setAppinfo("Goal camera rotation for this move")
field195.setType("SFRotation")

Script190.addField(field195)
field196 = x3d.field()
field196.setName("tracking")
field196.setAccessType("inputOutput")
field196.setAppinfo("Whether or not camera direction is tracking towards the aimPoint")
field196.setType("SFBool")

Script190.addField(field196)
field197 = x3d.field()
field197.setName("goalAimPoint")
field197.setAccessType("inputOutput")
field197.setAppinfo("Goal aimPoint for this move, ignored if tracking=false")
field197.setType("SFVec3f")

Script190.addField(field197)
field198 = x3d.field()
field198.setName("goalFieldOfView")
field198.setAccessType("inputOutput")
field198.setAppinfo("Goal fieldOfView for this move")
field198.setType("SFFloat")

Script190.addField(field198)
field199 = x3d.field()
field199.setName("goalFStop")
field199.setAccessType("inputOutput")
field199.setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")
field199.setType("SFFloat")

Script190.addField(field199)
field200 = x3d.field()
field200.setName("goalFocusDistance")
field200.setAccessType("inputOutput")
field200.setAppinfo("Distance to focal plane of sharpest focus")
field200.setType("SFFloat")

Script190.addField(field200)
field201 = x3d.field()
field201.setName("isActive")
field201.setAccessType("outputOnly")
field201.setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")
field201.setType("SFBool")

Script190.addField(field201)
field202 = x3d.field()
field202.setName("traceEnabled")
field202.setAccessType("initializeOnly")
field202.setAppinfo("enable console output to trace script computations and prototype progress")
field202.setType("SFBool")

Script190.addField(field202)
IS203 = x3d.IS()
connect204 = x3d.connect()
connect204.setNodeField("description")
connect204.setProtoField("description")

IS203.addConnect(connect204)
connect205 = x3d.connect()
connect205.setNodeField("enabled")
connect205.setProtoField("enabled")

IS203.addConnect(connect205)
connect206 = x3d.connect()
connect206.setNodeField("duration")
connect206.setProtoField("duration")

IS203.addConnect(connect206)
connect207 = x3d.connect()
connect207.setNodeField("goalPosition")
connect207.setProtoField("goalPosition")

IS203.addConnect(connect207)
connect208 = x3d.connect()
connect208.setNodeField("goalOrientation")
connect208.setProtoField("goalOrientation")

IS203.addConnect(connect208)
connect209 = x3d.connect()
connect209.setNodeField("tracking")
connect209.setProtoField("tracking")

IS203.addConnect(connect209)
connect210 = x3d.connect()
connect210.setNodeField("goalAimPoint")
connect210.setProtoField("goalAimPoint")

IS203.addConnect(connect210)
connect211 = x3d.connect()
connect211.setNodeField("goalFieldOfView")
connect211.setProtoField("goalFieldOfView")

IS203.addConnect(connect211)
connect212 = x3d.connect()
connect212.setNodeField("goalFStop")
connect212.setProtoField("goalFStop")

IS203.addConnect(connect212)
connect213 = x3d.connect()
connect213.setNodeField("goalFocusDistance")
connect213.setProtoField("goalFocusDistance")

IS203.addConnect(connect213)
connect214 = x3d.connect()
connect214.setNodeField("isActive")
connect214.setProtoField("isActive")

IS203.addConnect(connect214)
connect215 = x3d.connect()
connect215.setNodeField("traceEnabled")
connect215.setProtoField("traceEnabled")

IS203.addConnect(connect215)

Script190.setIS(IS203)

Script190.setSourceCode('''ecmascript:\n"+
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
"}''')

ProtoBody189.addChildren(Script190)
#Add any ROUTEs here, going from Script to other nodes within ProtoBody

ProtoDeclare175.setProtoBody(ProtoBody189)

Scene16.addChildren(ProtoDeclare175)
#=============== OfflineRender ==============
ProtoDeclare216 = x3d.ProtoDeclare()
ProtoDeclare216.setName("OfflineRender")
ProtoDeclare216.setAppinfo("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).")
ProtoInterface217 = x3d.ProtoInterface()
#TODO non-photorealistic rendering (NPR) parameters
field218 = x3d.field()
field218.setName("description")
field218.setAccessType("inputOutput")
field218.setAppinfo("Text description to be displayed for this OfflineRender")
field218.setType("SFString")

ProtoInterface217.addField(field218)
field219 = x3d.field()
field219.setName("enabled")
field219.setAccessType("inputOutput")
field219.setAppinfo("Whether this OfflineRender can be activated")
field219.setType("SFBool")
field219.setValue("true")

ProtoInterface217.addField(field219)
field220 = x3d.field()
field220.setName("frameRate")
field220.setAccessType("inputOutput")
field220.setAppinfo("Frames per second recorded for this rendering")
field220.setType("SFFloat")
field220.setValue("30")

ProtoInterface217.addField(field220)
field221 = x3d.field()
field221.setName("frameSize")
field221.setAccessType("inputOutput")
field221.setAppinfo("Size of frame in number of pixels width and height")
field221.setType("SFVec2f")
field221.setValue("640 480")

ProtoInterface217.addField(field221)
field222 = x3d.field()
field222.setName("pixelAspectRatio")
field222.setAccessType("inputOutput")
field222.setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1")
field222.setType("SFFloat")
field222.setValue("1.33")

ProtoInterface217.addField(field222)
field223 = x3d.field()
field223.setName("set_startTime")
field223.setAccessType("inputOnly")
field223.setAppinfo("Begin render operation")
field223.setType("SFTime")

ProtoInterface217.addField(field223)
field224 = x3d.field()
field224.setName("progress")
field224.setAccessType("outputOnly")
field224.setAppinfo("Progress performing render operation (0..1)")
field224.setType("SFFloat")

ProtoInterface217.addField(field224)
field225 = x3d.field()
field225.setName("renderCompleteTime")
field225.setAccessType("outputOnly")
field225.setAppinfo("Render operation complete")
field225.setType("SFTime")

ProtoInterface217.addField(field225)
field226 = x3d.field()
field226.setName("movieFormat")
field226.setAccessType("initializeOnly")
field226.setAppinfo("Format of rendered output movie (mpeg mp4 etc.), use first supported format")
field226.setType("MFString")
field226.setValue("\"mpeg\"")

ProtoInterface217.addField(field226)
field227 = x3d.field()
field227.setName("imageFormat")
field227.setAccessType("initializeOnly")
field227.setAppinfo("Format of rendered output images (png jpeg gif tiff etc.) use first supported format")
field227.setType("MFString")
field227.setValue("\"png\"")

ProtoInterface217.addField(field227)
field228 = x3d.field()
field228.setName("traceEnabled")
field228.setAccessType("initializeOnly")
field228.setAppinfo("enable console output to trace script computations and prototype progress")
field228.setType("SFBool")
field228.setValue("false")

ProtoInterface217.addField(field228)

ProtoDeclare216.setProtoInterface(ProtoInterface217)
ProtoBody229 = x3d.ProtoBody()
#First node determines node type of this prototype
#Subsequent nodes do not render, but still must be a valid X3D subgraph
Script230 = x3d.Script()
Script230.setDEF("OfflineRenderScript")
Script230.setMustEvaluate(True)
field231 = x3d.field()
field231.setName("description")
field231.setAccessType("inputOutput")
field231.setAppinfo("Text description to be displayed for this OfflineRender")
field231.setType("SFString")

Script230.addField(field231)
field232 = x3d.field()
field232.setName("enabled")
field232.setAccessType("inputOutput")
field232.setAppinfo("Whether this OfflineRender can be activated")
field232.setType("SFBool")

Script230.addField(field232)
field233 = x3d.field()
field233.setName("frameRate")
field233.setAccessType("inputOutput")
field233.setAppinfo("Frames per second recorded for this rendering")
field233.setType("SFFloat")

Script230.addField(field233)
field234 = x3d.field()
field234.setName("frameSize")
field234.setAccessType("inputOutput")
field234.setAppinfo("Size of frame in number of pixels width and height")
field234.setType("SFVec2f")

Script230.addField(field234)
field235 = x3d.field()
field235.setName("pixelAspectRatio")
field235.setAccessType("inputOutput")
field235.setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1")
field235.setType("SFFloat")

Script230.addField(field235)
field236 = x3d.field()
field236.setName("set_startTime")
field236.setAccessType("inputOnly")
field236.setAppinfo("Begin render operation")
field236.setType("SFTime")

Script230.addField(field236)
field237 = x3d.field()
field237.setName("progress")
field237.setAccessType("outputOnly")
field237.setAppinfo("Progress performing render operation (0..1)")
field237.setType("SFFloat")

Script230.addField(field237)
field238 = x3d.field()
field238.setName("renderCompleteTime")
field238.setAccessType("outputOnly")
field238.setAppinfo("Render operation complete")
field238.setType("SFTime")

Script230.addField(field238)
field239 = x3d.field()
field239.setName("movieFormat")
field239.setAccessType("initializeOnly")
field239.setAppinfo("Format of rendered output movie (mpeg mp4 etc.)")
field239.setType("MFString")

Script230.addField(field239)
field240 = x3d.field()
field240.setName("imageFormat")
field240.setAccessType("initializeOnly")
field240.setAppinfo("Format of rendered output images (png jpeg gif tiff etc.)")
field240.setType("MFString")

Script230.addField(field240)
field241 = x3d.field()
field241.setName("traceEnabled")
field241.setAccessType("initializeOnly")
field241.setAppinfo("enable console output to trace script computations and prototype progress")
field241.setType("SFBool")

Script230.addField(field241)
IS242 = x3d.IS()
connect243 = x3d.connect()
connect243.setNodeField("description")
connect243.setProtoField("description")

IS242.addConnect(connect243)
connect244 = x3d.connect()
connect244.setNodeField("enabled")
connect244.setProtoField("enabled")

IS242.addConnect(connect244)
connect245 = x3d.connect()
connect245.setNodeField("frameRate")
connect245.setProtoField("frameRate")

IS242.addConnect(connect245)
connect246 = x3d.connect()
connect246.setNodeField("frameSize")
connect246.setProtoField("frameSize")

IS242.addConnect(connect246)
connect247 = x3d.connect()
connect247.setNodeField("pixelAspectRatio")
connect247.setProtoField("pixelAspectRatio")

IS242.addConnect(connect247)
connect248 = x3d.connect()
connect248.setNodeField("set_startTime")
connect248.setProtoField("set_startTime")

IS242.addConnect(connect248)
connect249 = x3d.connect()
connect249.setNodeField("progress")
connect249.setProtoField("progress")

IS242.addConnect(connect249)
connect250 = x3d.connect()
connect250.setNodeField("renderCompleteTime")
connect250.setProtoField("renderCompleteTime")

IS242.addConnect(connect250)
connect251 = x3d.connect()
connect251.setNodeField("movieFormat")
connect251.setProtoField("movieFormat")

IS242.addConnect(connect251)
connect252 = x3d.connect()
connect252.setNodeField("imageFormat")
connect252.setProtoField("imageFormat")

IS242.addConnect(connect252)
connect253 = x3d.connect()
connect253.setNodeField("traceEnabled")
connect253.setProtoField("traceEnabled")

IS242.addConnect(connect253)

Script230.setIS(IS242)

Script230.setSourceCode('''ecmascript:\n"+
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
"}''')

ProtoBody229.addChildren(Script230)
#Add any ROUTEs here, going from Script to other nodes within ProtoBody

ProtoDeclare216.setProtoBody(ProtoBody229)

Scene16.addChildren(ProtoDeclare216)
#=============== Launch Prototype Example ==============
Background254 = x3d.Background()
Background254.setSkyColor([0.282353,0.380392,0.470588])

Scene16.addChildren(Background254)
Anchor255 = x3d.Anchor()
Anchor255.setDescription("launch CameraExample scene")
Anchor255.setUrl(["CameraExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"])
Transform256 = x3d.Transform()
Shape257 = x3d.Shape()
Text258 = x3d.Text()
Text258.setString(["CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"])
FontStyle259 = x3d.FontStyle()
FontStyle259.setJustify(["MIDDLE","MIDDLE"])

Text258.setFontStyle(FontStyle259)

Shape257.setGeometry(Text258)
Appearance260 = x3d.Appearance()
Material261 = x3d.Material()
Material261.setDiffuseColor([1,1,0.2])

Appearance260.setMaterial(Material261)

Shape257.setAppearance(Appearance260)

Transform256.addChild(Shape257)

Anchor255.addChildren(Transform256)

Scene16.addChildren(Anchor255)

X3D0.setScene(Scene16)
X3D0.toFileX3D("../data/CameraPrototypes.new.python.x3d")
X3D0.toFileJSON("../data/CameraPrototypes.new.python.json")
