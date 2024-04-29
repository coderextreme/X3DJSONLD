load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> A flower proto with configurable shaders. </p>
 <p> Related links: fwparticleflowers.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.fwparticleflowers&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d">particleflowers.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A flower proto with configurable shaders </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d</a> </td>
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

function fwparticleflowers
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
fwparticleflowers.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("4.0")
  .setHead(new head()
    .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
    .addComponent(new component().setName("Shaders").setLevel(1))
    .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
    .addComponent(new component().setName("Texturing").setLevel(1))
    .addComponent(new component().setName("Rendering").setLevel(1))
    .addComponent(new component().setName("Grouping").setLevel(3))
    .addComponent(new component().setName("Core").setLevel(1))
    .addComponent(new component().setName("ParticleSystems").setLevel(3))
    .addMeta(new meta().setName("title").setContent("particleflowers.x3d"))
    .addMeta(new meta().setName("creator").setContent("John Carlson"))
    .addMeta(new meta().setName("description").setContent("A flower proto with configurable shaders"))
    .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("particleflowers.x3d"))
    .addChild(new NavigationInfo().setType("\"ANY\" \"EXAMINE\" \"FLY\" \"LOOKAT\""))
    .addChild(new Viewpoint().setDescription("Tour Views").setPosition(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(12.0)))
    .addChild(new Background().setBackUrl(new MFString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\"")).setBottomUrl(new MFString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\"")).setFrontUrl(new MFString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\"")).setLeftUrl(new MFString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\"")).setRightUrl(new MFString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\"")).setTopUrl(new MFString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\"")))
    .addChild(new Transform()
      .addChild(new ParticleSystem().setGeometryType("GEOMETRY").setMaxParticles(20)
        .setPhysics(new BoundedPhysicsModel()
          .setGeometry(new Sphere().setRadius(100)))
        .setEmitter(new ExplosionEmitter().setSpeed(2).setVariation(0.75))
        .setGeometry(new Sphere())
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.7),doubleToFloat(0.7),doubleToFloat(0.7)).setSpecularColor(doubleToFloat(0.5),doubleToFloat(0.5),doubleToFloat(0.5)))
          .setTexture(new ComposedCubeMapTexture("texture")
            .setBackTexture(new ImageTexture().setUrl(new MFString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\"")))
            .setBottomTexture(new ImageTexture().setUrl(new MFString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\"")))
            .setFrontTexture(new ImageTexture().setUrl(new MFString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\"")))
            .setLeftTexture(new ImageTexture().setUrl(new MFString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\"")))
            .setRightTexture(new ImageTexture().setUrl(new MFString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\"")))
            .setTopTexture(new ImageTexture().setUrl(new MFString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\""))))
          .addShaders(new ComposedShader("fw").setLanguage("GLSL")
            .addField(new field().setName("chromaticDispertion").setType("SFVec3f").setAccessType("inputOutput").setValue("0.98 1 1.033"))
            .addField(new field().setName("cube").setType("SFNode").setAccessType("inputOutput")
              .addChild(new ComposedCubeMapTexture().setUSE("texture")))
            .addField(new field().setName("bias").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
            .addField(new field().setName("scale").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
            .addField(new field().setName("power").setType("SFFloat").setAccessType("inputOutput").setValue("2"))
            .addField(new field().setName("a").setType("SFFloat").setAccessType("inputOutput").setValue("2"))
            .addField(new field().setName("b").setType("SFFloat").setAccessType("inputOutput").setValue("1"))
            .addField(new field().setName("c").setType("SFFloat").setAccessType("inputOutput").setValue("5"))
            .addField(new field().setName("d").setType("SFFloat").setAccessType("inputOutput").setValue("5"))
            .addField(new field().setName("tdelta").setType("SFFloat").setAccessType("inputOutput").setValue("0"))
            .addField(new field().setName("pdelta").setType("SFFloat").setAccessType("inputOutput").setValue("0"))
            .addParts(new ShaderPart().setUrl(new MFString("\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"")))
            .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString("\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\""))))))
      .addChild(new Script("Animate").setSourceCode("\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"			function initialize() {" + "\n" + 
"			    translation = new SFVec3f(0, 0, 0);" + "\n" + 
"			    velocity = new SFVec3f(" + "\n" + 
"			    	Math.random() - 0.5," + "\n" + 
"				Math.random() - 0.5," + "\n" + 
"				Math.random() - 0.5);" + "\n" + 
"			}" + "\n" + 
"			function set_fraction() {" + "\n" + 
"			    translation = new SFVec3f(" + "\n" + 
"			    	translation.x + velocity.x," + "\n" + 
"				translation.y + velocity.y," + "\n" + 
"				translation.z + velocity.z);" + "\n" + 
"			    for (var j = 0; j <= 2; j++) {" + "\n" + 
"				    if (Math.abs(translation.x) > 10) {" + "\n" + 
"					initialize();" + "\n" + 
"				    } else if (Math.abs(translation.y) > 10) {" + "\n" + 
"					initialize();" + "\n" + 
"				    } else if (Math.abs(translation.z) > 10) {" + "\n" + 
"					initialize();" + "\n" + 
"				    } else {" + "\n" + 
"					velocity.x += Math.random() * 0.2 - 0.1;" + "\n" + 
"					velocity.y += Math.random() * 0.2 - 0.1;" + "\n" + 
"					velocity.z += Math.random() * 0.2 - 0.1;" + "\n" + 
"				    }" + "\n" + 
"			    }" + "\n" + 
"			    animate_flowers();" + "\n" + 
"			}" + "\n" + 
"\n" + 
"			function animate_flowers(fraction, eventTime) {" + "\n" + 
"				var choice = Math.floor(Math.random() * 4);" + "\n" + 
"				switch (choice) {" + "\n" + 
"				case 0:" + "\n" + 
"					a += Math.random() * 0.2 - 0.1;" + "\n" + 
"					break;" + "\n" + 
"				case 1:" + "\n" + 
"					b += Math.random() * 0.2 - 0.1;" + "\n" + 
"					break;" + "\n" + 
"				case 2:" + "\n" + 
"					c += Math.random() * 2 - 1;" + "\n" + 
"					break;" + "\n" + 
"				case 3:" + "\n" + 
"					d += Math.random() * 2 - 1;" + "\n" + 
"					break;" + "\n" + 
"				}" + "\n" + 
"				tdelta = tdelta + 0.05;" + "\n" + 
"				pdelta = pdelta + 0.05;" + "\n" + 
"				if (a > 1) {" + "\n" + 
"					a =  0.5;" + "\n" + 
"				}" + "\n" + 
"				if (b > 1) {" + "\n" + 
"					b =  0.5;" + "\n" + 
"				}" + "\n" + 
"				if (c < 1) {" + "\n" + 
"					c =  4;" + "\n" + 
"				}" + "\n" + 
"				if (d < 1) {" + "\n" + 
"					d =  4;" + "\n" + 
"				}" + "\n" + 
"				if (c > 10) {" + "\n" + 
"					c = 4;" + "\n" + 
"				}" + "\n" + 
"				if (d > 10) {" + "\n" + 
"					d = 4;" + "\n" + 
"				}" + "\n" + 
"			}" + "\n")
        .addField(new field().setName("translation").setType("SFVec3f").setAccessType("inputOutput").setValue("0 0 0"))
        .addField(new field().setName("velocity").setType("SFVec3f").setAccessType("inputOutput").setValue("0 0 0"))
        .addField(new field().setName("set_fraction").setType("SFFloat").setAccessType("inputOnly"))
        .addField(new field().setName("a").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
        .addField(new field().setName("b").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
        .addField(new field().setName("c").setType("SFFloat").setAccessType("inputOutput").setValue("3"))
        .addField(new field().setName("d").setType("SFFloat").setAccessType("inputOutput").setValue("3"))
        .addField(new field().setName("tdelta").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
        .addField(new field().setName("pdelta").setType("SFFloat").setAccessType("inputOutput").setValue("0.5")))
      .addChild(new TimeSensor("TourTime").setCycleInterval(5).setLoop(true))
      .addChild(new ROUTE().setFromNode("TourTime").setFromField("fraction_changed").setToNode("Animate").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Animate").setFromField("a").setToNode("fw").setToField("a"))
      .addChild(new ROUTE().setFromNode("Animate").setFromField("b").setToNode("fw").setToField("b"))
      .addChild(new ROUTE().setFromNode("Animate").setFromField("c").setToNode("fw").setToField("c"))
      .addChild(new ROUTE().setFromNode("Animate").setFromField("d").setToNode("fw").setToField("d"))
      .addChild(new ROUTE().setFromNode("Animate").setFromField("pdelta").setToNode("fw").setToField("pdelta"))
      .addChild(new ROUTE().setFromNode("Animate").setFromField("tdelta").setToNode("fw").setToField("tdelta"))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return fwparticleflowers model
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
		var testObject = new fwparticleflowers();
		print ("fwparticleflowers execution self-validation test results: " + testObject.validateSelf());
	}
}
new fwparticleflowers().main();