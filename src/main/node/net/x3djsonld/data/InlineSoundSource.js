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
 * <p> This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the "url" of X3D file. </p>
 <p> Related links: <a href="../../../AudioSpatialSound/InlineSoundSource.java">InlineSoundSource.java</a> source, <a href="../../../AudioSpatialSound/InlineSoundSourceIndex.html" target="_top">InlineSoundSource catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../AudioSpatialSound/InlineSoundSource.x3d">InlineSoundSource.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the "url" of X3D file. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 28 October 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 4 August 2021 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> CHANGELOG.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> credit for audio files </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://medialab.hmu.gr/minipages/x3domAudio" target="_blank">https://medialab.hmu.gr/minipages/x3domAudio</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d" target="_blank">https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 4.0, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../AudioSpatialSound/../license.html">../license.html</a> </td>
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

	* @author Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman
 */

function InlineSoundSource
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
InlineSoundSource.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: IndexedFaceSet DEF='Box001-GEOMETRY' coordIndex field, scene-graph level=5, element #20, 48 total numbers */
	this.Box001_GEOMETRY_5_20_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,15,16,17,-1,18,19,20,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,34,35,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=6, element #20, 108 total numbers made up of 36 3-tuple values */
	this.Coordinate_6_20_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [-1000.000000,0.000000,1000.000000,-1000.000000,0.000000,-1000.000000,1000.000000,0.000000,-1000.000000,1000.000000,0.000000,-1000.000000,1000.000000,0.000000,1000.000000,-1000.000000,0.000000,1000.000000,-1000.000000,8.031588,1000.000000,1000.000000,8.031588,1000.000000,1000.000000,8.031588,-1000.000000,1000.000000,8.031588,-1000.000000])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-1000.000000,8.031588,-1000.000000,-1000.000000,8.031588,1000.000000,-1000.000000,0.000000,1000.000000,1000.000000,0.000000,1000.000000,1000.000000,8.031588,1000.000000,1000.000000,8.031588,1000.000000,-1000.000000,8.031588,1000.000000,-1000.000000,0.000000,1000.000000,1000.000000,0.000000,1000.000000,1000.000000,0.000000,-1000.000000])))
	.append(new autoclass.MFVec3f(java.newArray("float", [1000.000000,8.031588,-1000.000000,1000.000000,8.031588,-1000.000000,1000.000000,8.031588,1000.000000,1000.000000,0.000000,1000.000000,1000.000000,0.000000,-1000.000000,-1000.000000,0.000000,-1000.000000,-1000.000000,8.031588,-1000.000000,-1000.000000,8.031588,-1000.000000,1000.000000,8.031588,-1000.000000,1000.000000,0.000000,-1000.000000])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-1000.000000,0.000000,-1000.000000,-1000.000000,0.000000,1000.000000,-1000.000000,8.031588,1000.000000,-1000.000000,8.031588,1000.000000,-1000.000000,8.031588,-1000.000000,-1000.000000,0.000000,-1000.000000])));

	/** Large attribute array: Normal vector field, scene-graph level=6, element #21, 108 total numbers made up of 36 3-tuple values */
	this.Normal_6_21_vector = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000])))
	.append(new autoclass.MFVec3f(java.newArray("float", [1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000])));
  this.x3dModel = (new autoclass.X3D()).setProfile("Full").setVersion("4.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("InlineSoundSource.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the \"url\" of X3D file."))
    .addMeta((new autoclass.meta()).setName("info").setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("28 October 2020"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("4 August 2021"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("CHANGELOG.txt"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("credit for audio files"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://medialab.hmu.gr/minipages/x3domAudio"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("InlineSoundSource.x3d"))
    .addChild((new autoclass.NavigationInfo("NAV")))
    .addChild((new autoclass.Background()).setBackUrl(new autoclass.MFString("\"images/generic/BK1.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png\"")).setBottomUrl(new autoclass.MFString("\"images/generic/DN1.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png\"")).setFrontUrl(new autoclass.MFString("\"images/generic/FR1.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png\"")).setLeftUrl(new autoclass.MFString("\"images/generic/LF1.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png\"")).setRightUrl(new autoclass.MFString("\"images/generic/RT1.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png\"")).setTopUrl(new autoclass.MFString("\"images/generic/UP1.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png\"")))
    .addChild((new autoclass.Viewpoint("Camera001")).setDescription("Camera001").setFarDistance(0).setNearDistance(1.000000).setOrientation(1.000000,0.000000,-0.000000,-0.523599).setPosition(0.000000,2000.000000,3500.000000))
    .addChild((new autoclass.Transform("Floor")).setTranslation(1.241,0.000,0.358)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance("WireColor"))
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.122,0.114,0.125)))
        .setGeometry((new autoclass.IndexedFaceSet("Box001-GEOMETRY")).setDEF("Box001-GEOMETRY").setSolid(false).setCoordIndex(this.Box001_GEOMETRY_5_20_coordIndex)
          .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_6_20_point))
          .setNormal((new autoclass.Normal()).setVector(this.Normal_6_21_vector)))))
    .addChild((new autoclass.Transform("InlineScene"))
      .addChild((new autoclass.Inline("inline")).setUrl(new autoclass.MFString("\"x3d/example1.x3d\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d\" \"x3d/example1.wrl\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl\"")))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return InlineSoundSource model
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
		var testObject = new InlineSoundSource();
		console.log ("InlineSoundSource execution self-validation test results: " + testObject.validateSelf());
	}
}
new InlineSoundSource().main();