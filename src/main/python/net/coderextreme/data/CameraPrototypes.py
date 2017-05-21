from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.2")
head1 = headObject()
meta2 = metaObject().setName("title").setContent("CameraPrototypes.x3d")
head1.addMeta(meta2)
meta3 = metaObject().setName("description").setContent("Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.")
head1.addMeta(meta3)
meta4 = metaObject().setName("creator").setContent("Don Brutzman and Jeff Weekley")
head1.addMeta(meta4)
meta5 = metaObject().setName("created").setContent("16 March 2009")
head1.addMeta(meta5)
meta6 = metaObject().setName("modified").setContent("25 October 2016")
head1.addMeta(meta6)
meta7 = metaObject().setName("TODO").setContent("Schematron rules, backed up by initialize() checks")
head1.addMeta(meta7)
meta8 = metaObject().setName("reference").setContent("BeyondViewpointCameraNodesWeb3D2009.pdf")
head1.addMeta(meta8)
meta9 = metaObject().setName("reference").setContent("http://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html")
head1.addMeta(meta9)
meta10 = metaObject().setName("subject").setContent("Camera nodes for Viewpoint navigation control")
head1.addMeta(meta10)
meta11 = metaObject().setName("reference").setContent("CameraExamples.x3d")
head1.addMeta(meta11)
meta12 = metaObject().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d")
head1.addMeta(meta12)
meta13 = metaObject().setName("reference").setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d")
head1.addMeta(meta13)
meta14 = metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")
head1.addMeta(meta14)
meta15 = metaObject().setName("license").setContent("../license.html")
head1.addMeta(meta15)
X3D0.setHead(head1)
Scene16 = SceneObject()

Scene16.addComments(CommentsBlock("=============== Camera =============="))
ProtoDeclare17 = ProtoDeclareObject().setName("Camera").setAppinfo("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.")
ProtoInterface18 = ProtoInterfaceObject()

ProtoInterface18.addComments(CommentsBlock("Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields"))
field19 = fieldObject().setType(fieldObject.TYPE_SFSTRING).setName("description").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this Camera")
ProtoInterface18.addField(field19)
field20 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated").setValue("0 0 10")
ProtoInterface18.addField(field20)
field21 = fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("orientation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated").setValue("0 0 1 0")
ProtoInterface18.addField(field21)
field22 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("fieldOfView").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4").setValue("0.7854")
ProtoInterface18.addField(field22)
field23 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("input fraction drives interpolators")
ProtoInterface18.addField(field23)
field24 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("set_bind").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("input event binds or unbinds this Camera")
ProtoInterface18.addField(field24)
field25 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("bindTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates when this Camera is bound")
ProtoInterface18.addField(field25)
field26 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("isBound").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates whether this Camera is bound or unbound")
ProtoInterface18.addField(field26)
field27 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("nearClipPlane").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]").setValue("0.25")
ProtoInterface18.addField(field27)
field28 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("farClipPlane").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit").setValue("0")
ProtoInterface18.addField(field28)
field29 = fieldObject().setType(fieldObject.TYPE_MFNODE).setName("shots").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes")

field29.addComments(CommentsBlock("initialization nodes (if any) go here"))
ProtoInterface18.addField(field29)
field30 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("headlight").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether camera headlight is on or off").setValue("true")
ProtoInterface18.addField(field30)
field31 = fieldObject().setType(fieldObject.TYPE_SFCOLOR).setName("headlightColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera headlight color").setValue("1 1 1")
ProtoInterface18.addField(field31)
field32 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("headlightIntensity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera headlight intensity").setValue("1")
ProtoInterface18.addField(field32)
field33 = fieldObject().setType(fieldObject.TYPE_SFCOLOR).setName("filterColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter color that modifies virtual lens capture").setValue("1 1 1")
ProtoInterface18.addField(field33)
field34 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("filterTransparency").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter transparency that modifies virtual lens capture").setValue("1")
ProtoInterface18.addField(field34)
field35 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("upVector").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("upVector changes modify camera orientation (and possibly vice versa)").setValue("0 1 0")
ProtoInterface18.addField(field35)
field36 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("fStop").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane").setValue("5.6")
ProtoInterface18.addField(field36)
field37 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("focusDistance").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus").setValue("10")
ProtoInterface18.addField(field37)
field38 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("isActive").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")
ProtoInterface18.addField(field38)
field39 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("totalDuration").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations")
ProtoInterface18.addField(field39)
field40 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("offlineRender").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("OfflineRender node")

