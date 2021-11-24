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
 * <p> Simple PROTO example, includes Node as a field for PROTO. </p>
 <p> Related links: <a href="../../../development/ProtoInstanceExample.java">ProtoInstanceExample.java</a> source, <a href="../../../development/ProtoInstanceExampleIndex.html" target="_top">ProtoInstanceExample catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/ProtoInstanceExample.x3d">ProtoInstanceExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 June 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Simple PROTO example, includes Node as a field for PROTO </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/ProtoInstanceExample.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/ProtoInstanceExample.x3d</a> </td>
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

function ProtoInstanceExample
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
ProtoInstanceExample.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("ProtoInstanceExample.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("26 June 2000"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Simple PROTO example, includes Node as a field for PROTO"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/ProtoInstanceExample.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("ProtoInstanceExample.x3d"))
    .addChild((new autoclass.ProtoDeclare()).setName("NewShape")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("InitialAppearance").setType("SFNode")
          .addChild((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0))))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("newHeight").setType("SFFloat").setValue("3"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("newRadius").setType("SFFloat").setValue("0.5")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Shape("ContainedShape"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("appearance").setProtoField("InitialAppearance")))
          .setGeometry((new autoclass.Cylinder("ContainedCylinder"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("height").setProtoField("newHeight"))
              .addConnect((new autoclass.connect()).setNodeField("radius").setProtoField("newRadius")))))))
    .addChild((new autoclass.Billboard())
      .addChild((new autoclass.ProtoInstance()).setName("NewShape")
        .addFieldValue((new autoclass.fieldValue()).setName("newHeight").setValue("3"))
        .addFieldValue((new autoclass.fieldValue()).setName("newRadius").setValue("4"))
        .addFieldValue((new autoclass.fieldValue()).setName("InitialAppearance")
          .addChild((new autoclass.Appearance())
            .setMaterial((new autoclass.Material("CylinderMaterial")).setDiffuseColor(0.0,1.0,0.0)))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return ProtoInstanceExample model
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
		var testObject = new ProtoInstanceExample();
		console.log ("ProtoInstanceExample execution self-validation test results: " + testObject.validateSelf());
	}
}
new ProtoInstanceExample().main();
process.exit(0);