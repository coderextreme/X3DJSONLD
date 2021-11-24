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
 * <p> New X3D Metadata nodes in Core component (MetadataBoolean MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString) implemented as prototypes for backwards compatibility with VRML 97. </p>
 <p> Related links: <a href="../../../development/MetadataPrototypes.java">MetadataPrototypes.java</a> source, <a href="../../../development/MetadataPrototypesIndex.html" target="_top">MetadataPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/MetadataPrototypes.x3d">MetadataPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> New X3D Metadata nodes in Core component (MetadataBoolean MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString) implemented as prototypes for backwards compatibility with VRML 97. </td>
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
			<td> 12 March 2021 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/MetadataExamples.x3d">MetadataExamples.x3d</a> </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d</a> </td>
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

function MetadataPrototypes
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
MetadataPrototypes.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: WorldInfo info field, scene-graph level=5, element #20, 17 total values */
	this.WorldInfo_5_20_info = new autoclass.MFString(new autoclass.MFString("\"WorldInfo as first node in the ProtoBody precludes any possible rendering of further nodes in this prototype\""));

	/** Large attribute array: WorldInfo info field, scene-graph level=5, element #41, 17 total values */
	this.WorldInfo_5_41_info = new autoclass.MFString(new autoclass.MFString("\"WorldInfo as first node in the ProtoBody precludes any possible rendering of further nodes in this prototype\""));

	/** Large attribute array: WorldInfo info field, scene-graph level=5, element #64, 17 total values */
	this.WorldInfo_5_64_info = new autoclass.MFString(new autoclass.MFString("\"WorldInfo as first node in the ProtoBody precludes any possible rendering of further nodes in this prototype\""));

	/** Large attribute array: WorldInfo info field, scene-graph level=5, element #88, 17 total values */
	this.WorldInfo_5_88_info = new autoclass.MFString(new autoclass.MFString("\"WorldInfo as first node in the ProtoBody precludes any possible rendering of further nodes in this prototype\""));

	/** Large attribute array: ProtoDeclare appinfo field, scene-graph level=3, element #107, 17 total values */
	this.ProtoDeclare_MetadataSet_3_107_appinfo = new autoclass.SFString("MetadataSet contains a list of Metadata nodes in the value field. MetadataSet can contain other MetadataSet nodes.");

	/** Large attribute array: WorldInfo info field, scene-graph level=5, element #112, 17 total values */
	this.WorldInfo_5_112_info = new autoclass.MFString(new autoclass.MFString("\"WorldInfo as first node in the ProtoBody precludes any possible rendering of further nodes in this prototype\""));

	/** Large attribute array: WorldInfo info field, scene-graph level=5, element #132, 17 total values */
	this.WorldInfo_5_132_info = new autoclass.MFString(new autoclass.MFString("\"WorldInfo as first node in the ProtoBody precludes any possible rendering of further nodes in this prototype\""));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("MetadataPrototypes.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("New X3D Metadata nodes in Core component (MetadataBoolean MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString) implemented as prototypes for backwards compatibility with VRML 97."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("17 November 2003"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("12 March 2021"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("MetadataExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("Metadata nodes, X3D Core component (MetadataBoolean MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString)"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Metadata"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#X3DMetadataObject"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Nodereference"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addComments(" ==================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("MetadataBoolean").setAppinfo("MetadataBoolean contains a list of booleans in the value field.")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("value").setType("MFBool"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("reference").setType("SFString"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("Metadata node only")
          .addComments(" initialization node (if any) goes here ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.WorldInfo()).setInfo(this.WorldInfo_5_20_info))
        .addChild((new autoclass.Group())
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("metadata").setProtoField("metadata")))
          .addComments(" name holder ")
          .addChild((new autoclass.Viewpoint())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("description").setProtoField("name"))))
          .addComments(" value holder; IS/connect possibilities are limited since no MFBool fields exist in other VRML/X3D nodes ")
          .addComments(" Alternative: no metadata holder, since there is no exposedField SFNode in VRML 97. metadata SFNode simply sits in the ProtoInterface. Run-time instantiation support may vary. ")
          .addChild((new autoclass.Script()).setUrl(new autoclass.MFString("\"ignoreWarning.js\" \"https://www.web3d.org/x3d/content/examples/Basic/development/ignoreWarning.js\""))
            .addField((new autoclass.field()).setAccessType("inputOutput").setName("booleanArray").setType("MFBool"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("booleanArray").setProtoField("value"))))
          .addComments(" reference holder ")
          .addChild((new autoclass.Viewpoint())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("description").setProtoField("reference")))))))
    .addComments(" ==================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("MetadataDouble").setAppinfo("MetadataDouble contains a list of double-precision floating-point numbers in the value field.")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("value").setType("MFDouble"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("reference").setType("SFString"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.WorldInfo()).setInfo(this.WorldInfo_5_41_info))
        .addChild((new autoclass.Group())
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("metadata").setProtoField("metadata")))
          .addComments(" name holder ")
          .addChild((new autoclass.Viewpoint())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("description").setProtoField("name"))))
          .addComments(" value holder: X3D MFDouble maps to VRML 97MFFloat ")
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"\""))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("length").setProtoField("value"))))
            .setAppearance((new autoclass.Appearance("HideWarnings2"))
              .addComments(" note that each Prototype has an independent DEF/USE namespace, and thus must avoid re-using identical DEF names within multiple prototype declarations in order to pass all validation requirements. ")
              .setMaterial((new autoclass.Material()))))
          .addComments(" reference holder ")
          .addChild((new autoclass.Viewpoint())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("description").setProtoField("reference"))))
          .addComments(" no metadata holder, since there is no exposedField SFNode in VRML 97. metadata SFNode simply sits in the ProtoInterface. Run-time instantiation support may vary. "))))
    .addComments(" ==================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("MetadataFloat").setAppinfo("MetadataFloat contains a list of floating-point numbers in the value field.")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("value").setType("MFFloat"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("reference").setType("SFString"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.WorldInfo()).setInfo(this.WorldInfo_5_64_info))
        .addChild((new autoclass.Group())
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("metadata").setProtoField("metadata")))
          .addComments(" name holder ")
          .addChild((new autoclass.Viewpoint())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("description").setProtoField("name"))))
          .addComments(" value holder ")
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"\""))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("length").setProtoField("value"))))
            .setAppearance((new autoclass.Appearance("HideWarnings3"))
              .addComments(" note that each Prototype has an independent DEF/USE namespace, and thus must avoid re-using identical DEF names within multiple prototype declarations in order to pass all validation requirements. ")
              .setMaterial((new autoclass.Material()))))
          .addComments(" reference holder ")
          .addChild((new autoclass.Viewpoint())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("description").setProtoField("reference"))))
          .addComments(" no metadata holder, since there is no exposedField SFNode in VRML 97. metadata SFNode simply sits in the ProtoInterface. Run-time instantiation support may vary. "))))
    .addComments(" ==================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("MetadataInteger").setAppinfo("MetadataInteger contains a list of 32-bit integer numbers in the value field.")
      .addComments(" VRML 97 has no native exposedField MFInt32, and so must split value accessors to match available accessTypes. ")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("value").setType("MFInt32"))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_value").setType("MFInt32"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("reference").setType("SFString"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.WorldInfo()).setInfo(this.WorldInfo_5_88_info))
        .addChild((new autoclass.Group())
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("metadata").setProtoField("metadata")))
          .addComments(" name holder ")
          .addChild((new autoclass.Viewpoint())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("description").setProtoField("name"))))
          .addComments(" value holder ")
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.IndexedLineSet())
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("colorIndex").setProtoField("value"))
                .addConnect((new autoclass.connect()).setNodeField("set_colorIndex").setProtoField("set_value"))))
            .setAppearance((new autoclass.Appearance("HideWarnings4"))
              .addComments(" note that each Prototype has an independent DEF/USE namespace, and thus must avoid re-using identical DEF names within multiple prototype declarations in order to pass all validation requirements. ")
              .setMaterial((new autoclass.Material()).setEmissiveColor(0.8,0.8,0.8))))
          .addComments(" reference holder ")
          .addChild((new autoclass.Viewpoint())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("description").setProtoField("reference"))))
          .addComments(" no metadata holder, since there is no exposedField SFNode in VRML 97. metadata SFNode simply sits in the ProtoInterface. Run-time instantiation support may vary. "))))
    .addComments(" ==================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("MetadataSet").setAppinfo(this.ProtoDeclare_MetadataSet_3_107_appinfo)
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("value").setType("MFNode")
          .addComments(" Specification initialization: NULL node "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("reference").setType("SFString"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.WorldInfo()).setInfo(this.WorldInfo_5_112_info))
        .addChild((new autoclass.Group())
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("metadata").setProtoField("metadata")))
          .addComments(" name holder ")
          .addChild((new autoclass.Viewpoint())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("description").setProtoField("name"))))
          .addComments(" value holder ")
          .addChild((new autoclass.Group())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("value"))))
          .addComments(" reference holder ")
          .addChild((new autoclass.Viewpoint())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("description").setProtoField("reference"))))
          .addComments(" no metadata holder, since there is no exposedField SFNode in VRML 97. metadata SFNode simply sits in the ProtoInterface. Run-time instantiation support may vary. "))))
    .addComments(" ==================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("MetadataString").setAppinfo("MetadataString contains a list of strings in the value field.")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("value").setType("MFString"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("reference").setType("SFString"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("Metadata node only")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.WorldInfo()).setInfo(this.WorldInfo_5_132_info))
        .addChild((new autoclass.Group())
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("metadata").setProtoField("metadata")))
          .addComments(" name holder ")
          .addChild((new autoclass.Viewpoint())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("description").setProtoField("name"))))
          .addComments(" value holder ")
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Text())
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("string").setProtoField("value"))))
            .setAppearance((new autoclass.Appearance("HideWarnings5"))
              .addComments(" note that each Prototype has an independent DEF/USE namespace, and thus must avoid re-using identical DEF names within multiple prototype declarations in order to pass all validation requirements. ")
              .setMaterial((new autoclass.Material()))))
          .addComments(" reference holder ")
          .addChild((new autoclass.Viewpoint())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("description").setProtoField("reference"))))
          .addComments(" no metadata holder, since there is no exposedField SFNode in VRML 97. metadata SFNode simply sits in the ProtoInterface. Run-time instantiation support may vary. "))))
    .addComments(" ==================== ")
    .addChild((new autoclass.Background()).setGroundColor(new autoclass.MFColor(java.newArray("float", [0.25,0.25,0.25]))).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.25,0.25,0.25]))))
    .addChild((new autoclass.Anchor("LinkToExamples")).setDescription("link to examples").setUrl(new autoclass.MFString("\"MetadataExamples.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/development/MetadataExamples.x3d\" \"MetadataExamples.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/development/MetadataExamples.wrl\""))
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.8,0.6,0.2)))
        .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"MetadataPrototypes\" \"is a developmental file.\" \"Click this text to view\" \"MetadataExamples\""))
          .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.75))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return MetadataPrototypes model
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
		var testObject = new MetadataPrototypes();
		console.log ("MetadataPrototypes execution self-validation test results: " + testObject.validateSelf());
	}
}
new MetadataPrototypes().main();
process.exit(0);