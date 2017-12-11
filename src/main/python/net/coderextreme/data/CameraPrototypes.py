# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.2")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("CameraPrototypes.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("description")
meta3.setContent("Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("creator")
meta4.setContent("Don Brutzman and Jeff Weekley")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("created")
meta5.setContent("16 March 2009")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("modified")
meta6.setContent("25 October 2016")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("TODO")
meta7.setContent("Schematron rules, backed up by initialize() checks")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("reference")
meta8.setContent("BeyondViewpointCameraNodesWeb3D2009.pdf")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("reference")
meta9.setContent("http://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("subject")
meta10.setContent("Camera nodes for Viewpoint navigation control")

head1.addMeta(meta10)
meta11 = metaObject()
meta11.setName("reference")
meta11.setContent("CameraExamples.x3d")

head1.addMeta(meta11)
meta12 = metaObject()
meta12.setName("identifier")
meta12.setContent("http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d")

head1.addMeta(meta12)
meta13 = metaObject()
meta13.setName("reference")
meta13.setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d")

head1.addMeta(meta13)
meta14 = metaObject()
meta14.setName("generator")
meta14.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta14)
meta15 = metaObject()
meta15.setName("license")
meta15.setContent("../license.html")

head1.addMeta(meta15)
X3D0.setHead(head1)
Scene16 = SceneObject()


Scene16.addComments(CommentsBlock("""=============== Camera =============="""))
ProtoDeclare17 = ProtoDeclareObject()
ProtoDeclare17.setName("Camera")
ProtoDeclare17.setAppinfo("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.")

ProtoInterface18 = ProtoInterfaceObject()


ProtoInterface18.addComments(CommentsBlock("""Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields"""))
field19 = fieldObject()
field19.setType(fieldObject.TYPE_SFSTRING)
field19.setName("description")
field19.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field19.setAppinfo("Text description to be displayed for this Camera")

ProtoInterface18.addField(field19)
field20 = fieldObject()
field20.setType(fieldObject.TYPE_SFVEC3F)
field20.setName("position")
field20.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field20.setAppinfo("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated")
field20.setValue("0 0 10")

ProtoInterface18.addField(field20)
field21 = fieldObject()
field21.setType(fieldObject.TYPE_SFROTATION)
field21.setName("orientation")
field21.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field21.setAppinfo("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated")
field21.setValue("0 0 1 0")

ProtoInterface18.addField(field21)
field22 = fieldObject()
field22.setType(fieldObject.TYPE_SFFLOAT)
field22.setName("fieldOfView")
field22.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field22.setAppinfo("pi/4")
field22.setValue("0.7854")

ProtoInterface18.addField(field22)
field23 = fieldObject()
field23.setType(fieldObject.TYPE_SFFLOAT)
field23.setName("set_fraction")
field23.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field23.setAppinfo("input fraction drives interpolators")

ProtoInterface18.addField(field23)
field24 = fieldObject()
field24.setType(fieldObject.TYPE_SFBOOL)
field24.setName("set_bind")
field24.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field24.setAppinfo("input event binds or unbinds this Camera")

ProtoInterface18.addField(field24)
field25 = fieldObject()
field25.setType(fieldObject.TYPE_SFTIME)
field25.setName("bindTime")
field25.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field25.setAppinfo("output event indicates when this Camera is bound")

ProtoInterface18.addField(field25)
field26 = fieldObject()
field26.setType(fieldObject.TYPE_SFBOOL)
field26.setName("isBound")
field26.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field26.setAppinfo("output event indicates whether this Camera is bound or unbound")

ProtoInterface18.addField(field26)
field27 = fieldObject()
field27.setType(fieldObject.TYPE_SFFLOAT)
field27.setName("nearClipPlane")
field27.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field27.setAppinfo("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]")
field27.setValue("0.25")

ProtoInterface18.addField(field27)
field28 = fieldObject()
field28.setType(fieldObject.TYPE_SFFLOAT)
field28.setName("farClipPlane")
field28.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field28.setAppinfo("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit")
field28.setValue("0")

ProtoInterface18.addField(field28)
field29 = fieldObject()
field29.setType(fieldObject.TYPE_MFNODE)
field29.setName("shots")
field29.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field29.setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes")


field29.addComments(CommentsBlock("""initialization nodes (if any) go here"""))
ProtoInterface18.addField(field29)
field30 = fieldObject()
field30.setType(fieldObject.TYPE_SFBOOL)
field30.setName("headlight")
field30.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field30.setAppinfo("Whether camera headlight is on or off")
field30.setValue("true")

ProtoInterface18.addField(field30)
field31 = fieldObject()
field31.setType(fieldObject.TYPE_SFCOLOR)
field31.setName("headlightColor")
field31.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field31.setAppinfo("Camera headlight color")
field31.setValue("1 1 1")

ProtoInterface18.addField(field31)
field32 = fieldObject()
field32.setType(fieldObject.TYPE_SFFLOAT)
field32.setName("headlightIntensity")
field32.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field32.setAppinfo("Camera headlight intensity")
field32.setValue("1")

ProtoInterface18.addField(field32)
field33 = fieldObject()
field33.setType(fieldObject.TYPE_SFCOLOR)
field33.setName("filterColor")
field33.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field33.setAppinfo("Camera filter color that modifies virtual lens capture")
field33.setValue("1 1 1")

ProtoInterface18.addField(field33)
field34 = fieldObject()
field34.setType(fieldObject.TYPE_SFFLOAT)
field34.setName("filterTransparency")
field34.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field34.setAppinfo("Camera filter transparency that modifies virtual lens capture")
field34.setValue("1")

ProtoInterface18.addField(field34)
field35 = fieldObject()
field35.setType(fieldObject.TYPE_SFVEC3F)
field35.setName("upVector")
field35.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field35.setAppinfo("upVector changes modify camera orientation (and possibly vice versa)")
field35.setValue("0 1 0")

ProtoInterface18.addField(field35)
field36 = fieldObject()
field36.setType(fieldObject.TYPE_SFFLOAT)
field36.setName("fStop")
field36.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field36.setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")
field36.setValue("5.6")

ProtoInterface18.addField(field36)
field37 = fieldObject()
field37.setType(fieldObject.TYPE_SFFLOAT)
field37.setName("focusDistance")
field37.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field37.setAppinfo("Distance to focal plane of sharpest focus")
field37.setValue("10")

ProtoInterface18.addField(field37)
field38 = fieldObject()
field38.setType(fieldObject.TYPE_SFBOOL)
field38.setName("isActive")
field38.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field38.setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")

ProtoInterface18.addField(field38)
field39 = fieldObject()
field39.setType(fieldObject.TYPE_SFTIME)
field39.setName("totalDuration")
field39.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field39.setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations")

ProtoInterface18.addField(field39)
field40 = fieldObject()
field40.setType(fieldObject.TYPE_SFNODE)
field40.setName("offlineRender")
field40.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field40.setAppinfo("OfflineRender node")


field40.addComments(CommentsBlock("""initialization node (if any) goes here"""))
ProtoInterface18.addField(field40)
field41 = fieldObject()
field41.setType(fieldObject.TYPE_SFBOOL)
field41.setName("traceEnabled")
field41.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field41.setAppinfo("enable console output to trace script computations and prototype progress")
field41.setValue("false")

ProtoInterface18.addField(field41)
ProtoDeclare17.setProtoInterface(ProtoInterface18)
ProtoBody42 = ProtoBodyObject()

Viewpoint43 = ViewpointObject()
Viewpoint43.setDEF("CameraViewpoint")

IS44 = ISObject()

connect45 = connectObject()
connect45.setNodeField("description")
connect45.setProtoField("description")

IS44.addConnect(connect45)
connect46 = connectObject()
connect46.setNodeField("position")
connect46.setProtoField("position")

IS44.addConnect(connect46)
connect47 = connectObject()
connect47.setNodeField("orientation")
connect47.setProtoField("orientation")

IS44.addConnect(connect47)
connect48 = connectObject()
connect48.setNodeField("fieldOfView")
connect48.setProtoField("fieldOfView")

IS44.addConnect(connect48)
connect49 = connectObject()
connect49.setNodeField("set_bind")
connect49.setProtoField("set_bind")

IS44.addConnect(connect49)
connect50 = connectObject()
connect50.setNodeField("bindTime")
connect50.setProtoField("bindTime")

IS44.addConnect(connect50)
connect51 = connectObject()
connect51.setNodeField("isBound")
connect51.setProtoField("isBound")

IS44.addConnect(connect51)
Viewpoint43.setIS(IS44)
ProtoBody42.addChild(Viewpoint43)

ProtoBody42.addComments(CommentsBlock("""NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation"""))
NavigationInfo52 = NavigationInfoObject()
NavigationInfo52.setType(["EXAMINE","FLY","ANY"])
NavigationInfo52.setDEF("CameraNavInfo")

IS53 = ISObject()

connect54 = connectObject()
connect54.setNodeField("set_bind")
connect54.setProtoField("set_bind")

IS53.addConnect(connect54)
connect55 = connectObject()
connect55.setNodeField("headlight")
connect55.setProtoField("headlight")

IS53.addConnect(connect55)
connect56 = connectObject()
connect56.setNodeField("visibilityLimit")
connect56.setProtoField("farClipPlane")

IS53.addConnect(connect56)

IS53.addComments(CommentsBlock("""No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing."""))
NavigationInfo52.setIS(IS53)
ProtoBody42.addChild(NavigationInfo52)

ProtoBody42.addComments(CommentsBlock("""this DirectionalLight replaces NavigationInfo headlight in order to add color capability"""))
DirectionalLight57 = DirectionalLightObject()
DirectionalLight57.setDEF("CameraDirectionalLight")
DirectionalLight57.setGlobal(True)


DirectionalLight57.addComments(CommentsBlock("""TODO confirm other default field values match NavigationInfo spec"""))
IS58 = ISObject()

connect59 = connectObject()
connect59.setNodeField("on")
connect59.setProtoField("headlight")

IS58.addConnect(connect59)
connect60 = connectObject()
connect60.setNodeField("color")
connect60.setProtoField("headlightColor")

IS58.addConnect(connect60)
connect61 = connectObject()
connect61.setNodeField("intensity")
connect61.setProtoField("headlightIntensity")

IS58.addConnect(connect61)
DirectionalLight57.setIS(IS58)
ProtoBody42.addChild(DirectionalLight57)
PositionInterpolator62 = PositionInterpolatorObject()
PositionInterpolator62.setDEF("CameraPositionInterpolator")
PositionInterpolator62.setKey([0,1])
PositionInterpolator62.setKeyValue([0,0,0,0,0,0])

IS63 = ISObject()

connect64 = connectObject()
connect64.setNodeField("set_fraction")
connect64.setProtoField("set_fraction")

IS63.addConnect(connect64)
PositionInterpolator62.setIS(IS63)
ProtoBody42.addChild(PositionInterpolator62)
OrientationInterpolator65 = OrientationInterpolatorObject()
OrientationInterpolator65.setDEF("CameraOrientationInterpolator")
OrientationInterpolator65.setKey([0,1])
OrientationInterpolator65.setKeyValue([0,1,0,0,0,1,0,0])

IS66 = ISObject()

connect67 = connectObject()
connect67.setNodeField("set_fraction")
connect67.setProtoField("set_fraction")

IS66.addConnect(connect67)
OrientationInterpolator65.setIS(IS66)
ProtoBody42.addChild(OrientationInterpolator65)
ROUTE68 = ROUTEObject()
ROUTE68.setFromField("value_changed")
ROUTE68.setFromNode("CameraPositionInterpolator")
ROUTE68.setToField("position")
ROUTE68.setToNode("CameraViewpoint")

ProtoBody42.addChild(ROUTE68)
ROUTE69 = ROUTEObject()
ROUTE69.setFromField("value_changed")
ROUTE69.setFromNode("CameraOrientationInterpolator")
ROUTE69.setToField("orientation")
ROUTE69.setToNode("CameraViewpoint")

ProtoBody42.addChild(ROUTE69)
Script70 = ScriptObject()
Script70.setDEF("CameraScript")
Script70.setDirectOutput(True)
Script70.setMustEvaluate(True)


Script70.addComments(CommentsBlock("""binding is controlled externally, all camera operations proceed the same regardless of whether bound or not"""))
field71 = fieldObject()
field71.setType(fieldObject.TYPE_SFSTRING)
field71.setName("description")
field71.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field71.setAppinfo("Text description to be displayed for this Camera")

Script70.addField(field71)
field72 = fieldObject()
field72.setType(fieldObject.TYPE_SFVEC3F)
field72.setName("position")
field72.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field72.setAppinfo("Camera position in local transformation frame")

Script70.addField(field72)
field73 = fieldObject()
field73.setType(fieldObject.TYPE_SFROTATION)
field73.setName("orientation")
field73.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field73.setAppinfo("Camera rotation in local transformation frame")

Script70.addField(field73)
field74 = fieldObject()
field74.setType(fieldObject.TYPE_SFFLOAT)
field74.setName("set_fraction")
field74.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field74.setAppinfo("input fraction drives interpolators")

Script70.addField(field74)
field75 = fieldObject()
field75.setType(fieldObject.TYPE_SFBOOL)
field75.setName("set_bind")
field75.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field75.setAppinfo("input event binds or unbinds this Camera")

Script70.addField(field75)
field76 = fieldObject()
field76.setType(fieldObject.TYPE_SFFLOAT)
field76.setName("fieldOfView")
field76.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field76.setAppinfo("pi/4")

Script70.addField(field76)
field77 = fieldObject()
field77.setType(fieldObject.TYPE_SFFLOAT)
field77.setName("nearClipPlane")
field77.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field77.setAppinfo("Vector distance to near clipping plane")

Script70.addField(field77)
field78 = fieldObject()
field78.setType(fieldObject.TYPE_SFFLOAT)
field78.setName("farClipPlane")
field78.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field78.setAppinfo("Vector distance to far clipping plane")

Script70.addField(field78)
field79 = fieldObject()
field79.setType(fieldObject.TYPE_MFNODE)
field79.setName("shots")
field79.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field79.setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes")


field79.addComments(CommentsBlock("""initialization nodes (if any) go here"""))
Script70.addField(field79)
field80 = fieldObject()
field80.setType(fieldObject.TYPE_SFCOLOR)
field80.setName("filterColor")
field80.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field80.setAppinfo("Camera filter color that modifies virtual lens capture")

Script70.addField(field80)
field81 = fieldObject()
field81.setType(fieldObject.TYPE_SFFLOAT)
field81.setName("filterTransparency")
field81.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field81.setAppinfo("Camera filter transparency that modifies virtual lens capture")

Script70.addField(field81)
field82 = fieldObject()
field82.setType(fieldObject.TYPE_SFVEC3F)
field82.setName("upVector")
field82.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field82.setAppinfo("upVector changes modify camera orientation (and possibly vice versa)")

Script70.addField(field82)
field83 = fieldObject()
field83.setType(fieldObject.TYPE_SFFLOAT)
field83.setName("fStop")
field83.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field83.setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")

Script70.addField(field83)
field84 = fieldObject()
field84.setType(fieldObject.TYPE_SFFLOAT)
field84.setName("focusDistance")
field84.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field84.setAppinfo("Distance to focal plane of sharpest focus")

Script70.addField(field84)
field85 = fieldObject()
field85.setType(fieldObject.TYPE_SFBOOL)
field85.setName("isActive")
field85.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field85.setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")

Script70.addField(field85)
field86 = fieldObject()
field86.setType(fieldObject.TYPE_SFTIME)
field86.setName("totalDuration")
field86.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field86.setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations")

Script70.addField(field86)
field87 = fieldObject()
field87.setType(fieldObject.TYPE_SFNODE)
field87.setName("offlineRender")
field87.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field87.setAppinfo("OfflineRender node")


field87.addComments(CommentsBlock("""initialization node (if any) goes here"""))
Script70.addField(field87)
field88 = fieldObject()
field88.setType(fieldObject.TYPE_SFNODE)
field88.setName("ViewpointNode")
field88.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field88.setAppinfo("node reference to permit getting setting fields from within Script")

Viewpoint89 = ViewpointObject()
Viewpoint89.setUSE("CameraViewpoint")

field88.addChild(Viewpoint89)
Script70.addField(field88)
field90 = fieldObject()
field90.setType(fieldObject.TYPE_SFNODE)
field90.setName("NavInfoNode")
field90.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field90.setAppinfo("node reference to permit getting setting fields from within Script")

NavigationInfo91 = NavigationInfoObject()
NavigationInfo91.setUSE("CameraNavInfo")

field90.addChild(NavigationInfo91)
Script70.addField(field90)
field92 = fieldObject()
field92.setType(fieldObject.TYPE_SFNODE)
field92.setName("CameraPI")
field92.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field92.setAppinfo("node reference to permit getting setting fields from within Script")

PositionInterpolator93 = PositionInterpolatorObject()
PositionInterpolator93.setUSE("CameraPositionInterpolator")

field92.addChild(PositionInterpolator93)
Script70.addField(field92)
field94 = fieldObject()
field94.setType(fieldObject.TYPE_SFNODE)
field94.setName("CameraOI")
field94.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field94.setAppinfo("node reference to permit getting setting fields from within Script")

OrientationInterpolator95 = OrientationInterpolatorObject()
OrientationInterpolator95.setUSE("CameraOrientationInterpolator")

field94.addChild(OrientationInterpolator95)
Script70.addField(field94)
field96 = fieldObject()
field96.setType(fieldObject.TYPE_MFFLOAT)
field96.setName("key")
field96.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field96.setAppinfo("key array for interpolators")

Script70.addField(field96)
field97 = fieldObject()
field97.setType(fieldObject.TYPE_MFVEC3F)
field97.setName("keyValuePosition")
field97.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field97.setAppinfo("keyValue array for PositionInterpolator")

Script70.addField(field97)
field98 = fieldObject()
field98.setType(fieldObject.TYPE_MFROTATION)
field98.setName("keyValueOrientation")
field98.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field98.setAppinfo("keyValue array for OrientationInterpolator")

Script70.addField(field98)
field99 = fieldObject()
field99.setType(fieldObject.TYPE_SFBOOL)
field99.setName("animated")
field99.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field99.setAppinfo("whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events")
field99.setValue("false")

Script70.addField(field99)
field100 = fieldObject()
field100.setType(fieldObject.TYPE_SFBOOL)
field100.setName("initialized")
field100.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field100.setAppinfo("perform checkShots() function once immediately after initialization")
field100.setValue("false")

Script70.addField(field100)
field101 = fieldObject()
field101.setType(fieldObject.TYPE_SFINT32)
field101.setName("shotCount")
field101.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field101.setAppinfo("how many CameraShot nodes are contained in shots array")
field101.setValue("0")

Script70.addField(field101)
field102 = fieldObject()
field102.setType(fieldObject.TYPE_SFINT32)
field102.setName("movesCount")
field102.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field102.setAppinfo("how many CameraMove nodes are contained in moves array")
field102.setValue("0")

Script70.addField(field102)
field103 = fieldObject()
field103.setType(fieldObject.TYPE_SFFLOAT)
field103.setName("frameCount")
field103.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field103.setAppinfo("how many frames were created in current loop")
field103.setValue("0")

Script70.addField(field103)
field104 = fieldObject()
field104.setType(fieldObject.TYPE_SFTIME)
field104.setName("startTime")
field104.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field104.setAppinfo("holding variable")
field104.setValue("0")

Script70.addField(field104)
field105 = fieldObject()
field105.setType(fieldObject.TYPE_SFTIME)
field105.setName("priorTraceTime")
field105.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field105.setAppinfo("holding variable")
field105.setValue("0")

Script70.addField(field105)
field106 = fieldObject()
field106.setType(fieldObject.TYPE_SFBOOL)
field106.setName("traceEnabled")
field106.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field106.setAppinfo("enable console output to trace script computations and prototype progress")

Script70.addField(field106)
IS107 = ISObject()

connect108 = connectObject()
connect108.setNodeField("description")
connect108.setProtoField("description")

IS107.addConnect(connect108)
connect109 = connectObject()
connect109.setNodeField("position")
connect109.setProtoField("position")

IS107.addConnect(connect109)
connect110 = connectObject()
connect110.setNodeField("orientation")
connect110.setProtoField("orientation")

IS107.addConnect(connect110)
connect111 = connectObject()
connect111.setNodeField("set_fraction")
connect111.setProtoField("set_fraction")

IS107.addConnect(connect111)
connect112 = connectObject()
connect112.setNodeField("set_bind")
connect112.setProtoField("set_bind")

IS107.addConnect(connect112)
connect113 = connectObject()
connect113.setNodeField("fieldOfView")
connect113.setProtoField("fieldOfView")

IS107.addConnect(connect113)
connect114 = connectObject()
connect114.setNodeField("nearClipPlane")
connect114.setProtoField("nearClipPlane")

IS107.addConnect(connect114)
connect115 = connectObject()
connect115.setNodeField("farClipPlane")
connect115.setProtoField("farClipPlane")

IS107.addConnect(connect115)
connect116 = connectObject()
connect116.setNodeField("shots")
connect116.setProtoField("shots")

IS107.addConnect(connect116)
connect117 = connectObject()
connect117.setNodeField("filterColor")
connect117.setProtoField("filterColor")

IS107.addConnect(connect117)
connect118 = connectObject()
connect118.setNodeField("filterTransparency")
connect118.setProtoField("filterTransparency")

IS107.addConnect(connect118)
connect119 = connectObject()
connect119.setNodeField("upVector")
connect119.setProtoField("upVector")

IS107.addConnect(connect119)
connect120 = connectObject()
connect120.setNodeField("fStop")
connect120.setProtoField("fStop")

IS107.addConnect(connect120)
connect121 = connectObject()
connect121.setNodeField("focusDistance")
connect121.setProtoField("focusDistance")

IS107.addConnect(connect121)
connect122 = connectObject()
connect122.setNodeField("isActive")
connect122.setProtoField("isActive")

IS107.addConnect(connect122)
connect123 = connectObject()
connect123.setNodeField("totalDuration")
connect123.setProtoField("totalDuration")

IS107.addConnect(connect123)
connect124 = connectObject()
connect124.setNodeField("offlineRender")
connect124.setProtoField("offlineRender")

IS107.addConnect(connect124)
connect125 = connectObject()
connect125.setNodeField("traceEnabled")
connect125.setProtoField("traceEnabled")

IS107.addConnect(connect125)
Script70.setIS(IS107)

Script70.setSourceCode("ecmascript:\n"+
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
"}\n"+
"")
ProtoBody42.addChild(Script70)
ROUTE126 = ROUTEObject()
ROUTE126.setFromField("position")
ROUTE126.setFromNode("CameraScript")
ROUTE126.setToField("position")
ROUTE126.setToNode("CameraViewpoint")

ProtoBody42.addChild(ROUTE126)
ROUTE127 = ROUTEObject()
ROUTE127.setFromField("orientation")
ROUTE127.setFromNode("CameraScript")
ROUTE127.setToField("orientation")
ROUTE127.setToNode("CameraViewpoint")

ProtoBody42.addChild(ROUTE127)
ROUTE128 = ROUTEObject()
ROUTE128.setFromField("isActive")
ROUTE128.setFromNode("CameraScript")
ROUTE128.setToField("set_bind")
ROUTE128.setToNode("CameraViewpoint")

ProtoBody42.addChild(ROUTE128)
ROUTE129 = ROUTEObject()
ROUTE129.setFromField("isActive")
ROUTE129.setFromNode("CameraScript")
ROUTE129.setToField("set_bind")
ROUTE129.setToNode("CameraNavInfo")

ProtoBody42.addChild(ROUTE129)
ROUTE130 = ROUTEObject()
ROUTE130.setFromField("isActive")
ROUTE130.setFromNode("CameraScript")
ROUTE130.setToField("on")
ROUTE130.setToNode("CameraDirectionalLight")

ProtoBody42.addChild(ROUTE130)
ProtoDeclare17.setProtoBody(ProtoBody42)
Scene16.addChild(ProtoDeclare17)

Scene16.addComments(CommentsBlock("""=============== CameraShot =============="""))
ProtoDeclare131 = ProtoDeclareObject()
ProtoDeclare131.setName("CameraShot")
ProtoDeclare131.setAppinfo("CameraShot collects a specific set of CameraMovement animations that make up an individual shot.")

ProtoInterface132 = ProtoInterfaceObject()

field133 = fieldObject()
field133.setType(fieldObject.TYPE_SFSTRING)
field133.setName("description")
field133.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field133.setAppinfo("Text description to be displayed for this CameraShot")

ProtoInterface132.addField(field133)
field134 = fieldObject()
field134.setType(fieldObject.TYPE_SFBOOL)
field134.setName("enabled")
field134.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field134.setAppinfo("Whether this CameraShot can be activated")
field134.setValue("true")

ProtoInterface132.addField(field134)
field135 = fieldObject()
field135.setType(fieldObject.TYPE_MFNODE)
field135.setName("moves")
field135.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field135.setAppinfo("Set of CameraMovement nodes")


field135.addComments(CommentsBlock("""initializing CameraMovement nodes are inserted here by scene author using ProtoInstance"""))
ProtoInterface132.addField(field135)
field136 = fieldObject()
field136.setType(fieldObject.TYPE_SFVEC3F)
field136.setName("initialPosition")
field136.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field136.setAppinfo("Setup to reinitialize camera position for this shot")
field136.setValue("0 0 10")

ProtoInterface132.addField(field136)
field137 = fieldObject()
field137.setType(fieldObject.TYPE_SFROTATION)
field137.setName("initialOrientation")
field137.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field137.setAppinfo("Setup to reinitialize camera rotation for this shot")
field137.setValue("0 0 1 0")

ProtoInterface132.addField(field137)
field138 = fieldObject()
field138.setType(fieldObject.TYPE_SFVEC3F)
field138.setName("initialAimPoint")
field138.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field138.setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot")
field138.setValue("0 0 0")

ProtoInterface132.addField(field138)
field139 = fieldObject()
field139.setType(fieldObject.TYPE_SFFLOAT)
field139.setName("initialFieldOfView")
field139.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field139.setAppinfo("pi/4")
field139.setValue("0.7854")

ProtoInterface132.addField(field139)
field140 = fieldObject()
field140.setType(fieldObject.TYPE_SFFLOAT)
field140.setName("initialFStop")
field140.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field140.setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")
field140.setValue("5.6")

ProtoInterface132.addField(field140)
field141 = fieldObject()
field141.setType(fieldObject.TYPE_SFFLOAT)
field141.setName("initialFocusDistance")
field141.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field141.setAppinfo("Distance to focal plane of sharpest focus")
field141.setValue("10")

ProtoInterface132.addField(field141)
field142 = fieldObject()
field142.setType(fieldObject.TYPE_SFTIME)
field142.setName("shotDuration")
field142.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field142.setAppinfo("Subtotal duration of contained CameraMovement move durations")

ProtoInterface132.addField(field142)
field143 = fieldObject()
field143.setType(fieldObject.TYPE_SFBOOL)
field143.setName("isActive")
field143.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field143.setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")

ProtoInterface132.addField(field143)
field144 = fieldObject()
field144.setType(fieldObject.TYPE_SFBOOL)
field144.setName("traceEnabled")
field144.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field144.setAppinfo("enable console output to trace script computations and prototype progress")
field144.setValue("false")

ProtoInterface132.addField(field144)
ProtoDeclare131.setProtoInterface(ProtoInterface132)
ProtoBody145 = ProtoBodyObject()

Script146 = ScriptObject()
Script146.setDEF("CameraShotScript")
Script146.setDirectOutput(True)
Script146.setMustEvaluate(True)

field147 = fieldObject()
field147.setType(fieldObject.TYPE_SFSTRING)
field147.setName("description")
field147.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field147.setAppinfo("Text description to be displayed for this CameraShot")

Script146.addField(field147)
field148 = fieldObject()
field148.setType(fieldObject.TYPE_SFBOOL)
field148.setName("enabled")
field148.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field148.setAppinfo("Whether this CameraShot can be activated")

Script146.addField(field148)
field149 = fieldObject()
field149.setType(fieldObject.TYPE_MFNODE)
field149.setName("moves")
field149.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field149.setAppinfo("Set of CameraMovement nodes")


field149.addComments(CommentsBlock("""initialization nodes (if any) go here"""))
Script146.addField(field149)
field150 = fieldObject()
field150.setType(fieldObject.TYPE_SFVEC3F)
field150.setName("initialPosition")
field150.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field150.setAppinfo("Setup to reinitialize camera position for this shot")

Script146.addField(field150)
field151 = fieldObject()
field151.setType(fieldObject.TYPE_SFROTATION)
field151.setName("initialOrientation")
field151.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field151.setAppinfo("Setup to reinitialize camera rotation for this shot")

Script146.addField(field151)
field152 = fieldObject()
field152.setType(fieldObject.TYPE_SFVEC3F)
field152.setName("initialAimPoint")
field152.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field152.setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot")

Script146.addField(field152)
field153 = fieldObject()
field153.setType(fieldObject.TYPE_SFFLOAT)
field153.setName("initialFieldOfView")
field153.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field153.setAppinfo("pi/4")

Script146.addField(field153)
field154 = fieldObject()
field154.setType(fieldObject.TYPE_SFFLOAT)
field154.setName("initialFStop")
field154.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field154.setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")

Script146.addField(field154)
field155 = fieldObject()
field155.setType(fieldObject.TYPE_SFFLOAT)
field155.setName("initialFocusDistance")
field155.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field155.setAppinfo("Distance to focal plane of sharpest focus")

Script146.addField(field155)
field156 = fieldObject()
field156.setType(fieldObject.TYPE_SFTIME)
field156.setName("shotDuration")
field156.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field156.setAppinfo("Subtotal duration of contained CameraMovement move durations")

Script146.addField(field156)
field157 = fieldObject()
field157.setType(fieldObject.TYPE_SFBOOL)
field157.setName("isActive")
field157.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field157.setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")

Script146.addField(field157)
field158 = fieldObject()
field158.setType(fieldObject.TYPE_SFBOOL)
field158.setName("traceEnabled")
field158.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field158.setAppinfo("enable console output to trace script computations and prototype progress")

Script146.addField(field158)
field159 = fieldObject()
field159.setType(fieldObject.TYPE_MFFLOAT)
field159.setName("key")
field159.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field159.setAppinfo("key array for interpolators")

Script146.addField(field159)
field160 = fieldObject()
field160.setType(fieldObject.TYPE_MFVEC3F)
field160.setName("keyValuePosition")
field160.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field160.setAppinfo("keyValue array for PositionInterpolator")

Script146.addField(field160)
field161 = fieldObject()
field161.setType(fieldObject.TYPE_MFROTATION)
field161.setName("keyValueOrientation")
field161.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field161.setAppinfo("keyValue array for OrientationInterpolator")

Script146.addField(field161)
IS162 = ISObject()

connect163 = connectObject()
connect163.setNodeField("description")
connect163.setProtoField("description")

IS162.addConnect(connect163)
connect164 = connectObject()
connect164.setNodeField("enabled")
connect164.setProtoField("enabled")

IS162.addConnect(connect164)
connect165 = connectObject()
connect165.setNodeField("moves")
connect165.setProtoField("moves")

IS162.addConnect(connect165)
connect166 = connectObject()
connect166.setNodeField("initialPosition")
connect166.setProtoField("initialPosition")

IS162.addConnect(connect166)
connect167 = connectObject()
connect167.setNodeField("initialOrientation")
connect167.setProtoField("initialOrientation")

IS162.addConnect(connect167)
connect168 = connectObject()
connect168.setNodeField("initialAimPoint")
connect168.setProtoField("initialAimPoint")

IS162.addConnect(connect168)
connect169 = connectObject()
connect169.setNodeField("initialFieldOfView")
connect169.setProtoField("initialFieldOfView")

IS162.addConnect(connect169)
connect170 = connectObject()
connect170.setNodeField("initialFStop")
connect170.setProtoField("initialFStop")

IS162.addConnect(connect170)
connect171 = connectObject()
connect171.setNodeField("initialFocusDistance")
connect171.setProtoField("initialFocusDistance")

IS162.addConnect(connect171)
connect172 = connectObject()
connect172.setNodeField("shotDuration")
connect172.setProtoField("shotDuration")

IS162.addConnect(connect172)
connect173 = connectObject()
connect173.setNodeField("isActive")
connect173.setProtoField("isActive")

IS162.addConnect(connect173)
connect174 = connectObject()
connect174.setNodeField("traceEnabled")
connect174.setProtoField("traceEnabled")

IS162.addConnect(connect174)
Script146.setIS(IS162)

Script146.setSourceCode("ecmascript:\n"+
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

ProtoBody145.addComments(CommentsBlock("""Add any ROUTEs here, going from Script to other nodes within ProtoBody"""))
ProtoDeclare131.setProtoBody(ProtoBody145)
Scene16.addChild(ProtoDeclare131)

Scene16.addComments(CommentsBlock("""=============== CameraMovement =============="""))
ProtoDeclare175 = ProtoDeclareObject()
ProtoDeclare175.setName("CameraMovement")
ProtoDeclare175.setAppinfo("CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.")

ProtoInterface176 = ProtoInterfaceObject()

field177 = fieldObject()
field177.setType(fieldObject.TYPE_SFSTRING)
field177.setName("description")
field177.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field177.setAppinfo("Text description to be displayed for this CameraMovement")

ProtoInterface176.addField(field177)
field178 = fieldObject()
field178.setType(fieldObject.TYPE_SFBOOL)
field178.setName("enabled")
field178.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field178.setAppinfo("Whether this CameraMovement can be activated")
field178.setValue("true")

ProtoInterface176.addField(field178)
field179 = fieldObject()
field179.setType(fieldObject.TYPE_SFFLOAT)
field179.setName("duration")
field179.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field179.setAppinfo("Duration in seconds for this move")
field179.setValue("0")

ProtoInterface176.addField(field179)
field180 = fieldObject()
field180.setType(fieldObject.TYPE_SFVEC3F)
field180.setName("goalPosition")
field180.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field180.setAppinfo("Goal camera position for this move")
field180.setValue("0 0 10")

ProtoInterface176.addField(field180)
field181 = fieldObject()
field181.setType(fieldObject.TYPE_SFROTATION)
field181.setName("goalOrientation")
field181.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field181.setAppinfo("Goal camera rotation for this move")
field181.setValue("0 0 1 0")

ProtoInterface176.addField(field181)
field182 = fieldObject()
field182.setType(fieldObject.TYPE_SFBOOL)
field182.setName("tracking")
field182.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field182.setAppinfo("Whether or not camera direction is tracking towards the aimPoint")
field182.setValue("false")

ProtoInterface176.addField(field182)
field183 = fieldObject()
field183.setType(fieldObject.TYPE_SFVEC3F)
field183.setName("goalAimPoint")
field183.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field183.setAppinfo("Goal aimPoint for this move, ignored if tracking=false")
field183.setValue("0 0 0")

ProtoInterface176.addField(field183)
field184 = fieldObject()
field184.setType(fieldObject.TYPE_SFFLOAT)
field184.setName("goalFieldOfView")
field184.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field184.setAppinfo("Goal fieldOfView for this move")
field184.setValue("0.7854")

ProtoInterface176.addField(field184)
field185 = fieldObject()
field185.setType(fieldObject.TYPE_SFFLOAT)
field185.setName("goalFStop")
field185.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field185.setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")
field185.setValue("5.6")

ProtoInterface176.addField(field185)
field186 = fieldObject()
field186.setType(fieldObject.TYPE_SFFLOAT)
field186.setName("goalFocusDistance")
field186.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field186.setAppinfo("Distance to focal plane of sharpest focus")
field186.setValue("10")

ProtoInterface176.addField(field186)
field187 = fieldObject()
field187.setType(fieldObject.TYPE_SFBOOL)
field187.setName("isActive")
field187.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field187.setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")

ProtoInterface176.addField(field187)
field188 = fieldObject()
field188.setType(fieldObject.TYPE_SFBOOL)
field188.setName("traceEnabled")
field188.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field188.setAppinfo("enable console output to trace script computations and prototype progress")
field188.setValue("false")

ProtoInterface176.addField(field188)
ProtoDeclare175.setProtoInterface(ProtoInterface176)
ProtoBody189 = ProtoBodyObject()


ProtoBody189.addComments(CommentsBlock("""First node determines node type of this prototype"""))

ProtoBody189.addComments(CommentsBlock("""Subsequent nodes do not render, but still must be a valid X3D subgraph"""))

ProtoBody189.addComments(CommentsBlock("""Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events"""))
Script190 = ScriptObject()
Script190.setDEF("CameraMovementScript")
Script190.setDirectOutput(True)
Script190.setMustEvaluate(True)

field191 = fieldObject()
field191.setType(fieldObject.TYPE_SFSTRING)
field191.setName("description")
field191.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field191.setAppinfo("Text description to be displayed for this CameraMovement")

Script190.addField(field191)
field192 = fieldObject()
field192.setType(fieldObject.TYPE_SFBOOL)
field192.setName("enabled")
field192.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field192.setAppinfo("Whether this CameraMovement can be activated")

Script190.addField(field192)
field193 = fieldObject()
field193.setType(fieldObject.TYPE_SFFLOAT)
field193.setName("duration")
field193.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field193.setAppinfo("Duration in seconds for this move")

Script190.addField(field193)
field194 = fieldObject()
field194.setType(fieldObject.TYPE_SFVEC3F)
field194.setName("goalPosition")
field194.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field194.setAppinfo("Goal camera position for this move")

Script190.addField(field194)
field195 = fieldObject()
field195.setType(fieldObject.TYPE_SFROTATION)
field195.setName("goalOrientation")
field195.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field195.setAppinfo("Goal camera rotation for this move")

Script190.addField(field195)
field196 = fieldObject()
field196.setType(fieldObject.TYPE_SFBOOL)
field196.setName("tracking")
field196.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field196.setAppinfo("Whether or not camera direction is tracking towards the aimPoint")

Script190.addField(field196)
field197 = fieldObject()
field197.setType(fieldObject.TYPE_SFVEC3F)
field197.setName("goalAimPoint")
field197.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field197.setAppinfo("Goal aimPoint for this move, ignored if tracking=false")

Script190.addField(field197)
field198 = fieldObject()
field198.setType(fieldObject.TYPE_SFFLOAT)
field198.setName("goalFieldOfView")
field198.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field198.setAppinfo("Goal fieldOfView for this move")

Script190.addField(field198)
field199 = fieldObject()
field199.setType(fieldObject.TYPE_SFFLOAT)
field199.setName("goalFStop")
field199.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field199.setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")

Script190.addField(field199)
field200 = fieldObject()
field200.setType(fieldObject.TYPE_SFFLOAT)
field200.setName("goalFocusDistance")
field200.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field200.setAppinfo("Distance to focal plane of sharpest focus")

Script190.addField(field200)
field201 = fieldObject()
field201.setType(fieldObject.TYPE_SFBOOL)
field201.setName("isActive")
field201.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field201.setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")

Script190.addField(field201)
field202 = fieldObject()
field202.setType(fieldObject.TYPE_SFBOOL)
field202.setName("traceEnabled")
field202.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field202.setAppinfo("enable console output to trace script computations and prototype progress")

Script190.addField(field202)
IS203 = ISObject()

connect204 = connectObject()
connect204.setNodeField("description")
connect204.setProtoField("description")

IS203.addConnect(connect204)
connect205 = connectObject()
connect205.setNodeField("enabled")
connect205.setProtoField("enabled")

IS203.addConnect(connect205)
connect206 = connectObject()
connect206.setNodeField("duration")
connect206.setProtoField("duration")

IS203.addConnect(connect206)
connect207 = connectObject()
connect207.setNodeField("goalPosition")
connect207.setProtoField("goalPosition")

IS203.addConnect(connect207)
connect208 = connectObject()
connect208.setNodeField("goalOrientation")
connect208.setProtoField("goalOrientation")

IS203.addConnect(connect208)
connect209 = connectObject()
connect209.setNodeField("tracking")
connect209.setProtoField("tracking")

IS203.addConnect(connect209)
connect210 = connectObject()
connect210.setNodeField("goalAimPoint")
connect210.setProtoField("goalAimPoint")

IS203.addConnect(connect210)
connect211 = connectObject()
connect211.setNodeField("goalFieldOfView")
connect211.setProtoField("goalFieldOfView")

IS203.addConnect(connect211)
connect212 = connectObject()
connect212.setNodeField("goalFStop")
connect212.setProtoField("goalFStop")

IS203.addConnect(connect212)
connect213 = connectObject()
connect213.setNodeField("goalFocusDistance")
connect213.setProtoField("goalFocusDistance")

IS203.addConnect(connect213)
connect214 = connectObject()
connect214.setNodeField("isActive")
connect214.setProtoField("isActive")

IS203.addConnect(connect214)
connect215 = connectObject()
connect215.setNodeField("traceEnabled")
connect215.setProtoField("traceEnabled")

IS203.addConnect(connect215)
Script190.setIS(IS203)

Script190.setSourceCode("ecmascript:\n"+
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

ProtoBody189.addComments(CommentsBlock("""Add any ROUTEs here, going from Script to other nodes within ProtoBody"""))
ProtoDeclare175.setProtoBody(ProtoBody189)
Scene16.addChild(ProtoDeclare175)

Scene16.addComments(CommentsBlock("""=============== OfflineRender =============="""))
ProtoDeclare216 = ProtoDeclareObject()
ProtoDeclare216.setName("OfflineRender")
ProtoDeclare216.setAppinfo("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).")

ProtoInterface217 = ProtoInterfaceObject()


ProtoInterface217.addComments(CommentsBlock("""TODO non-photorealistic rendering (NPR) parameters"""))
field218 = fieldObject()
field218.setType(fieldObject.TYPE_SFSTRING)
field218.setName("description")
field218.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field218.setAppinfo("Text description to be displayed for this OfflineRender")

ProtoInterface217.addField(field218)
field219 = fieldObject()
field219.setType(fieldObject.TYPE_SFBOOL)
field219.setName("enabled")
field219.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field219.setAppinfo("Whether this OfflineRender can be activated")
field219.setValue("true")

ProtoInterface217.addField(field219)
field220 = fieldObject()
field220.setType(fieldObject.TYPE_SFFLOAT)
field220.setName("frameRate")
field220.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field220.setAppinfo("Frames per second recorded for this rendering")
field220.setValue("30")

ProtoInterface217.addField(field220)
field221 = fieldObject()
field221.setType(fieldObject.TYPE_SFVEC2F)
field221.setName("frameSize")
field221.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field221.setAppinfo("Size of frame in number of pixels width and height")
field221.setValue("640 480")

ProtoInterface217.addField(field221)
field222 = fieldObject()
field222.setType(fieldObject.TYPE_SFFLOAT)
field222.setName("pixelAspectRatio")
field222.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field222.setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1")
field222.setValue("1.33")

ProtoInterface217.addField(field222)
field223 = fieldObject()
field223.setType(fieldObject.TYPE_SFTIME)
field223.setName("set_startTime")
field223.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field223.setAppinfo("Begin render operation")

ProtoInterface217.addField(field223)
field224 = fieldObject()
field224.setType(fieldObject.TYPE_SFFLOAT)
field224.setName("progress")
field224.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field224.setAppinfo("Progress performing render operation (0..1)")

ProtoInterface217.addField(field224)
field225 = fieldObject()
field225.setType(fieldObject.TYPE_SFTIME)
field225.setName("renderCompleteTime")
field225.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field225.setAppinfo("Render operation complete")

ProtoInterface217.addField(field225)
field226 = fieldObject()
field226.setType(fieldObject.TYPE_MFSTRING)
field226.setName("movieFormat")
field226.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field226.setAppinfo("Format of rendered output movie (mpeg mp4 etc.), use first supported format")
field226.setValue("\"mpeg\"")

ProtoInterface217.addField(field226)
field227 = fieldObject()
field227.setType(fieldObject.TYPE_MFSTRING)
field227.setName("imageFormat")
field227.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field227.setAppinfo("Format of rendered output images (png jpeg gif tiff etc.) use first supported format")
field227.setValue("\"png\"")

ProtoInterface217.addField(field227)
field228 = fieldObject()
field228.setType(fieldObject.TYPE_SFBOOL)
field228.setName("traceEnabled")
field228.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field228.setAppinfo("enable console output to trace script computations and prototype progress")
field228.setValue("false")

ProtoInterface217.addField(field228)
ProtoDeclare216.setProtoInterface(ProtoInterface217)
ProtoBody229 = ProtoBodyObject()


ProtoBody229.addComments(CommentsBlock("""First node determines node type of this prototype"""))

ProtoBody229.addComments(CommentsBlock("""Subsequent nodes do not render, but still must be a valid X3D subgraph"""))
Script230 = ScriptObject()
Script230.setDEF("OfflineRenderScript")
Script230.setMustEvaluate(True)

field231 = fieldObject()
field231.setType(fieldObject.TYPE_SFSTRING)
field231.setName("description")
field231.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field231.setAppinfo("Text description to be displayed for this OfflineRender")

Script230.addField(field231)
field232 = fieldObject()
field232.setType(fieldObject.TYPE_SFBOOL)
field232.setName("enabled")
field232.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field232.setAppinfo("Whether this OfflineRender can be activated")

Script230.addField(field232)
field233 = fieldObject()
field233.setType(fieldObject.TYPE_SFFLOAT)
field233.setName("frameRate")
field233.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field233.setAppinfo("Frames per second recorded for this rendering")

Script230.addField(field233)
field234 = fieldObject()
field234.setType(fieldObject.TYPE_SFVEC2F)
field234.setName("frameSize")
field234.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field234.setAppinfo("Size of frame in number of pixels width and height")

Script230.addField(field234)
field235 = fieldObject()
field235.setType(fieldObject.TYPE_SFFLOAT)
field235.setName("pixelAspectRatio")
field235.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field235.setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1")

Script230.addField(field235)
field236 = fieldObject()
field236.setType(fieldObject.TYPE_SFTIME)
field236.setName("set_startTime")
field236.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field236.setAppinfo("Begin render operation")

Script230.addField(field236)
field237 = fieldObject()
field237.setType(fieldObject.TYPE_SFFLOAT)
field237.setName("progress")
field237.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field237.setAppinfo("Progress performing render operation (0..1)")

Script230.addField(field237)
field238 = fieldObject()
field238.setType(fieldObject.TYPE_SFTIME)
field238.setName("renderCompleteTime")
field238.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field238.setAppinfo("Render operation complete")

Script230.addField(field238)
field239 = fieldObject()
field239.setType(fieldObject.TYPE_MFSTRING)
field239.setName("movieFormat")
field239.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field239.setAppinfo("Format of rendered output movie (mpeg mp4 etc.)")

Script230.addField(field239)
field240 = fieldObject()
field240.setType(fieldObject.TYPE_MFSTRING)
field240.setName("imageFormat")
field240.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field240.setAppinfo("Format of rendered output images (png jpeg gif tiff etc.)")

Script230.addField(field240)
field241 = fieldObject()
field241.setType(fieldObject.TYPE_SFBOOL)
field241.setName("traceEnabled")
field241.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field241.setAppinfo("enable console output to trace script computations and prototype progress")

Script230.addField(field241)
IS242 = ISObject()

connect243 = connectObject()
connect243.setNodeField("description")
connect243.setProtoField("description")

IS242.addConnect(connect243)
connect244 = connectObject()
connect244.setNodeField("enabled")
connect244.setProtoField("enabled")

IS242.addConnect(connect244)
connect245 = connectObject()
connect245.setNodeField("frameRate")
connect245.setProtoField("frameRate")

IS242.addConnect(connect245)
connect246 = connectObject()
connect246.setNodeField("frameSize")
connect246.setProtoField("frameSize")

IS242.addConnect(connect246)
connect247 = connectObject()
connect247.setNodeField("pixelAspectRatio")
connect247.setProtoField("pixelAspectRatio")

IS242.addConnect(connect247)
connect248 = connectObject()
connect248.setNodeField("set_startTime")
connect248.setProtoField("set_startTime")

IS242.addConnect(connect248)
connect249 = connectObject()
connect249.setNodeField("progress")
connect249.setProtoField("progress")

IS242.addConnect(connect249)
connect250 = connectObject()
connect250.setNodeField("renderCompleteTime")
connect250.setProtoField("renderCompleteTime")

IS242.addConnect(connect250)
connect251 = connectObject()
connect251.setNodeField("movieFormat")
connect251.setProtoField("movieFormat")

IS242.addConnect(connect251)
connect252 = connectObject()
connect252.setNodeField("imageFormat")
connect252.setProtoField("imageFormat")

IS242.addConnect(connect252)
connect253 = connectObject()
connect253.setNodeField("traceEnabled")
connect253.setProtoField("traceEnabled")

IS242.addConnect(connect253)
Script230.setIS(IS242)

Script230.setSourceCode("ecmascript:\n"+
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

ProtoBody229.addComments(CommentsBlock("""Add any ROUTEs here, going from Script to other nodes within ProtoBody"""))
ProtoDeclare216.setProtoBody(ProtoBody229)
Scene16.addChild(ProtoDeclare216)

Scene16.addComments(CommentsBlock("""=============== Launch Prototype Example =============="""))
Background254 = BackgroundObject()
Background254.setSkyColor([0.282353,0.380392,0.470588])

Scene16.addChild(Background254)
Anchor255 = AnchorObject()
Anchor255.setDescription("launch CameraExample scene")
Anchor255.setUrl(["CameraExamples.x3d","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"])

Transform256 = TransformObject()

Shape257 = ShapeObject()

Text258 = TextObject()
Text258.setString(["CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"])

FontStyle259 = FontStyleObject()
FontStyle259.setJustify(["MIDDLE","MIDDLE"])

Text258.setFontStyle(FontStyle259)
Shape257.setGeometry(Text258)
Appearance260 = AppearanceObject()

Material261 = MaterialObject()
Material261.setDiffuseColor([1,1,0.2])

Appearance260.setMaterial(Material261)
Shape257.setAppearance(Appearance260)
Transform256.addChild(Shape257)
Anchor255.addChild(Transform256)
Scene16.addChild(Anchor255)
X3D0.setScene(Scene16)

X3D0.toFileX3D("../data/CameraPrototypes.new.x3d")
