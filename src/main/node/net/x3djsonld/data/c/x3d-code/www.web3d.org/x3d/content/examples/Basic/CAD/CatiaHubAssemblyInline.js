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
 * <p> CatiaHubAssembly model demonstrating external referencing of geometry files using Prototype with Inline. </p>
 <p> Related links: <a href="../../../CAD/CatiaHubAssemblyInline.java">CatiaHubAssemblyInline.java</a> source, <a href="../../../CAD/CatiaHubAssemblyInlineIndex.html" target="_top">CatiaHubAssemblyInline catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../CAD/CatiaHubAssemblyInline.x3d">CatiaHubAssemblyInline.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> CatiaHubAssembly model demonstrating external referencing of geometry files using Prototype with Inline. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Hyokwang Lee, PartDB Co., Ltd. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Xj3D, <a href="http://www.xj3d.org" target="_blank">http://www.xj3d.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 25 July 2012 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-X3DAbstractSpecification/Part01/components/CADGeometry.html" target="_blank">https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-X3DAbstractSpecification/Part01/components/CADGeometry.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D CAD CADInterchange profile </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubAssemblyInline.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubAssemblyInline.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> CATIA V5 R18 and PartDB Converter with Xj3D </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../CAD/../license.html">../license.html</a> </td>
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

	* @author Hyokwang Lee, PartDB Co., Ltd.
 */

function CatiaHubAssemblyInline
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
CatiaHubAssemblyInline.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Interactive").setVersion("3.1")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("CADGeometry").setLevel(2))
    .addMeta((new autoclass.meta()).setName("title").setContent("CatiaHubAssemblyInline.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("CatiaHubAssembly model demonstrating external referencing of geometry files using Prototype with Inline."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Hyokwang Lee, PartDB Co., Ltd."))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Xj3D, http://www.xj3d.org"))
    .addMeta((new autoclass.meta()).setName("created").setContent("25 July 2012"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-X3DAbstractSpecification/Part01/components/CADGeometry.html"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("X3D CAD CADInterchange profile"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubAssemblyInline.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("CATIA V5 R18 and PartDB Converter with Xj3D"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("CatiaHubAssemblyInline.x3d"))
    .addChild((new autoclass.Viewpoint()).setDescription("Hello CatiaHubAssemblyInline").setPosition(0.0,0.0,1.0))
    .addChild((new autoclass.Transform("RootTransform"))
      .addChild((new autoclass.CADAssembly()).setName("Hub_Assembly")
        .addChild((new autoclass.Transform("TransformCatiaHubDiscWithHoles"))
          .addChild((new autoclass.CADAssembly()).setName("disc_with_holes")
            .addChild((new autoclass.Inline("CatiaHubDiscWithHoles")).setUrl(new autoclass.MFString("\"CatiaHubDiscWithHoles.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubDiscWithHoles.x3d\" \"CatiaHubDiscWithHoles.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubDiscWithHoles.wrl\"")))))
        .addChild((new autoclass.Transform("TransformCatiaHubCap")).setTranslation(0.0,0.0,0.030)
          .addChild((new autoclass.CADAssembly()).setName("cap")
            .addChild((new autoclass.Inline("CatiaHubCap")).setUrl(new autoclass.MFString("\"CatiaHubCap.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubCap.x3d\" \"CatiaHubCap.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubCap.wrl\"")))))
        .addChild((new autoclass.Transform("TransformCatiaHubGasket"))
          .addChild((new autoclass.CADAssembly()).setName("sleeve_sub_assembly")
            .addChild((new autoclass.Transform("Transform")).setTranslation(0.0,0.0,0.050)
              .addChild((new autoclass.Inline("CatiaHubGasket")).setUrl(new autoclass.MFString("\"CatiaHubGasket.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubGasket.x3d\" \"CatiaHubGasket.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubGasket.wrl\""))))))
        .addChild((new autoclass.Transform("TransformCatiaHubBushing")).setTranslation(0.0,0.0,0.085)
          .addChild((new autoclass.CADAssembly()).setName("cylinder")
            .addChild((new autoclass.Inline("CatiaHubBushing")).setUrl(new autoclass.MFString("\"CatiaHubBushing.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubBushing.x3d\" \"CatiaHubBushing.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubBushing.wrl\""))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return CatiaHubAssemblyInline model
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
		var testObject = new CatiaHubAssemblyInline();
		console.log ("CatiaHubAssemblyInline execution self-validation test results: " + testObject.validateSelf());
	}
}
new CatiaHubAssemblyInline().main();
process.exit(0);