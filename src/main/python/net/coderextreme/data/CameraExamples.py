# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("CameraExamples.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("description")
meta3.setContent("Camera, CameraShot and CameraMove examples that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("documentation")
meta4.setContent("Two demos are found in the scene, click the \"red text\" on left or right to start. (a) SimpleShotsTest shows Zoom in/out, Pan left/right, Boom up/down, Tilt left/right, with each is defined by a CameraShot collecting a series of CameraMovements. (b) AimPointTest gradually slews the camera view to look at the sliding cube, then follows it around before returning to original viewpoint.")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("creator")
meta5.setContent("Don Brutzman and Jeff Weekley")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("created")
meta6.setContent("18 June 2009")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("modified")
meta7.setContent("12 January 2014")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("TODO")
meta8.setContent("Schematron rules, backed up by initialize() checks")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("reference")
meta9.setContent("BeyondViewpointCameraNodesWeb3D2009.pdf")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("MovingImage")
meta10.setContent("CameraExamplesDemo.mp4")

head1.addMeta(meta10)
meta11 = metaObject()
meta11.setName("reference")
meta11.setContent("http://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html")

head1.addMeta(meta11)
meta12 = metaObject()
meta12.setName("subject")
meta12.setContent("Camera nodes for Viewpoint navigation control")

head1.addMeta(meta12)
meta13 = metaObject()
meta13.setName("reference")
meta13.setContent("CameraPrototypes.x3d")

head1.addMeta(meta13)
meta14 = metaObject()
meta14.setName("reference")
meta14.setContent("CameraExamplesConsoleLog.txt")

head1.addMeta(meta14)
meta15 = metaObject()
meta15.setName("reference")
meta15.setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.avi")

head1.addMeta(meta15)
meta16 = metaObject()
meta16.setName("reference")
meta16.setContent("http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d")

head1.addMeta(meta16)
meta17 = metaObject()
meta17.setName("identifier")
meta17.setContent("http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d")

head1.addMeta(meta17)
meta18 = metaObject()
meta18.setName("identifier")
meta18.setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d")

head1.addMeta(meta18)
meta19 = metaObject()
meta19.setName("generator")
meta19.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta19)
meta20 = metaObject()
meta20.setName("license")
meta20.setContent("../license.html")

head1.addMeta(meta20)

head1.addComments(CommentsBlock("""TODO warn if more than one identifier present"""))
X3D0.setHead(head1)
Scene21 = SceneObject()


Scene21.addComments(CommentsBlock("""=============== Camera =============="""))
ExternProtoDeclare22 = ExternProtoDeclareObject()
ExternProtoDeclare22.setName("Camera")
ExternProtoDeclare22.setAppinfo("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images")
ExternProtoDeclare22.setUrl(["CameraPrototypes.x3d#Camera","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#Camera","CameraPrototypes.wrl#Camera","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#Camera"])


ExternProtoDeclare22.addComments(CommentsBlock("""Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields"""))
field23 = fieldObject()
field23.setType(fieldObject.TYPE_SFSTRING)
field23.setName("description")
field23.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field23.setAppinfo("Text description to be displayed for this Camera")

ExternProtoDeclare22.addField(field23)
field24 = fieldObject()
field24.setType(fieldObject.TYPE_SFVEC3F)
field24.setName("position")
field24.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field24.setAppinfo("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated")

ExternProtoDeclare22.addField(field24)
field25 = fieldObject()
field25.setType(fieldObject.TYPE_SFROTATION)
field25.setName("orientation")
field25.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field25.setAppinfo("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated")

ExternProtoDeclare22.addField(field25)
field26 = fieldObject()
field26.setType(fieldObject.TYPE_SFFLOAT)
field26.setName("fieldOfView")
field26.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field26.setAppinfo("pi/4")

ExternProtoDeclare22.addField(field26)
field27 = fieldObject()
field27.setType(fieldObject.TYPE_SFFLOAT)
field27.setName("set_fraction")
field27.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field27.setAppinfo("input fraction drives interpolators")

ExternProtoDeclare22.addField(field27)
field28 = fieldObject()
field28.setType(fieldObject.TYPE_SFBOOL)
field28.setName("set_bind")
field28.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field28.setAppinfo("input event binds or unbinds this Camera")

ExternProtoDeclare22.addField(field28)
field29 = fieldObject()
field29.setType(fieldObject.TYPE_SFTIME)
field29.setName("bindTime")
field29.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field29.setAppinfo("output event indicates when this Camera is bound")

ExternProtoDeclare22.addField(field29)
field30 = fieldObject()
field30.setType(fieldObject.TYPE_SFBOOL)
field30.setName("isBound")
field30.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field30.setAppinfo("output event indicates whether this Camera is bound or unbound")

ExternProtoDeclare22.addField(field30)
field31 = fieldObject()
field31.setType(fieldObject.TYPE_SFFLOAT)
field31.setName("nearClipPlane")
field31.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field31.setAppinfo("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]")

ExternProtoDeclare22.addField(field31)
field32 = fieldObject()
field32.setType(fieldObject.TYPE_SFFLOAT)
field32.setName("farClipPlane")
field32.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field32.setAppinfo("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit")

ExternProtoDeclare22.addField(field32)
field33 = fieldObject()
field33.setType(fieldObject.TYPE_MFNODE)
field33.setName("shots")
field33.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field33.setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes")

ExternProtoDeclare22.addField(field33)
field34 = fieldObject()
field34.setType(fieldObject.TYPE_SFBOOL)
field34.setName("headlight")
field34.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field34.setAppinfo("Whether camera headlight is on or off")

ExternProtoDeclare22.addField(field34)
field35 = fieldObject()
field35.setType(fieldObject.TYPE_SFCOLOR)
field35.setName("headlightColor")
field35.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field35.setAppinfo("Camera headlight color")

ExternProtoDeclare22.addField(field35)
field36 = fieldObject()
field36.setType(fieldObject.TYPE_SFFLOAT)
field36.setName("headlightIntensity")
field36.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field36.setAppinfo("Camera headlight intensity")

ExternProtoDeclare22.addField(field36)
field37 = fieldObject()
field37.setType(fieldObject.TYPE_SFCOLOR)
field37.setName("filterColor")
field37.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field37.setAppinfo("Camera filter color that modifies virtual lens capture")

ExternProtoDeclare22.addField(field37)
field38 = fieldObject()
field38.setType(fieldObject.TYPE_SFFLOAT)
field38.setName("filterTransparency")
field38.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field38.setAppinfo("Camera filter transparency that modifies virtual lens capture")

ExternProtoDeclare22.addField(field38)
field39 = fieldObject()
field39.setType(fieldObject.TYPE_SFVEC3F)
field39.setName("upVector")
field39.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field39.setAppinfo("upVector changes modify camera orientation (and possibly vice versa)")

ExternProtoDeclare22.addField(field39)
field40 = fieldObject()
field40.setType(fieldObject.TYPE_SFFLOAT)
field40.setName("fStop")
field40.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field40.setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")

ExternProtoDeclare22.addField(field40)
field41 = fieldObject()
field41.setType(fieldObject.TYPE_SFFLOAT)
field41.setName("focusDistance")
field41.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field41.setAppinfo("Distance to focal plane of sharpest focus")

ExternProtoDeclare22.addField(field41)
field42 = fieldObject()
field42.setType(fieldObject.TYPE_SFBOOL)
field42.setName("isActive")
field42.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field42.setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")

ExternProtoDeclare22.addField(field42)
field43 = fieldObject()
field43.setType(fieldObject.TYPE_SFTIME)
field43.setName("totalDuration")
field43.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field43.setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations")

ExternProtoDeclare22.addField(field43)
field44 = fieldObject()
field44.setType(fieldObject.TYPE_SFNODE)
field44.setName("offlineRender")
field44.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field44.setAppinfo("OfflineRender node")

ExternProtoDeclare22.addField(field44)
field45 = fieldObject()
field45.setType(fieldObject.TYPE_SFBOOL)
field45.setName("traceEnabled")
field45.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field45.setAppinfo("enable console output to trace script computations and prototype progress")

ExternProtoDeclare22.addField(field45)
Scene21.addChild(ExternProtoDeclare22)

Scene21.addComments(CommentsBlock("""=============== CameraShot =============="""))
ExternProtoDeclare46 = ExternProtoDeclareObject()
ExternProtoDeclare46.setName("CameraShot")
ExternProtoDeclare46.setAppinfo("CameraShot collects a specific set of CameraMovement animations that make up an individual shot")
ExternProtoDeclare46.setUrl(["CameraPrototypes.x3d#CameraShot","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraShot","CameraPrototypes.wrl#CameraShot","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraShot"])

field47 = fieldObject()
field47.setType(fieldObject.TYPE_SFSTRING)
field47.setName("description")
field47.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field47.setAppinfo("Text description to be displayed for this CameraShot")

ExternProtoDeclare46.addField(field47)
field48 = fieldObject()
field48.setType(fieldObject.TYPE_SFBOOL)
field48.setName("enabled")
field48.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field48.setAppinfo("Whether this CameraShot can be activated")

ExternProtoDeclare46.addField(field48)
field49 = fieldObject()
field49.setType(fieldObject.TYPE_MFNODE)
field49.setName("moves")
field49.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field49.setAppinfo("Set of CameraMovement nodes")


field49.addComments(CommentsBlock("""initializing CameraMovement nodes are inserted here by scene author using ProtoInstance"""))
ExternProtoDeclare46.addField(field49)
field50 = fieldObject()
field50.setType(fieldObject.TYPE_SFVEC3F)
field50.setName("initialPosition")
field50.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field50.setAppinfo("Setup to reinitialize camera position for this shot")

ExternProtoDeclare46.addField(field50)
field51 = fieldObject()
field51.setType(fieldObject.TYPE_SFROTATION)
field51.setName("initialOrientation")
field51.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field51.setAppinfo("Setup to reinitialize camera rotation for this shot")

ExternProtoDeclare46.addField(field51)
field52 = fieldObject()
field52.setType(fieldObject.TYPE_SFVEC3F)
field52.setName("initialAimPoint")
field52.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field52.setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot")

ExternProtoDeclare46.addField(field52)
field53 = fieldObject()
field53.setType(fieldObject.TYPE_SFFLOAT)
field53.setName("initialFieldOfView")
field53.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field53.setAppinfo("pi/4")

