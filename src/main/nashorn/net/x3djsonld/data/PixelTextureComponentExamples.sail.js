load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18. </p>
 <p> Related links: <a href="../../../Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples_sail.java">PixelTextureComponentExamples_sail.java</a> source, <a href="../../../Chapter05AppearanceMaterialTextures/PixelTextureComponentExamplesIndex.html" target="_top">PixelTextureComponentExamples catalog page</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
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
			<td> <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">http://www.web3d.org/x3d/content/examples/X3dResources.html</a> </td>
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
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author Leonard Daly and Don Brutzman
 */

function PixelTextureComponentExamples_sail
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
PixelTextureComponentExamples_sail.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: PixelTexture image field, scene-graph level=6, element #68, 67 total numbers */
	this.PixelTexture_6_68_image = new SFImageObject(Java.to([8,8,1,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc], Java.type("int[]")));
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("PixelTextureComponentExamples.x3d"))
    .addMeta(new metaObject().setName("description").setContent("This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18."))
    .addMeta(new metaObject().setName("creator").setContent("Leonard Daly and Don Brutzman"))
    .addMeta(new metaObject().setName("created").setContent("25 August 2008"))
    .addMeta(new metaObject().setName("modified").setContent("7 January 2014"))
    .addMeta(new metaObject().setName("reference").setContent("http://X3dGraphics.com"))
    .addMeta(new metaObject().setName("reference").setContent("X3D for Web Authors, Table 5.18"))
    .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html"))
    .addMeta(new metaObject().setName("rights").setContent("Copyright (c) 2006, Daly Realism and Don Brutzman"))
    .addMeta(new metaObject().setName("subject").setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
    .addMeta(new metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new BackgroundObject().setSkyColor(new MFColorObject(Java.to([0.1,0.1,0.4], Java.type("float[]")))))
    .addChild(new ViewpointObject().setDescription("Table 5.18 SFImage component examples").setPosition(0.0,0.0,14.0))
    .addChild(new TransformObject().setTranslation(-6.0,0.0,0.0)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setTexture(new PixelTextureObject("ZeroComponents")))
        .setGeometry(new BoxObject()))
      .addChild(new TransformObject().setTranslation(0.0,-2.0,0.0)
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"0\""))
            .setFontStyle(new FontStyleObject("CenterJustify").setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance(new AppearanceObject("TextMaterial")
            .setMaterial(new MaterialObject().setDiffuseColor(1.0,1.0,1.0))))))
    .addChild(new TransformObject().setTranslation(-3.0,0.0,0.0)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setTexture(new PixelTextureObject("OneComponent").setImage(Java.to([1,2,1,0xFF,0x00], Java.type("int[]")))))
        .setGeometry(new BoxObject()))
      .addChild(new TransformObject().setTranslation(0.0,-2.0,0.0)
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"1\""))
            .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
          .setAppearance(new AppearanceObject().setUSE("TextMaterial")))))
    .addChild(new TransformObject()
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setTexture(new PixelTextureObject("TwoComponents").setImage(Java.to([2,1,2,0xCCFF,0x2277], Java.type("int[]")))))
        .setGeometry(new BoxObject()))
      .addChild(new TransformObject().setTranslation(0.0,-2.0,0.0)
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"2\""))
            .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
          .setAppearance(new AppearanceObject().setUSE("TextMaterial")))))
    .addChild(new TransformObject().setTranslation(3.0,0.0,0.0)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .addComments(" note 0x000000 = 0 ")
          .setTexture(new PixelTextureObject("ThreeComponents").setImage(Java.to([2,4,3,0xFF0000,0xFF00,0x000000,0,0,0,0xFFFFFF,0xFFFF00], Java.type("int[]")))))
        .setGeometry(new BoxObject()))
      .addChild(new TransformObject().setTranslation(0.0,-2.0,0.0)
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"3\""))
            .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
          .setAppearance(new AppearanceObject().setUSE("TextMaterial")))))
    .addChild(new TransformObject().setTranslation(6.0,0.0,0.0)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .addComments(" Erroneous value in book: 1 0 0 255, 0 1 0 255, 0 0 1 255, 1 0 0 127, 0 1 0 127, 0 0 1 127 ")
          .setTexture(new PixelTextureObject("FourComponents").setImage(Java.to([3,2,4,0xFF0000FF,0x00FF00FF,0x0000FFFF,0xFF00007F,0x00FF007F,0x0000FF7F], Java.type("int[]")))))
        .setGeometry(new BoxObject()))
      .addChild(new TransformObject().setTranslation(0.0,-2.0,0.0)
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"4\""))
            .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
          .setAppearance(new AppearanceObject().setUSE("TextMaterial")))))
    .addComments(" Background from PixelTextureBW.x3d ")
    .addChild(new TransformObject().setTranslation(0.0,6.0,-2.0)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setTexture(new PixelTextureObject().setImage(this.PixelTexture_6_68_image)))
        .setGeometry(new BoxObject().setSize(16.0,16.0,.1)))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return PixelTextureComponentExamples_sail model
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
			if (meta.getName().equals(metaObject.NAME_ERROR) ||
				meta.getName().equals(metaObject.NAME_WARNING) ||
				meta.getName().equals(metaObject.NAME_HINT) ||
				meta.getName().equals(metaObject.NAME_INFO) ||
				meta.getName().equals(metaObject.NAME_TODO))
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
		var testObject = new PixelTextureComponentExamples_sail();
		print ("PixelTextureComponentExamples_sail execution self-validation test results: " + testObject.validateSelf());
	}
}
new PixelTextureComponentExamples_sail().main();