field40.addComments(CommentsBlock("initialization node (if any) goes here"))
ProtoInterface18.addField(field40)
field41 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setValue("false")
ProtoInterface18.addField(field41)
ProtoDeclare17.setProtoInterface(ProtoInterface18)
ProtoBody42 = ProtoBodyObject()
Viewpoint43 = ViewpointObject().setDEF("CameraViewpoint")
IS44 = ISObject()
connect45 = connectObject().setNodeField("description").setProtoField("description")
IS44.addConnect(connect45)
connect46 = connectObject().setNodeField("position").setProtoField("position")
IS44.addConnect(connect46)
connect47 = connectObject().setNodeField("orientation").setProtoField("orientation")
IS44.addConnect(connect47)
connect48 = connectObject().setNodeField("fieldOfView").setProtoField("fieldOfView")
IS44.addConnect(connect48)
connect49 = connectObject().setNodeField("set_bind").setProtoField("set_bind")
IS44.addConnect(connect49)
connect50 = connectObject().setNodeField("bindTime").setProtoField("bindTime")
IS44.addConnect(connect50)
connect51 = connectObject().setNodeField("isBound").setProtoField("isBound")
IS44.addConnect(connect51)
Viewpoint43.setIS(IS44)
ProtoBody42.addChild(Viewpoint43)

ProtoBody42.addComments(CommentsBlock("NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation"))
NavigationInfo52 = NavigationInfoObject().setType(["EXAMINE","FLY","ANY"]).setDEF("CameraNavInfo")
IS53 = ISObject()
connect54 = connectObject().setNodeField("set_bind").setProtoField("set_bind")
IS53.addConnect(connect54)
connect55 = connectObject().setNodeField("headlight").setProtoField("headlight")
IS53.addConnect(connect55)
connect56 = connectObject().setNodeField("visibilityLimit").setProtoField("farClipPlane")
IS53.addConnect(connect56)

IS53.addComments(CommentsBlock("No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing."))
NavigationInfo52.setIS(IS53)
ProtoBody42.addChild(NavigationInfo52)

ProtoBody42.addComments(CommentsBlock("this DirectionalLight replaces NavigationInfo headlight in order to add color capability"))
DirectionalLight57 = DirectionalLightObject().setDEF("CameraDirectionalLight").setGlobal(True)

DirectionalLight57.addComments(CommentsBlock("TODO confirm other default field values match NavigationInfo spec"))
IS58 = ISObject()
connect59 = connectObject().setNodeField("on").setProtoField("headlight")
IS58.addConnect(connect59)
connect60 = connectObject().setNodeField("color").setProtoField("headlightColor")
IS58.addConnect(connect60)
connect61 = connectObject().setNodeField("intensity").setProtoField("headlightIntensity")
IS58.addConnect(connect61)
DirectionalLight57.setIS(IS58)
ProtoBody42.addChild(DirectionalLight57)
PositionInterpolator62 = PositionInterpolatorObject().setDEF("CameraPositionInterpolator").setKey([0,1]).setKeyValue([0,0,0,0,0,0])
IS63 = ISObject()
connect64 = connectObject().setNodeField("set_fraction").setProtoField("set_fraction")
IS63.addConnect(connect64)
PositionInterpolator62.setIS(IS63)
ProtoBody42.addChild(PositionInterpolator62)
OrientationInterpolator65 = OrientationInterpolatorObject().setDEF("CameraOrientationInterpolator").setKey([0,1]).setKeyValue([0,1,0,0,0,1,0,0])
IS66 = ISObject()
connect67 = connectObject().setNodeField("set_fraction").setProtoField("set_fraction")
IS66.addConnect(connect67)
OrientationInterpolator65.setIS(IS66)
ProtoBody42.addChild(OrientationInterpolator65)
ROUTE68 = ROUTEObject().setFromField("value_changed").setFromNode("CameraPositionInterpolator").setToField("position").setToNode("CameraViewpoint")
ProtoBody42.addChild(ROUTE68)
ROUTE69 = ROUTEObject().setFromField("value_changed").setFromNode("CameraOrientationInterpolator").setToField("orientation").setToNode("CameraViewpoint")
ProtoBody42.addChild(ROUTE69)
Script70 = ScriptObject().setDEF("CameraScript").setDirectOutput(True).setMustEvaluate(True)