ExternProtoDeclare46.addField(field53)
field54 = fieldObject()
field54.setType(fieldObject.TYPE_SFFLOAT)
field54.setName("initialFStop")
field54.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field54.setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")

ExternProtoDeclare46.addField(field54)
field55 = fieldObject()
field55.setType(fieldObject.TYPE_SFFLOAT)
field55.setName("initialFocusDistance")
field55.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field55.setAppinfo("Distance to focal plane of sharpest focus")

ExternProtoDeclare46.addField(field55)
field56 = fieldObject()
field56.setType(fieldObject.TYPE_SFTIME)
field56.setName("shotDuration")
field56.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field56.setAppinfo("Subtotal duration of contained CameraMovement move durations")

ExternProtoDeclare46.addField(field56)
field57 = fieldObject()
field57.setType(fieldObject.TYPE_SFBOOL)
field57.setName("isActive")
field57.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field57.setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")

ExternProtoDeclare46.addField(field57)
field58 = fieldObject()
field58.setType(fieldObject.TYPE_SFBOOL)
field58.setName("traceEnabled")
field58.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field58.setAppinfo("enable console output to trace script computations and prototype progress")

ExternProtoDeclare46.addField(field58)
Scene21.addChild(ExternProtoDeclare46)

Scene21.addComments(CommentsBlock("""=============== CameraMovement =============="""))
ExternProtoDeclare59 = ExternProtoDeclareObject()
ExternProtoDeclare59.setName("CameraMovement")
ExternProtoDeclare59.setAppinfo("CameraMovement defines a single camera movement animation")
ExternProtoDeclare59.setUrl(["CameraPrototypes.x3d#CameraMovement","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraMovement","CameraPrototypes.wrl#CameraMovement","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraMovement"])

field60 = fieldObject()
field60.setType(fieldObject.TYPE_SFSTRING)
field60.setName("description")
field60.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field60.setAppinfo("Text description to be displayed for this CameraMovement")

ExternProtoDeclare59.addField(field60)
field61 = fieldObject()
field61.setType(fieldObject.TYPE_SFBOOL)
field61.setName("enabled")
field61.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field61.setAppinfo("Whether this CameraMovement can be activated")

ExternProtoDeclare59.addField(field61)
field62 = fieldObject()
field62.setType(fieldObject.TYPE_SFFLOAT)
field62.setName("duration")
field62.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field62.setAppinfo("Duration in seconds for this move")

ExternProtoDeclare59.addField(field62)
field63 = fieldObject()
field63.setType(fieldObject.TYPE_SFVEC3F)
field63.setName("goalPosition")
field63.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field63.setAppinfo("Goal camera position for this move")

ExternProtoDeclare59.addField(field63)
field64 = fieldObject()
field64.setType(fieldObject.TYPE_SFROTATION)
field64.setName("goalOrientation")
field64.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field64.setAppinfo("Goal camera rotation for this move")

ExternProtoDeclare59.addField(field64)
field65 = fieldObject()
field65.setType(fieldObject.TYPE_SFBOOL)
field65.setName("tracking")
field65.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field65.setAppinfo("Whether or not camera direction is tracking towards the aimPoint")

ExternProtoDeclare59.addField(field65)
field66 = fieldObject()
field66.setType(fieldObject.TYPE_SFVEC3F)
field66.setName("goalAimPoint")
field66.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field66.setAppinfo("Goal aimPoint for this move, ignored if tracking=false")

ExternProtoDeclare59.addField(field66)
field67 = fieldObject()
field67.setType(fieldObject.TYPE_SFFLOAT)
field67.setName("goalFieldOfView")
field67.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field67.setAppinfo("Goal fieldOfView for this move")

ExternProtoDeclare59.addField(field67)
field68 = fieldObject()
field68.setType(fieldObject.TYPE_SFFLOAT)
field68.setName("goalFStop")
field68.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field68.setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")

ExternProtoDeclare59.addField(field68)
field69 = fieldObject()
field69.setType(fieldObject.TYPE_SFFLOAT)
field69.setName("goalFocusDistance")
field69.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field69.setAppinfo("Distance to focal plane of sharpest focus")

ExternProtoDeclare59.addField(field69)
field70 = fieldObject()
field70.setType(fieldObject.TYPE_SFBOOL)
field70.setName("isActive")
field70.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field70.setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")

ExternProtoDeclare59.addField(field70)
field71 = fieldObject()
field71.setType(fieldObject.TYPE_SFBOOL)
field71.setName("traceEnabled")
field71.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field71.setAppinfo("enable console output to trace script computations and prototype progress")

ExternProtoDeclare59.addField(field71)
Scene21.addChild(ExternProtoDeclare59)

Scene21.addComments(CommentsBlock("""=============== OfflineRender =============="""))
ExternProtoDeclare72 = ExternProtoDeclareObject()
ExternProtoDeclare72.setName("OfflineRender")
ExternProtoDeclare72.setAppinfo("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)")
ExternProtoDeclare72.setUrl(["CameraPrototypes.x3d#OfflineRender","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#OfflineRender","CameraPrototypes.wrl#OfflineRender","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#OfflineRender"])


ExternProtoDeclare72.addComments(CommentsBlock("""TODO non-photorealistic rendering (NPR) parameters"""))
field73 = fieldObject()
field73.setType(fieldObject.TYPE_SFSTRING)
field73.setName("description")
field73.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field73.setAppinfo("Text description to be displayed for this OfflineRender")

ExternProtoDeclare72.addField(field73)
field74 = fieldObject()
field74.setType(fieldObject.TYPE_SFBOOL)
field74.setName("enabled")
field74.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field74.setAppinfo("Whether this OfflineRender can be activated")

ExternProtoDeclare72.addField(field74)
field75 = fieldObject()
field75.setType(fieldObject.TYPE_SFFLOAT)
field75.setName("frameRate")
field75.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field75.setAppinfo("Frames per second recorded for this rendering")

ExternProtoDeclare72.addField(field75)
field76 = fieldObject()
field76.setType(fieldObject.TYPE_SFVEC2F)
field76.setName("frameSize")
field76.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field76.setAppinfo("Size of frame in number of pixels width and height")

ExternProtoDeclare72.addField(field76)
field77 = fieldObject()
field77.setType(fieldObject.TYPE_SFFLOAT)
field77.setName("pixelAspectRatio")
field77.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field77.setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1")

ExternProtoDeclare72.addField(field77)
field78 = fieldObject()
field78.setType(fieldObject.TYPE_SFTIME)
field78.setName("set_startTime")
field78.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field78.setAppinfo("Begin render operation")

ExternProtoDeclare72.addField(field78)
field79 = fieldObject()
field79.setType(fieldObject.TYPE_SFFLOAT)
field79.setName("progress")
field79.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field79.setAppinfo("Progress performing render operation (0..1)")

ExternProtoDeclare72.addField(field79)
field80 = fieldObject()
field80.setType(fieldObject.TYPE_SFTIME)
field80.setName("renderCompleteTime")
field80.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field80.setAppinfo("Render operation complete")

ExternProtoDeclare72.addField(field80)
field81 = fieldObject()
field81.setType(fieldObject.TYPE_MFSTRING)
field81.setName("movieFormat")
field81.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field81.setAppinfo("Format of rendered output movie (mpeg mp4 etc.), use first supported format")

ExternProtoDeclare72.addField(field81)
field82 = fieldObject()
field82.setType(fieldObject.TYPE_MFSTRING)
field82.setName("imageFormat")
field82.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field82.setAppinfo("Format of rendered output images (png jpeg gif tiff etc.) use first supported format")

ExternProtoDeclare72.addField(field82)
field83 = fieldObject()
field83.setType(fieldObject.TYPE_SFBOOL)
field83.setName("traceEnabled")
field83.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field83.setAppinfo("enable console output to trace script computations and prototype progress")

ExternProtoDeclare72.addField(field83)
Scene21.addChild(ExternProtoDeclare72)

Scene21.addComments(CommentsBlock("""=============== Lights, camera, action! =============="""))
DirectionalLight84 = DirectionalLightObject()
DirectionalLight84.setDirection([0,-1,0])
DirectionalLight84.setGlobal(True)
DirectionalLight84.setIntensity(0.8)

Scene21.addChild(DirectionalLight84)
NavigationInfo85 = NavigationInfoObject()
NavigationInfo85.setType(["EXAMINE","FLY","ANY"])

Scene21.addChild(NavigationInfo85)
Viewpoint86 = ViewpointObject()
Viewpoint86.setDescription("Camera test scene entry view")
Viewpoint86.setPosition([0,2,12])

Scene21.addChild(Viewpoint86)
Viewpoint87 = ViewpointObject()
Viewpoint87.setDescription("Camera test scene from above")
Viewpoint87.setOrientation([1,0,0,-1.57079])
Viewpoint87.setPosition([0,150,0])

Scene21.addChild(Viewpoint87)

Scene21.addComments(CommentsBlock("""Keep prototype instances in same file while developing, then move later"""))

Scene21.addComments(CommentsBlock("""We will create examples matching those in the paper"""))

Scene21.addComments(CommentsBlock("""=============== Camera.SimpleShotsTest =============="""))
ProtoInstance88 = ProtoInstanceObject()
ProtoInstance88.setName("Camera")
ProtoInstance88.setDEF("Camera.SimpleShotsTest")

fieldValue89 = fieldValueObject()
fieldValue89.setName("description")
fieldValue89.setValue("SimpleShotsTest for camera Zoom Dolly Pan Boom and Tilt")

ProtoInstance88.addFieldValue(fieldValue89)
fieldValue90 = fieldValueObject()
fieldValue90.setName("headlight")
fieldValue90.setValue("true")

ProtoInstance88.addFieldValue(fieldValue90)
fieldValue91 = fieldValueObject()
fieldValue91.setName("position")
fieldValue91.setValue("-4 4 10")

ProtoInstance88.addFieldValue(fieldValue91)
fieldValue92 = fieldValueObject()
fieldValue92.setName("shots")

ProtoInstance93 = ProtoInstanceObject()
ProtoInstance93.setName("CameraShot")
ProtoInstance93.setDEF("Zoom")

fieldValue94 = fieldValueObject()
fieldValue94.setName("description")
fieldValue94.setValue("Simple shot of Camera Zoom")

