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
 * <p> PixelTexture example for Table 5.18. </p>
 <p> Related links: <a href="../../../Chapter05AppearanceMaterialTextures/Table5_18PixelTexture.java">Table5_18PixelTexture.java</a> source, <a href="../../../Chapter05AppearanceMaterialTextures/Index.html" target="_top"> catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Chapter05AppearanceMaterialTextures/Table5_18PixelTexture">Table5_18PixelTexture</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> PixelTexture example for Table 5.18 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Leonard Daly and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 18 December 2006 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 2 April 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://X3dGraphics.com" target="_blank">http://X3dGraphics.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">https://www.web3d.org/x3d/content/examples/X3dResources.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> rights </i> </td>
			<td> Copyright 2006, Daly Realism and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D, PixelTexture </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/Table5_18PixelTexture" target="_blank">http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/Table5_18PixelTexture</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Chapter05AppearanceMaterialTextures/../license.html">../license.html</a> </td>
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

	* @author Leonard Daly and Don Brutzman
 */

function Table5_18PixelTexture
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
Table5_18PixelTexture.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Interchange").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("Table5_18PixelTexture"))
    .addMeta((new autoclass.meta()).setName("description").setContent("PixelTexture example for Table 5.18"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Leonard Daly and Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("18 December 2006"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("2 April 2017"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://X3dGraphics.com"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html"))
    .addMeta((new autoclass.meta()).setName("rights").setContent("Copyright 2006, Daly Realism and Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("X3D, PixelTexture"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/Table5_18PixelTexture"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.0,0.0,1.0]))))
    .addChild((new autoclass.Transform("Checkerboard")).setTranslation(0.0,0.0,-10.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setTextureTransform((new autoclass.TextureTransform()).setScale(500.0,500.0))
          .setTexture((new autoclass.PixelTexture()).setImage(java.newArray("int", [2,2,3,0xE6B5FD,0xFFDBB7,0xFFDBB7,0xE6B5FD]))))
        .setGeometry((new autoclass.Box()).setSize(1000.0,1000.0,.01))))
    .addChild((new autoclass.Viewpoint()).setDescription("View All").setPosition(0.0,0.0,20.0))
    .addChild((new autoclass.Viewpoint()).setDescription("Empty Image").setPosition(0.0,5.0,5.0))
    .addChild((new autoclass.Transform("EmptyImage")).setRotation(1.0,1.0,0.0,1.0).setTranslation(0.0,5.0,0.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setTexture((new autoclass.PixelTexture())))
        .setGeometry((new autoclass.Box("StandardBox")))))
    .addChild((new autoclass.Viewpoint()).setDescription("Black and white PixelTexture").setPosition(-5.0,0.0,5.0))
    .addChild((new autoclass.Transform("BW")).setRotation(1.0,1.0,0.0,1.0).setTranslation(-5.0,0.0,0.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setTexture((new autoclass.PixelTexture()).setImage(java.newArray("int", [1,2,1,0xFF,0x00]))))
        .setGeometry((new autoclass.Box()))))
    .addChild((new autoclass.Viewpoint()).setDescription("Black and white with Alpha PixelTexture").setPosition(5.0,0.0,5.0))
    .addChild((new autoclass.Transform("AlphaBW")).setRotation(1.0,1.0,0.0,1.0).setTranslation(5.0,0.0,0.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setTexture((new autoclass.PixelTexture()).setImage(java.newArray("int", [2,1,2,0xCCFF,0x2277]))))
        .setGeometry((new autoclass.Box()))))
    .addChild((new autoclass.Viewpoint()).setDescription("RGB PixelTexture").setPosition(-5.0,-5.0,5.0))
    .addChild((new autoclass.Transform("RGB")).setRotation(1.0,1.0,0.0,1.0).setTranslation(-5.0,-5.0,0.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setTexture((new autoclass.PixelTexture()).setImage(java.newArray("int", [2,4,3,0xFF0000,0x00FF00,0,0,0,0,0xFFFFFF,0xFFFF00]))))
        .setGeometry((new autoclass.Box()))))
    .addChild((new autoclass.Viewpoint()).setDescription("RGB with Alpha PixelTexture").setPosition(5.0,-5.0,5.0))
    .addChild((new autoclass.Transform("AlphaRGB")).setRotation(1.0,1.0,0.0,1.0).setTranslation(5.0,-5.0,0.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setTexture((new autoclass.PixelTexture()).setImage(java.newArray("int", [3,2,4,0xFF0000FF,0x00FF00FF,0x0000FFFF,0xFF00007F,0x00FF007F,0x0000FF7F]))))
        .setGeometry((new autoclass.Box())))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return Table5_18PixelTexture model
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
		var testObject = new Table5_18PixelTexture();
		console.log ("Table5_18PixelTexture execution self-validation test results: " + testObject.validateSelf());
	}
}
new Table5_18PixelTexture().main();