Script70.addComments(CommentsBlock("binding is controlled externally, all camera operations proceed the same regardless of whether bound or not"))
field71 = fieldObject().setType(fieldObject.TYPE_SFSTRING).setName("description").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this Camera")
Script70.addField(field71)
field72 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera position in local transformation frame")
Script70.addField(field72)
field73 = fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("orientation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera rotation in local transformation frame")
Script70.addField(field73)
field74 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("input fraction drives interpolators")
Script70.addField(field74)
field75 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("set_bind").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("input event binds or unbinds this Camera")
Script70.addField(field75)
field76 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("fieldOfView").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4")
Script70.addField(field76)
field77 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("nearClipPlane").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to near clipping plane")
Script70.addField(field77)
field78 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("farClipPlane").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to far clipping plane")
Script70.addField(field78)
field79 = fieldObject().setType(fieldObject.TYPE_MFNODE).setName("shots").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes")

field79.addComments(CommentsBlock("initialization nodes (if any) go here"))
Script70.addField(field79)
field80 = fieldObject().setType(fieldObject.TYPE_SFCOLOR).setName("filterColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter color that modifies virtual lens capture")
Script70.addField(field80)
field81 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("filterTransparency").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter transparency that modifies virtual lens capture")
Script70.addField(field81)
field82 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("upVector").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("upVector changes modify camera orientation (and possibly vice versa)")
Script70.addField(field82)
field83 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("fStop").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")
Script70.addField(field83)
field84 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("focusDistance").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus")
Script70.addField(field84)
field85 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("isActive").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")
Script70.addField(field85)
field86 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("totalDuration").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations")
Script70.addField(field86)
field87 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("offlineRender").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("OfflineRender node")

field87.addComments(CommentsBlock("initialization node (if any) goes here"))
Script70.addField(field87)
field88 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("ViewpointNode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script")
Viewpoint89 = ViewpointObject().setUSE("CameraViewpoint")
field88.addChild(Viewpoint89)
Script70.addField(field88)
field90 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("NavInfoNode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script")
NavigationInfo91 = NavigationInfoObject().setUSE("CameraNavInfo")
field90.addChild(NavigationInfo91)
Script70.addField(field90)
field92 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("CameraPI").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script")
PositionInterpolator93 = PositionInterpolatorObject().setUSE("CameraPositionInterpolator")
field92.addChild(PositionInterpolator93)
Script70.addField(field92)
field94 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("CameraOI").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script")
OrientationInterpolator95 = OrientationInterpolatorObject().setUSE("CameraOrientationInterpolator")
field94.addChild(OrientationInterpolator95)
Script70.addField(field94)
field96 = fieldObject().setType(fieldObject.TYPE_MFFLOAT).setName("key").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("key array for interpolators")
Script70.addField(field96)
field97 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValuePosition").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for PositionInterpolator")
Script70.addField(field97)
field98 = fieldObject().setType(fieldObject.TYPE_MFROTATION).setName("keyValueOrientation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for OrientationInterpolator")
Script70.addField(field98)
field99 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("animated").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events").setValue("false")
Script70.addField(field99)
field100 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("initialized").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("perform checkShots() function once immediately after initialization").setValue("false")
Script70.addField(field100)
field101 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("shotCount").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("how many CameraShot nodes are contained in shots array").setValue("0")
Script70.addField(field101)
field102 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("movesCount").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("how many CameraMove nodes are contained in moves array").setValue("0")
Script70.addField(field102)
field103 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("frameCount").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("how many frames were created in current loop").setValue("0")
Script70.addField(field103)
field104 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("startTime").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("holding variable").setValue("0")
Script70.addField(field104)
field105 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("priorTraceTime").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("holding variable").setValue("0")
Script70.addField(field105)
field106 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress")
Script70.addField(field106)
IS107 = ISObject()
connect108 = connectObject().setNodeField("description").setProtoField("description")
IS107.addConnect(connect108)
connect109 = connectObject().setNodeField("position").setProtoField("position")
IS107.addConnect(connect109)
connect110 = connectObject().setNodeField("orientation").setProtoField("orientation")
IS107.addConnect(connect110)
connect111 = connectObject().setNodeField("set_fraction").setProtoField("set_fraction")
IS107.addConnect(connect111)
connect112 = connectObject().setNodeField("set_bind").setProtoField("set_bind")
IS107.addConnect(connect112)
connect113 = connectObject().setNodeField("fieldOfView").setProtoField("fieldOfView")
IS107.addConnect(connect113)
connect114 = connectObject().setNodeField("nearClipPlane").setProtoField("nearClipPlane")
IS107.addConnect(connect114)
connect115 = connectObject().setNodeField("farClipPlane").setProtoField("farClipPlane")
IS107.addConnect(connect115)
connect116 = connectObject().setNodeField("shots").setProtoField("shots")
IS107.addConnect(connect116)
connect117 = connectObject().setNodeField("filterColor").setProtoField("filterColor")
IS107.addConnect(connect117)
connect118 = connectObject().setNodeField("filterTransparency").setProtoField("filterTransparency")
IS107.addConnect(connect118)
connect119 = connectObject().setNodeField("upVector").setProtoField("upVector")
IS107.addConnect(connect119)
connect120 = connectObject().setNodeField("fStop").setProtoField("fStop")
IS107.addConnect(connect120)
connect121 = connectObject().setNodeField("focusDistance").setProtoField("focusDistance")
IS107.addConnect(connect121)
connect122 = connectObject().setNodeField("isActive").setProtoField("isActive")
IS107.addConnect(connect122)
connect123 = connectObject().setNodeField("totalDuration").setProtoField("totalDuration")
IS107.addConnect(connect123)
connect124 = connectObject().setNodeField("offlineRender").setProtoField("offlineRender")
IS107.addConnect(connect124)
connect125 = connectObject().setNodeField("traceEnabled").setProtoField("traceEnabled")
IS107.addConnect(connect125)
Script70.setIS(IS107)

