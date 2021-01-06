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
 * <p> HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template. </p>
 <p> Related links: NeedClassName.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.NeedClassName&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnimSpecificationLOA3Invisible.x3d">HAnimSpecificationLOA3Invisible.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds" target="_blank">https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 24 April 2013 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 12 July 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Matthew T. Beitler, Joe D. Williams, Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnimSpecificationLOA3Illustrated.x3d">HAnimSpecificationLOA3Illustrated.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnimSpecificationLOA3Motion.x3d">HAnimSpecificationLOA3Motion.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HAnimSpecificationExampleChangeLog.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/images/BonesAllSkeletonFrontViewLOA1.png">images/BonesAllSkeletonFrontViewLOA1.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/images/BonesAllSkeletonFrontViewLOA2.png">images/BonesAllSkeletonFrontViewLOA2.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/images/BonesAllSkeletonFrontViewLOA3.png">images/BonesAllSkeletonFrontViewLOA3.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> insert MetadataInteger nodes indicating LOA for each Joint and Segment </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.cis.upenn.edu/~badler/anthro/89-71.ps" target="_blank">http://www.cis.upenn.edu/~badler/anthro/89-71.ps</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf">tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman and Joe Williams </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> BS Contact Geo 8.001, <a href="http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo" target="_blank">http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> originals/LOA3ExampleSourceWithDiamondsOriginal.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/originals/LOA3ExampleSourceWithDiamondsOriginal.x3d">originals/LOA3ExampleSourceWithDiamondsOriginal.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d">originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HAnim Specification Table 4.4 - Face Joint object names, <a href="https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames" target="_blank">https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnimSpecificationLOA3Invisible.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnimSpecificationLOA3Invisible.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/../license.html">../license.html</a> </td>
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

	* @author Matthew T. Beitler, Joe D. Williams, Don Brutzman
 */