ProtoInstance93.addFieldValue(fieldValue94)
fieldValue95 = fieldValueObject()
fieldValue95.setName("initialPosition")
fieldValue95.setValue("-50 1 -10")

ProtoInstance93.addFieldValue(fieldValue95)
fieldValue96 = fieldValueObject()
fieldValue96.setName("initialOrientation")
fieldValue96.setValue("0 1 0 0")

ProtoInstance93.addFieldValue(fieldValue96)
fieldValue97 = fieldValueObject()
fieldValue97.setName("moves")

ProtoInstance98 = ProtoInstanceObject()
ProtoInstance98.setName("CameraMovement")

fieldValue99 = fieldValueObject()
fieldValue99.setName("description")
fieldValue99.setValue("Camera Zoom In")

ProtoInstance98.addFieldValue(fieldValue99)
fieldValue100 = fieldValueObject()
fieldValue100.setName("duration")
fieldValue100.setValue("3")

ProtoInstance98.addFieldValue(fieldValue100)
fieldValue101 = fieldValueObject()
fieldValue101.setName("goalPosition")
fieldValue101.setValue("-50 1 -15")

ProtoInstance98.addFieldValue(fieldValue101)
fieldValue102 = fieldValueObject()
fieldValue102.setName("goalOrientation")
fieldValue102.setValue("0 1 0 0")

ProtoInstance98.addFieldValue(fieldValue102)
fieldValue97.addChild(ProtoInstance98)
ProtoInstance103 = ProtoInstanceObject()
ProtoInstance103.setName("CameraMovement")

fieldValue104 = fieldValueObject()
fieldValue104.setName("description")
fieldValue104.setValue("Camera Zoom Out")

ProtoInstance103.addFieldValue(fieldValue104)
fieldValue105 = fieldValueObject()
fieldValue105.setName("duration")
fieldValue105.setValue("3")

ProtoInstance103.addFieldValue(fieldValue105)
fieldValue106 = fieldValueObject()
fieldValue106.setName("goalPosition")
fieldValue106.setValue("-50 1 -10")

ProtoInstance103.addFieldValue(fieldValue106)
fieldValue107 = fieldValueObject()
fieldValue107.setName("goalOrientation")
fieldValue107.setValue("0 1 0 0")

ProtoInstance103.addFieldValue(fieldValue107)
fieldValue97.addChild(ProtoInstance103)
ProtoInstance108 = ProtoInstanceObject()
ProtoInstance108.setName("CameraMovement")

fieldValue109 = fieldValueObject()
fieldValue109.setName("description")
fieldValue109.setValue("Camera Pause")

ProtoInstance108.addFieldValue(fieldValue109)
fieldValue110 = fieldValueObject()
fieldValue110.setName("duration")
fieldValue110.setValue("1")

ProtoInstance108.addFieldValue(fieldValue110)
fieldValue111 = fieldValueObject()
fieldValue111.setName("goalPosition")
fieldValue111.setValue("-50 1 -10")

ProtoInstance108.addFieldValue(fieldValue111)
fieldValue112 = fieldValueObject()
fieldValue112.setName("goalOrientation")
fieldValue112.setValue("0 1 0 0")

ProtoInstance108.addFieldValue(fieldValue112)
fieldValue97.addChild(ProtoInstance108)
ProtoInstance93.addFieldValue(fieldValue97)
fieldValue92.addChild(ProtoInstance93)
ProtoInstance113 = ProtoInstanceObject()
ProtoInstance113.setName("CameraShot")
ProtoInstance113.setDEF("Dolly")

fieldValue114 = fieldValueObject()
fieldValue114.setName("description")
fieldValue114.setValue("Simple shot of Camera Dolly")

ProtoInstance113.addFieldValue(fieldValue114)
fieldValue115 = fieldValueObject()
fieldValue115.setName("initialPosition")
fieldValue115.setValue("-40 1 -10")

ProtoInstance113.addFieldValue(fieldValue115)
fieldValue116 = fieldValueObject()
fieldValue116.setName("initialOrientation")
fieldValue116.setValue("0 1 0 0")

ProtoInstance113.addFieldValue(fieldValue116)
fieldValue117 = fieldValueObject()
fieldValue117.setName("moves")

ProtoInstance118 = ProtoInstanceObject()
ProtoInstance118.setName("CameraMovement")
ProtoInstance118.setDEF("DollyMove1")

fieldValue119 = fieldValueObject()
fieldValue119.setName("description")
fieldValue119.setValue("Camera Dolly from Right to Left")

ProtoInstance118.addFieldValue(fieldValue119)
fieldValue120 = fieldValueObject()
fieldValue120.setName("duration")
fieldValue120.setValue("3")

ProtoInstance118.addFieldValue(fieldValue120)
fieldValue121 = fieldValueObject()
fieldValue121.setName("goalPosition")
fieldValue121.setValue("-45 1 -10")

ProtoInstance118.addFieldValue(fieldValue121)
fieldValue122 = fieldValueObject()
fieldValue122.setName("goalOrientation")
fieldValue122.setValue("0 1 0 0")

ProtoInstance118.addFieldValue(fieldValue122)
fieldValue117.addChild(ProtoInstance118)
ProtoInstance123 = ProtoInstanceObject()
ProtoInstance123.setName("CameraMovement")

fieldValue124 = fieldValueObject()
fieldValue124.setName("description")
fieldValue124.setValue("Camera Dolly from Left to Right")

ProtoInstance123.addFieldValue(fieldValue124)
fieldValue125 = fieldValueObject()
fieldValue125.setName("duration")
fieldValue125.setValue("3")

ProtoInstance123.addFieldValue(fieldValue125)
fieldValue126 = fieldValueObject()
fieldValue126.setName("goalPosition")
fieldValue126.setValue("-40 1 -10")

ProtoInstance123.addFieldValue(fieldValue126)
fieldValue127 = fieldValueObject()
fieldValue127.setName("goalOrientation")
fieldValue127.setValue("0 1 0 0")

ProtoInstance123.addFieldValue(fieldValue127)
fieldValue117.addChild(ProtoInstance123)
ProtoInstance128 = ProtoInstanceObject()
ProtoInstance128.setName("CameraMovement")

fieldValue129 = fieldValueObject()
fieldValue129.setName("description")
fieldValue129.setValue("Camera Pause")

ProtoInstance128.addFieldValue(fieldValue129)
fieldValue130 = fieldValueObject()
fieldValue130.setName("duration")
fieldValue130.setValue("1")

ProtoInstance128.addFieldValue(fieldValue130)
fieldValue131 = fieldValueObject()
fieldValue131.setName("goalPosition")
fieldValue131.setValue("-40 1 -10")

ProtoInstance128.addFieldValue(fieldValue131)
fieldValue132 = fieldValueObject()
fieldValue132.setName("goalOrientation")
fieldValue132.setValue("0 1 0 0")

ProtoInstance128.addFieldValue(fieldValue132)
fieldValue117.addChild(ProtoInstance128)
ProtoInstance113.addFieldValue(fieldValue117)
fieldValue92.addChild(ProtoInstance113)
ProtoInstance133 = ProtoInstanceObject()
ProtoInstance133.setName("CameraShot")
ProtoInstance133.setDEF("Pan")

fieldValue134 = fieldValueObject()
fieldValue134.setName("description")
fieldValue134.setValue("Simple shot of Camera Pan left right and back to center")

ProtoInstance133.addFieldValue(fieldValue134)
fieldValue135 = fieldValueObject()
fieldValue135.setName("initialPosition")
fieldValue135.setValue("-30 1 -10")

ProtoInstance133.addFieldValue(fieldValue135)
fieldValue136 = fieldValueObject()
fieldValue136.setName("initialOrientation")
fieldValue136.setValue("0 1 0 0")

ProtoInstance133.addFieldValue(fieldValue136)
fieldValue137 = fieldValueObject()
fieldValue137.setName("moves")

ProtoInstance138 = ProtoInstanceObject()
ProtoInstance138.setName("CameraMovement")
ProtoInstance138.setDEF("PanLeft")

fieldValue139 = fieldValueObject()
fieldValue139.setName("description")
fieldValue139.setValue("Pan Left")

ProtoInstance138.addFieldValue(fieldValue139)
fieldValue140 = fieldValueObject()
fieldValue140.setName("duration")
fieldValue140.setValue("2")

ProtoInstance138.addFieldValue(fieldValue140)
fieldValue141 = fieldValueObject()
fieldValue141.setName("goalPosition")
fieldValue141.setValue("-30 1 -10")

ProtoInstance138.addFieldValue(fieldValue141)
fieldValue142 = fieldValueObject()
fieldValue142.setName("goalOrientation")
fieldValue142.setValue("0 1 0 0.4")

ProtoInstance138.addFieldValue(fieldValue142)
fieldValue137.addChild(ProtoInstance138)
ProtoInstance143 = ProtoInstanceObject()
ProtoInstance143.setName("CameraMovement")
ProtoInstance143.setDEF("PanRight")

fieldValue144 = fieldValueObject()
fieldValue144.setName("description")
fieldValue144.setValue("Pan Right")

ProtoInstance143.addFieldValue(fieldValue144)
fieldValue145 = fieldValueObject()
fieldValue145.setName("duration")
fieldValue145.setValue("3")

ProtoInstance143.addFieldValue(fieldValue145)
fieldValue146 = fieldValueObject()
fieldValue146.setName("goalPosition")
fieldValue146.setValue("-30 1 -10")

ProtoInstance143.addFieldValue(fieldValue146)
fieldValue147 = fieldValueObject()
fieldValue147.setName("goalOrientation")
fieldValue147.setValue("0 1 0 -0.4")

ProtoInstance143.addFieldValue(fieldValue147)
fieldValue137.addChild(ProtoInstance143)
ProtoInstance148 = ProtoInstanceObject()
ProtoInstance148.setName("CameraMovement")

fieldValue149 = fieldValueObject()
fieldValue149.setName("description")
fieldValue149.setValue("Camera Pan back to Center")

ProtoInstance148.addFieldValue(fieldValue149)
fieldValue150 = fieldValueObject()
fieldValue150.setName("duration")
fieldValue150.setValue("2")

ProtoInstance148.addFieldValue(fieldValue150)
fieldValue151 = fieldValueObject()
fieldValue151.setName("goalPosition")
fieldValue151.setValue("-30 1 -10")

