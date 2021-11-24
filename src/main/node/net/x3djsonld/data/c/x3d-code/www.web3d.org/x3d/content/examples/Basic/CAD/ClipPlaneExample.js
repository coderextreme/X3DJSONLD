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
 * <p> Illustrate use of two ClipPlane intersections across four sets of primitive geometry. Line indicators are outside the scope of the ClipPlane transformation hierarchy and so are not clipped. </p>
 <p> Related links: <a href="../../../CAD/ClipPlaneExample.java">ClipPlaneExample.java</a> source, <a href="../../../CAD/ClipPlaneExampleIndex.html" target="_top">ClipPlaneExample catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../CAD/ClipPlaneExample.x3d">ClipPlaneExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Nicholas Polys, Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 20 February 2013 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Illustrate use of two ClipPlane intersections across four sets of primitive geometry. Line indicators are outside the scope of the ClipPlane transformation hierarchy and so are not clipped. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../CAD/ClipPlaneExample.x3d">ClipPlaneExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/ClipPlaneExampleFront.png">ClipPlaneExampleFront.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/ClipPlaneExampleOblique.png">ClipPlaneExampleOblique.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/ClipPlaneExampleOverhead.png">ClipPlaneExampleOverhead.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/ClipPlaneExampleSide.png">ClipPlaneExampleSide.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/CAD/ClipPlaneExample.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/CAD/ClipPlaneExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vivaty Studio </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../CAD/../../license.html">../../license.html</a> </td>
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

	* @author Nicholas Polys, Don Brutzman
 */

