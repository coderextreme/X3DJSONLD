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
 * <p> Create Script prototype to modify a PixelTexture as an image morph. </p>
 <p> Related links: <a href="../../../../Tools/Authoring/PixelTextureInterpolatorPrototype.java">PixelTextureInterpolatorPrototype.java</a> source, <a href="../../../../Tools/Authoring/PixelTextureInterpolatorPrototypeIndex.html" target="_top">PixelTextureInterpolatorPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Tools/Authoring/PixelTextureInterpolatorPrototype.x3d">PixelTextureInterpolatorPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Create Script prototype to modify a PixelTexture as an image morph </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 14 April 2008 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> 2D image PixelTexture morph </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://savage.nps.edu/Savage/Tools/Authoring/PixelTextureInterpolatorPrototype.x3d" target="_blank">https://savage.nps.edu/Savage/Tools/Authoring/PixelTextureInterpolatorPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../Tools/Authoring/../license.html">../license.html</a> </td>
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

function PixelTextureInterpolatorPrototype
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
PixelTextureInterpolatorPrototype.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.1")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("PixelTextureInterpolatorPrototype.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Create Script prototype to modify a PixelTexture as an image morph"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("14 April 2008"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("under development"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("2D image PixelTexture morph"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://savage.nps.edu/Savage/Tools/Authoring/PixelTextureInterpolatorPrototype.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("PixelTextureInterpolatorPrototype.x3d"))
    .addChild((new autoclass.ProtoDeclare()).setName("PixelTextureInterpolator")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_fraction").setType("SFFloat"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("key").setType("MFFloat"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("keyValue").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("value_changed").setType("SFImage"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("traceEnabled").setType("SFBool").setValue("true").setAppinfo("enable console output to trace script computations and prototype progress")))
      .setProtoBody((new autoclass.ProtoBody())
        .addComments(" First node determines node type of prototype ")
        .addChild((new autoclass.Script("ImageInterpolatorScript")).setUrl(new autoclass.MFString("\"PixelTextureInterpolator.js\" \"https://savage.nps.edu/Savage/Tools/Authoring/PixelTextureInterpolator.js\""))
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_fraction").setType("SFFloat"))
          .addField((new autoclass.field()).setAccessType("initializeOnly").setName("key").setType("MFFloat"))
          .addField((new autoclass.field()).setAccessType("initializeOnly").setName("keyValue").setType("MFNode")
            .addComments(" initialization nodes (if any) go here "))
          .addField((new autoclass.field()).setAccessType("outputOnly").setName("value_changed").setType("SFImage"))
          .addField((new autoclass.field()).setAccessType("initializeOnly").setName("traceEnabled").setType("SFBool"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("set_fraction").setProtoField("set_fraction"))
            .addConnect((new autoclass.connect()).setNodeField("key").setProtoField("key"))
            .addConnect((new autoclass.connect()).setNodeField("keyValue").setProtoField("keyValue"))
            .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("value_changed"))
            .addConnect((new autoclass.connect()).setNodeField("traceEnabled").setProtoField("traceEnabled"))))
        .addComments(" Subsequent nodes do not render, but still must be a valid X3D subgraph ")))
    .addComments(" renderable scene graph begins here ")
    .addChild((new autoclass.Shape())
      .setGeometry((new autoclass.Box()))
      .setAppearance((new autoclass.Appearance())
        .setTexture((new autoclass.PixelTexture("PixelColors")).setImage(java.newArray("int", [2,4,3,0xff0000,0xffff00,0x007700,0xff0077,0x0000ff,0xff7700,0x00ff77,0x888888])))))
    .addComments(" set of images, interpolated as a 2D morph ")
    .addChild((new autoclass.ProtoInstance("PixelTextureInterpolatorExample", "PixelTextureInterpolator")).setDEF("PixelTextureInterpolatorExample").setName("PixelTextureInterpolator")
      .addFieldValue((new autoclass.fieldValue()).setName("key").setValue("0 0.25 0.5 0.75 1"))
      .addFieldValue((new autoclass.fieldValue()).setName("keyValue")
        .addComments(" rotate two image values in each PixelTexture ")
        .addChild((new autoclass.PixelTexture()).setImage(java.newArray("int", [2,4,3,0xff0000,0xffff00,0x007700,0xff0077,0x0000ff,0xff7700,0x00ff77,0x888888])))
        .addChild((new autoclass.PixelTexture()).setImage(java.newArray("int", [2,4,3,0x007700,0xff0077,0x0000ff,0xff7700,0x00ff77,0x888888,0xff0000,0xffff00])))
        .addChild((new autoclass.PixelTexture()).setImage(java.newArray("int", [2,4,3,0x0000ff,0xff7700,0x00ff77,0x888888,0xff0000,0xffff00,0x007700,0xff0077])))
        .addChild((new autoclass.PixelTexture()).setImage(java.newArray("int", [2,4,3,0x00ff77,0x888888,0xff0000,0xffff00,0x007700,0xff0077,0x0000ff,0xff7700])))
        .addComments(" last PixelTexture matches first, would like to DEF and USE within a fieldValue initialization ")
        .addChild((new autoclass.PixelTexture()).setImage(java.newArray("int", [2,4,3,0xff0000,0xffff00,0x007700,0xff0077,0x0000ff,0xff7700,0x00ff77,0x888888]))))
      .addFieldValue((new autoclass.fieldValue()).setName("traceEnabled").setValue("true")))
    .addChild((new autoclass.TimeSensor("Time")).setCycleInterval(4))
    .addChild((new autoclass.ROUTE()).setFromNode("PixelTextureInterpolatorExample").setFromField("value_changed").setToNode("PixelColors").setToField("image"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time").setFromField("fraction_changed").setToNode("PixelTextureInterpolatorExample").setToField("set_fraction")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return PixelTextureInterpolatorPrototype model
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
		var testObject = new PixelTextureInterpolatorPrototype();
		console.log ("PixelTextureInterpolatorPrototype execution self-validation test results: " + testObject.validateSelf());
	}
}
new PixelTextureInterpolatorPrototype().main();
process.exit(0);