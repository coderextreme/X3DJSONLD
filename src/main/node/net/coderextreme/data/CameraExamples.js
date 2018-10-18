var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
var ProtoInstance4 = null;
var ProtoInstance5 = null;
var ProtoInstance6 = null;
var ProtoInstance7 = null;
var ProtoInstance8 = null;
var ProtoInstance9 = null;
var ProtoInstance10 = null;
var ProtoInstance11 = null;
var ProtoInstance12 = null;
var ProtoInstance13 = null;
var ProtoInstance14 = null;
var ProtoInstance15 = null;
var ProtoInstance16 = null;
var ProtoInstance17 = null;
var ProtoInstance18 = null;
var ProtoInstance19 = null;
var ProtoInstance20 = null;
var ProtoInstance21 = null;
var ProtoInstance22 = null;
var ProtoInstance23 = null;
var ProtoInstance24 = null;
var ProtoInstance25 = null;
var ProtoInstance26 = null;
var ProtoInstance27 = null;
var ProtoInstance28 = null;
var ProtoInstance29 = null;
var ProtoInstance30 = null;
var ProtoInstance31 = null;
var ProtoInstance32 = null;
var ProtoInstance33 = null;
var ProtoInstance34 = null;
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("CameraExamples.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("Camera, CameraShot and CameraMove examples that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement."))
        .addMetaSync(new autoclass.meta().setNameSync("documentation").setContentSync("Two demos are found in the scene, click the \"red text\" on left or right to start. (a) SimpleShotsTest shows Zoom in/out, Pan left/right, Boom up/down, Tilt left/right, with each is defined by a CameraShot collecting a series of CameraMovements. (b) AimPointTest gradually slews the camera view to look at the sliding cube, then follows it around before returning to original viewpoint."))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("Don Brutzman and Jeff Weekley"))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("18 June 2009"))
        .addMetaSync(new autoclass.meta().setNameSync("modified").setContentSync("12 January 2014"))
        .addMetaSync(new autoclass.meta().setNameSync("TODO").setContentSync("Schematron rules, backed up by initialize() checks"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("BeyondViewpointCameraNodesWeb3D2009.pdf"))
        .addMetaSync(new autoclass.meta().setNameSync("MovingImage").setContentSync("CameraExamplesDemo.mp4"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html"))
        .addMetaSync(new autoclass.meta().setNameSync("subject").setContentSync("Camera nodes for Viewpoint navigation control"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("CameraPrototypes.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("CameraExamplesConsoleLog.txt"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.avi"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMetaSync(new autoclass.meta().setNameSync("license").setContentSync("../license.html"))
        .addCommentsSync(new autoclass.CommentsBlock("TODO warn if more than one identifier present")))
      .setSceneSync(new autoclass.Scene()
        .addCommentsSync(new autoclass.CommentsBlock("=============== Camera =============="))
        .addChildSync(new autoclass.ExternProtoDeclare().setNameSync("Camera").setAppinfoSync("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images").setUrlSync(java.newArray("java.lang.String", ["CameraPrototypes.x3d#Camera","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#Camera","CameraPrototypes.wrl#Camera","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#Camera"]))
          .addCommentsSync(new autoclass.CommentsBlock("Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFSTRING).setNameSync("description").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Text description to be displayed for this Camera"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("position").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFROTATION).setNameSync("orientation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("fieldOfView").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("pi/4"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("set_fraction").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfoSync("input fraction drives interpolators"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("set_bind").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfoSync("input event binds or unbinds this Camera"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("bindTime").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("output event indicates when this Camera is bound"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("isBound").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("output event indicates whether this Camera is bound or unbound"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("nearClipPlane").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("farClipPlane").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFNODE).setNameSync("shots").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Array of CameraShot nodes which in turn contain CameraMovement nodes"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("headlight").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Whether camera headlight is on or off"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFCOLOR).setNameSync("headlightColor").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Camera headlight color"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("headlightIntensity").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Camera headlight intensity"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFCOLOR).setNameSync("filterColor").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Camera filter color that modifies virtual lens capture"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("filterTransparency").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Camera filter transparency that modifies virtual lens capture"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("upVector").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("upVector changes modify camera orientation (and possibly vice versa)"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("fStop").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Focal length divided effective aperture diameter indicating width of focal plane"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("focusDistance").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Distance to focal plane of sharpest focus"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("isActive").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Mark start/stop with true/false output respectively useful to trigger external animations"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("totalDuration").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("offlineRender").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("OfflineRender node"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("traceEnabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("enable console output to trace script computations and prototype progress")))
        .addCommentsSync(new autoclass.CommentsBlock("=============== CameraShot =============="))
        .addChildSync(new autoclass.ExternProtoDeclare().setNameSync("CameraShot").setAppinfoSync("CameraShot collects a specific set of CameraMovement animations that make up an individual shot").setUrlSync(java.newArray("java.lang.String", ["CameraPrototypes.x3d#CameraShot","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraShot","CameraPrototypes.wrl#CameraShot","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraShot"]))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFSTRING).setNameSync("description").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Text description to be displayed for this CameraShot"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("enabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Whether this CameraShot can be activated"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFNODE).setNameSync("moves").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Set of CameraMovement nodes")
            .addCommentsSync(new autoclass.CommentsBlock("initializing CameraMovement nodes are inserted here by scene author using ProtoInstance")))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("initialPosition").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Setup to reinitialize camera position for this shot"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFROTATION).setNameSync("initialOrientation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Setup to reinitialize camera rotation for this shot"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("initialAimPoint").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("initialFieldOfView").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("pi/4"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("initialFStop").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Focal length divided effective aperture diameter indicating width of focal plane"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("initialFocusDistance").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Distance to focal plane of sharpest focus"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("shotDuration").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Subtotal duration of contained CameraMovement move durations"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("isActive").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Mark start/stop with true/false output respectively useful to trigger external animations"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("traceEnabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("enable console output to trace script computations and prototype progress")))
        .addCommentsSync(new autoclass.CommentsBlock("=============== CameraMovement =============="))
        .addChildSync(new autoclass.ExternProtoDeclare().setNameSync("CameraMovement").setAppinfoSync("CameraMovement defines a single camera movement animation").setUrlSync(java.newArray("java.lang.String", ["CameraPrototypes.x3d#CameraMovement","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraMovement","CameraPrototypes.wrl#CameraMovement","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraMovement"]))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFSTRING).setNameSync("description").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Text description to be displayed for this CameraMovement"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("enabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Whether this CameraMovement can be activated"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("duration").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Duration in seconds for this move"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("goalPosition").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Goal camera position for this move"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFROTATION).setNameSync("goalOrientation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Goal camera rotation for this move"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("tracking").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Whether or not camera direction is tracking towards the aimPoint"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("goalAimPoint").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Goal aimPoint for this move, ignored if tracking=false"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("goalFieldOfView").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Goal fieldOfView for this move"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("goalFStop").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Focal length divided effective aperture diameter indicating width of focal plane"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("goalFocusDistance").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Distance to focal plane of sharpest focus"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("isActive").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Mark start/stop with true/false output respectively useful to trigger external animations"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("traceEnabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("enable console output to trace script computations and prototype progress")))
        .addCommentsSync(new autoclass.CommentsBlock("=============== OfflineRender =============="))
        .addChildSync(new autoclass.ExternProtoDeclare().setNameSync("OfflineRender").setAppinfoSync("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)").setUrlSync(java.newArray("java.lang.String", ["CameraPrototypes.x3d#OfflineRender","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#OfflineRender","CameraPrototypes.wrl#OfflineRender","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#OfflineRender"]))
          .addCommentsSync(new autoclass.CommentsBlock("TODO non-photorealistic rendering (NPR) parameters"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFSTRING).setNameSync("description").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Text description to be displayed for this OfflineRender"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("enabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Whether this OfflineRender can be activated"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("frameRate").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Frames per second recorded for this rendering"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC2F).setNameSync("frameSize").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Size of frame in number of pixels width and height"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("pixelAspectRatio").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Relative dimensions of pixel height/width typically 1.33 or 1"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("set_startTime").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfoSync("Begin render operation"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("progress").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Progress performing render operation (0..1)"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("renderCompleteTime").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Render operation complete"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("movieFormat").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("Format of rendered output movie (mpeg mp4 etc.), use first supported format"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("imageFormat").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("Format of rendered output images (png jpeg gif tiff etc.) use first supported format"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("traceEnabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("enable console output to trace script computations and prototype progress")))
        .addCommentsSync(new autoclass.CommentsBlock("=============== Lights, camera, action! =============="))
        .addChildSync(new autoclass.DirectionalLight().setDirectionSync(java.newArray("float", [java.newFloat(0), java.newFloat(-1), java.newFloat(0)])).setGlobalSync(true).setIntensitySync(java.newFloat(0.8)))
        .addChildSync(new autoclass.NavigationInfo().setTypeSync(java.newArray("java.lang.String", ["EXAMINE","FLY","ANY"])))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Camera test scene entry view").setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(2), java.newFloat(12)])))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Camera test scene from above").setOrientationSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57079)])).setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(150), java.newFloat(0)])))
        .addCommentsSync(new autoclass.CommentsBlock("Keep prototype instances in same file while developing, then move later"))
        .addCommentsSync(new autoclass.CommentsBlock("We will create examples matching those in the paper"))
        .addCommentsSync(new autoclass.CommentsBlock("=============== Camera.SimpleShotsTest =============="))
        .addChildSync(ProtoInstance0 = new autoclass.ProtoInstance().setNameSync("Camera").setDEFSync("Camera.SimpleShotsTest"))
        .addChildSync(new autoclass.Group().setDEFSync("AnimationGroup.SimpleShots")
          .addChildSync(new autoclass.TimeSensor().setDEFSync("CameraTimer.SimpleShots"))
          .addCommentsSync(new autoclass.CommentsBlock("initialize clock to match totalDuration of combined Shot Moves"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("totalDuration").setFromNodeSync("Camera.SimpleShotsTest").setToFieldSync("cycleInterval").setToNodeSync("CameraTimer.SimpleShots"))
          .addCommentsSync(new autoclass.CommentsBlock("TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("fraction_changed").setFromNodeSync("CameraTimer.SimpleShots").setToFieldSync("set_fraction").setToNodeSync("Camera.SimpleShotsTest"))
          .addChildSync(new autoclass.Transform().setDEFSync("Trigger.SimpleShots").setTranslationSync(java.newArray("float", [java.newFloat(-4), java.newFloat(4), java.newFloat(0)]))
            .addChildSync(new autoclass.BooleanFilter().setDEFSync("TextTouchActive.SimpleShotsFilter"))
            .addChildSync(new autoclass.TouchSensor().setDEFSync("TextTouch.SimpleShots").setDescriptionSync("touch to animate Camera SimpleShotsTest"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("inputTrue").setFromNodeSync("TextTouchActive.SimpleShotsFilter").setToFieldSync("set_bind").setToNodeSync("Camera.SimpleShotsTest"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("isActive").setFromNodeSync("TextTouch.SimpleShots").setToFieldSync("set_boolean").setToNodeSync("TextTouchActive.SimpleShotsFilter"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("touchTime").setFromNodeSync("TextTouch.SimpleShots").setToFieldSync("startTime").setToNodeSync("CameraTimer.SimpleShots"))
            .addChildSync(new autoclass.Shape()
              .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["Click to animate","SimpleShotsTest"]))
                .setFontStyleSync(new autoclass.FontStyle().setJustifySync(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material().setDEFSync("ArtDeco5").setAmbientIntensitySync(java.newFloat(0.24)).setDiffuseColorSync(java.newArray("float", [java.newFloat(0.945455), java.newFloat(0.318988), java.newFloat(0.321717)])).setShininessSync(java.newFloat(0.01)).setSpecularColorSync(java.newArray("float", [java.newFloat(0.072727), java.newFloat(0.021705), java.newFloat(0.010732)]))
                  .addCommentsSync(new autoclass.CommentsBlock("Universal Media Library: ArtDeco 5")))))
            .addCommentsSync(new autoclass.CommentsBlock("Simplify intersection test for user selecting text"))
            .addChildSync(new autoclass.Shape().setDEFSync("TransparentBox")
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material().setTransparencySync(java.newFloat(1))))
              .setGeometrySync(new autoclass.Box().setSizeSync(java.newArray("float", [java.newFloat(6), java.newFloat(2), java.newFloat(0.0001)]))))))
        .addChildSync(new autoclass.Group().setDEFSync("SimpleShotsTargets")
          .addChildSync(new autoclass.Transform().setDEFSync("TargetBoxZoom").setTranslationSync(java.newArray("float", [java.newFloat(-50), java.newFloat(1), java.newFloat(-20)]))
            .addChildSync(new autoclass.Shape()
              .setGeometrySync(new autoclass.Box())
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material())
                .setTextureSync(new autoclass.ImageTexture().setUrlSync(java.newArray("java.lang.String", ["images/CameraMoveZoom.png","http://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveZoom.png"])))))
            .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(2), java.newFloat(0)]))
              .addChildSync(new autoclass.Shape()
                .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["Zoom in, out"]))
                  .setFontStyleSync(new autoclass.FontStyle().setJustifySync(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))
                .setAppearanceSync(new autoclass.Appearance()
                  .setMaterialSync(new autoclass.Material())))))
          .addChildSync(new autoclass.Transform().setDEFSync("TargetBoxDolly").setTranslationSync(java.newArray("float", [java.newFloat(-40), java.newFloat(1), java.newFloat(-20)]))
            .addChildSync(new autoclass.Shape()
              .setGeometrySync(new autoclass.Box())
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material())
                .setTextureSync(new autoclass.ImageTexture().setUrlSync(java.newArray("java.lang.String", ["images/CameraMoveDolly.png","http://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveDolly.png"])))))
            .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(2), java.newFloat(0)]))
              .addChildSync(new autoclass.Shape()
                .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["Dolly left, right"]))
                  .setFontStyleSync(new autoclass.FontStyle().setJustifySync(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))
                .setAppearanceSync(new autoclass.Appearance()
                  .setMaterialSync(new autoclass.Material())))))
          .addChildSync(new autoclass.Transform().setDEFSync("TargetBoxPan").setTranslationSync(java.newArray("float", [java.newFloat(-30), java.newFloat(1), java.newFloat(-20)]))
            .addChildSync(new autoclass.Shape()
              .setGeometrySync(new autoclass.Box())
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material())
                .setTextureSync(new autoclass.ImageTexture().setUrlSync(java.newArray("java.lang.String", ["images/CameraMovePan.png","http://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMovePan.png"])))))
            .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(2), java.newFloat(0)]))
              .addChildSync(new autoclass.Shape()
                .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["Pan left, right"]))
                  .setFontStyleSync(new autoclass.FontStyle().setJustifySync(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))
                .setAppearanceSync(new autoclass.Appearance()
                  .setMaterialSync(new autoclass.Material())))))
          .addChildSync(new autoclass.Transform().setDEFSync("TargetBoxBoom").setTranslationSync(java.newArray("float", [java.newFloat(-20), java.newFloat(1), java.newFloat(-20)]))
            .addChildSync(new autoclass.Shape()
              .setGeometrySync(new autoclass.Box())
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material())
                .setTextureSync(new autoclass.ImageTexture().setUrlSync(java.newArray("java.lang.String", ["images/CameraMoveBoom.png","http://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveBoom.png"])))))
            .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(2), java.newFloat(0)]))
              .addChildSync(new autoclass.Shape()
                .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["Boom up, down"]))
                  .setFontStyleSync(new autoclass.FontStyle().setJustifySync(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))
                .setAppearanceSync(new autoclass.Appearance()
                  .setMaterialSync(new autoclass.Material())))))
          .addChildSync(new autoclass.Transform().setDEFSync("TargetBoxTilt").setTranslationSync(java.newArray("float", [java.newFloat(-10), java.newFloat(1), java.newFloat(-20)]))
            .addChildSync(new autoclass.Shape()
              .setGeometrySync(new autoclass.Box())
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material())
                .setTextureSync(new autoclass.ImageTexture().setUrlSync(java.newArray("java.lang.String", ["images/CameraMoveTilt.png","http://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveTilt.png"])))))
            .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(2), java.newFloat(0)]))
              .addChildSync(new autoclass.Shape()
                .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["Tilt left, right"]))
                  .setFontStyleSync(new autoclass.FontStyle().setJustifySync(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))
                .setAppearanceSync(new autoclass.Appearance()
                  .setMaterialSync(new autoclass.Material()))))))
        .addCommentsSync(new autoclass.CommentsBlock("=============== Camera.AimPointTest =============="))
        .addChildSync(ProtoInstance26 = new autoclass.ProtoInstance().setNameSync("Camera").setDEFSync("Camera.AimPointTest"))
        .addChildSync(new autoclass.Group().setDEFSync("AnimationGroup.AimPointTest")
          .addChildSync(new autoclass.TimeSensor().setDEFSync("CameraTimer.AimPointTest"))
          .addCommentsSync(new autoclass.CommentsBlock("initialize clock to match totalDuration of combined Shot Moves"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("totalDuration").setFromNodeSync("Camera.AimPointTest").setToFieldSync("cycleInterval").setToNodeSync("CameraTimer.AimPointTest"))
          .addCommentsSync(new autoclass.CommentsBlock("TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("fraction_changed").setFromNodeSync("CameraTimer.AimPointTest").setToFieldSync("set_fraction").setToNodeSync("Camera.AimPointTest"))
          .addChildSync(new autoclass.Transform().setDEFSync("Trigger.AimPointTest").setTranslationSync(java.newArray("float", [java.newFloat(4), java.newFloat(4), java.newFloat(0)]))
            .addChildSync(new autoclass.BooleanFilter().setDEFSync("TextTouchActive.AimPointFilter"))
            .addChildSync(new autoclass.TouchSensor().setDEFSync("TextTouch.AimPointTest").setDescriptionSync("touch to animate Camera AimPointTest"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("inputTrue").setFromNodeSync("TextTouchActive.AimPointFilter").setToFieldSync("set_bind").setToNodeSync("Camera.AimPointTest"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("isActive").setFromNodeSync("TextTouch.AimPointTest").setToFieldSync("set_boolean").setToNodeSync("TextTouchActive.AimPointFilter"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("touchTime").setFromNodeSync("TextTouch.AimPointTest").setToFieldSync("startTime").setToNodeSync("CameraTimer.AimPointTest"))
            .addChildSync(new autoclass.Shape()
              .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["Click to animate","AimPointTest"]))
                .setFontStyleSync(new autoclass.FontStyle().setJustifySync(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material().setUSESync("ArtDeco5"))))
            .addChildSync(new autoclass.Shape().setUSESync("TransparentBox"))))
        .addCommentsSync(new autoclass.CommentsBlock("TODO build a test once implemented"))
        .addChildSync(ProtoInstance32 = new autoclass.ProtoInstance().setNameSync("OfflineRender"))
        .addCommentsSync(new autoclass.CommentsBlock("=============== animate a camera shape to visualize view changes =============="))
        .addChildSync(new autoclass.Transform().setDEFSync("CameraShapeTransform").setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(0)]))
          .addCommentsSync(new autoclass.CommentsBlock("move CameraShape using active Camera"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("position_changed").setFromNodeSync("Camera.SimpleShotsTest").setToFieldSync("translation").setToNodeSync("CameraShapeTransform"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("orientation_changed").setFromNodeSync("Camera.SimpleShotsTest").setToFieldSync("rotation").setToNodeSync("CameraShapeTransform"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("position").setFromNodeSync("Camera.AimPointTest").setToFieldSync("translation").setToNodeSync("CameraShapeTransform"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("orientation_changed").setFromNodeSync("Camera.AimPointTest").setToFieldSync("rotation").setToNodeSync("CameraShapeTransform"))
          .addChildSync(new autoclass.Transform().setDEFSync("CameraOffsetTransform").setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0.25)]))
            .addChildSync(new autoclass.TouchSensor().setDEFSync("CameraShapeTouched"))
            .addChildSync(new autoclass.Inline().setDEFSync("CameraShape").setUrlSync(java.newArray("java.lang.String", ["CameraShape.x3d","http://www.web3d.org/x3d/content/examples/Basic/development/CameraShape.x3d"])))
            .addChildSync(new autoclass.Shape().setDEFSync("SightLine")
              .setGeometrySync(new autoclass.IndexedLineSet().setCoordIndexSync(java.newArray("int", [0,1]))
                .setCoordSync(new autoclass.Coordinate().setPointSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(-100)]))))
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material().setEmissiveColorSync(java.newArray("float", [java.newFloat(0.8), java.newFloat(0.8), java.newFloat(0.4)]))))))
          .addCommentsSync(new autoclass.CommentsBlock("Display frustum to show camera view within the scene, toggled by user selecting CameraShape"))
          .addChildSync(new autoclass.ExternProtoDeclare().setNameSync("ViewFrustum").setAppinfoSync("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes").setUrlSync(java.newArray("java.lang.String", ["../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum"]))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("ViewpointNode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("required: insert Viewpoint DEF or USE node for view of interest"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("NavigationInfoNode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("required: insert NavigationInfo DEF or USE node of interest"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("visible").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("whether or not frustum geometry is rendered"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFCOLOR).setNameSync("lineColor").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFCOLOR).setNameSync("frustumColor").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("transparency").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("transparency of ViewFrustum hull geometry, default value 0.5"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("aspectRatio").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("assumed ratio height/width, default value 0.75"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("trace").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("debug support, default false")))
          .addChildSync(ProtoInstance33 = new autoclass.ProtoInstance().setNameSync("ViewFrustum").setDEFSync("ViewFrustumNode"))
          .addChildSync(new autoclass.BooleanToggle().setDEFSync("ViewFrustumToggle"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("isActive").setFromNodeSync("CameraShapeTouched").setToFieldSync("set_boolean").setToNodeSync("ViewFrustumToggle"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("toggle").setFromNodeSync("ViewFrustumToggle").setToFieldSync("set_visible").setToNodeSync("ViewFrustumNode")))
        .addCommentsSync(new autoclass.CommentsBlock("=============== add checkerboard, axes and other things to look at while animating =============="))
        .addChildSync(new autoclass.Background().setSkyColorSync(java.newArray("float", [java.newFloat(0.282353), java.newFloat(0.380392), java.newFloat(0.470588)])))
        .addChildSync(new autoclass.Transform().setRotationSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57079)])).setScaleSync(java.newArray("float", [java.newFloat(10), java.newFloat(10), java.newFloat(10)]))
          .addChildSync(new autoclass.Shape()
            .setAppearanceSync(new autoclass.Appearance()
              .setMaterialSync(new autoclass.Material().setAmbientIntensitySync(java.newFloat(0.01)).setDiffuseColorSync(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])).setShininessSync(java.newFloat(0.05))))
            .setGeometrySync(new autoclass.IndexedFaceSet().setColorIndexSync(java.newArray("int", [0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0])).setColorPerVertexSync(false).setCoordIndexSync(java.newArray("int", [0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1])).setNormalPerVertexSync(false).setSolidSync(false)
              .setCoordSync(new autoclass.Coordinate().setPointSync(java.newArray("float", [java.newFloat(-5.25), java.newFloat(5.25), java.newFloat(0), java.newFloat(-3.75), java.newFloat(5.25), java.newFloat(0), java.newFloat(-2.25), java.newFloat(5.25), java.newFloat(0), java.newFloat(-0.75), java.newFloat(5.25), java.newFloat(0), java.newFloat(0.75), java.newFloat(5.25), java.newFloat(0), java.newFloat(2.25), java.newFloat(5.25), java.newFloat(0), java.newFloat(3.75), java.newFloat(5.25), java.newFloat(0), java.newFloat(5.25), java.newFloat(5.25), java.newFloat(0), java.newFloat(-5.25), java.newFloat(3.75), java.newFloat(0), java.newFloat(-3.75), java.newFloat(3.75), java.newFloat(0), java.newFloat(-2.25), java.newFloat(3.75), java.newFloat(0), java.newFloat(-0.75), java.newFloat(3.75), java.newFloat(0), java.newFloat(0.75), java.newFloat(3.75), java.newFloat(0), java.newFloat(2.25), java.newFloat(3.75), java.newFloat(0), java.newFloat(3.75), java.newFloat(3.75), java.newFloat(0), java.newFloat(5.25), java.newFloat(3.75), java.newFloat(0), java.newFloat(-5.25), java.newFloat(2.25), java.newFloat(0), java.newFloat(-3.75), java.newFloat(2.25), java.newFloat(0), java.newFloat(-2.25), java.newFloat(2.25), java.newFloat(0), java.newFloat(-0.75), java.newFloat(2.25), java.newFloat(0), java.newFloat(0.75), java.newFloat(2.25), java.newFloat(0), java.newFloat(2.25), java.newFloat(2.25), java.newFloat(0), java.newFloat(3.75), java.newFloat(2.25), java.newFloat(0), java.newFloat(5.25), java.newFloat(2.25), java.newFloat(0), java.newFloat(-5.25), java.newFloat(0.75), java.newFloat(0), java.newFloat(-3.75), java.newFloat(0.75), java.newFloat(0), java.newFloat(-2.25), java.newFloat(0.75), java.newFloat(0), java.newFloat(-0.75), java.newFloat(0.75), java.newFloat(0), java.newFloat(0.75), java.newFloat(0.75), java.newFloat(0), java.newFloat(2.25), java.newFloat(0.75), java.newFloat(0), java.newFloat(3.75), java.newFloat(0.75), java.newFloat(0), java.newFloat(5.25), java.newFloat(0.75), java.newFloat(0), java.newFloat(-5.25), java.newFloat(-0.75), java.newFloat(0), java.newFloat(-3.75), java.newFloat(-0.75), java.newFloat(0), java.newFloat(-2.25), java.newFloat(-0.75), java.newFloat(0), java.newFloat(-0.75), java.newFloat(-0.75), java.newFloat(0), java.newFloat(0.75), java.newFloat(-0.75), java.newFloat(0), java.newFloat(2.25), java.newFloat(-0.75), java.newFloat(0), java.newFloat(3.75), java.newFloat(-0.75), java.newFloat(0), java.newFloat(5.25), java.newFloat(-0.75), java.newFloat(0), java.newFloat(-5.25), java.newFloat(-2.25), java.newFloat(0), java.newFloat(-3.75), java.newFloat(-2.25), java.newFloat(0), java.newFloat(-2.25), java.newFloat(-2.25), java.newFloat(0), java.newFloat(-0.75), java.newFloat(-2.25), java.newFloat(0), java.newFloat(0.75), java.newFloat(-2.25), java.newFloat(0), java.newFloat(2.25), java.newFloat(-2.25), java.newFloat(0), java.newFloat(3.75), java.newFloat(-2.25), java.newFloat(0), java.newFloat(5.25), java.newFloat(-2.25), java.newFloat(0), java.newFloat(-5.25), java.newFloat(-3.75), java.newFloat(0), java.newFloat(-3.75), java.newFloat(-3.75), java.newFloat(0), java.newFloat(-2.25), java.newFloat(-3.75), java.newFloat(0), java.newFloat(-0.75), java.newFloat(-3.75), java.newFloat(0), java.newFloat(0.75), java.newFloat(-3.75), java.newFloat(0), java.newFloat(2.25), java.newFloat(-3.75), java.newFloat(0), java.newFloat(3.75), java.newFloat(-3.75), java.newFloat(0), java.newFloat(5.25), java.newFloat(-3.75), java.newFloat(0), java.newFloat(-5.25), java.newFloat(-5.25), java.newFloat(0), java.newFloat(-3.75), java.newFloat(-5.25), java.newFloat(0), java.newFloat(-2.25), java.newFloat(-5.25), java.newFloat(0), java.newFloat(-0.75), java.newFloat(-5.25), java.newFloat(0), java.newFloat(0.75), java.newFloat(-5.25), java.newFloat(0), java.newFloat(2.25), java.newFloat(-5.25), java.newFloat(0), java.newFloat(3.75), java.newFloat(-5.25), java.newFloat(0), java.newFloat(5.25), java.newFloat(-5.25), java.newFloat(0)])))
              .setColorSync(new autoclass.Color().setColorSync(java.newArray("float", [java.newFloat(0.435294), java.newFloat(0.741176), java.newFloat(0), java.newFloat(0), java.newFloat(0.560784), java.newFloat(0.580392)]))))))
        .addChildSync(new autoclass.Transform().setScaleSync(java.newArray("float", [java.newFloat(3), java.newFloat(3), java.newFloat(3)])).setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(0.25), java.newFloat(0)]))
          .addChildSync(new autoclass.Inline().setDEFSync("CoordinateAxes").setUrlSync(java.newArray("java.lang.String", ["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]))))
        .addChildSync(new autoclass.Transform().setDEFSync("MovingBoxTransform")
          .addChildSync(new autoclass.PositionInterpolator().setDEFSync("BoxPath").setKeySync(java.newArray("float", [java.newFloat(0), java.newFloat(0.25), java.newFloat(0.5), java.newFloat(0.75), java.newFloat(1)])).setKeyValueSync(java.newArray("float", [java.newFloat(-5), java.newFloat(1), java.newFloat(5), java.newFloat(45), java.newFloat(1), java.newFloat(5), java.newFloat(45), java.newFloat(1), java.newFloat(-45), java.newFloat(-5), java.newFloat(1), java.newFloat(-45), java.newFloat(-5), java.newFloat(1), java.newFloat(5)])))
          .addChildSync(new autoclass.TimeSensor().setDEFSync("BoxTimer").setCycleIntervalSync(10).setLoopSync(true))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("value_changed").setFromNodeSync("BoxPath").setToFieldSync("translation").setToNodeSync("MovingBoxTransform"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("value_changed").setFromNodeSync("BoxPath").setToFieldSync("goalAimPoint").setToNodeSync("MoveAimPoint3.1"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("value_changed").setFromNodeSync("BoxPath").setToFieldSync("goalAimPoint").setToNodeSync("MoveAimPoint3.2"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("value_changed").setFromNodeSync("BoxPath").setToFieldSync("goalAimPoint").setToNodeSync("MoveAimPoint3.3"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("fraction_changed").setFromNodeSync("BoxTimer").setToFieldSync("set_fraction").setToNodeSync("BoxPath"))
          .addChildSync(new autoclass.Shape()
            .setGeometrySync(new autoclass.Box())
            .setAppearanceSync(new autoclass.Appearance()
              .setMaterialSync(new autoclass.Material())
              .setTextureSync(new autoclass.ImageTexture().setUrlSync(java.newArray("java.lang.String", ["../earth-topo.png","http://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"]))))))
        .addCommentsSync(new autoclass.CommentsBlock("================ CrossHair visualization for center of screen ================"))
        .addChildSync(new autoclass.ExternProtoDeclare().setNameSync("CrossHair").setAppinfoSync("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point").setUrlSync(java.newArray("java.lang.String", ["../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"]))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("enabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("whether CrissHair orititype is enabled or not"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("set_enabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfoSync("control whether enabled/disabled"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFCOLOR).setNameSync("markerColor").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("color of CrossHair marker"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("scale").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("size of CrossHair in meters"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("positionOffsetFromCamera").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("distance in front of HUD viewpoint")))
        .addChildSync(ProtoInstance34 = new autoclass.ProtoInstance().setNameSync("CrossHair").setDEFSync("CrossHairInstance"))
        .addCommentsSync(new autoclass.CommentsBlock("turn on CrossHairInstance when animated camera viewpoints are bound"))
        .addChildSync(new autoclass.ROUTE().setFromFieldSync("isBound").setFromNodeSync("Camera.SimpleShotsTest").setToFieldSync("set_enabled").setToNodeSync("CrossHairInstance"))
        .addChildSync(new autoclass.ROUTE().setFromFieldSync("isBound").setFromNodeSync("Camera.AimPointTest").setToFieldSync("set_enabled").setToNodeSync("CrossHairInstance"))
        .addCommentsSync(new autoclass.CommentsBlock("turn off CrossHairInstance when animated camera viewpoints are unbound <BooleanFilter DEF='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.SimpleShotsTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.AimPointTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='inputNegate' fromNode='NegateCrossHair' toField='set_enabled' toNode='CrossHairInstance'/>"))
        .addCommentsSync(new autoclass.CommentsBlock("=============== TODO Launch Prototype Example =============="))
        .addChildSync(new autoclass.Anchor().setDescriptionSync("launch CameraExample scene").setParameterSync(java.newArray("java.lang.String", ["target=_blank"])).setUrlSync(java.newArray("java.lang.String", ["CameraExample.x3d","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.x3d","CameraExample.wrl","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.wrl"]))
          .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(-3), java.newFloat(0)]))
            .addChildSync(new autoclass.Shape()
              .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["CameraPrototype","defines a prototype","","Click on this text to see","CameraExample scene"]))
                .setFontStyleSync(new autoclass.FontStyle().setJustifySync(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setSizeSync(java.newFloat(0.5))))
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0.2)]))))))))      ;
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("SimpleShotsTest for camera Zoom Dolly Pan Boom and Tilt"));
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("headlight").setValueSync("true"));
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("position").setValueSync("-4 4 10"));
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("shots")
            .addChildSync(ProtoInstance1 = new autoclass.ProtoInstance().setNameSync("CameraShot").setDEFSync("Zoom"))
            .addChildSync(ProtoInstance5 = new autoclass.ProtoInstance().setNameSync("CameraShot").setDEFSync("Dolly"))
            .addChildSync(ProtoInstance9 = new autoclass.ProtoInstance().setNameSync("CameraShot").setDEFSync("Pan"))
            .addChildSync(ProtoInstance14 = new autoclass.ProtoInstance().setNameSync("CameraShot").setDEFSync("CameraBoom"))
            .addChildSync(ProtoInstance18 = new autoclass.ProtoInstance().setNameSync("CameraShot").setDEFSync("CameraTilt")));
