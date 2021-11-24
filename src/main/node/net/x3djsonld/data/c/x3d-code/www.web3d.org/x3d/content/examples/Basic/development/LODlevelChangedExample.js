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
 * <p> Example use of (proposed) LOD level_changed outputOnly field to trigger loading of Inline nodes in subsequent levels. </p>
 <p> Related links: <a href="../../../development/LODlevelChangedExample.java">LODlevelChangedExample.java</a> source, <a href="../../../development/LODlevelChangedExampleIndex.html" target="_top">LODlevelChangedExample catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/LODlevelChangedExample.x3d">LODlevelChangedExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Example use of (proposed) LOD level_changed outputOnly field to trigger loading of Inline nodes in subsequent levels. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> motivation </i> </td>
			<td> Chris Thorne </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 May 2004 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development, evaluating a proposed specification change </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/LODlevelChangedExample.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/LODlevelChangedExample.x3d</a> </td>
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

function LODlevelChangedExample
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
LODlevelChangedExample.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("LODlevelChangedExample.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Example use of (proposed) LOD level_changed outputOnly field to trigger loading of Inline nodes in subsequent levels."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("motivation").setContent("Chris Thorne"))
    .addMeta((new autoclass.meta()).setName("created").setContent("26 May 2004"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("under development, evaluating a proposed specification change"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/LODlevelChangedExample.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("LODlevelChangedExample.x3d"))
    .addChild((new autoclass.LOD("activeLOD")).setRange(java.newArray("float", [6.0,10.0]))
      .addChild((new autoclass.Shape("ShapeLevel0"))
        .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"developmental test scene\" \"LODlevelChangedExample\""))
          .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")))))
      .addChild((new autoclass.Inline("InlineLevel1")).setLoad(false))
      .addChild((new autoclass.Inline("InlineLevel2")).setLoad(false))
      .addComments(" etc. "))
    .addChild((new autoclass.Group("PreloadActivationGroup"))
      .addChild((new autoclass.Script("PreloadLevelsScript")).setSourceCode("\n" + 
"        " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function level_changed (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('level=' + value);" + "\n" + 
"	if      (value == 1) activateLevel1 = true;" + "\n" + 
"	else if (value == 2) activateLevel2 = true;" + "\n" + 
"	// etc." + "\n" + 
"}" + "\n")
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("level_changed").setType("SFInt32"))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("activateLevel1").setType("SFBool"))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("activateLevel2").setType("SFBool")))
      .addChild((new autoclass.ROUTE()).setFromNode("activeLOD").setFromField("level_changed").setToNode("PreloadLevelsScript").setToField("level_changed"))
      .addChild((new autoclass.ROUTE()).setFromNode("PreloadLevelsScript").setFromField("activateLevel1").setToNode("InlineLevel1").setToField("load"))
      .addChild((new autoclass.ROUTE()).setFromNode("PreloadLevelsScript").setFromField("activateLevel2").setToNode("InlineLevel2").setToField("load")))
    .addChild((new autoclass.Group("ViewpointGroup"))
      .addChild((new autoclass.Viewpoint()).setDescription("level 0").setPosition(0.0,0.0,4.0))
      .addChild((new autoclass.Viewpoint()).setDescription("level 1").setPosition(0.0,0.0,8.0))
      .addChild((new autoclass.Viewpoint()).setDescription("level 2").setPosition(0.0,0.0,12.0))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return LODlevelChangedExample model
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
		var testObject = new LODlevelChangedExample();
		console.log ("LODlevelChangedExample execution self-validation test results: " + testObject.validateSelf());
	}
}
new LODlevelChangedExample().main();
process.exit(0);