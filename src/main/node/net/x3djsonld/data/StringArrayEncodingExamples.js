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
 * <p> Demonstrate simple X3D MFString (string array) encoding. </p>
 <p> Related links: <a href="../../../X3dSpecifications/StringArrayEncodingExamples.java">StringArrayEncodingExamples.java</a> source, <a href="../../../X3dSpecifications/StringArrayEncodingExamplesIndex.html" target="_top">StringArrayEncodingExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../X3dSpecifications/StringArrayEncodingExamples.x3d">StringArrayEncodingExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Demonstrate simple X3D MFString (string array) encoding. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 27 May 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 27 May 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d">X3dHeaderPrototypeSyntaxExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationSection </i> </td>
			<td> X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationUrl </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString" target="_blank">https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationSection </i> </td>
			<td> X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationUrl </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString" target="_blank">https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationSection </i> </td>
			<td> X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationUrl </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString" target="_blank">https://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../X3dSpecifications/../license.html">../license.html</a> </td>
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

function StringArrayEncodingExamples
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
StringArrayEncodingExamples.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("StringArrayEncodingExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Demonstrate simple X3D MFString (string array) encoding."))
    .addMeta((new autoclass.meta()).setName("created").setContent("27 May 2017"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("27 May 2017"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("X3dHeaderPrototypeSyntaxExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("specificationSection").setContent("X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString"))
    .addMeta((new autoclass.meta()).setName("specificationUrl").setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString"))
    .addMeta((new autoclass.meta()).setName("specificationSection").setContent("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString"))
    .addMeta((new autoclass.meta()).setName("specificationUrl").setContent("https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString"))
    .addMeta((new autoclass.meta()).setName("specificationSection").setContent("X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString"))
    .addMeta((new autoclass.meta()).setName("specificationUrl").setContent("https://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.Viewpoint("EntryView")).setDescription("Hello MFString syntax"))
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.6,1.0,0.8]))))
    .addChild((new autoclass.Shape())
      .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"One, Two, Three\" \"\" \"He said, \\\"Immel did it!\\\"\""))
        .addComments(" alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"' ")
        .addComments(" alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"Immel did it!\\\"\"}) ")
        .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setStyle("BOLD")))
      .setAppearance((new autoclass.Appearance())
        .setMaterial((new autoclass.Material()).setDiffuseColor(0.6,0.4,0.2)))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return StringArrayEncodingExamples model
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
		var testObject = new StringArrayEncodingExamples();
		console.log ("StringArrayEncodingExamples execution self-validation test results: " + testObject.validateSelf());
		process.exit();
	}
}
new StringArrayEncodingExamples().main();