ProtoInstance1
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Simple shot of Camera Zoom"));
ProtoInstance1
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("initialPosition").setValueSync("-50 1 -10"));
ProtoInstance1
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("initialOrientation").setValueSync("0 1 0 0"));
ProtoInstance1
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("moves")
                .addChildSync(ProtoInstance2 = new autoclass.ProtoInstance().setNameSync("CameraMovement"))
                .addChildSync(ProtoInstance3 = new autoclass.ProtoInstance().setNameSync("CameraMovement"))
                .addChildSync(ProtoInstance4 = new autoclass.ProtoInstance().setNameSync("CameraMovement")));
ProtoInstance2
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Camera Zoom In"));
ProtoInstance2
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("3"));
ProtoInstance2
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("-50 1 -15"));
ProtoInstance2
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 1 0 0"));
ProtoInstance3
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Camera Zoom Out"));
ProtoInstance3
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("3"));
ProtoInstance3
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("-50 1 -10"));
ProtoInstance3
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 1 0 0"));
ProtoInstance4
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Camera Pause"));
ProtoInstance4
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("1"));
ProtoInstance4
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("-50 1 -10"));
ProtoInstance4
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 1 0 0"));
ProtoInstance5
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Simple shot of Camera Dolly"));
ProtoInstance5
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("initialPosition").setValueSync("-40 1 -10"));
ProtoInstance5
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("initialOrientation").setValueSync("0 1 0 0"));
ProtoInstance5
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("moves")
                .addChildSync(ProtoInstance6 = new autoclass.ProtoInstance().setNameSync("CameraMovement").setDEFSync("DollyMove1"))
                .addChildSync(ProtoInstance7 = new autoclass.ProtoInstance().setNameSync("CameraMovement"))
                .addChildSync(ProtoInstance8 = new autoclass.ProtoInstance().setNameSync("CameraMovement")));
