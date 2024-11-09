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
 * <p> Scuba gear used by Nancy Diving example. </p>
 <p> Related links: NeedClassName.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">NeedClassName&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d">ScubaTank.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Scuba gear used by Nancy Diving example. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Etsuko Lippi </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 24 January 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 23 May 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/../license.html">../license.html</a> </td>
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

	* @author Etsuko Lippi
 */

function NeedClassName
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
NeedClassName.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Interchange").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("ScubaTank.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Scuba gear used by Nancy Diving example."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Etsuko Lippi"))
    .addMeta((new autoclass.meta()).setName("created").setContent("24 January 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("23 May 2020"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("ScubaTank.x3d"))
    .addChild((new autoclass.Transform("ScubaTank"))
      .addChild((new autoclass.Transform())
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material("tank")).setAmbientIntensity(0.3).setDiffuseColor(0.3,0.3,0.5).setShininess(0.10).setSpecularColor(0.7,0.7,0.8)))
          .setGeometry((new autoclass.Cylinder()).setHeight(0.7).setRadius(0.1))))
      .addChild((new autoclass.Transform()).setTranslation(0.0,0.35,0.0)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material())))
          .setGeometry((new autoclass.Sphere()).setRadius(0.098))))
      .addChild((new autoclass.Transform()).setTranslation(0.0,-0.35,0.0)
        .addChild((new autoclass.Shape("tankBottom"))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material("black")).setAmbientIntensity(0.3).setDiffuseColor(0.0,0.0,0.0)))
          .setGeometry((new autoclass.Cylinder()).setHeight(0.06).setRadius(0.115))))
      .addChild((new autoclass.Group("tankNozzle"))
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Transform()).setTranslation(0.0,0.45,0.0)
            .addChild((new autoclass.Shape("pressure"))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material("pressureColor")).setAmbientIntensity(0.4).setDiffuseColor(0.91,0.91,0.91).setShininess(0.16).setSpecularColor(0.91,0.90,0.91)))
              .setGeometry((new autoclass.Cylinder()).setHeight(0.1).setRadius(0.015))))
          .addChild((new autoclass.Transform()).setTranslation(0.0,0.50,0.0)
            .addChild((new autoclass.Shape("pressureTop"))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material())))
              .setGeometry((new autoclass.Cylinder()).setHeight(0.02).setRadius(0.025))))
          .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,1.57).setTranslation(-0.028,0.462,0.0)
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape("connectorToRegulator"))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material())))
                .setGeometry((new autoclass.Cylinder()).setHeight(0.03).setRadius(0.01))))
            .addChild((new autoclass.Transform()).setTranslation(0.0,0.02,0.0)
              .addChild((new autoclass.Shape("connectorToRegulatorTop"))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material())))
                .setGeometry((new autoclass.Cylinder()).setHeight(0.02).setRadius(0.02)))))))
      .addChild((new autoclass.Transform()).setTranslation(0.0,0.2,0.0)
        .addChild((new autoclass.Shape("tankHoldBelt"))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material())))
          .setGeometry((new autoclass.Cylinder()).setHeight(0.1).setRadius(0.115)))))
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.6,0.6,0.6])))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return NeedClassName model
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
		var testObject = new NeedClassName();
		console.log ("NeedClassName execution self-validation test results: " + testObject.validateSelf());
	}
}
new NeedClassName().main();