Script70.setSourceCode("\n"+
"          \n"+
"ecmascript:\n"+
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
"        tracePrint ('<PositionInterpolator    DEF=\'CameraPositionInterpolator\'    key=\'' + stripBrackets(CameraPI.key) + '\' keyValue=\'' + stripBrackets(CameraPI.keyValue) + '\'/>');\n"+
"        tracePrint ('<OrientationInterpolator DEF=\'CameraOrientationInterpolator\' key=\'' + stripBrackets(CameraOI.key) + '\' keyValue=\'' + stripBrackets(CameraOI.keyValue) + '\'/>');\n"+
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
"        tracePrint ('  <PositionInterpolator    DEF=\'CameraPositionInterpolator\'    key=\'' + stripBrackets(CameraPI.key) + '\' keyValue=\'' + stripBrackets(CameraPI.keyValue) + '\'/>');\n"+
"        tracePrint ('  <OrientationInterpolator DEF=\'CameraOrientationInterpolator\' key=\'' + stripBrackets(CameraOI.key) + '\' keyValue=\'' + stripBrackets(CameraOI.keyValue) + '\'/>');\n"+
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
"        tracePrint ('  <PositionInterpolator    DEF=\'CameraPositionInterpolator\'    key=\'' + stripBrackets(CameraPI.key) + '\' keyValue=\'' + stripBrackets(CameraPI.keyValue) + '\'/>');\n"+
"        alwaysPrint ('  <OrientationInterpolator DEF=\'CameraOrientationInterpolator\' key=\'' + stripBrackets(CameraOI.key) + '\' keyValue=\'' + stripBrackets(CameraOI.keyValue) + '\'/>');\n"+
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
"}\n"+
"")
ProtoBody42.addChild(Script70)
ROUTE126 = ROUTEObject().setFromField("position").setFromNode("CameraScript").setToField("position").setToNode("CameraViewpoint")
ProtoBody42.addChild(ROUTE126)
ROUTE127 = ROUTEObject().setFromField("orientation").setFromNode("CameraScript").setToField("orientation").setToNode("CameraViewpoint")
ProtoBody42.addChild(ROUTE127)
ROUTE128 = ROUTEObject().setFromField("isActive").setFromNode("CameraScript").setToField("set_bind").setToNode("CameraViewpoint")
ProtoBody42.addChild(ROUTE128)
ROUTE129 = ROUTEObject().setFromField("isActive").setFromNode("CameraScript").setToField("set_bind").setToNode("CameraNavInfo")
ProtoBody42.addChild(ROUTE129)
ROUTE130 = ROUTEObject().setFromField("isActive").setFromNode("CameraScript").setToField("on").setToNode("CameraDirectionalLight")
ProtoBody42.addChild(ROUTE130)
ProtoDeclare17.setProtoBody(ProtoBody42)
Scene16.addChild(ProtoDeclare17)

