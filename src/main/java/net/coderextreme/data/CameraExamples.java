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
public class CameraExamples {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new CameraExamples().initialize().toFileJSON("../data/CameraExamples.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
ProtoInstanceObject ProtoInstance1 = null;
ProtoInstanceObject ProtoInstance2 = null;
ProtoInstanceObject ProtoInstance3 = null;
ProtoInstanceObject ProtoInstance4 = null;
ProtoInstanceObject ProtoInstance5 = null;
ProtoInstanceObject ProtoInstance6 = null;
ProtoInstanceObject ProtoInstance7 = null;
ProtoInstanceObject ProtoInstance8 = null;
ProtoInstanceObject ProtoInstance9 = null;
ProtoInstanceObject ProtoInstance10 = null;
ProtoInstanceObject ProtoInstance11 = null;
ProtoInstanceObject ProtoInstance12 = null;
ProtoInstanceObject ProtoInstance13 = null;
ProtoInstanceObject ProtoInstance14 = null;
ProtoInstanceObject ProtoInstance15 = null;
ProtoInstanceObject ProtoInstance16 = null;
ProtoInstanceObject ProtoInstance17 = null;
ProtoInstanceObject ProtoInstance18 = null;
ProtoInstanceObject ProtoInstance19 = null;
ProtoInstanceObject ProtoInstance20 = null;
ProtoInstanceObject ProtoInstance21 = null;
ProtoInstanceObject ProtoInstance22 = null;
ProtoInstanceObject ProtoInstance23 = null;
ProtoInstanceObject ProtoInstance24 = null;
ProtoInstanceObject ProtoInstance25 = null;
ProtoInstanceObject ProtoInstance26 = null;
ProtoInstanceObject ProtoInstance27 = null;
ProtoInstanceObject ProtoInstance28 = null;
ProtoInstanceObject ProtoInstance29 = null;
ProtoInstanceObject ProtoInstance30 = null;
ProtoInstanceObject ProtoInstance31 = null;
ProtoInstanceObject ProtoInstance32 = null;
ProtoInstanceObject ProtoInstance33 = null;
ProtoInstanceObject ProtoInstance34 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setContent("CameraExamples.x3d").setName("title"))
        .addMeta(new metaObject().setContent("Camera, CameraShot and CameraMove examples that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.").setName("description"))
        .addMeta(new metaObject().setContent("Two demos are found in the scene, click the \"red text\" on left or right to start. (a) SimpleShotsTest shows Zoom in/out, Pan left/right, Boom up/down, Tilt left/right, with each is defined by a CameraShot collecting a series of CameraMovements. (b) AimPointTest gradually slews the camera view to look at the sliding cube, then follows it around before returning to original viewpoint.").setName("documentation"))
        .addMeta(new metaObject().setContent("Don Brutzman and Jeff Weekley").setName("creator"))
        .addMeta(new metaObject().setContent("18 June 2009").setName("created"))
        .addMeta(new metaObject().setContent("20 January 2020").setName("modified"))
        .addMeta(new metaObject().setContent("Schematron rules, backed up by initialize() checks").setName("TODO"))
        .addMeta(new metaObject().setContent("BeyondViewpointCameraNodesWeb3D2009.pdf").setName("reference"))
        .addMeta(new metaObject().setContent("CameraExamplesDemo.mp4").setName("MovingImage"))
        .addMeta(new metaObject().setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html").setName("reference"))
        .addMeta(new metaObject().setContent("Camera nodes for Viewpoint navigation control").setName("subject"))
        .addMeta(new metaObject().setContent("CameraPrototypes.x3d").setName("reference"))
        .addMeta(new metaObject().setContent("CameraExamplesConsoleLog.txt").setName("reference"))
        .addMeta(new metaObject().setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.avi").setName("reference"))
        .addMeta(new metaObject().setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d").setName("reference"))
        .addMeta(new metaObject().setContent("https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d").setName("identifier"))
        .addMeta(new metaObject().setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d").setName("reference"))
        .addMeta(new metaObject().setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit").setName("generator"))
        .addMeta(new metaObject().setContent("../license.html").setName("license")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock(" =============== Camera ============== "))
        .addChild(new WorldInfoObject().setTitle("CameraExamples.x3d"))
        .addChild(new ExternProtoDeclareObject().setAppinfo("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images").setName("Camera").setUrl(new MFStringObject(new MFString0().getArray()))
          .addField(new fieldObject().setType("SFString").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this Camera").setName("description"))
          .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated").setName("position"))
          .addField(new fieldObject().setType("SFRotation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated").setName("orientation"))
          .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4").setName("fieldOfView"))
          .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("input fraction drives interpolators").setName("set_fraction"))
          .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("input event binds or unbinds this Camera").setName("set_bind"))
          .addField(new fieldObject().setType("SFTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates when this Camera is bound").setName("bindTime"))
          .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates whether this Camera is bound or unbound").setName("isBound"))
          .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]").setName("nearClipPlane"))
          .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit").setName("farClipPlane"))
          .addField(new fieldObject().setType("MFNode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes").setName("shots"))
          .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether camera headlight is on or off").setName("headlight"))
          .addField(new fieldObject().setType("SFColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera headlight color").setName("headlightColor"))
          .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera headlight intensity").setName("headlightIntensity"))
          .addField(new fieldObject().setType("SFColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter color that modifies virtual lens capture").setName("filterColor"))
          .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter transparency that modifies virtual lens capture").setName("filterTransparency"))
          .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("upVector changes modify camera orientation (and possibly vice versa)").setName("upVector"))
          .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane").setName("fStop"))
          .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus").setName("focusDistance"))
          .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations").setName("isActive"))
          .addField(new fieldObject().setType("SFTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations").setName("totalDuration"))
          .addField(new fieldObject().setType("SFNode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("OfflineRender node").setName("offlineRender"))
          .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setName("traceEnabled"))
          .addComments(new CommentsBlock(" Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields ")))
        .addComments(new CommentsBlock(" =============== CameraShot ============== "))
        .addChild(new ExternProtoDeclareObject().setAppinfo("CameraShot collects a specific set of CameraMovement animations that make up an individual shot").setName("CameraShot").setUrl(new MFStringObject(new MFString1().getArray()))
          .addField(new fieldObject().setType("SFString").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraShot").setName("description"))
          .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraShot can be activated").setName("enabled"))
          .addField(new fieldObject().setType("MFNode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Set of CameraMovement nodes").setName("moves")
            .addComments(new CommentsBlock(" initializing CameraMovement nodes are inserted here by scene author using ProtoInstance ")))
          .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera position for this shot").setName("initialPosition"))
          .addField(new fieldObject().setType("SFRotation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera rotation for this shot").setName("initialOrientation"))
          .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot").setName("initialAimPoint"))
          .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4").setName("initialFieldOfView"))
          .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane").setName("initialFStop"))
          .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus").setName("initialFocusDistance"))
          .addField(new fieldObject().setType("SFTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Subtotal duration of contained CameraMovement move durations").setName("shotDuration"))
          .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations").setName("isActive"))
          .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setName("traceEnabled")))
        .addComments(new CommentsBlock(" =============== CameraMovement ============== "))
        .addChild(new ExternProtoDeclareObject().setAppinfo("CameraMovement defines a single camera movement animation").setName("CameraMovement").setUrl(new MFStringObject(new MFString2().getArray()))
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
          .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setName("traceEnabled")))
        .addComments(new CommentsBlock(" =============== OfflineRender ============== "))
        .addChild(new ExternProtoDeclareObject().setAppinfo("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)").setName("OfflineRender").setUrl(new MFStringObject(new MFString3().getArray()))
          .addField(new fieldObject().setType("SFString").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this OfflineRender").setName("description"))
          .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this OfflineRender can be activated").setName("enabled"))
          .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Frames per second recorded for this rendering").setName("frameRate"))
          .addField(new fieldObject().setType("SFVec2f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Size of frame in number of pixels width and height").setName("frameSize"))
          .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1").setName("pixelAspectRatio"))
          .addField(new fieldObject().setType("SFTime").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Begin render operation").setName("set_startTime"))
          .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Progress performing render operation (0..1)").setName("progress"))
          .addField(new fieldObject().setType("SFTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Render operation complete").setName("renderCompleteTime"))
          .addField(new fieldObject().setType("MFString").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output movie (mpeg mp4 etc.), use first supported format").setName("movieFormat"))
          .addField(new fieldObject().setType("MFString").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output images (png jpeg gif tiff etc.) use first supported format").setName("imageFormat"))
          .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setName("traceEnabled"))
          .addComments(new CommentsBlock(" TODO non-photorealistic rendering (NPR) parameters ")))
        .addComments(new CommentsBlock(" =============== Lights, camera, action! ============== "))
        .addChild(new DirectionalLightObject().setDirection(new float[] {0f,-1f,0f}).setGlobal(true).setIntensity(0.8f))
        .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"EXAMINE","FLY","ANY"}))
        .addChild(new ViewpointObject().setDescription("Camera test scene entry view").setPosition(new float[] {0f,2f,12f}))
        .addChild(new ViewpointObject().setDescription("Camera test scene from above").setOrientation(new float[] {1f,0f,0f,-1.57079f}).setPosition(new float[] {0f,150f,0f}))
        .addComments(new CommentsBlock(" Keep prototype instances in same file while developing, then move later "))
        .addComments(new CommentsBlock(" We will create examples matching those in the paper "))
        .addComments(new CommentsBlock(" =============== Camera.SimpleShotsTest ============== "))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setDEF("Camera.SimpleShotsTest").setName("Camera"))
        .addChild(new GroupObject().setDEF("AnimationGroup.SimpleShots")
          .addChild(new TimeSensorObject().setDEF("CameraTimer.SimpleShots"))
          .addComments(new CommentsBlock(" initialize clock to match totalDuration of combined Shot Moves "))
          .addChild(new ROUTEObject().setFromField("totalDuration").setFromNode("Camera.SimpleShotsTest").setToField("cycleInterval").setToNode("CameraTimer.SimpleShots"))
          .addComments(new CommentsBlock(" TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator "))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("CameraTimer.SimpleShots").setToField("set_fraction").setToNode("Camera.SimpleShotsTest"))
          .addChild(new TransformObject().setDEF("Trigger.SimpleShots").setTranslation(new float[] {-4f,4f,0f})
            .addChild(new BooleanFilterObject().setDEF("TextTouchActive.SimpleShotsFilter"))
            .addChild(new TouchSensorObject().setDEF("TextTouch.SimpleShots").setDescription("touch to animate Camera SimpleShotsTest"))
            .addChild(new ROUTEObject().setFromField("inputTrue").setFromNode("TextTouchActive.SimpleShotsFilter").setToField("set_bind").setToNode("Camera.SimpleShotsTest"))
            .addChild(new ROUTEObject().setFromField("isActive").setFromNode("TextTouch.SimpleShots").setToField("set_boolean").setToNode("TextTouchActive.SimpleShotsFilter"))
            .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("TextTouch.SimpleShots").setToField("startTime").setToNode("CameraTimer.SimpleShots"))
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString4().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString5().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDEF("ArtDeco5").setAmbientIntensity(0.24f).setDiffuseColor(new float[] {0.945455f,0.318988f,0.321717f}).setShininess(0.01f).setSpecularColor(new float[] {0.072727f,0.021705f,0.010732f})
                  .addComments(new CommentsBlock(" Universal Media Library: ArtDeco 5 ")))))
            .addComments(new CommentsBlock(" Simplify intersection test for user selecting text "))
            .addChild(new ShapeObject().setDEF("TransparentBox")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setTransparency(1f)))
              .setGeometry(new BoxObject().setSize(new float[] {6f,2f,0.0001f})))))
        .addChild(new GroupObject().setDEF("SimpleShotsTargets")
          .addChild(new TransformObject().setDEF("TargetBoxZoom").setTranslation(new float[] {-50f,1f,-20f})
            .addChild(new ShapeObject()
              .setGeometry(new BoxObject())
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject())
                .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString6().getArray())))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,2f,0f})
              .addChild(new ShapeObject()
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString7().getArray()))
                  .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString8().getArray()))))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject())))))
          .addChild(new TransformObject().setDEF("TargetBoxDolly").setTranslation(new float[] {-40f,1f,-20f})
            .addChild(new ShapeObject()
              .setGeometry(new BoxObject())
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject())
                .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString9().getArray())))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,2f,0f})
              .addChild(new ShapeObject()
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString10().getArray()))
                  .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString11().getArray()))))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject())))))
          .addChild(new TransformObject().setDEF("TargetBoxPan").setTranslation(new float[] {-30f,1f,-20f})
            .addChild(new ShapeObject()
              .setGeometry(new BoxObject())
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject())
                .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString12().getArray())))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,2f,0f})
              .addChild(new ShapeObject()
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString13().getArray()))
                  .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString14().getArray()))))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject())))))
          .addChild(new TransformObject().setDEF("TargetBoxBoom").setTranslation(new float[] {-20f,1f,-20f})
            .addChild(new ShapeObject()
              .setGeometry(new BoxObject())
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject())
                .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString15().getArray())))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,2f,0f})
              .addChild(new ShapeObject()
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString16().getArray()))
                  .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString17().getArray()))))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject())))))
          .addChild(new TransformObject().setDEF("TargetBoxTilt").setTranslation(new float[] {-10f,1f,-20f})
            .addChild(new ShapeObject()
              .setGeometry(new BoxObject())
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject())
                .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString18().getArray())))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,2f,0f})
              .addChild(new ShapeObject()
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString19().getArray()))
                  .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString20().getArray()))))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject()))))))
        .addComments(new CommentsBlock(" =============== Camera.AimPointTest ============== "))
        .addChild(ProtoInstance26 = new ProtoInstanceObject().setDEF("Camera.AimPointTest").setName("Camera"))
        .addChild(new GroupObject().setDEF("AnimationGroup.AimPointTest")
          .addChild(new TimeSensorObject().setDEF("CameraTimer.AimPointTest"))
          .addComments(new CommentsBlock(" initialize clock to match totalDuration of combined Shot Moves "))
          .addChild(new ROUTEObject().setFromField("totalDuration").setFromNode("Camera.AimPointTest").setToField("cycleInterval").setToNode("CameraTimer.AimPointTest"))
          .addComments(new CommentsBlock(" TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator "))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("CameraTimer.AimPointTest").setToField("set_fraction").setToNode("Camera.AimPointTest"))
          .addChild(new TransformObject().setDEF("Trigger.AimPointTest").setTranslation(new float[] {4f,4f,0f})
            .addChild(new BooleanFilterObject().setDEF("TextTouchActive.AimPointFilter"))
            .addChild(new TouchSensorObject().setDEF("TextTouch.AimPointTest").setDescription("touch to animate Camera AimPointTest"))
            .addChild(new ROUTEObject().setFromField("inputTrue").setFromNode("TextTouchActive.AimPointFilter").setToField("set_bind").setToNode("Camera.AimPointTest"))
            .addChild(new ROUTEObject().setFromField("isActive").setFromNode("TextTouch.AimPointTest").setToField("set_boolean").setToNode("TextTouchActive.AimPointFilter"))
            .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("TextTouch.AimPointTest").setToField("startTime").setToNode("CameraTimer.AimPointTest"))
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString21().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString22().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("ArtDeco5"))))
            .addChild(new ShapeObject().setUSE("TransparentBox"))))
        .addComments(new CommentsBlock(" TODO build a test once implemented "))
        .addChild(ProtoInstance32 = new ProtoInstanceObject().setName("OfflineRender"))
        .addComments(new CommentsBlock(" =============== animate a camera shape to visualize view changes ============== "))
        .addChild(new TransformObject().setDEF("CameraShapeTransform").setTranslation(new float[] {0f,0.5f,0f})
          .addComments(new CommentsBlock(" move CameraShape using active Camera "))
          .addChild(new ROUTEObject().setFromField("position_changed").setFromNode("Camera.SimpleShotsTest").setToField("translation").setToNode("CameraShapeTransform"))
          .addChild(new ROUTEObject().setFromField("orientation_changed").setFromNode("Camera.SimpleShotsTest").setToField("rotation").setToNode("CameraShapeTransform"))
          .addChild(new ROUTEObject().setFromField("position").setFromNode("Camera.AimPointTest").setToField("translation").setToNode("CameraShapeTransform"))
          .addChild(new ROUTEObject().setFromField("orientation_changed").setFromNode("Camera.AimPointTest").setToField("rotation").setToNode("CameraShapeTransform"))
          .addChild(new TransformObject().setDEF("CameraOffsetTransform").setTranslation(new float[] {0f,0f,0.25f})
            .addChild(new TouchSensorObject().setDEF("CameraShapeTouched"))
            .addChild(new InlineObject().setDEF("CameraShape").setUrl(new MFStringObject(new MFString23().getArray())))
            .addChild(new ShapeObject().setDEF("SightLine")
              .setGeometry(new IndexedLineSetObject().setCoordIndex(new MFInt32Object(new MFInt3224().getArray()))
                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f25().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setEmissiveColor(new float[] {0.8f,0.8f,0.4f})))))
          .addComments(new CommentsBlock(" Display frustum to show camera view within the scene, toggled by user selecting CameraShape "))
          .addChild(new ExternProtoDeclareObject().setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes").setName("ViewFrustum").setUrl(new MFStringObject(new MFString26().getArray()))
            .addField(new fieldObject().setType("SFNode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("required: insert Viewpoint DEF or USE node for view of interest").setName("ViewpointNode"))
            .addField(new fieldObject().setType("SFNode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("required: insert NavigationInfo DEF or USE node of interest").setName("NavigationInfoNode"))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("whether or not frustum geometry is rendered").setName("visible"))
            .addField(new fieldObject().setType("SFColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9").setName("lineColor"))
            .addField(new fieldObject().setType("SFColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8").setName("frustumColor"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5").setName("transparency"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("assumed ratio height/width, default value 0.75").setName("aspectRatio"))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("debug support, default false").setName("trace")))
          .addChild(ProtoInstance33 = new ProtoInstanceObject().setDEF("ViewFrustumNode").setName("ViewFrustum"))
          .addChild(new BooleanToggleObject().setDEF("ViewFrustumToggle"))
          .addChild(new ROUTEObject().setFromField("isActive").setFromNode("CameraShapeTouched").setToField("set_boolean").setToNode("ViewFrustumToggle"))
          .addChild(new ROUTEObject().setFromField("toggle").setFromNode("ViewFrustumToggle").setToField("set_visible").setToNode("ViewFrustumNode")))
        .addComments(new CommentsBlock(" =============== add checkerboard, axes and other things to look at while animating ============== "))
        .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new MFColor28().getArray())))
        .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,-1.57079f}).setScale(new float[] {10f,10f,10f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setAmbientIntensity(0.01f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(0.05f)))
            .setGeometry(new IndexedFaceSetObject().setColorIndex(new MFInt32Object(new MFInt3229().getArray())).setColorPerVertex(false).setCoordIndex(new MFInt32Object(new MFInt3230().getArray())).setNormalPerVertex(false).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f31().getArray())))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor32().getArray()))))))
        .addChild(new TransformObject().setScale(new float[] {3f,3f,3f}).setTranslation(new float[] {0f,0.25f,0f})
          .addChild(new InlineObject().setDEF("CoordinateAxes").setUrl(new MFStringObject(new MFString33().getArray()))))
        .addChild(new TransformObject().setDEF("MovingBoxTransform")
          .addChild(new PositionInterpolatorObject().setDEF("BoxPath").setKey(new MFFloatObject(new MFFloat34().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f35().getArray())))
          .addChild(new TimeSensorObject().setDEF("BoxTimer").setCycleInterval(10d).setLoop(true))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("BoxPath").setToField("translation").setToNode("MovingBoxTransform"))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("BoxPath").setToField("goalAimPoint").setToNode("MoveAimPoint3.1"))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("BoxPath").setToField("goalAimPoint").setToNode("MoveAimPoint3.2"))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("BoxPath").setToField("goalAimPoint").setToNode("MoveAimPoint3.3"))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("BoxTimer").setToField("set_fraction").setToNode("BoxPath"))
          .addChild(new ShapeObject()
            .setGeometry(new BoxObject())
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject())
              .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString36().getArray()))))))
        .addComments(new CommentsBlock(" ================ CrossHair visualization for center of screen ================ "))
        .addChild(new ExternProtoDeclareObject().setAppinfo("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point").setName("CrossHair").setUrl(new MFStringObject(new MFString37().getArray()))
          .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("whether CrissHair orititype is enabled or not").setName("enabled"))
          .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("control whether enabled/disabled").setName("set_enabled"))
          .addField(new fieldObject().setType("SFColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("color of CrossHair marker").setName("markerColor"))
          .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("size of CrossHair in meters").setName("scale"))
          .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("distance in front of HUD viewpoint").setName("positionOffsetFromCamera")))
        .addChild(ProtoInstance34 = new ProtoInstanceObject().setDEF("CrossHairInstance").setName("CrossHair"))
        .addComments(new CommentsBlock(" turn on CrossHairInstance when animated camera viewpoints are bound "))
        .addChild(new ROUTEObject().setFromField("isBound").setFromNode("Camera.SimpleShotsTest").setToField("set_enabled").setToNode("CrossHairInstance"))
        .addChild(new ROUTEObject().setFromField("isBound").setFromNode("Camera.AimPointTest").setToField("set_enabled").setToNode("CrossHairInstance"))
        .addComments(new CommentsBlock(" turn off CrossHairInstance when animated camera viewpoints are unbound <BooleanFilter DEF='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.SimpleShotsTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.AimPointTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='inputNegate' fromNode='NegateCrossHair' toField='set_enabled' toNode='CrossHairInstance'/> "))
        .addComments(new CommentsBlock(" =============== TODO Launch Prototype Example ============== "))
        .addChild(new AnchorObject().setDescription("launch CameraExample scene").setParameter(new MFStringObject(new MFString38().getArray())).setUrl(new MFStringObject(new MFString39().getArray()))
          .addChild(new TransformObject().setTranslation(new float[] {0f,-3f,0f})
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString40().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString41().getArray())).setSize(0.5f)))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,0.2f})))))))      ;
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("description").setValue("SimpleShotsTest for camera Zoom Dolly Pan Boom and Tilt"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("headlight").setValue("true"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("position").setValue("-4 4 10"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("shots")
            .addChild(ProtoInstance1 = new ProtoInstanceObject().setDEF("Zoom").setName("CameraShot"))
            .addChild(ProtoInstance5 = new ProtoInstanceObject().setDEF("Dolly").setName("CameraShot"))
            .addChild(ProtoInstance9 = new ProtoInstanceObject().setDEF("Pan").setName("CameraShot"))
            .addChild(ProtoInstance14 = new ProtoInstanceObject().setDEF("CameraBoom").setName("CameraShot"))
            .addChild(ProtoInstance18 = new ProtoInstanceObject().setDEF("CameraTilt").setName("CameraShot")));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("description").setValue("Simple shot of Camera Zoom"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("initialPosition").setValue("-50 1 -10"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("initialOrientation").setValue("0 1 0 0"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("moves")
                .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("CameraMovement"))
                .addChild(ProtoInstance3 = new ProtoInstanceObject().setName("CameraMovement"))
                .addChild(ProtoInstance4 = new ProtoInstanceObject().setName("CameraMovement")));
ProtoInstance2
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Zoom In"));
ProtoInstance2
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("3"));
ProtoInstance2
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-50 1 -15"));
ProtoInstance2
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance3
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Zoom Out"));
ProtoInstance3
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("3"));
ProtoInstance3
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-50 1 -10"));
ProtoInstance3
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance4
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Pause"));
ProtoInstance4
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("1"));
ProtoInstance4
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-50 1 -10"));
ProtoInstance4
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance5
              .addFieldValue(new fieldValueObject().setName("description").setValue("Simple shot of Camera Dolly"));
