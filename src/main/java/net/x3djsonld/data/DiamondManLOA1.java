package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers, also includes HAnimSite feaature points. LOA-1 is typical low-end real-time 3D hierarchy. </p>
 <p> Related links:  source DiamondManLOA1.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.DiamondManLOA1&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA1.x3d">DiamondManLOA1.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers, also includes HAnimSite feaature points. LOA-1 is typical low-end real-time 3D hierarchy. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Matthew T. Beitler </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Joel S. Pawloski </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 12 November 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 18 February 2024 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/images/BonesAllSkeletonFrontViewLOA1.png">images/BonesAllSkeletonFrontViewLOA1.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> motto </i> </td>
			<td> (a) "Diamonds are a girl's best friend." (b) "Gosh, it sure is chilly in here." </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Still needs comments on CAESAR feature points inserted </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa" target="_blank">http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl" target="_blank">http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl" target="_blank">http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://ece.uwaterloo.ca/~HAnim" target="_blank">http://ece.uwaterloo.ca/~HAnim</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.cis.upenn.edu/~badler/anthro/89-71.pdf" target="_blank">http://www.cis.upenn.edu/~badler/anthro/89-71.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.cis.upenn.edu/~badler/anthro/89-71.ps" target="_blank">http://www.cis.upenn.edu/~badler/anthro/89-71.ps</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.cis.upenn.edu/~beitler" target="_blank">http://www.cis.upenn.edu/~beitler</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/humanoid_landmark_locations.gif">humanoid_landmark_locations.gif</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif" target="_blank">http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA1.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA1.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://www.web3d.org/x3d/tools/X3D-Edit" target="_blank">https://www.web3d.org/x3d/tools/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://www.web3d.org/x3d/tools/X3D-Edit" target="_blank">https://www.web3d.org/x3d/tools/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/../license.html">../license.html</a> </td>
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

	* @author Matthew T. Beitler
 */

