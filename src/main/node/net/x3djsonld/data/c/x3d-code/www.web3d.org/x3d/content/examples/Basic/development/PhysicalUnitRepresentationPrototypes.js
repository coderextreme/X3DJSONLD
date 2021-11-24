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
 * <p> Prototypes to demonstrate functionality for Real-Length Representation nodes. </p>
 <p> Related links: <a href="../../../development/PhysicalUnitRepresentationPrototypes.java">PhysicalUnitRepresentationPrototypes.java</a> source, <a href="../../../development/PhysicalUnitRepresentationPrototypesIndex.html" target="_top">PhysicalUnitRepresentationPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/PhysicalUnitRepresentationPrototypes.x3d">PhysicalUnitRepresentationPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Prototypes to demonstrate functionality for Real-Length Representation nodes. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 22 July 2007 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Myeon Won Lee and Sun-Young Cho, "Real Length Representation for Virtual Objects," point paper, University of Suwon, Korea, June 2007. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D scaling and metadata convenience nodes </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/PhysicalUnitRepresentationPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/PhysicalUnitRepresentationPrototypes.x3d</a> </td>
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

function PhysicalUnitRepresentationPrototypes
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
PhysicalUnitRepresentationPrototypes.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("PhysicalUnitRepresentationPrototypes.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Prototypes to demonstrate functionality for Real-Length Representation nodes."))
    .addMeta((new autoclass.meta()).setName("warning").setContent("under development"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("22 July 2007"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("Myeon Won Lee and Sun-Young Cho, \"Real Length Representation for Virtual Objects,\" point paper, University of Suwon, Korea, June 2007."))
    .addMeta((new autoclass.meta()).setName("subject").setContent("X3D scaling and metadata convenience nodes"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/PhysicalUnitRepresentationPrototypes.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addComments(" ==================== ")
    .addComments(" Initial approach: direct scaling ")
    .addChild((new autoclass.WorldInfo()).setTitle("PhysicalUnitRepresentationPrototypes.x3d"))
    .addChild((new autoclass.Transform("MyZeptoScale")).setScale(1.0E-10,1.0E-10,1.0E-10)
      .addChild((new autoclass.Transform()).setScale(1.0E-11,1.0E-11,1.0E-11)
        .setMetadata((new autoclass.MetadataString()).setName("lengthUnit").setValue(new autoclass.MFString("\"ZEPTO meters\"")))
        .addComments(" scaled content goes here ")
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Box())))))
    .addComments(" ==================== ")
    .addComments(" Second approach: prototype nodes for scaling ")
    .addComments(" ==================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("ZeptoScale").setAppinfo("ZeptoScale applies a uniform scale factor of 10^-21 to all children")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("children").setType("MFNode")
          .addComments(" initialization: NULL node "))
        .addComments(" TODO: can add other fields for Transform node here to ensure completeness "))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform("ZeptoScale")).setScale(1.0E-10,1.0E-10,1.0E-10)
          .addChild((new autoclass.Transform()).setScale(1.0E-11,1.0E-11,1.0E-11)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("children")))))))
    .addComments(" ==================== ")
    .addComments(" Example use of prototype: the following should be very very small... ")
    .addChild((new autoclass.ProtoInstance()).setName("ZeptoScale")
      .addFieldValue((new autoclass.fieldValue()).setName("children")
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Sphere())))))
    .addComments(" ==================== ")
    .addChild((new autoclass.Background()).setGroundColor(new autoclass.MFColor(java.newArray("float", [0.25,0.25,0.25]))).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.25,0.25,0.25])))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return PhysicalUnitRepresentationPrototypes model
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
		var testObject = new PhysicalUnitRepresentationPrototypes();
		console.log ("PhysicalUnitRepresentationPrototypes execution self-validation test results: " + testObject.validateSelf());
	}
}
new PhysicalUnitRepresentationPrototypes().main();
process.exit(0);