ProtoInstance5
              .addFieldValue(new fieldValueObject().setName("initialPosition").setValue("-40 1 -10"));
ProtoInstance5
              .addFieldValue(new fieldValueObject().setName("initialOrientation").setValue("0 1 0 0"));
ProtoInstance5
              .addFieldValue(new fieldValueObject().setName("moves")
                .addChild(ProtoInstance6 = new ProtoInstanceObject().setDEF("DollyMove1").setName("CameraMovement"))
                .addChild(ProtoInstance7 = new ProtoInstanceObject().setName("CameraMovement"))
                .addChild(ProtoInstance8 = new ProtoInstanceObject().setName("CameraMovement")));
ProtoInstance6
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Dolly from Right to Left"));
ProtoInstance6
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("3"));
ProtoInstance6
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-45 1 -10"));
ProtoInstance6
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance7
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Dolly from Left to Right"));
ProtoInstance7
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("3"));
ProtoInstance7
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-40 1 -10"));
ProtoInstance7
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance8
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Pause"));
ProtoInstance8
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("1"));
ProtoInstance8
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-40 1 -10"));
ProtoInstance8
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance9
              .addFieldValue(new fieldValueObject().setName("description").setValue("Simple shot of Camera Pan left right and back to center"));
ProtoInstance9
              .addFieldValue(new fieldValueObject().setName("initialPosition").setValue("-30 1 -10"));