ProtoInstance148.addFieldValue(fieldValue151)
fieldValue152 = fieldValueObject()
fieldValue152.setName("goalOrientation")
fieldValue152.setValue("0 1 0 0")

ProtoInstance148.addFieldValue(fieldValue152)
fieldValue137.addChild(ProtoInstance148)
ProtoInstance153 = ProtoInstanceObject()
ProtoInstance153.setName("CameraMovement")

fieldValue154 = fieldValueObject()
fieldValue154.setName("description")
fieldValue154.setValue("Camera Pause")

ProtoInstance153.addFieldValue(fieldValue154)
fieldValue155 = fieldValueObject()
fieldValue155.setName("duration")
fieldValue155.setValue("2")

ProtoInstance153.addFieldValue(fieldValue155)
fieldValue156 = fieldValueObject()
fieldValue156.setName("goalPosition")
fieldValue156.setValue("-30 1 -10")

ProtoInstance153.addFieldValue(fieldValue156)
fieldValue157 = fieldValueObject()
fieldValue157.setName("goalOrientation")
fieldValue157.setValue("0 1 0 0")

ProtoInstance153.addFieldValue(fieldValue157)
fieldValue137.addChild(ProtoInstance153)
ProtoInstance133.addFieldValue(fieldValue137)
fieldValue92.addChild(ProtoInstance133)
ProtoInstance158 = ProtoInstanceObject()
ProtoInstance158.setName("CameraShot")
ProtoInstance158.setDEF("CameraBoom")

fieldValue159 = fieldValueObject()
fieldValue159.setName("description")
fieldValue159.setValue("Camera Boom")

ProtoInstance158.addFieldValue(fieldValue159)
fieldValue160 = fieldValueObject()
fieldValue160.setName("initialPosition")
fieldValue160.setValue("-20 1 -10")

ProtoInstance158.addFieldValue(fieldValue160)
fieldValue161 = fieldValueObject()
fieldValue161.setName("initialOrientation")
fieldValue161.setValue("0 1 0 0")

ProtoInstance158.addFieldValue(fieldValue161)
fieldValue162 = fieldValueObject()
fieldValue162.setName("moves")

ProtoInstance163 = ProtoInstanceObject()
ProtoInstance163.setName("CameraMovement")
ProtoInstance163.setDEF("CameraBoomUp")

fieldValue164 = fieldValueObject()
fieldValue164.setName("description")
fieldValue164.setValue("Camera Boom Up")

ProtoInstance163.addFieldValue(fieldValue164)
fieldValue165 = fieldValueObject()
fieldValue165.setName("duration")
fieldValue165.setValue("3")

ProtoInstance163.addFieldValue(fieldValue165)
fieldValue166 = fieldValueObject()
fieldValue166.setName("goalPosition")
fieldValue166.setValue("-20 5 -10")

ProtoInstance163.addFieldValue(fieldValue166)
fieldValue167 = fieldValueObject()
fieldValue167.setName("goalOrientation")
fieldValue167.setValue("0 1 0 0")

ProtoInstance163.addFieldValue(fieldValue167)
fieldValue162.addChild(ProtoInstance163)
ProtoInstance168 = ProtoInstanceObject()
ProtoInstance168.setName("CameraMovement")
ProtoInstance168.setDEF("BoomDown")

fieldValue169 = fieldValueObject()
fieldValue169.setName("description")
fieldValue169.setValue("Camera Boom Down")

ProtoInstance168.addFieldValue(fieldValue169)
fieldValue170 = fieldValueObject()
fieldValue170.setName("duration")
fieldValue170.setValue("3")

ProtoInstance168.addFieldValue(fieldValue170)
fieldValue171 = fieldValueObject()
fieldValue171.setName("goalPosition")
fieldValue171.setValue("-20 1 -10")

ProtoInstance168.addFieldValue(fieldValue171)
fieldValue172 = fieldValueObject()
fieldValue172.setName("goalOrientation")
fieldValue172.setValue("0 1 0 0")

ProtoInstance168.addFieldValue(fieldValue172)
fieldValue162.addChild(ProtoInstance168)
ProtoInstance173 = ProtoInstanceObject()
ProtoInstance173.setName("CameraMovement")
ProtoInstance173.setDEF("BoomPause")

fieldValue174 = fieldValueObject()
fieldValue174.setName("description")
fieldValue174.setValue("Camera Pause")

ProtoInstance173.addFieldValue(fieldValue174)
fieldValue175 = fieldValueObject()
fieldValue175.setName("duration")
fieldValue175.setValue("2")

ProtoInstance173.addFieldValue(fieldValue175)
fieldValue176 = fieldValueObject()
fieldValue176.setName("goalPosition")
fieldValue176.setValue("-20 1 -10")

ProtoInstance173.addFieldValue(fieldValue176)
fieldValue177 = fieldValueObject()
fieldValue177.setName("goalOrientation")
fieldValue177.setValue("0 1 0 0")

ProtoInstance173.addFieldValue(fieldValue177)
fieldValue162.addChild(ProtoInstance173)
ProtoInstance158.addFieldValue(fieldValue162)
fieldValue92.addChild(ProtoInstance158)
ProtoInstance178 = ProtoInstanceObject()
ProtoInstance178.setName("CameraShot")
ProtoInstance178.setDEF("CameraTilt")

fieldValue179 = fieldValueObject()
fieldValue179.setName("description")
fieldValue179.setValue("Camera Tilt")

ProtoInstance178.addFieldValue(fieldValue179)
fieldValue180 = fieldValueObject()
fieldValue180.setName("initialPosition")
fieldValue180.setValue("-10 1 -10")

ProtoInstance178.addFieldValue(fieldValue180)
fieldValue181 = fieldValueObject()
fieldValue181.setName("initialOrientation")
fieldValue181.setValue("0 0 1 0")

ProtoInstance178.addFieldValue(fieldValue181)
fieldValue182 = fieldValueObject()
fieldValue182.setName("traceEnabled")
fieldValue182.setValue("true")

ProtoInstance178.addFieldValue(fieldValue182)
fieldValue183 = fieldValueObject()
fieldValue183.setName("moves")

ProtoInstance184 = ProtoInstanceObject()
ProtoInstance184.setName("CameraMovement")

fieldValue185 = fieldValueObject()
fieldValue185.setName("description")
fieldValue185.setValue("Camera Tilt Pause")

ProtoInstance184.addFieldValue(fieldValue185)
fieldValue186 = fieldValueObject()
fieldValue186.setName("duration")
fieldValue186.setValue("1")

ProtoInstance184.addFieldValue(fieldValue186)
fieldValue187 = fieldValueObject()
fieldValue187.setName("goalPosition")
fieldValue187.setValue("-10 1 -10")

ProtoInstance184.addFieldValue(fieldValue187)
fieldValue188 = fieldValueObject()
fieldValue188.setName("goalOrientation")
fieldValue188.setValue("0 0 1 0")

ProtoInstance184.addFieldValue(fieldValue188)
fieldValue183.addChild(ProtoInstance184)
ProtoInstance189 = ProtoInstanceObject()
ProtoInstance189.setName("CameraMovement")
ProtoInstance189.setDEF("TiltDown")

fieldValue190 = fieldValueObject()
fieldValue190.setName("description")
fieldValue190.setValue("Camera Tilt Left")

ProtoInstance189.addFieldValue(fieldValue190)
fieldValue191 = fieldValueObject()
fieldValue191.setName("duration")
fieldValue191.setValue("3")

ProtoInstance189.addFieldValue(fieldValue191)
fieldValue192 = fieldValueObject()
fieldValue192.setName("goalPosition")
fieldValue192.setValue("-10 1 -10")

ProtoInstance189.addFieldValue(fieldValue192)
fieldValue193 = fieldValueObject()
fieldValue193.setName("goalOrientation")
fieldValue193.setValue("0 0 1 0.785")

ProtoInstance189.addFieldValue(fieldValue193)
fieldValue183.addChild(ProtoInstance189)
ProtoInstance194 = ProtoInstanceObject()
ProtoInstance194.setName("CameraMovement")
ProtoInstance194.setDEF("TiltPause")

fieldValue195 = fieldValueObject()
fieldValue195.setName("description")
fieldValue195.setValue("Camera Tilt Pause")

ProtoInstance194.addFieldValue(fieldValue195)
fieldValue196 = fieldValueObject()
fieldValue196.setName("duration")
fieldValue196.setValue("1")

ProtoInstance194.addFieldValue(fieldValue196)
fieldValue197 = fieldValueObject()
fieldValue197.setName("goalPosition")
fieldValue197.setValue("-10 1 -10")

ProtoInstance194.addFieldValue(fieldValue197)
fieldValue198 = fieldValueObject()
fieldValue198.setName("goalOrientation")
fieldValue198.setValue("0 0 1 0.785")

ProtoInstance194.addFieldValue(fieldValue198)
fieldValue183.addChild(ProtoInstance194)
ProtoInstance199 = ProtoInstanceObject()
ProtoInstance199.setName("CameraMovement")

fieldValue200 = fieldValueObject()
fieldValue200.setName("description")
fieldValue200.setValue("Camera Tilt Right")

ProtoInstance199.addFieldValue(fieldValue200)
fieldValue201 = fieldValueObject()
fieldValue201.setName("duration")
fieldValue201.setValue("3")

ProtoInstance199.addFieldValue(fieldValue201)
fieldValue202 = fieldValueObject()
fieldValue202.setName("goalPosition")
fieldValue202.setValue("-10 1 -10")

ProtoInstance199.addFieldValue(fieldValue202)
fieldValue203 = fieldValueObject()
fieldValue203.setName("goalOrientation")
fieldValue203.setValue("0 0 1 -0.785")

ProtoInstance199.addFieldValue(fieldValue203)
fieldValue183.addChild(ProtoInstance199)
ProtoInstance204 = ProtoInstanceObject()
ProtoInstance204.setName("CameraMovement")

fieldValue205 = fieldValueObject()
fieldValue205.setName("description")
fieldValue205.setValue("Camera Tilt Pause")

ProtoInstance204.addFieldValue(fieldValue205)
fieldValue206 = fieldValueObject()
fieldValue206.setName("duration")
fieldValue206.setValue("1")

ProtoInstance204.addFieldValue(fieldValue206)
fieldValue207 = fieldValueObject()
fieldValue207.setName("goalPosition")
fieldValue207.setValue("-10 1 -10")

