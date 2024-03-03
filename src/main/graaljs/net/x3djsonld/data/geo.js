load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> a sphere. </p>
 <p> Related links: geo.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.geo&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d">geo.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d</a> </td>
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
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author John Carlson
 */

function geo
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
  function doubleToFloat(d) {
    if (Float32Array) {
        return new Float32Array([d])[0];
    }
  }
geo.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("4.0")
  .setHead(new head()
    .addComponent(new component().setName("Scripting").setLevel(1))
    .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
    .addComponent(new component().setName("Shaders").setLevel(1))
    .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
    .addComponent(new component().setName("Texturing").setLevel(1))
    .addComponent(new component().setName("Rendering").setLevel(1))
    .addComments("<component name='Shape' level='4'></component>")
    .addComponent(new component().setName("Grouping").setLevel(3))
    .addComponent(new component().setName("Core").setLevel(1))
    .addMeta(new meta().setName("title").setContent("geo.x3d"))
    .addMeta(new meta().setName("creator").setContent("John Carlson"))
    .addMeta(new meta().setName("generator").setContent("manual"))
    .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d"))
    .addMeta(new meta().setName("description").setContent("a sphere")))
  .setScene(new Scene()
    .addChild(new NavigationInfo().setType("\"ANY\" \"EXAMINE\" \"FLY\" \"LOOKAT\""))
    .addChild(new Viewpoint("Tour").setDescription("Tour Views"))
    .addComments("Viewpoint position='0 0 4' description='sphere in road'/")
    .addChild(new Background().setBackUrl(new MFString("\"../resources/images/bBK.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png\"")).setBottomUrl(new MFString("\"../resources/images/bBT.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png\"")).setFrontUrl(new MFString("\"../resources/images/bFR.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png\"")).setLeftUrl(new MFString("\"../resources/images/bLF.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png\"")).setRightUrl(new MFString("\"../resources/images/bRT.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png\"")).setTopUrl(new MFString("\"../resources/images/bTP.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png\"")))
    .addChild(new Transform()
      .addChild(new Shape()
        .setGeometry(new Sphere())
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.7),doubleToFloat(0.7),doubleToFloat(0.7)).setSpecularColor(doubleToFloat(0.5),doubleToFloat(0.5),doubleToFloat(0.5)))
          .setTexture(new ComposedCubeMapTexture("texture")
            .setBack(new ImageTexture().setUrl(new MFString("\"../resources/images/bBK.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png\"")))
            .setBottom(new ImageTexture().setUrl(new MFString("\"../resources/images/bBT.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png\"")))
            .setFront(new ImageTexture().setUrl(new MFString("\"../resources/images/bFR.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png\"")))
            .setLeft(new ImageTexture().setUrl(new MFString("\"../resources/images/bLF.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png\"")))
            .setRight(new ImageTexture().setUrl(new MFString("\"../resources/images/bRT.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png\"")))
            .setTop(new ImageTexture().setUrl(new MFString("\"../resources/images/bTP.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png\""))))
          .addShaders(new ComposedShader().setLanguage("GLSL")
            .addField(new field().setName("chromaticDispertion").setType("SFVec3f").setAccessType("inputOutput").setValue("0.98 1 1.033"))
            .addField(new field().setName("cube").setType("SFNode").setAccessType("inputOutput")
              .addChild(new ComposedCubeMapTexture()))
            .addField(new field().setName("bias").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
            .addField(new field().setName("scale").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
            .addField(new field().setName("power").setType("SFFloat").setAccessType("inputOutput").setValue("2"))
            .addParts(new ShaderPart().setUrl(new MFString("\"../shaders/x3dom.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs\"")))
            .addParts(new ShaderPart("common").setType("FRAGMENT").setUrl(new MFString("\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\""))))
          .addShaders(new ComposedShader().setLanguage("GLSL")
            .addField(new field().setName("chromaticDispertion").setType("SFVec3f").setAccessType("initializeOnly").setValue("0.98 1 1.033"))
            .addField(new field().setName("cube").setType("SFNode").setAccessType("initializeOnly")
              .addChild(new ComposedCubeMapTexture()))
            .addField(new field().setName("bias").setType("SFFloat").setAccessType("initializeOnly").setValue("0.5"))
            .addField(new field().setName("scale").setType("SFFloat").setAccessType("initializeOnly").setValue("0.5"))
            .addField(new field().setName("power").setType("SFFloat").setAccessType("initializeOnly").setValue("2"))
            .addParts(new ShaderPart().setUrl(new MFString("\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"")))
            .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString("\"../shaders/x_ite.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs\""))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return geo model
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
		var testObject = new geo();
		print ("geo execution self-validation test results: " + testObject.validateSelf());
	}
}
new geo().main();