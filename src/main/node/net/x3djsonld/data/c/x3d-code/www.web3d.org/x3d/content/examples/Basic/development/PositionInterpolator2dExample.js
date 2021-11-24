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
 * <p> Example to interpolate a Vector2Float value - click geometry to activate animation loop. </p>
 <p> Related links: <a href="../../../development/PositionInterpolator2dExample.java">PositionInterpolator2dExample.java</a> source, <a href="../../../development/PositionInterpolator2dExampleIndex.html" target="_top">PositionInterpolator2dExample catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/PositionInterpolator2dExample.x3d">PositionInterpolator2dExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Example to interpolate a Vector2Float value - click geometry to activate animation loop. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 16 October 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8" target="_blank">https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#CoordinateInterpolator" target="_blank">https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#CoordinateInterpolator</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Extrusion" target="_blank">https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Extrusion</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Vector2FloatArray Interpolator </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> PositionInterpolator2D </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/PositionInterpolator2dExample.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/PositionInterpolator2dExample.x3d</a> </td>
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

function PositionInterpolator2dExample
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
PositionInterpolator2dExample.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("Interpolation").setLevel(3))
    .addMeta((new autoclass.meta()).setName("title").setContent("PositionInterpolator2dExample.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Example to interpolate a Vector2Float value - click geometry to activate animation loop."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("16 October 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#CoordinateInterpolator"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Extrusion"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("Vector2FloatArray Interpolator"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("PositionInterpolator2D"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/PositionInterpolator2dExample.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("PositionInterpolator2dExample.x3d"))
    .addChild((new autoclass.Viewpoint()).setDescription("Click to activate animation").setPosition(0.0,0.0,3.0))
    .addChild((new autoclass.TimeSensor("Clock")).setCycleInterval(10).setEnabled(false).setLoop(true))
    .addChild((new autoclass.PositionInterpolator2D("InterpolateTTscale")).setKey(java.newArray("float", [0.0,0.35,0.45,0.8,0.9,1.0])).setKeyValue(new autoclass.MFVec2f(java.newArray("float", [1.0,1.0,3.0,3.0,3.0,3.0,0.8,0.8,1.0,1.0,1.0,1.0]))))
    .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("InterpolateTTscale").setToField("set_fraction"))
    .addChild((new autoclass.Transform("ImageAspectRatio")).setScale(1.5,1.0,1.0)
      .addChild((new autoclass.TouchSensor("Toucher")).setDescription("click and hold to animate TextureTransform"))
      .addChild((new autoclass.ROUTE()).setFromNode("Toucher").setFromField("isActive").setToNode("Clock").setToField("enabled"))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(java.newArray("int", [0,1,2,3,0,-1]))
          .setCoord((new autoclass.Coordinate("TwoByTwoSquare")).setPoint(new autoclass.MFVec3f(java.newArray("float", [-1.0,-1.0,0.0,1.0,-1.0,0.0,1.0,1.0,0.0,-1.0,1.0,0.0])))))
        .setAppearance((new autoclass.Appearance())
          .setTexture((new autoclass.ImageTexture("ContactImage")).setUrl(new autoclass.MFString("\"JavaBoardSmileForTheCamera.jpg\" \"https://savage.nps.edu/Savage/Tools/Animation/JavaBoardSmileForTheCamera.jpg\" \"http://faculty.nps.edu/brutzman/images/JavaBoardSmileForTheCamera.jpg\"")))
          .setTextureTransform((new autoclass.TextureTransform("TTN")))))
      .addChild((new autoclass.ROUTE()).setFromNode("InterpolateTTscale").setFromField("value_changed").setToNode("TTN").setToField("set_scale"))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return PositionInterpolator2dExample model
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
		var testObject = new PositionInterpolator2dExample();
		console.log ("PositionInterpolator2dExample execution self-validation test results: " + testObject.validateSelf());
	}
}
new PositionInterpolator2dExample().main();
process.exit(0);