ProtoInstance204.addFieldValue(fieldValue207)
fieldValue208 = fieldValueObject()
fieldValue208.setName("goalOrientation")
fieldValue208.setValue("0 0 1 -0.785")

ProtoInstance204.addFieldValue(fieldValue208)
fieldValue183.addChild(ProtoInstance204)
ProtoInstance209 = ProtoInstanceObject()
ProtoInstance209.setName("CameraMovement")
ProtoInstance209.setDEF("TiltReset")

fieldValue210 = fieldValueObject()
fieldValue210.setName("description")
fieldValue210.setValue("Camera Tilt Reset")

ProtoInstance209.addFieldValue(fieldValue210)
fieldValue211 = fieldValueObject()
fieldValue211.setName("duration")
fieldValue211.setValue("1")

ProtoInstance209.addFieldValue(fieldValue211)
fieldValue212 = fieldValueObject()
fieldValue212.setName("goalPosition")
fieldValue212.setValue("-10 1 -10")

ProtoInstance209.addFieldValue(fieldValue212)
fieldValue213 = fieldValueObject()
fieldValue213.setName("goalOrientation")
fieldValue213.setValue("0 0 1 0")

ProtoInstance209.addFieldValue(fieldValue213)
fieldValue183.addChild(ProtoInstance209)
ProtoInstance214 = ProtoInstanceObject()
ProtoInstance214.setName("CameraMovement")
ProtoInstance214.setDEF("TiltUp")

fieldValue215 = fieldValueObject()
fieldValue215.setName("description")
fieldValue215.setValue("Return to home")

ProtoInstance214.addFieldValue(fieldValue215)
fieldValue216 = fieldValueObject()
fieldValue216.setName("duration")
fieldValue216.setValue("2")

ProtoInstance214.addFieldValue(fieldValue216)
fieldValue217 = fieldValueObject()
fieldValue217.setName("goalPosition")
fieldValue217.setValue("0 2 12")

ProtoInstance214.addFieldValue(fieldValue217)
fieldValue218 = fieldValueObject()
fieldValue218.setName("goalOrientation")
fieldValue218.setValue("0 0 1 0")

ProtoInstance214.addFieldValue(fieldValue218)
fieldValue183.addChild(ProtoInstance214)
ProtoInstance178.addFieldValue(fieldValue183)
fieldValue92.addChild(ProtoInstance178)
ProtoInstance88.addFieldValue(fieldValue92)
Scene21.addChild(ProtoInstance88)
Group219 = GroupObject()
Group219.setDEF("AnimationGroup.SimpleShots")

TimeSensor220 = TimeSensorObject()
TimeSensor220.setDEF("CameraTimer.SimpleShots")

Group219.addChild(TimeSensor220)

Group219.addComments(CommentsBlock("""initialize clock to match totalDuration of combined Shot Moves"""))
ROUTE221 = ROUTEObject()
ROUTE221.setFromField("totalDuration")
ROUTE221.setFromNode("Camera.SimpleShotsTest")
ROUTE221.setToField("cycleInterval")
ROUTE221.setToNode("CameraTimer.SimpleShots")

Group219.addChild(ROUTE221)

Group219.addComments(CommentsBlock("""TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator"""))
ROUTE222 = ROUTEObject()
ROUTE222.setFromField("fraction_changed")
ROUTE222.setFromNode("CameraTimer.SimpleShots")
ROUTE222.setToField("set_fraction")
ROUTE222.setToNode("Camera.SimpleShotsTest")

Group219.addChild(ROUTE222)
Transform223 = TransformObject()
Transform223.setDEF("Trigger.SimpleShots")
Transform223.setTranslation([-4,4,0])

BooleanFilter224 = BooleanFilterObject()
BooleanFilter224.setDEF("TextTouchActive.SimpleShotsFilter")

Transform223.addChild(BooleanFilter224)
TouchSensor225 = TouchSensorObject()
TouchSensor225.setDEF("TextTouch.SimpleShots")
TouchSensor225.setDescription("touch to animate Camera SimpleShotsTest")

Transform223.addChild(TouchSensor225)
ROUTE226 = ROUTEObject()
ROUTE226.setFromField("inputTrue")
ROUTE226.setFromNode("TextTouchActive.SimpleShotsFilter")
ROUTE226.setToField("set_bind")
ROUTE226.setToNode("Camera.SimpleShotsTest")

Transform223.addChild(ROUTE226)
ROUTE227 = ROUTEObject()
ROUTE227.setFromField("isActive")
ROUTE227.setFromNode("TextTouch.SimpleShots")
ROUTE227.setToField("set_boolean")
ROUTE227.setToNode("TextTouchActive.SimpleShotsFilter")

Transform223.addChild(ROUTE227)
ROUTE228 = ROUTEObject()
ROUTE228.setFromField("touchTime")
ROUTE228.setFromNode("TextTouch.SimpleShots")
ROUTE228.setToField("startTime")
ROUTE228.setToNode("CameraTimer.SimpleShots")

Transform223.addChild(ROUTE228)
Shape229 = ShapeObject()

Text230 = TextObject()
Text230.setString(["Click to animate","SimpleShotsTest"])

FontStyle231 = FontStyleObject()
FontStyle231.setJustify(["MIDDLE","MIDDLE"])

Text230.setFontStyle(FontStyle231)
Shape229.setGeometry(Text230)
Appearance232 = AppearanceObject()

Material233 = MaterialObject()
Material233.setDEF("ArtDeco5")
Material233.setAmbientIntensity(0.24)
Material233.setDiffuseColor([0.945455,0.318988,0.321717])
Material233.setShininess(0.01)
Material233.setSpecularColor([0.072727,0.021705,0.010732])


Material233.addComments(CommentsBlock("""Universal Media Library: ArtDeco 5"""))
Appearance232.setMaterial(Material233)
Shape229.setAppearance(Appearance232)
Transform223.addChild(Shape229)

Transform223.addComments(CommentsBlock("""Simplify intersection test for user selecting text"""))
Shape234 = ShapeObject()
Shape234.setDEF("TransparentBox")

Appearance235 = AppearanceObject()

Material236 = MaterialObject()
Material236.setTransparency(1)

Appearance235.setMaterial(Material236)
Shape234.setAppearance(Appearance235)
Box237 = BoxObject()
Box237.setSize([6,2,0.0001])

Shape234.setGeometry(Box237)
Transform223.addChild(Shape234)
Group219.addChild(Transform223)
Scene21.addChild(Group219)
Group238 = GroupObject()
Group238.setDEF("SimpleShotsTargets")

Transform239 = TransformObject()
Transform239.setDEF("TargetBoxZoom")
Transform239.setTranslation([-50,1,-20])

Shape240 = ShapeObject()

Box241 = BoxObject()

Shape240.setGeometry(Box241)
Appearance242 = AppearanceObject()

Material243 = MaterialObject()

Appearance242.setMaterial(Material243)
ImageTexture244 = ImageTextureObject()
ImageTexture244.setUrl(["images/CameraMoveZoom.png","http://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveZoom.png"])

Appearance242.setTexture(ImageTexture244)
Shape240.setAppearance(Appearance242)
Transform239.addChild(Shape240)
Transform245 = TransformObject()
Transform245.setTranslation([0,2,0])

Shape246 = ShapeObject()

Text247 = TextObject()
Text247.setString(["Zoom in, out"])

FontStyle248 = FontStyleObject()
FontStyle248.setJustify(["MIDDLE","MIDDLE"])

Text247.setFontStyle(FontStyle248)
Shape246.setGeometry(Text247)
Appearance249 = AppearanceObject()

Material250 = MaterialObject()

Appearance249.setMaterial(Material250)
Shape246.setAppearance(Appearance249)
Transform245.addChild(Shape246)
Transform239.addChild(Transform245)
Group238.addChild(Transform239)
Transform251 = TransformObject()
Transform251.setDEF("TargetBoxDolly")
Transform251.setTranslation([-40,1,-20])

Shape252 = ShapeObject()

Box253 = BoxObject()

Shape252.setGeometry(Box253)
Appearance254 = AppearanceObject()

Material255 = MaterialObject()

Appearance254.setMaterial(Material255)
ImageTexture256 = ImageTextureObject()
ImageTexture256.setUrl(["images/CameraMoveDolly.png","http://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveDolly.png"])

Appearance254.setTexture(ImageTexture256)
Shape252.setAppearance(Appearance254)
Transform251.addChild(Shape252)
Transform257 = TransformObject()
Transform257.setTranslation([0,2,0])

Shape258 = ShapeObject()

Text259 = TextObject()
Text259.setString(["Dolly left, right"])

FontStyle260 = FontStyleObject()
FontStyle260.setJustify(["MIDDLE","MIDDLE"])

Text259.setFontStyle(FontStyle260)
Shape258.setGeometry(Text259)
Appearance261 = AppearanceObject()

Material262 = MaterialObject()

Appearance261.setMaterial(Material262)
Shape258.setAppearance(Appearance261)
Transform257.addChild(Shape258)
Transform251.addChild(Transform257)
Group238.addChild(Transform251)
Transform263 = TransformObject()
Transform263.setDEF("TargetBoxPan")
Transform263.setTranslation([-30,1,-20])

Shape264 = ShapeObject()

Box265 = BoxObject()

Shape264.setGeometry(Box265)
Appearance266 = AppearanceObject()

Material267 = MaterialObject()

Appearance266.setMaterial(Material267)
ImageTexture268 = ImageTextureObject()
ImageTexture268.setUrl(["images/CameraMovePan.png","http://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMovePan.png"])

Appearance266.setTexture(ImageTexture268)
Shape264.setAppearance(Appearance266)
Transform263.addChild(Shape264)
Transform269 = TransformObject()
Transform269.setTranslation([0,2,0])

Shape270 = ShapeObject()

Text271 = TextObject()
Text271.setString(["Pan left, right"])

FontStyle272 = FontStyleObject()
FontStyle272.setJustify(["MIDDLE","MIDDLE"])

Text271.setFontStyle(FontStyle272)
Shape270.setGeometry(Text271)
Appearance273 = AppearanceObject()

Material274 = MaterialObject()

