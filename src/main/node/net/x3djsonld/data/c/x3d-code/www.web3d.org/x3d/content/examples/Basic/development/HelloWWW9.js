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
 * <p> A simple VRML/X3D scene graph example for May 2000 WWW symposium. </p>
 <p> Related links: <a href="../../../development/HelloWWW9.java">HelloWWW9.java</a> source, <a href="../../../development/HelloWWW9Index.html" target="_top">HelloWWW9 catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/HelloWWW9.x3d">HelloWWW9.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 9 January 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A simple VRML/X3D scene graph example for May 2000 WWW symposium. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/HelloWWW9.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/HelloWWW9.x3d</a> </td>
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

function HelloWWW9
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
HelloWWW9.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("HelloWWW9.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("9 January 2000"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("description").setContent("A simple VRML/X3D scene graph example for May 2000 WWW symposium."))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/HelloWWW9.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setInfo(new autoclass.MFString("\"A simple example VRML/X3D scene graph, easily modifiable for demonstration at WWW9 Amsterdam.\"")).setTitle("Hello WWW 9"))
    .addChild((new autoclass.Background()).setGroundColor(new autoclass.MFColor(java.newArray("float", [0.8,0.8,1.0]))).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.8,0.8,1.0]))))
    .addChild((new autoclass.Viewpoint()).setDescription("Hello, world").setPosition(0.0,0.0,-8.0).setOrientation(0.0,1.0,0.0,3.14159))
    .addChild((new autoclass.Anchor()).setDescription("World WIde Web Conference 9 home page").setParameter(new autoclass.MFString("\"target=_blank\"")).setUrl(new autoclass.MFString("\"http://www.www9.org\""))
      .addChild((new autoclass.Transform("EarthCoordinateSystem"))
        .addChild((new autoclass.Group("MiniWorld"))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"earth-topo.png\" \"earth-topo.gif\" \"https://www.web3d.org/x3d/content/earth-topo.png\" \"https://www.web3d.org/x3d/content/earth-topo.gif\""))))
            .setGeometry((new autoclass.Sphere()))))
        .addChild((new autoclass.Transform("SimpleGeoStationarySatellite")).setTranslation(0.0,0.0,5.0).setScale(0.1,0.3,0.1).setRotation(1.0,0.0,0.0,.3)
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(0.9,0.1,0.1)))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Hello WWW9 !!\" \"and WWW 2003 too!!\""))
              .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(3).setCssStyle("BOLD")))))))
    .addChild((new autoclass.TimeSensor("OrbitalTimeInterval")).setCycleInterval(30.0).setLoop(true))
    .addChild((new autoclass.OrientationInterpolator("SpinThoseThings")).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.57079,0.0,1.0,0.0,3.14159,0.0,1.0,0.0,4.7123889,0.0,1.0,0.0,6.2831852]))).setKey(java.newArray("float", [0.00,0.25,0.50,0.75,1.00])))
    .addChild((new autoclass.ROUTE()).setFromNode("OrbitalTimeInterval").setFromField("fraction_changed").setToNode("SpinThoseThings").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("SpinThoseThings").setFromField("value_changed").setToNode("EarthCoordinateSystem").setToField("rotation")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return HelloWWW9 model
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
		var testObject = new HelloWWW9();
		console.log ("HelloWWW9 execution self-validation test results: " + testObject.validateSelf());
	}
}
new HelloWWW9().main();
process.exit(0);