Scene16.addComments(CommentsBlock("=============== CameraShot =============="))
ProtoDeclare131 = ProtoDeclareObject().setName("CameraShot").setAppinfo("CameraShot collects a specific set of CameraMovement animations that make up an individual shot.")
ProtoInterface132 = ProtoInterfaceObject()
field133 = fieldObject().setType(fieldObject.TYPE_SFSTRING).setName("description").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraShot")
ProtoInterface132.addField(field133)
field134 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("enabled").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraShot can be activated").setValue("true")
ProtoInterface132.addField(field134)
field135 = fieldObject().setType(fieldObject.TYPE_MFNODE).setName("moves").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Set of CameraMovement nodes")

field135.addComments(CommentsBlock("initializing CameraMovement nodes are inserted here by scene author using ProtoInstance"))
ProtoInterface132.addField(field135)
field136 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("initialPosition").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera position for this shot").setValue("0 0 10")
ProtoInterface132.addField(field136)
field137 = fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("initialOrientation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera rotation for this shot").setValue("0 0 1 0")
ProtoInterface132.addField(field137)
field138 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("initialAimPoint").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot").setValue("0 0 0")
ProtoInterface132.addField(field138)
field139 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("initialFieldOfView").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4").setValue("0.7854")
ProtoInterface132.addField(field139)
field140 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("initialFStop").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane").setValue("5.6")
ProtoInterface132.addField(field140)
field141 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("initialFocusDistance").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus").setValue("10")
ProtoInterface132.addField(field141)
field142 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("shotDuration").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Subtotal duration of contained CameraMovement move durations")
ProtoInterface132.addField(field142)
field143 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("isActive").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")
ProtoInterface132.addField(field143)
field144 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setValue("false")
ProtoInterface132.addField(field144)
ProtoDeclare131.setProtoInterface(ProtoInterface132)
ProtoBody145 = ProtoBodyObject()
Script146 = ScriptObject().setDEF("CameraShotScript").setDirectOutput(True).setMustEvaluate(True)
field147 = fieldObject().setType(fieldObject.TYPE_SFSTRING).setName("description").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraShot")
Script146.addField(field147)
field148 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("enabled").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraShot can be activated")
Script146.addField(field148)
field149 = fieldObject().setType(fieldObject.TYPE_MFNODE).setName("moves").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Set of CameraMovement nodes")

field149.addComments(CommentsBlock("initialization nodes (if any) go here"))
Script146.addField(field149)
field150 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("initialPosition").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera position for this shot")
Script146.addField(field150)
field151 = fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("initialOrientation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera rotation for this shot")
Script146.addField(field151)
field152 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("initialAimPoint").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot")
Script146.addField(field152)
field153 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("initialFieldOfView").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4")
Script146.addField(field153)
field154 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("initialFStop").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")
Script146.addField(field154)
field155 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("initialFocusDistance").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus")
Script146.addField(field155)
field156 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("shotDuration").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Subtotal duration of contained CameraMovement move durations")
Script146.addField(field156)
field157 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("isActive").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")
Script146.addField(field157)
field158 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress")
Script146.addField(field158)
field159 = fieldObject().setType(fieldObject.TYPE_MFFLOAT).setName("key").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("key array for interpolators")
Script146.addField(field159)
field160 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValuePosition").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for PositionInterpolator")
Script146.addField(field160)
field161 = fieldObject().setType(fieldObject.TYPE_MFROTATION).setName("keyValueOrientation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for OrientationInterpolator")
Script146.addField(field161)
IS162 = ISObject()
connect163 = connectObject().setNodeField("description").setProtoField("description")
IS162.addConnect(connect163)
connect164 = connectObject().setNodeField("enabled").setProtoField("enabled")
IS162.addConnect(connect164)
connect165 = connectObject().setNodeField("moves").setProtoField("moves")
IS162.addConnect(connect165)
connect166 = connectObject().setNodeField("initialPosition").setProtoField("initialPosition")
IS162.addConnect(connect166)
connect167 = connectObject().setNodeField("initialOrientation").setProtoField("initialOrientation")
IS162.addConnect(connect167)
connect168 = connectObject().setNodeField("initialAimPoint").setProtoField("initialAimPoint")
IS162.addConnect(connect168)
connect169 = connectObject().setNodeField("initialFieldOfView").setProtoField("initialFieldOfView")
IS162.addConnect(connect169)
connect170 = connectObject().setNodeField("initialFStop").setProtoField("initialFStop")
IS162.addConnect(connect170)
connect171 = connectObject().setNodeField("initialFocusDistance").setProtoField("initialFocusDistance")
IS162.addConnect(connect171)
connect172 = connectObject().setNodeField("shotDuration").setProtoField("shotDuration")
IS162.addConnect(connect172)
connect173 = connectObject().setNodeField("isActive").setProtoField("isActive")
IS162.addConnect(connect173)
connect174 = connectObject().setNodeField("traceEnabled").setProtoField("traceEnabled")
IS162.addConnect(connect174)
Script146.setIS(IS162)