ProtoInstance9
              .addFieldValue(new fieldValueObject().setName("initialOrientation").setValue("0 1 0 0"));
ProtoInstance9
              .addFieldValue(new fieldValueObject().setName("moves")
                .addChild(ProtoInstance10 = new ProtoInstanceObject().setDEF("PanLeft").setName("CameraMovement"))
                .addChild(ProtoInstance11 = new ProtoInstanceObject().setDEF("PanRight").setName("CameraMovement"))
                .addChild(ProtoInstance12 = new ProtoInstanceObject().setName("CameraMovement"))
                .addChild(ProtoInstance13 = new ProtoInstanceObject().setName("CameraMovement")));
ProtoInstance10
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Pan Left"));
ProtoInstance10
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("2"));
ProtoInstance10
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-30 1 -10"));
ProtoInstance10
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0.4"));
ProtoInstance11
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Pan Right"));
ProtoInstance11
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("3"));
ProtoInstance11
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-30 1 -10"));
ProtoInstance11
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 -0.4"));
ProtoInstance12
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Pan back to Center"));
ProtoInstance12
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("2"));
ProtoInstance12
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-30 1 -10"));
ProtoInstance12
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance13
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Pause"));
ProtoInstance13
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("2"));
ProtoInstance13
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-30 1 -10"));
ProtoInstance13
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance14
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Boom"));
ProtoInstance14
              .addFieldValue(new fieldValueObject().setName("initialPosition").setValue("-20 1 -10"));
