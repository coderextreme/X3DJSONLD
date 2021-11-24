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
 * <p> Developer scene to explore Mantis Issue 528 Alternative C for transformation of of CADFace children: allow Transform between CADPart and CADFace nodes. </p>
 <p> Related links: <a href="../../../CAD/CADPartChildTransformationAlternativeC.java">CADPartChildTransformationAlternativeC.java</a> source, <a href="../../../CAD/CADPartChildTransformationAlternativeCIndex.html" target="_top">CADPartChildTransformationAlternativeC catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../CAD/CADPartChildTransformationAlternativeC.x3d">CADPartChildTransformationAlternativeC.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Developer scene to explore Mantis Issue 528 Alternative C for transformation of of CADFace children: allow Transform between CADPart and CADFace nodes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Vince Marchetti bushing generation using python scripts </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/member-only/mantis/view.php?id=528" target="_blank">https://www.web3d.org/member-only/mantis/view.php?id=528</a> </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> This scene is intended for specification development only, and is not expected to validate or work. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 29 June 2012 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 27 October 2019 </td>
		</tr>
		<tr style="color:red">
			<td style="text-align:right; vertical-align: text-top;"> <i> error </i> </td>
			<td> The alternative structure in this scene fails validation. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationSection </i> </td>
			<td> 32.4.4 CADPart </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationUrl </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/CADGeometry.html#CADPart" target="_blank">https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/CADGeometry.html#CADPart</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildTransformationAlternativeC.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildTransformationAlternativeC.x3d</a> </td>
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

	* @author Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk
 */