Script146.setSourceCode("\n"+
"          \n"+
"ecmascript:\n"+
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
"}\n"+
"")
ProtoBody145.addChild(Script146)

ProtoBody145.addComments(CommentsBlock("Add any ROUTEs here, going from Script to other nodes within ProtoBody"))
ProtoDeclare131.setProtoBody(ProtoBody145)
Scene16.addChild(ProtoDeclare131)

Scene16.addComments(CommentsBlock("=============== CameraMovement =============="))
ProtoDeclare175 = ProtoDeclareObject().setName("CameraMovement").setAppinfo("CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.")
ProtoInterface176 = ProtoInterfaceObject()
field177 = fieldObject().setType(fieldObject.TYPE_SFSTRING).setName("description").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraMovement")
ProtoInterface176.addField(field177)
field178 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("enabled").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraMovement can be activated").setValue("true")
ProtoInterface176.addField(field178)
field179 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("duration").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Duration in seconds for this move").setValue("0")
ProtoInterface176.addField(field179)
field180 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("goalPosition").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera position for this move").setValue("0 0 10")
ProtoInterface176.addField(field180)
field181 = fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("goalOrientation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera rotation for this move").setValue("0 0 1 0")
ProtoInterface176.addField(field181)
field182 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("tracking").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether or not camera direction is tracking towards the aimPoint").setValue("false")
ProtoInterface176.addField(field182)
field183 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("goalAimPoint").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal aimPoint for this move, ignored if tracking=false").setValue("0 0 0")
ProtoInterface176.addField(field183)
field184 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("goalFieldOfView").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal fieldOfView for this move").setValue("0.7854")
ProtoInterface176.addField(field184)
field185 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("goalFStop").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane").setValue("5.6")
ProtoInterface176.addField(field185)
field186 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("goalFocusDistance").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus").setValue("10")
ProtoInterface176.addField(field186)
field187 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("isActive").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")
ProtoInterface176.addField(field187)
field188 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setValue("false")
ProtoInterface176.addField(field188)
ProtoDeclare175.setProtoInterface(ProtoInterface176)
ProtoBody189 = ProtoBodyObject()

ProtoBody189.addComments(CommentsBlock("First node determines node type of this prototype"))

ProtoBody189.addComments(CommentsBlock("Subsequent nodes do not render, but still must be a valid X3D subgraph"))