ProtoInstance14
              .addFieldValue(new fieldValueObject().setName("initialOrientation").setValue("0 1 0 0"));
ProtoInstance14
              .addFieldValue(new fieldValueObject().setName("moves")
                .addChild(ProtoInstance15 = new ProtoInstanceObject().setDEF("CameraBoomUp").setName("CameraMovement"))
                .addChild(ProtoInstance16 = new ProtoInstanceObject().setDEF("BoomDown").setName("CameraMovement"))
                .addChild(ProtoInstance17 = new ProtoInstanceObject().setDEF("BoomPause").setName("CameraMovement")));
ProtoInstance15
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Boom Up"));
ProtoInstance15
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("3"));
ProtoInstance15
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-20 5 -10"));
ProtoInstance15
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance16
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Boom Down"));
ProtoInstance16
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("3"));
ProtoInstance16
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-20 1 -10"));
ProtoInstance16
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance17
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Pause"));
ProtoInstance17
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("2"));
ProtoInstance17
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-20 1 -10"));
ProtoInstance17
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance18
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt"));
ProtoInstance18
              .addFieldValue(new fieldValueObject().setName("initialPosition").setValue("-10 1 -10"));
ProtoInstance18
              .addFieldValue(new fieldValueObject().setName("initialOrientation").setValue("0 0 1 0"));