function CADPartChildTransformationAlternativeC
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
CADPartChildTransformationAlternativeC.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: IndexedTriangleSet index field, scene-graph level=8, element #30, 192 total numbers */
	this.IndexedTriangleSet_8_30_index = new autoclass.MFInt32(java.newArray("int", [0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65]));

	/** Large attribute array: Coordinate DEF='HollowCircleCoordinates' point field, scene-graph level=9, element #30, 198 total numbers made up of 66 3-tuple values */
	this.HollowCircleCoordinates_9_30_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [2.0000,0.0000,0.0000,1.0000,0.0000,0.0000,1.9616,0.3902,0.0000,0.9808,0.1951,0.0000,1.8478,0.7654,0.0000,0.9239,0.3827,0.0000,1.6629,1.1111,0.0000,0.8315,0.5556,0.0000,1.4142,1.4142,0.0000,0.7071,0.7071,0.0000])))
	.append(new autoclass.MFVec3f(java.newArray("float", [1.1111,1.6629,0.0000,0.5556,0.8315,0.0000,0.7654,1.8478,0.0000,0.3827,0.9239,0.0000,0.3902,1.9616,0.0000,0.1951,0.9808,0.0000,0.0000,2.0000,0.0000,0.0000,1.0000,0.0000,-0.3902,1.9616,0.0000,-0.1951,0.9808,0.0000])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.7654,1.8478,0.0000,-0.3827,0.9239,0.0000,-1.1111,1.6629,0.0000,-0.5556,0.8315,0.0000,-1.4142,1.4142,0.0000,-0.7071,0.7071,0.0000,-1.6629,1.1111,0.0000,-0.8315,0.5556,0.0000,-1.8478,0.7654,0.0000,-0.9239,0.3827,0.0000])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-1.9616,0.3902,0.0000,-0.9808,0.1951,0.0000,-2.0000,0.0000,0.0000,-1.0000,0.0000,0.0000,-1.9616,-0.3902,0.0000,-0.9808,-0.1951,0.0000,-1.8478,-0.7654,0.0000,-0.9239,-0.3827,0.0000,-1.6629,-1.1111,0.0000,-0.8315,-0.5556,0.0000])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-1.4142,-1.4142,0.0000,-0.7071,-0.7071,0.0000,-1.1111,-1.6629,0.0000,-0.5556,-0.8315,0.0000,-0.7654,-1.8478,0.0000,-0.3827,-0.9239,0.0000,-0.3902,-1.9616,0.0000,-0.1951,-0.9808,0.0000,-0.0000,-2.0000,0.0000,-0.0000,-1.0000,0.0000])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.3902,-1.9616,0.0000,0.1951,-0.9808,0.0000,0.7654,-1.8478,0.0000,0.3827,-0.9239,0.0000,1.1111,-1.6629,0.0000,0.5556,-0.8315,0.0000,1.4142,-1.4142,0.0000,0.7071,-0.7071,0.0000,1.6629,-1.1111,0.0000,0.8315,-0.5556,0.0000])))
	.append(new autoclass.MFVec3f(java.newArray("float", [1.8478,-0.7654,0.0000,0.9239,-0.3827,0.0000,1.9616,-0.3902,0.0000,0.9808,-0.1951,0.0000,2.0000,-0.0000,0.0000,1.0000,-0.0000,0.0000])));

	/** Large attribute array: IndexedTriangleSet index field, scene-graph level=8, element #36, 192 total numbers */
	this.IndexedTriangleSet_8_36_index = new autoclass.MFInt32(java.newArray("int", [0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65]));
  this.x3dModel = (new autoclass.X3D()).setProfile("CADInterchange").setVersion("3.1")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("CADGeometry").setLevel(2))
    .addComponent((new autoclass.component()).setName("EnvironmentalEffects").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("CADPartChildTransformationAlternativeC.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Developer scene to explore Mantis Issue 528 Alternative C for transformation of of CADFace children: allow Transform between CADPart and CADFace nodes."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Vince Marchetti bushing generation using python scripts"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/member-only/mantis/view.php?id=528"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("This scene is intended for specification development only, and is not expected to validate or work."))
    .addMeta((new autoclass.meta()).setName("created").setContent("29 June 2012"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("27 October 2019"))
    .addMeta((new autoclass.meta()).setName("error").setContent("The alternative structure in this scene fails validation."))
    .addMeta((new autoclass.meta()).setName("specificationSection").setContent("32.4.4 CADPart"))
    .addMeta((new autoclass.meta()).setName("specificationUrl").setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/CADGeometry.html#CADPart"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildTransformationAlternativeC.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("CADPartChildTransformationAlternativeC.x3d"))
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.9607843,1.0,0.9607843]))))
    .addChild((new autoclass.Viewpoint()).setDescription("Hello CAD bushing").setPosition(0.0,5.0,15.0).setOrientation(1.0,0.0,0.0,-0.321751))
    .addChild((new autoclass.CADAssembly()).setName("DesignPatternAssembly")
      .addChild((new autoclass.CADPart()).setName("CADPartExample")
        .addComments(" the rotation and translation attributes serve to position the bushing within the assembly ")
        .addChild((new autoclass.CADFace()).setName("outerSurface")
          .setShape((new autoclass.Shape())
            .addComments(" note solid='true' and so one-sided external rendering only ")
            .setGeometry((new autoclass.Cylinder()).setRadius(2).setHeight(3).setBottom(false).setTop(false))
            .setAppearance((new autoclass.Appearance("AppearanceGrey"))
              .setMaterial((new autoclass.Material())))))
        .addChild((new autoclass.CADFace()).setName("innerSurface")
          .setShape((new autoclass.Shape())
            .addComments(" note solid='false' and so two-sided internal + external rendering ")
            .setGeometry((new autoclass.Cylinder()).setHeight(3).setBottom(false).setSolid(false).setTop(false))
            .setAppearance((new autoclass.Appearance()).setUSE("AppearanceGrey"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,1.5,0.0).setRotation(1.0,0.0,0.0,1.5708)
          .addChild((new autoclass.CADFace()).setName("topCap")
            .setShape((new autoclass.Shape())
              .setGeometry((new autoclass.IndexedTriangleSet()).setIndex(this.IndexedTriangleSet_8_30_index).setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true)
                .setCoord((new autoclass.Coordinate("HollowCircleCoordinates")).setPoint(this.HollowCircleCoordinates_9_30_point)))
              .setAppearance((new autoclass.Appearance()).setUSE("AppearanceGrey")))))
        .addChild((new autoclass.Transform()).setRotation(-1.0,0.0,0.0,1.5708).setTranslation(0.0,-1.5,0.0)
          .addChild((new autoclass.CADFace()).setName("bottomCap")
            .setShape((new autoclass.Shape())
              .setGeometry((new autoclass.IndexedTriangleSet()).setIndex(this.IndexedTriangleSet_8_36_index).setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true)
                .setCoord((new autoclass.Coordinate()).setUSE("HollowCircleCoordinates")))
              .setAppearance((new autoclass.Appearance()).setUSE("AppearanceGrey"))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return CADPartChildTransformationAlternativeC model
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
		var testObject = new CADPartChildTransformationAlternativeC();
		console.log ("CADPartChildTransformationAlternativeC execution self-validation test results: " + testObject.validateSelf());
	}
}
new CADPartChildTransformationAlternativeC().main();
process.exit(0);