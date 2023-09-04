load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
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
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("CameraExamples.x3d"))
        .addMeta(new meta().setName("description").setContent("Camera, CameraShot and CameraMove examples that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement."))
        .addMeta(new meta().setName("documentation").setContent("Two demos are found in the scene, click the \"red text\" on left or right to start. (a) SimpleShotsTest shows Zoom in/out, Pan left/right, Boom up/down, Tilt left/right, with each is defined by a CameraShot collecting a series of CameraMovements. (b) AimPointTest gradually slews the camera view to look at the sliding cube, then follows it around before returning to original viewpoint."))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman and Jeff Weekley"))
        .addMeta(new meta().setName("created").setContent("18 June 2009"))
        .addMeta(new meta().setName("modified").setContent("20 January 2020"))
        .addMeta(new meta().setName("TODO").setContent("Schematron rules, backed up by initialize() checks"))
        .addMeta(new meta().setName("reference").setContent("BeyondViewpointCameraNodesWeb3D2009.pdf"))
        .addMeta(new meta().setName("MovingImage").setContent("CameraExamplesDemo.mp4"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html"))
        .addMeta(new meta().setName("subject").setContent("Camera nodes for Viewpoint navigation control"))
        .addMeta(new meta().setName("reference").setContent("CameraPrototypes.x3d"))
        .addMeta(new meta().setName("reference").setContent("CameraExamplesConsoleLog.txt"))
        .addMeta(new meta().setName("reference").setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.avi"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d"))
        .addMeta(new meta().setName("reference").setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addComments(new CommentsBlock("=============== Camera =============="))
        .addChild(new WorldInfo().setTitle("CameraExamples.x3d"))
        .addChild(new ExternProtoDeclare().setName("Camera").setAppinfo("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images").setUrl(Java.to(["CameraPrototypes.x3d#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#Camera","CameraPrototypes.wrl#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#Camera"], Java.type("java.lang.String[]")))
          .addField(new field().setType(field.TYPE_SFSTRING).setName("description").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this Camera"))
          .addField(new field().setType(field.TYPE_SFVEC3F).setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"))
          .addField(new field().setType(field.TYPE_SFROTATION).setName("orientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("fieldOfView").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("input fraction drives interpolators"))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("set_bind").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("input event binds or unbinds this Camera"))
          .addField(new field().setType(field.TYPE_SFTIME).setName("bindTime").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates when this Camera is bound"))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("isBound").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates whether this Camera is bound or unbound"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("nearClipPlane").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("farClipPlane").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit"))
          .addField(new field().setType(field.TYPE_MFNODE).setName("shots").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes"))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("headlight").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether camera headlight is on or off"))
          .addField(new field().setType(field.TYPE_SFCOLOR).setName("headlightColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera headlight color"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("headlightIntensity").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera headlight intensity"))
          .addField(new field().setType(field.TYPE_SFCOLOR).setName("filterColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter color that modifies virtual lens capture"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("filterTransparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter transparency that modifies virtual lens capture"))
          .addField(new field().setType(field.TYPE_SFVEC3F).setName("upVector").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("upVector changes modify camera orientation (and possibly vice versa)"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("fStop").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("focusDistance").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus"))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("isActive").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
          .addField(new field().setType(field.TYPE_SFTIME).setName("totalDuration").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"))
          .addField(new field().setType(field.TYPE_SFNODE).setName("offlineRender").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("OfflineRender node"))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
          .addComments(new CommentsBlock("Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields")))
        .addComments(new CommentsBlock("=============== CameraShot =============="))
        .addChild(new ExternProtoDeclare().setName("CameraShot").setAppinfo("CameraShot collects a specific set of CameraMovement animations that make up an individual shot").setUrl(Java.to(["CameraPrototypes.x3d#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraShot","CameraPrototypes.wrl#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraShot"], Java.type("java.lang.String[]")))
          .addField(new field().setType(field.TYPE_SFSTRING).setName("description").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraShot"))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraShot can be activated"))
          .addField(new field().setType(field.TYPE_MFNODE).setName("moves").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Set of CameraMovement nodes")
            .addComments(new CommentsBlock("initializing CameraMovement nodes are inserted here by scene author using ProtoInstance")))
          .addField(new field().setType(field.TYPE_SFVEC3F).setName("initialPosition").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera position for this shot"))
          .addField(new field().setType(field.TYPE_SFROTATION).setName("initialOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera rotation for this shot"))
          .addField(new field().setType(field.TYPE_SFVEC3F).setName("initialAimPoint").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("initialFieldOfView").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("initialFStop").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("initialFocusDistance").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus"))
          .addField(new field().setType(field.TYPE_SFTIME).setName("shotDuration").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Subtotal duration of contained CameraMovement move durations"))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("isActive").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress")))
        .addComments(new CommentsBlock("=============== CameraMovement =============="))
        .addChild(new ExternProtoDeclare().setName("CameraMovement").setAppinfo("CameraMovement defines a single camera movement animation").setUrl(Java.to(["CameraPrototypes.x3d#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraMovement","CameraPrototypes.wrl#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraMovement"], Java.type("java.lang.String[]")))
          .addField(new field().setType(field.TYPE_SFSTRING).setName("description").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraMovement"))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraMovement can be activated"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("duration").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Duration in seconds for this move"))
          .addField(new field().setType(field.TYPE_SFVEC3F).setName("goalPosition").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera position for this move"))
          .addField(new field().setType(field.TYPE_SFROTATION).setName("goalOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera rotation for this move"))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("tracking").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether or not camera direction is tracking towards the aimPoint"))
          .addField(new field().setType(field.TYPE_SFVEC3F).setName("goalAimPoint").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal aimPoint for this move, ignored if tracking=false"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("goalFieldOfView").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal fieldOfView for this move"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("goalFStop").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("goalFocusDistance").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus"))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("isActive").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress")))
        .addComments(new CommentsBlock("=============== OfflineRender =============="))
        .addChild(new ExternProtoDeclare().setName("OfflineRender").setAppinfo("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)").setUrl(Java.to(["CameraPrototypes.x3d#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#OfflineRender","CameraPrototypes.wrl#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#OfflineRender"], Java.type("java.lang.String[]")))
          .addField(new field().setType(field.TYPE_SFSTRING).setName("description").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this OfflineRender"))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this OfflineRender can be activated"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("frameRate").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Frames per second recorded for this rendering"))
          .addField(new field().setType(field.TYPE_SFVEC2F).setName("frameSize").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Size of frame in number of pixels width and height"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("pixelAspectRatio").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1"))
          .addField(new field().setType(field.TYPE_SFTIME).setName("set_startTime").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Begin render operation"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("progress").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Progress performing render operation (0..1)"))
          .addField(new field().setType(field.TYPE_SFTIME).setName("renderCompleteTime").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Render operation complete"))
          .addField(new field().setType(field.TYPE_MFSTRING).setName("movieFormat").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output movie (mpeg mp4 etc.), use first supported format"))
          .addField(new field().setType(field.TYPE_MFSTRING).setName("imageFormat").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output images (png jpeg gif tiff etc.) use first supported format"))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
          .addComments(new CommentsBlock("TODO non-photorealistic rendering (NPR) parameters")))
        .addComments(new CommentsBlock("=============== Lights, camera, action! =============="))
        .addChild(new DirectionalLight().setDirection(Java.to([0,-1,0], Java.type("double[]"))).setGlobal(true).setIntensity(0.8))
        .addChild(new NavigationInfo().setType(Java.to(["EXAMINE","FLY","ANY"], Java.type("java.lang.String[]"))))
        .addChild(new Viewpoint().setDescription("Camera test scene entry view").setPosition(Java.to([0,2,12], Java.type("double[]"))))
        .addChild(new Viewpoint().setDescription("Camera test scene from above").setOrientation(Java.to([1,0,0,-1.57079], Java.type("double[]"))).setPosition(Java.to([0,150,0], Java.type("double[]"))))
        .addComments(new CommentsBlock("Keep prototype instances in same file while developing, then move later"))
        .addComments(new CommentsBlock("We will create examples matching those in the paper"))
        .addComments(new CommentsBlock("=============== Camera.SimpleShotsTest =============="))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("Camera").setDEF("Camera.SimpleShotsTest"))
        .addChild(new Group().setDEF("AnimationGroup.SimpleShots")
          .addChild(new TimeSensor().setDEF("CameraTimer.SimpleShots"))
          .addComments(new CommentsBlock("initialize clock to match totalDuration of combined Shot Moves"))
          .addChild(new ROUTE().setFromField("totalDuration").setFromNode("Camera.SimpleShotsTest").setToField("cycleInterval").setToNode("CameraTimer.SimpleShots"))
          .addComments(new CommentsBlock("TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("CameraTimer.SimpleShots").setToField("set_fraction").setToNode("Camera.SimpleShotsTest"))
          .addChild(new Transform().setDEF("Trigger.SimpleShots").setTranslation(Java.to([-4,4,0], Java.type("double[]")))
            .addChild(new BooleanFilter().setDEF("TextTouchActive.SimpleShotsFilter"))
            .addChild(new TouchSensor().setDEF("TextTouch.SimpleShots").setDescription("touch to animate Camera SimpleShotsTest"))
            .addChild(new ROUTE().setFromField("inputTrue").setFromNode("TextTouchActive.SimpleShotsFilter").setToField("set_bind").setToNode("Camera.SimpleShotsTest"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("TextTouch.SimpleShots").setToField("set_boolean").setToNode("TextTouchActive.SimpleShotsFilter"))
            .addChild(new ROUTE().setFromField("touchTime").setFromNode("TextTouch.SimpleShots").setToField("startTime").setToNode("CameraTimer.SimpleShots"))
            .addChild(new Shape()
              .setGeometry(new Text().setString(Java.to(["Click to animate","SimpleShotsTest"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]")))))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDEF("ArtDeco5").setAmbientIntensity(0.24).setDiffuseColor(Java.to([0.945455,0.318988,0.321717], Java.type("double[]"))).setShininess(0.01).setSpecularColor(Java.to([0.072727,0.021705,0.010732], Java.type("double[]")))
                  .addComments(new CommentsBlock("Universal Media Library: ArtDeco 5")))))
            .addComments(new CommentsBlock("Simplify intersection test for user selecting text"))
            .addChild(new Shape().setDEF("TransparentBox")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setTransparency(1)))
              .setGeometry(new Box().setSize(Java.to([6,2,0.0001], Java.type("double[]")))))))
        .addChild(new Group().setDEF("SimpleShotsTargets")
          .addChild(new Transform().setDEF("TargetBoxZoom").setTranslation(Java.to([-50,1,-20], Java.type("double[]")))
            .addChild(new Shape()
              .setGeometry(new Box())
              .setAppearance(new Appearance()
                .setMaterial(new Material())
                .setTexture(new ImageTexture().setUrl(Java.to(["images/CameraMoveZoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveZoom.png"], Java.type("java.lang.String[]"))))))
            .addChild(new Transform().setTranslation(Java.to([0,2,0], Java.type("double[]")))
              .addChild(new Shape()
                .setGeometry(new Text().setString(Java.to(["Zoom in, out"], Java.type("java.lang.String[]")))
                  .setFontStyle(new FontStyle().setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]")))))
                .setAppearance(new Appearance()
                  .setMaterial(new Material())))))
          .addChild(new Transform().setDEF("TargetBoxDolly").setTranslation(Java.to([-40,1,-20], Java.type("double[]")))
            .addChild(new Shape()
              .setGeometry(new Box())
              .setAppearance(new Appearance()
                .setMaterial(new Material())
                .setTexture(new ImageTexture().setUrl(Java.to(["images/CameraMoveDolly.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveDolly.png"], Java.type("java.lang.String[]"))))))
            .addChild(new Transform().setTranslation(Java.to([0,2,0], Java.type("double[]")))
              .addChild(new Shape()
                .setGeometry(new Text().setString(Java.to(["Dolly left, right"], Java.type("java.lang.String[]")))
                  .setFontStyle(new FontStyle().setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]")))))
                .setAppearance(new Appearance()
                  .setMaterial(new Material())))))
          .addChild(new Transform().setDEF("TargetBoxPan").setTranslation(Java.to([-30,1,-20], Java.type("double[]")))
            .addChild(new Shape()
              .setGeometry(new Box())
              .setAppearance(new Appearance()
                .setMaterial(new Material())
                .setTexture(new ImageTexture().setUrl(Java.to(["images/CameraMovePan.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMovePan.png"], Java.type("java.lang.String[]"))))))
            .addChild(new Transform().setTranslation(Java.to([0,2,0], Java.type("double[]")))
              .addChild(new Shape()
                .setGeometry(new Text().setString(Java.to(["Pan left, right"], Java.type("java.lang.String[]")))
                  .setFontStyle(new FontStyle().setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]")))))
                .setAppearance(new Appearance()
                  .setMaterial(new Material())))))
          .addChild(new Transform().setDEF("TargetBoxBoom").setTranslation(Java.to([-20,1,-20], Java.type("double[]")))
            .addChild(new Shape()
              .setGeometry(new Box())
              .setAppearance(new Appearance()
                .setMaterial(new Material())
                .setTexture(new ImageTexture().setUrl(Java.to(["images/CameraMoveBoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveBoom.png"], Java.type("java.lang.String[]"))))))
            .addChild(new Transform().setTranslation(Java.to([0,2,0], Java.type("double[]")))
              .addChild(new Shape()
                .setGeometry(new Text().setString(Java.to(["Boom up, down"], Java.type("java.lang.String[]")))
                  .setFontStyle(new FontStyle().setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]")))))
                .setAppearance(new Appearance()
                  .setMaterial(new Material())))))
          .addChild(new Transform().setDEF("TargetBoxTilt").setTranslation(Java.to([-10,1,-20], Java.type("double[]")))
            .addChild(new Shape()
              .setGeometry(new Box())
              .setAppearance(new Appearance()
                .setMaterial(new Material())
                .setTexture(new ImageTexture().setUrl(Java.to(["images/CameraMoveTilt.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveTilt.png"], Java.type("java.lang.String[]"))))))
            .addChild(new Transform().setTranslation(Java.to([0,2,0], Java.type("double[]")))
              .addChild(new Shape()
                .setGeometry(new Text().setString(Java.to(["Tilt left, right"], Java.type("java.lang.String[]")))
                  .setFontStyle(new FontStyle().setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]")))))
                .setAppearance(new Appearance()
                  .setMaterial(new Material()))))))
        .addComments(new CommentsBlock("=============== Camera.AimPointTest =============="))
        .addChild(ProtoInstance26 = new ProtoInstance().setName("Camera").setDEF("Camera.AimPointTest"))
        .addChild(new Group().setDEF("AnimationGroup.AimPointTest")
          .addChild(new TimeSensor().setDEF("CameraTimer.AimPointTest"))
          .addComments(new CommentsBlock("initialize clock to match totalDuration of combined Shot Moves"))
          .addChild(new ROUTE().setFromField("totalDuration").setFromNode("Camera.AimPointTest").setToField("cycleInterval").setToNode("CameraTimer.AimPointTest"))
          .addComments(new CommentsBlock("TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("CameraTimer.AimPointTest").setToField("set_fraction").setToNode("Camera.AimPointTest"))
          .addChild(new Transform().setDEF("Trigger.AimPointTest").setTranslation(Java.to([4,4,0], Java.type("double[]")))
            .addChild(new BooleanFilter().setDEF("TextTouchActive.AimPointFilter"))
            .addChild(new TouchSensor().setDEF("TextTouch.AimPointTest").setDescription("touch to animate Camera AimPointTest"))
            .addChild(new ROUTE().setFromField("inputTrue").setFromNode("TextTouchActive.AimPointFilter").setToField("set_bind").setToNode("Camera.AimPointTest"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("TextTouch.AimPointTest").setToField("set_boolean").setToNode("TextTouchActive.AimPointFilter"))
            .addChild(new ROUTE().setFromField("touchTime").setFromNode("TextTouch.AimPointTest").setToField("startTime").setToNode("CameraTimer.AimPointTest"))
            .addChild(new Shape()
              .setGeometry(new Text().setString(Java.to(["Click to animate","AimPointTest"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]")))))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("ArtDeco5"))))
            .addChild(new Shape().setUSE("TransparentBox"))))
        .addComments(new CommentsBlock("TODO build a test once implemented"))
        .addChild(ProtoInstance32 = new ProtoInstance().setName("OfflineRender"))
        .addComments(new CommentsBlock("=============== animate a camera shape to visualize view changes =============="))
        .addChild(new Transform().setDEF("CameraShapeTransform").setTranslation(Java.to([0,0.5,0], Java.type("double[]")))
          .addComments(new CommentsBlock("move CameraShape using active Camera"))
          .addChild(new ROUTE().setFromField("position_changed").setFromNode("Camera.SimpleShotsTest").setToField("translation").setToNode("CameraShapeTransform"))
          .addChild(new ROUTE().setFromField("orientation_changed").setFromNode("Camera.SimpleShotsTest").setToField("rotation").setToNode("CameraShapeTransform"))
          .addChild(new ROUTE().setFromField("position").setFromNode("Camera.AimPointTest").setToField("translation").setToNode("CameraShapeTransform"))
          .addChild(new ROUTE().setFromField("orientation_changed").setFromNode("Camera.AimPointTest").setToField("rotation").setToNode("CameraShapeTransform"))
          .addChild(new Transform().setDEF("CameraOffsetTransform").setTranslation(Java.to([0,0,0.25], Java.type("double[]")))
            .addChild(new TouchSensor().setDEF("CameraShapeTouched"))
            .addChild(new Inline().setDEF("CameraShape").setUrl(Java.to(["CameraShape.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraShape.x3d"], Java.type("java.lang.String[]"))))
            .addChild(new Shape().setDEF("SightLine")
              .setGeometry(new IndexedLineSet().setCoordIndex(Java.to([0,1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to([0,0,0,0,0,-100], Java.type("double[]")))))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setEmissiveColor(Java.to([0.8,0.8,0.4], Java.type("double[]")))))))
          .addComments(new CommentsBlock("Display frustum to show camera view within the scene, toggled by user selecting CameraShape"))
          .addChild(new ExternProtoDeclare().setName("ViewFrustum").setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes").setUrl(Java.to(["../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum"], Java.type("java.lang.String[]")))
            .addField(new field().setType(field.TYPE_SFNODE).setName("ViewpointNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("required: insert Viewpoint DEF or USE node for view of interest"))
            .addField(new field().setType(field.TYPE_SFNODE).setName("NavigationInfoNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("required: insert NavigationInfo DEF or USE node of interest"))
            .addField(new field().setType(field.TYPE_SFBOOL).setName("visible").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("whether or not frustum geometry is rendered"))
            .addField(new field().setType(field.TYPE_SFCOLOR).setName("lineColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"))
            .addField(new field().setType(field.TYPE_SFCOLOR).setName("frustumColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("transparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("aspectRatio").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("assumed ratio height/width, default value 0.75"))
            .addField(new field().setType(field.TYPE_SFBOOL).setName("trace").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("debug support, default false")))
          .addChild(ProtoInstance33 = new ProtoInstance().setName("ViewFrustum").setDEF("ViewFrustumNode"))
          .addChild(new BooleanToggle().setDEF("ViewFrustumToggle"))
          .addChild(new ROUTE().setFromField("isActive").setFromNode("CameraShapeTouched").setToField("set_boolean").setToNode("ViewFrustumToggle"))
          .addChild(new ROUTE().setFromField("toggle").setFromNode("ViewFrustumToggle").setToField("set_visible").setToNode("ViewFrustumNode")))
        .addComments(new CommentsBlock("=============== add checkerboard, axes and other things to look at while animating =============="))
        .addChild(new Background().setSkyColor(Java.to([0.282353,0.380392,0.470588], Java.type("double[]"))))
        .addChild(new Transform().setRotation(Java.to([1,0,0,-1.57079], Java.type("double[]"))).setScale(Java.to([10,10,10], Java.type("double[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(0.01).setDiffuseColor(Java.to([1,1,1], Java.type("double[]"))).setShininess(0.05)))
            .setGeometry(new IndexedFaceSet().setColorIndex(Java.to([0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0], Java.type("int[]"))).setColorPerVertex(false).setCoordIndex(Java.to([0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1], Java.type("int[]"))).setNormalPerVertex(false).setSolid(false)
              .setCoord(new Coordinate().setPoint(Java.to([-5.25,5.25,0,-3.75,5.25,0,-2.25,5.25,0,-0.75,5.25,0,0.75,5.25,0,2.25,5.25,0,3.75,5.25,0,5.25,5.25,0,-5.25,3.75,0,-3.75,3.75,0,-2.25,3.75,0,-0.75,3.75,0,0.75,3.75,0,2.25,3.75,0,3.75,3.75,0,5.25,3.75,0,-5.25,2.25,0,-3.75,2.25,0,-2.25,2.25,0,-0.75,2.25,0,0.75,2.25,0,2.25,2.25,0,3.75,2.25,0,5.25,2.25,0,-5.25,0.75,0,-3.75,0.75,0,-2.25,0.75,0,-0.75,0.75,0,0.75,0.75,0,2.25,0.75,0,3.75,0.75,0,5.25,0.75,0,-5.25,-0.75,0,-3.75,-0.75,0,-2.25,-0.75,0,-0.75,-0.75,0,0.75,-0.75,0,2.25,-0.75,0,3.75,-0.75,0,5.25,-0.75,0,-5.25,-2.25,0,-3.75,-2.25,0,-2.25,-2.25,0,-0.75,-2.25,0,0.75,-2.25,0,2.25,-2.25,0,3.75,-2.25,0,5.25,-2.25,0,-5.25,-3.75,0,-3.75,-3.75,0,-2.25,-3.75,0,-0.75,-3.75,0,0.75,-3.75,0,2.25,-3.75,0,3.75,-3.75,0,5.25,-3.75,0,-5.25,-5.25,0,-3.75,-5.25,0,-2.25,-5.25,0,-0.75,-5.25,0,0.75,-5.25,0,2.25,-5.25,0,3.75,-5.25,0,5.25,-5.25,0], Java.type("double[]"))))
              .setColor(new Color().setColor(Java.to([0.435294,0.741176,0,0,0.560784,0.580392], Java.type("double[]")))))))
        .addChild(new Transform().setScale(Java.to([3,3,3], Java.type("double[]"))).setTranslation(Java.to([0,0.25,0], Java.type("double[]")))
          .addChild(new Inline().setDEF("CoordinateAxes").setUrl(Java.to(["../data/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"], Java.type("java.lang.String[]")))))
        .addChild(new Transform().setDEF("MovingBoxTransform")
          .addChild(new PositionInterpolator().setDEF("BoxPath").setKey(Java.to([0,0.25,0.5,0.75,1], Java.type("double[]"))).setKeyValue(Java.to([-5,1,5,45,1,5,45,1,-45,-5,1,-45,-5,1,5], Java.type("double[]"))))
          .addChild(new TimeSensor().setDEF("BoxTimer").setCycleInterval(10).setLoop(true))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("BoxPath").setToField("translation").setToNode("MovingBoxTransform"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("BoxPath").setToField("goalAimPoint").setToNode("MoveAimPoint3.1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("BoxPath").setToField("goalAimPoint").setToNode("MoveAimPoint3.2"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("BoxPath").setToField("goalAimPoint").setToNode("MoveAimPoint3.3"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BoxTimer").setToField("set_fraction").setToNode("BoxPath"))
          .addChild(new Shape()
            .setGeometry(new Box())
            .setAppearance(new Appearance()
              .setMaterial(new Material())
              .setTexture(new ImageTexture().setUrl(Java.to(["../earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"], Java.type("java.lang.String[]")))))))
        .addComments(new CommentsBlock("================ CrossHair visualization for center of screen ================"))
        .addChild(new ExternProtoDeclare().setName("CrossHair").setAppinfo("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point").setUrl(Java.to(["../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"], Java.type("java.lang.String[]")))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("enabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("whether CrissHair orititype is enabled or not"))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("set_enabled").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("control whether enabled/disabled"))
          .addField(new field().setType(field.TYPE_SFCOLOR).setName("markerColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("color of CrossHair marker"))
          .addField(new field().setType(field.TYPE_SFVEC3F).setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("size of CrossHair in meters"))
          .addField(new field().setType(field.TYPE_SFVEC3F).setName("positionOffsetFromCamera").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("distance in front of HUD viewpoint")))
        .addChild(ProtoInstance34 = new ProtoInstance().setName("CrossHair").setDEF("CrossHairInstance"))
        .addComments(new CommentsBlock("turn on CrossHairInstance when animated camera viewpoints are bound"))
        .addChild(new ROUTE().setFromField("isBound").setFromNode("Camera.SimpleShotsTest").setToField("set_enabled").setToNode("CrossHairInstance"))
        .addChild(new ROUTE().setFromField("isBound").setFromNode("Camera.AimPointTest").setToField("set_enabled").setToNode("CrossHairInstance"))
        .addComments(new CommentsBlock("turn off CrossHairInstance when animated camera viewpoints are unbound <BooleanFilter DEF='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.SimpleShotsTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.AimPointTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='inputNegate' fromNode='NegateCrossHair' toField='set_enabled' toNode='CrossHairInstance'/>"))
        .addComments(new CommentsBlock("=============== TODO Launch Prototype Example =============="))
        .addChild(new Anchor().setDescription("launch CameraExample scene").setParameter(Java.to(["target=_blank"], Java.type("java.lang.String[]"))).setUrl(Java.to(["CameraExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.x3d","CameraExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.wrl"], Java.type("java.lang.String[]")))
          .addChild(new Transform().setTranslation(Java.to([0,-3,0], Java.type("double[]")))
            .addChild(new Shape()
              .setGeometry(new Text().setString(Java.to(["CameraPrototype","defines a prototype","","Click on this text to see","CameraExample scene"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))).setSize(0.5)))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to([1,1,0.2], Java.type("double[]")))))))))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("description").setValue("SimpleShotsTest for camera Zoom Dolly Pan Boom and Tilt"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("headlight").setValue("true"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("position").setValue("-4 4 10"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("shots")
            .addChild(ProtoInstance1 = new ProtoInstance().setName("CameraShot").setDEF("Zoom"))
            .addChild(ProtoInstance5 = new ProtoInstance().setName("CameraShot").setDEF("Dolly"))
            .addChild(ProtoInstance9 = new ProtoInstance().setName("CameraShot").setDEF("Pan"))
            .addChild(ProtoInstance14 = new ProtoInstance().setName("CameraShot").setDEF("CameraBoom"))
            .addChild(ProtoInstance18 = new ProtoInstance().setName("CameraShot").setDEF("CameraTilt")));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("description").setValue("Simple shot of Camera Zoom"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("initialPosition").setValue("-50 1 -10"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("initialOrientation").setValue("0 1 0 0"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("moves")
                .addChild(ProtoInstance2 = new ProtoInstance().setName("CameraMovement"))
                .addChild(ProtoInstance3 = new ProtoInstance().setName("CameraMovement"))
                .addChild(ProtoInstance4 = new ProtoInstance().setName("CameraMovement")));
ProtoInstance2
                  .addFieldValue(new fieldValue().setName("description").setValue("Camera Zoom In"));
ProtoInstance2
                  .addFieldValue(new fieldValue().setName("duration").setValue("3"));
ProtoInstance2
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("-50 1 -15"));
ProtoInstance2
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance3
                  .addFieldValue(new fieldValue().setName("description").setValue("Camera Zoom Out"));
ProtoInstance3
                  .addFieldValue(new fieldValue().setName("duration").setValue("3"));
ProtoInstance3
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("-50 1 -10"));
ProtoInstance3
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance4
                  .addFieldValue(new fieldValue().setName("description").setValue("Camera Pause"));
ProtoInstance4
                  .addFieldValue(new fieldValue().setName("duration").setValue("1"));
ProtoInstance4
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("-50 1 -10"));
ProtoInstance4
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("description").setValue("Simple shot of Camera Dolly"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("initialPosition").setValue("-40 1 -10"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("initialOrientation").setValue("0 1 0 0"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("moves")
                .addChild(ProtoInstance6 = new ProtoInstance().setName("CameraMovement").setDEF("DollyMove1"))
                .addChild(ProtoInstance7 = new ProtoInstance().setName("CameraMovement"))
                .addChild(ProtoInstance8 = new ProtoInstance().setName("CameraMovement")));
ProtoInstance6
                  .addFieldValue(new fieldValue().setName("description").setValue("Camera Dolly from Right to Left"));
ProtoInstance6
                  .addFieldValue(new fieldValue().setName("duration").setValue("3"));
ProtoInstance6
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("-45 1 -10"));
ProtoInstance6
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance7
                  .addFieldValue(new fieldValue().setName("description").setValue("Camera Dolly from Left to Right"));
ProtoInstance7
                  .addFieldValue(new fieldValue().setName("duration").setValue("3"));
ProtoInstance7
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("-40 1 -10"));
ProtoInstance7
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance8
                  .addFieldValue(new fieldValue().setName("description").setValue("Camera Pause"));
ProtoInstance8
                  .addFieldValue(new fieldValue().setName("duration").setValue("1"));
ProtoInstance8
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("-40 1 -10"));
ProtoInstance8
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance9
              .addFieldValue(new fieldValue().setName("description").setValue("Simple shot of Camera Pan left right and back to center"));
ProtoInstance9
              .addFieldValue(new fieldValue().setName("initialPosition").setValue("-30 1 -10"));
ProtoInstance9
              .addFieldValue(new fieldValue().setName("initialOrientation").setValue("0 1 0 0"));
ProtoInstance9
              .addFieldValue(new fieldValue().setName("moves")
                .addChild(ProtoInstance10 = new ProtoInstance().setName("CameraMovement").setDEF("PanLeft"))
                .addChild(ProtoInstance11 = new ProtoInstance().setName("CameraMovement").setDEF("PanRight"))
                .addChild(ProtoInstance12 = new ProtoInstance().setName("CameraMovement"))
                .addChild(ProtoInstance13 = new ProtoInstance().setName("CameraMovement")));
ProtoInstance10
                  .addFieldValue(new fieldValue().setName("description").setValue("Pan Left"));
ProtoInstance10
                  .addFieldValue(new fieldValue().setName("duration").setValue("2"));
ProtoInstance10
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("-30 1 -10"));
ProtoInstance10
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 1 0 0.4"));
ProtoInstance11
                  .addFieldValue(new fieldValue().setName("description").setValue("Pan Right"));
ProtoInstance11
                  .addFieldValue(new fieldValue().setName("duration").setValue("3"));
ProtoInstance11
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("-30 1 -10"));
ProtoInstance11
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 1 0 -0.4"));
ProtoInstance12
                  .addFieldValue(new fieldValue().setName("description").setValue("Camera Pan back to Center"));
ProtoInstance12
                  .addFieldValue(new fieldValue().setName("duration").setValue("2"));
ProtoInstance12
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("-30 1 -10"));
ProtoInstance12
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance13
                  .addFieldValue(new fieldValue().setName("description").setValue("Camera Pause"));
ProtoInstance13
                  .addFieldValue(new fieldValue().setName("duration").setValue("2"));
ProtoInstance13
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("-30 1 -10"));
ProtoInstance13
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance14
              .addFieldValue(new fieldValue().setName("description").setValue("Camera Boom"));
ProtoInstance14
              .addFieldValue(new fieldValue().setName("initialPosition").setValue("-20 1 -10"));
ProtoInstance14
              .addFieldValue(new fieldValue().setName("initialOrientation").setValue("0 1 0 0"));
ProtoInstance14
              .addFieldValue(new fieldValue().setName("moves")
                .addChild(ProtoInstance15 = new ProtoInstance().setName("CameraMovement").setDEF("CameraBoomUp"))
                .addChild(ProtoInstance16 = new ProtoInstance().setName("CameraMovement").setDEF("BoomDown"))
                .addChild(ProtoInstance17 = new ProtoInstance().setName("CameraMovement").setDEF("BoomPause")));
ProtoInstance15
                  .addFieldValue(new fieldValue().setName("description").setValue("Camera Boom Up"));
ProtoInstance15
                  .addFieldValue(new fieldValue().setName("duration").setValue("3"));
ProtoInstance15
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("-20 5 -10"));
ProtoInstance15
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance16
                  .addFieldValue(new fieldValue().setName("description").setValue("Camera Boom Down"));
ProtoInstance16
                  .addFieldValue(new fieldValue().setName("duration").setValue("3"));
ProtoInstance16
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("-20 1 -10"));
ProtoInstance16
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance17
                  .addFieldValue(new fieldValue().setName("description").setValue("Camera Pause"));
ProtoInstance17
                  .addFieldValue(new fieldValue().setName("duration").setValue("2"));
ProtoInstance17
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("-20 1 -10"));
ProtoInstance17
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance18
              .addFieldValue(new fieldValue().setName("description").setValue("Camera Tilt"));
ProtoInstance18
              .addFieldValue(new fieldValue().setName("initialPosition").setValue("-10 1 -10"));
ProtoInstance18
              .addFieldValue(new fieldValue().setName("initialOrientation").setValue("0 0 1 0"));
ProtoInstance18
              .addFieldValue(new fieldValue().setName("traceEnabled").setValue("true"));
ProtoInstance18
              .addFieldValue(new fieldValue().setName("moves")
                .addChild(ProtoInstance19 = new ProtoInstance().setName("CameraMovement"))
                .addChild(ProtoInstance20 = new ProtoInstance().setName("CameraMovement").setDEF("TiltDown"))
                .addChild(ProtoInstance21 = new ProtoInstance().setName("CameraMovement").setDEF("TiltPause"))
                .addChild(ProtoInstance22 = new ProtoInstance().setName("CameraMovement"))
                .addChild(ProtoInstance23 = new ProtoInstance().setName("CameraMovement"))
                .addChild(ProtoInstance24 = new ProtoInstance().setName("CameraMovement").setDEF("TiltReset"))
                .addChild(ProtoInstance25 = new ProtoInstance().setName("CameraMovement").setDEF("TiltUp")));
ProtoInstance19
                  .addFieldValue(new fieldValue().setName("description").setValue("Camera Tilt Pause"));
ProtoInstance19
                  .addFieldValue(new fieldValue().setName("duration").setValue("1"));
ProtoInstance19
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("-10 1 -10"));
ProtoInstance19
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 0 1 0"));
ProtoInstance20
                  .addFieldValue(new fieldValue().setName("description").setValue("Camera Tilt Left"));
ProtoInstance20
                  .addFieldValue(new fieldValue().setName("duration").setValue("3"));
ProtoInstance20
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("-10 1 -10"));
ProtoInstance20
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 0 1 0.785"));
ProtoInstance21
                  .addFieldValue(new fieldValue().setName("description").setValue("Camera Tilt Pause"));
ProtoInstance21
                  .addFieldValue(new fieldValue().setName("duration").setValue("1"));
ProtoInstance21
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("-10 1 -10"));
ProtoInstance21
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 0 1 0.785"));
ProtoInstance22
                  .addFieldValue(new fieldValue().setName("description").setValue("Camera Tilt Right"));
ProtoInstance22
                  .addFieldValue(new fieldValue().setName("duration").setValue("3"));
ProtoInstance22
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("-10 1 -10"));
ProtoInstance22
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 0 1 -0.785"));
ProtoInstance23
                  .addFieldValue(new fieldValue().setName("description").setValue("Camera Tilt Pause"));
ProtoInstance23
                  .addFieldValue(new fieldValue().setName("duration").setValue("1"));
ProtoInstance23
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("-10 1 -10"));
ProtoInstance23
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 0 1 -0.785"));
ProtoInstance24
                  .addFieldValue(new fieldValue().setName("description").setValue("Camera Tilt Reset"));
ProtoInstance24
                  .addFieldValue(new fieldValue().setName("duration").setValue("1"));
ProtoInstance24
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("-10 1 -10"));
ProtoInstance24
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 0 1 0"));
ProtoInstance25
                  .addFieldValue(new fieldValue().setName("description").setValue("Return to home"));
ProtoInstance25
                  .addFieldValue(new fieldValue().setName("duration").setValue("2"));
ProtoInstance25
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("0 2 12"));
ProtoInstance25
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 0 1 0"));
ProtoInstance26
          .addFieldValue(new fieldValue().setName("description").setValue("AimPointTest for moving camera tracking moving target"));
ProtoInstance26
          .addFieldValue(new fieldValue().setName("position").setValue("4 4 10"));
ProtoInstance26
          .addFieldValue(new fieldValue().setName("shots")
            .addChild(ProtoInstance27 = new ProtoInstance().setName("CameraShot").setDEF("Shot5")));
ProtoInstance27
              .addFieldValue(new fieldValue().setName("description").setValue("#3 Tracking shot"));
ProtoInstance27
              .addFieldValue(new fieldValue().setName("initialPosition").setValue("6 6 10"));
ProtoInstance27
              .addFieldValue(new fieldValue().setName("initialOrientation").setValue("0 1 0 0"));
ProtoInstance27
              .addFieldValue(new fieldValue().setName("moves")
                .addChild(ProtoInstance28 = new ProtoInstance().setName("CameraMovement").setDEF("MoveAimPoint3.1")
                  .addComments(new CommentsBlock("goalAimPoint modified by ROUTE to match moving Box")))
                .addChild(ProtoInstance29 = new ProtoInstance().setName("CameraMovement").setDEF("MoveAimPoint3.2")
                  .addComments(new CommentsBlock("goalAimPoint modified by ROUTE to match moving Box")))
                .addChild(ProtoInstance30 = new ProtoInstance().setName("CameraMovement").setDEF("MoveAimPoint3.3")
                  .addComments(new CommentsBlock("goalAimPoint modified by ROUTE to match moving Box")))
                .addChild(ProtoInstance31 = new ProtoInstance().setName("CameraMovement").setDEF("MoveAimPoint3.4")
                  .addComments(new CommentsBlock("can test tracking or not using these values"))));
ProtoInstance28
                  .addFieldValue(new fieldValue().setName("description").setValue("AimPoint 3.1 moving BoxPath"));
ProtoInstance28
                  .addFieldValue(new fieldValue().setName("tracking").setValue("true"));
ProtoInstance28
                  .addFieldValue(new fieldValue().setName("duration").setValue("8"));
ProtoInstance28
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("6 6 10"));
ProtoInstance29
                  .addFieldValue(new fieldValue().setName("description").setValue("AimPoint 3.2 pan right while tracking"));
ProtoInstance29
                  .addFieldValue(new fieldValue().setName("tracking").setValue("true"));
ProtoInstance29
                  .addFieldValue(new fieldValue().setName("duration").setValue("8"));
ProtoInstance29
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("40 6 12"));
ProtoInstance30
                  .addFieldValue(new fieldValue().setName("description").setValue("AimPoint 3.3 boom up while tracking"));
ProtoInstance30
                  .addFieldValue(new fieldValue().setName("tracking").setValue("true"));
ProtoInstance30
                  .addFieldValue(new fieldValue().setName("duration").setValue("3"));
ProtoInstance30
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("40 20 13"));
ProtoInstance31
                  .addFieldValue(new fieldValue().setName("description").setValue("AimPoint 3.4 restore camera back to home"));
ProtoInstance31
                  .addFieldValue(new fieldValue().setName("tracking").setValue("true"));
ProtoInstance31
                  .addFieldValue(new fieldValue().setName("duration").setValue("5"));
ProtoInstance31
                  .addFieldValue(new fieldValue().setName("goalPosition").setValue("4 4 10"));
ProtoInstance31
                  .addFieldValue(new fieldValue().setName("goalAimPoint").setValue("4 4 0"));
ProtoInstance31
                  .addFieldValue(new fieldValue().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance33
            .addFieldValue(new fieldValue().setName("ViewpointNode")
              .addChild(new Viewpoint().setDEF("FrustumViewpoint").setDescription("viewpoint for ViewFrustum").setPosition(Java.to([0,0,0], Java.type("double[]")))));
ProtoInstance33
            .addFieldValue(new fieldValue().setName("NavigationInfoNode")
              .addChild(new NavigationInfo().setDEF("TestNavigationInfo").setTransitionType(Java.to(["ANIMATE"], Java.type("java.lang.String[]"))).setVisibilityLimit(100)));
ProtoInstance33
            .addFieldValue(new fieldValue().setName("visible").setValue("false"));
ProtoInstance33
            .addFieldValue(new fieldValue().setName("lineColor").setValue("0.9 0.9 0.9"));
ProtoInstance33
            .addFieldValue(new fieldValue().setName("frustumColor").setValue("0.8 0.8 0.8"));
ProtoInstance33
            .addFieldValue(new fieldValue().setName("transparency").setValue("0.95"));
ProtoInstance34
          .addFieldValue(new fieldValue().setName("enabled").setValue("true"));
ProtoInstance34
          .addFieldValue(new fieldValue().setName("markerColor").setValue("1 0.5 0"));
ProtoInstance34
          .addFieldValue(new fieldValue().setName("scale").setValue("1 1 1"));
ProtoInstance34
          .addFieldValue(new fieldValue().setName("positionOffsetFromCamera").setValue("0 0 -6"));
    X3D0.toFileX3D("../data/CameraExamples.new.graal.x3d");