ProtoInstance18
              .addFieldValue(new fieldValueObject().setName("traceEnabled").setValue("true"));
ProtoInstance18
              .addFieldValue(new fieldValueObject().setName("moves")
                .addChild(ProtoInstance19 = new ProtoInstanceObject().setName("CameraMovement"))
                .addChild(ProtoInstance20 = new ProtoInstanceObject().setDEF("TiltDown").setName("CameraMovement"))
                .addChild(ProtoInstance21 = new ProtoInstanceObject().setDEF("TiltPause").setName("CameraMovement"))
                .addChild(ProtoInstance22 = new ProtoInstanceObject().setName("CameraMovement"))
                .addChild(ProtoInstance23 = new ProtoInstanceObject().setName("CameraMovement"))
                .addChild(ProtoInstance24 = new ProtoInstanceObject().setDEF("TiltReset").setName("CameraMovement"))
                .addChild(ProtoInstance25 = new ProtoInstanceObject().setDEF("TiltUp").setName("CameraMovement")));
ProtoInstance19
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt Pause"));
ProtoInstance19
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("1"));
ProtoInstance19
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-10 1 -10"));
ProtoInstance19
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 0 1 0"));
ProtoInstance20
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt Left"));
ProtoInstance20
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("3"));
ProtoInstance20
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-10 1 -10"));
ProtoInstance20
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 0 1 0.785"));
ProtoInstance21
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt Pause"));
ProtoInstance21
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("1"));
ProtoInstance21
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-10 1 -10"));
ProtoInstance21
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 0 1 0.785"));
ProtoInstance22
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt Right"));
ProtoInstance22
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("3"));
ProtoInstance22
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-10 1 -10"));
ProtoInstance22
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 0 1 -0.785"));
ProtoInstance23
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt Pause"));
ProtoInstance23
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("1"));
ProtoInstance23
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-10 1 -10"));
ProtoInstance23
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 0 1 -0.785"));
ProtoInstance24
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt Reset"));
ProtoInstance24
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("1"));
ProtoInstance24
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-10 1 -10"));
ProtoInstance24
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 0 1 0"));
ProtoInstance25
                  .addFieldValue(new fieldValueObject().setName("description").setValue("Return to home"));
