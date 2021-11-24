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
 * <p> Simple example showing spinning globe and X3D&amp;#8482; trademark text. X3D (tm) is a trademark of the Web3D Consortium Inc. X3D stands for Extensible 3D Graphics (X3D), an encoding of VRML using XML. X3D has been defined since 1998. Trademark registration pending. VRML is the Virtual Reality Modeling Language (VRML), International Standard ISO/IEC 14772-1:1997. XML is the Extensible Markup Language (XML), a Recommendation of the World Wide Web Consortium (W3C). </p>
 <p> Related links: <a href="../../../development/HelloX3dTrademark.java">HelloX3dTrademark.java</a> source, <a href="../../../development/HelloX3dTrademarkIndex.html" target="_top">HelloX3dTrademark catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/HelloX3dTrademark.x3d">HelloX3dTrademark.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 6 June 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Simple example showing spinning globe and X3D&amp;#8482; trademark text. X3D (tm) is a trademark of the Web3D Consortium Inc. X3D stands for Extensible 3D Graphics (X3D), an encoding of VRML using XML. X3D has been defined since 1998. Trademark registration pending. VRML is the Virtual Reality Modeling Language (VRML), International Standard ISO/IEC 14772-1:1997. XML is the Extensible Markup Language (XML), a Recommendation of the World Wide Web Consortium (W3C). </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../development/HelloX3dTrademark.png">HelloX3dTrademark.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org" target="_blank">https://www.web3d.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d" target="_blank">https://www.web3d.org/x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/Specifications/VRML97" target="_blank">https://www.web3d.org/Specifications/VRML97</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.w3.org/XML" target="_blank">http://www.w3.org/XML</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/HelloX3dTrademark.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/HelloX3dTrademark.x3d</a> </td>
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

function HelloX3dTrademark
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
HelloX3dTrademark.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .addComments(" X3D&#8482; is a trademark of the Web3D Consortium Incorporated, standing for Extensible 3D Graphics (X3D). ")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("HelloX3dTrademark.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("6 June 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Simple example showing spinning globe and X3D&#8482; trademark text. X3D (tm) is a trademark of the Web3D Consortium Inc. X3D stands for Extensible 3D Graphics (X3D), an encoding of VRML using XML. X3D has been defined since 1998. Trademark registration pending. VRML is the Virtual Reality Modeling Language (VRML), International Standard ISO/IEC 14772-1:1997. XML is the Extensible Markup Language (XML), a Recommendation of the World Wide Web Consortium (W3C)."))
    .addMeta((new autoclass.meta()).setName("Image").setContent("HelloX3dTrademark.png"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/Specifications/VRML97"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.w3.org/XML"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/HelloX3dTrademark.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setInfo(new autoclass.MFString("\"an introductory scene\"")).setTitle("Hello X3D&#8482; Trademark (tm)"))
    .addChild((new autoclass.Viewpoint()).setDescription("Hello, world").setPosition(0.0,0.0,-8.0).setOrientation(0.0,1.0,0.0,3.14159))
    .addChild((new autoclass.Transform("EarthCoordinateSystem"))
      .addChild((new autoclass.Group("MiniWorld"))
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"earth-topo.png\" \"earth-topo.gif\" \"earth-topo-small.gif\" \"https://www.web3d.org/x3d/content/examples/Basic/development/earth-topo.png\" \"https://www.web3d.org/x3d/content/examples/Basic/development/earth-topo.gif\" \"https://www.web3d.org/x3d/content/examples/Basic/development/earth-topo-small.gif\""))))
          .setGeometry((new autoclass.Sphere("GlobeNotToScale")))))
      .addChild((new autoclass.Transform("SimpleGeoStationarySatellite")).setTranslation(0.0,0.0,4.0).setScale(0.1,0.3,0.1)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.9,0.1,0.1)))
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Hello\" \"X3D Trademark (tm)\""))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(3))))))
    .addChild((new autoclass.TimeSensor("OrbitalTimeInterval")).setCycleInterval(12.0).setLoop(true))
    .addChild((new autoclass.OrientationInterpolator("SpinThoseThings")).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.57079,0.0,1.0,0.0,3.14159,0.0,1.0,0.0,4.7123889,0.0,1.0,0.0,6.2831852]))).setKey(java.newArray("float", [0.00,0.25,0.50,0.75,1.00])))
    .addChild((new autoclass.ROUTE()).setFromNode("OrbitalTimeInterval").setFromField("fraction_changed").setToNode("SpinThoseThings").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("SpinThoseThings").setFromField("value_changed").setToNode("EarthCoordinateSystem").setToField("rotation")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return HelloX3dTrademark model
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
		var testObject = new HelloX3dTrademark();
		console.log ("HelloX3dTrademark execution self-validation test results: " + testObject.validateSelf());
	}
}
new HelloX3dTrademark().main();
process.exit(0);