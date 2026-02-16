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
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed. </p>
 <p> Related links:  source HAnimPosePrototype.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.HAnimPosePrototype&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototype.x3d">HAnimPosePrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> This model also takes advantage of Inline/IMPORT capabilities (equivalent to USE node) and thus avoids fully copying a large, complex HAnimHumanoid model. Multiple HAnimHumanoid models have been tested satisfactorily, for HAnim version 1 (X3d 3) AND HAnim version 2 (X3D 4). </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 2 October 2025 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 14 December 2025 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Joe Williams </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> contributor </i> </td>
			<td> Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HAnimPosePrototype.console.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> MovingImage </i> </td>
			<td> demonstration video <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeDemoVideo.mp4" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeDemoVideo.mp4</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExampleTouchDown.png">HAnimPoseExampleTouchDown.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExampleTouchDownFaceLeftAPose.png">HAnimPoseExampleTouchDownFaceLeftAPose.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/images/HAnimPoseExampleBoxMan1.png">images/HAnimPoseExampleBoxMan1.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/images/HAnimPoseExampleBoxMan2.png">images/HAnimPoseExampleBoxMan2.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/images/HAnimPoseExampleJoeKick.png">images/HAnimPoseExampleJoeKick.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/images/HAnimPoseExampleJoeSkeletonSkinSite.png">images/HAnimPoseExampleJoeSkeletonSkinSite.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/images/HAnimPoseExampleKoreanCharacter01Jin.png">images/HAnimPoseExampleKoreanCharacter01Jin.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/images/HAnimPoseExampleKoreanCharacter02Chul.png">images/HAnimPoseExampleKoreanCharacter02Chul.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/images/HAnimPoseExampleKoreanCharacter03Hyun.png">images/HAnimPoseExampleKoreanCharacter03Hyun.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/images/HAnimPoseExampleKoreanCharacter04Young.png">images/HAnimPoseExampleKoreanCharacter04Young.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/images/HAnimPoseExampleKoreanCharacter05Ju.png">images/HAnimPoseExampleKoreanCharacter05Ju.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/images/HAnimPoseExampleKoreanCharacter06Ga.png">images/HAnimPoseExampleKoreanCharacter06Ga.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/images/HAnimPoseExampleKoreanCharacter07No.png">images/HAnimPoseExampleKoreanCharacter07No.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/images/HAnimPoseExampleKoreanCharacter08Da.png">images/HAnimPoseExampleKoreanCharacter08Da.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/images/HAnimPoseExampleKoreanCharacter09Ru.png">images/HAnimPoseExampleKoreanCharacter09Ru.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/images/HAnimPoseExampleKoreanCharacter10Mi.png">images/HAnimPoseExampleKoreanCharacter10Mi.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/images/HAnimPoseExampleKoreanCharacter11Min.png">images/HAnimPoseExampleKoreanCharacter11Min.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/images/HAnimPoseExampleKoreanCharacter12Sun.png">images/HAnimPoseExampleKoreanCharacter12Sun.png</a> </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Direct scene manipulations with Javascript, <a href="https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript" target="_blank">https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> earlier version of this prototype: originals/HAnimPosePreliminary.x3d </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 4.0, <a href="https://www.web3d.org/x3d/tools/X3D-Edit" target="_blank">https://www.web3d.org/x3d/tools/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Sunrize X3D Editor V1.11.1, <a href="https://create3000.github.io/sunrize" target="_blank">https://create3000.github.io/sunrize</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototype.x3d</a> </td>
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
	* @author Joe Williams
 */