ProtoInstance6
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Camera Dolly from Right to Left"));
ProtoInstance6
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("3"));
ProtoInstance6
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("-45 1 -10"));
ProtoInstance6
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 1 0 0"));
ProtoInstance7
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Camera Dolly from Left to Right"));
ProtoInstance7
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("3"));
ProtoInstance7
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("-40 1 -10"));
ProtoInstance7
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 1 0 0"));
ProtoInstance8
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Camera Pause"));
ProtoInstance8
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("1"));
ProtoInstance8
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("-40 1 -10"));
ProtoInstance8
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 1 0 0"));
ProtoInstance9
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Simple shot of Camera Pan left right and back to center"));
ProtoInstance9
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("initialPosition").setValueSync("-30 1 -10"));
ProtoInstance9
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("initialOrientation").setValueSync("0 1 0 0"));
ProtoInstance9
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("moves")
                .addChildSync(ProtoInstance10 = new autoclass.ProtoInstance().setNameSync("CameraMovement").setDEFSync("PanLeft"))
                .addChildSync(ProtoInstance11 = new autoclass.ProtoInstance().setNameSync("CameraMovement").setDEFSync("PanRight"))
                .addChildSync(ProtoInstance12 = new autoclass.ProtoInstance().setNameSync("CameraMovement"))
                .addChildSync(ProtoInstance13 = new autoclass.ProtoInstance().setNameSync("CameraMovement")));
