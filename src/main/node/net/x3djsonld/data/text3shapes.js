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
 * <p> 3 text shapes. </p>
 <p> Related links: text3shapes.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.text3shapes&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John W Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> December 13 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/text3shapes.x3d">text3shapes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/text3shapes.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/text3shapes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> 3 text shapes </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vim, X3D-Edit, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
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

	* @author John W Carlson
 */

function text3shapes
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
text3shapes.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("creator").setContent("John W Carlson"))
    .addMeta((new autoclass.meta()).setName("created").setContent("December 13 2015"))
    .addMeta((new autoclass.meta()).setName("title").setContent("text3shapes.x3d"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/text3shapes.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("3 text shapes"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.Transform())
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Node\\\"\\\"\\\"\""))
          .setFontStyle((new autoclass.FontStyle())))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()))))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Node2\" \"\\\\\" \"\\\\\\\\\" \"Node2\""))
          .setFontStyle((new autoclass.FontStyle())))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()))))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Node3 \\\\\\\\ \\\\ \" \"Node3\\\"\\\"\\\"\""))
          .setFontStyle((new autoclass.FontStyle())))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()))))
      .addChild((new autoclass.Script()).setSourceCode("\n" + 
"			    ecmascript:" + "\n" + 
"			    var me = '\"1\" \"\\\"2\" \"\\n3\"';" + "\n")
        .addField((new autoclass.field()).setName("frontUrls").setType("MFString").setAccessType("initializeOnly").setValue("\"rnl_front.png\" \"uffizi_front.png\"")))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return text3shapes model
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
		var testObject = new text3shapes();
		console.log ("text3shapes execution self-validation test results: " + testObject.validateSelf());
	}
}
new text3shapes().main();