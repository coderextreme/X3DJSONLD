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
 * <p> HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid. </p>
 <p> Related links: DiamondManLOA_0.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.DiamondManLOA_0&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_0.x3d">DiamondManLOA_0.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid. </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> motto </i> </td>
			<td> (a) "Diamonds are a girl's best friend." (b) "Gosh, it sure is chilly in here." </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HAnim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html" target="_blank">https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero" target="_blank">https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa" target="_blank">http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl" target="_blank">http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl" target="_blank">http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl</a> </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_0.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_0.x3d</a> </td>
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

function DiamondManLOA_0
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
DiamondManLOA_0.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: WorldInfo info field, scene-graph level=3, element #26, 100 total values */
	this.WorldInfo_3_26_info = new autoclass.MFString(new autoclass.MFString("\"HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf\""));

	/** Large attribute array: MetadataSet reference field, scene-graph level=4, element #29, 1 total value */
	this.MetadataSet_HAnimHumanoid.info_4_29_reference = new autoclass.SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");

	/** Large attribute array: MetadataString value field, scene-graph level=5, element #34, 51 total values */
	this.MetadataString_usageRestrictions_5_34_value = new autoclass.MFString(new autoclass.MFString("\"PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.\""));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("H-Anim").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("DiamondManLOA_0.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Matthew T. Beitler"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Joel S. Pawloski"))
    .addMeta((new autoclass.meta()).setName("created").setContent("12 November 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("23 December 2021"))
    .addMeta((new autoclass.meta()).setName("motto").setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HAnim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs)"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://ece.uwaterloo.ca/~HAnim"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.cis.upenn.edu/~beitler"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("humanoid_landmark_locations.gif"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_0.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setInfo(this.WorldInfo_3_26_info).setTitle("HANIM 2.0 Default Joint Centers, LOA0"))
    .addChild((new autoclass.NavigationInfo()).setSpeed(1.5))
    .addChild((new autoclass.Viewpoint()).setDescription("Diamond Man, LOA 0").setCenterOfRotation(0.0,1.0,0.0).setPosition(0.0,1.0,3.0))
    .addChild((new autoclass.HAnimHumanoid("hanim_humanoid")).setName("humanoid").setVersion("1.0")
      .addComments(" original HAnimHumanoid info='\"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org\" \"authorName=Matthew T. Beitler\" \"copyright=Copyright 1999 Matthew T. Beitler\" \"creationDate=05/12/99\" \"humanoidVersion=JointCenters 1.1 LOA0\" \"usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.\"' ")
      .addChild((new autoclass.MetadataSet()).setName("HAnimHumanoid.info").setReference(this.MetadataSet_HAnimHumanoid.info_4_29_reference)
        .addValue((new autoclass.MetadataString()).setName("authorEmail").setValue(new autoclass.MFString("\"beitler@graphics.cis.upenn.edu beitler@acm.org\"")))
        .addValue((new autoclass.MetadataString()).setName("authorName").setValue(new autoclass.MFString("\"Matthew T. Beitler\"")))
        .addValue((new autoclass.MetadataString()).setName("copyright").setValue(new autoclass.MFString("\"Copyright 1999 Matthew T. Beitler\"")))
        .addValue((new autoclass.MetadataString()).setName("creationDate").setValue(new autoclass.MFString("\"05/12/99\"")))
        .addValue((new autoclass.MetadataString()).setName("humanoidVersion").setValue(new autoclass.MFString("\"JointCenters 1.1 LOA0\"")))
        .addValue((new autoclass.MetadataString()).setName("usageRestrictions").setValue(this.MetadataString_usageRestrictions_5_34_value)))
      .addSkeleton((new autoclass.HAnimJoint("hanim_HumanoidRoot")).setName("HumanoidRoot").setCenter(0.0,0.8240,0.0277).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
        .addChild((new autoclass.HAnimJoint("hanim_sacroiliac")).setName("sacroiliac").setCenter(0.0,0.9149,0.0016).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
          .addChild((new autoclass.HAnimSegment("hanim_pelvis")).setName("pelvis")
            .addChild((new autoclass.Transform()).setTranslation(0.0,0.9149,0.0016)
              .addChild((new autoclass.Shape("DiamondShape"))
                .setGeometry((new autoclass.IndexedFaceSet()).setCreaseAngle(0.5).setCoordIndex(java.newArray("int", [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0])))))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.0))))))))
      .addViewpoints((new autoclass.HAnimSite("hanim_site_view")).setName("site_view")
        .addChild((new autoclass.Viewpoint("InclinedView")).setDescription("Inclined View").setOrientation(-0.113,0.993,0.0347,0.671).setPosition(1.62,1.05,2.06))
        .addChild((new autoclass.Viewpoint("FrontView")).setDescription("Front View").setPosition(0.0,0.854,2.57665))
        .addChild((new autoclass.Viewpoint("SideView")).setDescription("Side View").setOrientation(0.0,1.0,0.0,1.57079).setPosition(2.5929,0.854,0.0))
        .addChild((new autoclass.Viewpoint("TopView")).setDescription("Top View").setOrientation(1.0,0.0,0.0,-1.57079).setPosition(0.0,3.4495,0.0)))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addSegments((new autoclass.HAnimSegment()))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return DiamondManLOA_0 model
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
		var testObject = new DiamondManLOA_0();
		console.log ("DiamondManLOA_0 execution self-validation test results: " + testObject.validateSelf());
	}
}
new DiamondManLOA_0().main();