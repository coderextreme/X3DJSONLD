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
 * <p> This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18. </p>
 <p> Related links: <a href="../../../Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.java">PixelTextureComponentExamples.java</a> source, <a href="../../../Chapter05AppearanceMaterialTextures/PixelTextureComponentExamplesIndex.html" target="_top">PixelTextureComponentExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d">PixelTextureComponentExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Leonard Daly and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 25 August 2008 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 7 January 2014 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://X3dGraphics.com" target="_blank">http://X3dGraphics.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> X3D for Web Authors, Table 5.18 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">https://www.web3d.org/x3d/content/examples/X3dResources.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> rights </i> </td>
			<td> Copyright (c) 2006, Daly Realism and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D book, X3D graphics, X3D-Edit, <a href="http://www.x3dGraphics.com" target="_blank">http://www.x3dGraphics.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d" target="_blank">http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d</a> </td>
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

function PixelTextureComponentExamples
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
PixelTextureComponentExamples.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: PixelTexture image field, scene-graph level=6, element #68, 67 total numbers */
	this.PixelTexture_6_68_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc]));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("PixelTextureComponentExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Leonard Daly and Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("25 August 2008"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("7 January 2014"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://X3dGraphics.com"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("X3D for Web Authors, Table 5.18"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html"))
    .addMeta((new autoclass.meta()).setName("rights").setContent("Copyright (c) 2006, Daly Realism and Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.1,0.1,0.4]))))
    .addChild((new autoclass.Viewpoint()).setDescription("Table 5.18 SFImage component examples").setPosition(0.0,0.0,14.0))
    .addChild((new autoclass.Transform()).setTranslation(-6.0,0.0,0.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setTexture((new autoclass.PixelTexture("ZeroComponents"))))
        .setGeometry((new autoclass.Box())))
      .addChild((new autoclass.Transform()).setTranslation(0.0,-2.0,0.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"0\""))
            .setFontStyle((new autoclass.FontStyle("CenterJustify")).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance((new autoclass.Appearance("TextMaterial"))
            .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,1.0))))))
    .addChild((new autoclass.Transform()).setTranslation(-3.0,0.0,0.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setTexture((new autoclass.PixelTexture("OneComponent")).setImage(java.newArray("int", [1,2,1,0xFF,0x00]))))
        .setGeometry((new autoclass.Box())))
      .addChild((new autoclass.Transform()).setTranslation(0.0,-2.0,0.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"1\""))
            .setFontStyle((new autoclass.FontStyle())))
          .setAppearance((new autoclass.Appearance())))))
    .addChild((new autoclass.Transform())
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setTexture((new autoclass.PixelTexture("TwoComponents")).setImage(java.newArray("int", [2,1,2,0xCCFF,0x2277]))))
        .setGeometry((new autoclass.Box())))
      .addChild((new autoclass.Transform()).setTranslation(0.0,-2.0,0.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"2\""))
            .setFontStyle((new autoclass.FontStyle())))
          .setAppearance((new autoclass.Appearance())))))
    .addChild((new autoclass.Transform()).setTranslation(3.0,0.0,0.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .addComments(" note 0x000000 = 0 ")
          .setTexture((new autoclass.PixelTexture("ThreeComponents")).setImage(java.newArray("int", [2,4,3,0xFF0000,0xFF00,0x000000,0,0,0,0xFFFFFF,0xFFFF00]))))
        .setGeometry((new autoclass.Box())))
      .addChild((new autoclass.Transform()).setTranslation(0.0,-2.0,0.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"3\""))
            .setFontStyle((new autoclass.FontStyle())))
          .setAppearance((new autoclass.Appearance())))))
    .addChild((new autoclass.Transform()).setTranslation(6.0,0.0,0.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .addComments(" Erroneous value in book: 1 0 0 255, 0 1 0 255, 0 0 1 255, 1 0 0 127, 0 1 0 127, 0 0 1 127 ")
          .setTexture((new autoclass.PixelTexture("FourComponents")).setImage(java.newArray("int", [3,2,4,0xFF0000FF,0x00FF00FF,0x0000FFFF,0xFF00007F,0x00FF007F,0x0000FF7F]))))
        .setGeometry((new autoclass.Box())))
      .addChild((new autoclass.Transform()).setTranslation(0.0,-2.0,0.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"4\""))
            .setFontStyle((new autoclass.FontStyle())))
          .setAppearance((new autoclass.Appearance())))))
    .addComments(" Background from PixelTextureBW.x3d ")
    .addChild((new autoclass.Transform()).setTranslation(0.0,6.0,-2.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_6_68_image)))
        .setGeometry((new autoclass.Box()).setSize(16.0,16.0,.1)))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return PixelTextureComponentExamples model
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
		var testObject = new PixelTextureComponentExamples();
		console.log ("PixelTextureComponentExamples execution self-validation test results: " + testObject.validateSelf());
	}
}
new PixelTextureComponentExamples().main();