ProtoInstance25
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("2"));
ProtoInstance25
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("0 2 12"));
ProtoInstance25
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 0 1 0"));
ProtoInstance26
          .addFieldValue(new fieldValueObject().setName("description").setValue("AimPointTest for moving camera tracking moving target"));
ProtoInstance26
          .addFieldValue(new fieldValueObject().setName("position").setValue("4 4 10"));
ProtoInstance26
          .addFieldValue(new fieldValueObject().setName("shots")
            .addChild(ProtoInstance27 = new ProtoInstanceObject().setDEF("Shot5").setName("CameraShot")));
ProtoInstance27
              .addFieldValue(new fieldValueObject().setName("description").setValue("#3 Tracking shot"));
ProtoInstance27
              .addFieldValue(new fieldValueObject().setName("initialPosition").setValue("6 6 10"));
ProtoInstance27
              .addFieldValue(new fieldValueObject().setName("initialOrientation").setValue("0 1 0 0"));
ProtoInstance27
              .addFieldValue(new fieldValueObject().setName("moves")
                .addChild(ProtoInstance28 = new ProtoInstanceObject().setDEF("MoveAimPoint3.1").setName("CameraMovement")
                  .addComments(new CommentsBlock(" goalAimPoint modified by ROUTE to match moving Box ")))
                .addChild(ProtoInstance29 = new ProtoInstanceObject().setDEF("MoveAimPoint3.2").setName("CameraMovement")
                  .addComments(new CommentsBlock(" goalAimPoint modified by ROUTE to match moving Box ")))
                .addChild(ProtoInstance30 = new ProtoInstanceObject().setDEF("MoveAimPoint3.3").setName("CameraMovement")
                  .addComments(new CommentsBlock(" goalAimPoint modified by ROUTE to match moving Box ")))
                .addChild(ProtoInstance31 = new ProtoInstanceObject().setDEF("MoveAimPoint3.4").setName("CameraMovement")
                  .addComments(new CommentsBlock(" can test tracking or not using these values "))));
