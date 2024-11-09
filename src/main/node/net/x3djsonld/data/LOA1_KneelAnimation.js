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
 * <p> Humanoid animation prototype reusable by any Humanoid. </p>
 <p> Related links: LOA1_KneelAnimation.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.LOA1_KneelAnimation&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d">LOA1_KneelAnimation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Humanoid animation prototype reusable by any Humanoid. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Tom Miller </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Curt Blais </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 1 December 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 23 May 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl" target="_blank">http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl" target="_blank">http://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.HAnim.org" target="_blank">http://www.HAnim.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Models" target="_blank">http://HAnim.org/Models</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Nodes" target="_blank">http://HAnim.org/Nodes</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Nancy kneel Animation HAnim 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/../license.html">../license.html</a> </td>
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

	* @author Tom Miller
 */

function LOA1_KneelAnimation
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
LOA1_KneelAnimation.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Text string field, scene-graph level=5, element #109, 16 total values */
	this.Text_5_109_string = new autoclass.MFString(new autoclass.MFString("\"LOA1_KneelAnimation.x3d\" \"defines a prototype\" \"for animating a humanoid.\" \"\" \"Click this text to see\" \"InterchangableActorsViaDynamicRouting example.\""));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("LOA1_KneelAnimation.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Humanoid animation prototype reusable by any Humanoid."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Tom Miller"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Curt Blais"))
    .addMeta((new autoclass.meta()).setName("translated").setContent("1 December 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("23 May 2020"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.HAnim.org"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://HAnim.org/Models"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://HAnim.org/Nodes"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("Nancy kneel Animation HAnim 2001"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("LOA1_KneelAnimation.x3d"))
    .addChild((new autoclass.ProtoDeclare()).setName("LOA1_KneelAnimation")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("cycleInterval").setType("SFTime").setAccessType("inputOutput").setValue("2"))
        .addField((new autoclass.field()).setName("enabled").setType("SFBool").setAccessType("inputOutput").setValue("true"))
        .addField((new autoclass.field()).setName("loop").setType("SFBool").setAccessType("inputOutput").setValue("false"))
        .addField((new autoclass.field()).setName("startTime").setType("SFTime").setAccessType("inputOutput").setValue("0"))
        .addField((new autoclass.field()).setName("stopTime").setType("SFTime").setAccessType("inputOutput").setValue("-1"))
        .addField((new autoclass.field()).setName("fraction_changed").setType("SFFloat").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("isActive").setType("SFBool").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("HumanoidRoot_translation_changed").setType("SFVec3f").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("HumanoidRoot_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("lower_body_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("l_hip_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("l_knee_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("l_ankle_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("l_midtarsal_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("r_hip_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("r_knee_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("r_ankle_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("r_midtarsal_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("vl5_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("skullbase_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("l_shoulder_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("l_elbow_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("l_wrist_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("r_shoulder_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("r_elbow_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("r_wrist_rotation_changed").setType("SFRotation").setAccessType("outputOnly")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Group())
          .addChild((new autoclass.TimeSensor("TIMER"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("cycleInterval").setProtoField("cycleInterval"))
              .addConnect((new autoclass.connect()).setNodeField("enabled").setProtoField("enabled"))
              .addConnect((new autoclass.connect()).setNodeField("loop").setProtoField("loop"))
              .addConnect((new autoclass.connect()).setNodeField("startTime").setProtoField("startTime"))
              .addConnect((new autoclass.connect()).setNodeField("stopTime").setProtoField("stopTime"))
              .addConnect((new autoclass.connect()).setNodeField("fraction_changed").setProtoField("fraction_changed"))
              .addConnect((new autoclass.connect()).setNodeField("isActive").setProtoField("isActive"))))
          .addChild((new autoclass.PositionInterpolator("HUMANOIDROOT_POSITION_ANIMATOR")).setKey(java.newArray("float", [0.0,.3125,.625,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.0,-.049999,0.0,0.0,-.195,0.0,0.0,-.439997,0.0])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("HumanoidRoot_translation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("HUMANOIDROOT_ANIMATOR")).setKey(java.newArray("float", [0.0,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("HumanoidRoot_rotation_changed"))))
          .addComments(" no SACROILIAC_ANIMATOR ")
          .addChild((new autoclass.OrientationInterpolator("L_HIP_ANIMATOR")).setKey(java.newArray("float", [0.0,.3125,.625,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.0,-1.0,0.0,0.0,.619393,-1.0,0.0,0.0,1.069302,-1.0,0.0,0.0,1.937315])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_hip_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("L_KNEE_ANIMATOR")).setKey(java.newArray("float", [0.0,.3125,.625,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.0,1.0,0.0,0.0,.615228,1.0,0.0,0.0,.984524,1.0,0.0,0.0,2.076941])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_knee_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("L_ANKLE_ANIMATOR")).setKey(java.newArray("float", [0.0,.3125,.625,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.0,-1.0,0.0,0.0,.017453,-1.0,0.0,0.0,.069812,1.0,0.0,0.0,.261799])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_ankle_rotation_changed"))))
          .addComments(" no L_MIDTARSAL_ANIMATOR ")
          .addChild((new autoclass.OrientationInterpolator("R_HIP_ANIMATOR")).setKey(java.newArray("float", [0.0,.3125,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.0,1.0,0.0,0.0,.523598,-1.0,0.0,0.0,.157079])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_hip_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("R_KNEE_ANIMATOR")).setKey(java.newArray("float", [0.0,.3125,.625,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.0,1.0,0.0,0.0,.349065,1.0,0.0,0.0,1.023397,.999934,.008043,.008185,1.727938])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_knee_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("R_ANKLE_ANIMATOR")).setKey(java.newArray("float", [0.0,.3125,.625,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.0,-.991692,-.072372,.106338,.205053,-.981083,-.103267,.163741,.272231,-1.0,0.0,0.0,.349065])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_ankle_rotation_changed"))))
          .addComments(" no R_MIDTARSAL_ANIMATOR ")
          .addChild((new autoclass.OrientationInterpolator("VL5_ANIMATOR")).setKey(java.newArray("float", [0.0,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.0,1.0,0.0,0.0,.174533])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("vl5_rotation_changed"))))
          .addComments(" no SKULLBASE_ANIMATOR ")
          .addChild((new autoclass.OrientationInterpolator("L_SHOULDER_ANIMATOR")).setKey(java.newArray("float", [0.0,.3125,.625,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.0,-1.0,0.0,0.0,.279252,-1.0,0.0,0.0,.506145,-1.0,0.0,0.0,.191986])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_shoulder_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("L_ELBOW_ANIMATOR")).setKey(java.newArray("float", [0.0,.3125,.625,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.0,-1.0,0.0,0.0,.052359,-1.0,0.0,0.0,.296706,-1.0,0.0,0.0,1.431169])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_elbow_rotation_changed"))))
          .addComments(" no L_WRIST_ANIMATOR ")
          .addChild((new autoclass.OrientationInterpolator("R_SHOULDER_ANIMATOR")).setKey(java.newArray("float", [0.0,.3125,.625,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.0,-1.0,0.0,0.0,.104719,-1.0,0.0,0.0,.157079,1.0,0.0,0.0,.314159])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_shoulder_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("R_ELBOW_ANIMATOR")).setKey(java.newArray("float", [0.0,.3125,.625,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.0,-1.0,0.0,0.0,.837757,-1.0,0.0,0.0,1.239183,-1.0,0.0,0.0,1.500983])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_elbow_rotation_changed"))))
          .addComments(" no R_WRIST_ANIMATOR "))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("HUMANOIDROOT_POSITION_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("HUMANOIDROOT_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_HIP_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_KNEE_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_ANKLE_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_HIP_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_KNEE_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_ANKLE_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("VL5_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_SHOULDER_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_ELBOW_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_SHOULDER_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_ELBOW_ANIMATOR").setToField("set_fraction"))))
    .addChild((new autoclass.Anchor()).setDescription("InterchangableActorsViaDynamicRouting").setParameter(new autoclass.MFString("\"target=_blank\"")).setUrl(new autoclass.MFString("\"InterchangableActorsViaDynamicRouting.x3d\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d\" \"InterchangableActorsViaDynamicRouting.wrl\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl\""))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text()).setString(this.Text_5_109_string)
          .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.8)))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.2))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return LOA1_KneelAnimation model
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
		var testObject = new LOA1_KneelAnimation();
		console.log ("LOA1_KneelAnimation execution self-validation test results: " + testObject.validateSelf());
	}
}
new LOA1_KneelAnimation().main();