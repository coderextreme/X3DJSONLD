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
 * <p> Example scene JointCoordinateAxes. </p>
 <p> Related links: JointCoordinateAxes.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> converter </i> </td>
			<td> x3d-tidy V1.0.56, <a href="https://www.npmjs.com/package/x3d-tidy" target="_blank">https://www.npmjs.com/package/x3d-tidy</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> converted </i> </td>
			<td> Mon, 31 Jul 2023 03:48:04 GMT </td>
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

 */

function JointCoordinateAxes
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
JointCoordinateAxes.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("converter").setContent("x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"))
    .addMeta((new autoclass.meta()).setName("converted").setContent("Mon, 31 Jul 2023 03:48:04 GMT")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.NavigationInfo()).setHeadlight(false))
    .addChild((new autoclass.Group())
      .addChild((new autoclass.Group("ARROW"))
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance("ARROW_APPEARANCE"))
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.3,0.3,1.0).setEmissiveColor(0.3,0.3,0.33)))
          .setGeometry((new autoclass.Cylinder()).setBottom(false).setRadius(0.025).setTop(false)))
        .addChild((new autoclass.Transform()).setTranslation(0.0,1.0,0.0)
          .addChild((new autoclass.Shape("ARROW_POINTER"))
            .setAppearance((new autoclass.Appearance()))
            .setGeometry((new autoclass.Cone()).setBottomRadius(0.05).setHeight(0.1))))
        .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,3.1416).setTranslation(0.0,-1.0,0.0)
          .addChild((new autoclass.Shape()))))
      .addChild((new autoclass.Transform()).setTranslation(0.0,1.08,0.0)
        .addChild((new autoclass.Billboard())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance("LABEL_APPEARANCE"))
              .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.3).setEmissiveColor(0.33,0.33,0.1)))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Y\""))
              .setFontStyle((new autoclass.FontStyle("LABEL_FONT")).setFamily(new autoclass.MFString("\"SANS\"")).setJustify(new autoclass.MFString("\"MIDDLE\"")).setSize(0.2)))))))
    .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,-1.5708)
      .addChild((new autoclass.Group())
        .addChild((new autoclass.Group()))
        .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,1.5708).setTranslation(0.072,1.1,0.0)
          .addChild((new autoclass.Billboard())
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance()))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"X\""))
                .setFontStyle((new autoclass.FontStyle()))))))))
    .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,1.5708)
      .addChild((new autoclass.Group())
        .addChild((new autoclass.Group()))
        .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,-1.5708).setTranslation(0.0,1.1,0.072)
          .addChild((new autoclass.Billboard())
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance()))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Z\""))
                .setFontStyle((new autoclass.FontStyle())))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return JointCoordinateAxes model
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
		var testObject = new JointCoordinateAxes();
		console.log ("JointCoordinateAxes execution self-validation test results: " + testObject.validateSelf());
	}
}
new JointCoordinateAxes().main();