ProtoInstance10
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Pan Left"));
ProtoInstance10
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("2"));
ProtoInstance10
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("-30 1 -10"));
ProtoInstance10
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 1 0 0.4"));
ProtoInstance11
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Pan Right"));
ProtoInstance11
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("3"));
ProtoInstance11
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("-30 1 -10"));
ProtoInstance11
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 1 0 -0.4"));
ProtoInstance12
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Camera Pan back to Center"));
ProtoInstance12
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("2"));
ProtoInstance12
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("-30 1 -10"));
ProtoInstance12
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 1 0 0"));
ProtoInstance13
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Camera Pause"));
ProtoInstance13
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("2"));
ProtoInstance13
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("-30 1 -10"));
ProtoInstance13
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 1 0 0"));
ProtoInstance14
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Camera Boom"));
ProtoInstance14
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("initialPosition").setValueSync("-20 1 -10"));
ProtoInstance14
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("initialOrientation").setValueSync("0 1 0 0"));
ProtoInstance14
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("moves")
                .addChildSync(ProtoInstance15 = new autoclass.ProtoInstance().setNameSync("CameraMovement").setDEFSync("CameraBoomUp"))
                .addChildSync(ProtoInstance16 = new autoclass.ProtoInstance().setNameSync("CameraMovement").setDEFSync("BoomDown"))
                .addChildSync(ProtoInstance17 = new autoclass.ProtoInstance().setNameSync("CameraMovement").setDEFSync("BoomPause")));
