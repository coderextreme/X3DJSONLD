var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.2")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("CameraPrototypes.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement."))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("Don Brutzman and Jeff Weekley"))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("16 March 2009"))
        .addMetaSync(new autoclass.meta().setNameSync("modified").setContentSync("25 October 2016"))
        .addMetaSync(new autoclass.meta().setNameSync("TODO").setContentSync("Schematron rules, backed up by initialize() checks"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("BeyondViewpointCameraNodesWeb3D2009.pdf"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html"))
        .addMetaSync(new autoclass.meta().setNameSync("subject").setContentSync("Camera nodes for Viewpoint navigation control"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("CameraExamples.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMetaSync(new autoclass.meta().setNameSync("license").setContentSync("../license.html")))
      .setSceneSync(new autoclass.Scene()
        .addCommentsSync(new autoclass.CommentsBlock("=============== Camera =============="))
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("Camera").setAppinfoSync("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.")
          .setProtoInterfaceSync(new autoclass.ProtoInterface()
            .addCommentsSync(new autoclass.CommentsBlock("Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFSTRING).setNameSync("description").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Text description to be displayed for this Camera"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("position").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated").setValueSync("0 0 10"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFROTATION).setNameSync("orientation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated").setValueSync("0 0 1 0"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("fieldOfView").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("pi/4").setValueSync("0.7854"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("set_fraction").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfoSync("input fraction drives interpolators"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("set_bind").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfoSync("input event binds or unbinds this Camera"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("bindTime").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("output event indicates when this Camera is bound"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("isBound").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("output event indicates whether this Camera is bound or unbound"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("nearClipPlane").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]").setValueSync("0.25"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("farClipPlane").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit").setValueSync("0"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFNODE).setNameSync("shots").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Array of CameraShot nodes which in turn contain CameraMovement nodes")
              .addCommentsSync(new autoclass.CommentsBlock("initialization nodes (if any) go here")))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("headlight").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Whether camera headlight is on or off").setValueSync("true"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFCOLOR).setNameSync("headlightColor").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Camera headlight color").setValueSync("1 1 1"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("headlightIntensity").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Camera headlight intensity").setValueSync("1"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFCOLOR).setNameSync("filterColor").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Camera filter color that modifies virtual lens capture").setValueSync("1 1 1"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("filterTransparency").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Camera filter transparency that modifies virtual lens capture").setValueSync("1"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("upVector").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("upVector changes modify camera orientation (and possibly vice versa)").setValueSync("0 1 0"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("fStop").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Focal length divided effective aperture diameter indicating width of focal plane").setValueSync("5.6"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("focusDistance").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Distance to focal plane of sharpest focus").setValueSync("10"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("isActive").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Mark start/stop with true/false output respectively useful to trigger external animations"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("totalDuration").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("offlineRender").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("OfflineRender node")
              .addCommentsSync(new autoclass.CommentsBlock("initialization node (if any) goes here")))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("traceEnabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("enable console output to trace script computations and prototype progress").setValueSync("false")))
          .setProtoBodySync(new autoclass.ProtoBody()
            .addChildSync(new autoclass.Viewpoint().setDEFSync("CameraViewpoint")
              .setISSync(new autoclass.IS()
                .addConnectSync(new autoclass.connect().setNodeFieldSync("description").setProtoFieldSync("description"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("position").setProtoFieldSync("position"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("orientation").setProtoFieldSync("orientation"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("fieldOfView").setProtoFieldSync("fieldOfView"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("set_bind").setProtoFieldSync("set_bind"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("bindTime").setProtoFieldSync("bindTime"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("isBound").setProtoFieldSync("isBound"))))
            .addCommentsSync(new autoclass.CommentsBlock("NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation"))
            .addChildSync(new autoclass.NavigationInfo().setTypeSync(java.newArray("java.lang.String", ["EXAMINE","FLY","ANY"])).setDEFSync("CameraNavInfo")
              .setISSync(new autoclass.IS()
                .addConnectSync(new autoclass.connect().setNodeFieldSync("set_bind").setProtoFieldSync("set_bind"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("headlight").setProtoFieldSync("headlight"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("visibilityLimit").setProtoFieldSync("farClipPlane"))
                .addCommentsSync(new autoclass.CommentsBlock("No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing."))))
            .addCommentsSync(new autoclass.CommentsBlock("this DirectionalLight replaces NavigationInfo headlight in order to add color capability"))
            .addChildSync(new autoclass.DirectionalLight().setDEFSync("CameraDirectionalLight").setGlobalSync(true)
              .addCommentsSync(new autoclass.CommentsBlock("TODO confirm other default field values match NavigationInfo spec"))
              .setISSync(new autoclass.IS()
                .addConnectSync(new autoclass.connect().setNodeFieldSync("on").setProtoFieldSync("headlight"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("color").setProtoFieldSync("headlightColor"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("intensity").setProtoFieldSync("headlightIntensity"))))
            .addChildSync(new autoclass.PositionInterpolator().setDEFSync("CameraPositionInterpolator").setKeySync(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValueSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0)]))
              .setISSync(new autoclass.IS()
                .addConnectSync(new autoclass.connect().setNodeFieldSync("set_fraction").setProtoFieldSync("set_fraction"))))
            .addChildSync(new autoclass.OrientationInterpolator().setDEFSync("CameraOrientationInterpolator").setKeySync(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValueSync(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0)]))
              .setISSync(new autoclass.IS()
                .addConnectSync(new autoclass.connect().setNodeFieldSync("set_fraction").setProtoFieldSync("set_fraction"))))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("value_changed").setFromNodeSync("CameraPositionInterpolator").setToFieldSync("position").setToNodeSync("CameraViewpoint"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("value_changed").setFromNodeSync("CameraOrientationInterpolator").setToFieldSync("orientation").setToNodeSync("CameraViewpoint"))
            .addChildSync(new autoclass.Script().setDEFSync("CameraScript").setDirectOutputSync(true).setMustEvaluateSync(true)
              .addCommentsSync(new autoclass.CommentsBlock("binding is controlled externally, all camera operations proceed the same regardless of whether bound or not"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFSTRING).setNameSync("description").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Text description to be displayed for this Camera"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("position").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Camera position in local transformation frame"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFROTATION).setNameSync("orientation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Camera rotation in local transformation frame"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("set_fraction").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfoSync("input fraction drives interpolators"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("set_bind").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfoSync("input event binds or unbinds this Camera"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("fieldOfView").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("pi/4"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("nearClipPlane").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Vector distance to near clipping plane"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("farClipPlane").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Vector distance to far clipping plane"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFNODE).setNameSync("shots").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Array of CameraShot nodes which in turn contain CameraMovement nodes")
                .addCommentsSync(new autoclass.CommentsBlock("initialization nodes (if any) go here")))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFCOLOR).setNameSync("filterColor").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Camera filter color that modifies virtual lens capture"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("filterTransparency").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Camera filter transparency that modifies virtual lens capture"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("upVector").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("upVector changes modify camera orientation (and possibly vice versa)"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("fStop").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Focal length divided effective aperture diameter indicating width of focal plane"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("focusDistance").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Distance to focal plane of sharpest focus"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("isActive").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Mark start/stop with true/false output respectively useful to trigger external animations"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("totalDuration").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("offlineRender").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("OfflineRender node")
                .addCommentsSync(new autoclass.CommentsBlock("initialization node (if any) goes here")))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("ViewpointNode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("node reference to permit getting setting fields from within Script")
                .addChildSync(new autoclass.Viewpoint().setUSESync("CameraViewpoint")))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("NavInfoNode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("node reference to permit getting setting fields from within Script")
                .addChildSync(new autoclass.NavigationInfo().setUSESync("CameraNavInfo")))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("CameraPI").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("node reference to permit getting setting fields from within Script")
                .addChildSync(new autoclass.PositionInterpolator().setUSESync("CameraPositionInterpolator")))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("CameraOI").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("node reference to permit getting setting fields from within Script")
                .addChildSync(new autoclass.OrientationInterpolator().setUSESync("CameraOrientationInterpolator")))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFFLOAT).setNameSync("key").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("key array for interpolators"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFVEC3F).setNameSync("keyValuePosition").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("keyValue array for PositionInterpolator"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFROTATION).setNameSync("keyValueOrientation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("keyValue array for OrientationInterpolator"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("animated").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events").setValueSync("false"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("initialized").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("perform checkShots() function once immediately after initialization").setValueSync("false"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFINT32).setNameSync("shotCount").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("how many CameraShot nodes are contained in shots array").setValueSync("0"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFINT32).setNameSync("movesCount").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("how many CameraMove nodes are contained in moves array").setValueSync("0"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("frameCount").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("how many frames were created in current loop").setValueSync("0"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("startTime").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("holding variable").setValueSync("0"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("priorTraceTime").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("holding variable").setValueSync("0"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("traceEnabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("enable console output to trace script computations and prototype progress"))
              .setISSync(new autoclass.IS()
                .addConnectSync(new autoclass.connect().setNodeFieldSync("description").setProtoFieldSync("description"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("position").setProtoFieldSync("position"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("orientation").setProtoFieldSync("orientation"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("set_fraction").setProtoFieldSync("set_fraction"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("set_bind").setProtoFieldSync("set_bind"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("fieldOfView").setProtoFieldSync("fieldOfView"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("nearClipPlane").setProtoFieldSync("nearClipPlane"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("farClipPlane").setProtoFieldSync("farClipPlane"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("shots").setProtoFieldSync("shots"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("filterColor").setProtoFieldSync("filterColor"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("filterTransparency").setProtoFieldSync("filterTransparency"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("upVector").setProtoFieldSync("upVector"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("fStop").setProtoFieldSync("fStop"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("focusDistance").setProtoFieldSync("focusDistance"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("isActive").setProtoFieldSync("isActive"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("totalDuration").setProtoFieldSync("totalDuration"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("offlineRender").setProtoFieldSync("offlineRender"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("traceEnabled").setProtoFieldSync("traceEnabled")))
              .setSourceCodeSync("ecmascript:\n"+
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
"}"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("position").setFromNodeSync("CameraScript").setToFieldSync("position").setToNodeSync("CameraViewpoint"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("orientation").setFromNodeSync("CameraScript").setToFieldSync("orientation").setToNodeSync("CameraViewpoint"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("isActive").setFromNodeSync("CameraScript").setToFieldSync("set_bind").setToNodeSync("CameraViewpoint"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("isActive").setFromNodeSync("CameraScript").setToFieldSync("set_bind").setToNodeSync("CameraNavInfo"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("isActive").setFromNodeSync("CameraScript").setToFieldSync("on").setToNodeSync("CameraDirectionalLight"))))
        .addCommentsSync(new autoclass.CommentsBlock("=============== CameraShot =============="))
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("CameraShot").setAppinfoSync("CameraShot collects a specific set of CameraMovement animations that make up an individual shot.")
          .setProtoInterfaceSync(new autoclass.ProtoInterface()
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFSTRING).setNameSync("description").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Text description to be displayed for this CameraShot"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("enabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Whether this CameraShot can be activated").setValueSync("true"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFNODE).setNameSync("moves").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Set of CameraMovement nodes")
              .addCommentsSync(new autoclass.CommentsBlock("initializing CameraMovement nodes are inserted here by scene author using ProtoInstance")))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("initialPosition").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Setup to reinitialize camera position for this shot").setValueSync("0 0 10"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFROTATION).setNameSync("initialOrientation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Setup to reinitialize camera rotation for this shot").setValueSync("0 0 1 0"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("initialAimPoint").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Setup to reinitialize aimpoint (relative location for camera direction) for this shot").setValueSync("0 0 0"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("initialFieldOfView").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("pi/4").setValueSync("0.7854"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("initialFStop").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Focal length divided effective aperture diameter indicating width of focal plane").setValueSync("5.6"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("initialFocusDistance").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Distance to focal plane of sharpest focus").setValueSync("10"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("shotDuration").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Subtotal duration of contained CameraMovement move durations"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("isActive").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Mark start/stop with true/false output respectively useful to trigger external animations"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("traceEnabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("enable console output to trace script computations and prototype progress").setValueSync("false")))
          .setProtoBodySync(new autoclass.ProtoBody()
            .addChildSync(new autoclass.Script().setDEFSync("CameraShotScript").setDirectOutputSync(true).setMustEvaluateSync(true)
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFSTRING).setNameSync("description").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Text description to be displayed for this CameraShot"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("enabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Whether this CameraShot can be activated"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFNODE).setNameSync("moves").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Set of CameraMovement nodes")
                .addCommentsSync(new autoclass.CommentsBlock("initialization nodes (if any) go here")))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("initialPosition").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Setup to reinitialize camera position for this shot"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFROTATION).setNameSync("initialOrientation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Setup to reinitialize camera rotation for this shot"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("initialAimPoint").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("initialFieldOfView").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("pi/4"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("initialFStop").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Focal length divided effective aperture diameter indicating width of focal plane"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("initialFocusDistance").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Distance to focal plane of sharpest focus"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("shotDuration").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Subtotal duration of contained CameraMovement move durations"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("isActive").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Mark start/stop with true/false output respectively useful to trigger external animations"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("traceEnabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("enable console output to trace script computations and prototype progress"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFFLOAT).setNameSync("key").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("key array for interpolators"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFVEC3F).setNameSync("keyValuePosition").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("keyValue array for PositionInterpolator"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFROTATION).setNameSync("keyValueOrientation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("keyValue array for OrientationInterpolator"))
              .setISSync(new autoclass.IS()
                .addConnectSync(new autoclass.connect().setNodeFieldSync("description").setProtoFieldSync("description"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("enabled").setProtoFieldSync("enabled"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("moves").setProtoFieldSync("moves"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("initialPosition").setProtoFieldSync("initialPosition"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("initialOrientation").setProtoFieldSync("initialOrientation"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("initialAimPoint").setProtoFieldSync("initialAimPoint"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("initialFieldOfView").setProtoFieldSync("initialFieldOfView"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("initialFStop").setProtoFieldSync("initialFStop"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("initialFocusDistance").setProtoFieldSync("initialFocusDistance"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("shotDuration").setProtoFieldSync("shotDuration"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("isActive").setProtoFieldSync("isActive"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("traceEnabled").setProtoFieldSync("traceEnabled")))
              .setSourceCodeSync("ecmascript:\n"+
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
"}"))
            .addCommentsSync(new autoclass.CommentsBlock("Add any ROUTEs here, going from Script to other nodes within ProtoBody"))))
        .addCommentsSync(new autoclass.CommentsBlock("=============== CameraMovement =============="))
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("CameraMovement").setAppinfoSync("CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.")
          .setProtoInterfaceSync(new autoclass.ProtoInterface()
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFSTRING).setNameSync("description").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Text description to be displayed for this CameraMovement"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("enabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Whether this CameraMovement can be activated").setValueSync("true"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("duration").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Duration in seconds for this move").setValueSync("0"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("goalPosition").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Goal camera position for this move").setValueSync("0 0 10"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFROTATION).setNameSync("goalOrientation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Goal camera rotation for this move").setValueSync("0 0 1 0"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("tracking").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Whether or not camera direction is tracking towards the aimPoint").setValueSync("false"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("goalAimPoint").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Goal aimPoint for this move, ignored if tracking=false").setValueSync("0 0 0"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("goalFieldOfView").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Goal fieldOfView for this move").setValueSync("0.7854"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("goalFStop").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Focal length divided effective aperture diameter indicating width of focal plane").setValueSync("5.6"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("goalFocusDistance").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Distance to focal plane of sharpest focus").setValueSync("10"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("isActive").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Mark start/stop with true/false output respectively useful to trigger external animations"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("traceEnabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("enable console output to trace script computations and prototype progress").setValueSync("false")))
          .setProtoBodySync(new autoclass.ProtoBody()
            .addCommentsSync(new autoclass.CommentsBlock("First node determines node type of this prototype"))
            .addCommentsSync(new autoclass.CommentsBlock("Subsequent nodes do not render, but still must be a valid X3D subgraph"))
            .addCommentsSync(new autoclass.CommentsBlock("Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events"))
            .addChildSync(new autoclass.Script().setDEFSync("CameraMovementScript").setDirectOutputSync(true).setMustEvaluateSync(true)
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
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("traceEnabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("enable console output to trace script computations and prototype progress"))
              .setISSync(new autoclass.IS()
                .addConnectSync(new autoclass.connect().setNodeFieldSync("description").setProtoFieldSync("description"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("enabled").setProtoFieldSync("enabled"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("duration").setProtoFieldSync("duration"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("goalPosition").setProtoFieldSync("goalPosition"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("goalOrientation").setProtoFieldSync("goalOrientation"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("tracking").setProtoFieldSync("tracking"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("goalAimPoint").setProtoFieldSync("goalAimPoint"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("goalFieldOfView").setProtoFieldSync("goalFieldOfView"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("goalFStop").setProtoFieldSync("goalFStop"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("goalFocusDistance").setProtoFieldSync("goalFocusDistance"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("isActive").setProtoFieldSync("isActive"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("traceEnabled").setProtoFieldSync("traceEnabled")))
              .setSourceCodeSync("ecmascript:\n"+
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
"}"))
            .addCommentsSync(new autoclass.CommentsBlock("Add any ROUTEs here, going from Script to other nodes within ProtoBody"))))
        .addCommentsSync(new autoclass.CommentsBlock("=============== OfflineRender =============="))
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("OfflineRender").setAppinfoSync("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).")
          .setProtoInterfaceSync(new autoclass.ProtoInterface()
            .addCommentsSync(new autoclass.CommentsBlock("TODO non-photorealistic rendering (NPR) parameters"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFSTRING).setNameSync("description").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Text description to be displayed for this OfflineRender"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("enabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Whether this OfflineRender can be activated").setValueSync("true"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("frameRate").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Frames per second recorded for this rendering").setValueSync("30"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC2F).setNameSync("frameSize").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Size of frame in number of pixels width and height").setValueSync("640 480"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("pixelAspectRatio").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Relative dimensions of pixel height/width typically 1.33 or 1").setValueSync("1.33"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("set_startTime").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfoSync("Begin render operation"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("progress").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Progress performing render operation (0..1)"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("renderCompleteTime").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Render operation complete"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("movieFormat").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("Format of rendered output movie (mpeg mp4 etc.), use first supported format").setValueSync("\"mpeg\""))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("imageFormat").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("Format of rendered output images (png jpeg gif tiff etc.) use first supported format").setValueSync("\"png\""))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("traceEnabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("enable console output to trace script computations and prototype progress").setValueSync("false")))
          .setProtoBodySync(new autoclass.ProtoBody()
            .addCommentsSync(new autoclass.CommentsBlock("First node determines node type of this prototype"))
            .addCommentsSync(new autoclass.CommentsBlock("Subsequent nodes do not render, but still must be a valid X3D subgraph"))
            .addChildSync(new autoclass.Script().setDEFSync("OfflineRenderScript").setMustEvaluateSync(true)
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFSTRING).setNameSync("description").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Text description to be displayed for this OfflineRender"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("enabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Whether this OfflineRender can be activated"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("frameRate").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Frames per second recorded for this rendering"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC2F).setNameSync("frameSize").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Size of frame in number of pixels width and height"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("pixelAspectRatio").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Relative dimensions of pixel height/width typically 1.33 or 1"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("set_startTime").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfoSync("Begin render operation"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("progress").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Progress performing render operation (0..1)"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("renderCompleteTime").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Render operation complete"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("movieFormat").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("Format of rendered output movie (mpeg mp4 etc.)"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("imageFormat").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("Format of rendered output images (png jpeg gif tiff etc.)"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("traceEnabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("enable console output to trace script computations and prototype progress"))
              .setISSync(new autoclass.IS()
                .addConnectSync(new autoclass.connect().setNodeFieldSync("description").setProtoFieldSync("description"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("enabled").setProtoFieldSync("enabled"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("frameRate").setProtoFieldSync("frameRate"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("frameSize").setProtoFieldSync("frameSize"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("pixelAspectRatio").setProtoFieldSync("pixelAspectRatio"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("set_startTime").setProtoFieldSync("set_startTime"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("progress").setProtoFieldSync("progress"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("renderCompleteTime").setProtoFieldSync("renderCompleteTime"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("movieFormat").setProtoFieldSync("movieFormat"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("imageFormat").setProtoFieldSync("imageFormat"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("traceEnabled").setProtoFieldSync("traceEnabled")))
              .setSourceCodeSync("ecmascript:\n"+
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
"}"))
            .addCommentsSync(new autoclass.CommentsBlock("Add any ROUTEs here, going from Script to other nodes within ProtoBody"))))
        .addCommentsSync(new autoclass.CommentsBlock("=============== Launch Prototype Example =============="))
        .addChildSync(new autoclass.Background().setSkyColorSync(java.newArray("float", [java.newFloat(0.282353), java.newFloat(0.380392), java.newFloat(0.470588)])))
        .addChildSync(new autoclass.Anchor().setDescriptionSync("launch CameraExample scene").setUrlSync(java.newArray("java.lang.String", ["CameraExamples.x3d","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"]))
          .addChildSync(new autoclass.Transform()
            .addChildSync(new autoclass.Shape()
              .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"]))
                .setFontStyleSync(new autoclass.FontStyle().setJustifySync(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0.2)]))))))))      ;
    X3D0.toFileX3D("../data/CameraPrototypes.new.x3d");