public class HAnimPosePrototype
{
	/** Default constructor to create this object. */
	public HAnimPosePrototype ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_FULL).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("HAnimPosePrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("This model also takes advantage of Inline/IMPORT capabilities (equivalent to USE node) and thus avoids fully copying a large, complex HAnimHumanoid model. Multiple HAnimHumanoid models have been tested satisfactorily, for HAnim version 1 (X3d 3) AND HAnim version 2 (X3D 4)."))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("2 October 2025"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("14 December 2025"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Joe Williams"))
    .addMeta(new meta().setName(meta.NAME_CONTRIBUTOR).setContent("Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("HAnimPosePrototype.console.txt"))
    .addMeta(new meta().setName(meta.NAME_MOVINGIMAGE).setContent("demonstration video https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeDemoVideo.mp4"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("HAnimPoseExampleTouchDown.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("HAnimPoseExampleTouchDownFaceLeftAPose.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("images/HAnimPoseExampleBoxMan1.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("images/HAnimPoseExampleBoxMan2.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("images/HAnimPoseExampleJoeKick.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("images/HAnimPoseExampleJoeSkeletonSkinSite.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("images/HAnimPoseExampleKoreanCharacter01Jin.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("images/HAnimPoseExampleKoreanCharacter02Chul.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("images/HAnimPoseExampleKoreanCharacter03Hyun.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("images/HAnimPoseExampleKoreanCharacter04Young.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("images/HAnimPoseExampleKoreanCharacter05Ju.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("images/HAnimPoseExampleKoreanCharacter06Ga.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("images/HAnimPoseExampleKoreanCharacter07No.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("images/HAnimPoseExampleKoreanCharacter08Da.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("images/HAnimPoseExampleKoreanCharacter09Ru.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("images/HAnimPoseExampleKoreanCharacter10Mi.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("images/HAnimPoseExampleKoreanCharacter11Min.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("images/HAnimPoseExampleKoreanCharacter12Sun.png"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONSECTION).setContent("HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONURL).setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONSECTION).setContent("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONURL).setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONSECTION).setContent("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONURL).setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("earlier version of this prototype: originals/HAnimPosePreliminary.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("https://www.web3d.org/x3d/content/examples/license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo("ModelInfo").setInfo(new String[] {"Design to illustrate a potential HAnimPose node"}).setTitle("HAnimPosePrototype.x3d"))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.8,0.8,1.0})))
    .addChild(new NavigationInfo())
    .addChild(new Group("HandleInlineLoading")
      .addComments(" Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2 ")
      .addComments(" Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun ")
      .addChild(new Inline("HumanoidInline").setDescription("remote HAnimHumanoid for IMPORT").setUrl(new String[] {"../Skin/BoxMan2.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/BoxMan2.x3d"}))
      .addComments(" Note that the following importedDEF must match the EXPORT name found in remote file ")
      .addChild(new IMPORT().setImportedDEF("BoxMan2").setInlineDEF("HumanoidInline").setAS("HumanoidImported"))
      .addChild(new LoadSensor("HumanoidInlineLoadSensor").setTimeOut(2)
        .addChild(new Inline().setUSE("HumanoidInline"))))
    .addChild(new ProtoDeclare("HAnimPose").setName("HAnimPose").setAppinfo("Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("parentHAnimHumanoid").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("HAnimHumanoid for this Pose to act upon")
          .addComments(" HAnimHumanoid initialization node goes here, this field is only used in the prototype implementation "))
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("newPoseName").setAppinfo("name of this pose"))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("joint values to apply to HAnimHumanoid")
          .addComments(" initializating Joint nodes (if any) go here "))
        .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("explanation of purpose"))
        .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(true).setAppinfo("default value true"))
        .addField(new field().setName("loa").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(-1).setAppinfo("default is no loa"))
        .addField(new field().setName("transitionDuration").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("how many seconds to achieve the pose"))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("single Metadata* node"))
        .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("event indicating when pose transition is active"))
        .addField(new field().setName("commencePose").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"))
        .addField(new field().setName("resetAllJoints").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("reset the skeleton to I pose with all joints zeroed"))
        .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("allows transition to proceed incrementally from fraction [0..10"))
        .addField(new field().setName("set_startTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("starts the animation clock"))
        .addField(new field().setName("isLoaded").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"))
        .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(true).setAppinfo("debug trace to Browser output console this is a local prototype field")))
      .setProtoBody(new ProtoBody()
        .addChild(new TimeSensor("ClockTimeSensor").setDescription("control timing of pose animation when triggered")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
            .addConnect(new connect().setNodeField("cycleInterval").setProtoField("transitionDuration"))
            .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))
            .addConnect(new connect().setNodeField("startTime").setProtoField("set_startTime"))
            .addConnect(new connect().setNodeField("metadata").setProtoField("metadata"))))
        .addChild(new TimeSensor("ResetTimeSensor").setDescription("control timing of skeleton reset to \"A\" pose when triggered")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
            .addConnect(new connect().setNodeField("cycleInterval").setProtoField("transitionDuration"))
            .addComments(" no need to report isActive since that would be duplicative ")
            .addConnect(new connect().setNodeField("startTime").setProtoField("set_startTime"))))
        .addChild(new Group("PoseInterpolatorGroup")
          .addComments(" interpolators generated by prototype script appear here at runtime "))
        .addChild(new Group("ResetInterpolatorGroup")
          .addComments(" interpolators generated by prototype script appear here at runtime "))
        .addChild(new Script("HAnimPoseScript").setDirectOutput(true).setUrl(new String[] {"HAnimPosePrototypeScript.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeScript.js"})
          .addField(new field().setName("parentHAnimHumanoid").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Humanoid for this Pose to act upon")
            .addComments(" initialization node (if any) goes here "))
          .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("name of this pose"))
          .addField(new field().setName("loa").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("default is no loa"))
          .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("explanation of purpose"))
          .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("default value true"))
          .addField(new field().setName("resetAllJoints").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("reset the skeleton to I pose with all joints zeroed"))
          .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("joint values to apply to HAnimHumanoid")
            .addComments(" initializating Joint nodes (if any) go here "))
          .addField(new field().setName("transitionDuration").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("how many seconds to achieve the pose"))
          .addField(new field().setName("commencePose").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"))
          .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("allows transition to proceed incrementally from fraction [0..10"))
          .addField(new field().setName("set_startTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("starts the animation clock"))
          .addField(new field().setName("isLoaded").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"))
          .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("debug trace to Browser output console"))
          .addField(new field().setName("numberPoseJoints").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0).setAppinfo("number of joints found in children field"))
          .addField(new field().setName("numberSkeletonJoints").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0).setAppinfo("number of joints found in Humanoid"))
          .addField(new field().setName("jointOrientationInterpolators").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("OrientationInterpolator node array matching number of children")
            .addComments(" initializating Joint nodes (if any) go here "))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("parentHAnimHumanoid").setProtoField("parentHAnimHumanoid"))
            .addConnect(new connect().setNodeField("name").setProtoField("name"))
            .addConnect(new connect().setNodeField("loa").setProtoField("loa"))
            .addConnect(new connect().setNodeField("description").setProtoField("description"))
            .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
            .addConnect(new connect().setNodeField("resetAllJoints").setProtoField("resetAllJoints"))
            .addConnect(new connect().setNodeField("children").setProtoField("children"))
            .addConnect(new connect().setNodeField("transitionDuration").setProtoField("transitionDuration"))
            .addConnect(new connect().setNodeField("commencePose").setProtoField("commencePose"))
            .addConnect(new connect().setNodeField("set_fraction").setProtoField("set_fraction"))
            .addConnect(new connect().setNodeField("set_startTime").setProtoField("set_startTime"))
            .addConnect(new connect().setNodeField("isLoaded").setProtoField("isLoaded"))
            .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled"))))))
    .addChild(new Viewpoint().setDescription("HAnimPose for HumanoidInline IMPORT model").setPosition(0.0,1.0,4.0))
    .addComments(" no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc... ")
    .addChild(new ProtoInstance("HAnimPose", "T_Pose").setContainerField("children")
      .addFieldValue(new fieldValue().setName("name").setValue("T"))
      .addFieldValue(new fieldValue().setName("enabled").setValue(true))
      .addFieldValue(new fieldValue().setName("parentHAnimHumanoid")
        .addComments(" HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) ")
        .addComments(" debug test case for incorrect node type: <HAnimJoint DEF=\"ErrorDiagnosticsTest\" USE='HumanoidImported'/> ")
        .addChild(new HAnimHumanoid().setUSE("HumanoidImported")))
      .addFieldValue(new fieldValue().setName("loa").setValue(1))
      .addFieldValue(new fieldValue().setName("description").setValue("arms stretched outward and level similar to letter T"))
      .addFieldValue(new fieldValue().setName("children")
        .addChild(new HAnimJoint("PoseJoint_l_shoulder_1").setName("l_shoulder").setDescription("left shoulder").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(0.0,0.0,1.0,1.57).setUlimit(new double[] {0.0,0.0,0.0}))
        .addChild(new HAnimJoint("PoseJoint_r_shoulder_1").setName("r_shoulder").setDescription("right shoulder").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(0.0,0.0,-1.0,1.57).setUlimit(new double[] {0.0,0.0,0.0}))
        .addComments(" test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/ "))
      .addFieldValue(new fieldValue().setName("transitionDuration").setValue(1.3)))
    .addChild(new ProtoInstance("HAnimPose", "A_Pose").setContainerField("children")
      .addFieldValue(new fieldValue().setName("name").setValue("A"))
      .addFieldValue(new fieldValue().setName("enabled").setValue(true))
      .addFieldValue(new fieldValue().setName("parentHAnimHumanoid")
        .addComments(" HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) ")
        .addChild(new HAnimHumanoid().setUSE("HumanoidImported")))
      .addFieldValue(new fieldValue().setName("loa").setValue(1))
      .addFieldValue(new fieldValue().setName("description").setValue("arms stretched outward and downward similar to letter A"))
      .addFieldValue(new fieldValue().setName("children")
        .addChild(new HAnimJoint("PoseJoint_l_shoulder").setName("l_shoulder").setDescription("left shoulder").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(0.0,0.0,1.0,0.5).setUlimit(new double[] {0.0,0.0,0.0}))
        .addChild(new HAnimJoint("PoseJoint_r_shoulder").setName("r_shoulder").setDescription("right shoulder").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(0.0,0.0,-1.0,0.5).setUlimit(new double[] {0.0,0.0,0.0})))
      .addFieldValue(new fieldValue().setName("transitionDuration").setValue(1.2))
      .addFieldValue(new fieldValue().setName("traceEnabled").setValue(true)))
    .addChild(new ProtoInstance("HAnimPose", "TouchDown_Pose").setContainerField("children")
      .addComments(" thanks Joe ")
      .addFieldValue(new fieldValue().setName("name").setValue("TouchDown"))
      .addFieldValue(new fieldValue().setName("enabled").setValue(true))
      .addFieldValue(new fieldValue().setName("parentHAnimHumanoid")
        .addComments(" HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) ")
        .addChild(new HAnimHumanoid().setUSE("HumanoidImported")))
      .addFieldValue(new fieldValue().setName("loa").setValue(1))
      .addFieldValue(new fieldValue().setName("description").setValue("arms and legs stretched outward providing a TouchDown gesture"))
      .addFieldValue(new fieldValue().setName("children")
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
      .addFieldValue(new fieldValue().setName("transitionDuration").setValue(1.2))
      .addFieldValue(new fieldValue().setName("traceEnabled").setValue(true)))
    .addChild(new ProtoInstance("HAnimPose", "I_Pose").setContainerField("children")
      .addFieldValue(new fieldValue().setName("name").setValue("I"))
      .addFieldValue(new fieldValue().setName("enabled").setValue(true))
      .addFieldValue(new fieldValue().setName("parentHAnimHumanoid")
        .addComments(" HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) ")
        .addChild(new HAnimHumanoid().setUSE("HumanoidImported")))
      .addFieldValue(new fieldValue().setName("loa").setValue(1))
      .addFieldValue(new fieldValue().setName("description").setValue("arms and legs straight down default binding pose for baseline Humanoid"))
      .addFieldValue(new fieldValue().setName("children")
        .addComments(" not defining any children equals the default \"I\" pose "))
      .addFieldValue(new fieldValue().setName("transitionDuration").setValue(1.5))
      .addFieldValue(new fieldValue().setName("traceEnabled").setValue(true)))
    .addChild(new ProtoInstance("HAnimPose", "H_Pose").setContainerField("children")
      .addFieldValue(new fieldValue().setName("name").setValue("H"))
      .addFieldValue(new fieldValue().setName("enabled").setValue(false))
      .addComments(" <fieldValue name='loa' value='1'/> ")
      .addFieldValue(new fieldValue().setName("description").setValue("TODO experimental pose not yet implemented"))
      .addFieldValue(new fieldValue().setName("transitionDuration").setValue(1.4))
      .addFieldValue(new fieldValue().setName("traceEnabled").setValue(true)))
    .addChild(new ProtoInstance("HAnimPose", "FaceLeft_Pose").setContainerField("children")
      .addFieldValue(new fieldValue().setName("name").setValue("FaceLeft"))
      .addFieldValue(new fieldValue().setName("enabled").setValue(true))
      .addFieldValue(new fieldValue().setName("parentHAnimHumanoid")
        .addComments(" HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) ")
        .addChild(new HAnimHumanoid().setUSE("HumanoidImported")))
      .addFieldValue(new fieldValue().setName("loa").setValue(0))
      .addFieldValue(new fieldValue().setName("description").setValue("Only modify humanoid_root Joint node to face left"))
      .addFieldValue(new fieldValue().setName("children")
        .addChild(new HAnimJoint("FaceLeft_humanoid_root").setName("humanoid_root").setDescription("Only rotate the model").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(0.0,1.0,0.0,1.570796).setUlimit(new double[] {0.0,0.0,0.0})))
      .addFieldValue(new fieldValue().setName("transitionDuration").setValue(1.1))
      .addFieldValue(new fieldValue().setName("traceEnabled").setValue(true)))
    .addChild(new ProtoInstance("HAnimPose", "FaceRight_Pose").setContainerField("children")
      .addFieldValue(new fieldValue().setName("name").setValue("FaceRight"))
      .addFieldValue(new fieldValue().setName("enabled").setValue(true))
      .addFieldValue(new fieldValue().setName("parentHAnimHumanoid")
        .addComments(" HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) ")
        .addChild(new HAnimHumanoid().setUSE("HumanoidImported")))
      .addFieldValue(new fieldValue().setName("loa").setValue(0))
      .addFieldValue(new fieldValue().setName("description").setValue("Only modify humanoid_root Joint node to face right"))
      .addFieldValue(new fieldValue().setName("children")
        .addChild(new HAnimJoint("FaceRight_humanoid_root").setName("humanoid_root").setDescription("Only rotate the model").setLlimit(new double[] {0.0,0.0,0.0}).setRotation(0.0,1.0,0.0,-1.570796).setUlimit(new double[] {0.0,0.0,0.0})))
      .addFieldValue(new fieldValue().setName("transitionDuration").setValue(1.1))
      .addFieldValue(new fieldValue().setName("traceEnabled").setValue(true)))
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
      .addChild(new ROUTE().setFromNode("HumanoidInlineLoadSensor").setFromField("isLoaded").setToNode("TouchDown_Pose").setToField("isLoaded"))));
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
	 * @return HAnimPosePrototype model
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
        X3D thisExampleX3dModel = new HAnimPosePrototype().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.HAnimPosePrototype\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.HAnimPosePrototype self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./HAnimPosePrototype_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./HAnimPosePrototype_JavaExport.x3d"; 
                String filenameX3DV = "./HAnimPosePrototype_JavaExport.x3dv"; 
                String filenameJSON = "./HAnimPosePrototype_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