ProtoInstance15
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Camera Boom Up"));
ProtoInstance15
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("3"));
ProtoInstance15
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("-20 5 -10"));
ProtoInstance15
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 1 0 0"));
ProtoInstance16
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Camera Boom Down"));
ProtoInstance16
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("3"));
ProtoInstance16
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("-20 1 -10"));
ProtoInstance16
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 1 0 0"));
ProtoInstance17
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Camera Pause"));
ProtoInstance17
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("2"));
ProtoInstance17
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("-20 1 -10"));
ProtoInstance17
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 1 0 0"));
ProtoInstance18
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Camera Tilt"));
ProtoInstance18
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("initialPosition").setValueSync("-10 1 -10"));
ProtoInstance18
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("initialOrientation").setValueSync("0 0 1 0"));
ProtoInstance18
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("traceEnabled").setValueSync("true"));
ProtoInstance18
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("moves")
                .addChildSync(ProtoInstance19 = new autoclass.ProtoInstance().setNameSync("CameraMovement"))
                .addChildSync(ProtoInstance20 = new autoclass.ProtoInstance().setNameSync("CameraMovement").setDEFSync("TiltDown"))
                .addChildSync(ProtoInstance21 = new autoclass.ProtoInstance().setNameSync("CameraMovement").setDEFSync("TiltPause"))
                .addChildSync(ProtoInstance22 = new autoclass.ProtoInstance().setNameSync("CameraMovement"))
                .addChildSync(ProtoInstance23 = new autoclass.ProtoInstance().setNameSync("CameraMovement"))
                .addChildSync(ProtoInstance24 = new autoclass.ProtoInstance().setNameSync("CameraMovement").setDEFSync("TiltReset"))
                .addChildSync(ProtoInstance25 = new autoclass.ProtoInstance().setNameSync("CameraMovement").setDEFSync("TiltUp")));
