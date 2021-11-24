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
 * <p> Demonstrate IMPORT/EXPORT syntax. Better examples needed, split across 2 files for separate IMPORT and EXPORT. </p>
 <p> Related links: <a href="../../../development/ImportExportSyntax.java">ImportExportSyntax.java</a> source, <a href="../../../development/ImportExportSyntaxIndex.html" target="_top">ImportExportSyntax catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/ImportExportSyntax.x3d">ImportExportSyntax.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 19 January 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Demonstrate IMPORT/EXPORT syntax. Better examples needed, split across 2 files for separate IMPORT and EXPORT. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> untested in any browser </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/ImportExportSyntax.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/ImportExportSyntax.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../development/../license.html">../license.html</a> </td>
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

function ImportExportSyntax
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
ImportExportSyntax.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("ImportExportSyntax.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("19 January 2003"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Demonstrate IMPORT/EXPORT syntax. Better examples needed, split across 2 files for separate IMPORT and EXPORT."))
    .addMeta((new autoclass.meta()).setName("warning").setContent("untested in any browser"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/ImportExportSyntax.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("ImportExportSyntax.x3d"))
    .addChild((new autoclass.NavigationInfo("LocalNavInfo")))
    .addChild((new autoclass.EXPORT()).setLocalDEF("LocalNavInfo").setAS("NI"))
    .addChild((new autoclass.Transform()).setScale(2.0,2.0,2.0)
      .addComments(" the following Inline presumably contains some node with DEF=\"SomeRemoteNodeNameInsideInlinedScene\" ")
      .addChild((new autoclass.Inline("CoordinateAxes")).setUrl(new autoclass.MFString("\"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d\" \"https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d\" \"https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d\" \"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl\" \"https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl\" \"https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl\"")))
      .addChild((new autoclass.IMPORT()).setImportedDEF("SomeRemoteNodeNameInsideInlinedScene").setInlineDEF("CoordinateAxes").setAS("NewImportedNodeName")))
    .addComments(" ===================== ")
    .addComments(" Abstract spec IMPORT example ")
    .addChild((new autoclass.Inline("I1")).setUrl(new autoclass.MFString("\"someUrl.x3d\" \"http://online.address/someUrl.x3d\"")))
    .addChild((new autoclass.IMPORT()).setImportedDEF("rootTransform").setInlineDEF("I1").setAS("I1Root"))
    .addChild((new autoclass.TimeSensor("CLOCK")))
    .addChild((new autoclass.PositionInterpolator("PI")).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.0,0.0,0.0]))).setKey(java.newArray("float", [0.0,1.0])))
    .addChild((new autoclass.ROUTE()).setFromNode("CLOCK").setFromField("fraction_changed").setToNode("PI").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("PI").setFromField("value_changed").setToNode("I1Root").setToField("set_translation"))
    .addComments(" ===================== ")
    .addComments(" Abstract spec EXPORT example ")
    .addChild((new autoclass.Transform("T1")))
    .addChild((new autoclass.EXPORT()).setLocalDEF("T1").setAS("rootTransform")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return ImportExportSyntax model
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
		var testObject = new ImportExportSyntax();
		console.log ("ImportExportSyntax execution self-validation test results: " + testObject.validateSelf());
	}
}
new ImportExportSyntax().main();
process.exit(0);