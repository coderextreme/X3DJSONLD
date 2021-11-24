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
 * <p> Provides Prototype XML-tag-definition examples to demonstrate DTD modularization and extensibility in X3D scenes. Also see SpinGroupInternalSubsetDeclaration.x3d. </p>
 <p> Related links: <a href="../../../development/ProtoTagDtdDeclarationExamples.java">ProtoTagDtdDeclarationExamples.java</a> source, <a href="../../../development/ProtoTagDtdDeclarationExamplesIndex.html" target="_top">ProtoTagDtdDeclarationExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/ProtoTagDtdDeclarationExamples.x3d">ProtoTagDtdDeclarationExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 17 April 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> e-mail </i> </td>
			<td> brutzman@nps.navy.mil </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Provides Prototype XML-tag-definition examples to demonstrate DTD modularization and extensibility in X3D scenes. Also see SpinGroupInternalSubsetDeclaration.x3d </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> You must view full source of the DTD declarations (ProtoTagDtdDeclarationExamples.x3d.txt) to fully understand validation techniques in this file. </td>
		</tr>
		<tr style="color:red">
			<td style="text-align:right; vertical-align: text-top;"> <i> error </i> </td>
			<td> internal subset deficiency: nodeType attributes need to be converted to containerField attributes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> ProtoTagDtdDeclarationExamples.x3d.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> SpinGroupInternalSubsetDeclaration.x3d.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/ProtoTagDtdDeclarationExamples.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/ProtoTagDtdDeclarationExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.1, <a href="https://www.web3d.org/x3d/content/README.X3D-Edit.html" target="_blank">https://www.web3d.org/x3d/content/README.X3D-Edit.html</a> </td>
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

function ProtoTagDtdDeclarationExamples
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
ProtoTagDtdDeclarationExamples.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("ProtoTagDtdDeclarationExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("created").setContent("17 April 2000"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("e-mail").setContent("brutzman@nps.navy.mil"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Provides Prototype XML-tag-definition examples to demonstrate DTD modularization and extensibility in X3D scenes. Also see SpinGroupInternalSubsetDeclaration.x3d"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("You must view full source of the DTD declarations (ProtoTagDtdDeclarationExamples.x3d.txt) to fully understand validation techniques in this file."))
    .addMeta((new autoclass.meta()).setName("error").setContent("internal subset deficiency: nodeType attributes need to be converted to containerField attributes."))
    .addMeta((new autoclass.meta()).setName("reference").setContent("ProtoTagDtdDeclarationExamples.x3d.txt"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("SpinGroupInternalSubsetDeclaration.x3d.txt"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/ProtoTagDtdDeclarationExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addComments(" ********************************************************************* ")
    .addComments(" *** Step 5: Copy/edit ProtoDeclare, (optionally ProtoInstance) *** ")
    .addComments(" *** and the tagset version for your nodes of interest. *** ")
    .addComments(" *** When instantiating field Node/Nodes or field values, *** ")
    .addComments(" *** use fieldValue tags to override the initial values. *** ")
    .addComments(" *** The following example content instantiates prototype *** ")
    .addComments(" *** NewTransformExample using tags and ProtoInstance. *** ")
    .addComments(" ********************************************************************* ")
    .addComments(" Declaring the NewTransformExample PROTO: ")
    .addChild((new autoclass.ProtoDeclare()).setName("NewTransformExample")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("rotation").setType("SFRotation").setValue("0 0 1 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("center").setType("SFVec3f").setValue("0 0 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("scale").setType("SFVec3f").setValue("1 1 1"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("scaleOrientation").setType("SFRotation").setValue("0 0 1 0"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxCenter").setType("SFVec3f").setValue("0 0 0"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxSize").setType("SFVec3f").setValue("-1 -1 -1"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("children").setType("MFNode")
          .addChild((new autoclass.WorldInfo()).setInfo(new autoclass.MFString("\"overridden at run time\"")))))
      .setProtoBody((new autoclass.ProtoBody())
        .addComments(" Transform is first node, which determines node type, and encloses children for instances. ")
        .addChild((new autoclass.Transform("InitialTransform"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("translation"))
            .addConnect((new autoclass.connect()).setNodeField("rotation").setProtoField("rotation"))
            .addConnect((new autoclass.connect()).setNodeField("center").setProtoField("center"))
            .addConnect((new autoclass.connect()).setNodeField("scale").setProtoField("scale"))
            .addConnect((new autoclass.connect()).setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect((new autoclass.connect()).setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect((new autoclass.connect()).setNodeField("bboxSize").setProtoField("bboxSize"))
            .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("children"))))))
    .addComments(" Instantiating the NewTransformExample PROTO using a ProtoInstance tag: ")
    .addChild((new autoclass.ProtoInstance()).setName("NewTransformExample")
      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0 1.5 0"))
      .addFieldValue((new autoclass.fieldValue()).setName("children")
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.1,0.8,0.8)))
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ProtoTagDtdDeclaration Examples\" \"using a regular ProtoInstance\""))
            .setFontStyle((new autoclass.FontStyle("FS")).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.7))))))
    .addComments(" Instantiating the NewTransformExample node using a customized tag: ")
    .addChild((new autoclass.NewTransformExample()).setTranslation(0.0,-0.5,0.0).setCenter(0.0,0.0,0.0).setRotation(0.0,0.0,1.0,0.0).setScaleOrientation(0.0,0.0,1.0,0.0).setScale(1.0,1.0,1.0)
      .addFieldValue((new autoclass.fieldValue()).setName("children")
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.1,0.8,0.2)))
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"plus header-declared XML tag from\" \"XML document subset declaration\""))
            .setFontStyle((new autoclass.FontStyle()).setUSE("FS"))))))
    .addChild((new autoclass.Transform()).setTranslation(0.0,-2.0,0.0)
      .addChild((new autoclass.Anchor()).setDescription("Click to view source (ProtoTagDtdDeclarationExamples.x3d.txt)").setParameter(new autoclass.MFString("\"target=_blank\"")).setUrl(new autoclass.MFString("\"ProtoTagDtdDeclarationExamples.x3d.txt\" \"https://www.web3d.org/x3d/content/examples/development/ProtoTagDtdDeclarationExamples.x3d.txt\""))
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.8,0.4,0.1)))
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"(click to see source)\""))
            .setFontStyle((new autoclass.FontStyle()).setUSE("FS")))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return ProtoTagDtdDeclarationExamples model
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
		var testObject = new ProtoTagDtdDeclarationExamples();
		console.log ("ProtoTagDtdDeclarationExamples execution self-validation test results: " + testObject.validateSelf());
	}
}
new ProtoTagDtdDeclarationExamples().main();
process.exit(0);