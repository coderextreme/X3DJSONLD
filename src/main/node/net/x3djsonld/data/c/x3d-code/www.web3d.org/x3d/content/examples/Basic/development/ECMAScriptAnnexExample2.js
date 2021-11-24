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
 * <p> A simple script example with no visible rendering results. </p>
 <p> Related links: <a href="../../../development/ECMAScriptAnnexExample2.java">ECMAScriptAnnexExample2.java</a> source, <a href="../../../development/ECMAScriptAnnexExample2Index.html" target="_top">ECMAScriptAnnexExample2 catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/ECMAScriptAnnexExample2.x3d">ECMAScriptAnnexExample2.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 16 January 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A simple script example with no visible rendering results. </td>
		</tr>
		<tr style="color:red">
			<td style="text-align:right; vertical-align: text-top;"> <i> error </i> </td>
			<td> VRML97 translation has extraneous 'url [ ]' output. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/ECMAScriptAnnexExample2.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/ECMAScriptAnnexExample2.x3d</a> </td>
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

function ECMAScriptAnnexExample2
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
ECMAScriptAnnexExample2.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: WorldInfo info field, scene-graph level=3, element #11, 22 total values */
	this.WorldInfo_3_11_info = new autoclass.MFString(new autoclass.MFString("\"Example 2, VRML 97 Annex C, ECMAScript Scripting Reference\" \"https://www.web3d.org/technicalinfo/specifications/vrml97/part1/javascript.html#Example\" \"Edits: wrapped using a Transform node for completeness, renamed duplicate url field\""));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("ECMAScriptAnnexExample2.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("16 January 2000"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("description").setContent("A simple script example with no visible rendering results."))
    .addMeta((new autoclass.meta()).setName("error").setContent("VRML97 translation has extraneous 'url [ ]' output."))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/ECMAScriptAnnexExample2.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setInfo(this.WorldInfo_3_11_info).setTitle("ECMAScriptAnnexExample2.wrl"))
    .addChild((new autoclass.Transform("ROOT_TRANSFORM"))
      .addChild((new autoclass.Script("Example_2")).setDirectOutput(true).setSourceCode("\n" + 
"        " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function trigger_event(value, ts)" + "\n" + 
"{" + "\n" + 
"	// do something and then fetch values" + "\n" + 
"	Browser.createVRMLFromURL(url, myself, 'nodesLoaded');" + "\n" + 
"}" + "\n" + 
"function nodesLoaded(value, timestamp)" + "\n" + 
"{" + "\n" + 
"	if (value.length > 5)" + "\n" + 
"	{" + "\n" + 
"		// do something if more than 5 nodes in this MFNode array..." + "\n" + 
"	}" + "\n" + 
"	root.addChildren = value;" + "\n" + 
"}" + "\n" + 
"// example is missing reference to the url field defined above" + "\n")
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("myself").setType("SFNode")
          .addChild((new autoclass.Script()).setUSE("Example_2")))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("root").setType("SFNode")
          .addChild((new autoclass.Transform()).setUSE("ROOT_TRANSFORM")))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("identifier").setType("MFString").setValue("\"foo.wrl\""))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("nodesLoaded").setType("SFNode"))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("trigger_event").setType("SFBool")))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return ECMAScriptAnnexExample2 model
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
		var testObject = new ECMAScriptAnnexExample2();
		console.log ("ECMAScriptAnnexExample2 execution self-validation test results: " + testObject.validateSelf());
	}
}
new ECMAScriptAnnexExample2().main();
process.exit(0);