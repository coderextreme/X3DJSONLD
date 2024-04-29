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
 * <p> Test of browser ability to map a 3 times multiple of an PixelTexture onto an IndexedFaceSet geometry. A 3 by 3 matrix of four equal sized red, green, white and yellow squares in the pixel texture map all the faces of the cube. </p>
 <p> Related links: <a href="../../../../GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plus.java">indexedfaceset_pixeltexture_plus.java</a> source, <a href="../../../../GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plusIndex.html" target="_top">indexedfaceset_pixeltexture_plus catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plus.x3d">indexedfaceset_pixeltexture_plus.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plus-front.jpg">indexedfaceset_pixeltexture_plus-front.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plus-rear.jpg">indexedfaceset_pixeltexture_plus-rear.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plus-top.jpg">indexedfaceset_pixeltexture_plus-top.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plus-bottom.jpg">indexedfaceset_pixeltexture_plus-bottom.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plus-left.jpg">indexedfaceset_pixeltexture_plus-left.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plus-right.jpg">indexedfaceset_pixeltexture_plus-right.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.nist.gov/vrml.html" target="_blank">http://www.nist.gov/vrml.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.itl.nist.gov/div897/ctg/vrml/vrml.html" target="_blank">http://www.itl.nist.gov/div897/ctg/vrml/vrml.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> <a href="http://www.itl.nist.gov/div897/ctg/vrml/members.html" target="_blank">http://www.itl.nist.gov/div897/ctg/vrml/members.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> disclaimer </i> </td>
			<td> This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at <a href="http://www.nist.gov/vrml.html" target="_blank">http://www.nist.gov/vrml.html</a> The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, <a href="https://www.web3d.org/working-groups/x3d" target="_blank">https://www.web3d.org/working-groups/x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Michael Kass NIST, Don Brutzman NPS </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 21 January 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 13 January 2014 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Test of browser ability to map a 3 times multiple of an PixelTexture onto an IndexedFaceSet geometry. A 3 by 3 matrix of four equal sized red, green, white and yellow squares in the pixel texture map all the faces of the cube. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plus.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plus.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../GeometricProperties/TextureCoordinate/../../license.html">../../license.html</a> </td>
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

	* @author http://www.itl.nist.gov/div897/ctg/vrml/members.html
 */

function indexedfaceset_pixeltexture_plus
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
indexedfaceset_pixeltexture_plus.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Interchange").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("indexedfaceset_pixeltexture_plus.x3d"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("indexedfaceset_pixeltexture_plus-front.jpg"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("indexedfaceset_pixeltexture_plus-rear.jpg"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("indexedfaceset_pixeltexture_plus-top.jpg"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("indexedfaceset_pixeltexture_plus-bottom.jpg"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("indexedfaceset_pixeltexture_plus-left.jpg"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("indexedfaceset_pixeltexture_plus-right.jpg"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.nist.gov/vrml.html"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta((new autoclass.meta()).setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta((new autoclass.meta()).setName("info").setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta((new autoclass.meta()).setName("translated").setContent("21 January 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("13 January 2014"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Test of browser ability to map a 3 times multiple of an PixelTexture onto an IndexedFaceSet geometry. A 3 by 3 matrix of four equal sized red, green, white and yellow squares in the pixel texture map all the faces of the cube."))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plus.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.Viewpoint()).setDescription("Front View"))
    .addChild((new autoclass.Viewpoint()).setDescription("Rear View").setOrientation(0.0,1.0,0.0,3.14).setPosition(0.0,0.0,-10.0))
    .addChild((new autoclass.Viewpoint()).setDescription("Top View").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,10.0,0.0))
    .addChild((new autoclass.Viewpoint()).setDescription("Bottom View").setOrientation(1.0,0.0,0.0,1.57).setPosition(0.0,-10.0,0.0))
    .addChild((new autoclass.Viewpoint()).setDescription("Right View").setOrientation(0.0,1.0,0.0,1.57).setPosition(10.0,0.0,0.0))
    .addChild((new autoclass.Viewpoint()).setDescription("Left View").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-10.0,0.0,0.0))
    .addChild((new autoclass.NavigationInfo()).setType("\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""))
    .addChild((new autoclass.Shape())
      .setAppearance((new autoclass.Appearance())
        .setMaterial((new autoclass.Material()))
        .setTexture((new autoclass.PixelTexture()).setImage(java.newArray("int", [2,2,4,0xFF0000FF,0x00FF00FF,0xFFFFFFFF,0xFFFF00FF]))))
      .setGeometry((new autoclass.IndexedFaceSet()).setColorPerVertex(false).setCreaseAngle(0.5).setCoordIndex(java.newArray("int", [0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1])).setTexCoordIndex(java.newArray("int", [0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]))
        .setColor((new autoclass.Color()).setColor(new autoclass.MFColor(java.newArray("float", [0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0]))))
        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-2.0,1.0,1.0,-2.0,-1.0,1.0,2.0,1.0,1.0,2.0,-1.0,1.0,2.0,1.0,-1.0,2.0,-1.0,-1.0,-2.0,1.0,-1.0,-2.0,-1.0,-1.0]))))
        .setTexCoord((new autoclass.TextureCoordinate()).setPoint(new autoclass.MFVec2f(java.newArray("float", [-1.0,2.0,-1.0,-1.0,2.0,2.0,2.0,-1.0])))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return indexedfaceset_pixeltexture_plus model
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
		var testObject = new indexedfaceset_pixeltexture_plus();
		console.log ("indexedfaceset_pixeltexture_plus execution self-validation test results: " + testObject.validateSelf());
		process.exit();
	}
}
new indexedfaceset_pixeltexture_plus().main();