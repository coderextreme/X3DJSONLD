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
 * <p> A flower particle system. </p>
 <p> Related links: NeedClassName.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">NeedClassName&nbsp; Document Metadata </td>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
	</p>

	* @author John Carlson
 */

function NeedClassName
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
NeedClassName.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Full").setVersion("4.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("EnvironmentalEffects").setLevel(3))
    .addComponent((new autoclass.component()).setName("Shaders").setLevel(1))
    .addComponent((new autoclass.component()).setName("CubeMapTexturing").setLevel(1))
    .addComponent((new autoclass.component()).setName("Texturing").setLevel(1))
    .addComponent((new autoclass.component()).setName("Rendering").setLevel(1))
    .addComponent((new autoclass.component()).setName("Grouping").setLevel(3))
    .addComponent((new autoclass.component()).setName("Core").setLevel(1))
    .addComponent((new autoclass.component()).setName("ParticleSystems").setLevel(3))
    .addMeta((new autoclass.meta()).setName("title").setContent("variationalflowers.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
    .addMeta((new autoclass.meta()).setName("description").setContent("A flower particle system"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/variationalflowers.x3d")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("variationalflowers.x3d"))
    .addChild((new autoclass.NavigationInfo()).setType("\"ANY\" \"EXAMINE\" \"FLY\" \"LOOKAT\""))
    .addChild((new autoclass.Viewpoint()).setDescription("Tour Views").setPosition(0.0,0.0,12.0))
    .addChild((new autoclass.Background()).setBackUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\"")).setBottomUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\"")).setFrontUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\"")).setLeftUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\"")).setRightUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\"")).setTopUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\"")))
    .addChild((new autoclass.Transform())
      .addChild((new autoclass.ParticleSystem()).setGeometryType("GEOMETRY").setMaxParticles(20)
        .addComments(java.newArray("java.lang.String",["",
"			    * values - array of MFFloats to pass to ComposedShader",
"			    * variations in values - array of MFFloats to pass to ComposedShader that varies values"]))
        .setVariationPhysicsModel((new autoclass.VariationPhysicsModel()).setValues(2 2 5 5 0 0).setVariations(0.2 0.1 0.3 0.3 0.01 0.01))
        .setEmitter((new autoclass.ExplosionEmitter()).setSpeed(1).setVariation(0.75))
        .setGeometry((new autoclass.Sphere()))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.7,0.7,0.7).setSpecularColor(0.5,0.5,0.5))
          .setTexture((new autoclass.ComposedCubeMapTexture("texture"))
            .setBackTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\"")))
            .setBottomTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\"")))
            .setFrontTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\"")))
            .setLeftTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\"")))
            .setRightTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\"")))
            .setTopTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\""))))
          .addShaders((new autoclass.ComposedShader("x_ite")).setLanguage("GLSL")
            .addField((new autoclass.field()).setName("chromaticDispertion").setType("SFVec3f").setAccessType("initializeOnly").setValue("0.98 1 1.033"))
            .addField((new autoclass.field()).setName("cube").setType("SFNode").setAccessType("initializeOnly")
              .addChild((new autoclass.ComposedCubeMapTexture())))
            .addField((new autoclass.field()).setName("bias").setType("SFFloat").setAccessType("initializeOnly").setValue("0.5"))
            .addField((new autoclass.field()).setName("scale").setType("SFFloat").setAccessType("initializeOnly").setValue("0.5"))
            .addField((new autoclass.field()).setName("power").setType("SFFloat").setAccessType("initializeOnly").setValue("2"))
            .addField((new autoclass.field()).setName("x3d_ParticleValues").setType("MFFloat").setAccessType("inputOutput").setValue("2 1 4 4 0 0"))
            .addParts((new autoclass.ShaderPart()).setUrl(new autoclass.MFString("\"../shaders/x_ite_variations.vs\"")))
            .addParts((new autoclass.ShaderPart()).setType("FRAGMENT").setUrl(new autoclass.MFString("\"../shaders/commonnew.fs\""))))))
      .addChild((new autoclass.Script("Animate")).setSourceCode("\n" + 
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
        .addField((new autoclass.field()).setName("set_fraction").setType("SFFloat").setAccessType("inputOnly"))
        .addField((new autoclass.field()).setName("values").setType("MFFloat").setAccessType("inputOutput").setValue("2 2 5 5 0 0"))
        .addField((new autoclass.field()).setName("variations").setType("MFFloat").setAccessType("inputOutput").setValue("0.2 0.1 0.3 0.3 0.01 0.01"))
        .addField((new autoclass.field()).setName("lastframe").setType("SFFloat").setAccessType("inputOutput").setValue("0"))
        .addField((new autoclass.field()).setName("updaterate").setType("SFFloat").setAccessType("inputOutput").setValue("0.1")))
      .addChild((new autoclass.TimeSensor("TourTime")).setCycleInterval(45).setLoop(true))
      .addChild((new autoclass.ROUTE()).setFromNode("TourTime").setFromField("fraction_changed").setToNode("Animate").setToField("set_fraction"))
      .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("values").setToNode("x_ite").setToField("x3d_ParticleValues"))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return NeedClassName model
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
		var testObject = new NeedClassName();
		console.log ("NeedClassName execution self-validation test results: " + testObject.validateSelf());
	}
}
new NeedClassName().main();