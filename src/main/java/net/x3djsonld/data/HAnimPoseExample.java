package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Native XML definition of an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed. </p>
 <p> Related links:  source HAnimPoseExample.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.HAnimPoseExample&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExample.x3d">HAnimPoseExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Native XML definition of an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 11 December 2025 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 14 December 2025 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development for X3D 4.1 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationSection </i> </td>
			<td> HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationUrl </i> </td>
			<td> <a href="https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose" target="_blank">https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationSection </i> </td>
			<td> HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationUrl </i> </td>
			<td> <a href="https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures" target="_blank">https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationSection </i> </td>
			<td> HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationUrl </i> </td>
			<td> <a href="https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses" target="_blank">https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 4.0, <a href="https://www.web3d.org/x3d/tools/X3D-Edit" target="_blank">https://www.web3d.org/x3d/tools/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExample.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/license.html" target="_blank">https://www.web3d.org/x3d/content/examples/license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version control</a>)
                which is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author Don Brutzman
 */

public class HAnimPoseExample
{
	/** Default constructor to create this object. */
	public HAnimPoseExample ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_FULL).setVersion(X3D.VERSION_4_1)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("HAnimPoseExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Native XML definition of an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed."))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("11 December 2025"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("14 December 2025"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("under development for X3D 4.1"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONSECTION).setContent("HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONURL).setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONSECTION).setContent("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONURL).setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONSECTION).setContent("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONURL).setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("https://www.web3d.org/x3d/content/examples/license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo("ModelInfo").setInfo(new String[] {"Example scene for HAnimPose node"}).setTitle("HAnimPoseExample.x3d"))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.8,0.8,1.0})))
    .addChild(new NavigationInfo())
    .addChild(new Group("HandleInlineLoading")
      .addComments(" Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2 ")
      .addComments(" Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun ")
      .addChild(new Inline("HumanoidInline").setDescription("remote HAnimHumanoid for IMPORT").setUrl(new String[] {"../Skin/JoeSkeletonSkinSite.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d"}))
      .addComments(" Note that the following importedDEF must match the EXPORT name found in remote file ")
      .addChild(new IMPORT().setImportedDEF("JoeSkeletonSkinSite").setInlineDEF("HumanoidInline").setAS("HumanoidImported"))
      .addChild(new LoadSensor("HumanoidInlineLoadSensor").setTimeOut(2)
        .addChild(new Inline().setUSE("HumanoidInline"))))
    .addChild(new Viewpoint().setDescription("HAnimPose for HumanoidInline IMPORT model").setPosition(0.0,1.0,4.0))
    .addComments(" no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc... ")
    .addChild(new HAnimPose("T_Pose").setName("T").setDescription("arms stretched outward and level similar to letter T").setLoa(1).setTransitionDuration(1.3)
      .setMetadata(new MetadataString().setName("metadataTest").setValue(new String[] {"hello HAnimPose metadata"}))
      .addComments(" test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/ ")
      .addChild(new HAnimJoint("PoseJoint_l_shoulder_1").setName("l_shoulder").setDescription("left shoulder").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(0.0,0.0,1.0,1.57).setUlimit(new double[] {0.0,0.0,0.0}))
      .addChild(new HAnimJoint("PoseJoint_r_shoulder_1").setName("r_shoulder").setDescription("right shoulder").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(0.0,0.0,-1.0,1.57).setUlimit(new double[] {0.0,0.0,0.0})))
    .addChild(new HAnimPose("A_Pose").setName("A").setDescription("arms stretched outward and downward similar to letter A").setLoa(1).setTransitionDuration(1.2)
      .addChild(new HAnimJoint("PoseJoint_l_shoulder").setName("l_shoulder").setDescription("left shoulder").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(0.0,0.0,1.0,0.5).setUlimit(new double[] {0.0,0.0,0.0}))
      .addChild(new HAnimJoint("PoseJoint_r_shoulder").setName("r_shoulder").setDescription("right shoulder").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(0.0,0.0,-1.0,0.5).setUlimit(new double[] {0.0,0.0,0.0})))
    .addChild(new HAnimPose("TouchDown_Pose").setName("TouchDown").setDescription("arms and legs stretched outward providing a TouchDown gesture").setLoa(1).setTransitionDuration(1.2)
      .addChild(new HAnimJoint().setName("humanoid_root").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(0.0,1.0,0.0,-0.698132).setUlimit(new double[] {0.0,0.0,0.0}))
      .addChild(new HAnimJoint().setName("l_hip").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(-1.0,1.0,1.0,1.0).setUlimit(new double[] {0.0,0.0,0.0}))
      .addChild(new HAnimJoint().setName("l_knee").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(1.0,0.0,0.0,1.0).setUlimit(new double[] {0.0,0.0,0.0}))
      .addChild(new HAnimJoint().setName("l_talocrural").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(-0.2,-0.0,0.1,0.225).setUlimit(new double[] {0.0,0.0,0.0}))
      .addChild(new HAnimJoint().setName("r_hip").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(-1.0,-1.0,-1.0,1.0).setUlimit(new double[] {0.0,0.0,0.0}))
      .addChild(new HAnimJoint().setName("r_knee").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(1.0,0.0,0.0,1.0).setUlimit(new double[] {0.0,0.0,0.0}))
      .addChild(new HAnimJoint().setName("r_talocrural").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(-0.2,0.0,0.1,0.25).setUlimit(new double[] {0.0,0.0,0.0}))
      .addChild(new HAnimJoint().setName("vl5").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(0.0,0.0,0.01,0.2).setUlimit(new double[] {0.0,0.0,0.0}))
      .addChild(new HAnimJoint().setName("vt10").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(0.0,0.0,0.01,0.1).setUlimit(new double[] {0.0,0.0,0.0}))
      .addChild(new HAnimJoint().setName("vc4").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(0.0,0.0,-0.01,0.15).setUlimit(new double[] {0.0,0.0,0.0}))
      .addChild(new HAnimJoint().setName("l_shoulder").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(-1.0,0.5,1.0,2.0).setUlimit(new double[] {0.0,0.0,0.0}))
      .addChild(new HAnimJoint().setName("l_elbow").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(-1.0,0.0,0.0,1.0).setUlimit(new double[] {0.0,0.0,0.0}))
      .addChild(new HAnimJoint().setName("l_radiocarpal").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
      .addChild(new HAnimJoint().setName("r_shoulder").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(-1.0,-0.5,-1.0,2.6).setUlimit(new double[] {0.0,0.0,0.0}))
      .addChild(new HAnimJoint().setName("r_elbow").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(-1.0,0.0,0.0,1.0).setUlimit(new double[] {0.0,0.0,0.0}))
      .addChild(new HAnimJoint().setName("r_radiocarpal").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))
    .addChild(new HAnimPose("I_Pose").setName("I").setDescription("arms and legs straight down default binding pose for baseline Humanoid").setLoa(1).setTransitionDuration(1.5)
      .addComments(" not defining any poseJoint HAnimJoint nodes equals the default \"I\" pose "))
    .addChild(new HAnimPose("H_Pose").setName("H").setDescription("TODO experimental pose not yet implemented").setEnabled(false).setLoa(-1).setTransitionDuration(1.4)
      .addComments(" TODO define poseJoint HAnimJoint nodes "))
    .addChild(new HAnimPose("FaceLeft_Pose").setName("FaceLeft").setDescription("Only modify humanoid_root Joint node to face left").setLoa(0).setTransitionDuration(1.1)
      .addChild(new HAnimJoint("FaceLeft_humanoid_root").setName("humanoid_root").setDescription("Only rotate the model").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(0.0,1.0,0.0,1.570796).setUlimit(new double[] {0.0,0.0,0.0})))
    .addChild(new HAnimPose("FaceRight_Pose").setName("FaceRight").setDescription("Only modify humanoid_root Joint node to face right").setLoa(0).setTransitionDuration(1.1)
      .addChild(new HAnimJoint("FaceRight_humanoid_root").setName("humanoid_root").setDescription("Only rotate the model").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(0.0,1.0,0.0,-1.570796).setUlimit(new double[] {0.0,0.0,0.0})))
    .addChild(new Group("InterfaceButtonsGroup")
      .addChild(new Transform("DisplayHeader").setTranslation(0.0,2.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"HAnimPosePrototype example implementation"})
            .setFontStyle(new FontStyle("HeaderFont").setFamily(new String[] {"SANS"}).setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.15).setCssStyle("BOLD")))
          .setAppearance(new Appearance("PoseTextAppearance")
            .setMaterial(new Material().setDiffuseColor(0.1,0.5,0.3)))))
      .addChild(new Transform("T_PoseInterface").setTranslation(-1.5,1.5,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"\"T\" Pose"})
            .setFontStyle(new FontStyle("SharedFont").setFamily(new String[] {"SANS"}).setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.1).setCssStyle("BOLD")))
          .setAppearance(new Appearance().setUSE("PoseTextAppearance")))
        .addChild(new Shape()
          .setAppearance(new Appearance("TransparentAppearance")
            .setMaterial(new Material().setTransparency(0.8)))
          .setGeometry(new Box().setSize(0.45,0.2,0.001)))
        .addChild(new TouchSensor("T_PoseTouchSensor").setDescription("select to move shoulders to \"T\" pose, leave other joints unchanged"))
        .addChild(new ROUTE().setFromNode("T_PoseTouchSensor").setFromField("isActive").setToNode("T_Pose").setToField("commencePose")))
      .addChild(new Transform("A_PoseInterface").setTranslation(-1.5,1.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"\"A\" Pose"})
            .setFontStyle(new FontStyle().setUSE("SharedFont")))
          .setAppearance(new Appearance().setUSE("PoseTextAppearance")))
        .addChild(new Shape()
          .addComments(" Selectable Text transparent Box for easy user selection ")
          .setAppearance(new Appearance().setUSE("TransparentAppearance"))
          .setGeometry(new Box().setSize(0.45,0.2,0.001)))
        .addChild(new TouchSensor("A_PoseTouchSensor").setDescription("select to move shoulders to \"A\" pose, leave other joints unchanged"))
        .addChild(new ROUTE().setFromNode("A_PoseTouchSensor").setFromField("isActive").setToNode("A_Pose").setToField("commencePose")))
      .addChild(new Transform("TouchDown_PoseInterface").setTranslation(-1.5,0.5,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"TouchDown Pose"})
            .setFontStyle(new FontStyle().setUSE("SharedFont")))
          .setAppearance(new Appearance().setUSE("PoseTextAppearance")))
        .addChild(new Shape()
          .addComments(" Selectable Text transparent Box for easy user selection ")
          .setAppearance(new Appearance().setUSE("TransparentAppearance"))
          .setGeometry(new Box().setSize(0.85,0.2,0.001)))
        .addChild(new TouchSensor("TouchDown_PoseTouchSensor").setDescription("select to transition all joints to TouchDown pose"))
        .addChild(new ROUTE().setFromNode("TouchDown_PoseTouchSensor").setFromField("isActive").setToNode("TouchDown_Pose").setToField("commencePose")))
      .addChild(new Transform("I_PoseInterface").setTranslation(-1.5,0.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"\"I\" Pose"})
            .setFontStyle(new FontStyle().setUSE("SharedFont")))
          .setAppearance(new Appearance().setUSE("PoseTextAppearance")))
        .addChild(new Shape()
          .addComments(" Selectable Text transparent Box for easy user selection ")
          .setAppearance(new Appearance().setUSE("TransparentAppearance"))
          .setGeometry(new Box().setSize(0.45,0.2,0.001)))
        .addChild(new TouchSensor("I_PoseTouchSensor").setDescription("select to transition all joints to \"I\" pose"))
        .addChild(new ROUTE().setFromNode("I_PoseTouchSensor").setFromField("isActive").setToNode("I_Pose").setToField("commencePose")))
      .addChild(new Transform("FaceLeftPoseInterface").setTranslation(1.5,1.5,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"Face Left Pose"})
            .setFontStyle(new FontStyle().setUSE("SharedFont")))
          .setAppearance(new Appearance().setUSE("PoseTextAppearance")))
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("TransparentAppearance"))
          .setGeometry(new Box().setSize(0.9,0.2,0.001)))
        .addChild(new TouchSensor("FaceLeftTouchSensor").setDescription("select to rotate body and Face Left, leave other joints unchanged"))
        .addChild(new ROUTE().setFromNode("FaceLeftTouchSensor").setFromField("isActive").setToNode("FaceLeft_Pose").setToField("commencePose")))
      .addChild(new Transform("FaceRightPoseInterface").setTranslation(1.5,1.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"Face Right Pose"})
            .setFontStyle(new FontStyle().setUSE("SharedFont")))
          .setAppearance(new Appearance().setUSE("PoseTextAppearance")))
        .addChild(new Shape()
          .addComments(" Selectable Text transparent Box for easy user selection ")
          .setAppearance(new Appearance().setUSE("TransparentAppearance"))
          .setGeometry(new Box().setSize(0.9,0.2,0.001)))
        .addChild(new TouchSensor("FaceRightTouchSensor").setDescription("select to rotate body and Face Right, leave other joints unchanged"))
        .addChild(new ROUTE().setFromNode("FaceRightTouchSensor").setFromField("isActive").setToNode("FaceRight_Pose").setToField("commencePose")))
      .addChild(new Transform("AnimatePosesInterface").setTranslation(1.5,0.5,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"Direct animation","to, from \"I\" Pose"})
            .setFontStyle(new FontStyle().setUSE("SharedFont")))
          .setAppearance(new Appearance("AnimationTextAppearance")
            .setMaterial(new Material().setDiffuseColor(0.1,0.2,0.3))))
        .addChild(new Shape()
          .addComments(" Selectable Text transparent Box for easy user selection ")
          .setAppearance(new Appearance().setUSE("TransparentAppearance"))
          .setGeometry(new Box().setSize(0.9,0.25,0.001)))
        .addChild(new TouchSensor("AnimatePosesTouchSensor").setDescription("select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events"))
        .addComments(" cycleInterval=4 also hard-coded in script execution message ")
        .addChild(new TimeSensor("AnimatePosesClock").setDescription("directly animate several poses").setCycleInterval(4))
        .addChild(new ScalarInterpolator("AnimatePosesLoopInterpolator").setKey(new double[] {0.0,0.05,0.45,0.55,0.95,1.0}).setKeyValue(new double[] {0.0,0.0,1.0,1.0,0.0,0.0}))
        .addChild(new ROUTE().setFromNode("AnimatePosesTouchSensor").setFromField("touchTime").setToNode("AnimatePosesClock").setToField("startTime"))
        .addChild(new ROUTE().setFromNode("AnimatePosesClock").setFromField("fraction_changed").setToNode("AnimatePosesLoopInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("AnimatePosesLoopInterpolator").setFromField("value_changed").setToNode("I_Pose").setToField("set_fraction")))
      .addChild(new Transform("ResetDefaultPoseInterface").setTranslation(1.5,0.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"Reset All Joints","to Default \"I\" Pose"})
            .setFontStyle(new FontStyle().setUSE("SharedFont")))
          .setAppearance(new Appearance().setUSE("AnimationTextAppearance")))
        .addChild(new Shape()
          .addComments(" Selectable Text transparent Box for easy user selection ")
          .setAppearance(new Appearance().setUSE("TransparentAppearance"))
          .setGeometry(new Box().setSize(0.9,0.25,0.001)))
        .addChild(new TouchSensor("ResetPoseTouchSensor").setDescription("select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event"))
        .addChild(new ROUTE().setFromNode("ResetPoseTouchSensor").setFromField("isActive").setToNode("FaceLeft_Pose").setToField("resetAllJoints"))))
    .addChild(new Group("HandleInlineLoadsensorRouting")
      .addChild(new ROUTE().setFromNode("HumanoidInlineLoadSensor").setFromField("isLoaded").setToNode("A_Pose").setToField("isLoaded"))
      .addChild(new ROUTE().setFromNode("HumanoidInlineLoadSensor").setFromField("isLoaded").setToNode("H_Pose").setToField("isLoaded"))
      .addChild(new ROUTE().setFromNode("HumanoidInlineLoadSensor").setFromField("isLoaded").setToNode("I_Pose").setToField("isLoaded"))
      .addChild(new ROUTE().setFromNode("HumanoidInlineLoadSensor").setFromField("isLoaded").setToNode("T_Pose").setToField("isLoaded"))
      .addChild(new ROUTE().setFromNode("HumanoidInlineLoadSensor").setFromField("isLoaded").setToNode("FaceLeft_Pose").setToField("isLoaded"))
      .addChild(new ROUTE().setFromNode("HumanoidInlineLoadSensor").setFromField("isLoaded").setToNode("FaceRight_Pose").setToField("isLoaded"))
      .addChild(new ROUTE().setFromNode("HumanoidInlineLoadSensor").setFromField("isLoaded").setToNode("TouchDown_Pose").setToField("isLoaded")))
    .addChild(new HAnimHumanoid().setName("HumanoidStub").setInfo(new String[] {"humanoidVersion=2.0"}).setVersion("2.0")
      .addChild(new HAnimPose().setUSE("A_Pose"))
      .addChild(new HAnimPose().setUSE("T_Pose"))
      .addChild(new HAnimPose().setUSE("I_Pose"))
      .addChild(new HAnimPose().setUSE("H_Pose"))
      .addChild(new HAnimPose().setUSE("FaceLeft_Pose"))
      .addChild(new HAnimPose().setUSE("FaceRight_Pose"))
      .addChild(new HAnimPose().setUSE("TouchDown_Pose"))));
            }
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return HAnimPoseExample model
	 */
	public X3D getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** 
     * Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#handleArguments-java.lang.String:A-">X3D.handleArguments(args)</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#validationReport--">X3D.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        System.out.println("Build this X3D model, showing validation diagnostics...");
        X3D thisExampleX3dModel = new HAnimPoseExample().getX3dModel();
//      System.out.println("X3D model construction complete.");
	
        // next handle command line arguments
        boolean hasArguments = (args != null) && (args.length > 0);
        boolean validate = true; // default
        boolean argumentsLoadNewModel = false;
        String  fileName = new String();

        if (args != null)
        {
                for (String arg : args)
                {
                        if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
                        {
                                validate = true; // making sure
                        }
                        if (arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3D) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_CLASSICVRML) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3DB) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_VRML97) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_EXI) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_GZIP) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_ZIP) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_HTML) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_XHTML))
                        {
                                argumentsLoadNewModel = true;
                                fileName = arg;
                        }
                }
        }
        if      (argumentsLoadNewModel)
                System.out.println("WARNING: \"net.x3djsonld.data.HAnimPoseExample\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.HAnimPoseExample self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./HAnimPoseExample_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./HAnimPoseExample_JavaExport.x3d"; 
                String filenameX3DV = "./HAnimPoseExample_JavaExport.x3dv"; 
                String filenameJSON = "./HAnimPoseExample_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
