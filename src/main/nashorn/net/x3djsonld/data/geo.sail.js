load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> a sphere. </p>
 <p> Related links: geo_sail.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.geo_sail&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/geo.x3d">geo.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/geo.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/geo.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a sphere </td>
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

	* @author John Carlson
 */

function geo_sail
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
geo_sail.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addComponent(new componentObject().setName("Shaders").setLevel(1))
    .addComponent(new componentObject().setName("CubeMapTexturing").setLevel(1))
    .addMeta(new metaObject().setName("title").setContent("geo.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("generator").setContent("manual"))
    .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/geo.x3d"))
    .addMeta(new metaObject().setName("description").setContent("a sphere")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject().setType(new MFStringObject("\"ANY\" \"EXAMINE\" \"FLY\" \"LOOKAT\"")))
    .addChild(new ViewpointObject("Tour").setDescription("Tour Views"))
    .addComments("Viewpoint position='0 0 4' description='sphere in road'/")
    .addChild(new BackgroundObject().setBackUrl(new MFStringObject("\"resources/images/bBK.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png\"")).setBottomUrl(new MFStringObject("\"resources/images/bBT.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png\"")).setFrontUrl(new MFStringObject("\"resources/images/bFR.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png\"")).setLeftUrl(new MFStringObject("\"resources/images/bLF.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png\"")).setRightUrl(new MFStringObject("\"resources/images/bRT.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png\"")).setTopUrl(new MFStringObject("\"resources/images/bTP.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png\"")))
    .addChild(new TransformObject()
      .addChild(new ShapeObject()
        .setGeometry(new SphereObject())
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setSpecularColor(0.5,0.5,0.5).setDiffuseColor(0.7,0.7,0.7))
          .setTexture(new ComposedCubeMapTextureObject("texture")
            .setBack(new ImageTextureObject().setUrl(new MFStringObject("\"resources/images/bBK.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png\"")))
            .setBottom(new ImageTextureObject().setUrl(new MFStringObject("\"resources/images/bBT.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png\"")))
            .setFront(new ImageTextureObject().setUrl(new MFStringObject("\"resources/images/bFR.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png\"")))
            .setLeft(new ImageTextureObject().setUrl(new MFStringObject("\"resources/images/bLF.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png\"")))
            .setRight(new ImageTextureObject().setUrl(new MFStringObject("\"resources/images/bRT.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png\"")))
            .setTop(new ImageTextureObject().setUrl(new MFStringObject("\"resources/images/bTP.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png\""))))
          .addShaders(new ComposedShaderObject().setLanguage("GLSL")
            .addField(new fieldObject().setAccessType("inputOutput").setName("chromaticDispertion").setType("SFVec3f").setValue("0.98 1 1.033"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("cube").setType("SFNode")
              .addChild(new ComposedCubeMapTextureObject().setUSE("texture")))
            .addField(new fieldObject().setAccessType("inputOutput").setName("bias").setType("SFFloat").setValue("0.5"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFFloat").setValue("0.5"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("power").setType("SFFloat").setValue("2"))
            .addParts(new ShaderPartObject().setUrl(new MFStringObject("\"../shaders/x3dom.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/x3dom.vs\"")))
            .addParts(new ShaderPartObject("common").setType("FRAGMENT").setUrl(new MFStringObject("\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/common.fs\""))))
          .addShaders(new ComposedShaderObject().setLanguage("GLSL")
            .addField(new fieldObject().setAccessType("initializeOnly").setName("chromaticDispertion").setType("SFVec3f").setValue("0.98 1 1.033"))
            .addField(new fieldObject().setAccessType("initializeOnly").setName("cube").setType("SFNode")
              .addChild(new ComposedCubeMapTextureObject().setUSE("texture")))
            .addField(new fieldObject().setAccessType("initializeOnly").setName("bias").setType("SFFloat").setValue("0.5"))
            .addField(new fieldObject().setAccessType("initializeOnly").setName("scale").setType("SFFloat").setValue("0.5"))
            .addField(new fieldObject().setAccessType("initializeOnly").setName("power").setType("SFFloat").setValue("2"))
            .addParts(new ShaderPartObject().setUrl(new MFStringObject("\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"")))
            .addParts(new ShaderPartObject().setUSE("common")))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return geo_sail model
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
		var testObject = new geo_sail();
		print ("geo_sail execution self-validation test results: " + testObject.validateSelf());
	}
}
new geo_sail().main();