Appearance273.setMaterial(Material274)
Shape270.setAppearance(Appearance273)
Transform269.addChild(Shape270)
Transform263.addChild(Transform269)
Group238.addChild(Transform263)
Transform275 = TransformObject()
Transform275.setDEF("TargetBoxBoom")
Transform275.setTranslation([-20,1,-20])

Shape276 = ShapeObject()

Box277 = BoxObject()

Shape276.setGeometry(Box277)
Appearance278 = AppearanceObject()

Material279 = MaterialObject()

Appearance278.setMaterial(Material279)
ImageTexture280 = ImageTextureObject()
ImageTexture280.setUrl(["images/CameraMoveBoom.png","http://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveBoom.png"])

Appearance278.setTexture(ImageTexture280)
Shape276.setAppearance(Appearance278)
Transform275.addChild(Shape276)
Transform281 = TransformObject()
Transform281.setTranslation([0,2,0])

Shape282 = ShapeObject()

Text283 = TextObject()
Text283.setString(["Boom up, down"])

FontStyle284 = FontStyleObject()
FontStyle284.setJustify(["MIDDLE","MIDDLE"])

Text283.setFontStyle(FontStyle284)
Shape282.setGeometry(Text283)
Appearance285 = AppearanceObject()

Material286 = MaterialObject()

Appearance285.setMaterial(Material286)
Shape282.setAppearance(Appearance285)
Transform281.addChild(Shape282)
Transform275.addChild(Transform281)
Group238.addChild(Transform275)
Transform287 = TransformObject()
Transform287.setDEF("TargetBoxTilt")
Transform287.setTranslation([-10,1,-20])

Shape288 = ShapeObject()

Box289 = BoxObject()

Shape288.setGeometry(Box289)
Appearance290 = AppearanceObject()

Material291 = MaterialObject()

Appearance290.setMaterial(Material291)
ImageTexture292 = ImageTextureObject()
ImageTexture292.setUrl(["images/CameraMoveTilt.png","http://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveTilt.png"])

Appearance290.setTexture(ImageTexture292)
Shape288.setAppearance(Appearance290)
Transform287.addChild(Shape288)
Transform293 = TransformObject()
Transform293.setTranslation([0,2,0])

Shape294 = ShapeObject()

Text295 = TextObject()
Text295.setString(["Tilt left, right"])

FontStyle296 = FontStyleObject()
FontStyle296.setJustify(["MIDDLE","MIDDLE"])

Text295.setFontStyle(FontStyle296)
Shape294.setGeometry(Text295)
Appearance297 = AppearanceObject()

Material298 = MaterialObject()

Appearance297.setMaterial(Material298)
Shape294.setAppearance(Appearance297)
Transform293.addChild(Shape294)
Transform287.addChild(Transform293)
Group238.addChild(Transform287)
Scene21.addChild(Group238)

Scene21.addComments(CommentsBlock("""=============== Camera.AimPointTest =============="""))
ProtoInstance299 = ProtoInstanceObject()
ProtoInstance299.setName("Camera")
ProtoInstance299.setDEF("Camera.AimPointTest")

fieldValue300 = fieldValueObject()
fieldValue300.setName("description")
fieldValue300.setValue("AimPointTest for moving camera tracking moving target")

ProtoInstance299.addFieldValue(fieldValue300)
fieldValue301 = fieldValueObject()
fieldValue301.setName("position")
fieldValue301.setValue("4 4 10")

ProtoInstance299.addFieldValue(fieldValue301)
fieldValue302 = fieldValueObject()
fieldValue302.setName("shots")

ProtoInstance303 = ProtoInstanceObject()
ProtoInstance303.setName("CameraShot")
ProtoInstance303.setDEF("Shot5")

fieldValue304 = fieldValueObject()
fieldValue304.setName("description")
fieldValue304.setValue("#3 Tracking shot")

ProtoInstance303.addFieldValue(fieldValue304)
fieldValue305 = fieldValueObject()
fieldValue305.setName("initialPosition")
fieldValue305.setValue("6 6 10")

ProtoInstance303.addFieldValue(fieldValue305)
fieldValue306 = fieldValueObject()
fieldValue306.setName("initialOrientation")
fieldValue306.setValue("0 1 0 0")

ProtoInstance303.addFieldValue(fieldValue306)
fieldValue307 = fieldValueObject()
fieldValue307.setName("moves")

ProtoInstance308 = ProtoInstanceObject()
ProtoInstance308.setName("CameraMovement")
ProtoInstance308.setDEF("MoveAimPoint3.1")

fieldValue309 = fieldValueObject()
fieldValue309.setName("description")
fieldValue309.setValue("AimPoint 3.1 moving BoxPath")

ProtoInstance308.addFieldValue(fieldValue309)
fieldValue310 = fieldValueObject()
fieldValue310.setName("tracking")
fieldValue310.setValue("true")

ProtoInstance308.addFieldValue(fieldValue310)
fieldValue311 = fieldValueObject()
fieldValue311.setName("duration")
fieldValue311.setValue("8")

ProtoInstance308.addFieldValue(fieldValue311)
fieldValue312 = fieldValueObject()
fieldValue312.setName("goalPosition")
fieldValue312.setValue("6 6 10")

ProtoInstance308.addFieldValue(fieldValue312)

ProtoInstance308.addComments(CommentsBlock("""goalAimPoint modified by ROUTE to match moving Box"""))
fieldValue307.addChild(ProtoInstance308)
ProtoInstance313 = ProtoInstanceObject()
ProtoInstance313.setName("CameraMovement")
ProtoInstance313.setDEF("MoveAimPoint3.2")

fieldValue314 = fieldValueObject()
fieldValue314.setName("description")
fieldValue314.setValue("AimPoint 3.2 pan right while tracking")

ProtoInstance313.addFieldValue(fieldValue314)
fieldValue315 = fieldValueObject()
fieldValue315.setName("tracking")
fieldValue315.setValue("true")

ProtoInstance313.addFieldValue(fieldValue315)
fieldValue316 = fieldValueObject()
fieldValue316.setName("duration")
fieldValue316.setValue("8")

ProtoInstance313.addFieldValue(fieldValue316)
fieldValue317 = fieldValueObject()
fieldValue317.setName("goalPosition")
fieldValue317.setValue("40 6 12")

ProtoInstance313.addFieldValue(fieldValue317)

ProtoInstance313.addComments(CommentsBlock("""goalAimPoint modified by ROUTE to match moving Box"""))
fieldValue307.addChild(ProtoInstance313)
ProtoInstance318 = ProtoInstanceObject()
ProtoInstance318.setName("CameraMovement")
ProtoInstance318.setDEF("MoveAimPoint3.3")

fieldValue319 = fieldValueObject()
fieldValue319.setName("description")
fieldValue319.setValue("AimPoint 3.3 boom up while tracking")

ProtoInstance318.addFieldValue(fieldValue319)
fieldValue320 = fieldValueObject()
fieldValue320.setName("tracking")
fieldValue320.setValue("true")

ProtoInstance318.addFieldValue(fieldValue320)
fieldValue321 = fieldValueObject()
fieldValue321.setName("duration")
fieldValue321.setValue("3")

ProtoInstance318.addFieldValue(fieldValue321)
fieldValue322 = fieldValueObject()
fieldValue322.setName("goalPosition")
fieldValue322.setValue("40 20 13")

ProtoInstance318.addFieldValue(fieldValue322)

ProtoInstance318.addComments(CommentsBlock("""goalAimPoint modified by ROUTE to match moving Box"""))
fieldValue307.addChild(ProtoInstance318)
ProtoInstance323 = ProtoInstanceObject()
ProtoInstance323.setName("CameraMovement")
ProtoInstance323.setDEF("MoveAimPoint3.4")

fieldValue324 = fieldValueObject()
fieldValue324.setName("description")
fieldValue324.setValue("AimPoint 3.4 restore camera back to home")

ProtoInstance323.addFieldValue(fieldValue324)
fieldValue325 = fieldValueObject()
fieldValue325.setName("tracking")
fieldValue325.setValue("true")

ProtoInstance323.addFieldValue(fieldValue325)
fieldValue326 = fieldValueObject()
fieldValue326.setName("duration")
fieldValue326.setValue("5")

ProtoInstance323.addFieldValue(fieldValue326)
fieldValue327 = fieldValueObject()
fieldValue327.setName("goalPosition")
fieldValue327.setValue("4 4 10")

ProtoInstance323.addFieldValue(fieldValue327)
fieldValue328 = fieldValueObject()
fieldValue328.setName("goalAimPoint")
fieldValue328.setValue("4 4 0")

ProtoInstance323.addFieldValue(fieldValue328)
fieldValue329 = fieldValueObject()
fieldValue329.setName("goalOrientation")
fieldValue329.setValue("0 1 0 0")

ProtoInstance323.addFieldValue(fieldValue329)

ProtoInstance323.addComments(CommentsBlock("""can test tracking or not using following values"""))
fieldValue307.addChild(ProtoInstance323)
ProtoInstance303.addFieldValue(fieldValue307)
fieldValue302.addChild(ProtoInstance303)
ProtoInstance299.addFieldValue(fieldValue302)
Scene21.addChild(ProtoInstance299)
Group330 = GroupObject()
Group330.setDEF("AnimationGroup.AimPointTest")

TimeSensor331 = TimeSensorObject()
TimeSensor331.setDEF("CameraTimer.AimPointTest")

Group330.addChild(TimeSensor331)

Group330.addComments(CommentsBlock("""initialize clock to match totalDuration of combined Shot Moves"""))
ROUTE332 = ROUTEObject()
ROUTE332.setFromField("totalDuration")
ROUTE332.setFromNode("Camera.AimPointTest")
ROUTE332.setToField("cycleInterval")
ROUTE332.setToNode("CameraTimer.AimPointTest")

Group330.addChild(ROUTE332)

Group330.addComments(CommentsBlock("""TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator"""))
ROUTE333 = ROUTEObject()
ROUTE333.setFromField("fraction_changed")
ROUTE333.setFromNode("CameraTimer.AimPointTest")
ROUTE333.setToField("set_fraction")
ROUTE333.setToNode("Camera.AimPointTest")

Group330.addChild(ROUTE333)
Transform334 = TransformObject()
Transform334.setDEF("Trigger.AimPointTest")
Transform334.setTranslation([4,4,0])

BooleanFilter335 = BooleanFilterObject()
BooleanFilter335.setDEF("TextTouchActive.AimPointFilter")

