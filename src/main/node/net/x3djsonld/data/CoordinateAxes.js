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
 * <p> X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame. </p>
 <p> Related links: <a href="../../../Chapter03Grouping/CoordinateAxes.java">CoordinateAxes.java</a> source, <a href="../../../Chapter03Grouping/CoordinateAxesIndex.html" target="_top">CoordinateAxes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Chapter03Grouping/CoordinateAxes.x3d">CoordinateAxes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman, Byounghyun Yoo </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 14 July 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d" target="_blank">http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d" target="_blank">http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d" target="_blank">https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d" target="_blank">https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d" target="_blank">http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Chapter03Grouping/../license.html">../license.html</a> </td>
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

	* @author Don Brutzman, Byounghyun Yoo
 */

function CoordinateAxes
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
CoordinateAxes.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("CoordinateAxes.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman, Byounghyun Yoo"))
    .addMeta((new autoclass.meta()).setName("created").setContent("14 July 2000"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("description").setContent("X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame."))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("CoordinateAxes.x3d"))
    .addChild((new autoclass.Collision("DoNotCollideWithVisualizationWidget"))
      .addComments(" Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph. ")
      .addComments(" This NavigationInfo allows examine mode and will be overridden by any parent scene. ")
      .addComments(" Each arrow goes from +1m to -1m to allow linear scaling to fit a scene ")
      .addComments(" Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user ")
      .addChild((new autoclass.Group())
        .addComments(" Vertical Y arrow and label ")
        .addChild((new autoclass.Group("ArrowGreen"))
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Cylinder("ArrowCylinder")).setRadius(.025).setTop(false))
            .setAppearance((new autoclass.Appearance("Green"))
              .setMaterial((new autoclass.Material()).setDiffuseColor(.1,.6,.1).setEmissiveColor(.05,.2,.05))))
          .addChild((new autoclass.Transform()).setTranslation(0.0,1.0,0.0)
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cone("ArrowCone")).setBottomRadius(.05).setHeight(.1))
              .setAppearance((new autoclass.Appearance())))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,1.08,0.0)
          .addChild((new autoclass.Billboard())
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance("LABEL_APPEARANCE"))
                .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,.3).setEmissiveColor(.33,.33,.1)))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Y\""))
                .setFontStyle((new autoclass.FontStyle("LABEL_FONT")).setFamily(new autoclass.MFString("\"SANS\"")).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(.2)))))))
      .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,-1.57079)
        .addComments(" Horizontal X arrow and label ")
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Group("ArrowRed"))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cylinder()))
              .setAppearance((new autoclass.Appearance("Red"))
                .setMaterial((new autoclass.Material()).setDiffuseColor(.7,.1,.1).setEmissiveColor(.33,0.0,0.0))))
            .addChild((new autoclass.Transform()).setTranslation(0.0,1.0,0.0)
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Cone()))
                .setAppearance((new autoclass.Appearance())))))
          .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,1.57079).setTranslation(.072,1.1,0.0)
            .addComments(" note label rotated back to original coordinate frame ")
            .addChild((new autoclass.Billboard())
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance()))
                .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"X\""))
                  .setFontStyle((new autoclass.FontStyle()))))))))
      .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,1.57079)
        .addComments(" Perpendicular Z arrow and label, note right-hand rule ")
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Group("ArrowBlue"))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cylinder()))
              .setAppearance((new autoclass.Appearance("Blue"))
                .setMaterial((new autoclass.Material()).setDiffuseColor(.3,.3,1.0).setEmissiveColor(.1,.1,.33))))
            .addChild((new autoclass.Transform()).setTranslation(0.0,1.0,0.0)
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Cone()))
                .setAppearance((new autoclass.Appearance())))))
          .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,-1.57079).setTranslation(0.0,1.1,.072)
            .addComments(" note label rotated back to original coordinate frame ")
            .addChild((new autoclass.Billboard())
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance()))
                .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Z\""))
                  .setFontStyle((new autoclass.FontStyle()))))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return CoordinateAxes model
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
		var testObject = new CoordinateAxes();
		console.log ("CoordinateAxes execution self-validation test results: " + testObject.validateSelf());
	}
}
new CoordinateAxes().main();