ProtoInstance28
                  .addFieldValue(new fieldValueObject().setName("description").setValue("AimPoint 3.1 moving BoxPath"));
ProtoInstance28
                  .addFieldValue(new fieldValueObject().setName("tracking").setValue("true"));
ProtoInstance28
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("8"));
ProtoInstance28
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("6 6 10"));
ProtoInstance29
                  .addFieldValue(new fieldValueObject().setName("description").setValue("AimPoint 3.2 pan right while tracking"));
ProtoInstance29
                  .addFieldValue(new fieldValueObject().setName("tracking").setValue("true"));
ProtoInstance29
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("8"));
ProtoInstance29
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("40 6 12"));
ProtoInstance30
                  .addFieldValue(new fieldValueObject().setName("description").setValue("AimPoint 3.3 boom up while tracking"));
ProtoInstance30
                  .addFieldValue(new fieldValueObject().setName("tracking").setValue("true"));
ProtoInstance30
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("3"));
ProtoInstance30
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("40 20 13"));
ProtoInstance31
                  .addFieldValue(new fieldValueObject().setName("description").setValue("AimPoint 3.4 restore camera back to home"));
ProtoInstance31
                  .addFieldValue(new fieldValueObject().setName("tracking").setValue("true"));
ProtoInstance31
                  .addFieldValue(new fieldValueObject().setName("duration").setValue("5"));
ProtoInstance31
                  .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("4 4 10"));
ProtoInstance31
                  .addFieldValue(new fieldValueObject().setName("goalAimPoint").setValue("4 4 0"));
ProtoInstance31
                  .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0"));
ProtoInstance33
            .addFieldValue(new fieldValueObject().setName("ViewpointNode")
              .addChild(new ViewpointObject().setDEF("FrustumViewpoint").setDescription("viewpoint for ViewFrustum").setPosition(new float[] {0f,0f,0f})));
ProtoInstance33
            .addFieldValue(new fieldValueObject().setName("NavigationInfoNode")
              .addChild(new NavigationInfoObject().setDEF("TestNavigationInfo").setTransitionType(new MFStringObject(new MFString27().getArray())).setVisibilityLimit(100f)));
ProtoInstance33
            .addFieldValue(new fieldValueObject().setName("visible").setValue("false"));
ProtoInstance33
            .addFieldValue(new fieldValueObject().setName("lineColor").setValue("0.9 0.9 0.9"));
ProtoInstance33
            .addFieldValue(new fieldValueObject().setName("frustumColor").setValue("0.8 0.8 0.8"));
