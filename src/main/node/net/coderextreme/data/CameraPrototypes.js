import java from 'node-java';
import util from 'util';
import autoclass from '../../../X3Dautoclass.js';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("CameraPrototypes.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement."))
        .addMeta(new autoclass.meta().setName("creator").setContent("Don Brutzman and Jeff Weekley"))
        .addMeta(new autoclass.meta().setName("created").setContent("16 March 2009"))
        .addMeta(new autoclass.meta().setName("modified").setContent("25 October 2016"))
        .addMeta(new autoclass.meta().setName("TODO").setContent("Schematron rules, backed up by initialize() checks"))
        .addMeta(new autoclass.meta().setName("reference").setContent("BeyondViewpointCameraNodesWeb3D2009.pdf"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html"))
        .addMeta(new autoclass.meta().setName("subject").setContent("Camera nodes for Viewpoint navigation control"))
        .addMeta(new autoclass.meta().setName("reference").setContent("CameraExamples.x3d"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"))
        .addMeta(new autoclass.meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new autoclass.meta().setName("license").setContent("../license.html")))
      .setScene(new autoclass.Scene()
        .addComments((new autoclass.CommentsBlock("=============== Camera ==============")))
        .addChild(new autoclass.ProtoDeclare().setName("Camera").setAppinfo("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addComments((new autoclass.CommentsBlock("Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields")))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFSTRING).setName("description").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this Camera"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("position").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated").setValue("0 0 10"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("orientation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated").setValue("0 0 1 0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("fieldOfView").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4").setValue("0.7854"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("set_fraction").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfo("input fraction drives interpolators"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("set_bind").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfo("input event binds or unbinds this Camera"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("bindTime").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates when this Camera is bound"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("isBound").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates whether this Camera is bound or unbound"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("nearClipPlane").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]").setValue("0.25"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("farClipPlane").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit").setValue("0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_MFNODE).setName("shots").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes")
              .addComments((new autoclass.CommentsBlock("initialization nodes (if any) go here"))))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("headlight").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether camera headlight is on or off").setValue("true"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFCOLOR).setName("headlightColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera headlight color").setValue("1 1 1"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("headlightIntensity").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera headlight intensity").setValue("1"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFCOLOR).setName("filterColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter color that modifies virtual lens capture").setValue("1 1 1"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("filterTransparency").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter transparency that modifies virtual lens capture").setValue("1"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("upVector").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("upVector changes modify camera orientation (and possibly vice versa)").setValue("0 1 0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("fStop").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane").setValue("5.6"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("focusDistance").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus").setValue("10"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("isActive").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("totalDuration").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("offlineRender").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("OfflineRender node")
              .addComments((new autoclass.CommentsBlock("initialization node (if any) goes here"))))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setValue("false")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Viewpoint().setDEF("CameraViewpoint")
              .setIS(new autoclass.IS()
                .addConnect(new autoclass.connect().setNodeField("description").setProtoField("description"))
                .addConnect(new autoclass.connect().setNodeField("position").setProtoField("position"))
                .addConnect(new autoclass.connect().setNodeField("orientation").setProtoField("orientation"))
                .addConnect(new autoclass.connect().setNodeField("fieldOfView").setProtoField("fieldOfView"))
                .addConnect(new autoclass.connect().setNodeField("set_bind").setProtoField("set_bind"))
                .addConnect(new autoclass.connect().setNodeField("bindTime").setProtoField("bindTime"))
                .addConnect(new autoclass.connect().setNodeField("isBound").setProtoField("isBound"))))
            .addComments((new autoclass.CommentsBlock("NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation")))
            .addChild(new autoclass.NavigationInfo().setType(java.newArray("java.lang.String", ["EXAMINE","FLY","ANY"])).setDEF("CameraNavInfo")
              .setIS(new autoclass.IS()
                .addConnect(new autoclass.connect().setNodeField("set_bind").setProtoField("set_bind"))
                .addConnect(new autoclass.connect().setNodeField("headlight").setProtoField("headlight"))
                .addConnect(new autoclass.connect().setNodeField("visibilityLimit").setProtoField("farClipPlane"))
                .addComments((new autoclass.CommentsBlock("No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing.")))))
            .addComments((new autoclass.CommentsBlock("this DirectionalLight replaces NavigationInfo headlight in order to add color capability")))
            .addChild(new autoclass.DirectionalLight().setDEF("CameraDirectionalLight").setGlobal(true)
              .addComments((new autoclass.CommentsBlock("TODO confirm other default field values match NavigationInfo spec")))
              .setIS(new autoclass.IS()
                .addConnect(new autoclass.connect().setNodeField("on").setProtoField("headlight"))
                .addConnect(new autoclass.connect().setNodeField("color").setProtoField("headlightColor"))
                .addConnect(new autoclass.connect().setNodeField("intensity").setProtoField("headlightIntensity"))))
            .addChild(new autoclass.PositionInterpolator().setDEF("CameraPositionInterpolator").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0)]))
              .setIS(new autoclass.IS()
                .addConnect(new autoclass.connect().setNodeField("set_fraction").setProtoField("set_fraction"))))
            .addChild(new autoclass.OrientationInterpolator().setDEF("CameraOrientationInterpolator").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0)]))
              .setIS(new autoclass.IS()
                .addConnect(new autoclass.connect().setNodeField("set_fraction").setProtoField("set_fraction"))))
            .addChild(new autoclass.ROUTE().setFromField("value_changed").setFromNode("CameraPositionInterpolator").setToField("position").setToNode("CameraViewpoint"))
            .addChild(new autoclass.ROUTE().setFromField("value_changed").setFromNode("CameraOrientationInterpolator").setToField("orientation").setToNode("CameraViewpoint"))
            .addChild(new autoclass.Script().setDEF("CameraScript").setDirectOutput(true).setMustEvaluate(true)
              .addComments((new autoclass.CommentsBlock("binding is controlled externally, all camera operations proceed the same regardless of whether bound or not")))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFSTRING).setName("description").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this Camera"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("position").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera position in local transformation frame"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("orientation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera rotation in local transformation frame"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("set_fraction").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfo("input fraction drives interpolators"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("set_bind").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfo("input event binds or unbinds this Camera"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("fieldOfView").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("nearClipPlane").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to near clipping plane"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("farClipPlane").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to far clipping plane"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFNODE).setName("shots").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes")
                .addComments((new autoclass.CommentsBlock("initialization nodes (if any) go here"))))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFCOLOR).setName("filterColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter color that modifies virtual lens capture"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("filterTransparency").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter transparency that modifies virtual lens capture"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("upVector").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("upVector changes modify camera orientation (and possibly vice versa)"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("fStop").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("focusDistance").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("isActive").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("totalDuration").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("offlineRender").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("OfflineRender node")
                .addComments((new autoclass.CommentsBlock("initialization node (if any) goes here"))))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("ViewpointNode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script")
                .addChild(new autoclass.Viewpoint().setUSE("CameraViewpoint")))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("NavInfoNode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script")
                .addChild(new autoclass.NavigationInfo().setUSE("CameraNavInfo")))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("CameraPI").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script")
                .addChild(new autoclass.PositionInterpolator().setUSE("CameraPositionInterpolator")))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("CameraOI").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script")
                .addChild(new autoclass.OrientationInterpolator().setUSE("CameraOrientationInterpolator")))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFFLOAT).setName("key").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("key array for interpolators"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFVEC3F).setName("keyValuePosition").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for PositionInterpolator"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFROTATION).setName("keyValueOrientation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for OrientationInterpolator"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("animated").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events").setValue("false"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("initialized").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("perform checkShots() function once immediately after initialization").setValue("false"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("shotCount").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("how many CameraShot nodes are contained in shots array").setValue("0"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("movesCount").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("how many CameraMove nodes are contained in moves array").setValue("0"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("frameCount").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("how many frames were created in current loop").setValue("0"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("startTime").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("holding variable").setValue("0"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("priorTraceTime").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("holding variable").setValue("0"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
              .setIS(new autoclass.IS()
                .addConnect(new autoclass.connect().setNodeField("description").setProtoField("description"))
                .addConnect(new autoclass.connect().setNodeField("position").setProtoField("position"))
                .addConnect(new autoclass.connect().setNodeField("orientation").setProtoField("orientation"))
                .addConnect(new autoclass.connect().setNodeField("set_fraction").setProtoField("set_fraction"))
                .addConnect(new autoclass.connect().setNodeField("set_bind").setProtoField("set_bind"))
                .addConnect(new autoclass.connect().setNodeField("fieldOfView").setProtoField("fieldOfView"))
                .addConnect(new autoclass.connect().setNodeField("nearClipPlane").setProtoField("nearClipPlane"))
                .addConnect(new autoclass.connect().setNodeField("farClipPlane").setProtoField("farClipPlane"))
                .addConnect(new autoclass.connect().setNodeField("shots").setProtoField("shots"))
                .addConnect(new autoclass.connect().setNodeField("filterColor").setProtoField("filterColor"))
                .addConnect(new autoclass.connect().setNodeField("filterTransparency").setProtoField("filterTransparency"))
                .addConnect(new autoclass.connect().setNodeField("upVector").setProtoField("upVector"))
                .addConnect(new autoclass.connect().setNodeField("fStop").setProtoField("fStop"))
                .addConnect(new autoclass.connect().setNodeField("focusDistance").setProtoField("focusDistance"))
                .addConnect(new autoclass.connect().setNodeField("isActive").setProtoField("isActive"))
                .addConnect(new autoclass.connect().setNodeField("totalDuration").setProtoField("totalDuration"))
                .addConnect(new autoclass.connect().setNodeField("offlineRender").setProtoField("offlineRender"))
                .addConnect(new autoclass.connect().setNodeField("traceEnabled").setProtoField("traceEnabled")))
              .setSourceCode("ecmascript:\n"+
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
            .addChild(new autoclass.ROUTE().setFromField("position").setFromNode("CameraScript").setToField("position").setToNode("CameraViewpoint"))
            .addChild(new autoclass.ROUTE().setFromField("orientation").setFromNode("CameraScript").setToField("orientation").setToNode("CameraViewpoint"))
            .addChild(new autoclass.ROUTE().setFromField("isActive").setFromNode("CameraScript").setToField("set_bind").setToNode("CameraViewpoint"))
            .addChild(new autoclass.ROUTE().setFromField("isActive").setFromNode("CameraScript").setToField("set_bind").setToNode("CameraNavInfo"))
            .addChild(new autoclass.ROUTE().setFromField("isActive").setFromNode("CameraScript").setToField("on").setToNode("CameraDirectionalLight"))))
        .addComments((new autoclass.CommentsBlock("=============== CameraShot ==============")))
        .addChild(new autoclass.ProtoDeclare().setName("CameraShot").setAppinfo("CameraShot collects a specific set of CameraMovement animations that make up an individual shot.")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFSTRING).setName("description").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraShot"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("enabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraShot can be activated").setValue("true"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_MFNODE).setName("moves").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Set of CameraMovement nodes")
              .addComments((new autoclass.CommentsBlock("initializing CameraMovement nodes are inserted here by scene author using ProtoInstance"))))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("initialPosition").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera position for this shot").setValue("0 0 10"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("initialOrientation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera rotation for this shot").setValue("0 0 1 0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("initialAimPoint").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot").setValue("0 0 0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("initialFieldOfView").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4").setValue("0.7854"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("initialFStop").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane").setValue("5.6"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("initialFocusDistance").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus").setValue("10"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("shotDuration").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Subtotal duration of contained CameraMovement move durations"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("isActive").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setValue("false")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Script().setDEF("CameraShotScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFSTRING).setName("description").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraShot"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("enabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraShot can be activated"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFNODE).setName("moves").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Set of CameraMovement nodes")
                .addComments((new autoclass.CommentsBlock("initialization nodes (if any) go here"))))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("initialPosition").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera position for this shot"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("initialOrientation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera rotation for this shot"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("initialAimPoint").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("initialFieldOfView").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("initialFStop").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("initialFocusDistance").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("shotDuration").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Subtotal duration of contained CameraMovement move durations"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("isActive").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFFLOAT).setName("key").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("key array for interpolators"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFVEC3F).setName("keyValuePosition").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for PositionInterpolator"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFROTATION).setName("keyValueOrientation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for OrientationInterpolator"))
              .setIS(new autoclass.IS()
                .addConnect(new autoclass.connect().setNodeField("description").setProtoField("description"))
                .addConnect(new autoclass.connect().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new autoclass.connect().setNodeField("moves").setProtoField("moves"))
                .addConnect(new autoclass.connect().setNodeField("initialPosition").setProtoField("initialPosition"))
                .addConnect(new autoclass.connect().setNodeField("initialOrientation").setProtoField("initialOrientation"))
                .addConnect(new autoclass.connect().setNodeField("initialAimPoint").setProtoField("initialAimPoint"))
                .addConnect(new autoclass.connect().setNodeField("initialFieldOfView").setProtoField("initialFieldOfView"))
                .addConnect(new autoclass.connect().setNodeField("initialFStop").setProtoField("initialFStop"))
                .addConnect(new autoclass.connect().setNodeField("initialFocusDistance").setProtoField("initialFocusDistance"))
                .addConnect(new autoclass.connect().setNodeField("shotDuration").setProtoField("shotDuration"))
                .addConnect(new autoclass.connect().setNodeField("isActive").setProtoField("isActive"))
                .addConnect(new autoclass.connect().setNodeField("traceEnabled").setProtoField("traceEnabled")))
              .setSourceCode("ecmascript:\n"+
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
            .addComments((new autoclass.CommentsBlock("Add any ROUTEs here, going from Script to other nodes within ProtoBody")))))
        .addComments((new autoclass.CommentsBlock("=============== CameraMovement ==============")))
        .addChild(new autoclass.ProtoDeclare().setName("CameraMovement").setAppinfo("CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFSTRING).setName("description").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraMovement"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("enabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraMovement can be activated").setValue("true"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("duration").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Duration in seconds for this move").setValue("0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("goalPosition").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera position for this move").setValue("0 0 10"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("goalOrientation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera rotation for this move").setValue("0 0 1 0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("tracking").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether or not camera direction is tracking towards the aimPoint").setValue("false"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("goalAimPoint").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal aimPoint for this move, ignored if tracking=false").setValue("0 0 0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("goalFieldOfView").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal fieldOfView for this move").setValue("0.7854"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("goalFStop").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane").setValue("5.6"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("goalFocusDistance").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus").setValue("10"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("isActive").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setValue("false")))
          .setProtoBody(new autoclass.ProtoBody()
            .addComments((new autoclass.CommentsBlock("First node determines node type of this prototype")))
            .addComments((new autoclass.CommentsBlock("Subsequent nodes do not render, but still must be a valid X3D subgraph")))
            .addComments((new autoclass.CommentsBlock("Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events")))
            .addChild(new autoclass.Script().setDEF("CameraMovementScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFSTRING).setName("description").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraMovement"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("enabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraMovement can be activated"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("duration").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Duration in seconds for this move"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("goalPosition").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera position for this move"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("goalOrientation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera rotation for this move"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("tracking").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether or not camera direction is tracking towards the aimPoint"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("goalAimPoint").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal aimPoint for this move, ignored if tracking=false"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("goalFieldOfView").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal fieldOfView for this move"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("goalFStop").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("goalFocusDistance").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("isActive").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
              .setIS(new autoclass.IS()
                .addConnect(new autoclass.connect().setNodeField("description").setProtoField("description"))
                .addConnect(new autoclass.connect().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new autoclass.connect().setNodeField("duration").setProtoField("duration"))
                .addConnect(new autoclass.connect().setNodeField("goalPosition").setProtoField("goalPosition"))
                .addConnect(new autoclass.connect().setNodeField("goalOrientation").setProtoField("goalOrientation"))
                .addConnect(new autoclass.connect().setNodeField("tracking").setProtoField("tracking"))
                .addConnect(new autoclass.connect().setNodeField("goalAimPoint").setProtoField("goalAimPoint"))
                .addConnect(new autoclass.connect().setNodeField("goalFieldOfView").setProtoField("goalFieldOfView"))
                .addConnect(new autoclass.connect().setNodeField("goalFStop").setProtoField("goalFStop"))
                .addConnect(new autoclass.connect().setNodeField("goalFocusDistance").setProtoField("goalFocusDistance"))
                .addConnect(new autoclass.connect().setNodeField("isActive").setProtoField("isActive"))
                .addConnect(new autoclass.connect().setNodeField("traceEnabled").setProtoField("traceEnabled")))
              .setSourceCode("ecmascript:\n"+
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
            .addComments((new autoclass.CommentsBlock("Add any ROUTEs here, going from Script to other nodes within ProtoBody")))))
        .addComments((new autoclass.CommentsBlock("=============== OfflineRender ==============")))
        .addChild(new autoclass.ProtoDeclare().setName("OfflineRender").setAppinfo("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addComments((new autoclass.CommentsBlock("TODO non-photorealistic rendering (NPR) parameters")))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFSTRING).setName("description").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this OfflineRender"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("enabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this OfflineRender can be activated").setValue("true"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("frameRate").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Frames per second recorded for this rendering").setValue("30"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC2F).setName("frameSize").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Size of frame in number of pixels width and height").setValue("640 480"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("pixelAspectRatio").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1").setValue("1.33"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("set_startTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfo("Begin render operation"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("progress").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Progress performing render operation (0..1)"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("renderCompleteTime").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Render operation complete"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("movieFormat").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output movie (mpeg mp4 etc.), use first supported format").setValue("\"mpeg\""))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("imageFormat").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output images (png jpeg gif tiff etc.) use first supported format").setValue("\"png\""))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setValue("false")))
          .setProtoBody(new autoclass.ProtoBody()
            .addComments((new autoclass.CommentsBlock("First node determines node type of this prototype")))
            .addComments((new autoclass.CommentsBlock("Subsequent nodes do not render, but still must be a valid X3D subgraph")))
            .addChild(new autoclass.Script().setDEF("OfflineRenderScript").setMustEvaluate(true)
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFSTRING).setName("description").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this OfflineRender"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("enabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this OfflineRender can be activated"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("frameRate").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Frames per second recorded for this rendering"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC2F).setName("frameSize").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Size of frame in number of pixels width and height"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("pixelAspectRatio").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("set_startTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfo("Begin render operation"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("progress").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Progress performing render operation (0..1)"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("renderCompleteTime").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Render operation complete"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("movieFormat").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output movie (mpeg mp4 etc.)"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("imageFormat").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output images (png jpeg gif tiff etc.)"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
              .setIS(new autoclass.IS()
                .addConnect(new autoclass.connect().setNodeField("description").setProtoField("description"))
                .addConnect(new autoclass.connect().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new autoclass.connect().setNodeField("frameRate").setProtoField("frameRate"))
                .addConnect(new autoclass.connect().setNodeField("frameSize").setProtoField("frameSize"))
                .addConnect(new autoclass.connect().setNodeField("pixelAspectRatio").setProtoField("pixelAspectRatio"))
                .addConnect(new autoclass.connect().setNodeField("set_startTime").setProtoField("set_startTime"))
                .addConnect(new autoclass.connect().setNodeField("progress").setProtoField("progress"))
                .addConnect(new autoclass.connect().setNodeField("renderCompleteTime").setProtoField("renderCompleteTime"))
                .addConnect(new autoclass.connect().setNodeField("movieFormat").setProtoField("movieFormat"))
                .addConnect(new autoclass.connect().setNodeField("imageFormat").setProtoField("imageFormat"))
                .addConnect(new autoclass.connect().setNodeField("traceEnabled").setProtoField("traceEnabled")))
              .setSourceCode("ecmascript:\n"+
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
            .addComments((new autoclass.CommentsBlock("Add any ROUTEs here, going from Script to other nodes within ProtoBody")))))
        .addComments((new autoclass.CommentsBlock("=============== Launch Prototype Example ==============")))
        .addChild(new autoclass.Background().setSkyColor(java.newArray("float", [java.newFloat(0.282353), java.newFloat(0.380392), java.newFloat(0.470588)])))
        .addChild(new autoclass.Anchor().setDescription("launch CameraExample scene").setUrl(java.newArray("java.lang.String", ["CameraExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"]))
          .addChild(new autoclass.Transform()
            .addChild(new autoclass.Shape()
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"]))
                .setFontStyle(new autoclass.FontStyle().setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0.2)]))))))))      ;
    X3D0.toFileX3D("../data/CameraPrototypes.new.node.x3d");
    X3D0.toFileJSON("../data/CameraPrototypes.new.node.json");
    process.exit(0);
