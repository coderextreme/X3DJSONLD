var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('./X3Dautoclass');

// Javadoc annotations follow, see below for source.
/**
 * <p> HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers. LOA-1 is typical low-end real-time 3D hierarchy. </p>
 <p> Related links: DiamondManLOA_1.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.DiamondManLOA_1&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_1.x3d">DiamondManLOA_1.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers. LOA-1 is typical low-end real-time 3D hierarchy. </td>
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
			<td> 23 December 2021 </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_1.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_1.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
	</p>

	* @author Matthew T. Beitler
 */

function DiamondManLOA_1
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
DiamondManLOA_1.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: WorldInfo info field, scene-graph level=3, element #26, 100 total values */
	this.WorldInfo_3_26_info = new autoclass.MFString(new autoclass.MFString("\"HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf\""));

	/** Large attribute array: MetadataSet reference field, scene-graph level=4, element #29, 1 total value */
	this.MetadataSet_HAnimHumanoid.info_4_29_reference = new autoclass.SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");

	/** Large attribute array: MetadataString value field, scene-graph level=5, element #33, 51 total values */
	this.MetadataString_usageRestrictions_5_33_value = new autoclass.MFString(new autoclass.MFString("\"PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.\""));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("H-Anim").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("DiamondManLOA_1.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers. LOA-1 is typical low-end real-time 3D hierarchy."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Matthew T. Beitler"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Joel S. Pawloski"))
    .addMeta((new autoclass.meta()).setName("created").setContent("12 November 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("23 December 2021"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA1.png"))
    .addMeta((new autoclass.meta()).setName("motto").setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""))
    .addMeta((new autoclass.meta()).setName("warning").setContent("Still needs comments on CAESAR feature points inserted"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://ece.uwaterloo.ca/~HAnim"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.cis.upenn.edu/~beitler"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("humanoid_landmark_locations.gif"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_1.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setInfo(this.WorldInfo_3_26_info).setTitle("HANIM 1.1 Default Joint Centers, LOA1"))
    .addChild((new autoclass.NavigationInfo()).setSpeed(1.5))
    .addChild((new autoclass.Viewpoint()).setDescription("Diamond Man, LOA 1").setCenterOfRotation(0.0,1.0,0.0).setPosition(0.0,1.0,3.0))
    .addChild((new autoclass.HAnimHumanoid("hanim_humanoid")).setName("humanoid").setVersion("1.0")
      .addComments(" original HAnimHumanoid info='\"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org\" \"authorName=Matthew T. Beitler\" \"copyright=Copyright 1999 Matthew T. Beitler\" \"humanoidVersion=JointCenters 1.1 LOA1\" \"usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.\"' ")
      .addChild((new autoclass.MetadataSet()).setName("HAnimHumanoid.info").setReference(this.MetadataSet_HAnimHumanoid.info_4_29_reference)
        .addValue((new autoclass.MetadataString()).setName("authorEmail").setValue(new autoclass.MFString("\"beitler@graphics.cis.upenn.edu beitler@acm.org\"")))
        .addValue((new autoclass.MetadataString()).setName("authorName").setValue(new autoclass.MFString("\"Matthew T. Beitler\"")))
        .addValue((new autoclass.MetadataString()).setName("copyright").setValue(new autoclass.MFString("\"Copyright 1999 Matthew T. Beitler\"")))
        .addValue((new autoclass.MetadataString()).setName("humanoidVersion").setValue(new autoclass.MFString("\"JointCenters 1.1 LOA1\"")))
        .addValue((new autoclass.MetadataString()).setName("usageRestrictions").setValue(this.MetadataString_usageRestrictions_5_33_value)))
      .addSkeleton((new autoclass.HAnimJoint("hanim_HumanoidRoot")).setName("HumanoidRoot").setCenter(0.0,0.8240,0.0277).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
        .addChild((new autoclass.HAnimJoint("hanim_sacroiliac")).setName("sacroiliac").setCenter(0.0,0.9149,0.0016).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
          .addChild((new autoclass.HAnimSegment("hanim_pelvis")).setName("pelvis")
            .addChild((new autoclass.Transform()).setTranslation(0.0,0.9149,0.0016)
              .addChild((new autoclass.Shape("DiamondShape"))
                .setGeometry((new autoclass.IndexedFaceSet()).setCreaseAngle(0.5).setCoordIndex(java.newArray("int", [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]))
                  .setCoord((new autoclass.Coordinate("points")).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0])))))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.0))))))
          .addChild((new autoclass.HAnimJoint("hanim_l_hip")).setName("l_hip").setCenter(0.0961,0.9124,-0.0001).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
            .addChild((new autoclass.HAnimSegment("hanim_l_thigh")).setName("l_thigh")
              .addChild((new autoclass.Transform()).setTranslation(0.0961,0.9124,-0.0001)
                .addChild((new autoclass.Shape())))
              .addChild((new autoclass.HAnimSite("hanim_l_knee_crease_pt")).setName("l_knee_crease_pt").setTranslation(0.0993,0.4881,-0.0309))
              .addChild((new autoclass.HAnimSite("hanim_l_femoral_lateral_epicn_pt")).setName("l_femoral_lateral_epicn_pt").setTranslation(0.1598,0.4967,0.0297))
              .addChild((new autoclass.HAnimSite("hanim_l_femoral_medial_epicn_pt")).setName("l_femoral_medial_epicn_pt").setTranslation(0.0398,0.4946,0.0303)))
            .addChild((new autoclass.HAnimJoint("hanim_l_knee")).setName("l_knee").setCenter(0.1040,0.4867,0.0308).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addChild((new autoclass.HAnimSegment("hanim_l_calf")).setName("l_calf")
                .addChild((new autoclass.Transform()).setTranslation(0.1040,0.4867,0.0308)
                  .addChild((new autoclass.Shape()))))
              .addChild((new autoclass.HAnimJoint("hanim_l_ankle")).setName("l_ankle").setCenter(0.1101,0.0656,-0.0736).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.HAnimSegment("hanim_l_hindfoot")).setName("l_hindfoot")
                  .addChild((new autoclass.Transform()).setTranslation(0.1101,0.0656,-0.0736)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.HAnimSite("hanim_l_lateral_malleolus_pt")).setName("l_lateral_malleolus_pt").setTranslation(0.1308,0.0597,-0.1032))
                  .addChild((new autoclass.HAnimSite("hanim_l_medial_malleolus_pt")).setName("l_medial_malleolus_pt").setTranslation(0.0890,0.0716,-0.0881))
                  .addChild((new autoclass.HAnimSite("hanim_l_sphyrion_pt")).setName("l_sphyrion_pt").setTranslation(0.0890,0.0575,-0.0943))
                  .addChild((new autoclass.HAnimSite("hanim_l_calcaneous_post_pt")).setName("l_calcaneous_post_pt").setTranslation(0.0974,0.0259,-0.1171)))
                .addChild((new autoclass.HAnimJoint("hanim_l_midtarsal")).setName("l_midtarsal").setCenter(0.1086,0.0001,0.0368).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.HAnimSegment("hanim_l_middistal")).setName("l_middistal")
                    .addChild((new autoclass.HAnimSite("hanim_l_middistal_tip")).setName("l_middistal_tip").setTranslation(0.1354,0.0016,0.1476))
                    .addChild((new autoclass.HAnimSite("hanim_l_metatarsal_pha5_pt")).setName("l_metatarsal_pha5_pt").setTranslation(0.1825,0.0070,0.0928))
                    .addChild((new autoclass.HAnimSite("hanim_l_metatarsal_pha1_pt")).setName("l_metatarsal_pha1_pt").setTranslation(0.0816,0.0232,0.0106))
                    .addChild((new autoclass.HAnimSite("hanim_l_digit2_pt")).setName("l_digit2_pt").setTranslation(0.1195,0.0079,0.1433)))))))
          .addChild((new autoclass.HAnimJoint("hanim_r_hip")).setName("r_hip").setCenter(-0.0950,0.9171,0.0029).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
            .addChild((new autoclass.HAnimSegment("hanim_r_thigh")).setName("r_thigh")
              .addChild((new autoclass.Transform()).setTranslation(-0.0950,0.9171,0.0029)
                .addChild((new autoclass.Shape())))
              .addChild((new autoclass.HAnimSite("hanim_r_knee_crease_pt")).setName("r_knee_crease_pt").setTranslation(-0.0825,0.4932,-0.0326))
              .addChild((new autoclass.HAnimSite("hanim_r_femoral_lateral_epicn_pt")).setName("r_femoral_lateral_epicn_pt").setTranslation(-0.1421,0.4992,0.0310))
              .addChild((new autoclass.HAnimSite("hanim_r_femoral_medial_epicn_pt")).setName("r_femoral_medial_epicn_pt").setTranslation(-0.0221,0.5014,0.0289)))
            .addChild((new autoclass.HAnimJoint("hanim_r_knee")).setName("r_knee").setCenter(-0.0867,0.4913,0.0318).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addChild((new autoclass.HAnimSegment("hanim_r_calf")).setName("r_calf")
                .addChild((new autoclass.Transform()).setTranslation(-0.0867,0.4913,0.0318)
                  .addChild((new autoclass.Shape()))))
              .addChild((new autoclass.HAnimJoint("hanim_r_ankle")).setName("r_ankle").setCenter(-0.0801,0.0712,-0.0766).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.HAnimSegment("hanim_r_hindfoot")).setName("r_hindfoot")
                  .addChild((new autoclass.Transform()).setTranslation(-0.0801,0.0712,-0.0766)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.HAnimSite("hanim_r_lateral_malleolus_pt")).setName("r_lateral_malleolus_pt").setTranslation(-0.1006,0.0658,-0.1075))
                  .addChild((new autoclass.HAnimSite("hanim_r_medial_malleolus_pt")).setName("r_medial_malleolus_pt").setTranslation(-0.0591,0.0760,-0.0928))
                  .addChild((new autoclass.HAnimSite("hanim_r_sphyrion_pt")).setName("r_sphyrion_pt").setTranslation(-0.0603,0.0610,-0.1002))
                  .addChild((new autoclass.HAnimSite("hanim_r_calcaneous_post_pt")).setName("r_calcaneous_post_pt").setTranslation(-0.0692,0.0297,-0.1221)))
                .addChild((new autoclass.HAnimJoint("hanim_r_midtarsal")).setName("r_midtarsal").setCenter(-0.0801,0.0,0.0368).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.HAnimSegment("hanim_r_middistal")).setName("r_middistal")
                    .addChild((new autoclass.HAnimSite("hanim_r_middistal_tip")).setName("r_middistal_tip").setTranslation(-0.1043,-0.0227,0.1450))
                    .addChild((new autoclass.HAnimSite("hanim_r_metatarsal_pha5_pt")).setName("r_metatarsal_pha5_pt").setTranslation(-0.1523,0.0166,0.0895))
                    .addChild((new autoclass.HAnimSite("hanim_r_metatarsal_pha1_pt")).setName("r_metatarsal_pha1_pt").setTranslation(-0.0521,0.0260,0.0127))
                    .addChild((new autoclass.HAnimSite("hanim_r_digit2_pt")).setName("r_digit2_pt").setTranslation(-0.0883,0.0134,0.1383))))))))
        .addChild((new autoclass.HAnimJoint("hanim_vl1")).setName("vl1").setCenter(-0.00405,1.07,-0.0275).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
          .addChild((new autoclass.HAnimSegment("hanim_l1")).setName("l1"))
          .addChild((new autoclass.HAnimJoint("hanim_l_shoulder")).setName("l_shoulder").setCenter(0.2029,1.4376,-0.0387).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
            .addChild((new autoclass.HAnimSegment("hanim_l_upperarm")).setName("l_upperarm")
              .addChild((new autoclass.Transform()).setTranslation(0.2029,1.4376,-0.0387)
                .addChild((new autoclass.Shape())))
              .addChild((new autoclass.Transform("l_upperarm_adjust")).setCenter(0.182,1.22,-0.047).setRotation(1.0,0.0,0.0,0.119).setTranslation(0.2029,1.4376,-0.0387))
              .addChild((new autoclass.HAnimSite("hanim_l_humeral_lateral_epicn_pt")).setName("l_humeral_lateral_epicn_pt").setTranslation(0.2280,1.1482,-0.1100)))
            .addChild((new autoclass.HAnimJoint("hanim_l_elbow")).setName("l_elbow").setCenter(0.2014,1.1357,-0.0682).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addChild((new autoclass.HAnimSegment("hanim_l_forearm")).setName("l_forearm")
                .addChild((new autoclass.Transform()).setTranslation(0.2014,1.1357,-0.0682)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.Transform("l_forearm_adjust")).setCenter(0.198,0.961,-0.0405).setRotation(-1.0,0.0,0.0,0.1).setTranslation(0.2014,1.1357,-0.0682))
                .addChild((new autoclass.HAnimSite("hanim_l_radial_styloid_pt")).setName("l_radial_styloid_pt").setTranslation(0.1901,0.8645,-0.0415))
                .addChild((new autoclass.HAnimSite("hanim_l_olecranon_pt")).setName("l_olecranon_pt").setTranslation(-0.1962,1.1375,-0.1123))
                .addChild((new autoclass.HAnimSite("hanim_l_humeral_medial_epicn_pt")).setName("l_humeral_medial_epicn_pt").setTranslation(0.1735,1.1272,-0.1113))
                .addChild((new autoclass.HAnimSite("hanim_l_radiale_pt")).setName("l_radiale_pt").setTranslation(0.2182,1.1212,-0.1167)))
              .addChild((new autoclass.HAnimJoint("hanim_l_wrist")).setName("l_wrist").setCenter(0.1984,0.8663,-0.0583).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.HAnimSegment("hanim_l_hand")).setName("l_hand")
                  .addChild((new autoclass.Transform()).setTranslation(0.1984,0.8663,-0.0583)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.Transform("l_hand_adjust")).setCenter(0.213,0.811,-0.0338).setRotation(-0.06361,-0.9967,0.04988,1.333).setTranslation(0.1984,0.8663,-0.0583))
                  .addChild((new autoclass.HAnimSite("hanim_l_hand_tip")).setName("l_hand_tip").setTranslation(0.2080,0.6731,-0.0491))
                  .addChild((new autoclass.HAnimSite("hanim_l_metacarpal_pha2_pt")).setName("l_metacarpal_pha2_pt").setTranslation(0.2009,0.8139,-0.0237))
                  .addChild((new autoclass.HAnimSite("hanim_l_dactylion_pt")).setName("l_dactylion_pt").setTranslation(0.2056,0.6743,-0.0482))
                  .addChild((new autoclass.HAnimSite("hanim_l_ulnar_styloid_pt")).setName("l_ulnar_styloid_pt").setTranslation(-0.2142,0.8529,-0.0648))
                  .addChild((new autoclass.HAnimSite("hanim_l_metacarpal_pha5_pt")).setName("l_metacarpal_pha5_pt").setTranslation(0.1929,0.7860,-0.1122))))))
          .addChild((new autoclass.HAnimJoint("hanim_r_shoulder")).setName("r_shoulder").setCenter(-0.1907,1.4407,-0.0325).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
            .addChild((new autoclass.HAnimSegment("hanim_r_upperarm")).setName("r_upperarm")
              .addChild((new autoclass.Transform()).setTranslation(-0.1907,1.4407,-0.0325)
                .addChild((new autoclass.Shape())))
              .addChild((new autoclass.Transform("r_upperarm_adjust")).setCenter(-0.182,1.22,-0.047).setRotation(1.0,0.0,0.0,0.0836).setTranslation(-0.1907,1.4407,-0.0325))
              .addChild((new autoclass.HAnimSite("hanim_r_humeral_lateral_epicn_pt")).setName("r_humeral_lateral_epicn_pt").setTranslation(-0.2224,1.1517,-0.1033)))
            .addChild((new autoclass.HAnimJoint("hanim_r_elbow")).setName("r_elbow").setCenter(-0.1949,1.1388,-0.0620).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addChild((new autoclass.HAnimSegment("hanim_r_forearm")).setName("r_forearm")
                .addChild((new autoclass.Transform()).setTranslation(-0.1949,1.1388,-0.0620)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.Transform("r_forearm_adjust")).setCenter(-0.198,0.961,-0.0397).setRotation(-1.0,0.0,0.0,0.1254).setTranslation(-0.1949,1.1388,-0.0620))
                .addChild((new autoclass.HAnimSite("hanim_r_radial_styloid_pt")).setName("r_radial_styloid_pt").setTranslation(-0.1884,0.8676,-0.0360))
                .addChild((new autoclass.HAnimSite("hanim_r_olecranon_pt")).setName("r_olecranon_pt").setTranslation(-0.1907,1.1405,-0.1065))
                .addChild((new autoclass.HAnimSite("hanim_r_humeral_medial_epicn_pt")).setName("r_humeral_medial_epicn_pt").setTranslation(-0.1680,1.1298,-0.1062))
                .addChild((new autoclass.HAnimSite("hanim_r_radiale_pt")).setName("r_radiale_pt").setTranslation(-0.2130,1.1305,-0.1091)))
              .addChild((new autoclass.HAnimJoint("hanim_r_wrist")).setName("r_wrist").setCenter(-0.1959,0.8694,-0.0521).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.HAnimSegment("hanim_r_hand")).setName("r_hand")
                  .addChild((new autoclass.Transform()).setTranslation(-0.1959,0.8694,-0.0521)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.Transform("r_hand_adjust")).setCenter(-0.217,0.811,-0.0338).setRotation(-0.09024,0.994,-0.0624,1.216))
                  .addChild((new autoclass.HAnimSite("hanim_r_hand_tip")).setName("r_hand_tip").setTranslation(-0.1969,0.6758,-0.0427))
                  .addChild((new autoclass.HAnimSite("hanim_r_metacarpal_pha2_pt")).setName("r_metacarpal_pha2_pt").setTranslation(-0.1977,0.8169,-0.0177))
                  .addChild((new autoclass.HAnimSite("hanim_r_dactylion_pt")).setName("r_dactylion_pt").setTranslation(-0.1941,0.6772,-0.0423))
                  .addChild((new autoclass.HAnimSite("hanim_r_ulnar_styloid_pt")).setName("r_ulnar_styloid_pt").setTranslation(-0.2117,0.8562,-0.0584))
                  .addChild((new autoclass.HAnimSite("hanim_r_metacarpal_pha5_pt")).setName("r_metacarpal_pha5_pt").setTranslation(-0.1929,0.7890,-0.1064))))))
          .addChild((new autoclass.HAnimJoint("hanim_vc4")).setName("vc4").setCenter(0.0,1.43,-0.0458).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
            .addChild((new autoclass.HAnimSegment("hanim_c4")).setName("c4"))))
        .addChild((new autoclass.HAnimJoint("hanim_vl5")).setName("vl5").setCenter(0.0028,1.0568,-0.0776).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
          .addChild((new autoclass.HAnimJoint("hanim_skullbase")).setName("skullbase").setCenter(0.0044,1.6209,0.0236).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
            .addChild((new autoclass.HAnimSegment("hanim_skull")).setName("skull")
              .addChild((new autoclass.Transform()).setTranslation(0.0044,1.6209,0.0236)
                .addChild((new autoclass.Shape())))
              .addChild((new autoclass.HAnimSite("hanim_skull_tip")).setName("skull_tip").setTranslation(0.0050,1.7504,0.0055))
              .addChild((new autoclass.HAnimSite("hanim_sellion_pt")).setName("sellion_pt").setTranslation(0.0058,1.6316,0.0852))
              .addChild((new autoclass.HAnimSite("hanim_r_infraorbitale_pt")).setName("r_infraorbitale_pt").setTranslation(-0.0237,1.6171,0.0752))
              .addChild((new autoclass.HAnimSite("hanim_l_infraorbitale_pt")).setName("l_infraorbitale_pt").setTranslation(0.0341,1.6171,0.0752))
              .addChild((new autoclass.HAnimSite("hanim_supramenton_pt")).setName("supramenton_pt").setTranslation(0.0061,1.5410,0.0805))
              .addChild((new autoclass.HAnimSite("hanim_r_tragion_pt")).setName("r_tragion_pt").setTranslation(-0.0646,1.6347,0.0302))
              .addChild((new autoclass.HAnimSite("hanim_r_gonion_pt")).setName("r_gonion_pt").setTranslation(-0.0520,1.5529,0.0347))
              .addChild((new autoclass.HAnimSite("hanim_l_tragion_pt")).setName("l_tragion_pt").setTranslation(0.0739,1.6348,0.0282))
              .addChild((new autoclass.HAnimSite("hanim_l_gonion_pt")).setName("l_gonion_pt").setTranslation(0.0631,1.5530,0.0330))
              .addChild((new autoclass.HAnimSite("hanim_nuchale_pt")).setName("nuchale_pt").setTranslation(0.0039,1.5972,-0.0796))))))
      .addViewpoints((new autoclass.HAnimSite("hanim_DiamondManLOA_1_view")).setName("DiamondManLOA_1_view")
        .addChild((new autoclass.Viewpoint("InclinedView")).setDescription("Inclined View").setOrientation(-0.113,0.993,0.0347,0.671).setPosition(1.62,1.05,2.06))
        .addChild((new autoclass.Viewpoint("FrontView")).setDescription("Front View").setPosition(0.0,0.854,2.57665))
        .addChild((new autoclass.Viewpoint("SideView")).setDescription("Side View").setOrientation(0.0,1.0,0.0,1.57079).setPosition(2.5929,0.854,0.0))
        .addChild((new autoclass.Viewpoint("TopView")).setDescription("Top View").setOrientation(1.0,0.0,0.0,-1.57079).setPosition(0.0,3.4495,0.0)))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))
      .addSites((new autoclass.HAnimSite()))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return DiamondManLOA_1 model
   */
  getX3dModel : function()
  {	  
	  return this.x3dModel;
  },
  
  /** Indicate X3DJSAIL validation results for this X3D model.
   * @return validation results plus exception information, if any
   */
  validateSelf : function()
  {
	var validationResult = "";
	var  exceptionResult = "";
	try
	{
		this.initialize();
		
		if ((this.getX3dModel() == null) || (this.getX3dModel().getHead() == null))
		{
			validationResult = "empty scene, nothing to validate. " + this.x3dModel.validate();
			return validationResult;
		}
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = "";
		if  (exceptionResult !== "" && validationResult !== "")
			returnMessage += "\n*** ";
		returnMessage += exceptionResult;
		if  (exceptionResult === "" && validationResult !== "")
			returnMessage = "\n" + returnMessage; // skip line before meta tags, etc.
		returnMessage += validationResult;
		return returnMessage;
	}
  },
    /** Default main() method provided for test purposes.
     * @param argv input parameters
     */
    main : function (argv)
    {
		var testObject = new DiamondManLOA_1();
		console.log ("DiamondManLOA_1 execution self-validation test results: " + testObject.validateSelf());
	}
}
new DiamondManLOA_1().main();