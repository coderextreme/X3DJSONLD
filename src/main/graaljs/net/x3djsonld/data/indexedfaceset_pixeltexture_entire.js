load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Test browser ability to completely map one PixelTexture onto the surface of an IndexedFaceSet geometry. Four colored squares should map onto each face of the IndexedFaceSet. The PixelTexture consists of red quarter (lower left), green quarter (lower right), white quarter (upper left) and yellow quarter (upper right). PixelTexture should map once onto the surface of the IndexedFaceSet, with the S (horizontal) axis of the texture corresponding to the X axis of the geometry. </p>
 <p> Related links: <a href="../../../../GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.java">indexedfaceset_pixeltexture_entire.java</a> source, <a href="../../../../GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entireIndex.html" target="_top">indexedfaceset_pixeltexture_entire catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d">indexedfaceset_pixeltexture_entire.x3d</a> </td>
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
			<td> Test browser ability to completely map one PixelTexture onto the surface of an IndexedFaceSet geometry. Four colored squares should map onto each face of the IndexedFaceSet. The PixelTexture consists of red quarter (lower left), green quarter (lower right), white quarter (upper left) and yellow quarter (upper right). PixelTexture should map once onto the surface of the IndexedFaceSet, with the S (horizontal) axis of the texture corresponding to the X axis of the geometry. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d</a> </td>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author http://www.itl.nist.gov/div897/ctg/vrml/members.html
 */

function indexedfaceset_pixeltexture_entire
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
  function doubleToFloat(d) {
    if (Float32Array) {
        return new Float32Array([d])[0];
    }
  }
indexedfaceset_pixeltexture_entire.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Interchange").setVersion("3.0")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("indexedfaceset_pixeltexture_entire.x3d"))
    .addMeta(new meta().setName("reference").setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName("reference").setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName("creator").setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName("info").setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName("translator").setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName("translated").setContent("21 January 2001"))
    .addMeta(new meta().setName("modified").setContent("13 January 2014"))
    .addMeta(new meta().setName("description").setContent("Test browser ability to completely map one PixelTexture onto the surface of an IndexedFaceSet geometry. Four colored squares should map onto each face of the IndexedFaceSet. The PixelTexture consists of red quarter (lower left), green quarter (lower right), white quarter (upper left) and yellow quarter (upper right). PixelTexture should map once onto the surface of the IndexedFaceSet, with the S (horizontal) axis of the texture corresponding to the X axis of the geometry."))
    .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d"))
    .addMeta(new meta().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new Viewpoint().setDescription("Front View"))
    .addChild(new Viewpoint().setDescription("Rear View").setOrientation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(3.14)).setPosition(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-10.0)))
    .addChild(new Viewpoint().setDescription("Top View").setOrientation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-1.57)).setPosition(doubleToFloat(0.0),doubleToFloat(10.0),doubleToFloat(0.0)))
    .addChild(new Viewpoint().setDescription("Bottom View").setOrientation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.57)).setPosition(doubleToFloat(0.0),doubleToFloat(-10.0),doubleToFloat(0.0)))
    .addChild(new Viewpoint().setDescription("Right View").setOrientation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(1.57)).setPosition(doubleToFloat(10.0),doubleToFloat(0.0),doubleToFloat(0.0)))
    .addChild(new Viewpoint().setDescription("Left View").setOrientation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(-1.57)).setPosition(doubleToFloat(-10.0),doubleToFloat(0.0),doubleToFloat(0.0)))
    .addChild(new NavigationInfo().setType("\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""))
    .addChild(new Shape()
      .setAppearance(new Appearance()
        .setMaterial(new Material())
        .setTexture(new PixelTexture().setImage(Java.to([2,2,4,0xFF0000FF,0x00FF00FF,0xFFFFFFFF,0xFFFF00FF], Java.type("int[]"))).setRepeatS(false).setRepeatT(false)))
      .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1], Java.type("int[]")))
        .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-2.0),doubleToFloat(1.5),doubleToFloat(1.0),doubleToFloat(-2.0),doubleToFloat(-1.5),doubleToFloat(1.0),doubleToFloat(2.0),doubleToFloat(1.5),doubleToFloat(1.0),doubleToFloat(2.0),doubleToFloat(-1.5),doubleToFloat(1.0),doubleToFloat(2.0),doubleToFloat(1.5),doubleToFloat(-1.0),doubleToFloat(2.0),doubleToFloat(-1.5),doubleToFloat(-1.0),doubleToFloat(-2.0),doubleToFloat(1.5),doubleToFloat(-1.0),doubleToFloat(-2.0),doubleToFloat(-1.5),doubleToFloat(-1.0)], Java.type("float[]"))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return indexedfaceset_pixeltexture_entire model
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
	var       metaResult = "";
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
		// first list informational meta elements of interest
		var metaList = this.getX3dModel().getHead().getMetaList();
		for (var m in metaList) {
			var metaObject = metaList[m];
			if (metaObject.getName().equals(metaObject.NAME_ERROR) ||
				metaObject.getName().equals(metaObject.NAME_WARNING) ||
				metaObject.getName().equals(metaObject.NAME_HINT) ||
				metaObject.getName().equals(metaObject.NAME_INFO) ||
				metaObject.getName().equals(metaObject.NAME_TODO))
			{
				metaResult += metaObject.toStringX3D();
			}
		}
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (metaResult === "" && exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = metaResult;
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
		var testObject = new indexedfaceset_pixeltexture_entire();
		print ("indexedfaceset_pixeltexture_entire execution self-validation test results: " + testObject.validateSelf());
	}
}
new indexedfaceset_pixeltexture_entire().main();