ProtoBody189.addComments(CommentsBlock("Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events"))
Script190 = ScriptObject().setDEF("CameraMovementScript").setDirectOutput(True).setMustEvaluate(True)
field191 = fieldObject().setType(fieldObject.TYPE_SFSTRING).setName("description").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraMovement")
Script190.addField(field191)
field192 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("enabled").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraMovement can be activated")
Script190.addField(field192)
field193 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("duration").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Duration in seconds for this move")
Script190.addField(field193)
field194 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("goalPosition").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera position for this move")
Script190.addField(field194)
field195 = fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("goalOrientation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera rotation for this move")
Script190.addField(field195)
field196 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("tracking").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether or not camera direction is tracking towards the aimPoint")
Script190.addField(field196)
field197 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("goalAimPoint").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal aimPoint for this move, ignored if tracking=false")
Script190.addField(field197)
field198 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("goalFieldOfView").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal fieldOfView for this move")
Script190.addField(field198)
field199 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("goalFStop").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")
Script190.addField(field199)
field200 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("goalFocusDistance").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus")
Script190.addField(field200)
field201 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("isActive").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")
Script190.addField(field201)
field202 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress")
Script190.addField(field202)
IS203 = ISObject()
connect204 = connectObject().setNodeField("description").setProtoField("description")
IS203.addConnect(connect204)
connect205 = connectObject().setNodeField("enabled").setProtoField("enabled")
IS203.addConnect(connect205)
connect206 = connectObject().setNodeField("duration").setProtoField("duration")
IS203.addConnect(connect206)
connect207 = connectObject().setNodeField("goalPosition").setProtoField("goalPosition")
IS203.addConnect(connect207)
connect208 = connectObject().setNodeField("goalOrientation").setProtoField("goalOrientation")
IS203.addConnect(connect208)
connect209 = connectObject().setNodeField("tracking").setProtoField("tracking")
IS203.addConnect(connect209)
connect210 = connectObject().setNodeField("goalAimPoint").setProtoField("goalAimPoint")
IS203.addConnect(connect210)
connect211 = connectObject().setNodeField("goalFieldOfView").setProtoField("goalFieldOfView")
IS203.addConnect(connect211)
connect212 = connectObject().setNodeField("goalFStop").setProtoField("goalFStop")
IS203.addConnect(connect212)
connect213 = connectObject().setNodeField("goalFocusDistance").setProtoField("goalFocusDistance")
IS203.addConnect(connect213)
connect214 = connectObject().setNodeField("isActive").setProtoField("isActive")
IS203.addConnect(connect214)
connect215 = connectObject().setNodeField("traceEnabled").setProtoField("traceEnabled")
IS203.addConnect(connect215)
Script190.setIS(IS203)

Script190.setSourceCode("\n"+
"          \n"+
"ecmascript:\n"+
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
"}\n"+
"")
ProtoBody189.addChild(Script190)

ProtoBody189.addComments(CommentsBlock("Add any ROUTEs here, going from Script to other nodes within ProtoBody"))
ProtoDeclare175.setProtoBody(ProtoBody189)
Scene16.addChild(ProtoDeclare175)

Scene16.addComments(CommentsBlock("=============== OfflineRender =============="))
ProtoDeclare216 = ProtoDeclareObject().setName("OfflineRender").setAppinfo("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).")
ProtoInterface217 = ProtoInterfaceObject()

ProtoInterface217.addComments(CommentsBlock("TODO non-photorealistic rendering (NPR) parameters"))
field218 = fieldObject().setType(fieldObject.TYPE_SFSTRING).setName("description").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this OfflineRender")
ProtoInterface217.addField(field218)
field219 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("enabled").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this OfflineRender can be activated").setValue("true")
ProtoInterface217.addField(field219)
field220 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("frameRate").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Frames per second recorded for this rendering").setValue("30")
ProtoInterface217.addField(field220)
field221 = fieldObject().setType(fieldObject.TYPE_SFVEC2F).setName("frameSize").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Size of frame in number of pixels width and height").setValue("640 480")
ProtoInterface217.addField(field221)
field222 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("pixelAspectRatio").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1").setValue("1.33")
ProtoInterface217.addField(field222)
field223 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_startTime").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Begin render operation")
ProtoInterface217.addField(field223)
field224 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("progress").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Progress performing render operation (0..1)")
ProtoInterface217.addField(field224)
field225 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("renderCompleteTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Render operation complete")
ProtoInterface217.addField(field225)
field226 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("movieFormat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output movie (mpeg mp4 etc.), use first supported format").setValue("\"mpeg\"")
ProtoInterface217.addField(field226)
field227 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("imageFormat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output images (png jpeg gif tiff etc.) use first supported format").setValue("\"png\"")
ProtoInterface217.addField(field227)
field228 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setValue("false")
ProtoInterface217.addField(field228)
ProtoDeclare216.setProtoInterface(ProtoInterface217)
ProtoBody229 = ProtoBodyObject()