ProtoInstance33
            .addFieldValue(new fieldValueObject().setName("transparency").setValue("0.95"));
ProtoInstance34
          .addFieldValue(new fieldValueObject().setName("enabled").setValue("true"));
ProtoInstance34
          .addFieldValue(new fieldValueObject().setName("markerColor").setValue("1 0.5 0"));
ProtoInstance34
          .addFieldValue(new fieldValueObject().setName("scale").setValue("1 1 1"));
ProtoInstance34
          .addFieldValue(new fieldValueObject().setName("positionOffsetFromCamera").setValue("0 0 -6"));
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CameraPrototypes.x3d#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#Camera","CameraPrototypes.wrl#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#Camera"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CameraPrototypes.x3d#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraShot","CameraPrototypes.wrl#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraShot"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CameraPrototypes.x3d#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraMovement","CameraPrototypes.wrl#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraMovement"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CameraPrototypes.x3d#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#OfflineRender","CameraPrototypes.wrl#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#OfflineRender"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Click to animate","SimpleShotsTest"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/CameraMoveZoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveZoom.png"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Zoom in, out"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/CameraMoveDolly.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveDolly.png"});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Dolly left, right"});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString12 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/CameraMovePan.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMovePan.png"});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Pan left, right"});
  }
}
protected class MFString14 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString15 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/CameraMoveBoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveBoom.png"});
  }
}
protected class MFString16 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Boom up, down"});
  }
}
protected class MFString17 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString18 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/CameraMoveTilt.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveTilt.png"});
  }
}
protected class MFString19 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Tilt left, right"});
  }
}
protected class MFString20 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString21 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Click to animate","AimPointTest"});
  }
}
protected class MFString22 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString23 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CameraShape.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraShape.x3d"});
  }
}
protected class MFInt3224 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f25 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,0f,-100f});
  }
}
protected class MFString26 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum"});
  }
}
protected class MFString27 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ANIMATE"});
  }
}
protected class MFColor28 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.282353f,0.380392f,0.470588f});
  }
}
protected class MFInt3229 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0});
  }
}
protected class MFInt3230 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1});
  }
}
protected class MFVec3f31 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-5.25f,5.25f,0f,-3.75f,5.25f,0f,-2.25f,5.25f,0f,-0.75f,5.25f,0f,0.75f,5.25f,0f,2.25f,5.25f,0f,3.75f,5.25f,0f,5.25f,5.25f,0f,-5.25f,3.75f,0f,-3.75f,3.75f,0f,-2.25f,3.75f,0f,-0.75f,3.75f,0f,0.75f,3.75f,0f,2.25f,3.75f,0f,3.75f,3.75f,0f,5.25f,3.75f,0f,-5.25f,2.25f,0f,-3.75f,2.25f,0f,-2.25f,2.25f,0f,-0.75f,2.25f,0f,0.75f,2.25f,0f,2.25f,2.25f,0f,3.75f,2.25f,0f,5.25f,2.25f,0f,-5.25f,0.75f,0f,-3.75f,0.75f,0f,-2.25f,0.75f,0f,-0.75f,0.75f,0f,0.75f,0.75f,0f,2.25f,0.75f,0f,3.75f,0.75f,0f,5.25f,0.75f,0f,-5.25f,-0.75f,0f,-3.75f,-0.75f,0f,-2.25f,-0.75f,0f,-0.75f,-0.75f,0f,0.75f,-0.75f,0f,2.25f,-0.75f,0f,3.75f,-0.75f,0f,5.25f,-0.75f,0f,-5.25f,-2.25f,0f,-3.75f,-2.25f,0f,-2.25f,-2.25f,0f,-0.75f,-2.25f,0f,0.75f,-2.25f,0f,2.25f,-2.25f,0f,3.75f,-2.25f,0f,5.25f,-2.25f,0f,-5.25f,-3.75f,0f,-3.75f,-3.75f,0f,-2.25f,-3.75f,0f,-0.75f,-3.75f,0f,0.75f,-3.75f,0f,2.25f,-3.75f,0f,3.75f,-3.75f,0f,5.25f,-3.75f,0f,-5.25f,-5.25f,0f,-3.75f,-5.25f,0f,-2.25f,-5.25f,0f,-0.75f,-5.25f,0f,0.75f,-5.25f,0f,2.25f,-5.25f,0f,3.75f,-5.25f,0f,5.25f,-5.25f,0f});
  }
}
protected class MFColor32 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.435294f,0.741176f,0f,0f,0.560784f,0.580392f});
  }
}
protected class MFString33 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"});
  }
}
protected class MFFloat34 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFVec3f35 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-5f,1f,5f,45f,1f,5f,45f,1f,-45f,-5f,1f,-45f,-5f,1f,5f});
  }
}
protected class MFString36 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"});
  }
}
protected class MFString37 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"});
  }
}
protected class MFString38 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_blank"});
  }
}
protected class MFString39 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CameraExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.x3d","CameraExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.wrl"});
  }
}
protected class MFString40 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CameraPrototype","defines a prototype","","Click on this text to see","CameraExample scene"});
  }
}
protected class MFString41 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