Transform334.addChild(BooleanFilter335)
TouchSensor336 = TouchSensorObject()
TouchSensor336.setDEF("TextTouch.AimPointTest")
TouchSensor336.setDescription("touch to animate Camera AimPointTest")

Transform334.addChild(TouchSensor336)
ROUTE337 = ROUTEObject()
ROUTE337.setFromField("inputTrue")
ROUTE337.setFromNode("TextTouchActive.AimPointFilter")
ROUTE337.setToField("set_bind")
ROUTE337.setToNode("Camera.AimPointTest")

Transform334.addChild(ROUTE337)
ROUTE338 = ROUTEObject()
ROUTE338.setFromField("isActive")
ROUTE338.setFromNode("TextTouch.AimPointTest")
ROUTE338.setToField("set_boolean")
ROUTE338.setToNode("TextTouchActive.AimPointFilter")

Transform334.addChild(ROUTE338)
ROUTE339 = ROUTEObject()
ROUTE339.setFromField("touchTime")
ROUTE339.setFromNode("TextTouch.AimPointTest")
ROUTE339.setToField("startTime")
ROUTE339.setToNode("CameraTimer.AimPointTest")

Transform334.addChild(ROUTE339)
Shape340 = ShapeObject()

Text341 = TextObject()
Text341.setString(["Click to animate","AimPointTest"])

FontStyle342 = FontStyleObject()
FontStyle342.setJustify(["MIDDLE","MIDDLE"])

Text341.setFontStyle(FontStyle342)
Shape340.setGeometry(Text341)
Appearance343 = AppearanceObject()

Material344 = MaterialObject()
Material344.setUSE("ArtDeco5")

Appearance343.setMaterial(Material344)
Shape340.setAppearance(Appearance343)
Transform334.addChild(Shape340)
Shape345 = ShapeObject()
Shape345.setUSE("TransparentBox")

Transform334.addChild(Shape345)
Group330.addChild(Transform334)
Scene21.addChild(Group330)

Scene21.addComments(CommentsBlock("""TODO build a test once implemented"""))
ProtoInstance346 = ProtoInstanceObject()
ProtoInstance346.setName("OfflineRender")

Scene21.addChild(ProtoInstance346)

Scene21.addComments(CommentsBlock("""=============== animate a camera shape to visualize view changes =============="""))
Transform347 = TransformObject()
Transform347.setDEF("CameraShapeTransform")
Transform347.setTranslation([0,0.5,0])


Transform347.addComments(CommentsBlock("""move CameraShape using active Camera"""))
ROUTE348 = ROUTEObject()
ROUTE348.setFromField("position_changed")
ROUTE348.setFromNode("Camera.SimpleShotsTest")
ROUTE348.setToField("translation")
ROUTE348.setToNode("CameraShapeTransform")

Transform347.addChild(ROUTE348)
ROUTE349 = ROUTEObject()
ROUTE349.setFromField("orientation_changed")
ROUTE349.setFromNode("Camera.SimpleShotsTest")
ROUTE349.setToField("rotation")
ROUTE349.setToNode("CameraShapeTransform")

Transform347.addChild(ROUTE349)
ROUTE350 = ROUTEObject()
ROUTE350.setFromField("position")
ROUTE350.setFromNode("Camera.AimPointTest")
ROUTE350.setToField("translation")
ROUTE350.setToNode("CameraShapeTransform")

Transform347.addChild(ROUTE350)
ROUTE351 = ROUTEObject()
ROUTE351.setFromField("orientation_changed")
ROUTE351.setFromNode("Camera.AimPointTest")
ROUTE351.setToField("rotation")
ROUTE351.setToNode("CameraShapeTransform")

Transform347.addChild(ROUTE351)
Transform352 = TransformObject()
Transform352.setDEF("CameraOffsetTransform")
Transform352.setTranslation([0,0,0.25])

TouchSensor353 = TouchSensorObject()
TouchSensor353.setDEF("CameraShapeTouched")

Transform352.addChild(TouchSensor353)
Inline354 = InlineObject()
Inline354.setDEF("CameraShape")
Inline354.setUrl(["CameraShape.x3d","http://www.web3d.org/x3d/content/examples/Basic/development/CameraShape.x3d"])

Transform352.addChild(Inline354)
Shape355 = ShapeObject()
Shape355.setDEF("SightLine")

IndexedLineSet356 = IndexedLineSetObject()
IndexedLineSet356.setCoordIndex([0,1])

Coordinate357 = CoordinateObject()
Coordinate357.setPoint([0,0,0,0,0,-100])

IndexedLineSet356.setCoord(Coordinate357)
Shape355.setGeometry(IndexedLineSet356)
Appearance358 = AppearanceObject()

Material359 = MaterialObject()
Material359.setEmissiveColor([0.8,0.8,0.4])

Appearance358.setMaterial(Material359)
Shape355.setAppearance(Appearance358)
Transform352.addChild(Shape355)
Transform347.addChild(Transform352)

Transform347.addComments(CommentsBlock("""Display frustum to show camera view within the scene, toggled by user selecting CameraShape"""))
ExternProtoDeclare360 = ExternProtoDeclareObject()
ExternProtoDeclare360.setName("ViewFrustum")
ExternProtoDeclare360.setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes")
ExternProtoDeclare360.setUrl(["../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum"])

field361 = fieldObject()
field361.setType(fieldObject.TYPE_SFNODE)
field361.setName("ViewpointNode")
field361.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field361.setAppinfo("required: insert Viewpoint DEF or USE node for view of interest")

ExternProtoDeclare360.addField(field361)
field362 = fieldObject()
field362.setType(fieldObject.TYPE_SFNODE)
field362.setName("NavigationInfoNode")
field362.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field362.setAppinfo("required: insert NavigationInfo DEF or USE node of interest")

ExternProtoDeclare360.addField(field362)
field363 = fieldObject()
field363.setType(fieldObject.TYPE_SFBOOL)
field363.setName("visible")
field363.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field363.setAppinfo("whether or not frustum geometry is rendered")

ExternProtoDeclare360.addField(field363)
field364 = fieldObject()
field364.setType(fieldObject.TYPE_SFCOLOR)
field364.setName("lineColor")
field364.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field364.setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9")

ExternProtoDeclare360.addField(field364)
field365 = fieldObject()
field365.setType(fieldObject.TYPE_SFCOLOR)
field365.setName("frustumColor")
field365.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field365.setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8")

ExternProtoDeclare360.addField(field365)
field366 = fieldObject()
field366.setType(fieldObject.TYPE_SFFLOAT)
field366.setName("transparency")
field366.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field366.setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5")

ExternProtoDeclare360.addField(field366)
field367 = fieldObject()
field367.setType(fieldObject.TYPE_SFFLOAT)
field367.setName("aspectRatio")
field367.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field367.setAppinfo("assumed ratio height/width, default value 0.75")

ExternProtoDeclare360.addField(field367)
field368 = fieldObject()
field368.setType(fieldObject.TYPE_SFBOOL)
field368.setName("trace")
field368.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field368.setAppinfo("debug support, default false")

ExternProtoDeclare360.addField(field368)
Transform347.addChild(ExternProtoDeclare360)
ProtoInstance369 = ProtoInstanceObject()
ProtoInstance369.setName("ViewFrustum")
ProtoInstance369.setDEF("ViewFrustumNode")

fieldValue370 = fieldValueObject()
fieldValue370.setName("ViewpointNode")

Viewpoint371 = ViewpointObject()
Viewpoint371.setDEF("FrustumViewpoint")
Viewpoint371.setDescription("viewpoint for ViewFrustum")
Viewpoint371.setPosition([0,0,0])

fieldValue370.addChild(Viewpoint371)
ProtoInstance369.addFieldValue(fieldValue370)
fieldValue372 = fieldValueObject()
fieldValue372.setName("NavigationInfoNode")

NavigationInfo373 = NavigationInfoObject()
NavigationInfo373.setDEF("TestNavigationInfo")
NavigationInfo373.setTransitionType(["ANIMATE"])
NavigationInfo373.setVisibilityLimit(100)

fieldValue372.addChild(NavigationInfo373)
ProtoInstance369.addFieldValue(fieldValue372)
fieldValue374 = fieldValueObject()
fieldValue374.setName("visible")
fieldValue374.setValue("false")

ProtoInstance369.addFieldValue(fieldValue374)
fieldValue375 = fieldValueObject()
fieldValue375.setName("lineColor")
fieldValue375.setValue("0.9 0.9 0.9")

ProtoInstance369.addFieldValue(fieldValue375)
fieldValue376 = fieldValueObject()
fieldValue376.setName("frustumColor")
fieldValue376.setValue("0.8 0.8 0.8")

ProtoInstance369.addFieldValue(fieldValue376)
fieldValue377 = fieldValueObject()
fieldValue377.setName("transparency")
fieldValue377.setValue("0.95")

ProtoInstance369.addFieldValue(fieldValue377)
Transform347.addChild(ProtoInstance369)
BooleanToggle378 = BooleanToggleObject()
BooleanToggle378.setDEF("ViewFrustumToggle")

Transform347.addChild(BooleanToggle378)
ROUTE379 = ROUTEObject()
ROUTE379.setFromField("isActive")
ROUTE379.setFromNode("CameraShapeTouched")
ROUTE379.setToField("set_boolean")
ROUTE379.setToNode("ViewFrustumToggle")

Transform347.addChild(ROUTE379)
ROUTE380 = ROUTEObject()
ROUTE380.setFromField("toggle")
ROUTE380.setFromNode("ViewFrustumToggle")
ROUTE380.setToField("set_visible")
ROUTE380.setToNode("ViewFrustumNode")

Transform347.addChild(ROUTE380)
Scene21.addChild(Transform347)

Scene21.addComments(CommentsBlock("""=============== add checkerboard, axes and other things to look at while animating =============="""))
Background381 = BackgroundObject()
Background381.setSkyColor([0.282353,0.380392,0.470588])

Scene21.addChild(Background381)
Transform382 = TransformObject()
Transform382.setRotation([1,0,0,-1.57079])
Transform382.setScale([10,10,10])

Shape383 = ShapeObject()

Appearance384 = AppearanceObject()

Material385 = MaterialObject()
Material385.setAmbientIntensity(0.01)
Material385.setDiffuseColor([1,1,1])
Material385.setShininess(0.05)