ProtoBody229.addComments(CommentsBlock("First node determines node type of this prototype"))

ProtoBody229.addComments(CommentsBlock("Subsequent nodes do not render, but still must be a valid X3D subgraph"))
Script230 = ScriptObject().setDEF("OfflineRenderScript").setMustEvaluate(True)
field231 = fieldObject().setType(fieldObject.TYPE_SFSTRING).setName("description").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this OfflineRender")
Script230.addField(field231)
field232 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("enabled").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this OfflineRender can be activated")
Script230.addField(field232)
field233 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("frameRate").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Frames per second recorded for this rendering")
Script230.addField(field233)
field234 = fieldObject().setType(fieldObject.TYPE_SFVEC2F).setName("frameSize").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Size of frame in number of pixels width and height")
Script230.addField(field234)
field235 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("pixelAspectRatio").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1")
Script230.addField(field235)
field236 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_startTime").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Begin render operation")
Script230.addField(field236)
field237 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("progress").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Progress performing render operation (0..1)")
Script230.addField(field237)
field238 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("renderCompleteTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Render operation complete")
Script230.addField(field238)
field239 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("movieFormat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output movie (mpeg mp4 etc.)")
Script230.addField(field239)
field240 = fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("imageFormat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output images (png jpeg gif tiff etc.)")
Script230.addField(field240)
field241 = fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress")
Script230.addField(field241)
IS242 = ISObject()
connect243 = connectObject().setNodeField("description").setProtoField("description")
IS242.addConnect(connect243)
connect244 = connectObject().setNodeField("enabled").setProtoField("enabled")
IS242.addConnect(connect244)
connect245 = connectObject().setNodeField("frameRate").setProtoField("frameRate")
IS242.addConnect(connect245)
connect246 = connectObject().setNodeField("frameSize").setProtoField("frameSize")
IS242.addConnect(connect246)
connect247 = connectObject().setNodeField("pixelAspectRatio").setProtoField("pixelAspectRatio")
IS242.addConnect(connect247)
connect248 = connectObject().setNodeField("set_startTime").setProtoField("set_startTime")
IS242.addConnect(connect248)
connect249 = connectObject().setNodeField("progress").setProtoField("progress")
IS242.addConnect(connect249)
connect250 = connectObject().setNodeField("renderCompleteTime").setProtoField("renderCompleteTime")
IS242.addConnect(connect250)
connect251 = connectObject().setNodeField("movieFormat").setProtoField("movieFormat")
IS242.addConnect(connect251)
connect252 = connectObject().setNodeField("imageFormat").setProtoField("imageFormat")
IS242.addConnect(connect252)
connect253 = connectObject().setNodeField("traceEnabled").setProtoField("traceEnabled")
IS242.addConnect(connect253)
Script230.setIS(IS242)

Script230.setSourceCode("\n"+
"          \n"+
"ecmascript:\n"+
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
"}\n"+
"")
ProtoBody229.addChild(Script230)

ProtoBody229.addComments(CommentsBlock("Add any ROUTEs here, going from Script to other nodes within ProtoBody"))
ProtoDeclare216.setProtoBody(ProtoBody229)
Scene16.addChild(ProtoDeclare216)

Scene16.addComments(CommentsBlock("=============== Launch Prototype Example =============="))
Background254 = BackgroundObject().setSkyColor([0.282353,0.380392,0.470588])
Scene16.addChild(Background254)
Anchor255 = AnchorObject().setDescription("launch CameraExample scene").setUrl(["CameraExamples.x3d","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"])
Transform256 = TransformObject()
Shape257 = ShapeObject()
Text258 = TextObject().setString(["CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"])
FontStyle259 = FontStyleObject().setJustify(["MIDDLE","MIDDLE"])
Text258.setFontStyle(FontStyle259)
Shape257.setGeometry(Text258)
Appearance260 = AppearanceObject()
Material261 = MaterialObject().setDiffuseColor([1,1,0.2])
Appearance260.setMaterial(Material261)
Shape257.setAppearance(Appearance260)
Transform256.addChild(Shape257)
Anchor255.addChild(Transform256)
Scene16.addChild(Anchor255)
X3D0.setScene(Scene16)

X3D0.toFileX3D("../data/CameraPrototypes.new.x3d")