ProtoInstance19
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Camera Tilt Pause"));
ProtoInstance19
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("1"));
ProtoInstance19
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("-10 1 -10"));
ProtoInstance19
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 0 1 0"));
ProtoInstance20
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Camera Tilt Left"));
ProtoInstance20
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("3"));
ProtoInstance20
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("-10 1 -10"));
ProtoInstance20
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 0 1 0.785"));
ProtoInstance21
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Camera Tilt Pause"));
ProtoInstance21
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("1"));
ProtoInstance21
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("-10 1 -10"));
ProtoInstance21
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 0 1 0.785"));
ProtoInstance22
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Camera Tilt Right"));
ProtoInstance22
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("3"));
ProtoInstance22
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("-10 1 -10"));
ProtoInstance22
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 0 1 -0.785"));
ProtoInstance23
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Camera Tilt Pause"));
ProtoInstance23
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("1"));
ProtoInstance23
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("-10 1 -10"));
ProtoInstance23
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 0 1 -0.785"));
ProtoInstance24
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Camera Tilt Reset"));
ProtoInstance24
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("1"));
ProtoInstance24
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("-10 1 -10"));
ProtoInstance24
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 0 1 0"));
ProtoInstance25
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("Return to home"));
ProtoInstance25
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("2"));
ProtoInstance25
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("0 2 12"));
ProtoInstance25
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 0 1 0"));
ProtoInstance26
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("AimPointTest for moving camera tracking moving target"));
ProtoInstance26
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("position").setValueSync("4 4 10"));
ProtoInstance26
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("shots")
            .addChildSync(ProtoInstance27 = new autoclass.ProtoInstance().setNameSync("CameraShot").setDEFSync("Shot5")));
