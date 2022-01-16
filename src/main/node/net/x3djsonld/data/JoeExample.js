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
 * <p> Example scene JoeExample. </p>
 <p> Related links: JoeExample.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> filename </i> </td>
			<td> Scripting.x3d </td>
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

 */

function JoeExample
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
JoeExample.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("filename").setContent("Scripting.x3d")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.Script("OpenVault")).setSourceCode("\n" + 
"\n" + 
"      " + "\n" + 
"\n" + 
"      ecmascript:" + "\n" + 
"\n" + 
"      function combinationEntered (value) {" + "\n" + 
"\n" + 
"        unlocked = value;" + "\n" + 
"\n" + 
"      }" + "\n" + 
"\n" + 
"      function openVault(value) {" + "\n" + 
"\n" + 
"      if (unlocked) vaultUnlocked = value;" + "\n" + 
"\n" + 
"      }" + "\n")
      .addField((new autoclass.field()).setName("openVault").setType("SFTime").setAccessType("inputOnly"))
      .addField((new autoclass.field()).setName("combinationEntered").setType("SFBool").setAccessType("inputOnly"))
      .addField((new autoclass.field()).setName("vaultUnlocked").setType("SFTime").setAccessType("outputOnly"))
      .addField((new autoclass.field()).setName("unlocked").setType("SFBool").setAccessType("initializeOnly").setValue("false")))
    .addChild((new autoclass.Shape())
      .setAppearance((new autoclass.Appearance())
        .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0)))
      .setGeometry((new autoclass.Sphere())))
    .addChild((new autoclass.Sound()).setMaxBack(1000).setMaxFront(1000).setMinBack(1000).setMinFront(1000)
      .setSource((new autoclass.AudioClip("Click")).setDescription("clicking sound").setStopTime(1).setUrl(new autoclass.MFString("\"../resources/chandubabamusic1.wav\""))))
    .addChild((new autoclass.TouchSensor("TS")))
    .addChild((new autoclass.ROUTE()).setFromNode("TS").setFromField("isOver").setToNode("OpenVault").setToField("combinationEntered"))
    .addChild((new autoclass.ROUTE()).setFromNode("TS").setFromField("touchTime").setToNode("OpenVault").setToField("openVault"))
    .addChild((new autoclass.ROUTE()).setFromNode("OpenVault").setFromField("vaultUnlocked").setToNode("Click").setToField("startTime")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return JoeExample model
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
		var testObject = new JoeExample();
		console.log ("JoeExample execution self-validation test results: " + testObject.validateSelf());
	}
}
new JoeExample().main();