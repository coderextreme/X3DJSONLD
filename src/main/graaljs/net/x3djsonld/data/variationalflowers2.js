load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> A flower particle system. </p>
 <p> Related links: variationalflowers2.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.variationalflowers2&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/variationalflowers.x3d">variationalflowers.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A flower particle system </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/variationalflowers.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/variationalflowers.x3d</a> </td>
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

function variationalflowers2
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
variationalflowers2.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Full").setVersion("4.0")
  .setHead(new head()
    .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
    .addComponent(new component().setName("Shaders").setLevel(1))
    .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
    .addComponent(new component().setName("Texturing").setLevel(1))
    .addComponent(new component().setName("Rendering").setLevel(1))
    .addComponent(new component().setName("Grouping").setLevel(3))
    .addComponent(new component().setName("Core").setLevel(1))
    .addComponent(new component().setName("ParticleSystems").setLevel(3))
    .addMeta(new meta().setName("title").setContent("variationalflowers.x3d"))
    .addMeta(new meta().setName("creator").setContent("John Carlson"))
    .addMeta(new meta().setName("description").setContent("A flower particle system"))
    .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/variationalflowers.x3d")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("variationalflowers.x3d"))
    .addChild(new NavigationInfo().setType("\"ANY\" \"EXAMINE\" \"FLY\" \"LOOKAT\""))
    .addChild(new Viewpoint().setDescription("Tour Views").setPosition(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(12.0)))
    .addChild(new Background().setBackUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\"")).setBottomUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\"")).setFrontUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\"")).setLeftUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\"")).setRightUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\"")).setTopUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\"")))
    .addChild(new Transform()
      .addChild(new ParticleSystem().setGeometryType("GEOMETRY").setMaxParticles(20)
        .addComments(Java.to(["",
"			    * values - array of MFFloats to pass to ComposedShader",
"			    * variations in values - array of MFFloats to pass to ComposedShader that varies values"], Java.type("java.lang.String[]")))
        .setVariationPhysicsModel(new VariationPhysicsModel().setValues(2 2 5 5 0 0).setVariations(0.2 0.1 0.3 0.3 0.01 0.01))
        .setEmitter(new ExplosionEmitter().setSpeed(1).setVariation(0.75))
        .setGeometry(new Sphere())
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.7),doubleToFloat(0.7),doubleToFloat(0.7)).setSpecularColor(doubleToFloat(0.5),doubleToFloat(0.5),doubleToFloat(0.5)))
          .setTexture(new ComposedCubeMapTexture("texture")
            .setBackTexture(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\"")))
            .setBottomTexture(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\"")))
            .setFrontTexture(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\"")))
            .setLeftTexture(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\"")))
            .setRightTexture(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\"")))
            .setTopTexture(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\""))))
          .addShaders(new ComposedShader("x_ite").setLanguage("GLSL")
            .addField(new field().setName("chromaticDispertion").setType("SFVec3f").setAccessType("initializeOnly").setValue("0.98 1 1.033"))
            .addField(new field().setName("cube").setType("SFNode").setAccessType("initializeOnly")
              .addChild(new ComposedCubeMapTexture().setUSE("texture")))
            .addField(new field().setName("bias").setType("SFFloat").setAccessType("initializeOnly").setValue("0.5"))
            .addField(new field().setName("scale").setType("SFFloat").setAccessType("initializeOnly").setValue("0.5"))
            .addField(new field().setName("power").setType("SFFloat").setAccessType("initializeOnly").setValue("2"))
            .addField(new field().setName("x3d_ParticleValues").setType("MFFloat").setAccessType("inputOutput").setValue("2 1 4 4 0 0"))
            .addParts(new ShaderPart().setUrl(new MFString("\"../shaders/x_ite_variations.vs\"")))
            .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString("\"../shaders/commonnew.fs\""))))))
      .addChild(new Script("Animate").setSourceCode("\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"			function set_fraction(f, tm) {" + "\n" + 
"			    if (lastframe + updaterate < tm) {" + "\n" + 
"			  	lastframe = tm;" + "\n" + 
"				for (let v in values) {" + "\n" + 
"					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];" + "\n" + 
"				}" + "\n" + 
"			    }" + "\n" + 
"			}" + "\n")
        .addField(new field().setName("set_fraction").setType("SFFloat").setAccessType("inputOnly"))
        .addField(new field().setName("values").setType("MFFloat").setAccessType("inputOutput").setValue("2 2 5 5 0 0"))
        .addField(new field().setName("variations").setType("MFFloat").setAccessType("inputOutput").setValue("0.2 0.1 0.3 0.3 0.01 0.01"))
        .addField(new field().setName("lastframe").setType("SFFloat").setAccessType("inputOutput").setValue("0"))
        .addField(new field().setName("updaterate").setType("SFFloat").setAccessType("inputOutput").setValue("0.1")))
      .addChild(new TimeSensor("TourTime").setCycleInterval(45).setLoop(true))
      .addChild(new ROUTE().setFromNode("TourTime").setFromField("fraction_changed").setToNode("Animate").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Animate").setFromField("values").setToNode("x_ite").setToField("x3d_ParticleValues"))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return variationalflowers2 model
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
		var testObject = new variationalflowers2();
		print ("variationalflowers2 execution self-validation test results: " + testObject.validateSelf());
	}
}
new variationalflowers2().main();