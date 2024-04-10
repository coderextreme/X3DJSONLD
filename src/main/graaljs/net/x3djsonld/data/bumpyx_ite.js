load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> A flower. </p>
 <p> Related links: bumpyx_ite.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.bumpyx_ite&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/bumpyx_ite.x3d">bumpyx_ite.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A flower </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/bumpyx_ite.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/bumpyx_ite.x3d</a> </td>
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

function bumpyx_ite
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
bumpyx_ite.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Full").setVersion("4.0")
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
    .addMeta(new meta().setName("title").setContent("bumpyx_ite.x3d"))
    .addMeta(new meta().setName("creator").setContent("John Carlson"))
    .addMeta(new meta().setName("description").setContent("A flower"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/bumpyx_ite.x3d")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("bumpyx_ite.x3d"))
    .addChild(new NavigationInfo().setType("\"ANY\" \"EXAMINE\" \"FLY\" \"LOOKAT\""))
    .addChild(new Viewpoint().setDescription("Transparent rose").setPosition(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(40.0)))
    .addComments(" Images courtesy of Paul Debevec's Light Probe Image Gallery ")
    .addChild(new Background().setBackUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\"")).setBottomUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\"")).setFrontUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\"")).setLeftUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\"")).setRightUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\"")).setTopUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\"")))
    .addChild(new Transform()
      .addChild(new Shape()
        .setGeometry(new Sphere().setRadius(40))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(.7),doubleToFloat(.7),doubleToFloat(.7)).setSpecularColor(doubleToFloat(.5),doubleToFloat(.5),doubleToFloat(.5)))
          .setTexture(new ComposedCubeMapTexture("texture")
            .setBackTexture(new ImageTexture().setId("backShader").setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\"")))
            .setBottomTexture(new ImageTexture().setId("bottomShader").setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\"")))
            .setFrontTexture(new ImageTexture().setId("frontShader").setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\"")))
            .setLeftTexture(new ImageTexture().setId("leftShader").setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\"")))
            .setRightTexture(new ImageTexture().setId("rightShader").setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\"")))
            .setTopTexture(new ImageTexture().setId("topShader").setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\""))))
          .addShaders(new ComposedShader("x_iteShader").setLanguage("GLSL")
            .addField(new field().setName("chromaticDispertion").setType("SFVec3f").setAccessType("inputOnly").setValue("0.98 1.0 1.033"))
            .addField(new field().setName("cube").setType("SFNode").setAccessType("inputOnly")
              .addChild(new ComposedCubeMapTexture().setUSE("texture")))
            .addField(new field().setName("bias").setType("SFFloat").setAccessType("inputOnly").setValue("0.5"))
            .addField(new field().setName("scale").setType("SFFloat").setAccessType("inputOnly").setValue("0.5"))
            .addField(new field().setName("power").setType("SFFloat").setAccessType("inputOnly").setValue("2"))
            .addField(new field().setName("a").setType("SFFloat").setAccessType("inputOutput").setValue("15"))
            .addField(new field().setName("b").setType("SFFloat").setAccessType("inputOutput").setValue("5"))
            .addField(new field().setName("c").setType("SFFloat").setAccessType("inputOutput").setValue("5"))
            .addField(new field().setName("d").setType("SFFloat").setAccessType("inputOutput").setValue("5"))
            .addField(new field().setName("tdelta").setType("SFFloat").setAccessType("inputOutput").setValue("0"))
            .addField(new field().setName("pdelta").setType("SFFloat").setAccessType("inputOutput").setValue("0"))
            .addParts(new ShaderPart().setUrl(new MFString("\"../shaders/x_ite_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs\"")))
            .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString("\"../shaders/x_ite.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs\"")))
            .addComments(Java.to([" TO CONVERT TO A SPHERE",
"                  <ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart>",
"                  <ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>"], Java.type("java.lang.String[]"))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return bumpyx_ite model
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
			var metaObject = metaList[m];
			if (metaObject.getName() === metaObject.NAME_ERROR ||
				metaObject.getName() === metaObject.NAME_WARNING ||
				metaObject.getName() === metaObject.NAME_HINT ||
				metaObject.getName() === metaObject.NAME_INFO ||
				metaObject.getName() === metaObject.NAME_TODO)
			{
				metaResult += metaObject.toStringX3D();
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
		var testObject = new bumpyx_ite();
		print ("bumpyx_ite execution self-validation test results: " + testObject.validateSelf());
	}
}
new bumpyx_ite().main();