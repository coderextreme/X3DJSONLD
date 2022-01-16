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
 * <p> X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding. </p>
 <p> Related links: <a href="../../../X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.java">X3dHeaderPrototypeSyntaxExamples.java</a> source, <a href="../../../X3dSpecifications/X3dHeaderPrototypeSyntaxExamplesIndex.html" target="_top">X3dHeaderPrototypeSyntaxExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d">X3dHeaderPrototypeSyntaxExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 14 October 2002 </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationSection </i> </td>
			<td> X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationUrl </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax" target="_blank">https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d</a> </td>
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

function X3dHeaderPrototypeSyntaxExamples
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
X3dHeaderPrototypeSyntaxExamples.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("Geospatial").setLevel(1))
    .addComponent((new autoclass.component()).setName("NURBS").setLevel(2))
    .addComponent((new autoclass.component()).setName("Core").setLevel(2))
    .addComponent((new autoclass.component()).setName("Navigation").setLevel(1))
    .addComponent((new autoclass.component()).setName("Text").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("X3dHeaderPrototypeSyntaxExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding."))
    .addMeta((new autoclass.meta()).setName("created").setContent("14 October 2002"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("27 May 2017"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("specificationSection").setContent("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax"))
    .addMeta((new autoclass.meta()).setName("specificationUrl").setContent("https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.ExternProtoDeclare()).setName("ViewPositionOrientation").setUrl(new autoclass.MFString("\"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation\" \"https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation\" \"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation\" \"https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation\""))
      .addField((new autoclass.field()).setName("enabled").setType("SFBool").setAccessType("inputOutput"))
      .addField((new autoclass.field()).setName("traceEnabled").setType("SFBool").setAccessType("initializeOnly"))
      .addField((new autoclass.field()).setName("set_traceEnabled").setType("SFBool").setAccessType("inputOnly"))
      .addField((new autoclass.field()).setName("position_changed").setType("SFVec3f").setAccessType("outputOnly"))
      .addField((new autoclass.field()).setName("orientation_changed").setType("SFRotation").setAccessType("outputOnly"))
      .addField((new autoclass.field()).setName("outputViewpointString").setType("MFString").setAccessType("outputOnly")))
    .addChild((new autoclass.ProtoDeclare()).setName("NewWorldInfoNode")
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.WorldInfo("ExamplePrototypeBody")))))
    .addChild((new autoclass.ProtoInstance()))
    .addChild((new autoclass.ProtoDeclare()).setName("EmissiveMaterial")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("onlyColor").setType("SFColor").setAccessType("inputOutput").setValue("1 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addComments(" Override default diffuseColor value 0.8 0.8 0.8 ")
        .addChild((new autoclass.Material()).setDiffuseColor(0.0,0.0,0.0)
          .addComments(" Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare. ")
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("emissiveColor").setProtoField("onlyColor"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("ShiftGroupUp2m")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("children").setType("MFNode").setAccessType("inputOutput")
          .addChild((new autoclass.Group("DefaultNodeValue")).setBboxSize(2.0,2.0,2.0)
            .addComments(" Authors need to override this node when creating the ProtoInstance fieldValue name=\"children\" "))))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform()).setTranslation(0.0,2.0,0.0)
          .addChild((new autoclass.Group())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("children")))))))
    .addChild((new autoclass.ProtoInstance()))
    .addComments(" ==================== ")
    .addChild((new autoclass.Viewpoint("ExampleSingleElement")).setDescription("Hello syntax"))
    .addChild((new autoclass.Group("ExampleChildElement"))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Box()))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.6,0.4,0.2)))))
    .addChild((new autoclass.Transform("TransformExampleUSE")).setRotation(0.0,1.0,0.0,0.78).setTranslation(0.0,2.5,0.0)
      .addChild((new autoclass.Group())))
    .addChild((new autoclass.Collision())
      .setProxy((new autoclass.Shape())
        .addComments(" note that Collision proxy Shape is not rendered ")
        .setGeometry((new autoclass.Sphere()))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()))))
      .addChild((new autoclass.Group())))
    .addChild((new autoclass.Transform()).setTranslation(0.0,-2.5,0.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.ProtoInstance())
            .addFieldValue((new autoclass.fieldValue()).setName("onlyColor").setValue("0.2 0.6 0.6"))))
        .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"X3D Header Prototype syntax examples\" \"(view console for EXTERNPROTO output)\""))
          .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.6)))))
    .addChild((new autoclass.ProtoInstance())
      .addFieldValue((new autoclass.fieldValue()).setName("enabled").setValue("true")))
    .addChild((new autoclass.TimeSensor("Clock")).setCycleInterval(4).setLoop(true))
    .addChild((new autoclass.OrientationInterpolator("Spinner")).setKey(java.newArray("float", [0.0,0.5,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.0,1.0,0.0,0.0,0.0,1.0,0.0,3.14159,0.0,1.0,0.0,6.28318]))))
    .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("Spinner").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Spinner").setFromField("value_changed").setToNode("TransformExampleUSE").setToField("rotation"))
    .addChild((new autoclass.Inline("someInline")).setUrl(new autoclass.MFString("\"someUrl.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d\"")))
    .addChild((new autoclass.IMPORT()).setImportedDEF("someName").setInlineDEF("someInline").setAS("someInlineRoot"))
    .addChild((new autoclass.PositionInterpolator("StayInPlace")).setKey(java.newArray("float", [0.0,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.0,0.0,0.0]))))
    .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("StayInPlace").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("StayInPlace").setFromField("value_changed").setToNode("someInlineRoot").setToField("set_translation")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return X3dHeaderPrototypeSyntaxExamples model
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
		var testObject = new X3dHeaderPrototypeSyntaxExamples();
		console.log ("X3dHeaderPrototypeSyntaxExamples execution self-validation test results: " + testObject.validateSelf());
	}
}
new X3dHeaderPrototypeSyntaxExamples().main();