ProtoInstance27
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("#3 Tracking shot"));
ProtoInstance27
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("initialPosition").setValueSync("6 6 10"));
ProtoInstance27
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("initialOrientation").setValueSync("0 1 0 0"));
ProtoInstance27
              .addFieldValueSync(new autoclass.fieldValue().setNameSync("moves")
                .addChildSync(ProtoInstance28 = new autoclass.ProtoInstance().setNameSync("CameraMovement").setDEFSync("MoveAimPoint3.1")
                  .addCommentsSync(new autoclass.CommentsBlock("goalAimPoint modified by ROUTE to match moving Box")))
                .addChildSync(ProtoInstance29 = new autoclass.ProtoInstance().setNameSync("CameraMovement").setDEFSync("MoveAimPoint3.2")
                  .addCommentsSync(new autoclass.CommentsBlock("goalAimPoint modified by ROUTE to match moving Box")))
                .addChildSync(ProtoInstance30 = new autoclass.ProtoInstance().setNameSync("CameraMovement").setDEFSync("MoveAimPoint3.3")
                  .addCommentsSync(new autoclass.CommentsBlock("goalAimPoint modified by ROUTE to match moving Box")))
                .addChildSync(ProtoInstance31 = new autoclass.ProtoInstance().setNameSync("CameraMovement").setDEFSync("MoveAimPoint3.4")
                  .addCommentsSync(new autoclass.CommentsBlock("can test tracking or not using following values"))));