public class DiamondManLOA1
{
	/** Default constructor to create this object. */
	public DiamondManLOA1 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("HAnim").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("DiamondManLOA1.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers, also includes HAnimSite feaature points. LOA-1 is typical low-end real-time 3D hierarchy."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Matthew T. Beitler"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Joel S. Pawloski"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("12 November 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("18 February 2024"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("images/BonesAllSkeletonFrontViewLOA1.png"))
    .addMeta(new meta().setName("motto").setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("Still needs comments on CAESAR feature points inserted"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://ece.uwaterloo.ca/~HAnim"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.cis.upenn.edu/~beitler"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("humanoid_landmark_locations.gif"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA1.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setInfo(new String[] {"HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"}).setTitle("HANIM 1.1 Default Joint Centers, LOA1"))
    .addChild(new NavigationInfo().setSpeed(1.5))
    .addChild(new Viewpoint().setDescription("Diamond Man, LOA 1").setCenterOfRotation(0.0,1.0,0.0).setPosition(0.0,1.0,3.0))
    .addChild(new HAnimHumanoid("hanim_humanoid").setName("humanoid").setLoa(1).setVersion("2.0")
      .addComments(" original HAnimHumanoid info='\"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org\" \"authorName=Matthew T. Beitler\" \"copyright=Copyright 1999 Matthew T. Beitler\" \"humanoidVersion=JointCenters 1.1 LOA1\" \"usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.\"' ")
      .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
        .setMetadata(new MetadataString().setName("authorEmail").setValue(new String[] {"beitler@graphics.cis.upenn.edu beitler@acm.org"}))
        .setMetadata(new MetadataString().setName("authorName").setValue(new String[] {"Matthew T. Beitler"}))
        .setMetadata(new MetadataString().setName("copyright").setValue(new String[] {"Copyright 1999 Matthew T. Beitler"}))
        .setMetadata(new MetadataString().setName("humanoidVersion").setValue(new String[] {"JointCenters 1.1 LOA1"}))
        .setMetadata(new MetadataString().setName("usageRestrictions").setValue(new String[] {"PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."})))
      .addSkeleton(new HAnimJoint("hanim_humanoid_root").setName("humanoid_root").setCenter(0.0,0.8240,0.0277).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
        .addChild(new HAnimJoint("hanim_sacroiliac").setName("sacroiliac").setCenter(0.0,0.9149,0.0016).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment("hanim_pelvis").setName("pelvis")
            .addChild(new Transform().setTranslation(0.0,0.9149,0.0016)
              .addChild(new Shape("DiamondShape")
                .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5).setCoordIndex(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1})
                  .setCoord(new Coordinate("points").setPoint(new MFVec3f(new double[] {0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}))))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0))))))
          .addChild(new HAnimJoint("hanim_l_hip").setName("l_hip").setCenter(0.0961,0.9124,-0.0001).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("hanim_l_thigh").setName("l_thigh")
              .addChild(new Transform().setTranslation(0.0961,0.9124,-0.0001)
                .addChild(new Shape().setUSE("DiamondShape")))
              .addChild(new HAnimSite("hanim_l_knee_crease_pt").setName("l_knee_crease_pt").setTranslation(0.0993,0.4881,-0.0309))
              .addChild(new HAnimSite("hanim_l_femoral_lateral_epicondyle_pt").setName("l_femoral_lateral_epicondyle_pt").setTranslation(0.1598,0.4967,0.0297))
              .addChild(new HAnimSite("hanim_l_femoral_medial_epicondyle_pt").setName("l_femoral_medial_epicondyle_pt").setTranslation(0.0398,0.4946,0.0303)))
            .addChild(new HAnimJoint("hanim_l_knee").setName("l_knee").setCenter(0.1040,0.4867,0.0308).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment("hanim_l_calf").setName("l_calf")
                .addChild(new Transform().setTranslation(0.1040,0.4867,0.0308)
                  .addChild(new Shape().setUSE("DiamondShape"))))
              .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_talocrural").setCenter(0.1101,0.0656,-0.0736).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimSegment("hanim_l_talus").setName("l_talus")
                  .addChild(new Transform().setTranslation(0.1101,0.0656,-0.0736)
                    .addChild(new Shape().setUSE("DiamondShape")))
                  .addChild(new HAnimSite("hanim_l_lateral_malleolus_pt").setName("l_lateral_malleolus_pt").setTranslation(0.1308,0.0597,-0.1032))
                  .addChild(new HAnimSite("hanim_l_medial_malleolus_pt").setName("l_medial_malleolus_pt").setTranslation(0.0890,0.0716,-0.0881))
                  .addChild(new HAnimSite("hanim_l_sphyrion_pt").setName("l_sphyrion_pt").setTranslation(0.0890,0.0575,-0.0943))
                  .addChild(new HAnimSite("hanim_l_calcaneus_posterior_pt").setName("l_calcaneus_posterior_pt").setTranslation(0.0974,0.0259,-0.1171)))
                .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setName("l_metatarsophalangeal_2").setCenter(0.1086,0.0001,0.0368).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_2").setName("l_tarsal_proximal_phalanx_2")
                    .addChild(new HAnimSite("hanim_l_middistal_tip").setName("l_middistal_tip").setTranslation(0.1354,0.0016,0.1476))
                    .addChild(new HAnimSite("hanim_l_metatarsal_phalanx_5_pt").setName("l_metatarsal_phalanx_5_pt").setTranslation(0.1825,0.0070,0.0928))
                    .addChild(new HAnimSite("hanim_l_metatarsal_phalanx_1_pt").setName("l_metatarsal_phalanx_1_pt").setTranslation(0.0816,0.0232,0.0106))
                    .addChild(new HAnimSite("hanim_l_tarsal_distal_phalanx_2_pt").setName("l_tarsal_distal_phalanx_2_pt").setTranslation(0.1195,0.0079,0.1433)))))))
          .addChild(new HAnimJoint("hanim_r_hip").setName("r_hip").setCenter(-0.0950,0.9171,0.0029).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("hanim_r_thigh").setName("r_thigh")
              .addChild(new Transform().setTranslation(-0.0950,0.9171,0.0029)
                .addChild(new Shape().setUSE("DiamondShape")))
              .addChild(new HAnimSite("hanim_r_knee_crease_pt").setName("r_knee_crease_pt").setTranslation(-0.0825,0.4932,-0.0326))
              .addChild(new HAnimSite("hanim_r_femoral_lateral_epicondyle_pt").setName("r_femoral_lateral_epicondyle_pt").setTranslation(-0.1421,0.4992,0.0310))
              .addChild(new HAnimSite("hanim_r_femoral_medial_epicondyle_pt").setName("r_femoral_medial_epicondyle_pt").setTranslation(-0.0221,0.5014,0.0289)))
            .addChild(new HAnimJoint("hanim_r_knee").setName("r_knee").setCenter(-0.0867,0.4913,0.0318).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment("hanim_r_calf").setName("r_calf")
                .addChild(new Transform().setTranslation(-0.0867,0.4913,0.0318)
                  .addChild(new Shape().setUSE("DiamondShape"))))
              .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_talocrural").setCenter(-0.0801,0.0712,-0.0766).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimSegment("hanim_r_talus").setName("r_talus")
                  .addChild(new Transform().setTranslation(-0.0801,0.0712,-0.0766)
                    .addChild(new Shape().setUSE("DiamondShape")))
                  .addChild(new HAnimSite("hanim_r_lateral_malleolus_pt").setName("r_lateral_malleolus_pt").setTranslation(-0.1006,0.0658,-0.1075))
                  .addChild(new HAnimSite("hanim_r_medial_malleolus_pt").setName("r_medial_malleolus_pt").setTranslation(-0.0591,0.0760,-0.0928))
                  .addChild(new HAnimSite("hanim_r_sphyrion_pt").setName("r_sphyrion_pt").setTranslation(-0.0603,0.0610,-0.1002))
                  .addChild(new HAnimSite("hanim_r_calcaneus_posterior_pt").setName("r_calcaneus_posterior_pt").setTranslation(-0.0692,0.0297,-0.1221)))
                .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2").setCenter(-0.0801,0.0,0.0368).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_2").setName("r_tarsal_proximal_phalanx_2")
                    .addChild(new HAnimSite("hanim_r_middistal_tip").setName("r_middistal_tip").setTranslation(-0.1043,-0.0227,0.1450))
                    .addChild(new HAnimSite("hanim_r_metatarsal_phalanx_5_pt").setName("r_metatarsal_phalanx_5_pt").setTranslation(-0.1523,0.0166,0.0895))
                    .addChild(new HAnimSite("hanim_r_metatarsal_phalanx_1_pt").setName("r_metatarsal_phalanx_1_pt").setTranslation(-0.0521,0.0260,0.0127))
                    .addChild(new HAnimSite("hanim_r_tarsal_distal_phalanx_2_pt").setName("r_tarsal_distal_phalanx_2_pt").setTranslation(-0.0883,0.0134,0.1383))))))))
        .addChild(new HAnimJoint("hanim_vl1").setName("vl1").setCenter(-0.00405,1.07,-0.0275).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment("hanim_l1").setName("l1"))
          .addChild(new HAnimJoint("hanim_l_shoulder").setName("l_shoulder").setCenter(0.2029,1.4376,-0.0387).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("hanim_l_upperarm").setName("l_upperarm")
              .addChild(new Transform().setTranslation(0.2029,1.4376,-0.0387)
                .addChild(new Shape().setUSE("DiamondShape")))
              .addChild(new Transform("l_upperarm_adjust").setCenter(0.182,1.22,-0.047).setRotation(1.0,0.0,0.0,0.119).setTranslation(0.2029,1.4376,-0.0387))
              .addChild(new HAnimSite("hanim_l_humeral_lateral_epicondyle_pt").setName("l_humeral_lateral_epicondyle_pt").setTranslation(0.2280,1.1482,-0.1100)))
            .addChild(new HAnimJoint("hanim_l_elbow").setName("l_elbow").setCenter(0.2014,1.1357,-0.0682).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment("hanim_l_forearm").setName("l_forearm")
                .addChild(new Transform().setTranslation(0.2014,1.1357,-0.0682)
                  .addChild(new Shape().setUSE("DiamondShape")))
                .addChild(new Transform("l_forearm_adjust").setCenter(0.198,0.961,-0.0405).setRotation(-1.0,0.0,0.0,0.1).setTranslation(0.2014,1.1357,-0.0682))
                .addChild(new HAnimSite("hanim_l_radial_styloid_pt").setName("l_radial_styloid_pt").setTranslation(0.1901,0.8645,-0.0415))
                .addChild(new HAnimSite("hanim_l_olecranon_pt").setName("l_olecranon_pt").setTranslation(-0.1962,1.1375,-0.1123))
                .addChild(new HAnimSite("hanim_l_humeral_medial_epicondyle_pt").setName("l_humeral_medial_epicondyle_pt").setTranslation(0.1735,1.1272,-0.1113))
                .addChild(new HAnimSite("hanim_l_radiale_pt").setName("l_radiale_pt").setTranslation(0.2182,1.1212,-0.1167)))
              .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_radiocarpal").setCenter(0.1984,0.8663,-0.0583).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimSegment("hanim_l_carpal").setName("l_carpal")
                  .addChild(new Transform().setTranslation(0.1984,0.8663,-0.0583)
                    .addChild(new Shape().setUSE("DiamondShape")))
                  .addChild(new Transform("l_hand_adjust").setCenter(0.213,0.811,-0.0338).setRotation(-0.06361,-0.9967,0.04988,1.333).setTranslation(0.1984,0.8663,-0.0583))
                  .addChild(new HAnimSite("hanim_l_hand_tip").setName("l_hand_tip").setTranslation(0.2080,0.6731,-0.0491))
                  .addChild(new HAnimSite("hanim_l_metacarpal_phalanx_2_pt").setName("l_metacarpal_phalanx_2_pt").setTranslation(0.2009,0.8139,-0.0237))
                  .addChild(new HAnimSite("hanim_l_dactylion_pt").setName("l_dactylion_pt").setTranslation(0.2056,0.6743,-0.0482))
                  .addChild(new HAnimSite("hanim_l_ulnar_styloid_pt").setName("l_ulnar_styloid_pt").setTranslation(-0.2142,0.8529,-0.0648))
                  .addChild(new HAnimSite("hanim_l_metacarpal_phalanx_5_pt").setName("l_metacarpal_phalanx_5_pt").setTranslation(0.1929,0.7860,-0.1122))))))
          .addChild(new HAnimJoint("hanim_r_shoulder").setName("r_shoulder").setCenter(-0.1907,1.4407,-0.0325).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("hanim_r_upperarm").setName("r_upperarm")
              .addChild(new Transform().setTranslation(-0.1907,1.4407,-0.0325)
                .addChild(new Shape().setUSE("DiamondShape")))
              .addChild(new Transform("r_upperarm_adjust").setCenter(-0.182,1.22,-0.047).setRotation(1.0,0.0,0.0,0.0836).setTranslation(-0.1907,1.4407,-0.0325))
              .addChild(new HAnimSite("hanim_r_humeral_lateral_epicondyle_pt").setName("r_humeral_lateral_epicondyle_pt").setTranslation(-0.2224,1.1517,-0.1033)))
            .addChild(new HAnimJoint("hanim_r_elbow").setName("r_elbow").setCenter(-0.1949,1.1388,-0.0620).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment("hanim_r_forearm").setName("r_forearm")
                .addChild(new Transform().setTranslation(-0.1949,1.1388,-0.0620)
                  .addChild(new Shape().setUSE("DiamondShape")))
                .addChild(new Transform("r_forearm_adjust").setCenter(-0.198,0.961,-0.0397).setRotation(-1.0,0.0,0.0,0.1254).setTranslation(-0.1949,1.1388,-0.0620))
                .addChild(new HAnimSite("hanim_r_radial_styloid_pt").setName("r_radial_styloid_pt").setTranslation(-0.1884,0.8676,-0.0360))
                .addChild(new HAnimSite("hanim_r_olecranon_pt").setName("r_olecranon_pt").setTranslation(-0.1907,1.1405,-0.1065))
                .addChild(new HAnimSite("hanim_r_humeral_medial_epicondyle_pt").setName("r_humeral_medial_epicondyle_pt").setTranslation(-0.1680,1.1298,-0.1062))
                .addChild(new HAnimSite("hanim_r_radiale_pt").setName("r_radiale_pt").setTranslation(-0.2130,1.1305,-0.1091)))
              .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_radiocarpal").setCenter(-0.1959,0.8694,-0.0521).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimSegment("hanim_r_carpal").setName("r_carpal")
                  .addChild(new Transform().setTranslation(-0.1959,0.8694,-0.0521)
                    .addChild(new Shape().setUSE("DiamondShape")))
                  .addChild(new Transform("r_hand_adjust").setCenter(-0.217,0.811,-0.0338).setRotation(-0.09024,0.994,-0.0624,1.216))
                  .addChild(new HAnimSite("hanim_r_hand_tip").setName("r_hand_tip").setTranslation(-0.1969,0.6758,-0.0427))
                  .addChild(new HAnimSite("hanim_r_metacarpal_phalanx_2_pt").setName("r_metacarpal_phalanx_2_pt").setTranslation(-0.1977,0.8169,-0.0177))
                  .addChild(new HAnimSite("hanim_r_dactylion_pt").setName("r_dactylion_pt").setTranslation(-0.1941,0.6772,-0.0423))
                  .addChild(new HAnimSite("hanim_r_ulnar_styloid_pt").setName("r_ulnar_styloid_pt").setTranslation(-0.2117,0.8562,-0.0584))
                  .addChild(new HAnimSite("hanim_r_metacarpal_phalanx_5_pt").setName("r_metacarpal_phalanx_5_pt").setTranslation(-0.1929,0.7890,-0.1064))))))
          .addChild(new HAnimJoint("hanim_vc4").setName("vc4").setCenter(0.0,1.43,-0.0458).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("hanim_c4").setName("c4"))))
        .addChild(new HAnimJoint("hanim_vl5").setName("vl5").setCenter(0.0028,1.0568,-0.0776).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimJoint("hanim_skullbase").setName("skullbase").setCenter(0.0044,1.6209,0.0236).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("hanim_skull").setName("skull")
              .addChild(new Transform().setTranslation(0.0044,1.6209,0.0236)
                .addChild(new Shape().setUSE("DiamondShape")))
              .addChild(new HAnimSite("hanim_skull_vertex_tip").setName("skull_vertex_tip").setTranslation(0.0050,1.7504,0.0055))
              .addChild(new HAnimSite("hanim_sellion_pt").setName("sellion_pt").setTranslation(0.0058,1.6316,0.0852))
              .addChild(new HAnimSite("hanim_r_infraorbitale_pt").setName("r_infraorbitale_pt").setTranslation(-0.0237,1.6171,0.0752))
              .addChild(new HAnimSite("hanim_l_infraorbitale_pt").setName("l_infraorbitale_pt").setTranslation(0.0341,1.6171,0.0752))
              .addChild(new HAnimSite("hanim_supramenton_pt").setName("supramenton_pt").setTranslation(0.0061,1.5410,0.0805))
              .addChild(new HAnimSite("hanim_r_tragion_pt").setName("r_tragion_pt").setTranslation(-0.0646,1.6347,0.0302))
              .addChild(new HAnimSite("hanim_r_gonion_pt").setName("r_gonion_pt").setTranslation(-0.0520,1.5529,0.0347))
              .addChild(new HAnimSite("hanim_l_tragion_pt").setName("l_tragion_pt").setTranslation(0.0739,1.6348,0.0282))
              .addChild(new HAnimSite("hanim_l_gonion_pt").setName("l_gonion_pt").setTranslation(0.0631,1.5530,0.0330))
              .addChild(new HAnimSite("hanim_nuchale_pt").setName("nuchale_pt").setTranslation(0.0039,1.5972,-0.0796))))))
      .addViewpoints(new HAnimSite("hanim_DiamondManLOA1_view").setName("DiamondManLOA1_view")
        .addChild(new Viewpoint("InclinedView").setDescription("Inclined View").setOrientation(-0.113,0.993,0.0347,0.671).setPosition(1.62,1.05,2.06))
        .addChild(new Viewpoint("FrontView").setDescription("Front View").setPosition(0.0,0.854,2.57665))
        .addChild(new Viewpoint("SideView").setDescription("Side View").setOrientation(0.0,1.0,0.0,1.57079).setPosition(2.5929,0.854,0.0))
        .addChild(new Viewpoint("TopView").setDescription("Top View").setOrientation(1.0,0.0,0.0,-1.57079).setPosition(0.0,3.4495,0.0)))
      .addJoints(new HAnimJoint().setUSE("hanim_humanoid_root"))
      .addJoints(new HAnimJoint().setUSE("hanim_sacroiliac"))
      .addJoints(new HAnimJoint().setUSE("hanim_vl1"))
      .addJoints(new HAnimJoint().setUSE("hanim_vc4"))
      .addJoints(new HAnimJoint().setUSE("hanim_skullbase"))
      .addJoints(new HAnimJoint().setUSE("hanim_vl5"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_elbow"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_elbow"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_hip"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_hip"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_knee"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_knee"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_radiocarpal"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_radiocarpal"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_shoulder"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_shoulder"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_talocrural"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_talocrural"))
      .addSegments(new HAnimSegment().setUSE("hanim_pelvis"))
      .addSegments(new HAnimSegment().setUSE("hanim_l1"))
      .addSegments(new HAnimSegment().setUSE("hanim_c4"))
      .addSegments(new HAnimSegment().setUSE("hanim_skull"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_calf"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_calf"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_carpal"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_carpal"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_forearm"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_forearm"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_talus"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_talus"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_2"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_2"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_thigh"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_thigh"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_upperarm"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_upperarm"))
      .addSites(new HAnimSite().setUSE("hanim_skull_vertex_tip"))
      .addSites(new HAnimSite().setUSE("hanim_sellion_pt"))
      .addSites(new HAnimSite().setUSE("hanim_supramenton_pt"))
      .addSites(new HAnimSite().setUSE("hanim_nuchale_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_calcaneus_posterior_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_calcaneus_posterior_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_dactylion_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_dactylion_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_femoral_lateral_epicondyle_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_femoral_lateral_epicondyle_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_femoral_medial_epicondyle_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_femoral_medial_epicondyle_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_gonion_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_gonion_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_hand_tip"))
      .addSites(new HAnimSite().setUSE("hanim_r_hand_tip"))
      .addSites(new HAnimSite().setUSE("hanim_l_humeral_lateral_epicondyle_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_humeral_lateral_epicondyle_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_humeral_medial_epicondyle_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_humeral_medial_epicondyle_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_infraorbitale_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_infraorbitale_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_knee_crease_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_knee_crease_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_lateral_malleolus_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_lateral_malleolus_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_medial_malleolus_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_medial_malleolus_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_metacarpal_phalanx_2_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_metacarpal_phalanx_2_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_metacarpal_phalanx_5_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_metacarpal_phalanx_5_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_metatarsal_phalanx_1_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_metatarsal_phalanx_1_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_metatarsal_phalanx_5_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_metatarsal_phalanx_5_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_middistal_tip"))
      .addSites(new HAnimSite().setUSE("hanim_r_middistal_tip"))
      .addSites(new HAnimSite().setUSE("hanim_l_olecranon_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_olecranon_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_radial_styloid_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_radial_styloid_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_radiale_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_radiale_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_sphyrion_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_sphyrion_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_tarsal_distal_phalanx_2_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_tarsal_distal_phalanx_2_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_tragion_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_tragion_pt"))
      .addSites(new HAnimSite().setUSE("hanim_l_ulnar_styloid_pt"))
      .addSites(new HAnimSite().setUSE("hanim_r_ulnar_styloid_pt"))));
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
	 * @return DiamondManLOA1 model
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
        X3D thisExampleX3dModel = new DiamondManLOA1().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.DiamondManLOA1\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.DiamondManLOA1 self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./DiamondManLOA1_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./DiamondManLOA1_JavaExport.x3d"; 
                String filenameX3DV = "./DiamondManLOA1_JavaExport.x3dv"; 
                String filenameJSON = "./DiamondManLOA1_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
