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
public class HAnimPosePrototype implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new HAnimPosePrototype().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/HAnimPosePrototype.new.java.x3d");
    model.toFileJSON("../data/HAnimPosePrototype.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
ProtoInstance ProtoInstance3 = null;
ProtoInstance ProtoInstance4 = null;
ProtoInstance ProtoInstance5 = null;
ProtoInstance ProtoInstance6 = null;
      X3D X3D0 =  new X3D().setProfile(new SFString("Full")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("HAnimPosePrototype.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.")))
        .addMeta(new meta().setName(new SFString("info")).setContent(new SFString("This model also takes advantage of Inline/IMPORT capabilities (equivalent to USE node) and thus avoids fully copying a large, complex HAnimHumanoid model. Multiple HAnimHumanoid models have been tested satisfactorily, for HAnim version 1 (X3d 3) AND HAnim version 2 (X3D 4).")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("2 October 2025")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("14 December 2025")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Don Brutzman")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Joe Williams")))
        .addMeta(new meta().setName(new SFString("contributor")).setContent(new SFString("Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("HAnimPosePrototype.console.txt")))
        .addMeta(new meta().setName(new SFString("MovingImage")).setContent(new SFString("demonstration video https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeDemoVideo.mp4")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("HAnimPoseExampleTouchDown.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("HAnimPoseExampleTouchDownFaceLeftAPose.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("images/HAnimPoseExampleBoxMan1.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("images/HAnimPoseExampleBoxMan2.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("images/HAnimPoseExampleJoeKick.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("images/HAnimPoseExampleJoeSkeletonSkinSite.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("images/HAnimPoseExampleKoreanCharacter01Jin.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("images/HAnimPoseExampleKoreanCharacter02Chul.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("images/HAnimPoseExampleKoreanCharacter03Hyun.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("images/HAnimPoseExampleKoreanCharacter04Young.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("images/HAnimPoseExampleKoreanCharacter05Ju.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("images/HAnimPoseExampleKoreanCharacter06Ga.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("images/HAnimPoseExampleKoreanCharacter07No.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("images/HAnimPoseExampleKoreanCharacter08Da.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("images/HAnimPoseExampleKoreanCharacter09Ru.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("images/HAnimPoseExampleKoreanCharacter10Mi.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("images/HAnimPoseExampleKoreanCharacter11Min.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("images/HAnimPoseExampleKoreanCharacter12Sun.png")))
        .addMeta(new meta().setName(new SFString("specificationSection")).setContent(new SFString("HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose")))
        .addMeta(new meta().setName(new SFString("specificationUrl")).setContent(new SFString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose")))
        .addMeta(new meta().setName(new SFString("specificationSection")).setContent(new SFString("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures")))
        .addMeta(new meta().setName(new SFString("specificationUrl")).setContent(new SFString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures")))
        .addMeta(new meta().setName(new SFString("specificationSection")).setContent(new SFString("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses")))
        .addMeta(new meta().setName(new SFString("specificationUrl")).setContent(new SFString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("earlier version of this prototype: originals/HAnimPosePreliminary.x3d")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototype.x3d")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/license.html"))))
      .setScene(new Scene()
        .addChild(new WorldInfo().setDEF(new SFString("ModelInfo")).setInfo(new MFString0().getArray()).setTitle(new SFString("HAnimPosePrototype.x3d")))
        .addChild(new Background().setSkyColor(new MFColor1().getArray()))
        .addChild(new NavigationInfo())
        .addChild(new Group().setDEF(new SFString("HandleInlineLoading"))
          .addComments(new CommentsBlock("Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2"))
          .addComments(new CommentsBlock("Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun"))
          .addChild(new Inline().setDEF(new SFString("HumanoidInline")).setDescription(new SFString("remote HAnimHumanoid for IMPORT")).setUrl(new MFString2().getArray()))
          .addComments(new CommentsBlock("Note that the following importedDEF must match the EXPORT name found in remote file"))
          .addChild(new IMPORT().setAS(new SFString("HumanoidImported")).setImportedDEF(new SFString("BoxMan2")).setInlineDEF(new SFString("HumanoidInline")))
          .addChild(new LoadSensor().setDEF(new SFString("HumanoidInlineLoadSensor")).setTimeOut(2d)
            .addChild(new Inline().setUSE(new SFString("HumanoidInline")))))
        .addChild(new ProtoDeclare().setName(new SFString("HAnimPose")).setAppinfo(new SFString("Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values."))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFNode").setName(new SFString("parentHAnimHumanoid")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("HAnimHumanoid for this Pose to act upon"))
              .addComments(new CommentsBlock("HAnimHumanoid initialization node goes here, this field is only used in the prototype implementation")))
            .addField(new field().setType("SFString").setName(new SFString("name")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("name of this pose")).setValue(new SFString("newPoseName")))
            .addField(new field().setType("MFNode").setName(new SFString("children")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("joint values to apply to HAnimHumanoid"))
              .addComments(new CommentsBlock("initializating Joint nodes (if any) go here")))
            .addField(new field().setType("SFString").setName(new SFString("description")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("explanation of purpose")))
            .addField(new field().setType("SFBool").setName(new SFString("enabled")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("default value true")).setValue(new SFString("true")))
            .addField(new field().setType("SFInt32").setName(new SFString("loa")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("default is no loa")).setValue(new SFString("-1")))
            .addField(new field().setType("SFTime").setName(new SFString("transitionDuration")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("how many seconds to achieve the pose")).setValue(new SFString("0")))
            .addField(new field().setType("SFNode").setName(new SFString("metadata")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("single Metadata* node")))
            .addField(new field().setType("SFBool").setName(new SFString("isActive")).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo(new SFString("event indicating when pose transition is active")))
            .addField(new field().setType("SFBool").setName(new SFString("commencePose")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1")))
            .addField(new field().setType("SFBool").setName(new SFString("resetAllJoints")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("reset the skeleton to I pose with all joints zeroed")))
            .addField(new field().setType("SFFloat").setName(new SFString("set_fraction")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("allows transition to proceed incrementally from fraction [0..10")))
            .addField(new field().setType("SFTime").setName(new SFString("set_startTime")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("starts the animation clock")))
            .addField(new field().setType("SFBool").setName(new SFString("isLoaded")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE")))
            .addField(new field().setType("SFBool").setName(new SFString("traceEnabled")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("debug trace to Browser output console this is a local prototype field")).setValue(new SFString("true"))))
          .setProtoBody(new ProtoBody()
            .addChild(new TimeSensor().setDEF(new SFString("ClockTimeSensor")).setDescription(new SFString("control timing of pose animation when triggered"))
              .setIS(new IS()
                .addConnect(new connect().setNodeField(new SFString("enabled")).setProtoField(new SFString("enabled")))
                .addConnect(new connect().setNodeField(new SFString("cycleInterval")).setProtoField(new SFString("transitionDuration")))
                .addConnect(new connect().setNodeField(new SFString("isActive")).setProtoField(new SFString("isActive")))
                .addConnect(new connect().setNodeField(new SFString("startTime")).setProtoField(new SFString("set_startTime")))
                .addConnect(new connect().setNodeField(new SFString("metadata")).setProtoField(new SFString("metadata")))))
            .addChild(new TimeSensor().setDEF(new SFString("ResetTimeSensor")).setDescription(new SFString("control timing of skeleton reset to \"A\" pose when triggered"))
              .setIS(new IS()
                .addConnect(new connect().setNodeField(new SFString("enabled")).setProtoField(new SFString("enabled")))
                .addConnect(new connect().setNodeField(new SFString("cycleInterval")).setProtoField(new SFString("transitionDuration")))
                .addConnect(new connect().setNodeField(new SFString("startTime")).setProtoField(new SFString("set_startTime")))
                .addComments(new CommentsBlock("no need to report isActive since that would be duplicative"))))
            .addChild(new Group().setDEF(new SFString("PoseInterpolatorGroup"))
              .addComments(new CommentsBlock("interpolators generated by prototype script appear here at runtime")))
            .addChild(new Group().setDEF(new SFString("ResetInterpolatorGroup"))
              .addComments(new CommentsBlock("interpolators generated by prototype script appear here at runtime")))
            .addChild(new Script().setDEF(new SFString("HAnimPoseScript")).setDirectOutput(true).setUrl(new MFString3().getArray())
              .addField(new field().setType("SFNode").setName(new SFString("parentHAnimHumanoid")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("Humanoid for this Pose to act upon"))
                .addComments(new CommentsBlock("initialization node (if any) goes here")))
              .addField(new field().setType("SFString").setName(new SFString("name")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("name of this pose")))
              .addField(new field().setType("SFInt32").setName(new SFString("loa")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("default is no loa")))
              .addField(new field().setType("SFString").setName(new SFString("description")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("explanation of purpose")))
              .addField(new field().setType("SFBool").setName(new SFString("enabled")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("default value true")))
              .addField(new field().setType("SFBool").setName(new SFString("resetAllJoints")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("reset the skeleton to I pose with all joints zeroed")))
              .addField(new field().setType("MFNode").setName(new SFString("children")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("joint values to apply to HAnimHumanoid"))
                .addComments(new CommentsBlock("initializating Joint nodes (if any) go here")))
              .addField(new field().setType("SFTime").setName(new SFString("transitionDuration")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("how many seconds to achieve the pose")))
              .addField(new field().setType("SFBool").setName(new SFString("commencePose")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1")))
              .addField(new field().setType("SFFloat").setName(new SFString("set_fraction")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("allows transition to proceed incrementally from fraction [0..10")))
              .addField(new field().setType("SFTime").setName(new SFString("set_startTime")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("starts the animation clock")))
              .addField(new field().setType("SFBool").setName(new SFString("isLoaded")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE")))
              .addField(new field().setType("SFBool").setName(new SFString("traceEnabled")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("debug trace to Browser output console")))
              .addField(new field().setType("SFInt32").setName(new SFString("numberPoseJoints")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("number of joints found in children field")).setValue(new SFString("0")))
              .addField(new field().setType("SFInt32").setName(new SFString("numberSkeletonJoints")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("number of joints found in Humanoid")).setValue(new SFString("0")))
              .addField(new field().setType("MFNode").setName(new SFString("jointOrientationInterpolators")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("OrientationInterpolator node array matching number of children"))
                .addComments(new CommentsBlock("initializating Joint nodes (if any) go here")))
              .setIS(new IS()
                .addConnect(new connect().setNodeField(new SFString("parentHAnimHumanoid")).setProtoField(new SFString("parentHAnimHumanoid")))
                .addConnect(new connect().setNodeField(new SFString("name")).setProtoField(new SFString("name")))
                .addConnect(new connect().setNodeField(new SFString("loa")).setProtoField(new SFString("loa")))
                .addConnect(new connect().setNodeField(new SFString("description")).setProtoField(new SFString("description")))
                .addConnect(new connect().setNodeField(new SFString("enabled")).setProtoField(new SFString("enabled")))
                .addConnect(new connect().setNodeField(new SFString("resetAllJoints")).setProtoField(new SFString("resetAllJoints")))
                .addConnect(new connect().setNodeField(new SFString("children")).setProtoField(new SFString("children")))
                .addConnect(new connect().setNodeField(new SFString("transitionDuration")).setProtoField(new SFString("transitionDuration")))
                .addConnect(new connect().setNodeField(new SFString("commencePose")).setProtoField(new SFString("commencePose")))
                .addConnect(new connect().setNodeField(new SFString("set_fraction")).setProtoField(new SFString("set_fraction")))
                .addConnect(new connect().setNodeField(new SFString("set_startTime")).setProtoField(new SFString("set_startTime")))
                .addConnect(new connect().setNodeField(new SFString("isLoaded")).setProtoField(new SFString("isLoaded")))
                .addConnect(new connect().setNodeField(new SFString("traceEnabled")).setProtoField(new SFString("traceEnabled")))))))
        .addChild(new Viewpoint().setDescription(new SFString("HAnimPose for HumanoidInline IMPORT model")).setPosition(new float[] {0f ,1f ,4f }))
        .addComments(new CommentsBlock("no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc..."))
        .addChild(ProtoInstance0 = new ProtoInstance().setName(new SFString("HAnimPose")).setDEF(new SFString("T_Pose")))
        .addChild(ProtoInstance1 = new ProtoInstance().setName(new SFString("HAnimPose")).setDEF(new SFString("A_Pose")))
        .addChild(ProtoInstance2 = new ProtoInstance().setName(new SFString("HAnimPose")).setDEF(new SFString("TouchDown_Pose"))
          .addComments(new CommentsBlock("thanks Joe")))
        .addChild(ProtoInstance3 = new ProtoInstance().setName(new SFString("HAnimPose")).setDEF(new SFString("I_Pose")))
        .addChild(ProtoInstance4 = new ProtoInstance().setName(new SFString("HAnimPose")).setDEF(new SFString("H_Pose"))
          .addComments(new CommentsBlock("<fieldValue name='loa' value='1'/>")))
        .addChild(ProtoInstance5 = new ProtoInstance().setName(new SFString("HAnimPose")).setDEF(new SFString("FaceLeft_Pose")))
        .addChild(ProtoInstance6 = new ProtoInstance().setName(new SFString("HAnimPose")).setDEF(new SFString("FaceRight_Pose")))
        .addChild(new Group().setDEF(new SFString("InterfaceButtonsGroup"))
          .addChild(new Transform().setDEF(new SFString("DisplayHeader")).setTranslation(new float[] {0f ,2f ,0f })
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString48().getArray())
                .setFontStyle(new FontStyle().setDEF(new SFString("HeaderFont")).setFamily(new MFString49().getArray()).setJustify(new MFString50().getArray()).setSize(0.15f ).setStyle(new SFString("BOLD"))))
              .setAppearance(new Appearance().setDEF(new SFString("PoseTextAppearance"))
                .setMaterial(new Material().setDiffuseColor(new float[] {0.1f ,0.5f ,0.3f })))))
          .addChild(new Transform().setDEF(new SFString("T_PoseInterface")).setTranslation(new float[] {-1.5f ,1.5f ,0f })
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString51().getArray())
                .setFontStyle(new FontStyle().setDEF(new SFString("SharedFont")).setFamily(new MFString52().getArray()).setJustify(new MFString53().getArray()).setSize(0.1f ).setStyle(new SFString("BOLD"))))
              .setAppearance(new Appearance().setUSE(new SFString("PoseTextAppearance"))))
            .addChild(new Shape()
              .setAppearance(new Appearance().setDEF(new SFString("TransparentAppearance"))
                .setMaterial(new Material().setTransparency(0.8f )))
              .setGeometry(new Box().setSize(new float[] {0.45f ,0.2f ,0.001f })))
            .addChild(new TouchSensor().setDEF(new SFString("T_PoseTouchSensor")).setDescription(new SFString("select to move shoulders to \"T\" pose, leave other joints unchanged")))
            .addChild(new ROUTE().setFromField(new SFString("isActive")).setFromNode(new SFString("T_PoseTouchSensor")).setToField(new SFString("commencePose")).setToNode(new SFString("T_Pose"))))
          .addChild(new Transform().setDEF(new SFString("A_PoseInterface")).setTranslation(new float[] {-1.5f ,1f ,0f })
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString54().getArray())
                .setFontStyle(new FontStyle().setUSE(new SFString("SharedFont"))))
              .setAppearance(new Appearance().setUSE(new SFString("PoseTextAppearance"))))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Selectable Text transparent Box for easy user selection"))
              .setAppearance(new Appearance().setUSE(new SFString("TransparentAppearance")))
              .setGeometry(new Box().setSize(new float[] {0.45f ,0.2f ,0.001f })))
            .addChild(new TouchSensor().setDEF(new SFString("A_PoseTouchSensor")).setDescription(new SFString("select to move shoulders to \"A\" pose, leave other joints unchanged")))
            .addChild(new ROUTE().setFromField(new SFString("isActive")).setFromNode(new SFString("A_PoseTouchSensor")).setToField(new SFString("commencePose")).setToNode(new SFString("A_Pose"))))
          .addChild(new Transform().setDEF(new SFString("TouchDown_PoseInterface")).setTranslation(new float[] {-1.5f ,0.5f ,0f })
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString55().getArray())
                .setFontStyle(new FontStyle().setUSE(new SFString("SharedFont"))))
              .setAppearance(new Appearance().setUSE(new SFString("PoseTextAppearance"))))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Selectable Text transparent Box for easy user selection"))
              .setAppearance(new Appearance().setUSE(new SFString("TransparentAppearance")))
              .setGeometry(new Box().setSize(new float[] {0.85f ,0.2f ,0.001f })))
            .addChild(new TouchSensor().setDEF(new SFString("TouchDown_PoseTouchSensor")).setDescription(new SFString("select to transition all joints to TouchDown pose")))
            .addChild(new ROUTE().setFromField(new SFString("isActive")).setFromNode(new SFString("TouchDown_PoseTouchSensor")).setToField(new SFString("commencePose")).setToNode(new SFString("TouchDown_Pose"))))
          .addChild(new Transform().setDEF(new SFString("I_PoseInterface")).setTranslation(new float[] {-1.5f ,0f ,0f })
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString56().getArray())
                .setFontStyle(new FontStyle().setUSE(new SFString("SharedFont"))))
              .setAppearance(new Appearance().setUSE(new SFString("PoseTextAppearance"))))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Selectable Text transparent Box for easy user selection"))
              .setAppearance(new Appearance().setUSE(new SFString("TransparentAppearance")))
              .setGeometry(new Box().setSize(new float[] {0.45f ,0.2f ,0.001f })))
            .addChild(new TouchSensor().setDEF(new SFString("I_PoseTouchSensor")).setDescription(new SFString("select to transition all joints to \"I\" pose")))
            .addChild(new ROUTE().setFromField(new SFString("isActive")).setFromNode(new SFString("I_PoseTouchSensor")).setToField(new SFString("commencePose")).setToNode(new SFString("I_Pose"))))
          .addChild(new Transform().setDEF(new SFString("FaceLeftPoseInterface")).setTranslation(new float[] {1.5f ,1.5f ,0f })
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString57().getArray())
                .setFontStyle(new FontStyle().setUSE(new SFString("SharedFont"))))
              .setAppearance(new Appearance().setUSE(new SFString("PoseTextAppearance"))))
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE(new SFString("TransparentAppearance")))
              .setGeometry(new Box().setSize(new float[] {0.9f ,0.2f ,0.001f })))
            .addChild(new TouchSensor().setDEF(new SFString("FaceLeftTouchSensor")).setDescription(new SFString("select to rotate body and Face Left, leave other joints unchanged")))
            .addChild(new ROUTE().setFromField(new SFString("isActive")).setFromNode(new SFString("FaceLeftTouchSensor")).setToField(new SFString("commencePose")).setToNode(new SFString("FaceLeft_Pose"))))
          .addChild(new Transform().setDEF(new SFString("FaceRightPoseInterface")).setTranslation(new float[] {1.5f ,1f ,0f })
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString58().getArray())
                .setFontStyle(new FontStyle().setUSE(new SFString("SharedFont"))))
              .setAppearance(new Appearance().setUSE(new SFString("PoseTextAppearance"))))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Selectable Text transparent Box for easy user selection"))
              .setAppearance(new Appearance().setUSE(new SFString("TransparentAppearance")))
              .setGeometry(new Box().setSize(new float[] {0.9f ,0.2f ,0.001f })))
            .addChild(new TouchSensor().setDEF(new SFString("FaceRightTouchSensor")).setDescription(new SFString("select to rotate body and Face Right, leave other joints unchanged")))
            .addChild(new ROUTE().setFromField(new SFString("isActive")).setFromNode(new SFString("FaceRightTouchSensor")).setToField(new SFString("commencePose")).setToNode(new SFString("FaceRight_Pose"))))
          .addChild(new Transform().setDEF(new SFString("AnimatePosesInterface")).setTranslation(new float[] {1.5f ,0.5f ,0f })
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString59().getArray())
                .setFontStyle(new FontStyle().setUSE(new SFString("SharedFont"))))
              .setAppearance(new Appearance().setDEF(new SFString("AnimationTextAppearance"))
                .setMaterial(new Material().setDiffuseColor(new float[] {0.1f ,0.2f ,0.3f }))))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Selectable Text transparent Box for easy user selection"))
              .setAppearance(new Appearance().setUSE(new SFString("TransparentAppearance")))
              .setGeometry(new Box().setSize(new float[] {0.9f ,0.25f ,0.001f })))
            .addChild(new TouchSensor().setDEF(new SFString("AnimatePosesTouchSensor")).setDescription(new SFString("select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events")))
            .addComments(new CommentsBlock("cycleInterval=4 also hard-coded in script execution message"))
            .addChild(new TimeSensor().setDEF(new SFString("AnimatePosesClock")).setCycleInterval(4d).setDescription(new SFString("directly animate several poses")))
            .addChild(new ScalarInterpolator().setDEF(new SFString("AnimatePosesLoopInterpolator")).setKey(new MFFloat60().getArray()).setKeyValue(new MFFloat61().getArray()))
            .addChild(new ROUTE().setFromField(new SFString("touchTime")).setFromNode(new SFString("AnimatePosesTouchSensor")).setToField(new SFString("startTime")).setToNode(new SFString("AnimatePosesClock")))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("AnimatePosesClock")).setToField(new SFString("set_fraction")).setToNode(new SFString("AnimatePosesLoopInterpolator")))
            .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("AnimatePosesLoopInterpolator")).setToField(new SFString("set_fraction")).setToNode(new SFString("I_Pose"))))
          .addChild(new Transform().setDEF(new SFString("ResetDefaultPoseInterface")).setTranslation(new float[] {1.5f ,0f ,0f })
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString62().getArray())
                .setFontStyle(new FontStyle().setUSE(new SFString("SharedFont"))))
              .setAppearance(new Appearance().setUSE(new SFString("AnimationTextAppearance"))))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Selectable Text transparent Box for easy user selection"))
              .setAppearance(new Appearance().setUSE(new SFString("TransparentAppearance")))
              .setGeometry(new Box().setSize(new float[] {0.9f ,0.25f ,0.001f })))
            .addChild(new TouchSensor().setDEF(new SFString("ResetPoseTouchSensor")).setDescription(new SFString("select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event")))
            .addChild(new ROUTE().setFromField(new SFString("isActive")).setFromNode(new SFString("ResetPoseTouchSensor")).setToField(new SFString("resetAllJoints")).setToNode(new SFString("FaceLeft_Pose")))))
        .addChild(new Group().setDEF(new SFString("HandleInlineLoadsensorRouting"))
          .addChild(new ROUTE().setFromField(new SFString("isLoaded")).setFromNode(new SFString("HumanoidInlineLoadSensor")).setToField(new SFString("isLoaded")).setToNode(new SFString("A_Pose")))
          .addChild(new ROUTE().setFromField(new SFString("isLoaded")).setFromNode(new SFString("HumanoidInlineLoadSensor")).setToField(new SFString("isLoaded")).setToNode(new SFString("H_Pose")))
          .addChild(new ROUTE().setFromField(new SFString("isLoaded")).setFromNode(new SFString("HumanoidInlineLoadSensor")).setToField(new SFString("isLoaded")).setToNode(new SFString("I_Pose")))
          .addChild(new ROUTE().setFromField(new SFString("isLoaded")).setFromNode(new SFString("HumanoidInlineLoadSensor")).setToField(new SFString("isLoaded")).setToNode(new SFString("T_Pose")))
          .addChild(new ROUTE().setFromField(new SFString("isLoaded")).setFromNode(new SFString("HumanoidInlineLoadSensor")).setToField(new SFString("isLoaded")).setToNode(new SFString("FaceLeft_Pose")))
          .addChild(new ROUTE().setFromField(new SFString("isLoaded")).setFromNode(new SFString("HumanoidInlineLoadSensor")).setToField(new SFString("isLoaded")).setToNode(new SFString("FaceRight_Pose")))
          .addChild(new ROUTE().setFromField(new SFString("isLoaded")).setFromNode(new SFString("HumanoidInlineLoadSensor")).setToField(new SFString("isLoaded")).setToNode(new SFString("TouchDown_Pose")))));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("name")).setValue(new SFString("T")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("enabled")).setValue(new SFString("true")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("parentHAnimHumanoid"))
            .addComments(new CommentsBlock("HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"))
            .addComments(new CommentsBlock("debug test case for incorrect node type: <HAnimJoint DEF=\"ErrorDiagnosticsTest\" USE='HumanoidImported'/>"))
            .addChild(new HAnimHumanoid().setUSE(new SFString("HumanoidImported"))));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("loa")).setValue(new SFString("1")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("description")).setValue(new SFString("arms stretched outward and level similar to letter T")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("children"))
            .addChild(new HAnimJoint().setName(new SFString("l_shoulder")).setDEF(new SFString("PoseJoint_l_shoulder_1")).setDescription(new SFString("left shoulder")).setRotation(new float[] {0f ,0f ,1f ,1.57f }).setUlimit(new MFFloat4().getArray()).setLlimit(new MFFloat5().getArray()))
            .addChild(new HAnimJoint().setName(new SFString("r_shoulder")).setDEF(new SFString("PoseJoint_r_shoulder_1")).setDescription(new SFString("right shoulder")).setRotation(new float[] {0f ,0f ,-1f ,1.57f }).setUlimit(new MFFloat6().getArray()).setLlimit(new MFFloat7().getArray()))
            .addComments(new CommentsBlock("test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("transitionDuration")).setValue(new SFString("1.3")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName(new SFString("name")).setValue(new SFString("A")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName(new SFString("enabled")).setValue(new SFString("true")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName(new SFString("parentHAnimHumanoid"))
            .addComments(new CommentsBlock("HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"))
            .addChild(new HAnimHumanoid().setUSE(new SFString("HumanoidImported"))));
ProtoInstance1
          .addFieldValue(new fieldValue().setName(new SFString("loa")).setValue(new SFString("1")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName(new SFString("description")).setValue(new SFString("arms stretched outward and downward similar to letter A")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName(new SFString("children"))
            .addChild(new HAnimJoint().setName(new SFString("l_shoulder")).setDEF(new SFString("PoseJoint_l_shoulder")).setDescription(new SFString("left shoulder")).setRotation(new float[] {0f ,0f ,1f ,0.5f }).setUlimit(new MFFloat8().getArray()).setLlimit(new MFFloat9().getArray()))
            .addChild(new HAnimJoint().setName(new SFString("r_shoulder")).setDEF(new SFString("PoseJoint_r_shoulder")).setDescription(new SFString("right shoulder")).setRotation(new float[] {0f ,0f ,-1f ,0.5f }).setUlimit(new MFFloat10().getArray()).setLlimit(new MFFloat11().getArray())));
ProtoInstance1
          .addFieldValue(new fieldValue().setName(new SFString("transitionDuration")).setValue(new SFString("1.2")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName(new SFString("traceEnabled")).setValue(new SFString("true")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName(new SFString("name")).setValue(new SFString("TouchDown")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName(new SFString("enabled")).setValue(new SFString("true")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName(new SFString("parentHAnimHumanoid"))
            .addComments(new CommentsBlock("HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"))
            .addChild(new HAnimHumanoid().setUSE(new SFString("HumanoidImported"))));
ProtoInstance2
          .addFieldValue(new fieldValue().setName(new SFString("loa")).setValue(new SFString("1")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName(new SFString("description")).setValue(new SFString("arms and legs stretched outward providing a TouchDown gesture")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName(new SFString("children"))
            .addChild(new HAnimJoint().setName(new SFString("humanoid_root")).setRotation(new float[] {0f ,1f ,0f ,-0.698132f }).setUlimit(new MFFloat12().getArray()).setLlimit(new MFFloat13().getArray()))
            .addChild(new HAnimJoint().setName(new SFString("l_hip")).setRotation(new float[] {-1f ,1f ,1f ,1f }).setUlimit(new MFFloat14().getArray()).setLlimit(new MFFloat15().getArray()))
            .addChild(new HAnimJoint().setName(new SFString("l_knee")).setRotation(new float[] {1f ,0f ,0f ,1f }).setUlimit(new MFFloat16().getArray()).setLlimit(new MFFloat17().getArray()))
            .addChild(new HAnimJoint().setName(new SFString("l_talocrural")).setRotation(new float[] {-0.2f ,0f ,0.1f ,0.225f }).setUlimit(new MFFloat18().getArray()).setLlimit(new MFFloat19().getArray()))
            .addChild(new HAnimJoint().setName(new SFString("r_hip")).setRotation(new float[] {-1f ,-1f ,-1f ,1f }).setUlimit(new MFFloat20().getArray()).setLlimit(new MFFloat21().getArray()))
            .addChild(new HAnimJoint().setName(new SFString("r_knee")).setRotation(new float[] {1f ,0f ,0f ,1f }).setUlimit(new MFFloat22().getArray()).setLlimit(new MFFloat23().getArray()))
            .addChild(new HAnimJoint().setName(new SFString("r_talocrural")).setRotation(new float[] {-0.2f ,0f ,0.1f ,0.25f }).setUlimit(new MFFloat24().getArray()).setLlimit(new MFFloat25().getArray()))
            .addChild(new HAnimJoint().setName(new SFString("vl5")).setRotation(new float[] {0f ,0f ,0.01f ,0.2f }).setUlimit(new MFFloat26().getArray()).setLlimit(new MFFloat27().getArray()))
            .addChild(new HAnimJoint().setName(new SFString("vt10")).setRotation(new float[] {0f ,0f ,0.01f ,0.1f }).setUlimit(new MFFloat28().getArray()).setLlimit(new MFFloat29().getArray()))
            .addChild(new HAnimJoint().setName(new SFString("vc4")).setRotation(new float[] {0f ,0f ,-0.01f ,0.15f }).setUlimit(new MFFloat30().getArray()).setLlimit(new MFFloat31().getArray()))
            .addChild(new HAnimJoint().setName(new SFString("l_shoulder")).setRotation(new float[] {-1f ,0.5f ,1f ,2f }).setUlimit(new MFFloat32().getArray()).setLlimit(new MFFloat33().getArray()))
            .addChild(new HAnimJoint().setName(new SFString("l_elbow")).setRotation(new float[] {-1f ,0f ,0f ,1f }).setUlimit(new MFFloat34().getArray()).setLlimit(new MFFloat35().getArray()))
            .addChild(new HAnimJoint().setName(new SFString("l_radiocarpal")).setUlimit(new MFFloat36().getArray()).setLlimit(new MFFloat37().getArray()))
            .addChild(new HAnimJoint().setName(new SFString("r_shoulder")).setRotation(new float[] {-1f ,-0.5f ,-1f ,2.6f }).setUlimit(new MFFloat38().getArray()).setLlimit(new MFFloat39().getArray()))
            .addChild(new HAnimJoint().setName(new SFString("r_elbow")).setRotation(new float[] {-1f ,0f ,0f ,1f }).setUlimit(new MFFloat40().getArray()).setLlimit(new MFFloat41().getArray()))
            .addChild(new HAnimJoint().setName(new SFString("r_radiocarpal")).setUlimit(new MFFloat42().getArray()).setLlimit(new MFFloat43().getArray())));
ProtoInstance2
          .addFieldValue(new fieldValue().setName(new SFString("transitionDuration")).setValue(new SFString("1.2")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName(new SFString("traceEnabled")).setValue(new SFString("true")));
ProtoInstance3
          .addFieldValue(new fieldValue().setName(new SFString("name")).setValue(new SFString("I")));
ProtoInstance3
          .addFieldValue(new fieldValue().setName(new SFString("enabled")).setValue(new SFString("true")));
ProtoInstance3
          .addFieldValue(new fieldValue().setName(new SFString("parentHAnimHumanoid"))
            .addComments(new CommentsBlock("HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"))
            .addChild(new HAnimHumanoid().setUSE(new SFString("HumanoidImported"))));
ProtoInstance3
          .addFieldValue(new fieldValue().setName(new SFString("loa")).setValue(new SFString("1")));
ProtoInstance3
          .addFieldValue(new fieldValue().setName(new SFString("description")).setValue(new SFString("arms and legs straight down default binding pose for baseline Humanoid")));
ProtoInstance3
          .addFieldValue(new fieldValue().setName(new SFString("children"))
            .addComments(new CommentsBlock("not defining any children equals the default \"I\" pose")));
ProtoInstance3
          .addFieldValue(new fieldValue().setName(new SFString("transitionDuration")).setValue(new SFString("1.5")));
ProtoInstance3
          .addFieldValue(new fieldValue().setName(new SFString("traceEnabled")).setValue(new SFString("true")));
ProtoInstance4
          .addFieldValue(new fieldValue().setName(new SFString("name")).setValue(new SFString("H")));
ProtoInstance4
          .addFieldValue(new fieldValue().setName(new SFString("enabled")).setValue(new SFString("false")));
ProtoInstance4
          .addFieldValue(new fieldValue().setName(new SFString("description")).setValue(new SFString("TODO experimental pose not yet implemented")));
ProtoInstance4
          .addFieldValue(new fieldValue().setName(new SFString("transitionDuration")).setValue(new SFString("1.4")));
ProtoInstance4
          .addFieldValue(new fieldValue().setName(new SFString("traceEnabled")).setValue(new SFString("true")));
ProtoInstance5
          .addFieldValue(new fieldValue().setName(new SFString("name")).setValue(new SFString("FaceLeft")));
ProtoInstance5
          .addFieldValue(new fieldValue().setName(new SFString("enabled")).setValue(new SFString("true")));
ProtoInstance5
          .addFieldValue(new fieldValue().setName(new SFString("parentHAnimHumanoid"))
            .addComments(new CommentsBlock("HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"))
            .addChild(new HAnimHumanoid().setUSE(new SFString("HumanoidImported"))));
ProtoInstance5
          .addFieldValue(new fieldValue().setName(new SFString("loa")).setValue(new SFString("0")));
ProtoInstance5
          .addFieldValue(new fieldValue().setName(new SFString("description")).setValue(new SFString("Only modify humanoid_root Joint node to face left")));
ProtoInstance5
          .addFieldValue(new fieldValue().setName(new SFString("children"))
            .addChild(new HAnimJoint().setName(new SFString("humanoid_root")).setDEF(new SFString("FaceLeft_humanoid_root")).setDescription(new SFString("Only rotate the model")).setRotation(new float[] {0f ,1f ,0f ,1.570796f }).setUlimit(new MFFloat44().getArray()).setLlimit(new MFFloat45().getArray())));
ProtoInstance5
          .addFieldValue(new fieldValue().setName(new SFString("transitionDuration")).setValue(new SFString("1.1")));
ProtoInstance5
          .addFieldValue(new fieldValue().setName(new SFString("traceEnabled")).setValue(new SFString("true")));
ProtoInstance6
          .addFieldValue(new fieldValue().setName(new SFString("name")).setValue(new SFString("FaceRight")));
ProtoInstance6
          .addFieldValue(new fieldValue().setName(new SFString("enabled")).setValue(new SFString("true")));
ProtoInstance6
          .addFieldValue(new fieldValue().setName(new SFString("parentHAnimHumanoid"))
            .addComments(new CommentsBlock("HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"))
            .addChild(new HAnimHumanoid().setUSE(new SFString("HumanoidImported"))));
ProtoInstance6
          .addFieldValue(new fieldValue().setName(new SFString("loa")).setValue(new SFString("0")));
ProtoInstance6
          .addFieldValue(new fieldValue().setName(new SFString("description")).setValue(new SFString("Only modify humanoid_root Joint node to face right")));
ProtoInstance6
          .addFieldValue(new fieldValue().setName(new SFString("children"))
            .addChild(new HAnimJoint().setName(new SFString("humanoid_root")).setDEF(new SFString("FaceRight_humanoid_root")).setDescription(new SFString("Only rotate the model")).setRotation(new float[] {0f ,1f ,0f ,-1.570796f }).setUlimit(new MFFloat46().getArray()).setLlimit(new MFFloat47().getArray())));
ProtoInstance6
          .addFieldValue(new fieldValue().setName(new SFString("transitionDuration")).setValue(new SFString("1.1")));
ProtoInstance6
          .addFieldValue(new fieldValue().setName(new SFString("traceEnabled")).setValue(new SFString("true")));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Design to illustrate a potential HAnimPose node"});
  }
}
private class MFColor1 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.8f ,0.8f ,1f });
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../Skin/BoxMan2.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/BoxMan2.x3d"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"HAnimPosePrototypeScript.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeScript.js"});
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
}
