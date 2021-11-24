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
 * <p> Examples showing use of new X3D Metadata nodes in Core component (MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString). Also provided: external prototype definitions for backwards compatibility with VRML 97. </p>
 <p> Related links: <a href="../../../development/MetadataExamples.java">MetadataExamples.java</a> source, <a href="../../../development/MetadataExamplesIndex.html" target="_top">MetadataExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/MetadataExamples.x3d">MetadataExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Examples showing use of new X3D Metadata nodes in Core component (MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString). Also provided: external prototype definitions for backwards compatibility with VRML 97. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> hint </i> </td>
			<td> Metadata nodes may be repositioned by a few lines if VRML97 parent node does not support the children field. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 17 November 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 January 2020 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> The external prototype declarations in this file are only intended for use with browsers that do not already support the Metadata nodes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/MetadataPrototypes.x3d">MetadataPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Metadata nodes, X3D Core component (MetadataBoolean MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Metadata" target="_blank">https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Metadata</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#X3DMetadataObject" target="_blank">https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#X3DMetadataObject</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Nodereference" target="_blank">https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Nodereference</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/MetadataExamples.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/MetadataExamples.x3d</a> </td>
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

function MetadataExamples
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
MetadataExamples.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: MetadataString value field, scene-graph level=6, element #56, 14 total values */
	this.MetadataString_containerFieldDefaultTest_6_56_value = new autoclass.MFString(new autoclass.MFString("\"This initial node is containerField=metadata on the MetadataSet, not part of the containerField=value set\""));

	/** Large attribute array: Text string field, scene-graph level=5, element #72, 26 total values */
	this.Text_5_72_string = new autoclass.MFString(new autoclass.MFString("\"MetadataExamples is a developmental file to define\" \"EXTERNPROTO signatures in VRML 97 syntax\" \"Example usage of Metadata nodes also included.\" \"\" \"Click text to view source\""));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("MetadataExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Examples showing use of new X3D Metadata nodes in Core component (MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString). Also provided: external prototype definitions for backwards compatibility with VRML 97."))
    .addMeta((new autoclass.meta()).setName("hint").setContent("Metadata nodes may be repositioned by a few lines if VRML97 parent node does not support the children field."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("17 November 2003"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 January 2020"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("The external prototype declarations in this file are only intended for use with browsers that do not already support the Metadata nodes."))
    .addMeta((new autoclass.meta()).setName("reference").setContent("MetadataPrototypes.x3d"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("Metadata nodes, X3D Core component (MetadataBoolean MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString)"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Metadata"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#X3DMetadataObject"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Nodereference"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/MetadataExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addComments(" ==================== ")
    .addComments(" Do not copy these ExternProtoDeclare statements, they are only included for preparation of X3dToVrml97.xslt stylesheet mappings for backwards compatibility. ")
    .addComments(" ==================== ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("MetadataBoolean").setAppinfo("MetadataBoolean contains a list of booleans in the value field.").setUrl(new autoclass.MFString("\"MetadataPrototypes.x3d#MetadataBoolean\" \"https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataBoolean\" \"MetadataPrototypes.wrl#MetadataBoolean\" \"https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataBoolean\""))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString").setAppinfo("default value"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("value").setType("MFBool").setAppinfo("default value"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("reference").setType("SFString").setAppinfo("default value"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("Metadata node only")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("MetadataDouble").setAppinfo("MetadataDouble contains a list of double-precision floating-point numbers in the value field.").setUrl(new autoclass.MFString("\"MetadataPrototypes.x3d#MetadataDouble\" \"https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataDouble\" \"MetadataPrototypes.wrl#MetadataDouble\" \"https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataDouble\""))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("value").setType("MFDouble"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("reference").setType("SFString"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("MetadataFloat").setAppinfo("MetadataFloat contains a list of floating-point numbers in the value field.").setUrl(new autoclass.MFString("\"MetadataPrototypes.x3d#MetadataFloat\" \"https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataFloat\" \"MetadataPrototypes.wrl#MetadataFloat\" \"https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataFloat\""))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("value").setType("MFFloat"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("reference").setType("SFString"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("MetadataInteger").setAppinfo("MetadataInteger contains a list of 32-bit integer numbers in the value field.").setUrl(new autoclass.MFString("\"MetadataPrototypes.x3d#MetadataInteger\" \"https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataInteger\" \"MetadataPrototypes.wrl#MetadataInteger\" \"https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataInteger\""))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("value").setType("MFInt32"))
      .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_value").setType("MFInt32"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("reference").setType("SFString"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("MetadataSet").setAppinfo("MetadataSet contains a list of nodes in the value field.").setUrl(new autoclass.MFString("\"MetadataPrototypes.x3d#MetadataSet\" \"https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataSet\" \"MetadataPrototypes.wrl#MetadataSet\" \"https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataSet\""))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("value").setType("MFNode"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("reference").setType("SFString"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("MetadataString").setAppinfo("MetadataString contains a set of strings in the value field.").setUrl(new autoclass.MFString("\"MetadataPrototypes.x3d#MetadataString\" \"https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataString\" \"MetadataPrototypes.wrl#MetadataString\" \"https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataString\""))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("value").setType("MFString"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("reference").setType("SFString"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addComments(" =========================== ")
    .addComments(" Example Metadata node usage ")
    .addComments(" =========================== ")
    .addChild((new autoclass.Group())
      .setMetadata((new autoclass.MetadataBoolean("MetadataBooleanInstance")).setName("sample boolean data").setReference("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataBoolean").setValue(java.newArray("boolean", [true,false,true])))
      .addChild((new autoclass.Transform())
        .setMetadata((new autoclass.MetadataDouble("MetadataDoubleInstance")).setName("sample double data").setValue(java.newArray("double", [1.0,2.0,3.0])).setReference("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataDouble")))
      .addChild((new autoclass.Transform())
        .setMetadata((new autoclass.MetadataFloat()).setName("sample float data").setValue(java.newArray("float", [1.0,2.0,3.0])).setReference("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataFloat")
          .setMetadata((new autoclass.MetadataDouble()).setUSE("MetadataDoubleInstance"))
          .addComments(" metadata child of metadata node (also note nested PROTO here, when translated) ")))
      .addChild((new autoclass.Transform())
        .setMetadata((new autoclass.MetadataInteger()).setName("sample integer data").setValue(java.newArray("int", [1,2,3])).setReference("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataInteger")))
      .addChild((new autoclass.Transform())
        .setMetadata((new autoclass.MetadataSet()).setName("sample data").setReference("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataSet")
          .setMetadata((new autoclass.MetadataString()).setName("containerFieldDefaultTest").setValue(this.MetadataString_containerFieldDefaultTest_6_56_value))
          .addComments(" be sure to set containerField='value' for all members of the contained set! ")
          .addValue((new autoclass.MetadataBoolean()).setName("MetadataSetValue1").setValue(java.newArray("boolean", [true,false,true])))
          .addValue((new autoclass.MetadataDouble()).setName("MetadataSetValue2").setValue(java.newArray("double", [0.0,1.0,2.0])))
          .addValue((new autoclass.MetadataFloat()).setName("MetadataSetValue3").setValue(java.newArray("float", [3.0,4.0,5.0])))
          .addValue((new autoclass.MetadataInteger()).setName("MetadataSetValue4").setValue(java.newArray("int", [6,7,8])))
          .addValue((new autoclass.MetadataString()).setName("MetadataSetValue5").setValue(new autoclass.MFString("\"string1\" \"string2\"")))))
      .addChild((new autoclass.Transform())
        .setMetadata((new autoclass.MetadataString()).setName("sample string data").setValue(new autoclass.MFString("\"one two three\" \"four five six\"")).setReference("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataString")))
      .addChild((new autoclass.Group())
        .addChild((new autoclass.WorldInfo("TestMetadataChild"))
          .setMetadata((new autoclass.MetadataString()).setName("Backwards compatibility note").setValue(new autoclass.MFString("\"Metadata nodes are converted into comments when children [ ] field is not available in parent node\""))))))
    .addComments(" ==================== ")
    .addChild((new autoclass.Anchor("LinkToExamples")).setDescription("link to examples").setParameter(new autoclass.MFString("\"target=_blank\"")).setUrl(new autoclass.MFString("\"MetadataExamples.html\" \"https://www.web3d.org/x3d/content/examples/Basic/development/MetadataExamplesIndex.html\""))
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.8,0.6,0.2)))
        .setGeometry((new autoclass.Text()).setString(this.Text_5_72_string)
          .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.5))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return MetadataExamples model
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
		var testObject = new MetadataExamples();
		console.log ("MetadataExamples execution self-validation test results: " + testObject.validateSelf());
	}
}
new MetadataExamples().main();
process.exit(0);