package net.coderextreme.data;
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.CADGeometry.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CubeMapTexturing.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.Followers.*;
import org.web3d.x3d.jsail.Geometry2D.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.KeyDeviceSensor.*;
import org.web3d.x3d.jsail.Layering.*;
import org.web3d.x3d.jsail.Layout.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.NURBS.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.ParticleSystems.*;
import org.web3d.x3d.jsail.Picking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing3D.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;
import org.web3d.x3d.jsail.VolumeRendering.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.sai.*;
import org.web3d.x3d.sai.CADGeometry.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.CubeMapTexturing.*;
import org.web3d.x3d.sai.DIS.*;
import org.web3d.x3d.sai.EnvironmentalEffects.*;
import org.web3d.x3d.sai.EnvironmentalSensor.*;
import org.web3d.x3d.sai.EventUtilities.*;
import org.web3d.x3d.sai.Followers.*;
import org.web3d.x3d.sai.Geometry2D.*;
import org.web3d.x3d.sai.Geometry3D.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.Interpolation.*;
import org.web3d.x3d.sai.KeyDeviceSensor.*;
import org.web3d.x3d.sai.Layering.*;
import org.web3d.x3d.sai.Layout.*;
import org.web3d.x3d.sai.Lighting.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.sai.Navigation.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.ParticleSystems.*;
import org.web3d.x3d.sai.Picking.*;
import org.web3d.x3d.sai.PointingDeviceSensor.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.Scripting.*;
import org.web3d.x3d.sai.Shaders.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Sound.*;
import org.web3d.x3d.sai.Text.*;
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Time.*;
import org.web3d.x3d.sai.VolumeRendering.*;
public class CameraPrototypes {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new CameraPrototypes().initialize().toFileJSON("../data/CameraPrototypes.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.2")
      .setHead(new headObject()
        .addMeta(new metaObject().setContent("CameraPrototypes.x3d").setName("title"))
        .addMeta(new metaObject().setContent("Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.").setName("description"))
        .addMeta(new metaObject().setContent("Don Brutzman and Jeff Weekley").setName("creator"))
        .addMeta(new metaObject().setContent("16 March 2009").setName("created"))
        .addMeta(new metaObject().setContent("25 October 2016").setName("modified"))
        .addMeta(new metaObject().setContent("Schematron rules, backed up by initialize() checks").setName("TODO"))
        .addMeta(new metaObject().setContent("BeyondViewpointCameraNodesWeb3D2009.pdf").setName("reference"))
        .addMeta(new metaObject().setContent("http://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html").setName("reference"))
        .addMeta(new metaObject().setContent("Camera nodes for Viewpoint navigation control").setName("subject"))
        .addMeta(new metaObject().setContent("CameraExamples.x3d").setName("reference"))
        .addMeta(new metaObject().setContent("http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d").setName("identifier"))
        .addMeta(new metaObject().setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d").setName("reference"))
        .addMeta(new metaObject().setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit").setName("generator"))
        .addMeta(new metaObject().setContent("../license.html").setName("license")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock(" =============== Camera ============== "))
        .addChild(new ProtoDeclareObject().setAppinfo("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.").setName("Camera")
          .setProtoInterface(new ProtoInterfaceObject()
            .addComments(new CommentsBlock(" Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields "))
            .addField(new fieldObject().setType("SFString").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this Camera").setName("description"))
            .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated").setName("position").setValue("0 0 10"))
            .addField(new fieldObject().setType("SFRotation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated").setName("orientation").setValue("0 0 1 0"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4").setName("fieldOfView").setValue("0.7854"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("input fraction drives interpolators").setName("set_fraction"))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("input event binds or unbinds this Camera").setName("set_bind"))
            .addField(new fieldObject().setType("SFTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates when this Camera is bound").setName("bindTime"))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates whether this Camera is bound or unbound").setName("isBound"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]").setName("nearClipPlane").setValue("0.25"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit").setName("farClipPlane").setValue("0"))
            .addField(new fieldObject().setType("MFNode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes").setName("shots")
              .addComments(new CommentsBlock(" initialization nodes (if any) go here ")))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether camera headlight is on or off").setName("headlight").setValue("true"))
            .addField(new fieldObject().setType("SFColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera headlight color").setName("headlightColor").setValue("1 1 1"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera headlight intensity").setName("headlightIntensity").setValue("1"))
            .addField(new fieldObject().setType("SFColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter color that modifies virtual lens capture").setName("filterColor").setValue("1 1 1"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter transparency that modifies virtual lens capture").setName("filterTransparency").setValue("1"))
            .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("upVector changes modify camera orientation (and possibly vice versa)").setName("upVector").setValue("0 1 0"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane").setName("fStop").setValue("5.6"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus").setName("focusDistance").setValue("10"))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations").setName("isActive"))
            .addField(new fieldObject().setType("SFTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations").setName("totalDuration"))
            .addField(new fieldObject().setType("SFNode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("OfflineRender node").setName("offlineRender")
              .addComments(new CommentsBlock(" initialization node (if any) goes here ")))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setName("traceEnabled").setValue("false")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new ViewpointObject().setDEF("CameraViewpoint")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("description").setProtoField("description"))
                .addConnect(new connectObject().setNodeField("position").setProtoField("position"))
                .addConnect(new connectObject().setNodeField("orientation").setProtoField("orientation"))
                .addConnect(new connectObject().setNodeField("fieldOfView").setProtoField("fieldOfView"))
                .addConnect(new connectObject().setNodeField("set_bind").setProtoField("set_bind"))
                .addConnect(new connectObject().setNodeField("bindTime").setProtoField("bindTime"))
                .addConnect(new connectObject().setNodeField("isBound").setProtoField("isBound"))))
            .addComments(new CommentsBlock(" NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation "))
            .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"EXAMINE","FLY","ANY"}).setDEF("CameraNavInfo")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("set_bind").setProtoField("set_bind"))
                .addConnect(new connectObject().setNodeField("headlight").setProtoField("headlight"))
                .addConnect(new connectObject().setNodeField("visibilityLimit").setProtoField("farClipPlane"))
                .addComments(new CommentsBlock(" No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing. "))))
            .addComments(new CommentsBlock(" this DirectionalLight replaces NavigationInfo headlight in order to add color capability "))
            .addChild(new DirectionalLightObject().setDEF("CameraDirectionalLight").setGlobal(true)
              .addComments(new CommentsBlock(" TODO confirm other default field values match NavigationInfo spec "))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("on").setProtoField("headlight"))
                .addConnect(new connectObject().setNodeField("color").setProtoField("headlightColor"))
                .addConnect(new connectObject().setNodeField("intensity").setProtoField("headlightIntensity"))))
            .addChild(new PositionInterpolatorObject().setDEF("CameraPositionInterpolator").setKey(new MFFloatObject(new MFFloat0().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f1().getArray()))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("set_fraction").setProtoField("set_fraction"))))
            .addChild(new OrientationInterpolatorObject().setDEF("CameraOrientationInterpolator").setKey(new MFFloatObject(new MFFloat2().getArray())).setKeyValue(new MFRotationObject(new MFRotation3().getArray()))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("set_fraction").setProtoField("set_fraction"))))
            .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("CameraPositionInterpolator").setToField("position").setToNode("CameraViewpoint"))
            .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("CameraOrientationInterpolator").setToField("orientation").setToNode("CameraViewpoint"))
            .addChild(new ScriptObject().setDEF("CameraScript").setDirectOutput(true).setMustEvaluate(true)
              .addComments(new CommentsBlock(" binding is controlled externally, all camera operations proceed the same regardless of whether bound or not "))
              .addField(new fieldObject().setType("SFString").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this Camera").setName("description"))
              .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera position in local transformation frame").setName("position"))
              .addField(new fieldObject().setType("SFRotation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera rotation in local transformation frame").setName("orientation"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("input fraction drives interpolators").setName("set_fraction"))
              .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("input event binds or unbinds this Camera").setName("set_bind"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4").setName("fieldOfView"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to near clipping plane").setName("nearClipPlane"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to far clipping plane").setName("farClipPlane"))
              .addField(new fieldObject().setType("MFNode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes").setName("shots")
                .addComments(new CommentsBlock(" initialization nodes (if any) go here ")))
              .addField(new fieldObject().setType("SFColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter color that modifies virtual lens capture").setName("filterColor"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter transparency that modifies virtual lens capture").setName("filterTransparency"))
              .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("upVector changes modify camera orientation (and possibly vice versa)").setName("upVector"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane").setName("fStop"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus").setName("focusDistance"))
              .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations").setName("isActive"))
              .addField(new fieldObject().setType("SFTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations").setName("totalDuration"))
              .addField(new fieldObject().setType("SFNode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("OfflineRender node").setName("offlineRender")
                .addComments(new CommentsBlock(" initialization node (if any) goes here ")))
              .addField(new fieldObject().setType("SFNode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script").setName("ViewpointNode")
                .addChild(new ViewpointObject().setUSE("CameraViewpoint")))
              .addField(new fieldObject().setType("SFNode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script").setName("NavInfoNode")
                .addChild(new NavigationInfoObject().setUSE("CameraNavInfo")))
              .addField(new fieldObject().setType("SFNode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script").setName("CameraPI")
                .addChild(new PositionInterpolatorObject().setUSE("CameraPositionInterpolator")))
              .addField(new fieldObject().setType("SFNode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script").setName("CameraOI")
                .addChild(new OrientationInterpolatorObject().setUSE("CameraOrientationInterpolator")))
              .addField(new fieldObject().setType("MFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("key array for interpolators").setName("key"))
              .addField(new fieldObject().setType("MFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for PositionInterpolator").setName("keyValuePosition"))
              .addField(new fieldObject().setType("MFRotation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for OrientationInterpolator").setName("keyValueOrientation"))
              .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events").setName("animated").setValue("false"))
              .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("perform checkShots() function once immediately after initialization").setName("initialized").setValue("false"))
              .addField(new fieldObject().setType("SFInt32").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("how many CameraShot nodes are contained in shots array").setName("shotCount").setValue("0"))
              .addField(new fieldObject().setType("SFInt32").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("how many CameraMove nodes are contained in moves array").setName("movesCount").setValue("0"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("how many frames were created in current loop").setName("frameCount").setValue("0"))
              .addField(new fieldObject().setType("SFTime").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("holding variable").setName("startTime").setValue("0"))
              .addField(new fieldObject().setType("SFTime").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("holding variable").setName("priorTraceTime").setValue("0"))
              .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setName("traceEnabled"))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("description").setProtoField("description"))
                .addConnect(new connectObject().setNodeField("position").setProtoField("position"))
                .addConnect(new connectObject().setNodeField("orientation").setProtoField("orientation"))
                .addConnect(new connectObject().setNodeField("set_fraction").setProtoField("set_fraction"))
                .addConnect(new connectObject().setNodeField("set_bind").setProtoField("set_bind"))
                .addConnect(new connectObject().setNodeField("fieldOfView").setProtoField("fieldOfView"))
                .addConnect(new connectObject().setNodeField("nearClipPlane").setProtoField("nearClipPlane"))
                .addConnect(new connectObject().setNodeField("farClipPlane").setProtoField("farClipPlane"))
                .addConnect(new connectObject().setNodeField("shots").setProtoField("shots"))
                .addConnect(new connectObject().setNodeField("filterColor").setProtoField("filterColor"))
                .addConnect(new connectObject().setNodeField("filterTransparency").setProtoField("filterTransparency"))
                .addConnect(new connectObject().setNodeField("upVector").setProtoField("upVector"))
                .addConnect(new connectObject().setNodeField("fStop").setProtoField("fStop"))
                .addConnect(new connectObject().setNodeField("focusDistance").setProtoField("focusDistance"))
                .addConnect(new connectObject().setNodeField("isActive").setProtoField("isActive"))
                .addConnect(new connectObject().setNodeField("totalDuration").setProtoField("totalDuration"))
                .addConnect(new connectObject().setNodeField("offlineRender").setProtoField("offlineRender"))
                .addConnect(new connectObject().setNodeField("traceEnabled").setProtoField("traceEnabled")))
              .setSourceCode("
ecmascript:
function initialize () // CameraScript
{
//  tracePrint ('initialize start...');\\n\\n    NavInfoNode.avatarSize[0]   = nearClipPlane;\\n\\n    // remaining setups deferred to invocation of checkShots() method\\n    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization\\n    alwaysPrint ('initialize complete');\\n}\\n\\nfunction checkShots (eventValue)\\n{\\n    tracePrint ('checkShots() method should only occur after initialize() methods in all other Scripts are complete');\\n\\n    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes\\n    totalDuration= 0;\\n    shotCount  = shots.length;\\n    movesCount = 0;\\n    for (i = 0; i < shotCount; i++) // shots index\\n    {\\n       tracePrint ('shots[' + i + '].moves.length=' + shots[i].moves.length);\\n       movesCount   += shots[i].moves.length;\\n       totalDuration = totalDuration + shots[i].shotDuration;\\n       if (shots[i].moves.length == 0)\\n       {\\n          alwaysPrint ('warning: CameraShot[' + i + '][' + shots[i].description + '] has no contained CameraMove nodes');\\n       }\\n    }\\n    // size checks before proceeding\\n    if (shotCount == 0)\\n    {\\n       alwaysPrint ('warning: no CameraShot nodes found for the shots, nothing to do!');\\n       return;\\n    }\\n    else if (movesCount == 0)\\n    {\\n       alwaysPrint ('warning: no CameraMove nodes found for the shots, nothing to do!');\\n       return;\\n    }\\n    else if (totalDuration == 0)\\n    {\\n       alwaysPrint ('warning: totalDuration = 0 seconds, nothing to do!');\\n       return;\\n    }\\n    tracePrint ('number of contained CameraShot nodes=' + shotCount);\\n    tracePrint ('number of contained CameraMove nodes=' + movesCount);\\n    tracePrint ('totalDuration=' + totalDuration + ' seconds for all shots and moves');\\n\\n    // compute interpolators\\n    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation\\n    for (i = 0; i < shotCount; i++) // shots index\\n    {\\n        if (i==0) // initial entries\\n        {\\n           key[0]                   = 0.0; // no previous move\\n           keyValuePosition[0]      = shots[i].initialPosition;\\n           keyValueOrientation[0]   = shots[i].initialOrientation;\\n        }\\n        else     // new shot repositions, reorients camera as clean break from preceding shot/move\\n        {\\n           key[k+1]                 = key[k]; // start from end from previous move\\n           keyValuePosition[k+1]    = shots[i].initialPosition;\\n           keyValueOrientation[k+1] = shots[i].initialOrientation;\\n           k++;\\n        }\\n        tracePrint (shots[i].description);\\n        tracePrint ('shots[i].moves.length=' + shots[i].moves.length);\\n\\n        for (j = 0; j < shots[i].moves.length; j++) // moves index\\n        {\\n            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime\\n            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime\\n            //  tracePrint ('durationFloat=' + durationFloat);\\n            key[k+1]               = key[k] + (durationFloat / totalDuration);\\n            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;\\n            if (!animated)\\n            {\\n                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\\n            }\\n            else\\n            {\\n                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)\\n                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions\\n\\n                // test if difference vector is zero, if so maintain previous rotation\\n                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();\\n                if (shotVector.length() >= 0)\\n                {\\n                    // default view direction is along -Z axis\\n                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);\\n                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\\n                }\\n                else // note (k > 0)\\n                {\\n                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change\\n                }\\n\\n                tracePrint ('shots[' + i + '].moves[' + j + '].goalAimPoint=' + shots[i].moves[j].goalAimPoint.toString());\\n                tracePrint ('        ViewpointNode.position=' + ViewpointNode.position.toString());\\n                tracePrint ('          shotVector     delta=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());\\n                tracePrint ('          shotVector normalize=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());\\n                tracePrint ('               goalOrientation=' + shots[i].moves[j].goalOrientation.toString());\\n                tracePrint ('      keyValueOrientation[k+1]=' + keyValueOrientation[k+1].toString() + '\\n');\\n            }\\n            k++; // update index to match latest key, keyValuePosition, keyValueOrientation\\n\\n            // check animated parameter:  set true if any of moves are tracking moves\\n            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true\\n         // tracePrint ('shots[' + i + '].moves[' + j + '].tracking=' + shots[i].moves[j].tracking + ', animated=' + animated);\\n\\n            // intermediate trace\\n            tracePrint ('                key=' + key);\\n            tracePrint ('   keyValuePosition=' + keyValuePosition);\\n            tracePrint ('keyValueOrientation=' + keyValueOrientation);\\n            tracePrint ('- ' + shots[i].moves[j].description);\\n        }\\n    }\\n    tracePrint ('                key=' + key);\\n    tracePrint ('   keyValuePosition=' + keyValuePosition);\\n    tracePrint ('keyValueOrientation=' + keyValueOrientation);\\n    if (key.length != keyValuePosition.length)\\n    {\\n      alwaysPrint ('warning: internal error during array construction, ' +\\n                  'key.length=' + key.length + ' must equal ' +\\n                  'keyValuePosition.length=' + keyValuePosition.length);\\n    }\\n    if (key.length != keyValueOrientation.length)\\n    {\\n      alwaysPrint ('warning: internal error during array construction, ' +\\n                  'key.length=' + key.length + ' must equal ' +\\n                  'keyValueOrientation.length=' + keyValueOrientation.length);\\n    }\\n    if (key.length != (shotCount + movesCount))\\n    {\\n      alwaysPrint ('warning: internal error during array construction, ' +\\n                  'key.length=' + key.length + ' must equal ' +\\n                  '(shotCount + movesCount)=' + (shotCount + movesCount));\\n    }\\n    tracePrint ('           animated=' + animated);\\n    // set node values\\n    CameraPI.key      = key;\\n    CameraOI.key      = key;\\n    CameraPI.keyValue = keyValuePosition;\\n    CameraOI.keyValue = keyValueOrientation;\\n\\n    if (!animated) // output results\\n    {\\n        tracePrint ('<PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\\n        tracePrint ('<OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\\n    }\\n    tracePrint ('checkShots() complete');\\n}\\n\\nfunction stripBrackets (fieldArray)\\n{\\n    // some browsers add brackets to array output strings, this function strips them\\n    outputString = '';\\n    for (i = 0; i < fieldArray.length; i++)\\n    {\\n       outputString += fieldArray[i].toString();\\n       if (i < fieldArray.length - 1) outputString += ' ';\\n    }\\n    return outputString;\\n}\\n\\nfunction set_fraction (eventValue, timestamp) // input event received for inputOnly field\\n{\\n   // traceEnabled = false;  // for testing purposes\\n\\n   // if Camera is being animated, immediately recompute interpolator settings\\n   if (animated) checkShots (true);\\n\\n   // trace progress on console with reduced output frequency\\n   if (frameCount == 0)\\n   {\\n      alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);\\n      startTime      = timestamp;\\n      priorTraceTime = timestamp;\\n      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\\n\\n      if (animated) // output results\\n      {\\n        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\\n        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\\n        tracePrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\\n      }\\n   }\\n   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval\\n   {\\n      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\\n      priorTraceTime = timestamp;\\n\\n      if (animated) // output results\\n      {\\n        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\\n        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\\n        alwaysPrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\\n      }\\n   }\\n   if (eventValue == 0)\\n   {\\n      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored\\n      frameCount++;\\n   }\\n   else if (eventValue == 1)\\n   {\\n      alwaysPrint ('shotClock=' + (timestamp - startTime) + ', frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\\n      if (animated) // output results\\n      {\\n        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\\n      }\\n      alwaysPrint ('Animation loop complete.');\\n      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally\\n   }\\n   else\\n   {\\n      frameCount++;\\n   }\\n}\\n\\nfunction set_bind (eventValue) // input event received for inputOnly field\\n{\\n   // need to ensure CameraShot nodes are properly initialized\\n   if (initialized == false)\\n   {\\n      checkShots (true);\\n      initialized = true;\\n   }\\n   if (eventValue)\\n   {\\n       tracePrint ('Camera has been bound');\\n   }\\n   else\\n   {\\n       tracePrint ('Camera has been unbound');\\n   }\\n}\\n\\nfunction set_description (eventValue) // input event received for inputOutput field\\n{\\n    description = eventValue;\\n}\\n\\nfunction set_position (eventValue) // input event received for inputOutput field\\n{\\n    position = eventValue;\\n}\\n\\nfunction set_orientation (eventValue) // input event received for inputOutput field\\n{\\n    orientation = eventValue;\\n}\\n\\nfunction set_fieldOfView (eventValue) // input event received for inputOutput field\\n{\\n    fieldOfView = eventValue;\\n}\\n\\nfunction set_nearClipPlane (eventValue) // input event received for inputOutput field\\n{\\n    nearClipPlane = eventValue;\\n}\\n\\nfunction set_farClipPlane (eventValue) // input event received for inputOutput field\\n{\\n    farClipPlane = eventValue;\\n}\\n\\nfunction set_shots (eventValue) // input event received for inputOutput field\\n{\\n    shots = eventValue;\\n}\\n\\nfunction set_filterColor (eventValue) // input event received for inputOutput field\\n{\\n    filterColor = eventValue;\\n}\\n\\nfunction set_filterTransparency (eventValue) // input event received for inputOutput field\\n{\\n    filterTransparency = eventValue;\\n}\\n\\nfunction set_upVector (eventValue) // input event received for inputOutput field\\n{\\n    upVector = eventValue;\\n}\\n\\nfunction set_fStop (eventValue) // input event received for inputOutput field\\n{\\n    fStop = eventValue;\\n}\\n\\nfunction set_focusDistance (eventValue) // input event received for inputOutput field\\n{\\n    focusDistance = eventValue;\\n}\\n\\nfunction set_offlineRender (eventValue) // input event received for inputOutput field\\n{\\n    offlineRender = eventValue;\\n}\\n\\nfunction set_key (eventValue) // input event received for inputOutput field\\n{\\n    key = eventValue;\\n}\\n\\nfunction set_keyValuePosition (eventValue) // input event received for inputOutput field\\n{\\n    keyValuePosition = eventValue;\\n}\\n\\nfunction set_keyValueOrientation (eventValue) // input event received for inputOutput field\\n{\\n    keyValueOrientation = eventValue;\\n}\\n\\nfunction set_animated (eventValue) // input event received for inputOutput field\\n{\\n    animated = eventValue;\\n}\\n\\nfunction tracePrint (outputValue)\\n{\\n	if (traceEnabled) alwaysPrint (outputValue);\\n}\\nfunction alwaysPrint (outputValue)\\n{\\n    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies\\n    var outputString = outputValue.toString(); // utility function according to spec\\n    if (outputString == null) outputString = outputValue; // direct cast\\n\\n    if  (description.length > 0)\\n         Browser.print ('[Camera: ' + description + '] ' + outputString + '\\n');\\n    else\\n         Browser.print ('[Camera] ' + outputString + '\\n');
}
\n"+
""))
            .addChild(new ROUTEObject().setFromField("position").setFromNode("CameraScript").setToField("position").setToNode("CameraViewpoint"))
            .addChild(new ROUTEObject().setFromField("orientation").setFromNode("CameraScript").setToField("orientation").setToNode("CameraViewpoint"))
            .addChild(new ROUTEObject().setFromField("isActive").setFromNode("CameraScript").setToField("set_bind").setToNode("CameraViewpoint"))
            .addChild(new ROUTEObject().setFromField("isActive").setFromNode("CameraScript").setToField("set_bind").setToNode("CameraNavInfo"))
            .addChild(new ROUTEObject().setFromField("isActive").setFromNode("CameraScript").setToField("on").setToNode("CameraDirectionalLight"))))
        .addComments(new CommentsBlock(" =============== CameraShot ============== "))
        .addChild(new ProtoDeclareObject().setAppinfo("CameraShot collects a specific set of CameraMovement animations that make up an individual shot.").setName("CameraShot")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFString").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraShot").setName("description"))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraShot can be activated").setName("enabled").setValue("true"))
            .addField(new fieldObject().setType("MFNode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Set of CameraMovement nodes").setName("moves")
              .addComments(new CommentsBlock(" initializing CameraMovement nodes are inserted here by scene author using ProtoInstance ")))
            .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera position for this shot").setName("initialPosition").setValue("0 0 10"))
            .addField(new fieldObject().setType("SFRotation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera rotation for this shot").setName("initialOrientation").setValue("0 0 1 0"))
            .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot").setName("initialAimPoint").setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4").setName("initialFieldOfView").setValue("0.7854"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane").setName("initialFStop").setValue("5.6"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus").setName("initialFocusDistance").setValue("10"))
            .addField(new fieldObject().setType("SFTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Subtotal duration of contained CameraMovement move durations").setName("shotDuration"))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations").setName("isActive"))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setName("traceEnabled").setValue("false")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new ScriptObject().setDEF("CameraShotScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new fieldObject().setType("SFString").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraShot").setName("description"))
              .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraShot can be activated").setName("enabled"))
              .addField(new fieldObject().setType("MFNode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Set of CameraMovement nodes").setName("moves")
                .addComments(new CommentsBlock(" initialization nodes (if any) go here ")))
              .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera position for this shot").setName("initialPosition"))
              .addField(new fieldObject().setType("SFRotation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera rotation for this shot").setName("initialOrientation"))
              .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot").setName("initialAimPoint"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4").setName("initialFieldOfView"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane").setName("initialFStop"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus").setName("initialFocusDistance"))
              .addField(new fieldObject().setType("SFTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Subtotal duration of contained CameraMovement move durations").setName("shotDuration"))
              .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations").setName("isActive"))
              .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setName("traceEnabled"))
              .addField(new fieldObject().setType("MFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("key array for interpolators").setName("key"))
              .addField(new fieldObject().setType("MFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for PositionInterpolator").setName("keyValuePosition"))
              .addField(new fieldObject().setType("MFRotation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for OrientationInterpolator").setName("keyValueOrientation"))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("description").setProtoField("description"))
                .addConnect(new connectObject().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new connectObject().setNodeField("moves").setProtoField("moves"))
                .addConnect(new connectObject().setNodeField("initialPosition").setProtoField("initialPosition"))
                .addConnect(new connectObject().setNodeField("initialOrientation").setProtoField("initialOrientation"))
                .addConnect(new connectObject().setNodeField("initialAimPoint").setProtoField("initialAimPoint"))
                .addConnect(new connectObject().setNodeField("initialFieldOfView").setProtoField("initialFieldOfView"))
                .addConnect(new connectObject().setNodeField("initialFStop").setProtoField("initialFStop"))
                .addConnect(new connectObject().setNodeField("initialFocusDistance").setProtoField("initialFocusDistance"))
                .addConnect(new connectObject().setNodeField("shotDuration").setProtoField("shotDuration"))
                .addConnect(new connectObject().setNodeField("isActive").setProtoField("isActive"))
                .addConnect(new connectObject().setNodeField("traceEnabled").setProtoField("traceEnabled")))
              .setSourceCode("
ecmascript:
function initialize () // CameraShotScript
{
//  tracePrint ('initialize start...');\\n\\n    // compute shotDuration by summing durations from contained CameraMovement nodes\\n    shotDuration = 0;\\n    for (i = 0; i < moves.length; i++)\\n    {\\n        shotDuration = shotDuration + moves[i].duration;\\n    }\\n    alwaysPrint ('number of contained CameraMove nodes=' + moves.length + ', shotDuration=' + shotDuration + ' seconds');\\n\\n//  tracePrint ('... initialize() complete');\\n}\\n\\nfunction set_description (eventValue) // input event received for inputOutput field\\n{\\n    description = eventValue;\\n}\\n\\nfunction set_enabled (eventValue) // input event received for inputOutput field\\n{\\n    enabled = eventValue;\\n}\\n\\nfunction set_moves (eventValue) // input event received for inputOutput field\\n{\\n    moves = eventValue;\\n}\\n\\nfunction set_initialPosition (eventValue) // input event received for inputOutput field\\n{\\n    initialPosition = eventValue;\\n}\\n\\nfunction set_initialOrientation (eventValue) // input event received for inputOutput field\\n{\\n    initialOrientation = eventValue;\\n}\\n\\nfunction set_initialAimPoint (eventValue) // input event received for inputOutput field\\n{\\n    initialAimPoint = eventValue;\\n}\\n\\nfunction set_initialFieldOfView (eventValue) // input event received for inputOutput field\\n{\\n    initialFieldOfView = eventValue;\\n}\\n\\nfunction set_initialFStop (eventValue) // input event received for inputOutput field\\n{\\n    initialFStop = eventValue;\\n}\\n\\nfunction set_initialFocusDistance (eventValue) // input event received for inputOutput field\\n{\\n    initialFocusDistance = eventValue;\\n}\\n\\nfunction set_key (eventValue) // input event received for inputOutput field\\n{\\n    key = eventValue;\\n}\\n\\nfunction set_keyValuePosition (eventValue) // input event received for inputOutput field\\n{\\n    keyValuePosition = eventValue;\\n}\\n\\nfunction set_keyValueOrientation (eventValue) // input event received for inputOutput field\\n{\\n    keyValueOrientation = eventValue;\\n}\\n\\n// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\\n\\nfunction tracePrint (outputValue)\\n{\\n	if (traceEnabled) alwaysPrint (outputValue);\\n}\\nfunction alwaysPrint (outputValue)\\n{\\n	// try to ensure outputValue is converted to string despite browser idiosyncracies\\n    var outputString = outputValue.toString(); // utility function according to spec\\n    if (outputString == null) outputString = outputValue; // direct cast\\n\\n    if  (description.length > 0)\\n         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\\n');\\n    else\\n         Browser.print ('[CameraShot] ' + outputString + '\\n');
}
\n"+
""))
            .addComments(new CommentsBlock(" Add any ROUTEs here, going from Script to other nodes within ProtoBody "))))
        .addComments(new CommentsBlock(" =============== CameraMovement ============== "))
        .addChild(new ProtoDeclareObject().setAppinfo("CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.").setName("CameraMovement")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFString").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraMovement").setName("description"))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraMovement can be activated").setName("enabled").setValue("true"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Duration in seconds for this move").setName("duration").setValue("0"))
            .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera position for this move").setName("goalPosition").setValue("0 0 10"))
            .addField(new fieldObject().setType("SFRotation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera rotation for this move").setName("goalOrientation").setValue("0 0 1 0"))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether or not camera direction is tracking towards the aimPoint").setName("tracking").setValue("false"))
            .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal aimPoint for this move, ignored if tracking=false").setName("goalAimPoint").setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal fieldOfView for this move").setName("goalFieldOfView").setValue("0.7854"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane").setName("goalFStop").setValue("5.6"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus").setName("goalFocusDistance").setValue("10"))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations").setName("isActive"))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setName("traceEnabled").setValue("false")))
          .setProtoBody(new ProtoBodyObject()
            .addComments(new CommentsBlock(" First node determines node type of this prototype "))
            .addComments(new CommentsBlock(" Subsequent nodes do not render, but still must be a valid X3D subgraph "))
            .addComments(new CommentsBlock(" Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events "))
            .addChild(new ScriptObject().setDEF("CameraMovementScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new fieldObject().setType("SFString").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraMovement").setName("description"))
              .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraMovement can be activated").setName("enabled"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Duration in seconds for this move").setName("duration"))
              .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera position for this move").setName("goalPosition"))
              .addField(new fieldObject().setType("SFRotation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera rotation for this move").setName("goalOrientation"))
              .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether or not camera direction is tracking towards the aimPoint").setName("tracking"))
              .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal aimPoint for this move, ignored if tracking=false").setName("goalAimPoint"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal fieldOfView for this move").setName("goalFieldOfView"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane").setName("goalFStop"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus").setName("goalFocusDistance"))
              .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations").setName("isActive"))
              .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setName("traceEnabled"))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("description").setProtoField("description"))
                .addConnect(new connectObject().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new connectObject().setNodeField("duration").setProtoField("duration"))
                .addConnect(new connectObject().setNodeField("goalPosition").setProtoField("goalPosition"))
                .addConnect(new connectObject().setNodeField("goalOrientation").setProtoField("goalOrientation"))
                .addConnect(new connectObject().setNodeField("tracking").setProtoField("tracking"))
                .addConnect(new connectObject().setNodeField("goalAimPoint").setProtoField("goalAimPoint"))
                .addConnect(new connectObject().setNodeField("goalFieldOfView").setProtoField("goalFieldOfView"))
                .addConnect(new connectObject().setNodeField("goalFStop").setProtoField("goalFStop"))
                .addConnect(new connectObject().setNodeField("goalFocusDistance").setProtoField("goalFocusDistance"))
                .addConnect(new connectObject().setNodeField("isActive").setProtoField("isActive"))
                .addConnect(new connectObject().setNodeField("traceEnabled").setProtoField("traceEnabled")))
              .setSourceCode("
ecmascript:
function initialize () // CameraMovementScript
{
//  tracePrint ('initialize start...');\\n    alwaysPrint ('initialize goalPosition=' + goalPosition.toString() + ', goalOrientation=' + goalOrientation.toString() +\\n                           ', goalAimPoint=' + goalAimPoint.toString() // + ', tracking=' + tracking.toString()\\n                           );\\n    if (duration < 0)\\n    {\\n       alwaysPrint ('error: negative duration=' + duration + ', reset to 0 and ignored');\\n       duration = 0;\\n    }\\n    else if (duration == 0)\\n    {\\n       alwaysPrint ('warning: duration=0, nothing to do!');\\n    }\\n    tracePrint ('... initialize complete');\\n}\\n\\nfunction set_goalAimPoint (eventValue) // input event received for inputOutput field\\n{\\n    goalAimPoint_changed = eventValue;\\n    tracePrint ('goalAimPoint=' + goalAimPoint.toString());\\n\\n    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator\\n}\\n\\nfunction set_description (eventValue) // input event received for inputOutput field\\n{\\n    description = eventValue;\\n}\\n\\nfunction set_enabled (eventValue) // input event received for inputOutput field\\n{\\n    enabled = eventValue;\\n}\\n\\nfunction set_duration (eventValue) // input event received for inputOutput field\\n{\\n    duration = eventValue;\\n}\\n\\nfunction set_goalPosition (eventValue) // input event received for inputOutput field\\n{\\n    goalPosition = eventValue;\\n}\\n\\nfunction set_goalOrientation (eventValue) // input event received for inputOutput field\\n{\\n    goalOrientation = eventValue;\\n}\\n\\nfunction set_tracking (eventValue) // input event received for inputOutput field\\n{\\n    tracking = eventValue;\\n}\\n\\nfunction set_goalFieldOfView (eventValue) // input event received for inputOutput field\\n{\\n    goalFieldOfView = eventValue;\\n}\\n\\nfunction set_goalFStop (eventValue) // input event received for inputOutput field\\n{\\n    goalFStop = eventValue;\\n}\\n\\nfunction set_goalFocusDistance (eventValue) // input event received for inputOutput field\\n{\\n    goalFocusDistance = eventValue;\\n}\\n\\n// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\\n\\nfunction tracePrint (outputValue)\\n{\\n	if (traceEnabled) alwaysPrint (outputValue);\\n}\\n\\nfunction alwaysPrint (outputValue)\\n{\\n	// try to ensure outputValue is converted to string despite browser idiosyncracies\\n    var outputString = outputValue.toString(); // utility function according to spec\\n    if (outputString == null) outputString = outputValue; // direct cast\\n\\n    if  (description.length > 0)\\n         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\\n');\\n    else\\n         Browser.print ('[CameraMovement] ' + outputString + '\\n');
}
\n"+
""))
            .addComments(new CommentsBlock(" Add any ROUTEs here, going from Script to other nodes within ProtoBody "))))
        .addComments(new CommentsBlock(" =============== OfflineRender ============== "))
        .addChild(new ProtoDeclareObject().setAppinfo("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).").setName("OfflineRender")
          .setProtoInterface(new ProtoInterfaceObject()
            .addComments(new CommentsBlock(" TODO non-photorealistic rendering (NPR) parameters "))
            .addField(new fieldObject().setType("SFString").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this OfflineRender").setName("description"))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this OfflineRender can be activated").setName("enabled").setValue("true"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Frames per second recorded for this rendering").setName("frameRate").setValue("30"))
            .addField(new fieldObject().setType("SFVec2f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Size of frame in number of pixels width and height").setName("frameSize").setValue("640 480"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1").setName("pixelAspectRatio").setValue("1.33"))
            .addField(new fieldObject().setType("SFTime").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Begin render operation").setName("set_startTime"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Progress performing render operation (0..1)").setName("progress"))
            .addField(new fieldObject().setType("SFTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Render operation complete").setName("renderCompleteTime"))
            .addField(new fieldObject().setType("MFString").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output movie (mpeg mp4 etc.), use first supported format").setName("movieFormat").setValue("\"mpeg\""))
            .addField(new fieldObject().setType("MFString").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output images (png jpeg gif tiff etc.) use first supported format").setName("imageFormat").setValue("\"png\""))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setName("traceEnabled").setValue("false")))
          .setProtoBody(new ProtoBodyObject()
            .addComments(new CommentsBlock(" First node determines node type of this prototype "))
            .addComments(new CommentsBlock(" Subsequent nodes do not render, but still must be a valid X3D subgraph "))
            .addChild(new ScriptObject().setDEF("OfflineRenderScript").setMustEvaluate(true)
              .addField(new fieldObject().setType("SFString").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this OfflineRender").setName("description"))
              .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this OfflineRender can be activated").setName("enabled"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Frames per second recorded for this rendering").setName("frameRate"))
              .addField(new fieldObject().setType("SFVec2f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Size of frame in number of pixels width and height").setName("frameSize"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1").setName("pixelAspectRatio"))
              .addField(new fieldObject().setType("SFTime").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Begin render operation").setName("set_startTime"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Progress performing render operation (0..1)").setName("progress"))
              .addField(new fieldObject().setType("SFTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Render operation complete").setName("renderCompleteTime"))
              .addField(new fieldObject().setType("MFString").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output movie (mpeg mp4 etc.)").setName("movieFormat"))
              .addField(new fieldObject().setType("MFString").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output images (png jpeg gif tiff etc.)").setName("imageFormat"))
              .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setName("traceEnabled"))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("description").setProtoField("description"))
                .addConnect(new connectObject().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new connectObject().setNodeField("frameRate").setProtoField("frameRate"))
                .addConnect(new connectObject().setNodeField("frameSize").setProtoField("frameSize"))
                .addConnect(new connectObject().setNodeField("pixelAspectRatio").setProtoField("pixelAspectRatio"))
                .addConnect(new connectObject().setNodeField("set_startTime").setProtoField("set_startTime"))
                .addConnect(new connectObject().setNodeField("progress").setProtoField("progress"))
                .addConnect(new connectObject().setNodeField("renderCompleteTime").setProtoField("renderCompleteTime"))
                .addConnect(new connectObject().setNodeField("movieFormat").setProtoField("movieFormat"))
                .addConnect(new connectObject().setNodeField("imageFormat").setProtoField("imageFormat"))
                .addConnect(new connectObject().setNodeField("traceEnabled").setProtoField("traceEnabled")))
              .setSourceCode("
ecmascript:
function initialize () // OfflineRenderScript
{
//  tracePrint ('initialize start...');\\n\\n    tracePrint ('... initialize complete');\\n}\\n\\nfunction set_description (eventValue) // input event received for inputOutput field\\n{\\n    description = eventValue;\\n}\\n\\nfunction set_enabled (eventValue) // input event received for inputOutput field\\n{\\n    enabled = eventValue;\\n}\\n\\nfunction set_frameRate (eventValue) // input event received for inputOutput field\\n{\\n    frameRate = eventValue;\\n}\\n\\nfunction set_frameSize (eventValue) // input event received for inputOutput field\\n{\\n    frameSize = eventValue;\\n}\\n\\nfunction set_pixelAspectRatio (eventValue) // input event received for inputOutput field\\n{\\n    pixelAspectRatio = eventValue;\\n}\\n\\nfunction set_startTime (eventValue) // input event received for inputOnly field\\n{\\n   // do something with input eventValue;\\n}\\n\\nfunction tracePrint (outputValue)\\n{\\n	if (traceEnabled) alwaysPrint (outputValue);\\n}\\n\\nfunction alwaysPrint (outputValue)\\n{\\n	// try to ensure outputValue is converted to string despite browser idiosyncracies\\n    var outputString = outputValue.toString(); // utility function according to spec\\n    if (outputString == null) outputString = outputValue; // direct cast\\n\\n    if  (description.length > 0)\\n         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\\n');\\n    else\\n         Browser.print ('[OfflineRender] ' + outputString + '\\n');
}
\n"+
""))
            .addComments(new CommentsBlock(" Add any ROUTEs here, going from Script to other nodes within ProtoBody "))))
        .addComments(new CommentsBlock(" =============== Launch Prototype Example ============== "))
        .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new MFColor4().getArray())))
        .addChild(new AnchorObject().setDescription("launch CameraExample scene").setUrl(new MFStringObject(new MFString5().getArray()))
          .addChild(new TransformObject()
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString6().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString7().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,0.2f})))))))      ;
    return X3D0;
    }
protected class MFFloat0 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,1f});
  }
}
protected class MFVec3f1 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat2 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,1f});
  }
}
protected class MFRotation3 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0f,0f,1f,0f,0f});
  }
}
protected class MFColor4 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.282353f,0.380392f,0.470588f});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CameraExamples.x3d".replaceAll("\"", "\\\""),"http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d".replaceAll("\"", "\\\""),"CameraExamples.wrl".replaceAll("\"", "\\\""),"http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl".replaceAll("\"", "\\\"")});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CameraPrototypes.x3d".replaceAll("\"", "\\\""),"defines multiple prototype nodes".replaceAll("\"", "\\\""),"".replaceAll("\"", "\\\""),"Click on this text to see".replaceAll("\"", "\\\""),"CameraExamples.x3d scene".replaceAll("\"", "\\\"")});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE".replaceAll("\"", "\\\""),"MIDDLE".replaceAll("\"", "\\\"")});
  }
}
}