function NeedClassName
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
NeedClassName.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: WorldInfo info field, scene-graph level=4, element #31, 93 total values */
	this.WorldInfo_4_31_info = new autoclass.MFString(new autoclass.MFString("\" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps \""));

	/** Large attribute array: MetadataSet reference field, scene-graph level=4, element #42, 1 total value */
	this.MetadataSet_HAnimHumanoid.info_4_42_reference = new autoclass.SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("HAnim").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("HAnimSpecificationLOA3Invisible.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template."))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds"))
    .addMeta((new autoclass.meta()).setName("created").setContent("24 April 2013"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("12 July 2020"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Matthew T. Beitler, Joe D. Williams, Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HAnimSpecificationLOA3Illustrated.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HAnimSpecificationLOA3Motion.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HAnimSpecificationExampleChangeLog.txt"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA1.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA2.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA3.png"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("insert MetadataInteger nodes indicating LOA for each Joint and Segment"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989."))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Don Brutzman and Joe Williams"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnimSpecificationLOA3Invisible.x3d"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.3,0.3,0.3]))))
    .addChild((new autoclass.NavigationInfo()))
    .addChild((new autoclass.Group("Original_WorldInfo"))
      .addChild((new autoclass.WorldInfo()).setInfo(this.WorldInfo_4_31_info).setTitle("HANIM 200x Default Joint Centers, LOA3")))
    .addComments(" TODO move viewpoints to be internal to HAnimHumanoid ")
    .addComments(" Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human. ")
    .addChild((new autoclass.Viewpoint()).setDescription("Humanoid LOA 3 Front").setPosition(0.0,0.4,4.0).setCenterOfRotation(0.0,0.9149,0.0016))
    .addChild((new autoclass.Viewpoint()).setDescription("Humanoid LOA 3 Front Close").setPosition(0.0,0.8,2.0).setCenterOfRotation(0.0,0.9149,0.0016))
    .addChild((new autoclass.Viewpoint()).setDescription("Humanoid LOA 3 Front Closer").setCenterOfRotation(0.0,0.9149,0.0016).setPosition(0.0,1.2,1.0))
    .addChild((new autoclass.Viewpoint()).setDescription("Humanoid LOA 3 Front Face").setCenterOfRotation(0.0,1.5,0.0016).setPosition(0.0,1.63,1.0))
    .addChild((new autoclass.Viewpoint()).setDescription("Humanoid LOA 3 Right Side").setCenterOfRotation(0.0,0.9149,0.0016).setOrientation(0.0,1.0,0.0,1.5708).setPosition(2.6,0.8,0.0))
    .addChild((new autoclass.Viewpoint()).setDescription("Humanoid LOA 3 Right Side Close").setCenterOfRotation(0.0,0.9149,0.0016).setOrientation(0.0,1.0,0.0,1.2).setPosition(1.0,0.8,0.5))
    .addChild((new autoclass.Viewpoint()).setDescription("Humanoid LOA 3 Left Side Close").setPosition(-1.0,0.8,0.5).setCenterOfRotation(0.0,0.9149,0.0016).setOrientation(0.0,1.0,0.0,-1.2))
    .addChild((new autoclass.Viewpoint()).setDescription("Humanoid LOA 3 Left Side").setPosition(-2.6,0.8,0.0).setCenterOfRotation(0.0,0.9149,0.0016).setOrientation(0.0,1.0,0.0,-1.5708))
    .addChild((new autoclass.Viewpoint()).setDescription("Humanoid LOA 3 Top").setCenterOfRotation(0.0,0.9149,0.0016).setPosition(0.0,3.5,0.0).setOrientation(1.0,0.0,0.0,-1.5708))
    .addChild((new autoclass.HAnimHumanoid("hanim_humanoid")).setName("humanoid").setVersion("2.0")
      .addComments(" HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"' ")
      .addChild((new autoclass.MetadataSet()).setName("HAnimHumanoid.info").setReference(this.MetadataSet_HAnimHumanoid.info_4_42_reference)
        .setMetadata((new autoclass.MetadataString()).setName("authorName").setValue(new autoclass.MFString("\"Matthew T. Beitler Joe D. Williams Don Brutzman\"")))
        .setMetadata((new autoclass.MetadataString()).setName("authorEmail").setValue(new autoclass.MFString("\"HAnim@web3D.org\"")))
        .setMetadata((new autoclass.MetadataString()).setName("copyright").setValue(new autoclass.MFString("\"none\"")))
        .setMetadata((new autoclass.MetadataString()).setName("creationDate").setValue(new autoclass.MFString("\"12 May 1999\"")))
        .setMetadata((new autoclass.MetadataString()).setName("height").setValue(new autoclass.MFString("\"1.7504\"")))
        .setMetadata((new autoclass.MetadataString()).setName("humanoidVersion").setValue(new autoclass.MFString("\"2.0\"")))
        .setMetadata((new autoclass.MetadataString()).setName("usageRestrictions").setValue(new autoclass.MFString("\"none\""))))
      .addComments(" Only one root HAnimJoint is expected ")
      .addSkeleton((new autoclass.HAnimJoint("hanim_humanoid_root")).setName("humanoid_root").setCenter(0.0,0.824,0.0277)
        .addChild((new autoclass.HAnimSegment("hanim_sacrum")).setName("sacrum"))
        .addChild((new autoclass.HAnimJoint("hanim_sacroiliac")).setName("sacroiliac").setCenter(0.0,0.9149,0.0016)
          .addChild((new autoclass.HAnimSegment("hanim_pelvis")).setName("pelvis")
            .addChild((new autoclass.HAnimSite("hanim_r_iliocristale_pt")).setName("r_iliocristale_pt").setTranslation(-0.1525,1.0628,0.0035))
            .addChild((new autoclass.HAnimSite("hanim_r_trochanterion_pt")).setName("r_trochanterion_pt").setTranslation(-0.1689,0.8419,0.0352))
            .addChild((new autoclass.HAnimSite("hanim_l_iliocristale_pt")).setName("l_iliocristale_pt").setTranslation(0.1612,1.0537,0.0008))
            .addChild((new autoclass.HAnimSite("hanim_l_trochanterion_pt")).setName("l_trochanterion_pt").setTranslation(0.1677,0.8336,0.0303))
            .addChild((new autoclass.HAnimSite("hanim_r_asis_pt")).setName("r_asis_pt").setTranslation(-0.0887,1.0021,0.1112))
            .addChild((new autoclass.HAnimSite("hanim_l_asis_pt")).setName("l_asis_pt").setTranslation(0.0925,0.9983,0.1052))
            .addChild((new autoclass.HAnimSite("hanim_r_psis_pt")).setName("r_psis_pt").setTranslation(-0.0716,1.019,-0.1138))
            .addChild((new autoclass.HAnimSite("hanim_l_psis_pt")).setName("l_psis_pt").setTranslation(0.0774,1.019,-0.1151))
            .addChild((new autoclass.HAnimSite("hanim_crotch_pt")).setName("crotch_pt").setTranslation(0.0034,0.8266,0.0257)))
          .addChild((new autoclass.HAnimJoint("hanim_l_hip")).setName("l_hip").setCenter(0.0961,0.9124,-0.0001)
            .addChild((new autoclass.HAnimSegment("hanim_l_thigh")).setName("l_thigh")
              .addChild((new autoclass.HAnimSite("hanim_l_knee_crease_pt")).setName("l_knee_crease_pt").setTranslation(0.0993,0.4881,-0.0309))
              .addChild((new autoclass.HAnimSite("hanim_l_femoral_lateral_epicn_pt")).setName("l_femoral_lateral_epicn_pt").setTranslation(0.1598,0.4967,0.0297))
              .addChild((new autoclass.HAnimSite("hanim_l_femoral_medial_epicn_pt")).setName("l_femoral_medial_epicn_pt").setTranslation(0.0398,0.4946,0.0303)))
            .addChild((new autoclass.HAnimJoint("hanim_l_knee")).setName("l_knee").setCenter(0.104,0.4867,0.0308)
              .addChild((new autoclass.HAnimSegment("hanim_l_calf")).setName("l_calf"))
              .addChild((new autoclass.HAnimJoint("hanim_l_talocrural")).setName("l_talocrural").setCenter(0.1101,0.0656,-0.0736)
                .addChild((new autoclass.HAnimSegment("hanim_l_talus")).setName("l_talus")
                  .addChild((new autoclass.HAnimSite("hanim_l_lateral_malleolus_pt")).setName("l_lateral_malleolus_pt").setTranslation(0.1308,0.0597,-0.1032))
                  .addChild((new autoclass.HAnimSite("hanim_l_medial_malleolus_pt")).setName("l_medial_malleolus_pt").setTranslation(0.089,0.0716,-0.0881))
                  .addChild((new autoclass.HAnimSite("hanim_l_sphyrion_pt")).setName("l_sphyrion_pt").setTranslation(0.089,0.0575,-0.0943))
                  .addChild((new autoclass.HAnimSite("hanim_l_calcaneous_post_pt")).setName("l_calcaneous_post_pt").setTranslation(0.0974,0.0259,-0.1171)))
                .addChild((new autoclass.HAnimJoint("hanim_l_tarsometatarsal_2")).setName("l_tarsometatarsal_2").setCenter(0.1086,0.0001,-0.0368)
                  .addChild((new autoclass.HAnimSegment("hanim_l_metatarsal_2")).setName("l_metatarsal_2"))
                  .addChild((new autoclass.HAnimJoint("hanim_l_metatarsophalangeal_2")).setName("l_metatarsophalangeal_2").setCenter(0.1086,0.0001,0.0368)
                    .addChild((new autoclass.HAnimSegment("hanim_l_tarsal_proximal_phalanx_2")).setName("l_tarsal_proximal_phalanx_2")
                      .addChild((new autoclass.HAnimSite("hanim_l_metatarsal_pha1_pt")).setName("l_metatarsal_pha1_pt").setTranslation(0.0816,0.0232,0.0106)))
                    .addChild((new autoclass.HAnimJoint("hanim_l_tarsal_distal_interphalangeal_2")).setName("l_tarsal_distal_interphalangeal_2").setCenter(0.1086,0.0,0.0762)
                      .addChild((new autoclass.HAnimSegment("hanim_l_tarsal_distal_phalanx_2")).setName("l_tarsal_distal_phalanx_2")
                        .addChild((new autoclass.HAnimSite("hanim_l_forefoot_tip")).setName("l_forefoot_tip").setTranslation(0.1354,0.0016,0.1476))
                        .addChild((new autoclass.HAnimSite("hanim_l_metatarsal_pha5_pt")).setName("l_metatarsal_pha5_pt").setTranslation(0.1825,0.007,0.0928))
                        .addChild((new autoclass.HAnimSite("hanim_l_digit2_pt")).setName("l_digit2_pt").setTranslation(0.1195,0.0079,0.1433)))))))))
          .addChild((new autoclass.HAnimJoint("hanim_r_hip")).setName("r_hip").setCenter(-0.0961,0.9124,-0.0001)
            .addChild((new autoclass.HAnimSegment("hanim_r_thigh")).setName("r_thigh")
              .addChild((new autoclass.HAnimSite("hanim_r_knee_crease_pt")).setName("r_knee_crease_pt").setTranslation(-0.0825,0.4932,-0.0326))
              .addChild((new autoclass.HAnimSite("hanim_r_femoral_lateral_epicn_pt")).setName("r_femoral_lateral_epicn_pt").setTranslation(-0.1421,0.4992,0.031))
              .addChild((new autoclass.HAnimSite("hanim_r_femoral_medial_epicn_pt")).setName("r_femoral_medial_epicn_pt").setTranslation(-0.0221,0.5014,0.0289)))
            .addChild((new autoclass.HAnimJoint("hanim_r_knee")).setName("r_knee").setCenter(-0.104,0.4867,0.0308)
              .addChild((new autoclass.HAnimSegment("hanim_r_calf")).setName("r_calf"))
              .addChild((new autoclass.HAnimJoint("hanim_r_talocrural")).setName("r_talocrural").setCenter(-0.1101,0.0656,-0.0736)
                .addChild((new autoclass.HAnimSegment("hanim_r_talus")).setName("r_talus")
                  .addChild((new autoclass.HAnimSite("hanim_r_lateral_malleolus_pt")).setName("r_lateral_malleolus_pt").setTranslation(-0.1006,0.0658,-0.1075))
                  .addChild((new autoclass.HAnimSite("hanim_r_medial_malleolus_pt")).setName("r_medial_malleolus_pt").setTranslation(-0.0591,0.076,-0.0928))
                  .addChild((new autoclass.HAnimSite("hanim_r_sphyrion_pt")).setName("r_sphyrion_pt").setTranslation(-0.0603,0.061,-0.1002))
                  .addChild((new autoclass.HAnimSite("hanim_r_calcaneous_post_pt")).setName("r_calcaneous_post_pt").setTranslation(-0.0692,0.0297,-0.1221)))
                .addChild((new autoclass.HAnimJoint("hanim_r_tarsometatarsal_2")).setName("r_tarsometatarsal_2").setCenter(-0.1086,0.0001,-0.0368)
                  .addChild((new autoclass.HAnimSegment("hanim_r_metatarsal_2")).setName("r_metatarsal_2"))
                  .addChild((new autoclass.HAnimJoint("hanim_r_metatarsophalangeal_2")).setName("r_metatarsophalangeal_2").setCenter(-0.1086,0.0001,0.0368)
                    .addChild((new autoclass.HAnimSegment("hanim_r_tarsal_proximal_phalanx_2")).setName("r_tarsal_proximal_phalanx_2")
                      .addChild((new autoclass.HAnimSite("hanim_r_metatarsal_pha1_pt")).setName("r_metatarsal_pha1_pt").setTranslation(-0.0521,0.026,0.0127)))
                    .addChild((new autoclass.HAnimJoint("hanim_r_tarsal_distal_interphalangeal_2")).setName("r_tarsal_distal_interphalangeal_2").setCenter(-0.1086,0.0,0.0762)
                      .addChild((new autoclass.HAnimSegment("hanim_r_tarsal_distal_phalanx_2")).setName("r_tarsal_distal_phalanx_2")
                        .addChild((new autoclass.HAnimSite("hanim_r_forefoot_tip")).setName("r_forefoot_tip").setTranslation(-0.1043,0.0227,0.145))
                        .addChild((new autoclass.HAnimSite("hanim_r_metatarsal_pha5_pt")).setName("r_metatarsal_pha5_pt").setTranslation(-0.1523,0.0166,0.0895))
                        .addChild((new autoclass.HAnimSite("hanim_r_digit2_pt")).setName("r_digit2_pt").setTranslation(-0.0883,0.0134,0.1383))))))))))
        .addChild((new autoclass.HAnimJoint("hanim_vl5")).setName("vl5").setCenter(0.0028,1.0568,-0.0776)
          .addChild((new autoclass.HAnimSegment("hanim_l5")).setName("l5")
            .addChild((new autoclass.HAnimSite("hanim_waist_preferred_post_pt")).setName("waist_preferred_post_pt").setTranslation(0.0,1.0915,-0.1091))
            .addChild((new autoclass.HAnimSite("hanim_navel_pt")).setName("navel_pt").setTranslation(0.0069,1.0966,0.1017)))
          .addChild((new autoclass.HAnimJoint("hanim_vl4")).setName("vl4").setCenter(0.0035,1.0925,-0.0787)
            .addChild((new autoclass.HAnimSegment("hanim_l4")).setName("l4"))
            .addChild((new autoclass.HAnimJoint("hanim_vl3")).setName("vl3").setCenter(0.0041,1.1276,-0.0796)
              .addChild((new autoclass.HAnimSegment("hanim_l3")).setName("l3"))
              .addChild((new autoclass.HAnimJoint("hanim_vl2")).setName("vl2").setCenter(0.0045,1.1546,-0.08)
                .addChild((new autoclass.HAnimSegment("hanim_l2")).setName("l2")
                  .addChild((new autoclass.HAnimSite("hanim_r_rib10_pt")).setName("r_rib10_pt").setTranslation(-0.0711,1.1941,0.1016))
                  .addChild((new autoclass.HAnimSite("hanim_l_rib10_pt")).setName("l_rib10_pt").setTranslation(0.0871,1.1925,0.0992))
                  .addChild((new autoclass.HAnimSite("hanim_rib10_midspine_pt")).setName("rib10_midspine_pt").setTranslation(0.0049,1.1908,-0.1113)))
                .addChild((new autoclass.HAnimJoint("hanim_vl1")).setName("vl1").setCenter(0.0048,1.1912,-0.0805)
                  .addChild((new autoclass.HAnimSegment("hanim_l1")).setName("l1"))
                  .addChild((new autoclass.HAnimJoint("hanim_vt12")).setName("vt12").setCenter(0.0051,1.2278,-0.0808)
                    .addChild((new autoclass.HAnimSegment("hanim_t12")).setName("t12"))
                    .addChild((new autoclass.HAnimJoint("hanim_vt11")).setName("vt11").setCenter(0.0053,1.2679,-0.081)
                      .addChild((new autoclass.HAnimSegment("hanim_t11")).setName("t11"))
                      .addChild((new autoclass.HAnimJoint("hanim_vt10")).setName("vt10").setCenter(0.0056,1.2848,-0.0822)
                        .addChild((new autoclass.HAnimSegment("hanim_t10")).setName("t10")
                          .addChild((new autoclass.HAnimSite("hanim_substernale_pt")).setName("substernale_pt").setTranslation(0.0085,1.2995,0.1147)))
                        .addChild((new autoclass.HAnimJoint("hanim_vt9")).setName("vt9").setCenter(0.0057,1.3126,-0.0838)
                          .addChild((new autoclass.HAnimSegment("hanim_t9")).setName("t9")
                            .addChild((new autoclass.HAnimSite("hanim_r_thelion_pt")).setName("r_thelion_pt").setTranslation(-0.0736,1.3385,0.1217))
                            .addChild((new autoclass.HAnimSite("hanim_l_thelion_pt")).setName("l_thelion_pt").setTranslation(0.0918,1.3382,0.1192)))
                          .addChild((new autoclass.HAnimJoint("hanim_vt8")).setName("vt8").setCenter(0.0057,1.3382,-0.0845)
                            .addChild((new autoclass.HAnimSegment("hanim_t8")).setName("t8"))
                            .addChild((new autoclass.HAnimJoint("hanim_vt7")).setName("vt7").setCenter(0.0058,1.3625,-0.0833)
                              .addChild((new autoclass.HAnimSegment("hanim_t7")).setName("t7"))
                              .addChild((new autoclass.HAnimJoint("hanim_vt6")).setName("vt6").setCenter(0.0059,1.3866,-0.08)
                                .addChild((new autoclass.HAnimSegment("hanim_t6")).setName("t6"))
                                .addChild((new autoclass.HAnimJoint("hanim_vt5")).setName("vt5").setCenter(0.006,1.4102,-0.0745)
                                  .addChild((new autoclass.HAnimSegment("hanim_t5")).setName("t5"))
                                  .addChild((new autoclass.HAnimJoint("hanim_vt4")).setName("vt4").setCenter(0.0061,1.432,-0.0675)
                                    .addChild((new autoclass.HAnimSegment("hanim_t4")).setName("t4"))
                                    .addChild((new autoclass.HAnimJoint("hanim_vt3")).setName("vt3").setCenter(0.0062,1.4583,-0.057)
                                      .addChild((new autoclass.HAnimSegment("hanim_t3")).setName("t3"))
                                      .addChild((new autoclass.HAnimJoint("hanim_vt2")).setName("vt2").setCenter(0.0063,1.4761,-0.0484)
                                        .addChild((new autoclass.HAnimSegment("hanim_t2")).setName("t2"))
                                        .addChild((new autoclass.HAnimJoint("hanim_vt1")).setName("vt1").setCenter(0.0065,1.4951,-0.0387)
                                          .addChild((new autoclass.HAnimSegment("hanim_t1")).setName("t1")
                                            .addChild((new autoclass.HAnimSite("hanim_suprasternale_pt")).setName("suprasternale_pt").setTranslation(0.0084,1.4714,0.0551))
                                            .addChild((new autoclass.HAnimSite("hanim_cervicale_pt")).setName("cervicale_pt").setTranslation(0.0064,1.52,-0.0815)))
                                          .addChild((new autoclass.HAnimJoint("hanim_vc7")).setName("vc7").setCenter(0.0066,1.5132,-0.0301)
                                            .addChild((new autoclass.HAnimSegment("hanim_c7")).setName("c7")
                                              .addChild((new autoclass.HAnimSite("hanim_r_neck_base_pt")).setName("r_neck_base_pt").setTranslation(-0.0419,1.5149,-0.022))
                                              .addChild((new autoclass.HAnimSite("hanim_l_neck_base_pt")).setName("l_neck_base_pt").setTranslation(0.0646,1.5141,-0.038)))
                                            .addChild((new autoclass.HAnimJoint("hanim_vc6")).setName("vc6").setCenter(0.0066,1.5357,-0.0143)
                                              .addChild((new autoclass.HAnimSegment("hanim_c6")).setName("c6"))
                                              .addChild((new autoclass.HAnimJoint("hanim_vc5")).setName("vc5").setCenter(0.0066,1.552,-0.0082)
                                                .addChild((new autoclass.HAnimSegment("hanim_c5")).setName("c5"))
                                                .addChild((new autoclass.HAnimJoint("hanim_vc4")).setName("vc4").setCenter(0.0066,1.5662,-0.0084)
                                                  .addChild((new autoclass.HAnimSegment("hanim_c4")).setName("c4"))
                                                  .addChild((new autoclass.HAnimJoint("hanim_vc3")).setName("vc3").setCenter(0.0066,1.58,-0.0103)
                                                    .addChild((new autoclass.HAnimSegment("hanim_c3")).setName("c3"))
                                                    .addChild((new autoclass.HAnimJoint("hanim_vc2")).setName("vc2").setCenter(0.0066,1.5928,-0.0103)
                                                      .addChild((new autoclass.HAnimSegment("hanim_c2")).setName("c2"))
                                                      .addChild((new autoclass.HAnimJoint("hanim_vc1")).setName("vc1").setCenter(0.0066,1.6144,-0.0034)
                                                        .addChild((new autoclass.HAnimSegment("hanim_c1")).setName("c1"))
                                                        .addChild((new autoclass.HAnimJoint("hanim_skullbase")).setName("skullbase").setCenter(0.0044,1.6209,0.0236)
                                                          .addChild((new autoclass.HAnimSegment("hanim_skull")).setName("skull")
                                                            .addChild((new autoclass.HAnimSite("hanim_skull_tip")).setName("skull_tip").setTranslation(0.005,1.7504,0.0055)
                                                              .addComments(" TODO move skull_tip x to zero, check others for symmetry "))
                                                            .addChild((new autoclass.HAnimSite("hanim_sellion_pt")).setName("sellion_pt").setTranslation(0.0058,1.6316,0.0852))
                                                            .addChild((new autoclass.HAnimSite("hanim_r_infraorbitale_pt")).setName("r_infraorbitale_pt").setTranslation(-0.0237,1.6171,0.0752))
                                                            .addChild((new autoclass.HAnimSite("hanim_l_infraorbitale_pt")).setName("l_infraorbitale_pt").setTranslation(0.0341,1.6171,0.0752))
                                                            .addChild((new autoclass.HAnimSite("hanim_supramenton_pt")).setName("supramenton_pt").setTranslation(0.0061,1.541,0.0805))
                                                            .addChild((new autoclass.HAnimSite("hanim_r_tragion_pt")).setName("r_tragion_pt").setTranslation(-0.0646,1.6347,0.0302))
                                                            .addChild((new autoclass.HAnimSite("hanim_r_gonion_pt")).setName("r_gonion_pt").setTranslation(-0.052,1.5529,0.0347))
                                                            .addChild((new autoclass.HAnimSite("hanim_l_tragion_pt")).setName("l_tragion_pt").setTranslation(0.0739,1.6348,0.0282))
                                                            .addChild((new autoclass.HAnimSite("hanim_l_gonion_pt")).setName("l_gonion_pt").setTranslation(0.0631,1.553,0.033))
                                                            .addChild((new autoclass.HAnimSite("hanim_nuchale_pt")).setName("nuchale_pt").setTranslation(0.0039,1.5972,-0.0796)))
                                                          .addChild((new autoclass.HAnimJoint("hanim_l_eyeball_joint")).setName("l_eyeball_joint").setCenter(0.0336,1.6332,0.0502)
                                                            .addChild((new autoclass.HAnimSegment("hanim_l_eyeball")).setName("l_eyeball")
                                                              .addChild((new autoclass.HAnimSite("hanim_l_eyeball_site_view")).setName("l_eyeball_site_view").setTranslation(0.034,1.64,0.05)
                                                                .addChild((new autoclass.Viewpoint("hanim_l_eyeball_site_viewpoint")).setDescription("l_eyeball_site_viewpoint looking forward").setPosition(0.0,0.0,0.0).setOrientation(0.0,1.0,0.0,3.141593)))))
                                                          .addChild((new autoclass.HAnimJoint("hanim_l_eyelid_joint")).setName("l_eyelid_joint").setCenter(0.0336,1.6332,0.0502)
                                                            .addChild((new autoclass.HAnimSegment("hanim_l_eyelid")).setName("l_eyelid")))
                                                          .addChild((new autoclass.HAnimJoint("hanim_l_eyebrow_joint")).setName("l_eyebrow_joint").setCenter(0.0336,1.635,0.0506)
                                                            .addChild((new autoclass.HAnimSegment("hanim_l_eyebrow")).setName("l_eyebrow")))
                                                          .addChild((new autoclass.HAnimJoint("hanim_r_eyeball_joint")).setName("r_eyeball_joint").setCenter(-0.0336,1.6332,0.0502)
                                                            .addChild((new autoclass.HAnimSegment("hanim_r_eyeball")).setName("r_eyeball")
                                                              .addChild((new autoclass.HAnimSite("hanim_r_eyeball_site_view")).setName("r_eyeball_site_view").setTranslation(-0.034,1.64,0.05)
                                                                .addChild((new autoclass.Viewpoint("hanim_r_eyeball_site_viewpoint")).setDescription("r_eyeball_site_viewpoint looking forward").setPosition(0.0,0.0,0.0).setOrientation(0.0,1.0,0.0,3.141593)))))
                                                          .addChild((new autoclass.HAnimJoint("hanim_r_eyelid_joint")).setName("r_eyelid_joint").setCenter(-0.0336,1.6332,0.0502)
                                                            .addChild((new autoclass.HAnimSegment("hanim_r_eyelid")).setName("r_eyelid")))
                                                          .addChild((new autoclass.HAnimJoint("hanim_r_eyebrow_joint")).setName("r_eyebrow_joint").setCenter(-0.0336,1.635,0.0506)
                                                            .addChild((new autoclass.HAnimSegment("hanim_r_eyebrow")).setName("r_eyebrow")))
                                                          .addChild((new autoclass.HAnimJoint("hanim_temporomandibular")).setName("temporomandibular").setCenter(0.0,1.63,0.015)
                                                            .addComments(" Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint ")
                                                            .addChild((new autoclass.HAnimSegment("hanim_jaw")).setName("jaw")
                                                              .addChild((new autoclass.HAnimSite("hanim_temporomandibular_l_site_pt")).setName("temporomandibular_l_site_pt").setTranslation(0.045,1.63,0.0))
                                                              .addChild((new autoclass.HAnimSite("hanim_temporomandibular_r_site_pt")).setName("temporomandibular_r_site_pt").setTranslation(-0.045,1.63,0.0))))))))))))
                                          .addChild((new autoclass.HAnimJoint("hanim_l_sternoclavicular")).setName("l_sternoclavicular").setCenter(0.082,1.4488,-0.0353)
                                            .addChild((new autoclass.HAnimSegment("hanim_l_clavicle")).setName("l_clavicle")
                                              .addChild((new autoclass.HAnimSite("hanim_l_clavicale_pt")).setName("l_clavicale_pt").setTranslation(0.0271,1.4943,0.0394))
                                              .addChild((new autoclass.HAnimSite("hanim_l_acromion_pt")).setName("l_acromion_pt").setTranslation(0.2032,1.476,-0.049))
                                              .addChild((new autoclass.HAnimSite("hanim_l_axilla_ant_pt")).setName("l_axilla_ant_pt").setTranslation(0.1777,1.4065,-0.0075))
                                              .addChild((new autoclass.HAnimSite("hanim_l_axilla_post_pt")).setName("l_axilla_post_pt").setTranslation(0.1706,1.4072,-0.0875)))
                                            .addChild((new autoclass.HAnimJoint("hanim_l_acromioclavicular")).setName("l_acromioclavicular").setCenter(0.0962,1.4269,-0.0424)
                                              .addChild((new autoclass.HAnimSegment("hanim_l_scapula")).setName("l_scapula"))
                                              .addChild((new autoclass.HAnimJoint("hanim_l_shoulder")).setName("l_shoulder").setCenter(0.2029,1.4376,-0.0387)
                                                .addChild((new autoclass.HAnimSegment("hanim_l_upperarm")).setName("l_upperarm")
                                                  .addChild((new autoclass.HAnimSite("hanim_l_humeral_lateral_epicn_pt")).setName("l_humeral_lateral_epicn_pt").setTranslation(0.228,1.1482,-0.11)))
                                                .addChild((new autoclass.HAnimJoint("hanim_l_elbow")).setName("l_elbow").setCenter(0.2014,1.1357,-0.0682)
                                                  .addChild((new autoclass.HAnimSegment("hanim_l_forearm")).setName("l_forearm")
                                                    .addChild((new autoclass.HAnimSite("hanim_l_radial_styloid_pt")).setName("l_radial_styloid_pt").setTranslation(0.1901,0.8645,-0.0415))
                                                    .addChild((new autoclass.HAnimSite("hanim_l_olecranon_pt")).setName("l_olecranon_pt").setTranslation(0.1962,1.1375,-0.1123))
                                                    .addChild((new autoclass.HAnimSite("hanim_l_humeral_medial_epicn_pt")).setName("l_humeral_medial_epicn_pt").setTranslation(0.1735,1.1272,-0.1113))
                                                    .addChild((new autoclass.HAnimSite("hanim_l_radiale_pt")).setName("l_radiale_pt").setTranslation(0.2182,1.1212,-0.1167)))
                                                  .addChild((new autoclass.HAnimJoint("hanim_l_radiocarpal")).setName("l_radiocarpal").setCenter(0.1984,0.8663,-0.0583)
                                                    .addChild((new autoclass.HAnimSegment("hanim_l_carpal")).setName("l_carpal")
                                                      .addChild((new autoclass.HAnimSite("hanim_l_metacarpal_pha2_pt")).setName("l_metacarpal_pha2_pt").setTranslation(0.2009,0.8139,-0.0237))
                                                      .addChild((new autoclass.HAnimSite("hanim_l_ulnar_styloid_pt")).setName("l_ulnar_styloid_pt").setTranslation(0.2142,0.8529,-0.0648))
                                                      .addChild((new autoclass.HAnimSite("hanim_l_metacarpal_pha5_pt")).setName("l_metacarpal_pha5_pt").setTranslation(0.1929,0.786,-0.1122))
                                                      .addChild((new autoclass.HAnimSite("hanim_l_hand_front_view")).setName("l_hand_front_view").setTranslation(0.3,0.75,0.45)
                                                        .addChild((new autoclass.Viewpoint("hanim_l_hand_front_viewpoint")).setDescription("left hand front").setPosition(0.0,0.0,0.0).setCenterOfRotation(0.0,0.7,0.0))))
                                                    .addChild((new autoclass.HAnimJoint("hanim_l_thumb1")).setName("l_thumb1").setCenter(0.1924,0.8472,-0.0534)
                                                      .addChild((new autoclass.HAnimSegment("hanim_l_metacarpal_1")).setName("l_metacarpal_1"))
                                                      .addChild((new autoclass.HAnimJoint("hanim_l_thumb2")).setName("l_thumb2").setCenter(0.1951,0.8226,0.0246)
                                                        .addChild((new autoclass.HAnimSegment("hanim_l_carpal_proximal_phalanx_1")).setName("l_carpal_proximal_phalanx_1"))
                                                        .addChild((new autoclass.HAnimJoint("hanim_l_thumb3")).setName("l_thumb3").setCenter(0.1955,0.8159,0.0464)
                                                          .addChild((new autoclass.HAnimSegment("hanim_l_carpal_distal_phalanx_1")).setName("l_carpal_distal_phalanx_1")
                                                            .addChild((new autoclass.HAnimSite("hanim_l_thumb_distal_tip")).setName("l_thumb_distal_tip").setTranslation(0.1982,0.8061,0.0759))))))
                                                    .addChild((new autoclass.HAnimJoint("hanim_l_index0")).setName("l_index0").setCenter(0.1983,0.8024,-0.028)
                                                      .addChild((new autoclass.HAnimSegment("hanim_l_metacarpal_2")).setName("l_metacarpal_2"))
                                                      .addChild((new autoclass.HAnimJoint("hanim_l_index1")).setName("l_index1").setCenter(0.1983,0.7815,-0.028)
                                                        .addChild((new autoclass.HAnimSegment("hanim_l_carpal_proximal_phalanx_2")).setName("l_carpal_proximal_phalanx_2"))
                                                        .addChild((new autoclass.HAnimJoint("hanim_l_index2")).setName("l_index2").setCenter(0.2017,0.7363,-0.0248)
                                                          .addChild((new autoclass.HAnimSegment("hanim_l_carpal_middle_phalanx_2")).setName("l_carpal_middle_phalanx_2"))
                                                          .addChild((new autoclass.HAnimJoint("hanim_l_index3")).setName("l_index3").setCenter(0.2028,0.7139,-0.0236)
                                                            .addChild((new autoclass.HAnimSegment("hanim_l_carpal_distal_phalanx_2")).setName("l_carpal_distal_phalanx_2")
                                                              .addChild((new autoclass.HAnimSite("hanim_l_index_distal_tip")).setName("l_index_distal_tip").setTranslation(0.2089,0.6858,-0.0245))
                                                              .addChild((new autoclass.HAnimSite("hanim_l_dactylion_pt")).setName("l_dactylion_pt").setTranslation(0.2056,0.6743,-0.0482)))))))
                                                    .addChild((new autoclass.HAnimJoint("hanim_l_middle0")).setName("l_middle0").setCenter(0.1987,0.8029,-0.053)
                                                      .addChild((new autoclass.HAnimSegment("hanim_l_metacarpal_3")).setName("l_metacarpal_3"))
                                                      .addChild((new autoclass.HAnimJoint("hanim_l_middle1")).setName("l_middle1").setCenter(0.1987,0.7818,-0.053)
                                                        .addChild((new autoclass.HAnimSegment("hanim_l_carpal_proximal_phalanx_3")).setName("l_carpal_proximal_phalanx_3"))
                                                        .addChild((new autoclass.HAnimJoint("hanim_l_middle2")).setName("l_middle2").setCenter(0.2013,0.7273,-0.0503)
                                                          .addChild((new autoclass.HAnimSegment("hanim_l_carpal_middle_phalanx_3")).setName("l_carpal_middle_phalanx_3"))
                                                          .addChild((new autoclass.HAnimJoint("hanim_l_middle3")).setName("l_middle3").setCenter(0.2026,0.7011,-0.0494)
                                                            .addChild((new autoclass.HAnimSegment("hanim_l_carpal_distal_phalanx_3")).setName("l_carpal_distal_phalanx_3")
                                                              .addChild((new autoclass.HAnimSite("hanim_l_middle_distal_tip")).setName("l_middle_distal_tip").setTranslation(0.208,0.6731,-0.0491)))))))
                                                    .addChild((new autoclass.HAnimJoint("hanim_l_ring0")).setName("l_ring0").setCenter(0.1956,0.8019,-0.0794)
                                                      .addChild((new autoclass.HAnimSegment("hanim_l_metacarpal_4")).setName("l_metacarpal_4"))
                                                      .addChild((new autoclass.HAnimJoint("hanim_l_ring1")).setName("l_ring1").setCenter(0.1956,0.7815,-0.0794)
                                                        .addChild((new autoclass.HAnimSegment("hanim_l_carpal_proximal_phalanx_4")).setName("l_carpal_proximal_phalanx_4"))
                                                        .addChild((new autoclass.HAnimJoint("hanim_l_ring2")).setName("l_ring2").setCenter(0.1973,0.7287,-0.0777)
                                                          .addChild((new autoclass.HAnimSegment("hanim_l_carpal_middle_phalanx_4")).setName("l_carpal_middle_phalanx_4"))
                                                          .addChild((new autoclass.HAnimJoint("hanim_l_ring3")).setName("l_ring3").setCenter(0.1983,0.7045,-0.0767)
                                                            .addChild((new autoclass.HAnimSegment("hanim_l_carpal_distal_phalanx_4")).setName("l_carpal_distal_phalanx_4")
                                                              .addChild((new autoclass.HAnimSite("hanim_l_ring_distal_tip")).setName("l_ring_distal_tip").setTranslation(0.2035,0.675,-0.0756)))))))
                                                    .addChild((new autoclass.HAnimJoint("hanim_l_pinky0")).setName("l_pinky0").setCenter(0.1925,0.8066,-0.1036)
                                                      .addChild((new autoclass.HAnimSegment("hanim_l_metacarpal_5")).setName("l_metacarpal_5"))
                                                      .addChild((new autoclass.HAnimJoint("hanim_l_pinky1")).setName("l_pinky1").setCenter(0.1925,0.7866,-0.1036)
                                                        .addChild((new autoclass.HAnimSegment("hanim_l_carpal_proximal_phalanx_5")).setName("l_carpal_proximal_phalanx_5"))
                                                        .addChild((new autoclass.HAnimJoint("hanim_l_pinky2")).setName("l_pinky2").setCenter(0.1938,0.7452,-0.1024)
                                                          .addChild((new autoclass.HAnimSegment("hanim_l_carpal_middle_phalanx_5")).setName("l_carpal_middle_phalanx_5"))
                                                          .addChild((new autoclass.HAnimJoint("hanim_l_pinky3")).setName("l_pinky3").setCenter(0.1948,0.7277,-0.1017)
                                                            .addChild((new autoclass.HAnimSegment("hanim_l_carpal_distal_phalanx_5")).setName("l_carpal_distal_phalanx_5")
                                                              .addChild((new autoclass.HAnimSite("hanim_l_pinky_distal_tip")).setName("l_pinky_distal_tip").setTranslation(0.2014,0.7009,-0.1012))))))))))))
                                          .addChild((new autoclass.HAnimJoint("hanim_r_sternoclavicular")).setName("r_sternoclavicular").setCenter(-0.082,1.4488,-0.0353)
                                            .addChild((new autoclass.HAnimSegment("hanim_r_clavicle")).setName("r_clavicle")
                                              .addChild((new autoclass.HAnimSite("hanim_r_clavicale_pt")).setName("r_clavicale_pt").setTranslation(-0.0115,1.4943,0.04))
                                              .addChild((new autoclass.HAnimSite("hanim_r_acromion_pt")).setName("r_acromion_pt").setTranslation(-0.1905,1.4791,-0.0431))
                                              .addChild((new autoclass.HAnimSite("hanim_r_axilla_ant_pt")).setName("r_axilla_ant_pt").setTranslation(-0.1626,1.4072,-0.0031))
                                              .addChild((new autoclass.HAnimSite("hanim_r_axilla_post_pt")).setName("r_axilla_post_pt").setTranslation(-0.1603,1.4098,-0.0826)))
                                            .addChild((new autoclass.HAnimJoint("hanim_r_acromioclavicular")).setName("r_acromioclavicular").setCenter(-0.0962,1.4269,-0.0424)
                                              .addChild((new autoclass.HAnimSegment("hanim_r_scapula")).setName("r_scapula"))
                                              .addChild((new autoclass.HAnimJoint("hanim_r_shoulder")).setName("r_shoulder").setCenter(-0.2029,1.4376,-0.0387)
                                                .addChild((new autoclass.HAnimSegment("hanim_r_upperarm")).setName("r_upperarm")
                                                  .addChild((new autoclass.HAnimSite("hanim_r_humeral_lateral_epicn_pt")).setName("r_humeral_lateral_epicn_pt").setTranslation(-0.2224,1.1517,-0.1033)))
                                                .addChild((new autoclass.HAnimJoint("hanim_r_elbow")).setName("r_elbow").setCenter(-0.2014,1.1357,-0.0682)
                                                  .addChild((new autoclass.HAnimSegment("hanim_r_forearm")).setName("r_forearm")
                                                    .addChild((new autoclass.HAnimSite("hanim_r_radial_styloid_pt")).setName("r_radial_styloid_pt").setTranslation(-0.1884,0.8676,-0.036))
                                                    .addChild((new autoclass.HAnimSite("hanim_r_olecranon_pt")).setName("r_olecranon_pt").setTranslation(-0.1907,1.1405,-0.1065))
                                                    .addChild((new autoclass.HAnimSite("hanim_r_humeral_medial_epicn_pt")).setName("r_humeral_medial_epicn_pt").setTranslation(-0.168,1.1298,-0.1062))
                                                    .addChild((new autoclass.HAnimSite("hanim_r_radiale_pt")).setName("r_radiale_pt").setTranslation(-0.213,1.1305,-0.1091)))
                                                  .addChild((new autoclass.HAnimJoint("hanim_r_radiocarpal")).setName("r_radiocarpal").setCenter(-0.1984,0.8663,-0.0583)
                                                    .addChild((new autoclass.HAnimSegment("hanim_r_carpal")).setName("r_carpal")
                                                      .addChild((new autoclass.HAnimSite("hanim_r_metacarpal_pha2_pt")).setName("r_metacarpal_pha2_pt").setTranslation(-0.1977,0.8169,-0.0177))
                                                      .addChild((new autoclass.HAnimSite("hanim_r_ulnar_styloid_pt")).setName("r_ulnar_styloid_pt").setTranslation(-0.2117,0.8562,-0.0584))
                                                      .addChild((new autoclass.HAnimSite("hanim_r_metacarpal_pha5_pt")).setName("r_metacarpal_pha5_pt").setTranslation(-0.1929,0.789,-0.1064))
                                                      .addChild((new autoclass.HAnimSite("hanim_r_hand_front_view")).setName("r_hand_front_view").setTranslation(-0.3,0.75,0.45)
                                                        .addChild((new autoclass.Viewpoint("hanim_r_hand_front_viewpoint")).setDescription("right hand front").setPosition(0.0,0.0,0.0).setCenterOfRotation(0.0,0.7,0.0))))
                                                    .addChild((new autoclass.HAnimJoint("hanim_r_thumb1")).setName("r_thumb1").setCenter(-0.1924,0.8472,-0.0534)
                                                      .addChild((new autoclass.HAnimSegment("hanim_r_metacarpal_1")).setName("r_metacarpal_1"))
                                                      .addChild((new autoclass.HAnimJoint("hanim_r_thumb2")).setName("r_thumb2").setCenter(-0.1951,0.8226,0.0246)
                                                        .addChild((new autoclass.HAnimSegment("hanim_r_carpal_proximal_phalanx_1")).setName("r_carpal_proximal_phalanx_1"))
                                                        .addChild((new autoclass.HAnimJoint("hanim_r_thumb3")).setName("r_thumb3").setCenter(-0.1955,0.8159,0.0464)
                                                          .addChild((new autoclass.HAnimSegment("hanim_r_carpal_distal_phalanx_1")).setName("r_carpal_distal_phalanx_1")
                                                            .addChild((new autoclass.HAnimSite("hanim_r_thumb_distal_tip")).setName("r_thumb_distal_tip").setTranslation(-0.1869,0.809,0.082))))))
                                                    .addChild((new autoclass.HAnimJoint("hanim_r_index0")).setName("r_index0").setCenter(-0.1983,0.8024,-0.028)
                                                      .addChild((new autoclass.HAnimSegment("hanim_r_metacarpal_2")).setName("r_metacarpal_2"))
                                                      .addChild((new autoclass.HAnimJoint("hanim_r_index1")).setName("r_index1").setCenter(-0.1983,0.7815,-0.028)
                                                        .addChild((new autoclass.HAnimSegment("hanim_r_carpal_proximal_phalanx_2")).setName("r_carpal_proximal_phalanx_2"))
                                                        .addChild((new autoclass.HAnimJoint("hanim_r_index2")).setName("r_index2").setCenter(-0.2017,0.7363,-0.0248)
                                                          .addChild((new autoclass.HAnimSegment("hanim_r_carpal_middle_phalanx_2")).setName("r_carpal_middle_phalanx_2"))
                                                          .addChild((new autoclass.HAnimJoint("hanim_r_index3")).setName("r_index3").setCenter(-0.2028,0.7139,-0.0236)
                                                            .addChild((new autoclass.HAnimSegment("hanim_r_carpal_distal_phalanx_2")).setName("r_carpal_distal_phalanx_2")
                                                              .addChild((new autoclass.HAnimSite("hanim_r_index_distal_tip")).setName("r_index_distal_tip").setTranslation(-0.198,0.6883,-0.018))
                                                              .addChild((new autoclass.HAnimSite("hanim_r_dactylion_pt")).setName("r_dactylion_pt").setTranslation(-0.1941,0.6772,-0.0423)))))))
                                                    .addChild((new autoclass.HAnimJoint("hanim_r_middle0")).setName("r_middle0").setCenter(-0.1987,0.8029,-0.053)
                                                      .addChild((new autoclass.HAnimSegment("hanim_r_metacarpal_3")).setName("r_metacarpal_3"))
                                                      .addChild((new autoclass.HAnimJoint("hanim_r_middle1")).setName("r_middle1").setCenter(-0.1987,0.7818,-0.053)
                                                        .addChild((new autoclass.HAnimSegment("hanim_r_carpal_proximal_phalanx_3")).setName("r_carpal_proximal_phalanx_3"))
                                                        .addChild((new autoclass.HAnimJoint("hanim_r_middle2")).setName("r_middle2").setCenter(-0.2013,0.7273,-0.0503)
                                                          .addChild((new autoclass.HAnimSegment("hanim_r_carpal_middle_phalanx_3")).setName("r_carpal_middle_phalanx_3"))
                                                          .addChild((new autoclass.HAnimJoint("hanim_r_middle3")).setName("r_middle3").setCenter(-0.2026,0.7011,-0.0494)
                                                            .addChild((new autoclass.HAnimSegment("hanim_r_carpal_distal_phalanx_3")).setName("r_carpal_distal_phalanx_3")
                                                              .addChild((new autoclass.HAnimSite("hanim_r_middle_distal_tip")).setName("r_middle_distal_tip").setTranslation(-0.1969,0.6758,-0.0427)))))))
                                                    .addChild((new autoclass.HAnimJoint("hanim_r_ring0")).setName("r_ring0").setCenter(-0.1956,0.8019,-0.0794)
                                                      .addChild((new autoclass.HAnimSegment("hanim_r_metacarpal_4")).setName("r_metacarpal_4"))
                                                      .addChild((new autoclass.HAnimJoint("hanim_r_ring1")).setName("r_ring1").setCenter(-0.1956,0.7815,-0.0794)
                                                        .addChild((new autoclass.HAnimSegment("hanim_r_carpal_proximal_phalanx_4")).setName("r_carpal_proximal_phalanx_4"))
                                                        .addChild((new autoclass.HAnimJoint("hanim_r_ring2")).setName("r_ring2").setCenter(-0.1973,0.7287,-0.0777)
                                                          .addChild((new autoclass.HAnimSegment("hanim_r_carpal_middle_phalanx_4")).setName("r_carpal_middle_phalanx_4"))
                                                          .addChild((new autoclass.HAnimJoint("hanim_r_ring3")).setName("r_ring3").setCenter(-0.1983,0.7045,-0.0767)
                                                            .addChild((new autoclass.HAnimSegment("hanim_r_carpal_distal_phalanx_4")).setName("r_carpal_distal_phalanx_4")
                                                              .addChild((new autoclass.HAnimSite("hanim_r_ring_distal_tip")).setName("r_ring_distal_tip").setTranslation(-0.1934,0.6778,-0.0693)))))))
                                                    .addChild((new autoclass.HAnimJoint("hanim_r_pinky0")).setName("r_pinky0").setCenter(-0.1925,0.8066,-0.1036)
                                                      .addChild((new autoclass.HAnimSegment("hanim_r_metacarpal_5")).setName("r_metacarpal_5"))
                                                      .addChild((new autoclass.HAnimJoint("hanim_r_pinky1")).setName("r_pinky1").setCenter(-0.1925,0.7866,-0.1036)
                                                        .addChild((new autoclass.HAnimSegment("hanim_r_carpal_proximal_phalanx_5")).setName("r_carpal_proximal_phalanx_5"))
                                                        .addChild((new autoclass.HAnimJoint("hanim_r_pinky2")).setName("r_pinky2").setCenter(-0.1938,0.7452,-0.1024)
                                                          .addChild((new autoclass.HAnimSegment("hanim_r_carpal_middle_phalanx_5")).setName("r_carpal_middle_phalanx_5"))
                                                          .addChild((new autoclass.HAnimJoint("hanim_r_pinky3")).setName("r_pinky3").setCenter(-0.1948,0.7277,-0.1017)
                                                            .addChild((new autoclass.HAnimSegment("hanim_r_carpal_distal_phalanx_5")).setName("r_carpal_distal_phalanx_5")
                                                              .addChild((new autoclass.HAnimSite("hanim_r_pinky_distal_tip")).setName("r_pinky_distal_tip").setTranslation(-0.1938,0.7035,-0.0949))))))))))))))))))))))))))))))
      .addComments(" USE nodes go here for access by inverse kinematics (IK) engines and other tools ")
      .addComments(" Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation ")
      .addViewpoints((new autoclass.HAnimSite("hanim_l_inclined_view")).setName("l_inclined_view").setRotation(-0.113,0.993,0.0347,0.671).setTranslation(1.62,1.05,2.06)
        .addChild((new autoclass.Viewpoint("hanim_l_inclined_viewpoint")).setDescription("left inclined").setPosition(0.0,0.0,0.0)))
      .addViewpoints((new autoclass.HAnimSite("hanim_r_inclined_view")).setName("r_inclined_view").setRotation(-0.113,-0.993,0.0347,0.671).setTranslation(-1.62,1.05,2.06)
        .addChild((new autoclass.Viewpoint("hanim_r_inclined_viewpoint")).setDescription("right inclined").setPosition(0.0,0.0,0.0).setCenterOfRotation(0.0,0.9,0.0)))
      .addViewpoints((new autoclass.HAnimSite("hanim_front_view")).setName("front_view").setTranslation(0.0,0.85,2.58)
        .addChild((new autoclass.Viewpoint("hanim_front_viewpoint")).setDescription("front").setPosition(0.0,0.0,0.0).setCenterOfRotation(0.0,0.9,0.0)))
      .addViewpoints((new autoclass.HAnimSite("hanim_back_view")).setName("back_view").setTranslation(0.0,0.85,-2.58).setRotation(0.0,1.0,0.0,3.14)
        .addChild((new autoclass.Viewpoint("hanim_back_viewpoint")).setDescription("back").setPosition(0.0,0.0,0.0).setCenterOfRotation(0.0,0.9,0.0)))
      .addViewpoints((new autoclass.HAnimSite("hanim_l_side_view")).setName("l_side_view").setRotation(0.0,1.0,0.0,1.5708).setTranslation(2.6,0.854,0.0)
        .addChild((new autoclass.Viewpoint("hanim_l_side_viewpoint")).setDescription("left side").setPosition(0.0,0.0,0.0).setCenterOfRotation(0.0,0.9,0.0)))
      .addViewpoints((new autoclass.HAnimSite("hanim_Top_view")).setName("Top_view").setTranslation(0.0,3.5,0.0).setRotation(1.0,0.0,0.0,-1.57)
        .addChild((new autoclass.Viewpoint("hanim_Top_viewpoint")).setDescription("Top").setPosition(0.0,0.0,0.0).setCenterOfRotation(0.0,0.9,0.0)))
      .addComments(" TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default ")
      .addViewpoints((new autoclass.HAnimSite("hanim_front_close_view")).setName("front_close_view").setTranslation(0.0,0.854,1.575)
        .addChild((new autoclass.Viewpoint("hanim_front_close_viewpoint")).setDescription("front close").setPosition(0.0,0.0,0.0).setCenterOfRotation(0.0,0.0,1.575)))
      .addViewpoints((new autoclass.HAnimSite("hanim_side_close_view")).setName("side_close_view").setRotation(0.0,1.0,0.0,1.5708).setTranslation(1.56,0.854,0.0)
        .addChild((new autoclass.Viewpoint("hanim_side_close_viewpoint")).setDescription("side close").setPosition(0.0,0.0,0.0).setCenterOfRotation(1.6,0.0,0.0)))
      .addViewpoints((new autoclass.HAnimSite("hanim_head_front_close_view")).setName("head_front_close_view").setTranslation(0.0,1.5,1.0)
        .addChild((new autoclass.Viewpoint("hanim_head_front_close_viewpoint")).setDescription("head front close").setPosition(0.0,0.0,0.0).setCenterOfRotation(0.0,0.0,1.0)))
      .addViewpoints((new autoclass.HAnimSite("hanim_chest_front_close_view")).setName("chest_front_close_view").setTranslation(0.0,1.2,1.0)
        .addChild((new autoclass.Viewpoint("hanim_chest_front_close_viewpoint")).setDescription("chest front close").setPosition(0.0,0.0,0.0).setCenterOfRotation(0.0,0.0,1.0)))
      .addViewpoints((new autoclass.HAnimSite("hanim_pelvis_front_close_view")).setName("pelvis_front_close_view").setTranslation(0.0,0.8,1.0)
        .addChild((new autoclass.Viewpoint("hanim_pelvis_front_close_viewpoint")).setDescription("pelvis front close").setPosition(0.0,0.0,0.0).setCenterOfRotation(0.0,0.0,1.0)))
      .addViewpoints((new autoclass.HAnimSite("hanim_knees_front_close_view")).setName("knees_front_close_view").setTranslation(0.0,0.4,1.0)
        .addChild((new autoclass.Viewpoint("hanim_knees_front_close_viewpoint")).setDescription("knees front close").setPosition(0.0,0.0,0.0).setCenterOfRotation(0.0,0.4,0.0)))
      .addViewpoints((new autoclass.HAnimSite("hanim_feet_front_close_view")).setName("feet_front_close_view").setTranslation(0.0,0.0,1.0)
        .addChild((new autoclass.Viewpoint("hanim_feet_front_close_viewpoint")).setDescription("feet front close").setPosition(0.0,0.0,0.0)))
      .addComments(" right between the eyes, stationary position not animating except with body itself ")
      .addViewpoints((new autoclass.HAnimSite("hanim_eye_level_view")).setName("eye_level_view").setTranslation(0.0,1.6332,0.0502)
        .addChild((new autoclass.Viewpoint("hanim_eye_level_viewpoint")).setDescription("eye level looking forward").setPosition(0.0,0.0,0.0).setOrientation(0.0,1.0,0.0,3.141593)))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_humanoid_root"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_sacroiliac"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vl5"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vl4"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vl3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vl2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vl1"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vt12"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vt11"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vt10"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vt9"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vt8"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vt7"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vt6"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vt5"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vt4"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vt3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vt2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vt1"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vc7"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vc6"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vc5"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vc4"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vc3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vc2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vc1"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_skullbase"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_temporomandibular"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_acromioclavicular"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_acromioclavicular"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_elbow"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_elbow"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_eyeball_joint"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_eyeball_joint"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_eyebrow_joint"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_eyebrow_joint"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_eyelid_joint"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_eyelid_joint"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_hip"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_hip"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_index0"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_index0"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_index1"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_index1"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_index2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_index2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_index3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_index3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_knee"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_knee"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_metatarsophalangeal_2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_metatarsophalangeal_2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_middle0"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_middle0"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_middle1"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_middle1"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_middle2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_middle2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_middle3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_middle3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_pinky0"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_pinky0"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_pinky1"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_pinky1"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_pinky2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_pinky2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_pinky3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_pinky3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_radiocarpal"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_radiocarpal"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_ring0"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_ring0"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_ring1"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_ring1"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_ring2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_ring2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_ring3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_ring3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_shoulder"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_shoulder"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_sternoclavicular"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_sternoclavicular"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_talocrural"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_talocrural"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_tarsal_distal_interphalangeal_2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_tarsometatarsal_2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_tarsometatarsal_2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_thumb1"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_thumb1"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_thumb2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_thumb2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_thumb3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_thumb3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_pelvis"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_skull"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_jaw"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_c1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_c2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_c3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_c4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_c5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_c6"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_c7"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_t1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_t2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_t3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_t4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_t5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_t6"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_t7"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_t8"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_t9"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_t10"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_t11"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_t12"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_sacrum"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_calf"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_calf"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_carpal"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_carpal"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_carpal_distal_phalanx_1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_carpal_distal_phalanx_1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_carpal_distal_phalanx_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_carpal_distal_phalanx_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_carpal_distal_phalanx_3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_carpal_distal_phalanx_3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_carpal_distal_phalanx_4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_carpal_distal_phalanx_4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_carpal_distal_phalanx_5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_carpal_distal_phalanx_5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_carpal_middle_phalanx_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_carpal_middle_phalanx_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_carpal_middle_phalanx_3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_carpal_middle_phalanx_3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_carpal_middle_phalanx_4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_carpal_middle_phalanx_4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_carpal_middle_phalanx_5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_carpal_middle_phalanx_5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_carpal_proximal_phalanx_1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_carpal_proximal_phalanx_1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_carpal_proximal_phalanx_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_carpal_proximal_phalanx_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_carpal_proximal_phalanx_3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_carpal_proximal_phalanx_3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_carpal_proximal_phalanx_4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_carpal_proximal_phalanx_4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_carpal_proximal_phalanx_5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_carpal_proximal_phalanx_5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_clavicle"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_clavicle"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_eyeball"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_eyeball"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_eyebrow"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_eyebrow"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_eyelid"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_eyelid"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_forearm"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_forearm"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_metacarpal_1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_metacarpal_1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_metacarpal_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_metacarpal_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_metacarpal_3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_metacarpal_3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_metacarpal_4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_metacarpal_4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_metacarpal_5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_metacarpal_5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_metatarsal_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_metatarsal_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_scapula"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_scapula"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_talus"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_talus"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_tarsal_distal_phalanx_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_tarsal_distal_phalanx_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_tarsal_proximal_phalanx_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_tarsal_proximal_phalanx_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_thigh"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_thigh"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_upperarm"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_upperarm"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_crotch_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_skull_tip"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_sellion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_supramenton_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_nuchale_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_suprasternale_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_cervicale_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_substernale_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_rib10_midspine_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_waist_preferred_post_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_navel_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_acromion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_acromion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_asis_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_asis_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_axilla_ant_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_axilla_ant_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_axilla_post_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_axilla_post_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_calcaneous_post_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_calcaneous_post_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_clavicale_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_clavicale_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_dactylion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_dactylion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_digit2_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_digit2_pt"))
      .addViewpoints((new autoclass.HAnimSite()).setUSE("hanim_l_eyeball_site_view"))
      .addViewpoints((new autoclass.HAnimSite()).setUSE("hanim_r_eyeball_site_view"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_femoral_lateral_epicn_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_femoral_lateral_epicn_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_femoral_medial_epicn_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_femoral_medial_epicn_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_forefoot_tip"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_forefoot_tip"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_gonion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_gonion_pt"))
      .addViewpoints((new autoclass.HAnimSite()).setUSE("hanim_l_hand_front_view"))
      .addViewpoints((new autoclass.HAnimSite()).setUSE("hanim_r_hand_front_view"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_humeral_lateral_epicn_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_humeral_lateral_epicn_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_humeral_medial_epicn_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_humeral_medial_epicn_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_iliocristale_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_iliocristale_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_index_distal_tip"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_index_distal_tip"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_infraorbitale_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_infraorbitale_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_knee_crease_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_knee_crease_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_lateral_malleolus_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_lateral_malleolus_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_medial_malleolus_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_medial_malleolus_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_metacarpal_pha2_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_metacarpal_pha2_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_metacarpal_pha5_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_metacarpal_pha5_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_metatarsal_pha1_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_metatarsal_pha1_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_metatarsal_pha5_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_metatarsal_pha5_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_middle_distal_tip"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_middle_distal_tip"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_neck_base_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_neck_base_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_olecranon_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_olecranon_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_pinky_distal_tip"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_pinky_distal_tip"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_psis_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_psis_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_radial_styloid_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_radial_styloid_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_radiale_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_radiale_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_rib10_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_rib10_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_ring_distal_tip"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_ring_distal_tip"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_temporomandibular_l_site_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_temporomandibular_r_site_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_sphyrion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_sphyrion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_thelion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_thelion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_thumb_distal_tip"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_thumb_distal_tip"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_tragion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_tragion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_trochanterion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_trochanterion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_ulnar_styloid_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_ulnar_styloid_pt"))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return NeedClassName model
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
		var testObject = new NeedClassName();
		console.log ("NeedClassName execution self-validation test results: " + testObject.validateSelf());
	}
}
new NeedClassName().main();