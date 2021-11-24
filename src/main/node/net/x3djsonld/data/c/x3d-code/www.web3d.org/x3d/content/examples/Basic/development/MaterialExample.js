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
 * <p> Material node example for X3D-Edit MaterialEditor, which uses Scene Access Interface (SAI) externally to select/deselect different shapes, axes and lights while modifying Material values. </p>
 <p> Related links: <a href="../../../development/MaterialExample.java">MaterialExample.java</a> source, <a href="../../../development/MaterialExampleIndex.html" target="_top">MaterialExample catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/MaterialExample.x3d">MaterialExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Material node example for X3D-Edit MaterialEditor, which uses Scene Access Interface (SAI) externally to select/deselect different shapes, axes and lights while modifying Material values. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 17 December 2006 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D-Edit example </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/MaterialExample.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/MaterialExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/src/www.web3d.org/x3d/tools/X3dEdit3.3/X3D/src/org/web3d/x3d/templates/MaterialExample.x3d">src/www.web3d.org/x3d/tools/X3dEdit3.3/X3D/src/org/web3d/x3d/templates/MaterialExample.x3d</a> </td>
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

function MaterialExample
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
MaterialExample.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.2")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("MaterialExample.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Material node example for X3D-Edit MaterialEditor, which uses Scene Access Interface (SAI) externally to select/deselect different shapes, axes and lights while modifying Material values."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("17 December 2006"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("X3D-Edit example"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/MaterialExample.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("src/www.web3d.org/x3d/tools/X3dEdit3.3/X3D/src/org/web3d/x3d/templates/MaterialExample.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("MaterialExample.x3d"))
    .addChild((new autoclass.Viewpoint("ViewpointNode")).setDescription("default").setPosition(0.0,0.0,4.0))
    .addChild((new autoclass.NavigationInfo()).setType(new autoclass.MFString("\"EXAMINE\"")).setHeadlight(false))
    .addChild((new autoclass.Background("BackgroundNode")))
    .addChild((new autoclass.DirectionalLight("DirectionalLightNode")).setDirection(-0.707,0.0,-0.707))
    .addChild((new autoclass.Shape("ShapeNode"))
      .setGeometry((new autoclass.Sphere()))
      .setAppearance((new autoclass.Appearance())
        .setMaterial((new autoclass.Material("MaterialNode")))))
    .addChild((new autoclass.Switch("AxesSwitch")).setWhichChoice(0)
      .addChild((new autoclass.Group())
        .addChild((new autoclass.Group("xAxis"))
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1]))
              .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,1.25,0.0,0.0])))))
            .setAppearance((new autoclass.Appearance("AppearanceRed"))
              .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(0.8,0.0,0.0))))
          .addChild((new autoclass.Transform()).setTranslation(1.4,0.0,0.0)
            .addChild((new autoclass.Billboard())
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"x\""))
                  .setFontStyle((new autoclass.FontStyle("LabelStyle")).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.3)))
                .setAppearance((new autoclass.Appearance()).setUSE("AppearanceRed"))))))
        .addChild((new autoclass.Group("yAxis"))
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1]))
              .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.0,1.25,0.0])))))
            .setAppearance((new autoclass.Appearance("AppearanceGreen"))
              .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(0.0,0.8,0.0))))
          .addChild((new autoclass.Transform()).setTranslation(0.0,1.4,0.0)
            .addChild((new autoclass.Billboard()).setAxisOfRotation(0.0,0.0,0.0)
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"y\""))
                  .setFontStyle((new autoclass.FontStyle()).setUSE("LabelStyle")))
                .setAppearance((new autoclass.Appearance()).setUSE("AppearanceGreen"))))))
        .addChild((new autoclass.Group("zAxis"))
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1]))
              .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.0,0.0,1.25])))))
            .setAppearance((new autoclass.Appearance("AppearanceBlue"))
              .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(0.0,0.0,0.8))))
          .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,1.4)
            .addChild((new autoclass.Billboard()).setAxisOfRotation(0.0,0.0,0.0)
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"z\""))
                  .setFontStyle((new autoclass.FontStyle()).setUSE("LabelStyle")))
                .setAppearance((new autoclass.Appearance()).setUSE("AppearanceBlue"))))))))
    .addChild((new autoclass.Switch("LightDirectionVectorSwitch")).setWhichChoice(0)
      .addChild((new autoclass.Transform()).setScale(1.25,1.25,1.25)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1]))
            .addComments(" negate direction-vector values so that line approaches from light direction towards origin ")
            .setCoord((new autoclass.Coordinate("LightDirectionCoordinateNode")).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.707,0.0,0.707,0.0,0.0,0.0])))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material("LightDirectionLineMaterial")).setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(1.0,1.0,1.0)))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return MaterialExample model
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
		var testObject = new MaterialExample();
		console.log ("MaterialExample execution self-validation test results: " + testObject.validateSelf());
	}
}
new MaterialExample().main();
process.exit(0);