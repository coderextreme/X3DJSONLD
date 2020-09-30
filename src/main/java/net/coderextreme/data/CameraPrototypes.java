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
public class CameraPrototypes {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new CameraPrototypes().initialize().toFileJSON("../data/CameraPrototypes.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.2")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("CameraPrototypes.x3d"))
        .addMeta(new meta().setName("description").setContent("Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement."))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman and Jeff Weekley"))
        .addMeta(new meta().setName("created").setContent("16 March 2009"))
        .addMeta(new meta().setName("modified").setContent("25 October 2016"))
        .addMeta(new meta().setName("TODO").setContent("Schematron rules, backed up by initialize() checks"))
        .addMeta(new meta().setName("reference").setContent("BeyondViewpointCameraNodesWeb3D2009.pdf"))
        .addMeta(new meta().setName("reference").setContent("http://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html"))
        .addMeta(new meta().setName("subject").setContent("Camera nodes for Viewpoint navigation control"))
        .addMeta(new meta().setName("reference").setContent("CameraExamples.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"))
        .addMeta(new meta().setName("reference").setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addComments(new CommentsBlock("=============== Camera =============="))
        .addChild(new ProtoDeclare().setName("Camera").setAppinfo("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.")
          .setProtoInterface(new ProtoInterface()
            .addComments(new CommentsBlock("Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields"))
            .addField(new field().setType("SFString").setName("description").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this Camera"))
            .addField(new field().setType("SFVec3f").setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated").setValue("0 0 10"))
            .addField(new field().setType("SFRotation").setName("orientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated").setValue("0 0 1 0"))
            .addField(new field().setType("SFFloat").setName("fieldOfView").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4").setValue("0.7854"))
            .addField(new field().setType("SFFloat").setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("input fraction drives interpolators"))
            .addField(new field().setType("SFBool").setName("set_bind").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("input event binds or unbinds this Camera"))
            .addField(new field().setType("SFTime").setName("bindTime").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates when this Camera is bound"))
            .addField(new field().setType("SFBool").setName("isBound").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates whether this Camera is bound or unbound"))
            .addField(new field().setType("SFFloat").setName("nearClipPlane").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]").setValue("0.25"))
            .addField(new field().setType("SFFloat").setName("farClipPlane").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit").setValue("0"))
            .addField(new field().setType("MFNode").setName("shots").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes")
              .addComments(new CommentsBlock("initialization nodes (if any) go here")))
            .addField(new field().setType("SFBool").setName("headlight").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether camera headlight is on or off").setValue("true"))
            .addField(new field().setType("SFColor").setName("headlightColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera headlight color").setValue("1 1 1"))
            .addField(new field().setType("SFFloat").setName("headlightIntensity").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera headlight intensity").setValue("1"))
            .addField(new field().setType("SFColor").setName("filterColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter color that modifies virtual lens capture").setValue("1 1 1"))
            .addField(new field().setType("SFFloat").setName("filterTransparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter transparency that modifies virtual lens capture").setValue("1"))
            .addField(new field().setType("SFVec3f").setName("upVector").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("upVector changes modify camera orientation (and possibly vice versa)").setValue("0 1 0"))
            .addField(new field().setType("SFFloat").setName("fStop").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane").setValue("5.6"))
            .addField(new field().setType("SFFloat").setName("focusDistance").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus").setValue("10"))
            .addField(new field().setType("SFBool").setName("isActive").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
            .addField(new field().setType("SFTime").setName("totalDuration").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"))
            .addField(new field().setType("SFNode").setName("offlineRender").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("OfflineRender node")
              .addComments(new CommentsBlock("initialization node (if any) goes here")))
            .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setValue("false")))
          .setProtoBody(new ProtoBody()
            .addChild(new Viewpoint().setDEF("CameraViewpoint")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("description").setProtoField("description"))
                .addConnect(new connect().setNodeField("position").setProtoField("position"))
                .addConnect(new connect().setNodeField("orientation").setProtoField("orientation"))
                .addConnect(new connect().setNodeField("fieldOfView").setProtoField("fieldOfView"))
                .addConnect(new connect().setNodeField("set_bind").setProtoField("set_bind"))
                .addConnect(new connect().setNodeField("bindTime").setProtoField("bindTime"))
                .addConnect(new connect().setNodeField("isBound").setProtoField("isBound"))))
            .addComments(new CommentsBlock("NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation"))
            .addChild(new NavigationInfo().setType(new java.lang.String[] {"EXAMINE","FLY","ANY"}).setDEF("CameraNavInfo")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("set_bind").setProtoField("set_bind"))
                .addConnect(new connect().setNodeField("headlight").setProtoField("headlight"))
                .addConnect(new connect().setNodeField("visibilityLimit").setProtoField("farClipPlane"))
                .addComments(new CommentsBlock("No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing."))))
            .addComments(new CommentsBlock("this DirectionalLight replaces NavigationInfo headlight in order to add color capability"))
            .addChild(new DirectionalLight().setDEF("CameraDirectionalLight").setGlobal(true)
              .addComments(new CommentsBlock("TODO confirm other default field values match NavigationInfo spec"))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("on").setProtoField("headlight"))
                .addConnect(new connect().setNodeField("color").setProtoField("headlightColor"))
                .addConnect(new connect().setNodeField("intensity").setProtoField("headlightIntensity"))))
            .addChild(new PositionInterpolator().setDEF("CameraPositionInterpolator").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat0().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f1().getArray()))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("set_fraction").setProtoField("set_fraction"))))
            .addChild(new OrientationInterpolator().setDEF("CameraOrientationInterpolator").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat2().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation3().getArray()))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("set_fraction").setProtoField("set_fraction"))))
            .addChild(new ROUTE().setFromField("value_changed").setFromNode("CameraPositionInterpolator").setToField("position").setToNode("CameraViewpoint"))
            .addChild(new ROUTE().setFromField("value_changed").setFromNode("CameraOrientationInterpolator").setToField("orientation").setToNode("CameraViewpoint"))
            .addX3DScript(new X3DScript().setDEF("CameraScript").setDirectOutput(true).setMustEvaluate(true)
              .addComments(new CommentsBlock("binding is controlled externally, all camera operations proceed the same regardless of whether bound or not"))
              .addField(new field().setType("SFString").setName("description").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this Camera"))
              .addField(new field().setType("SFVec3f").setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera position in local transformation frame"))
              .addField(new field().setType("SFRotation").setName("orientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera rotation in local transformation frame"))
              .addField(new field().setType("SFFloat").setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("input fraction drives interpolators"))
              .addField(new field().setType("SFBool").setName("set_bind").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("input event binds or unbinds this Camera"))
              .addField(new field().setType("SFFloat").setName("fieldOfView").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4"))
              .addField(new field().setType("SFFloat").setName("nearClipPlane").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to near clipping plane"))
              .addField(new field().setType("SFFloat").setName("farClipPlane").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to far clipping plane"))
              .addField(new field().setType("MFNode").setName("shots").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes")
                .addComments(new CommentsBlock("initialization nodes (if any) go here")))
              .addField(new field().setType("SFColor").setName("filterColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter color that modifies virtual lens capture"))
              .addField(new field().setType("SFFloat").setName("filterTransparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter transparency that modifies virtual lens capture"))
              .addField(new field().setType("SFVec3f").setName("upVector").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("upVector changes modify camera orientation (and possibly vice versa)"))
              .addField(new field().setType("SFFloat").setName("fStop").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
              .addField(new field().setType("SFFloat").setName("focusDistance").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus"))
              .addField(new field().setType("SFBool").setName("isActive").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
              .addField(new field().setType("SFTime").setName("totalDuration").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"))
              .addField(new field().setType("SFNode").setName("offlineRender").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("OfflineRender node")
                .addComments(new CommentsBlock("initialization node (if any) goes here")))
              .addField(new field().setType("SFNode").setName("ViewpointNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script")
                .addChild(new Viewpoint().setUSE("CameraViewpoint")))
              .addField(new field().setType("SFNode").setName("NavInfoNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script")
                .addChild(new NavigationInfo().setUSE("CameraNavInfo")))
              .addField(new field().setType("SFNode").setName("CameraPI").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script")
                .addChild(new PositionInterpolator().setUSE("CameraPositionInterpolator")))
              .addField(new field().setType("SFNode").setName("CameraOI").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script")
                .addChild(new OrientationInterpolator().setUSE("CameraOrientationInterpolator")))
              .addField(new field().setType("MFFloat").setName("key").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("key array for interpolators"))
              .addField(new field().setType("MFVec3f").setName("keyValuePosition").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for PositionInterpolator"))
              .addField(new field().setType("MFRotation").setName("keyValueOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for OrientationInterpolator"))
              .addField(new field().setType("SFBool").setName("animated").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events").setValue("false"))
              .addField(new field().setType("SFBool").setName("initialized").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("perform checkShots() function once immediately after initialization").setValue("false"))
              .addField(new field().setType("SFInt32").setName("shotCount").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("how many CameraShot nodes are contained in shots array").setValue("0"))
              .addField(new field().setType("SFInt32").setName("movesCount").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("how many CameraMove nodes are contained in moves array").setValue("0"))
              .addField(new field().setType("SFFloat").setName("frameCount").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("how many frames were created in current loop").setValue("0"))
              .addField(new field().setType("SFTime").setName("startTime").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("holding variable").setValue("0"))
              .addField(new field().setType("SFTime").setName("priorTraceTime").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("holding variable").setValue("0"))
              .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("description").setProtoField("description"))
                .addConnect(new connect().setNodeField("position").setProtoField("position"))
                .addConnect(new connect().setNodeField("orientation").setProtoField("orientation"))
                .addConnect(new connect().setNodeField("set_fraction").setProtoField("set_fraction"))
                .addConnect(new connect().setNodeField("set_bind").setProtoField("set_bind"))
                .addConnect(new connect().setNodeField("fieldOfView").setProtoField("fieldOfView"))
                .addConnect(new connect().setNodeField("nearClipPlane").setProtoField("nearClipPlane"))
                .addConnect(new connect().setNodeField("farClipPlane").setProtoField("farClipPlane"))
                .addConnect(new connect().setNodeField("shots").setProtoField("shots"))
                .addConnect(new connect().setNodeField("filterColor").setProtoField("filterColor"))
                .addConnect(new connect().setNodeField("filterTransparency").setProtoField("filterTransparency"))
                .addConnect(new connect().setNodeField("upVector").setProtoField("upVector"))
                .addConnect(new connect().setNodeField("fStop").setProtoField("fStop"))
                .addConnect(new connect().setNodeField("focusDistance").setProtoField("focusDistance"))
                .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))
                .addConnect(new connect().setNodeField("totalDuration").setProtoField("totalDuration"))
                .addConnect(new connect().setNodeField("offlineRender").setProtoField("offlineRender"))
                .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled"))))
            .addChild(new ROUTE().setFromField("position").setFromNode("CameraScript").setToField("position").setToNode("CameraViewpoint"))
            .addChild(new ROUTE().setFromField("orientation").setFromNode("CameraScript").setToField("orientation").setToNode("CameraViewpoint"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("CameraScript").setToField("set_bind").setToNode("CameraViewpoint"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("CameraScript").setToField("set_bind").setToNode("CameraNavInfo"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("CameraScript").setToField("on").setToNode("CameraDirectionalLight"))))
        .addComments(new CommentsBlock("=============== CameraShot =============="))
        .addChild(new ProtoDeclare().setName("CameraShot").setAppinfo("CameraShot collects a specific set of CameraMovement animations that make up an individual shot.")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFString").setName("description").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraShot"))
            .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraShot can be activated").setValue("true"))
            .addField(new field().setType("MFNode").setName("moves").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Set of CameraMovement nodes")
              .addComments(new CommentsBlock("initializing CameraMovement nodes are inserted here by scene author using ProtoInstance")))
            .addField(new field().setType("SFVec3f").setName("initialPosition").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera position for this shot").setValue("0 0 10"))
            .addField(new field().setType("SFRotation").setName("initialOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera rotation for this shot").setValue("0 0 1 0"))
            .addField(new field().setType("SFVec3f").setName("initialAimPoint").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot").setValue("0 0 0"))
            .addField(new field().setType("SFFloat").setName("initialFieldOfView").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4").setValue("0.7854"))
            .addField(new field().setType("SFFloat").setName("initialFStop").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane").setValue("5.6"))
            .addField(new field().setType("SFFloat").setName("initialFocusDistance").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus").setValue("10"))
            .addField(new field().setType("SFTime").setName("shotDuration").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Subtotal duration of contained CameraMovement move durations"))
            .addField(new field().setType("SFBool").setName("isActive").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
            .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setValue("false")))
          .setProtoBody(new ProtoBody()
            .setX3DScript(new X3DScript().setDEF("CameraShotScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new field().setType("SFString").setName("description").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraShot"))
              .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraShot can be activated"))
              .addField(new field().setType("MFNode").setName("moves").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Set of CameraMovement nodes")
                .addComments(new CommentsBlock("initialization nodes (if any) go here")))
              .addField(new field().setType("SFVec3f").setName("initialPosition").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera position for this shot"))
              .addField(new field().setType("SFRotation").setName("initialOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera rotation for this shot"))
              .addField(new field().setType("SFVec3f").setName("initialAimPoint").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"))
              .addField(new field().setType("SFFloat").setName("initialFieldOfView").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4"))
              .addField(new field().setType("SFFloat").setName("initialFStop").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
              .addField(new field().setType("SFFloat").setName("initialFocusDistance").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus"))
              .addField(new field().setType("SFTime").setName("shotDuration").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Subtotal duration of contained CameraMovement move durations"))
              .addField(new field().setType("SFBool").setName("isActive").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
              .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
              .addField(new field().setType("MFFloat").setName("key").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("key array for interpolators"))
              .addField(new field().setType("MFVec3f").setName("keyValuePosition").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for PositionInterpolator"))
              .addField(new field().setType("MFRotation").setName("keyValueOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for OrientationInterpolator"))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("description").setProtoField("description"))
                .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new connect().setNodeField("moves").setProtoField("moves"))
                .addConnect(new connect().setNodeField("initialPosition").setProtoField("initialPosition"))
                .addConnect(new connect().setNodeField("initialOrientation").setProtoField("initialOrientation"))
                .addConnect(new connect().setNodeField("initialAimPoint").setProtoField("initialAimPoint"))
                .addConnect(new connect().setNodeField("initialFieldOfView").setProtoField("initialFieldOfView"))
                .addConnect(new connect().setNodeField("initialFStop").setProtoField("initialFStop"))
                .addConnect(new connect().setNodeField("initialFocusDistance").setProtoField("initialFocusDistance"))
                .addConnect(new connect().setNodeField("shotDuration").setProtoField("shotDuration"))
                .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))
                .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled"))))
            .addComments(new CommentsBlock("Add any ROUTEs here, going from Script to other nodes within ProtoBody"))))
        .addComments(new CommentsBlock("=============== CameraMovement =============="))
        .addChild(new ProtoDeclare().setName("CameraMovement").setAppinfo("CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFString").setName("description").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraMovement"))
            .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraMovement can be activated").setValue("true"))
            .addField(new field().setType("SFFloat").setName("duration").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Duration in seconds for this move").setValue("0"))
            .addField(new field().setType("SFVec3f").setName("goalPosition").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera position for this move").setValue("0 0 10"))
            .addField(new field().setType("SFRotation").setName("goalOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera rotation for this move").setValue("0 0 1 0"))
            .addField(new field().setType("SFBool").setName("tracking").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether or not camera direction is tracking towards the aimPoint").setValue("false"))
            .addField(new field().setType("SFVec3f").setName("goalAimPoint").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal aimPoint for this move, ignored if tracking=false").setValue("0 0 0"))
            .addField(new field().setType("SFFloat").setName("goalFieldOfView").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal fieldOfView for this move").setValue("0.7854"))
            .addField(new field().setType("SFFloat").setName("goalFStop").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane").setValue("5.6"))
            .addField(new field().setType("SFFloat").setName("goalFocusDistance").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus").setValue("10"))
            .addField(new field().setType("SFBool").setName("isActive").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
            .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setValue("false")))
          .setProtoBody(new ProtoBody()
            .addComments(new CommentsBlock("First node determines node type of this prototype"))
            .addComments(new CommentsBlock("Subsequent nodes do not render, but still must be a valid X3D subgraph"))
            .addComments(new CommentsBlock("Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events"))
            .addX3DScript(new X3DScript().setDEF("CameraMovementScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new field().setType("SFString").setName("description").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraMovement"))
              .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraMovement can be activated"))
              .addField(new field().setType("SFFloat").setName("duration").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Duration in seconds for this move"))
              .addField(new field().setType("SFVec3f").setName("goalPosition").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera position for this move"))
              .addField(new field().setType("SFRotation").setName("goalOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera rotation for this move"))
              .addField(new field().setType("SFBool").setName("tracking").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether or not camera direction is tracking towards the aimPoint"))
              .addField(new field().setType("SFVec3f").setName("goalAimPoint").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal aimPoint for this move, ignored if tracking=false"))
              .addField(new field().setType("SFFloat").setName("goalFieldOfView").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal fieldOfView for this move"))
              .addField(new field().setType("SFFloat").setName("goalFStop").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
              .addField(new field().setType("SFFloat").setName("goalFocusDistance").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus"))
              .addField(new field().setType("SFBool").setName("isActive").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
              .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("description").setProtoField("description"))
                .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new connect().setNodeField("duration").setProtoField("duration"))
                .addConnect(new connect().setNodeField("goalPosition").setProtoField("goalPosition"))
                .addConnect(new connect().setNodeField("goalOrientation").setProtoField("goalOrientation"))
                .addConnect(new connect().setNodeField("tracking").setProtoField("tracking"))
                .addConnect(new connect().setNodeField("goalAimPoint").setProtoField("goalAimPoint"))
                .addConnect(new connect().setNodeField("goalFieldOfView").setProtoField("goalFieldOfView"))
                .addConnect(new connect().setNodeField("goalFStop").setProtoField("goalFStop"))
                .addConnect(new connect().setNodeField("goalFocusDistance").setProtoField("goalFocusDistance"))
                .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))
                .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled"))))
            .addComments(new CommentsBlock("Add any ROUTEs here, going from Script to other nodes within ProtoBody"))))
        .addComments(new CommentsBlock("=============== OfflineRender =============="))
        .addChild(new ProtoDeclare().setName("OfflineRender").setAppinfo("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).")
          .setProtoInterface(new ProtoInterface()
            .addComments(new CommentsBlock("TODO non-photorealistic rendering (NPR) parameters"))
            .addField(new field().setType("SFString").setName("description").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this OfflineRender"))
            .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this OfflineRender can be activated").setValue("true"))
            .addField(new field().setType("SFFloat").setName("frameRate").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Frames per second recorded for this rendering").setValue("30"))
            .addField(new field().setType("SFVec2f").setName("frameSize").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Size of frame in number of pixels width and height").setValue("640 480"))
            .addField(new field().setType("SFFloat").setName("pixelAspectRatio").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1").setValue("1.33"))
            .addField(new field().setType("SFTime").setName("set_startTime").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Begin render operation"))
            .addField(new field().setType("SFFloat").setName("progress").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Progress performing render operation (0..1)"))
            .addField(new field().setType("SFTime").setName("renderCompleteTime").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Render operation complete"))
            .addField(new field().setType("MFString").setName("movieFormat").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output movie (mpeg mp4 etc.), use first supported format").setValue("\"mpeg\""))
            .addField(new field().setType("MFString").setName("imageFormat").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output images (png jpeg gif tiff etc.) use first supported format").setValue("\"png\""))
            .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setValue("false")))
          .setProtoBody(new ProtoBody()
            .addComments(new CommentsBlock("First node determines node type of this prototype"))
            .addComments(new CommentsBlock("Subsequent nodes do not render, but still must be a valid X3D subgraph"))
            .addX3DScript(new X3DScript().setDEF("OfflineRenderScript").setMustEvaluate(true)
              .addField(new field().setType("SFString").setName("description").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this OfflineRender"))
              .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this OfflineRender can be activated"))
              .addField(new field().setType("SFFloat").setName("frameRate").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Frames per second recorded for this rendering"))
              .addField(new field().setType("SFVec2f").setName("frameSize").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Size of frame in number of pixels width and height"))
              .addField(new field().setType("SFFloat").setName("pixelAspectRatio").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1"))
              .addField(new field().setType("SFTime").setName("set_startTime").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Begin render operation"))
              .addField(new field().setType("SFFloat").setName("progress").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Progress performing render operation (0..1)"))
              .addField(new field().setType("SFTime").setName("renderCompleteTime").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Render operation complete"))
              .addField(new field().setType("MFString").setName("movieFormat").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output movie (mpeg mp4 etc.)"))
              .addField(new field().setType("MFString").setName("imageFormat").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output images (png jpeg gif tiff etc.)"))
              .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("description").setProtoField("description"))
                .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new connect().setNodeField("frameRate").setProtoField("frameRate"))
                .addConnect(new connect().setNodeField("frameSize").setProtoField("frameSize"))
                .addConnect(new connect().setNodeField("pixelAspectRatio").setProtoField("pixelAspectRatio"))
                .addConnect(new connect().setNodeField("set_startTime").setProtoField("set_startTime"))
                .addConnect(new connect().setNodeField("progress").setProtoField("progress"))
                .addConnect(new connect().setNodeField("renderCompleteTime").setProtoField("renderCompleteTime"))
                .addConnect(new connect().setNodeField("movieFormat").setProtoField("movieFormat"))
                .addConnect(new connect().setNodeField("imageFormat").setProtoField("imageFormat"))
                .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled"))))
            .addComments(new CommentsBlock("Add any ROUTEs here, going from Script to other nodes within ProtoBody"))))
        .addComments(new CommentsBlock("=============== Launch Prototype Example =============="))
        .addChild(new Background().setSkyColor(new org.web3d.x3d.jsail.fields.MFColor(new MFColor4().getArray())).setTransparency(0f))
        .addChild(new Anchor().setDescription("launch CameraExample scene").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString5().getArray())).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
          .addChild(new Transform().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
            .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
              .setGeometry(new Text().setString(new org.web3d.x3d.jsail.fields.MFString(new MFString6().getArray()))
                .setFontStyle(new FontStyle().setJustify(new org.web3d.x3d.jsail.fields.MFString(new MFString7().getArray()))))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0.2f})))))))      ;
    return X3D0;
    }
protected class MFFloat0 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFVec3f1 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat2 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation3 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,1f,0f,0f});
  }
}
protected class MFColor4 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.282353f,0.380392f,0.470588f});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"CameraExamples.x3d","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"});
  }
}
protected class MFString6 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"});
  }
}
protected class MFString7 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
