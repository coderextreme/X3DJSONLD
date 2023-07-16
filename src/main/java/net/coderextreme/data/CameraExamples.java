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
public class CameraExamples {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new CameraExamples().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/CameraExamples.new.json");
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
ProtoInstance ProtoInstance3 = null;
ProtoInstance ProtoInstance4 = null;
ProtoInstance ProtoInstance5 = null;
ProtoInstance ProtoInstance6 = null;
ProtoInstance ProtoInstance7 = null;
ProtoInstance ProtoInstance8 = null;
ProtoInstance ProtoInstance9 = null;
ProtoInstance ProtoInstance10 = null;
ProtoInstance ProtoInstance11 = null;
ProtoInstance ProtoInstance12 = null;
ProtoInstance ProtoInstance13 = null;
ProtoInstance ProtoInstance14 = null;
ProtoInstance ProtoInstance15 = null;
ProtoInstance ProtoInstance16 = null;
ProtoInstance ProtoInstance17 = null;
ProtoInstance ProtoInstance18 = null;
ProtoInstance ProtoInstance19 = null;
ProtoInstance ProtoInstance20 = null;
ProtoInstance ProtoInstance21 = null;
ProtoInstance ProtoInstance22 = null;
ProtoInstance ProtoInstance23 = null;
ProtoInstance ProtoInstance24 = null;
ProtoInstance ProtoInstance25 = null;
ProtoInstance ProtoInstance26 = null;
ProtoInstance ProtoInstance27 = null;
ProtoInstance ProtoInstance28 = null;
ProtoInstance ProtoInstance29 = null;
ProtoInstance ProtoInstance30 = null;
ProtoInstance ProtoInstance31 = null;
ProtoInstance ProtoInstance32 = null;
ProtoInstance ProtoInstance33 = null;
ProtoInstance ProtoInstance34 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
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
        .addComments("=============== Camera ==============")
        .addChild(new WorldInfo().setTitle("CameraExamples.x3d"))
        .addChild(new ExternProtoDeclare().setName("Camera").setAppinfo("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images").setUrl(new MFString0().getArray())
          .addField(new field().setType("SFString").setName("description").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this Camera"))
          .addField(new field().setType("SFVec3f").setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"))
          .addField(new field().setType("SFRotation").setName("orientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"))
          .addField(new field().setType("SFFloat").setName("fieldOfView").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4"))
          .addField(new field().setType("SFFloat").setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("input fraction drives interpolators"))
          .addField(new field().setType("SFBool").setName("set_bind").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("input event binds or unbinds this Camera"))
          .addField(new field().setType("SFTime").setName("bindTime").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates when this Camera is bound"))
          .addField(new field().setType("SFBool").setName("isBound").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates whether this Camera is bound or unbound"))
          .addField(new field().setType("SFFloat").setName("nearClipPlane").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]"))
          .addField(new field().setType("SFFloat").setName("farClipPlane").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit"))
          .addField(new field().setType("MFNode").setName("shots").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes"))
          .addField(new field().setType("SFBool").setName("headlight").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether camera headlight is on or off"))
          .addField(new field().setType("SFColor").setName("headlightColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera headlight color"))
          .addField(new field().setType("SFFloat").setName("headlightIntensity").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera headlight intensity"))
          .addField(new field().setType("SFColor").setName("filterColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter color that modifies virtual lens capture"))
          .addField(new field().setType("SFFloat").setName("filterTransparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter transparency that modifies virtual lens capture"))
          .addField(new field().setType("SFVec3f").setName("upVector").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("upVector changes modify camera orientation (and possibly vice versa)"))
          .addField(new field().setType("SFFloat").setName("fStop").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
          .addField(new field().setType("SFFloat").setName("focusDistance").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus"))
          .addField(new field().setType("SFBool").setName("isActive").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
          .addField(new field().setType("SFTime").setName("totalDuration").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"))
          .addField(new field().setType("SFNode").setName("offlineRender").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("OfflineRender node"))
          .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
          .addComments("Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields"))
        .addComments("=============== CameraShot ==============")
        .addChild(new ExternProtoDeclare().setName("CameraShot").setAppinfo("CameraShot collects a specific set of CameraMovement animations that make up an individual shot").setUrl(new MFString1().getArray())
          .addField(new field().setType("SFString").setName("description").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraShot"))
          .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraShot can be activated"))
          .addField(new field().setType("MFNode").setName("moves").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Set of CameraMovement nodes")
            .addComments("initializing CameraMovement nodes are inserted here by scene author using ProtoInstance"))
          .addField(new field().setType("SFVec3f").setName("initialPosition").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera position for this shot"))
          .addField(new field().setType("SFRotation").setName("initialOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera rotation for this shot"))
          .addField(new field().setType("SFVec3f").setName("initialAimPoint").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"))
          .addField(new field().setType("SFFloat").setName("initialFieldOfView").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4"))
          .addField(new field().setType("SFFloat").setName("initialFStop").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
          .addField(new field().setType("SFFloat").setName("initialFocusDistance").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus"))
          .addField(new field().setType("SFTime").setName("shotDuration").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Subtotal duration of contained CameraMovement move durations"))
          .addField(new field().setType("SFBool").setName("isActive").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
          .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress")))
        .addComments("=============== CameraMovement ==============")
        .addChild(new ExternProtoDeclare().setName("CameraMovement").setAppinfo("CameraMovement defines a single camera movement animation").setUrl(new MFString2().getArray())
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
          .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress")))
        .addComments("=============== OfflineRender ==============")
        .addChild(new ExternProtoDeclare().setName("OfflineRender").setAppinfo("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)").setUrl(new MFString3().getArray())
          .addField(new field().setType("SFString").setName("description").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this OfflineRender"))
          .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this OfflineRender can be activated"))
          .addField(new field().setType("SFFloat").setName("frameRate").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Frames per second recorded for this rendering"))
          .addField(new field().setType("SFVec2f").setName("frameSize").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Size of frame in number of pixels width and height"))
          .addField(new field().setType("SFFloat").setName("pixelAspectRatio").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1"))
          .addField(new field().setType("SFTime").setName("set_startTime").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Begin render operation"))
          .addField(new field().setType("SFFloat").setName("progress").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Progress performing render operation (0..1)"))
          .addField(new field().setType("SFTime").setName("renderCompleteTime").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Render operation complete"))
          .addField(new field().setType("MFString").setName("movieFormat").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output movie (mpeg mp4 etc.), use first supported format"))
          .addField(new field().setType("MFString").setName("imageFormat").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output images (png jpeg gif tiff etc.) use first supported format"))
          .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
          .addComments("TODO non-photorealistic rendering (NPR) parameters"))
        .addComments("=============== Lights, camera, action! ==============")
        .addChild(new DirectionalLight().setDirection(new float[] {0f,-1f,0f}).setGlobal(true).setIntensity(0.8f))
        .addChild(new NavigationInfo().setType("\"EXAMINE\" \"FLY\" \"ANY\""))
        .addChild(new Viewpoint().setDescription("Camera test scene entry view").setPosition(new float[] {0f,2f,12f}))
        .addChild(new Viewpoint().setDescription("Camera test scene from above").setOrientation(new float[] {1f,0f,0f,-1.57079f}).setPosition(new float[] {0f,150f,0f}))
        .addComments("Keep prototype instances in same file while developing, then move later")
        .addComments("We will create examples matching those in the paper")
        .addComments("=============== Camera.SimpleShotsTest ==============")
        .addChild(ProtoInstance0 = new ProtoInstance().setName("Camera").setDEF("Camera.SimpleShotsTest"))
        .addChild(new Group().setDEF("AnimationGroup.SimpleShots")
          .addChild(new TimeSensor().setDEF("CameraTimer.SimpleShots"))
          .addComments("initialize clock to match totalDuration of combined Shot Moves")
          .addChild(new ROUTE().setFromField("totalDuration").setFromNode("Camera.SimpleShotsTest").setToField("cycleInterval").setToNode("CameraTimer.SimpleShots"))
          .addComments("TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator")
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("CameraTimer.SimpleShots").setToField("set_fraction").setToNode("Camera.SimpleShotsTest"))
          .addChild(new Transform().setDEF("Trigger.SimpleShots").setTranslation(new float[] {-4f,4f,0f})
            .addChild(new BooleanFilter().setDEF("TextTouchActive.SimpleShotsFilter"))
            .addChild(new TouchSensor().setDEF("TextTouch.SimpleShots").setDescription("touch to animate Camera SimpleShotsTest"))
            .addChild(new ROUTE().setFromField("inputTrue").setFromNode("TextTouchActive.SimpleShotsFilter").setToField("set_bind").setToNode("Camera.SimpleShotsTest"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("TextTouch.SimpleShots").setToField("set_boolean").setToNode("TextTouchActive.SimpleShotsFilter"))
            .addChild(new ROUTE().setFromField("touchTime").setFromNode("TextTouch.SimpleShots").setToField("startTime").setToNode("CameraTimer.SimpleShots"))
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString4().getArray())
                .setFontStyle(new FontStyle().setJustify(new MFString5().getArray())))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDEF("ArtDeco5").setAmbientIntensity(0.24f).setDiffuseColor(new float[] {0.945455f,0.318988f,0.321717f}).setShininess(0.01f).setSpecularColor(new float[] {0.072727f,0.021705f,0.010732f})
                  .addComments("Universal Media Library: ArtDeco 5"))))
            .addComments("Simplify intersection test for user selecting text")
            .addChild(new Shape().setDEF("TransparentBox")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setTransparency(1f)))
              .setGeometry(new Box().setSize(new float[] {6f,2f,0.0001f})))))
        .addChild(new Group().setDEF("SimpleShotsTargets")
          .addChild(new Transform().setDEF("TargetBoxZoom").setTranslation(new float[] {-50f,1f,-20f})
            .addChild(new Shape()
              .setGeometry(new Box())
              .setAppearance(new Appearance()
                .setMaterial(new Material())
                .setTexture(new ImageTexture().setUrl(new MFString6().getArray()))))
            .addChild(new Transform().setTranslation(new float[] {0f,2f,0f})
              .addChild(new Shape()
                .setGeometry(new Text().setString(new MFString7().getArray())
                  .setFontStyle(new FontStyle().setJustify(new MFString8().getArray())))
                .setAppearance(new Appearance()
                  .setMaterial(new Material())))))
          .addChild(new Transform().setDEF("TargetBoxDolly").setTranslation(new float[] {-40f,1f,-20f})
            .addChild(new Shape()
              .setGeometry(new Box())
              .setAppearance(new Appearance()
                .setMaterial(new Material())
                .setTexture(new ImageTexture().setUrl(new MFString9().getArray()))))
            .addChild(new Transform().setTranslation(new float[] {0f,2f,0f})
              .addChild(new Shape()
                .setGeometry(new Text().setString(new MFString10().getArray())
                  .setFontStyle(new FontStyle().setJustify(new MFString11().getArray())))
                .setAppearance(new Appearance()
                  .setMaterial(new Material())))))
          .addChild(new Transform().setDEF("TargetBoxPan").setTranslation(new float[] {-30f,1f,-20f})
            .addChild(new Shape()
              .setGeometry(new Box())
              .setAppearance(new Appearance()
                .setMaterial(new Material())
                .setTexture(new ImageTexture().setUrl(new MFString12().getArray()))))
            .addChild(new Transform().setTranslation(new float[] {0f,2f,0f})
              .addChild(new Shape()
                .setGeometry(new Text().setString(new MFString13().getArray())
                  .setFontStyle(new FontStyle().setJustify(new MFString14().getArray())))
                .setAppearance(new Appearance()
                  .setMaterial(new Material())))))
          .addChild(new Transform().setDEF("TargetBoxBoom").setTranslation(new float[] {-20f,1f,-20f})
            .addChild(new Shape()
              .setGeometry(new Box())
              .setAppearance(new Appearance()
                .setMaterial(new Material())
                .setTexture(new ImageTexture().setUrl(new MFString15().getArray()))))
            .addChild(new Transform().setTranslation(new float[] {0f,2f,0f})
              .addChild(new Shape()
                .setGeometry(new Text().setString(new MFString16().getArray())
                  .setFontStyle(new FontStyle().setJustify(new MFString17().getArray())))
                .setAppearance(new Appearance()
                  .setMaterial(new Material())))))
          .addChild(new Transform().setDEF("TargetBoxTilt").setTranslation(new float[] {-10f,1f,-20f})
            .addChild(new Shape()
              .setGeometry(new Box())
              .setAppearance(new Appearance()
                .setMaterial(new Material())
                .setTexture(new ImageTexture().setUrl(new MFString18().getArray()))))
            .addChild(new Transform().setTranslation(new float[] {0f,2f,0f})
              .addChild(new Shape()
                .setGeometry(new Text().setString(new MFString19().getArray())
                  .setFontStyle(new FontStyle().setJustify(new MFString20().getArray())))
                .setAppearance(new Appearance()
                  .setMaterial(new Material()))))))
        .addComments("=============== Camera.AimPointTest ==============")
        .addChild(ProtoInstance26 = new ProtoInstance().setName("Camera").setDEF("Camera.AimPointTest"))
        .addChild(new Group().setDEF("AnimationGroup.AimPointTest")
          .addChild(new TimeSensor().setDEF("CameraTimer.AimPointTest"))
          .addComments("initialize clock to match totalDuration of combined Shot Moves")
          .addChild(new ROUTE().setFromField("totalDuration").setFromNode("Camera.AimPointTest").setToField("cycleInterval").setToNode("CameraTimer.AimPointTest"))
          .addComments("TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator")
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("CameraTimer.AimPointTest").setToField("set_fraction").setToNode("Camera.AimPointTest"))
          .addChild(new Transform().setDEF("Trigger.AimPointTest").setTranslation(new float[] {4f,4f,0f})
            .addChild(new BooleanFilter().setDEF("TextTouchActive.AimPointFilter"))
            .addChild(new TouchSensor().setDEF("TextTouch.AimPointTest").setDescription("touch to animate Camera AimPointTest"))
            .addChild(new ROUTE().setFromField("inputTrue").setFromNode("TextTouchActive.AimPointFilter").setToField("set_bind").setToNode("Camera.AimPointTest"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("TextTouch.AimPointTest").setToField("set_boolean").setToNode("TextTouchActive.AimPointFilter"))
            .addChild(new ROUTE().setFromField("touchTime").setFromNode("TextTouch.AimPointTest").setToField("startTime").setToNode("CameraTimer.AimPointTest"))
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString21().getArray())
                .setFontStyle(new FontStyle().setJustify(new MFString22().getArray())))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("ArtDeco5"))))
            .addChild(new Shape().setUSE("TransparentBox"))))
        .addComments("TODO build a test once implemented")
        .addChild(ProtoInstance32 = new ProtoInstance().setName("OfflineRender"))
        .addComments("=============== animate a camera shape to visualize view changes ==============")
        .addChild(new Transform().setDEF("CameraShapeTransform").setTranslation(new float[] {0f,0.5f,0f})
          .addComments("move CameraShape using active Camera")
          .addChild(new ROUTE().setFromField("position_changed").setFromNode("Camera.SimpleShotsTest").setToField("translation").setToNode("CameraShapeTransform"))
          .addChild(new ROUTE().setFromField("orientation_changed").setFromNode("Camera.SimpleShotsTest").setToField("rotation").setToNode("CameraShapeTransform"))
          .addChild(new ROUTE().setFromField("position").setFromNode("Camera.AimPointTest").setToField("translation").setToNode("CameraShapeTransform"))
          .addChild(new ROUTE().setFromField("orientation_changed").setFromNode("Camera.AimPointTest").setToField("rotation").setToNode("CameraShapeTransform"))
          .addChild(new Transform().setDEF("CameraOffsetTransform").setTranslation(new float[] {0f,0f,0.25f})
            .addChild(new TouchSensor().setDEF("CameraShapeTouched"))
            .addChild(new Inline().setDEF("CameraShape").setUrl(new MFString23().getArray()))
            .addChild(new Shape().setDEF("SightLine")
              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3224().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f25().getArray())))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setEmissiveColor(new float[] {0.8f,0.8f,0.4f})))))
          .addComments("Display frustum to show camera view within the scene, toggled by user selecting CameraShape")
          .addChild(new ExternProtoDeclare().setName("ViewFrustum").setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes").setUrl(new MFString26().getArray())
            .addField(new field().setType("SFNode").setName("ViewpointNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("required: insert Viewpoint DEF or USE node for view of interest"))
            .addField(new field().setType("SFNode").setName("NavigationInfoNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("required: insert NavigationInfo DEF or USE node of interest"))
            .addField(new field().setType("SFBool").setName("visible").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("whether or not frustum geometry is rendered"))
            .addField(new field().setType("SFColor").setName("lineColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"))
            .addField(new field().setType("SFColor").setName("frustumColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"))
            .addField(new field().setType("SFFloat").setName("transparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5"))
            .addField(new field().setType("SFFloat").setName("aspectRatio").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("assumed ratio height/width, default value 0.75"))
            .addField(new field().setType("SFBool").setName("trace").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("debug support, default false")))
          .addChild(ProtoInstance33 = new ProtoInstance().setName("ViewFrustum").setDEF("ViewFrustumNode"))
          .addChild(new BooleanToggle().setDEF("ViewFrustumToggle"))
          .addChild(new ROUTE().setFromField("isActive").setFromNode("CameraShapeTouched").setToField("set_boolean").setToNode("ViewFrustumToggle"))
          .addChild(new ROUTE().setFromField("toggle").setFromNode("ViewFrustumToggle").setToField("set_visible").setToNode("ViewFrustumNode")))
        .addComments("=============== add checkerboard, axes and other things to look at while animating ==============")
        .addChild(new Background().setSkyColor(new MFColor28().getArray()))
        .addChild(new Transform().setRotation(new float[] {1f,0f,0f,-1.57079f}).setScale(new float[] {10f,10f,10f})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(0.01f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(0.05f)))
            .setGeometry(new IndexedFaceSet().setColorIndex(new MFInt3229().getArray()).setColorPerVertex(false).setCoordIndex(new MFInt3230().getArray()).setNormalPerVertex(false).setSolid(false)
              .setCoord(new Coordinate().setPoint(new MFVec3f31().getArray()))
              .setColor(new Color().setColor(new MFColor32().getArray())))))
        .addChild(new Transform().setScale(new float[] {3f,3f,3f}).setTranslation(new float[] {0f,0.25f,0f})
          .addChild(new Inline().setDEF("CoordinateAxes").setUrl(new MFString33().getArray())))
        .addChild(new Transform().setDEF("MovingBoxTransform")
          .addChild(new PositionInterpolator().setDEF("BoxPath").setKey(new MFFloat34().getArray()).setKeyValue(new MFVec3f35().getArray()))
          .addChild(new TimeSensor().setDEF("BoxTimer").setCycleInterval(10d).setLoop(true))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("BoxPath").setToField("translation").setToNode("MovingBoxTransform"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("BoxPath").setToField("goalAimPoint").setToNode("MoveAimPoint3.1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("BoxPath").setToField("goalAimPoint").setToNode("MoveAimPoint3.2"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("BoxPath").setToField("goalAimPoint").setToNode("MoveAimPoint3.3"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BoxTimer").setToField("set_fraction").setToNode("BoxPath"))
          .addChild(new Shape()
            .setGeometry(new Box())
            .setAppearance(new Appearance()
              .setMaterial(new Material())
              .setTexture(new ImageTexture().setUrl(new MFString36().getArray())))))
        .addComments("================ CrossHair visualization for center of screen ================")
        .addChild(new ExternProtoDeclare().setName("CrossHair").setAppinfo("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point").setUrl(new MFString37().getArray())
          .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("whether CrissHair orititype is enabled or not"))
          .addField(new field().setType("SFBool").setName("set_enabled").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("control whether enabled/disabled"))
          .addField(new field().setType("SFColor").setName("markerColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("color of CrossHair marker"))
          .addField(new field().setType("SFVec3f").setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("size of CrossHair in meters"))
          .addField(new field().setType("SFVec3f").setName("positionOffsetFromCamera").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("distance in front of HUD viewpoint")))
        .addChild(ProtoInstance34 = new ProtoInstance().setName("CrossHair").setDEF("CrossHairInstance"))
        .addComments("turn on CrossHairInstance when animated camera viewpoints are bound")
        .addChild(new ROUTE().setFromField("isBound").setFromNode("Camera.SimpleShotsTest").setToField("set_enabled").setToNode("CrossHairInstance"))
        .addChild(new ROUTE().setFromField("isBound").setFromNode("Camera.AimPointTest").setToField("set_enabled").setToNode("CrossHairInstance"))
        .addComments("turn off CrossHairInstance when animated camera viewpoints are unbound <BooleanFilter DEF='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.SimpleShotsTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.AimPointTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='inputNegate' fromNode='NegateCrossHair' toField='set_enabled' toNode='CrossHairInstance'/>")
        .addComments("=============== TODO Launch Prototype Example ==============")
        .addChild(new Anchor().setDescription("launch CameraExample scene").setParameter(new MFString38().getArray()).setUrl(new MFString39().getArray())
          .addChild(new Transform().setTranslation(new float[] {0f,-3f,0f})
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString40().getArray())
                .setFontStyle(new FontStyle().setJustify(new MFString41().getArray()).setSize(0.5f)))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0.2f})))))))      ;
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
                  .addComments("goalAimPoint modified by ROUTE to match moving Box"))
                .addChild(ProtoInstance29 = new ProtoInstance().setName("CameraMovement").setDEF("MoveAimPoint3.2")
                  .addComments("goalAimPoint modified by ROUTE to match moving Box"))
                .addChild(ProtoInstance30 = new ProtoInstance().setName("CameraMovement").setDEF("MoveAimPoint3.3")
                  .addComments("goalAimPoint modified by ROUTE to match moving Box"))
                .addChild(ProtoInstance31 = new ProtoInstance().setName("CameraMovement").setDEF("MoveAimPoint3.4")
                  .addComments("can test tracking or not using these values")));
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
              .addChild(new Viewpoint().setDEF("FrustumViewpoint").setDescription("viewpoint for ViewFrustum").setPosition(new float[] {0f,0f,0f})));
ProtoInstance33
            .addFieldValue(new fieldValue().setName("NavigationInfoNode")
              .addChild(new NavigationInfo().setDEF("TestNavigationInfo").setTransitionType(new MFString27().getArray()).setVisibilityLimit(100f)));
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
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"CameraPrototypes.x3d#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#Camera","CameraPrototypes.wrl#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#Camera"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"CameraPrototypes.x3d#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraShot","CameraPrototypes.wrl#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraShot"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"CameraPrototypes.x3d#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraMovement","CameraPrototypes.wrl#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraMovement"});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"CameraPrototypes.x3d#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#OfflineRender","CameraPrototypes.wrl#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#OfflineRender"});
  }
}
protected class MFString4 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Click to animate","SimpleShotsTest"});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString6 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/CameraMoveZoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveZoom.png"});
  }
}
protected class MFString7 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Zoom in, out"});
  }
}
protected class MFString8 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString9 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/CameraMoveDolly.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveDolly.png"});
  }
}
protected class MFString10 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Dolly left, right"});
  }
}
protected class MFString11 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString12 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/CameraMovePan.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMovePan.png"});
  }
}
protected class MFString13 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Pan left, right"});
  }
}
protected class MFString14 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString15 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/CameraMoveBoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveBoom.png"});
  }
}
protected class MFString16 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Boom up, down"});
  }
}
protected class MFString17 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString18 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/CameraMoveTilt.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveTilt.png"});
  }
}
protected class MFString19 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Tilt left, right"});
  }
}
protected class MFString20 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString21 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Click to animate","AimPointTest"});
  }
}
protected class MFString22 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString23 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"CameraShape.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraShape.x3d"});
  }
}
protected class MFInt3224 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f25 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0f,-100f});
  }
}
protected class MFString26 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum"});
  }
}
protected class MFString27 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ANIMATE"});
  }
}
protected class MFColor28 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.282353f,0.380392f,0.470588f});
  }
}
protected class MFInt3229 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0});
  }
}
protected class MFInt3230 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1});
  }
}
protected class MFVec3f31 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-5.25f,5.25f,0f,-3.75f,5.25f,0f,-2.25f,5.25f,0f,-0.75f,5.25f,0f,0.75f,5.25f,0f,2.25f,5.25f,0f,3.75f,5.25f,0f,5.25f,5.25f,0f,-5.25f,3.75f,0f,-3.75f,3.75f,0f,-2.25f,3.75f,0f,-0.75f,3.75f,0f,0.75f,3.75f,0f,2.25f,3.75f,0f,3.75f,3.75f,0f,5.25f,3.75f,0f,-5.25f,2.25f,0f,-3.75f,2.25f,0f,-2.25f,2.25f,0f,-0.75f,2.25f,0f,0.75f,2.25f,0f,2.25f,2.25f,0f,3.75f,2.25f,0f,5.25f,2.25f,0f,-5.25f,0.75f,0f,-3.75f,0.75f,0f,-2.25f,0.75f,0f,-0.75f,0.75f,0f,0.75f,0.75f,0f,2.25f,0.75f,0f,3.75f,0.75f,0f,5.25f,0.75f,0f,-5.25f,-0.75f,0f,-3.75f,-0.75f,0f,-2.25f,-0.75f,0f,-0.75f,-0.75f,0f,0.75f,-0.75f,0f,2.25f,-0.75f,0f,3.75f,-0.75f,0f,5.25f,-0.75f,0f,-5.25f,-2.25f,0f,-3.75f,-2.25f,0f,-2.25f,-2.25f,0f,-0.75f,-2.25f,0f,0.75f,-2.25f,0f,2.25f,-2.25f,0f,3.75f,-2.25f,0f,5.25f,-2.25f,0f,-5.25f,-3.75f,0f,-3.75f,-3.75f,0f,-2.25f,-3.75f,0f,-0.75f,-3.75f,0f,0.75f,-3.75f,0f,2.25f,-3.75f,0f,3.75f,-3.75f,0f,5.25f,-3.75f,0f,-5.25f,-5.25f,0f,-3.75f,-5.25f,0f,-2.25f,-5.25f,0f,-0.75f,-5.25f,0f,0.75f,-5.25f,0f,2.25f,-5.25f,0f,3.75f,-5.25f,0f,5.25f,-5.25f,0f});
  }
}
protected class MFColor32 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.435294f,0.741176f,0f,0f,0.560784f,0.580392f});
  }
}
protected class MFString33 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"});
  }
}
protected class MFFloat34 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFVec3f35 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-5f,1f,5f,45f,1f,5f,45f,1f,-45f,-5f,1f,-45f,-5f,1f,5f});
  }
}
protected class MFString36 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"});
  }
}
protected class MFString37 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"});
  }
}
protected class MFString38 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_blank"});
  }
}
protected class MFString39 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"CameraExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.x3d","CameraExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.wrl"});
  }
}
protected class MFString40 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"CameraPrototype","defines a prototype","","Click on this text to see","CameraExample scene"});
  }
}
protected class MFString41 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