Appearance384.setMaterial(Material385)
Shape383.setAppearance(Appearance384)
IndexedFaceSet386 = IndexedFaceSetObject()
IndexedFaceSet386.setColorIndex([0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0])
IndexedFaceSet386.setColorPerVertex(False)
IndexedFaceSet386.setCoordIndex([0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1])
IndexedFaceSet386.setNormalPerVertex(False)
IndexedFaceSet386.setSolid(False)

Coordinate387 = CoordinateObject()
Coordinate387.setPoint([-5.25,5.25,0,-3.75,5.25,0,-2.25,5.25,0,-0.75,5.25,0,0.75,5.25,0,2.25,5.25,0,3.75,5.25,0,5.25,5.25,0,-5.25,3.75,0,-3.75,3.75,0,-2.25,3.75,0,-0.75,3.75,0,0.75,3.75,0,2.25,3.75,0,3.75,3.75,0,5.25,3.75,0,-5.25,2.25,0,-3.75,2.25,0,-2.25,2.25,0,-0.75,2.25,0,0.75,2.25,0,2.25,2.25,0,3.75,2.25,0,5.25,2.25,0,-5.25,0.75,0,-3.75,0.75,0,-2.25,0.75,0,-0.75,0.75,0,0.75,0.75,0,2.25,0.75,0,3.75,0.75,0,5.25,0.75,0,-5.25,-0.75,0,-3.75,-0.75,0,-2.25,-0.75,0,-0.75,-0.75,0,0.75,-0.75,0,2.25,-0.75,0,3.75,-0.75,0,5.25,-0.75,0,-5.25,-2.25,0,-3.75,-2.25,0,-2.25,-2.25,0,-0.75,-2.25,0,0.75,-2.25,0,2.25,-2.25,0,3.75,-2.25,0,5.25,-2.25,0,-5.25,-3.75,0,-3.75,-3.75,0,-2.25,-3.75,0,-0.75,-3.75,0,0.75,-3.75,0,2.25,-3.75,0,3.75,-3.75,0,5.25,-3.75,0,-5.25,-5.25,0,-3.75,-5.25,0,-2.25,-5.25,0,-0.75,-5.25,0,0.75,-5.25,0,2.25,-5.25,0,3.75,-5.25,0,5.25,-5.25,0])

IndexedFaceSet386.setCoord(Coordinate387)
Color388 = ColorObject()
Color388.setColor([0.435294,0.741176,0,0,0.560784,0.580392])

IndexedFaceSet386.setColor(Color388)
Shape383.setGeometry(IndexedFaceSet386)
Transform382.addChild(Shape383)
Scene21.addChild(Transform382)
Transform389 = TransformObject()
Transform389.setScale([3,3,3])
Transform389.setTranslation([0,0.25,0])

Inline390 = InlineObject()
Inline390.setDEF("CoordinateAxes")
Inline390.setUrl(["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])

Transform389.addChild(Inline390)
Scene21.addChild(Transform389)
Transform391 = TransformObject()
Transform391.setDEF("MovingBoxTransform")

PositionInterpolator392 = PositionInterpolatorObject()
PositionInterpolator392.setDEF("BoxPath")
PositionInterpolator392.setKey([0,0.25,0.5,0.75,1])
PositionInterpolator392.setKeyValue([-5,1,5,45,1,5,45,1,-45,-5,1,-45,-5,1,5])

Transform391.addChild(PositionInterpolator392)
TimeSensor393 = TimeSensorObject()
TimeSensor393.setDEF("BoxTimer")
TimeSensor393.setCycleInterval(10)
TimeSensor393.setLoop(True)

Transform391.addChild(TimeSensor393)
ROUTE394 = ROUTEObject()
ROUTE394.setFromField("value_changed")
ROUTE394.setFromNode("BoxPath")
ROUTE394.setToField("translation")
ROUTE394.setToNode("MovingBoxTransform")

Transform391.addChild(ROUTE394)
ROUTE395 = ROUTEObject()
ROUTE395.setFromField("value_changed")
ROUTE395.setFromNode("BoxPath")
ROUTE395.setToField("goalAimPoint")
ROUTE395.setToNode("MoveAimPoint3.1")

Transform391.addChild(ROUTE395)
ROUTE396 = ROUTEObject()
ROUTE396.setFromField("value_changed")
ROUTE396.setFromNode("BoxPath")
ROUTE396.setToField("goalAimPoint")
ROUTE396.setToNode("MoveAimPoint3.2")

Transform391.addChild(ROUTE396)
ROUTE397 = ROUTEObject()
ROUTE397.setFromField("value_changed")
ROUTE397.setFromNode("BoxPath")
ROUTE397.setToField("goalAimPoint")
ROUTE397.setToNode("MoveAimPoint3.3")

Transform391.addChild(ROUTE397)
ROUTE398 = ROUTEObject()
ROUTE398.setFromField("fraction_changed")
ROUTE398.setFromNode("BoxTimer")
ROUTE398.setToField("set_fraction")
ROUTE398.setToNode("BoxPath")

Transform391.addChild(ROUTE398)
Shape399 = ShapeObject()

Box400 = BoxObject()

Shape399.setGeometry(Box400)
Appearance401 = AppearanceObject()

Material402 = MaterialObject()

Appearance401.setMaterial(Material402)
ImageTexture403 = ImageTextureObject()
ImageTexture403.setUrl(["../earth-topo.png","http://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"])

Appearance401.setTexture(ImageTexture403)
Shape399.setAppearance(Appearance401)
Transform391.addChild(Shape399)
Scene21.addChild(Transform391)

Scene21.addComments(CommentsBlock("""================ CrossHair visualization for center of screen ================"""))
ExternProtoDeclare404 = ExternProtoDeclareObject()
ExternProtoDeclare404.setName("CrossHair")
ExternProtoDeclare404.setAppinfo("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point")
ExternProtoDeclare404.setUrl(["../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"])

field405 = fieldObject()
field405.setType(fieldObject.TYPE_SFBOOL)
field405.setName("enabled")
field405.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field405.setAppinfo("whether CrissHair orititype is enabled or not")

ExternProtoDeclare404.addField(field405)
field406 = fieldObject()
field406.setType(fieldObject.TYPE_SFBOOL)
field406.setName("set_enabled")
field406.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field406.setAppinfo("control whether enabled/disabled")

ExternProtoDeclare404.addField(field406)
field407 = fieldObject()
field407.setType(fieldObject.TYPE_SFCOLOR)
field407.setName("markerColor")
field407.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field407.setAppinfo("color of CrossHair marker")

ExternProtoDeclare404.addField(field407)
field408 = fieldObject()
field408.setType(fieldObject.TYPE_SFVEC3F)
field408.setName("scale")
field408.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field408.setAppinfo("size of CrossHair in meters")

ExternProtoDeclare404.addField(field408)
field409 = fieldObject()
field409.setType(fieldObject.TYPE_SFVEC3F)
field409.setName("positionOffsetFromCamera")
field409.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field409.setAppinfo("distance in front of HUD viewpoint")

ExternProtoDeclare404.addField(field409)
Scene21.addChild(ExternProtoDeclare404)
ProtoInstance410 = ProtoInstanceObject()
ProtoInstance410.setName("CrossHair")
ProtoInstance410.setDEF("CrossHairInstance")

fieldValue411 = fieldValueObject()
fieldValue411.setName("enabled")
fieldValue411.setValue("true")

ProtoInstance410.addFieldValue(fieldValue411)
fieldValue412 = fieldValueObject()
fieldValue412.setName("markerColor")
fieldValue412.setValue("1 0.5 0")

ProtoInstance410.addFieldValue(fieldValue412)
fieldValue413 = fieldValueObject()
fieldValue413.setName("scale")
fieldValue413.setValue("1 1 1")

ProtoInstance410.addFieldValue(fieldValue413)
fieldValue414 = fieldValueObject()
fieldValue414.setName("positionOffsetFromCamera")
fieldValue414.setValue("0 0 -6")

ProtoInstance410.addFieldValue(fieldValue414)
Scene21.addChild(ProtoInstance410)

Scene21.addComments(CommentsBlock("""turn on CrossHairInstance when animated camera viewpoints are bound"""))
ROUTE415 = ROUTEObject()
ROUTE415.setFromField("isBound")
ROUTE415.setFromNode("Camera.SimpleShotsTest")
ROUTE415.setToField("set_enabled")
ROUTE415.setToNode("CrossHairInstance")

Scene21.addChild(ROUTE415)
ROUTE416 = ROUTEObject()
ROUTE416.setFromField("isBound")
ROUTE416.setFromNode("Camera.AimPointTest")
ROUTE416.setToField("set_enabled")
ROUTE416.setToNode("CrossHairInstance")

Scene21.addChild(ROUTE416)

Scene21.addComments(CommentsBlock("""turn off CrossHairInstance when animated camera viewpoints are unbound <BooleanFilter DEF='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.SimpleShotsTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.AimPointTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='inputNegate' fromNode='NegateCrossHair' toField='set_enabled' toNode='CrossHairInstance'/>"""))

Scene21.addComments(CommentsBlock("""=============== TODO Launch Prototype Example =============="""))
Anchor417 = AnchorObject()
Anchor417.setDescription("launch CameraExample scene")
Anchor417.setParameter(["target=_blank"])
Anchor417.setUrl(["CameraExample.x3d","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.x3d","CameraExample.wrl","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.wrl"])

Transform418 = TransformObject()
Transform418.setTranslation([0,-3,0])

Shape419 = ShapeObject()

Text420 = TextObject()
Text420.setString(["CameraPrototype","defines a prototype","","Click on this text to see","CameraExample scene"])

FontStyle421 = FontStyleObject()
FontStyle421.setJustify(["MIDDLE","MIDDLE"])
FontStyle421.setSize(0.5)

Text420.setFontStyle(FontStyle421)
Shape419.setGeometry(Text420)
Appearance422 = AppearanceObject()

Material423 = MaterialObject()
Material423.setDiffuseColor([1,1,0.2])

Appearance422.setMaterial(Material423)
Shape419.setAppearance(Appearance422)
Transform418.addChild(Shape419)
Anchor417.addChild(Transform418)
Scene21.addChild(Anchor417)
X3D0.setScene(Scene21)

X3D0.toFileX3D("../data/CameraExamples.new.x3d")