function ClipPlaneExample
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
ClipPlaneExample.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("Rendering").setLevel(5))
    .addMeta((new autoclass.meta()).setName("title").setContent("ClipPlaneExample.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Nicholas Polys, Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("20 February 2013"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Illustrate use of two ClipPlane intersections across four sets of primitive geometry. Line indicators are outside the scope of the ClipPlane transformation hierarchy and so are not clipped."))
    .addMeta((new autoclass.meta()).setName("reference").setContent("ClipPlaneExample.x3d"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("ClipPlaneExampleFront.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("ClipPlaneExampleOblique.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("ClipPlaneExampleOverhead.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("ClipPlaneExampleSide.png"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/ClipPlaneExample.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("Vivaty Studio"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../../license.html")))
  .setScene((new autoclass.Scene())
    .addComments(" TODO Schematron error for orientation='0 0 0 0' ")
    .addChild((new autoclass.Viewpoint()).setDescription("ClipPlanes front view").setPosition(0.0,1.0,10.0))
    .addChild((new autoclass.Viewpoint()).setDescription("ClipPlanes oblique view").setPosition(0.0,8.0,7.0).setOrientation(1.0,0.0,0.0,-0.851966))
    .addChild((new autoclass.Viewpoint()).setDescription("ClipPlanes overhead view").setPosition(0.0,12.0,0.0).setOrientation(1.0,0.0,0.0,-1.570796))
    .addChild((new autoclass.Viewpoint()).setDescription("ClipPlanes side view").setOrientation(-0.03326,0.99889,0.03326,1.571904).setPosition(15.0,1.0,0.0))
    .addChild((new autoclass.Background("WhiteBackground")).setGroundColor(new autoclass.MFColor(java.newArray("float", [1.0,1.0,1.0]))).setSkyColor(new autoclass.MFColor(java.newArray("float", [1.0,1.0,1.0]))))
    .addChild((new autoclass.Group("ClipPlaneGroup"))
      .addComments(" ClipPlane nodes affect peers and children ")
      .addChild((new autoclass.ClipPlane("ClipPlaneHorizontal")))
      .addChild((new autoclass.ClipPlane("ClipPlaneVertical")).setPlane(0.0,0.0,-1.0,0.0))
      .addComments(" Non-standard scripting animation test for ClipPlane <PythonScript DEF=\"PS\" url=\"OpacityMapStyle.py\" /> <ROUTE fromNode='timer_pos0' fromField='value_changed' toNode='PS' toField='planeEquation'/> <ROUTE fromNode='PS' fromField='planeEquation' toNode='CP' toField='plane'/> ")
      .addComments(" <TimeSensor DEF='timer' cycleInterval='13.000' loop='true' startTime='0.000'/> <ROUTE fromNode='timer' fromField='fraction_changed' toNode='timer_pos0' toField='set_fraction'/> <ROUTE fromNode='timer_pos0' fromField='value_changed' toNode='move' toField='set_translation'/> ")
      .addChild((new autoclass.Group("PrimitiveShapes"))
        .addChild((new autoclass.WorldInfo()).setInfo(new autoclass.MFString("\"This Web3D Content was created with Vivaty Studio, a Web3D authoring tool\" \"www.mediamachines.com\"")).setTitle("primitives"))
        .addChild((new autoclass.Transform("dad_Box1")).setTranslation(-3.0,0.0,0.0)
          .addChild((new autoclass.Shape("Box1"))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material("Red")).setAmbientIntensity(.2).setShininess(.2).setDiffuseColor(1.0,0.0,0.0)))
            .setGeometry((new autoclass.Box("GeoBox1")).setSolid(false))))
        .addChild((new autoclass.Transform("dad_Cylinder1")).setTranslation(-1.0,0.0,0.0)
          .addChild((new autoclass.Shape("Cylinder1"))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material("Green")).setAmbientIntensity(.2).setShininess(.2).setDiffuseColor(0.0,1.0,0.0)))
            .setGeometry((new autoclass.Cylinder("GeoCylinder1")).setSolid(false))))
        .addChild((new autoclass.Transform("dad_Cone1")).setTranslation(1.0,0.0,0.0)
          .addChild((new autoclass.Shape("Cone1"))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material("Blue")).setAmbientIntensity(.2).setShininess(.2).setDiffuseColor(0.0,0.0,1.0)))
            .setGeometry((new autoclass.Cone("GeoCone1")).setSolid(false))))
        .addChild((new autoclass.Transform("dad_Sphere1")).setTranslation(3.0,0.0,0.0)
          .addChild((new autoclass.Shape("Sphere1"))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material("Shiny_Yellow")).setShininess(.1).setAmbientIntensity(.2).setDiffuseColor(1.0,1.0,0.0).setSpecularColor(1.0,1.0,0.0)))
            .setGeometry((new autoclass.Sphere("GeoSphere1")).setSolid(false))))
        .addChild((new autoclass.Transform("dad_Light1")).setTranslation(0.0,5.0,0.0)
          .addChild((new autoclass.PointLight("Light1"))))
        .addChild((new autoclass.Transform("dad_Background1")).setTranslation(-.73213,4.14112,0.0)
          .addChild((new autoclass.Background("Background1")).setGroundColor(new autoclass.MFColor(java.newArray("float", [1.0,1.0,1.0]))).setSkyColor(new autoclass.MFColor(java.newArray("float", [1.0,1.0,1.0]))))))
      .addChild((new autoclass.Transform()).setTranslation(0.0,3.0,0.0)
        .addChild((new autoclass.Group()).setUSE("PrimitiveShapes"))))
    .addComments(" Keep boundary lines outside of scope of the two clipping planes so that they can illustrate boundaries without being cut off ")
    .addChild((new autoclass.Group("BoundaryLines"))
      .addChild((new autoclass.Transform("move")).setTranslation(0.0,.00001,0.0)
        .addChild((new autoclass.Shape("PlaneOutlineHorizontal"))
          .setAppearance((new autoclass.Appearance("BoundaryLineAppearance"))
            .setMaterial((new autoclass.Material()).setAmbientIntensity(.2).setEmissiveColor(0.1,0.1,0.1)))
          .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,2,3,0,-1]))
            .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [5.0,0.0,-2.0,5.0,0.0,2.0,-5.0,0.0,2.0,-5.0,0.0,-2.0])))))))
      .addChild((new autoclass.PositionInterpolator("timer_pos0")).setKey(java.newArray("float", [0.0,.5,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,2.0,0.0,0.0,-2.0,0.0,0.0,2.0,0.0]))))
      .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,-1.578)
        .addChild((new autoclass.Transform("move2")).setTranslation(0.0,.00001,0.0)
          .addChild((new autoclass.Shape("PlaneOutlineVertical"))
            .setAppearance((new autoclass.Appearance()).setUSE("BoundaryLineAppearance"))
            .addComments(" also includes center line ")
            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,2,3,0,-1,4,5,-1]))
              .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [5.0,0.0,-2.0,5.0,0.0,4.0,-5.0,0.0,4.0,-5.0,0.0,-2.0,5.0,0.0,0.0,-5.0,0.0,0.0]))))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return ClipPlaneExample model
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
		var testObject = new ClipPlaneExample();
		console.log ("ClipPlaneExample execution self-validation test results: " + testObject.validateSelf());
	}
}
new ClipPlaneExample().main();
process.exit(0);