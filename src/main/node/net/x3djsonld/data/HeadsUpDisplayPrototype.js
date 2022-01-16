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
 * <p> Generic Heads Up Display (HUD) prototype to keep children on screen. </p>
 <p> Related links: <a href="../../../../Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.java">HeadsUpDisplayPrototype.java</a> source, <a href="../../../../Tools/HeadsUpDisplays/HeadsUpDisplayPrototypeIndex.html" target="_top">HeadsUpDisplayPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d">HeadsUpDisplayPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Generic Heads Up Display (HUD) prototype to keep children on screen. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 9 November 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 14 January 2014 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> HUD Heads Up Display </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d" target="_blank">https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.2, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../Tools/HeadsUpDisplays/../../license.html">../../license.html</a> </td>
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

	* @author Don Brutzman
 */

function HeadsUpDisplayPrototype
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
HeadsUpDisplayPrototype.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: field appinfo field, scene-graph level=5, element #12, 28 total values */
	this.field_dragChildren_5_12_appinfo = new autoclass.SFString("Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.");

	/** Large attribute array: Text string field, scene-graph level=5, element #61, 21 total values */
	this.Text_5_61_string = new autoclass.MFString(new autoclass.MFString("\"HeadsUpDisplayPrototype.x3d\" \"is a Prototype definition file.\" \"\" \"To see an example scene using this node\" \"click this text to view\" \"HeadsUpDisplayExample.x3d\""));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("HeadsUpDisplayPrototype.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Generic Heads Up Display (HUD) prototype to keep children on screen."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("9 November 2003"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("14 January 2014"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("HUD Heads Up Display"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.ProtoDeclare()).setName("HeadsUpDisplay").setAppinfo("HeadsUpDisplay positions child geometry in screen space, movable by the user")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("children").setType("MFNode").setAccessType("inputOutput").setAppinfo("Displayed subscene positioned as a HUD.")
          .addComments(" default is null array of nodes "))
        .addField((new autoclass.field()).setName("dragChildren").setType("MFNode").setAccessType("inputOutput").setAppinfo(this.field_dragChildren_5_12_appinfo)
          .addComments(" default is null array of nodes "))
        .addField((new autoclass.field()).setName("locationOffset").setType("SFVec3f").setAccessType("initializeOnly").setValue("-2 -2 0").setAppinfo("Modified screen location and distance (for size)."))
        .addField((new autoclass.field()).setName("traceEnabled").setType("SFBool").setAccessType("initializeOnly").setValue("false").setAppinfo("Enable/disable console output for troubleshooting.")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Group())
          .addChild((new autoclass.ProximitySensor("WhereSensor")).setSize(1000000000.0,1000000000.0,1000000000.0)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("center").setProtoField("locationOffset"))))
          .addChild((new autoclass.Transform("FixedLocation"))
            .addChild((new autoclass.Transform("MovableLocation"))
              .addChild((new autoclass.Transform("LocationOffset"))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("locationOffset")))
                .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,-10.0)
                  .addChild((new autoclass.Group())
                    .setIS((new autoclass.IS())
                      .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("children"))))
                  .addChild((new autoclass.Group("PlaneMovementSensorGroup"))
                    .addChild((new autoclass.Group("DragGeometry"))
                      .setIS((new autoclass.IS())
                        .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("dragChildren"))))
                    .addChild((new autoclass.PlaneSensor("PlaneMovementSensor")).setDescription("click and drag to move interface")
                      .setIS((new autoclass.IS())
                        .addConnect((new autoclass.connect()).setNodeField("offset").setProtoField("locationOffset"))))
                    .addChild((new autoclass.VisibilitySensor("MovementVisibilitySensor")))
                    .addChild((new autoclass.Script("VisibilityControlScript")).setSourceCode("\n" + 
"                      " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function tracePrint (text)" + "\n" + 
"{" + "\n" + 
"	if (traceEnabled) Browser.print ('[HeadsUpDisplayPrototype VisibilityControlScript] ' + text);" + "\n" + 
"}" + "\n" + 
"function setIsVisible (value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	isVisible = value;" + "\n" + 
"	tracePrint('isVisible=' + value);" + "\n" + 
"}" + "\n" + 
"function setPlaneSensorIsActive (value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	tracePrint('PlaneSensor isActive=' + value);" + "\n" + 
"\n" + 
"	if (value == false)" + "\n" + 
"	{" + "\n" + 
"		tracePrint('planeSensorTranslation=' + planeSensorTranslation);" + "\n" + 
"		if (isVisible)" + "\n" + 
"		{" + "\n" + 
"			translationChanged = planeSensorTranslation;" + "\n" + 
"		}" + "\n" + 
"		else" + "\n" + 
"		{" + "\n" + 
"			// fell off screen, reset to center" + "\n" + 
"			translationChanged = new SFVec3f(0, 0, 0);" + "\n" + 
"			translationOffsetChanged  = new SFVec3f(0, 0, 0);" + "\n" + 
"		}" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"function setPlaneSensorTranslation (value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	planeSensorTranslation = value;" + "\n" + 
"	tracePrint('planeSensorTranslation=' + value);" + "\n" + 
"}" + "\n")
                      .addField((new autoclass.field()).setName("traceEnabled").setType("SFBool").setAccessType("initializeOnly"))
                      .addField((new autoclass.field()).setName("isVisible").setType("SFBool").setAccessType("initializeOnly").setValue("true"))
                      .addField((new autoclass.field()).setName("planeSensorTranslation").setType("SFVec3f").setAccessType("initializeOnly").setValue("0 0 0"))
                      .addField((new autoclass.field()).setName("setIsVisible").setType("SFBool").setAccessType("inputOnly"))
                      .addField((new autoclass.field()).setName("setPlaneSensorIsActive").setType("SFBool").setAccessType("inputOnly"))
                      .addField((new autoclass.field()).setName("setPlaneSensorTranslation").setType("SFVec3f").setAccessType("inputOnly"))
                      .addField((new autoclass.field()).setName("translationChanged").setType("SFVec3f").setAccessType("outputOnly"))
                      .addField((new autoclass.field()).setName("translationOffsetChanged").setType("SFVec3f").setAccessType("outputOnly"))
                      .setIS((new autoclass.IS())
                        .addConnect((new autoclass.connect()).setNodeField("traceEnabled").setProtoField("traceEnabled"))))
                    .addChild((new autoclass.ROUTE()).setFromNode("PlaneMovementSensor").setFromField("isActive").setToNode("VisibilityControlScript").setToField("setPlaneSensorIsActive"))
                    .addChild((new autoclass.ROUTE()).setFromNode("PlaneMovementSensor").setFromField("translation_changed").setToNode("VisibilityControlScript").setToField("setPlaneSensorTranslation"))
                    .addChild((new autoclass.ROUTE()).setFromNode("MovementVisibilitySensor").setFromField("isActive").setToNode("VisibilityControlScript").setToField("setIsVisible")))))
              .addChild((new autoclass.ROUTE()).setFromNode("PlaneMovementSensor").setFromField("translation_changed").setToNode("MovableLocation").setToField("set_translation"))
              .addChild((new autoclass.ROUTE()).setFromNode("VisibilityControlScript").setFromField("translationChanged").setToNode("MovableLocation").setToField("set_translation"))
              .addChild((new autoclass.ROUTE()).setFromNode("VisibilityControlScript").setFromField("translationOffsetChanged").setToNode("PlaneMovementSensor").setToField("set_offset"))))
          .addChild((new autoclass.ROUTE()).setFromNode("WhereSensor").setFromField("position_changed").setToNode("FixedLocation").setToField("set_translation"))
          .addChild((new autoclass.ROUTE()).setFromNode("WhereSensor").setFromField("orientation_changed").setToNode("FixedLocation").setToField("set_rotation")))))
    .addComments(" ==================== ")
    .addChild((new autoclass.Background()).setGroundColor(new autoclass.MFColor(java.newArray("float", [0.1,0.1,0.3]))).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.5,0.5,0.1]))))
    .addChild((new autoclass.Anchor()).setDescription("HeadsUpDisplayExample").setParameter(new autoclass.MFString("\"target=_blank\"")).setUrl(new autoclass.MFString("\"HeadsUpDisplayExample.x3d\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d\" \"HeadsUpDisplayExample.wrl\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl\""))
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,1.0,1.0).setEmissiveColor(0.0,1.0,1.0)))
        .setGeometry((new autoclass.Text()).setString(this.Text_5_61_string)
          .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.8))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return HeadsUpDisplayPrototype model
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
		var testObject = new HeadsUpDisplayPrototype();
		console.log ("HeadsUpDisplayPrototype execution self-validation test results: " + testObject.validateSelf());
	}
}
new HeadsUpDisplayPrototype().main();