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
 * <p> List of nodes available in a strictly compliant Interchange profile scene. Only Background renders in this example, other nodes have null values. </p>
 <p> Related links: <a href="../../../development/ProfileExampleInterchange.java">ProfileExampleInterchange.java</a> source, <a href="../../../development/ProfileExampleInterchangeIndex.html" target="_top">ProfileExampleInterchange catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/ProfileExampleInterchange.x3d">ProfileExampleInterchange.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 6 January 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> List of nodes available in a strictly compliant Interchange profile scene. Only Background renders in this example, other nodes have null values. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/spec_editors/abstract/Part01/interchange.html" target="_blank">https://www.web3d.org/spec_editors/abstract/Part01/interchange.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> ProfileExampleInterchange.png </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/ProfileExampleInterchange.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/ProfileExampleInterchange.x3d</a> </td>
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

function ProfileExampleInterchange
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
ProfileExampleInterchange.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Interchange").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("ProfileExampleInterchange.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("6 January 2000"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("description").setContent("List of nodes available in a strictly compliant Interchange profile scene. Only Background renders in this example, other nodes have null values."))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/spec_editors/abstract/Part01/interchange.html"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("ProfileExampleInterchange.png"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/ProfileExampleInterchange.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.Group())
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"earth-topo.png\" \"earth-topo.gif\" \"https://www.web3d.org/x3d/content/examples/Basic/development/earth-topo.png\" \"https://www.web3d.org/x3d/content/examples/Basic/development/earth-topo.gif\"")))
          .setMaterial((new autoclass.Material()))
          .setTextureTransform((new autoclass.TextureTransform())))
        .setGeometry((new autoclass.IndexedFaceSet()).setCreaseAngle(3.14159)
          .setColor((new autoclass.Color()).setColor(new autoclass.MFColor(java.newArray("float", [1.0,1.0,1.0]))))
          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0]))))
          .setTexCoord((new autoclass.MultiTextureCoordinate()))))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.IndexedLineSet())
          .setColor((new autoclass.ColorRGBA()).setColor(new autoclass.MFColorRGBA(java.newArray("float", [1.0,1.0,1.0,1.0]))))))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Box()))
        .setAppearance((new autoclass.Appearance("SilenceWarnings"))))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Cone()))
        .setAppearance((new autoclass.Appearance()).setUSE("SilenceWarnings")))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Cylinder()))
        .setAppearance((new autoclass.Appearance()).setUSE("SilenceWarnings")))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.IndexedTriangleFanSet()).setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true)
          .setTexCoord((new autoclass.TextureCoordinate()).setPoint(new autoclass.MFVec2f(java.newArray("float", [0.0,0.0])))))
        .setAppearance((new autoclass.Appearance()).setUSE("SilenceWarnings")))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.IndexedTriangleSet()).setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true)
          .setTexCoord((new autoclass.TextureCoordinateGenerator())))
        .setAppearance((new autoclass.Appearance()).setUSE("SilenceWarnings")))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.IndexedTriangleStripSet()).setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true)
          .setNormal((new autoclass.Normal()).setVector(new autoclass.MFVec3f(java.newArray("float", [0.0,1.0,0.0])))))
        .setAppearance((new autoclass.Appearance()).setUSE("SilenceWarnings")))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.LineSet()))
        .setAppearance((new autoclass.Appearance())
          .setTexture((new autoclass.MultiTexture()))
          .setTextureTransform((new autoclass.MultiTextureTransform()))))
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setTexture((new autoclass.PixelTexture())))
        .setGeometry((new autoclass.PointSet())))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Sphere()))
        .setAppearance((new autoclass.Appearance()).setUSE("SilenceWarnings")))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.TriangleFanSet()).setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true))
        .setAppearance((new autoclass.Appearance()).setUSE("SilenceWarnings")))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.TriangleSet()).setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true))
        .setAppearance((new autoclass.Appearance()).setUSE("SilenceWarnings")))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.TriangleStripSet()).setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true))
        .setAppearance((new autoclass.Appearance()).setUSE("SilenceWarnings"))))
    .addChild((new autoclass.Background()).setGroundColor(new autoclass.MFColor(java.newArray("float", [0.0,0.0,0.0]))).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.0,0.2,0.7]))))
    .addChild((new autoclass.CoordinateInterpolator("CI")))
    .addChild((new autoclass.DirectionalLight()))
    .addChild((new autoclass.NavigationInfo()))
    .addChild((new autoclass.NormalInterpolator("NI")).setKey(java.newArray("float", [0.0,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,1.0,0.0,0.0,1.0,0.0]))))
    .addChild((new autoclass.OrientationInterpolator("OI")).setKey(java.newArray("float", [0.0,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0]))))
    .addChild((new autoclass.PositionInterpolator("PI")).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.0,0.0,0.0]))).setKey(java.newArray("float", [0.0,1.0])))
    .addChild((new autoclass.ScalarInterpolator("SI")).setKeyValue(java.newArray("float", [0.0,0.0])).setKey(java.newArray("float", [0.0,1.0])))
    .addChild((new autoclass.TimeSensor("TS")).setEnabled(false))
    .addChild((new autoclass.ROUTE()).setFromNode("TS").setFromField("fraction_changed").setToNode("NI").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TS").setFromField("fraction_changed").setToNode("OI").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TS").setFromField("fraction_changed").setToNode("PI").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TS").setFromField("fraction_changed").setToNode("SI").setToField("set_fraction"))
    .addChild((new autoclass.Transform()))
    .addChild((new autoclass.Viewpoint()).setDescription("InterchangeProfileExample"))
    .addChild((new autoclass.WorldInfo()))
    .addChild((new autoclass.ROUTE()).setFromNode("TS").setFromField("fraction_changed").setToNode("PI").setToField("set_fraction")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return ProfileExampleInterchange model
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
		var testObject = new ProfileExampleInterchange();
		console.log ("ProfileExampleInterchange execution self-validation test results: " + testObject.validateSelf());
	}
}
new ProfileExampleInterchange().main();
process.exit(0);