ProtoInstance28
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("AimPoint 3.1 moving BoxPath"));
ProtoInstance28
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("tracking").setValueSync("true"));
ProtoInstance28
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("8"));
ProtoInstance28
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("6 6 10"));
ProtoInstance29
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("AimPoint 3.2 pan right while tracking"));
ProtoInstance29
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("tracking").setValueSync("true"));
ProtoInstance29
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("8"));
ProtoInstance29
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("40 6 12"));
ProtoInstance30
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("AimPoint 3.3 boom up while tracking"));
ProtoInstance30
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("tracking").setValueSync("true"));
ProtoInstance30
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("3"));
ProtoInstance30
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("40 20 13"));
ProtoInstance31
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("description").setValueSync("AimPoint 3.4 restore camera back to home"));
ProtoInstance31
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("tracking").setValueSync("true"));
ProtoInstance31
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("duration").setValueSync("5"));
ProtoInstance31
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalPosition").setValueSync("4 4 10"));
ProtoInstance31
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalAimPoint").setValueSync("4 4 0"));
ProtoInstance31
                  .addFieldValueSync(new autoclass.fieldValue().setNameSync("goalOrientation").setValueSync("0 1 0 0"));
ProtoInstance33
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("ViewpointNode")
              .addChildSync(new autoclass.Viewpoint().setDEFSync("FrustumViewpoint").setDescriptionSync("viewpoint for ViewFrustum").setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)]))));
ProtoInstance33
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("NavigationInfoNode")
              .addChildSync(new autoclass.NavigationInfo().setDEFSync("TestNavigationInfo").setTransitionTypeSync(java.newArray("java.lang.String", ["ANIMATE"])).setVisibilityLimitSync(java.newFloat(100))));
ProtoInstance33
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("visible").setValueSync("false"));
ProtoInstance33
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("lineColor").setValueSync("0.9 0.9 0.9"));
ProtoInstance33
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("frustumColor").setValueSync("0.8 0.8 0.8"));
ProtoInstance33
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("transparency").setValueSync("0.95"));
ProtoInstance34
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("enabled").setValueSync("true"));
ProtoInstance34
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("markerColor").setValueSync("1 0.5 0"));
ProtoInstance34
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("scale").setValueSync("1 1 1"));
ProtoInstance34
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("positionOffsetFromCamera").setValueSync("0 0 -6"));
    X3D0.toFileX3D("../data/CameraExamples.new.x3d");
