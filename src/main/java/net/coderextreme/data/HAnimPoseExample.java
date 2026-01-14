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
import java.util.ArrayList;
import java.util.List;
import net.coderextreme.X3DRoots;
public class HAnimPoseExample implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new HAnimPoseExample().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/HAnimPoseExample.new.java.x3d");
    model.toFileJSON("../data/HAnimPoseExample.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Full").setVersion("4.1")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("HAnimPoseExample.x3d"))
        .addMeta(new meta().setName("description").setContent("Native XML definition of an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed."))
        .addMeta(new meta().setName("created").setContent("11 December 2025"))
        .addMeta(new meta().setName("modified").setContent("14 December 2025"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("warning").setContent("under development for X3D 4.1"))
        .addMeta(new meta().setName("specificationSection").setContent("HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose"))
        .addMeta(new meta().setName("specificationUrl").setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose"))
        .addMeta(new meta().setName("specificationSection").setContent("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures"))
        .addMeta(new meta().setName("specificationUrl").setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures"))
        .addMeta(new meta().setName("specificationSection").setContent("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses"))
        .addMeta(new meta().setName("specificationUrl").setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExample.x3d"))
        .addMeta(new meta().setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setDEF("ModelInfo").setInfo(new MFString0().getArray()).setTitle("HAnimPoseExample.x3d"))
        .addChild(new Background().setSkyColor(new MFColor1().getArray()))
        .addChild(new NavigationInfo())
        .addChild(new Group().setDEF("HandleInlineLoading")
          .addComments(new CommentsBlock("Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2"))
          .addComments(new CommentsBlock("Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun"))
          .addChild(new Inline().setDEF("HumanoidInline").setDescription("remote HAnimHumanoid for IMPORT").setUrl(new MFString2().getArray()))
          .addComments(new CommentsBlock("Note that the following importedDEF must match the EXPORT name found in remote file"))
          .addChild(new IMPORT().setAS("HumanoidImported").setImportedDEF("JoeSkeletonSkinSite").setInlineDEF("HumanoidInline"))
          .addChild(new LoadSensor().setDEF("HumanoidInlineLoadSensor").setTimeOut(2d)
            .addChild(new Inline().setUSE("HumanoidInline"))))
        .addChild(new Viewpoint().setDescription("HAnimPose for HumanoidInline IMPORT model").setPosition(new float[] {0f ,1f ,4f }))
        .addComments(new CommentsBlock("no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc..."))
        .addChild(new HAnimPose().setName("T").setDEF("T_Pose").setDescription("arms stretched outward and level similar to letter T").setLoa(1).setTransitionDuration(1.3d)
          .setMetadata(new MetadataString().setName("metadataTest").setValue(new MFString3().getArray()))
          .addComments(new CommentsBlock("test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/"))
          .addChild(new HAnimJoint("T_Pose").setName("l_shoulder").setDEF("PoseJoint_l_shoulder_1").setDescription("left shoulder").setRotation(new float[] {0f ,0f ,1f ,1.57f }).setUlimit(new MFFloat4().getArray()).setLlimit(new MFFloat5().getArray()))
          .addChild(new HAnimJoint("T_Pose").setName("r_shoulder").setDEF("PoseJoint_r_shoulder_1").setDescription("right shoulder").setRotation(new float[] {0f ,0f ,-1f ,1.57f }).setUlimit(new MFFloat6().getArray()).setLlimit(new MFFloat7().getArray())))
        .addChild(new HAnimPose().setName("A").setDEF("A_Pose").setDescription("arms stretched outward and downward similar to letter A").setLoa(1).setTransitionDuration(1.2d)
          .addChild(new HAnimJoint("A_Pose").setName("l_shoulder").setDEF("PoseJoint_l_shoulder").setDescription("left shoulder").setRotation(new float[] {0f ,0f ,1f ,0.5f }).setUlimit(new MFFloat8().getArray()).setLlimit(new MFFloat9().getArray()))
          .addChild(new HAnimJoint("A_Pose").setName("r_shoulder").setDEF("PoseJoint_r_shoulder").setDescription("right shoulder").setRotation(new float[] {0f ,0f ,-1f ,0.5f }).setUlimit(new MFFloat10().getArray()).setLlimit(new MFFloat11().getArray())))
        .addChild(new HAnimPose().setName("TouchDown").setDEF("TouchDown_Pose").setDescription("arms and legs stretched outward providing a TouchDown gesture").setLoa(1).setTransitionDuration(1.2d)
          .addChild(new HAnimJoint("TouchDown_Pose").setName("humanoid_root").setRotation(new float[] {0f ,1f ,0f ,-0.698132f }).setUlimit(new MFFloat12().getArray()).setLlimit(new MFFloat13().getArray()))
          .addChild(new HAnimJoint("TouchDown_Pose").setName("l_hip").setRotation(new float[] {-1f ,1f ,1f ,1f }).setUlimit(new MFFloat14().getArray()).setLlimit(new MFFloat15().getArray()))
          .addChild(new HAnimJoint("TouchDown_Pose").setName("l_knee").setRotation(new float[] {1f ,0f ,0f ,1f }).setUlimit(new MFFloat16().getArray()).setLlimit(new MFFloat17().getArray()))
          .addChild(new HAnimJoint("TouchDown_Pose").setName("l_talocrural").setRotation(new float[] {-0.2f ,0f ,0.1f ,0.225f }).setUlimit(new MFFloat18().getArray()).setLlimit(new MFFloat19().getArray()))
          .addChild(new HAnimJoint("TouchDown_Pose").setName("r_hip").setRotation(new float[] {-1f ,-1f ,-1f ,1f }).setUlimit(new MFFloat20().getArray()).setLlimit(new MFFloat21().getArray()))
          .addChild(new HAnimJoint("TouchDown_Pose").setName("r_knee").setRotation(new float[] {1f ,0f ,0f ,1f }).setUlimit(new MFFloat22().getArray()).setLlimit(new MFFloat23().getArray()))
          .addChild(new HAnimJoint("TouchDown_Pose").setName("r_talocrural").setRotation(new float[] {-0.2f ,0f ,0.1f ,0.25f }).setUlimit(new MFFloat24().getArray()).setLlimit(new MFFloat25().getArray()))
          .addChild(new HAnimJoint("TouchDown_Pose").setName("vl5").setRotation(new float[] {0f ,0f ,0.01f ,0.2f }).setUlimit(new MFFloat26().getArray()).setLlimit(new MFFloat27().getArray()))
          .addChild(new HAnimJoint("TouchDown_Pose").setName("vt10").setRotation(new float[] {0f ,0f ,0.01f ,0.1f }).setUlimit(new MFFloat28().getArray()).setLlimit(new MFFloat29().getArray()))
          .addChild(new HAnimJoint("TouchDown_Pose").setName("vc4").setRotation(new float[] {0f ,0f ,-0.01f ,0.15f }).setUlimit(new MFFloat30().getArray()).setLlimit(new MFFloat31().getArray()))
          .addChild(new HAnimJoint("TouchDown_Pose").setName("l_shoulder").setRotation(new float[] {-1f ,0.5f ,1f ,2f }).setUlimit(new MFFloat32().getArray()).setLlimit(new MFFloat33().getArray()))
          .addChild(new HAnimJoint("TouchDown_Pose").setName("l_elbow").setRotation(new float[] {-1f ,0f ,0f ,1f }).setUlimit(new MFFloat34().getArray()).setLlimit(new MFFloat35().getArray()))
          .addChild(new HAnimJoint("TouchDown_Pose").setName("l_radiocarpal").setUlimit(new MFFloat36().getArray()).setLlimit(new MFFloat37().getArray()))
          .addChild(new HAnimJoint("TouchDown_Pose").setName("r_shoulder").setRotation(new float[] {-1f ,-0.5f ,-1f ,2.6f }).setUlimit(new MFFloat38().getArray()).setLlimit(new MFFloat39().getArray()))
          .addChild(new HAnimJoint("TouchDown_Pose").setName("r_elbow").setRotation(new float[] {-1f ,0f ,0f ,1f }).setUlimit(new MFFloat40().getArray()).setLlimit(new MFFloat41().getArray()))
          .addChild(new HAnimJoint("TouchDown_Pose").setName("r_radiocarpal").setUlimit(new MFFloat42().getArray()).setLlimit(new MFFloat43().getArray())))
        .addChild(new HAnimPose().setName("I").setDEF("I_Pose").setDescription("arms and legs straight down default binding pose for baseline Humanoid").setLoa(1).setTransitionDuration(1.5d)
          .addComments(new CommentsBlock("not defining any poseJoint HAnimJoint nodes equals the default \"I\" pose")))
        .addChild(new HAnimPose().setName("H").setDEF("H_Pose").setDescription("TODO experimental pose not yet implemented").setEnabled(false).setTransitionDuration(1.4d).setLoa(-1)
          .addComments(new CommentsBlock("TODO define poseJoint HAnimJoint nodes")))
        .addChild(new HAnimPose().setName("FaceLeft").setDEF("FaceLeft_Pose").setDescription("Only modify humanoid_root Joint node to face left").setLoa(0).setTransitionDuration(1.1d)
          .addChild(new HAnimJoint("FaceLeft_Pose").setName("humanoid_root").setDEF("FaceLeft_humanoid_root").setDescription("Only rotate the model").setRotation(new float[] {0f ,1f ,0f ,1.570796f }).setUlimit(new MFFloat44().getArray()).setLlimit(new MFFloat45().getArray())))
        .addChild(new HAnimPose().setName("FaceRight").setDEF("FaceRight_Pose").setDescription("Only modify humanoid_root Joint node to face right").setLoa(0).setTransitionDuration(1.1d)
          .addChild(new HAnimJoint("FaceRight_Pose").setName("humanoid_root").setDEF("FaceRight_humanoid_root").setDescription("Only rotate the model").setRotation(new float[] {0f ,1f ,0f ,-1.570796f }).setUlimit(new MFFloat46().getArray()).setLlimit(new MFFloat47().getArray())))
        .addChild(new Group().setDEF("InterfaceButtonsGroup")
          .addChild(new Transform().setDEF("DisplayHeader").setTranslation(new float[] {0f ,2f ,0f })
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString48().getArray())
                .setFontStyle(new FontStyle().setDEF("HeaderFont").setFamily(new MFString49().getArray()).setJustify(new MFString50().getArray()).setSize(0.15f ).setStyle("BOLD")))
              .setAppearance(new Appearance().setDEF("PoseTextAppearance")
                .setMaterial(new Material().setDiffuseColor(new float[] {0.1f ,0.5f ,0.3f })))))
          .addChild(new Transform().setDEF("T_PoseInterface").setTranslation(new float[] {-1.5f ,1.5f ,0f })
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString51().getArray())
                .setFontStyle(new FontStyle().setDEF("SharedFont").setFamily(new MFString52().getArray()).setJustify(new MFString53().getArray()).setSize(0.1f ).setStyle("BOLD")))
              .setAppearance(new Appearance().setUSE("PoseTextAppearance")))
            .addChild(new Shape()
              .setAppearance(new Appearance().setDEF("TransparentAppearance")
                .setMaterial(new Material().setTransparency(0.8f )))
              .setGeometry(new Box().setSize(new float[] {0.45f ,0.2f ,0.001f })))
            .addChild(new TouchSensor().setDEF("T_PoseTouchSensor").setDescription("select to move shoulders to \"T\" pose, leave other joints unchanged"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("T_PoseTouchSensor").setToField("commencePose").setToNode("T_Pose")))
          .addChild(new Transform().setDEF("A_PoseInterface").setTranslation(new float[] {-1.5f ,1f ,0f })
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString54().getArray())
                .setFontStyle(new FontStyle().setUSE("SharedFont")))
              .setAppearance(new Appearance().setUSE("PoseTextAppearance")))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Selectable Text transparent Box for easy user selection"))
              .setAppearance(new Appearance().setUSE("TransparentAppearance"))
              .setGeometry(new Box().setSize(new float[] {0.45f ,0.2f ,0.001f })))
            .addChild(new TouchSensor().setDEF("A_PoseTouchSensor").setDescription("select to move shoulders to \"A\" pose, leave other joints unchanged"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("A_PoseTouchSensor").setToField("commencePose").setToNode("A_Pose")))
          .addChild(new Transform().setDEF("TouchDown_PoseInterface").setTranslation(new float[] {-1.5f ,0.5f ,0f })
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString55().getArray())
                .setFontStyle(new FontStyle().setUSE("SharedFont")))
              .setAppearance(new Appearance().setUSE("PoseTextAppearance")))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Selectable Text transparent Box for easy user selection"))
              .setAppearance(new Appearance().setUSE("TransparentAppearance"))
              .setGeometry(new Box().setSize(new float[] {0.85f ,0.2f ,0.001f })))
            .addChild(new TouchSensor().setDEF("TouchDown_PoseTouchSensor").setDescription("select to transition all joints to TouchDown pose"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("TouchDown_PoseTouchSensor").setToField("commencePose").setToNode("TouchDown_Pose")))
          .addChild(new Transform().setDEF("I_PoseInterface").setTranslation(new float[] {-1.5f ,0f ,0f })
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString56().getArray())
                .setFontStyle(new FontStyle().setUSE("SharedFont")))
              .setAppearance(new Appearance().setUSE("PoseTextAppearance")))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Selectable Text transparent Box for easy user selection"))
              .setAppearance(new Appearance().setUSE("TransparentAppearance"))
              .setGeometry(new Box().setSize(new float[] {0.45f ,0.2f ,0.001f })))
            .addChild(new TouchSensor().setDEF("I_PoseTouchSensor").setDescription("select to transition all joints to \"I\" pose"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("I_PoseTouchSensor").setToField("commencePose").setToNode("I_Pose")))
          .addChild(new Transform().setDEF("FaceLeftPoseInterface").setTranslation(new float[] {1.5f ,1.5f ,0f })
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString57().getArray())
                .setFontStyle(new FontStyle().setUSE("SharedFont")))
              .setAppearance(new Appearance().setUSE("PoseTextAppearance")))
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("TransparentAppearance"))
              .setGeometry(new Box().setSize(new float[] {0.9f ,0.2f ,0.001f })))
            .addChild(new TouchSensor().setDEF("FaceLeftTouchSensor").setDescription("select to rotate body and Face Left, leave other joints unchanged"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("FaceLeftTouchSensor").setToField("commencePose").setToNode("FaceLeft_Pose")))
          .addChild(new Transform().setDEF("FaceRightPoseInterface").setTranslation(new float[] {1.5f ,1f ,0f })
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString58().getArray())
                .setFontStyle(new FontStyle().setUSE("SharedFont")))
              .setAppearance(new Appearance().setUSE("PoseTextAppearance")))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Selectable Text transparent Box for easy user selection"))
              .setAppearance(new Appearance().setUSE("TransparentAppearance"))
              .setGeometry(new Box().setSize(new float[] {0.9f ,0.2f ,0.001f })))
            .addChild(new TouchSensor().setDEF("FaceRightTouchSensor").setDescription("select to rotate body and Face Right, leave other joints unchanged"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("FaceRightTouchSensor").setToField("commencePose").setToNode("FaceRight_Pose")))
          .addChild(new Transform().setDEF("AnimatePosesInterface").setTranslation(new float[] {1.5f ,0.5f ,0f })
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString59().getArray())
                .setFontStyle(new FontStyle().setUSE("SharedFont")))
              .setAppearance(new Appearance().setDEF("AnimationTextAppearance")
                .setMaterial(new Material().setDiffuseColor(new float[] {0.1f ,0.2f ,0.3f }))))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Selectable Text transparent Box for easy user selection"))
              .setAppearance(new Appearance().setUSE("TransparentAppearance"))
              .setGeometry(new Box().setSize(new float[] {0.9f ,0.25f ,0.001f })))
            .addChild(new TouchSensor().setDEF("AnimatePosesTouchSensor").setDescription("select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events"))
            .addComments(new CommentsBlock("cycleInterval=4 also hard-coded in script execution message"))
            .addChild(new TimeSensor().setDEF("AnimatePosesClock").setCycleInterval(4d).setDescription("directly animate several poses"))
            .addChild(new ScalarInterpolator().setDEF("AnimatePosesLoopInterpolator").setKey(new MFFloat60().getArray()).setKeyValue(new MFFloat61().getArray()))
            .addChild(new ROUTE().setFromField("touchTime").setFromNode("AnimatePosesTouchSensor").setToField("startTime").setToNode("AnimatePosesClock"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("AnimatePosesClock").setToField("set_fraction").setToNode("AnimatePosesLoopInterpolator"))
            .addChild(new ROUTE().setFromField("value_changed").setFromNode("AnimatePosesLoopInterpolator").setToField("set_fraction").setToNode("I_Pose")))
          .addChild(new Transform().setDEF("ResetDefaultPoseInterface").setTranslation(new float[] {1.5f ,0f ,0f })
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString62().getArray())
                .setFontStyle(new FontStyle().setUSE("SharedFont")))
              .setAppearance(new Appearance().setUSE("AnimationTextAppearance")))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Selectable Text transparent Box for easy user selection"))
              .setAppearance(new Appearance().setUSE("TransparentAppearance"))
              .setGeometry(new Box().setSize(new float[] {0.9f ,0.25f ,0.001f })))
            .addChild(new TouchSensor().setDEF("ResetPoseTouchSensor").setDescription("select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("ResetPoseTouchSensor").setToField("resetAllJoints").setToNode("FaceLeft_Pose"))))
        .addChild(new Group().setDEF("HandleInlineLoadsensorRouting")
          .addChild(new ROUTE().setFromField("isLoaded").setFromNode("HumanoidInlineLoadSensor").setToField("isLoaded").setToNode("A_Pose"))
          .addChild(new ROUTE().setFromField("isLoaded").setFromNode("HumanoidInlineLoadSensor").setToField("isLoaded").setToNode("H_Pose"))
          .addChild(new ROUTE().setFromField("isLoaded").setFromNode("HumanoidInlineLoadSensor").setToField("isLoaded").setToNode("I_Pose"))
          .addChild(new ROUTE().setFromField("isLoaded").setFromNode("HumanoidInlineLoadSensor").setToField("isLoaded").setToNode("T_Pose"))
          .addChild(new ROUTE().setFromField("isLoaded").setFromNode("HumanoidInlineLoadSensor").setToField("isLoaded").setToNode("FaceLeft_Pose"))
          .addChild(new ROUTE().setFromField("isLoaded").setFromNode("HumanoidInlineLoadSensor").setToField("isLoaded").setToNode("FaceRight_Pose"))
          .addChild(new ROUTE().setFromField("isLoaded").setFromNode("HumanoidInlineLoadSensor").setToField("isLoaded").setToNode("TouchDown_Pose")))
        .addChild(new HAnimHumanoid().setName("HumanoidStub").setInfo(new MFString63().getArray()).setVersion("2.0")
          .addChild(new HAnimPose().setUSE("A_Pose"))
          .addChild(new HAnimPose().setUSE("T_Pose"))
          .addChild(new HAnimPose().setUSE("I_Pose"))
          .addChild(new HAnimPose().setUSE("H_Pose"))
          .addChild(new HAnimPose().setUSE("FaceLeft_Pose"))
          .addChild(new HAnimPose().setUSE("FaceRight_Pose"))
          .addChild(new HAnimPose().setUSE("TouchDown_Pose"))));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Example scene for HAnimPose node"});
  }
}
private class MFColor1 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.8f ,0.8f ,1f });
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../Skin/JoeSkeletonSkinSite.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hello HAnimPose metadata"});
  }
}
private class MFFloat4 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat5 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat6 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat7 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat8 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat9 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat10 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat11 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat12 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat13 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat14 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat15 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat16 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat17 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat18 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat19 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat20 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat21 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat22 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat23 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat24 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat25 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat26 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat27 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat28 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat29 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat30 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat31 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat32 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat33 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat34 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat35 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat36 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat37 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat38 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat39 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat40 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat41 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat42 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat43 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat44 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat45 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat46 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat47 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFString48 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"HAnimPosePrototype example implementation"});
  }
}
private class MFString49 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString50 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFString51 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"\"T\" Pose"});
  }
}
private class MFString52 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString53 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFString54 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"\"A\" Pose"});
  }
}
private class MFString55 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"TouchDown Pose"});
  }
}
private class MFString56 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"\"I\" Pose"});
  }
}
private class MFString57 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Face Left Pose"});
  }
}
private class MFString58 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Face Right Pose"});
  }
}
private class MFString59 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Direct animation","to, from \"I\" Pose"});
  }
}
private class MFFloat60 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.05f ,0.45f ,0.55f ,0.95f ,1f });
  }
}
private class MFFloat61 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,1f ,1f ,0f ,0f });
  }
}
private class MFString62 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Reset All Joints","to Default \"I\" Pose"});
  }
}
private class MFString63 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"humanoidVersion=2.0"});
  }
}
}
