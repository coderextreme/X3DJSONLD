load('X3Dautoclass.js');

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
			<td> <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">http://www.web3d.org/x3d/content/examples/X3dResources.html</a> </td>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
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
  this.x3dModel = new X3D().setProfile("Interchange").setVersion("3.3")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("Table5_18PixelTexture"))
    .addMeta(new meta().setName("description").setContent("PixelTexture example for Table 5.18"))
    .addMeta(new meta().setName("creator").setContent("Leonard Daly and Don Brutzman"))
    .addMeta(new meta().setName("created").setContent("18 December 2006"))
    .addMeta(new meta().setName("modified").setContent("2 April 2017"))
    .addMeta(new meta().setName("reference").setContent("http://X3dGraphics.com"))
    .addMeta(new meta().setName("reference").setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html"))
    .addMeta(new meta().setName("rights").setContent("Copyright 2006, Daly Realism and Don Brutzman"))
    .addMeta(new meta().setName("subject").setContent("X3D, PixelTexture"))
    .addMeta(new meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/Table5_18PixelTexture"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new Background().setSkyColor(new MFColor(Java.to([0.0,0.0,1.0], Java.type("float[]")))))
    .addChild(new Transform("Checkerboard").setTranslation(0.0,0.0,-10.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTextureTransform(new TextureTransform().setScale(500.0,500.0))
          .setTexture(new PixelTexture().setImage(Java.to([2,2,3,0xE6B5FD,0xFFDBB7,0xFFDBB7,0xE6B5FD], Java.type("int[]")))))
        .setGeometry(new Box().setSize(1000.0,1000.0,.01))))
    .addChild(new Viewpoint().setDescription("View All").setPosition(0.0,0.0,20.0))
    .addChild(new Viewpoint().setDescription("Empty Image").setPosition(0.0,5.0,5.0))
    .addChild(new Transform("EmptyImage").setTranslation(0.0,5.0,0.0).setRotation(1.0,1.0,0.0,1.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTexture(new PixelTexture()))
        .setGeometry(new Box("StandardBox"))))
    .addChild(new Viewpoint().setDescription("Black and white PixelTexture").setPosition(-5.0,0.0,5.0))
    .addChild(new Transform("BW").setTranslation(-5.0,0.0,0.0).setRotation(1.0,1.0,0.0,1.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTexture(new PixelTexture().setImage(Java.to([1,2,1,0xFF,0x00], Java.type("int[]")))))
        .setGeometry(new Box().setUSE("StandardBox"))))
    .addChild(new Viewpoint().setDescription("Black and white with Alpha PixelTexture").setPosition(5.0,0.0,5.0))
    .addChild(new Transform("AlphaBW").setRotation(1.0,1.0,0.0,1.0).setTranslation(5.0,0.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTexture(new PixelTexture().setImage(Java.to([2,1,2,0xCCFF,0x2277], Java.type("int[]")))))
        .setGeometry(new Box().setUSE("StandardBox"))))
    .addChild(new Viewpoint().setDescription("RGB PixelTexture").setPosition(-5.0,-5.0,5.0))
    .addChild(new Transform("RGB").setTranslation(-5.0,-5.0,0.0).setRotation(1.0,1.0,0.0,1.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTexture(new PixelTexture().setImage(Java.to([2,4,3,0xFF0000,0x00FF00,0,0,0,0,0xFFFFFF,0xFFFF00], Java.type("int[]")))))
        .setGeometry(new Box().setUSE("StandardBox"))))
    .addChild(new Viewpoint().setDescription("RGB with Alpha PixelTexture").setPosition(5.0,-5.0,5.0))
    .addChild(new Transform("AlphaRGB").setRotation(1.0,1.0,0.0,1.0).setTranslation(5.0,-5.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTexture(new PixelTexture().setImage(Java.to([3,2,4,0xFF0000FF,0x00FF00FF,0x0000FFFF,0xFF00007F,0x00FF007F,0x0000FF7F], Java.type("int[]")))))
        .setGeometry(new Box().setUSE("StandardBox")))));
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
			meta = metaList[m];
			if (meta.getName().equals(meta.NAME_ERROR) ||
				meta.getName().equals(meta.NAME_WARNING) ||
				meta.getName().equals(meta.NAME_HINT) ||
				meta.getName().equals(meta.NAME_INFO) ||
				meta.getName().equals(meta.NAME_TODO))
			{
				metaResult += meta.toStringX3D();
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
		var testObject = new Table5_18PixelTexture();
		print ("Table5_18PixelTexture execution self-validation test results: " + testObject.validateSelf());
	}
}
new Table5_18PixelTexture().main();