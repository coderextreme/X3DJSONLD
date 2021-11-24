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
 * <p> List all VRML nodes in a single nonrendering scene as a convenient simple test for translation programs. Used for early development of X3D-Edit and Xj3D. </p>
 <p> Related links: <a href="../../../development/AllVrml97Nodes.java">AllVrml97Nodes.java</a> source, <a href="../../../development/AllVrml97NodesIndex.html" target="_top">AllVrml97Nodes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/AllVrml97Nodes.x3d">AllVrml97Nodes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 1 January 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> List all VRML nodes in a single nonrendering scene as a convenient simple test for translation programs. Used for early development of X3D-Edit and Xj3D. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/AllVrml97Nodes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/AllVrml97Nodes.x3d</a> </td>
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

function AllVrml97Nodes
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
AllVrml97Nodes.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("AllVrml97Nodes.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("1 January 2000"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("description").setContent("List all VRML nodes in a single nonrendering scene as a convenient simple test for translation programs. Used for early development of X3D-Edit and Xj3D."))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/AllVrml97Nodes.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo("WORLDINFO")).setTitle("VRML test scene: x3d/content/AllVrml97Nodes.wrl"))
    .addChild((new autoclass.WorldInfo("DTD_TAGSET_CANDIDATES")))
    .addChild((new autoclass.WorldInfo("Xj3D_BUGS_AND_ISSUES")))
    .addChild((new autoclass.WorldInfo("Xj3D_FIXES")))
    .addChild((new autoclass.WorldInfo("XEENA_BUGS_AND_ISSUES")))
    .addChild((new autoclass.WorldInfo("XEENA_FIXES")))
    .addChild((new autoclass.Background("BACKGROUND")).setGroundColor(new autoclass.MFColor(java.newArray("float", [0.0,0.0,0.0]))))
    .addChild((new autoclass.Fog("FOG")))
    .addChild((new autoclass.NavigationInfo("NAVIGATIONINFO")).setType(new autoclass.MFString("\"EXAMINE\" \"WALK\" \"ANY\" \"FLY\"")))
    .addChild((new autoclass.Viewpoint("VIEWPOINT")))
    .addChild((new autoclass.Anchor("ANCHOR"))
      .addChild((new autoclass.Billboard("Billboard"))
        .addChild((new autoclass.Shape("SHAPE_BOX"))
          .setGeometry((new autoclass.Box("BOX")))
          .setAppearance((new autoclass.Appearance("APPEARANCE"))
            .setTexture((new autoclass.ImageTexture("IMAGETEXTURE")).setUrl(new autoclass.MFString("\"../icons/cube.gif\" \"https://www.web3d.org/x3d/content/examples/Basic/development/../icons/cube.gif\"")))
            .setMaterial((new autoclass.Material("MATERIAL"))))))
      .addChild((new autoclass.Collision("COLLISION"))
        .addChild((new autoclass.Group("PROXY_GROUP"))
          .addChild((new autoclass.Shape("PROXY_SHAPE"))
            .setGeometry((new autoclass.Box("PROXY_BOX")))))
        .addChild((new autoclass.Shape("SHAPE_CONE"))
          .setGeometry((new autoclass.Cone("CONE")))
          .setAppearance((new autoclass.Appearance()))))
      .addChild((new autoclass.Group("GROUP"))
        .addChild((new autoclass.Shape("SHAPE_CYLINDER"))
          .setGeometry((new autoclass.Cylinder("CYLINDER")))
          .setAppearance((new autoclass.Appearance()))))
      .addChild((new autoclass.Inline("INLINE")).setUrl(new autoclass.MFString("\"inlineTestFileOne.wrl\" \"inlineTestFileTwo.wrl\" \"inlineTestFileEmbedding%20Blanks%20In%20Name.wrl\"")))
      .addChild((new autoclass.Inline("INLINE_HELLO_WORLD")).setUrl(new autoclass.MFString("\"HelloWorld.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/development/HelloWorld.wrl\"")))
      .addChild((new autoclass.LOD("LOD")).setRange(java.newArray("float", [1.0]))
        .addChild((new autoclass.Shape("SHAPE_ELEVATIONGRID"))
          .setGeometry((new autoclass.ElevationGrid("ELEVATIONGRID")).setHeight(java.newArray("float", [1.0,2.0,3.0,4.0])))
          .setAppearance((new autoclass.Appearance()).setUSE("APPEARANCE")))
        .addChild((new autoclass.Shape("SHAPE_EXTRUSION"))
          .setGeometry((new autoclass.Extrusion("EXTRUSION")).setSpine(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.0,1.0,0.0]))).setCrossSection(new autoclass.MFVec2f(java.newArray("float", [1.0,1.0,1.0,-1.0,-1.0,-1.0,-1.0,1.0,1.0,1.0]))).setScale(new autoclass.MFVec2f(java.newArray("float", [1.0,1.0,1.0,1.0]))))
          .setAppearance((new autoclass.Appearance()).setUSE("APPEARANCE"))))
      .addChild((new autoclass.Switch("SWITCH")).setWhichChoice(-1)
        .addChild((new autoclass.Shape("SHAPE_TEXTURETRANSFORM_INDEXEDFACESET"))
          .setGeometry((new autoclass.IndexedFaceSet("INDEXEDFACESET")).setDEF("INDEXEDFACESET").setColorIndex(java.newArray("int", [0,1,0,1])).setCoordIndex(java.newArray("int", [0,1,2,3])).setNormalIndex(java.newArray("int", [0,1,2,3])).setTexCoordIndex(java.newArray("int", [0,1,2,3]))
            .setColor((new autoclass.Color("COLOR")).setColor(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,0.0,1.0,0.0]))))
            .setCoord((new autoclass.Coordinate("COORDINATE")).setPoint(new autoclass.MFVec3f(java.newArray("float", [1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,1.0]))))
            .setNormal((new autoclass.Normal("NORMAL")).setVector(new autoclass.MFVec3f(java.newArray("float", [1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0]))))
            .setTexCoord((new autoclass.TextureCoordinate("TEXTURECOORDINATE")).setPoint(new autoclass.MFVec2f(java.newArray("float", [0.1,0.1,0.9,0.1,0.9,0.9,0.1,0.9])))))
          .setAppearance((new autoclass.Appearance("APPEARANCE_TEXTURETRANSFORM"))
            .setTexture((new autoclass.ImageTexture()).setUSE("IMAGETEXTURE"))
            .setMaterial((new autoclass.Material()))
            .setTextureTransform((new autoclass.TextureTransform("TEXTURETRANSFORM")).setCenter(0.5,0.5))))
        .addChild((new autoclass.Shape("SHAPE_INDEXEDLINESET"))
          .setGeometry((new autoclass.IndexedLineSet("INDEXEDLINESET")).setDEF("INDEXEDLINESET").setColorIndex(java.newArray("int", [0,1,0,1])).setCoordIndex(java.newArray("int", [0,1,2,3]))
            .setCoord((new autoclass.Coordinate()).setUSE("COORDINATE"))
            .setColor((new autoclass.Color()).setUSE("COLOR")))
          .setAppearance((new autoclass.Appearance()).setUSE("APPEARANCE")))
        .addChild((new autoclass.Shape("SHAPE_POINTSET"))
          .setGeometry((new autoclass.PointSet("POINTSET"))
            .setColor((new autoclass.Color()).setUSE("COLOR"))
            .setCoord((new autoclass.Coordinate()).setUSE("COORDINATE")))
          .setAppearance((new autoclass.Appearance()).setUSE("APPEARANCE")))
        .addChild((new autoclass.Shape("SHAPE_MOVIETEXTURE"))
          .setGeometry((new autoclass.IndexedFaceSet()).setSolid(false).setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
            .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0])))))
          .setAppearance((new autoclass.Appearance()))))
      .addChild((new autoclass.Transform("TRANSFORM"))
        .addChild((new autoclass.Shape("SHAPE_SPHERE"))
          .setGeometry((new autoclass.Sphere("SPHERE")))
          .setAppearance((new autoclass.Appearance()).setUSE("APPEARANCE")))
        .addChild((new autoclass.Shape("SHAPE_TEXT"))
          .setGeometry((new autoclass.Text("TEXT")).setString(new autoclass.MFString("\" first line of text\" \"second line of text\""))
            .setFontStyle((new autoclass.FontStyle("FONTSTYLE"))))
          .setAppearance((new autoclass.Appearance()).setUSE("APPEARANCE"))))
      .addChild((new autoclass.Sound("SOUND"))
        .setSource((new autoclass.AudioClip("AUDIOCLIP")).setDescription("AudioClip")))
      .addChild((new autoclass.Group("GROUP_LIGHTS"))
        .addChild((new autoclass.DirectionalLight("DIRECTIONALLIGHT")))
        .addChild((new autoclass.PointLight("POINTLIGHT")))
        .addChild((new autoclass.SpotLight("SPOTLIGHT")).setCutOffAngle(.785398).setBeamWidth(1.570796)))
      .addChild((new autoclass.Group("GROUP_INTERPOLATORS"))
        .addChild((new autoclass.ColorInterpolator("COLORINTERPOLATOR")).setKey(java.newArray("float", [0.0])).setKeyValue(new autoclass.MFColor(java.newArray("float", [0.0,0.0,0.0]))))
        .addChild((new autoclass.CoordinateInterpolator("COORDINATEINTERPOLATOR")).setKey(java.newArray("float", [0.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0]))))
        .addChild((new autoclass.NormalInterpolator("NORMALINTERPOLATOR")).setKey(java.newArray("float", [0.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0]))))
        .addChild((new autoclass.OrientationInterpolator("ORIENTATIONINTERPOLATOR")).setKey(java.newArray("float", [0.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.0,0.0,1.0,0.0]))))
        .addChild((new autoclass.PositionInterpolator("POSITIONINTERPOLATOR")).setKey(java.newArray("float", [0.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0]))))
        .addChild((new autoclass.ScalarInterpolator("SCALARINTERPOLATOR")).setKey(java.newArray("float", [0.0])).setKeyValue(java.newArray("float", [0.0]))))
      .addChild((new autoclass.Group("GROUP_SENSORS"))
        .addChild((new autoclass.CylinderSensor("CYLINDERSENSOR")))
        .addChild((new autoclass.PlaneSensor("PLANESENSOR")))
        .addChild((new autoclass.ProximitySensor("PROXIMITYSENSOR")))
        .addChild((new autoclass.SphereSensor("SPHERESENSOR")))
        .addChild((new autoclass.TimeSensor("TIMESENSOR")))
        .addChild((new autoclass.TouchSensor("TOUCHSENSOR")))
        .addChild((new autoclass.VisibilitySensor("VISIBILITYSENSOR")))))
    .addChild((new autoclass.WorldInfo("Xj3D_NODE_TRANSLATION_STATUS")))
    .addChild((new autoclass.ROUTE()).setFromNode("TOUCHSENSOR").setFromField("isActive").setToNode("TOUCHSENSOR").setToField("enabled")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return AllVrml97Nodes model
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
		var testObject = new AllVrml97Nodes();
		console.log ("AllVrml97Nodes execution self-validation test results: " + testObject.validateSelf());
	}
}
new AllVrml97Nodes().main();
process.exit(0);