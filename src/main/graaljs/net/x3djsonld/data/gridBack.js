load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Checkerboard grid background for X3D/VRML materials selection. </p>
 <p> Related links: <a href="../../..gridBack.java">gridBack.java</a> source, <a href="../../..gridBackIndex.html" target="_top">gridBack catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../..gridBack.x3d">gridBack.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Checkerboard grid background for X3D/VRML materials selection. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> David Roussel </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> James Harney, Don Brutzman NPS </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 8 April 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 12 January 2014 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://vrmlstuff.free.fr/materials" target="_blank">http://vrmlstuff.free.fr/materials</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Universal Media Material Library </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.json" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.json</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../..../license.html">../license.html</a> </td>
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

	* @author David Roussel
 */

function gridBack
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
gridBack.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=4, element #15, 245 total numbers */
	this.IndexedFaceSet_4_15_coordIndex = new MFInt32(Java.to([0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1], Java.type("int[]")));

	/** Large attribute array: Coordinate point field, scene-graph level=5, element #15, 192 total numbers made up of 64 3-tuple values */
	this.Coordinate_5_15_point = new MFVec3f() /* splitting up long array to improve readability */
	.append(new MFVec3f(Java.to([doubleToFloat(-5.25),doubleToFloat(5.25),doubleToFloat(0.0),doubleToFloat(-3.75),doubleToFloat(5.25),doubleToFloat(0.0),doubleToFloat(-2.25),doubleToFloat(5.25),doubleToFloat(0.0),doubleToFloat(-0.75),doubleToFloat(5.25),doubleToFloat(0.0),doubleToFloat(0.75),doubleToFloat(5.25),doubleToFloat(0.0),doubleToFloat(2.25),doubleToFloat(5.25),doubleToFloat(0.0),doubleToFloat(3.75),doubleToFloat(5.25),doubleToFloat(0.0),doubleToFloat(5.25),doubleToFloat(5.25),doubleToFloat(0.0),doubleToFloat(-5.25),doubleToFloat(3.75),doubleToFloat(0.0),doubleToFloat(-3.75),doubleToFloat(3.75),doubleToFloat(0.0)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(-2.25),doubleToFloat(3.75),doubleToFloat(0.0),doubleToFloat(-0.75),doubleToFloat(3.75),doubleToFloat(0.0),doubleToFloat(0.75),doubleToFloat(3.75),doubleToFloat(0.0),doubleToFloat(2.25),doubleToFloat(3.75),doubleToFloat(0.0),doubleToFloat(3.75),doubleToFloat(3.75),doubleToFloat(0.0),doubleToFloat(5.25),doubleToFloat(3.75),doubleToFloat(0.0),doubleToFloat(-5.25),doubleToFloat(2.25),doubleToFloat(0.0),doubleToFloat(-3.75),doubleToFloat(2.25),doubleToFloat(0.0),doubleToFloat(-2.25),doubleToFloat(2.25),doubleToFloat(0.0),doubleToFloat(-0.75),doubleToFloat(2.25),doubleToFloat(0.0)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(0.75),doubleToFloat(2.25),doubleToFloat(0.0),doubleToFloat(2.25),doubleToFloat(2.25),doubleToFloat(0.0),doubleToFloat(3.75),doubleToFloat(2.25),doubleToFloat(0.0),doubleToFloat(5.25),doubleToFloat(2.25),doubleToFloat(0.0),doubleToFloat(-5.25),doubleToFloat(0.75),doubleToFloat(0.0),doubleToFloat(-3.75),doubleToFloat(0.75),doubleToFloat(0.0),doubleToFloat(-2.25),doubleToFloat(0.75),doubleToFloat(0.0),doubleToFloat(-0.75),doubleToFloat(0.75),doubleToFloat(0.0),doubleToFloat(0.75),doubleToFloat(0.75),doubleToFloat(0.0),doubleToFloat(2.25),doubleToFloat(0.75),doubleToFloat(0.0)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(3.75),doubleToFloat(0.75),doubleToFloat(0.0),doubleToFloat(5.25),doubleToFloat(0.75),doubleToFloat(0.0),doubleToFloat(-5.25),doubleToFloat(-0.75),doubleToFloat(0.0),doubleToFloat(-3.75),doubleToFloat(-0.75),doubleToFloat(0.0),doubleToFloat(-2.25),doubleToFloat(-0.75),doubleToFloat(0.0),doubleToFloat(-0.75),doubleToFloat(-0.75),doubleToFloat(0.0),doubleToFloat(0.75),doubleToFloat(-0.75),doubleToFloat(0.0),doubleToFloat(2.25),doubleToFloat(-0.75),doubleToFloat(0.0),doubleToFloat(3.75),doubleToFloat(-0.75),doubleToFloat(0.0),doubleToFloat(5.25),doubleToFloat(-0.75),doubleToFloat(0.0)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(-5.25),doubleToFloat(-2.25),doubleToFloat(0.0),doubleToFloat(-3.75),doubleToFloat(-2.25),doubleToFloat(0.0),doubleToFloat(-2.25),doubleToFloat(-2.25),doubleToFloat(0.0),doubleToFloat(-0.75),doubleToFloat(-2.25),doubleToFloat(0.0),doubleToFloat(0.75),doubleToFloat(-2.25),doubleToFloat(0.0),doubleToFloat(2.25),doubleToFloat(-2.25),doubleToFloat(0.0),doubleToFloat(3.75),doubleToFloat(-2.25),doubleToFloat(0.0),doubleToFloat(5.25),doubleToFloat(-2.25),doubleToFloat(0.0),doubleToFloat(-5.25),doubleToFloat(-3.75),doubleToFloat(0.0),doubleToFloat(-3.75),doubleToFloat(-3.75),doubleToFloat(0.0)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(-2.25),doubleToFloat(-3.75),doubleToFloat(0.0),doubleToFloat(-0.75),doubleToFloat(-3.75),doubleToFloat(0.0),doubleToFloat(0.75),doubleToFloat(-3.75),doubleToFloat(0.0),doubleToFloat(2.25),doubleToFloat(-3.75),doubleToFloat(0.0),doubleToFloat(3.75),doubleToFloat(-3.75),doubleToFloat(0.0),doubleToFloat(5.25),doubleToFloat(-3.75),doubleToFloat(0.0),doubleToFloat(-5.25),doubleToFloat(-5.25),doubleToFloat(0.0),doubleToFloat(-3.75),doubleToFloat(-5.25),doubleToFloat(0.0),doubleToFloat(-2.25),doubleToFloat(-5.25),doubleToFloat(0.0),doubleToFloat(-0.75),doubleToFloat(-5.25),doubleToFloat(0.0)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(0.75),doubleToFloat(-5.25),doubleToFloat(0.0),doubleToFloat(2.25),doubleToFloat(-5.25),doubleToFloat(0.0),doubleToFloat(3.75),doubleToFloat(-5.25),doubleToFloat(0.0),doubleToFloat(5.25),doubleToFloat(-5.25),doubleToFloat(0.0)], Java.type("float[]"))));
  this.x3dModel = new X3D().setProfile("Interchange").setVersion("3.0")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("gridBack.x3d"))
    .addMeta(new meta().setName("description").setContent("Checkerboard grid background for X3D/VRML materials selection."))
    .addMeta(new meta().setName("creator").setContent("David Roussel"))
    .addMeta(new meta().setName("translator").setContent("James Harney, Don Brutzman NPS"))
    .addMeta(new meta().setName("created").setContent("8 April 2002"))
    .addMeta(new meta().setName("modified").setContent("12 January 2014"))
    .addMeta(new meta().setName("reference").setContent("http://vrmlstuff.free.fr/materials"))
    .addMeta(new meta().setName("subject").setContent("Universal Media Material Library"))
    .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.json"))
    .addMeta(new meta().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new Shape()
      .setAppearance(new Appearance()
        .setMaterial(new Material().setAmbientIntensity(0.01).setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)).setShininess(0.05)))
      .setGeometry(new IndexedFaceSet().setColorPerVertex(false).setNormalPerVertex(false).setColorIndex(Java.to([0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0], Java.type("int[]"))).setCoordIndex(this.IndexedFaceSet_4_15_coordIndex)
        .setCoord(new Coordinate().setPoint(this.Coordinate_5_15_point))
        .setColor(new Color().setColor(new MFColor(Java.to([doubleToFloat(0.5),doubleToFloat(0.5),doubleToFloat(0.5),doubleToFloat(0.75),doubleToFloat(0.75),doubleToFloat(0.75)], Java.type("float[]"))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return gridBack model
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
		var testObject = new gridBack();
		print ("gridBack execution self-validation test results: " + testObject.validateSelf());
	}
}
new gridBack().main();