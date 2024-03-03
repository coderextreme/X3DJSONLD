load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> 5 or more prismatic flowers. </p>
 <p> Related links: flowers.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.flowers&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d">flowers.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> 5 or more prismatic flowers </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d</a> </td>
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

function flowers
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
flowers.prototype = {
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
    .addMeta(new meta().setName("title").setContent("flowers.x3d"))
    .addMeta(new meta().setName("creator").setContent("John Carlson"))
    .addMeta(new meta().setName("description").setContent("5 or more prismatic flowers"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d")))
  .setScene(new Scene()
    .addChild(new NavigationInfo())
    .addComments(" Images courtesy of Paul Debevec's Light Probe Image Gallery ")
    .addChild(new Background().setBackUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\"")).setBottomUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\"")).setFrontUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\"")).setLeftUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\"")).setRightUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\"")).setTopUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\"")))
    .addChild(new ProtoDeclare().setName("flower")
      .setProtoBody(new ProtoBody()
        .addChild(new Transform("animate_transform")
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(doubleToFloat(.7),doubleToFloat(.7),doubleToFloat(.7)).setSpecularColor(doubleToFloat(.5),doubleToFloat(.5),doubleToFloat(.5)))
              .setTexture(new ComposedCubeMapTexture("texture")
                .setBackTexture(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\"")))
                .setBottomTexture(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\"")))
                .setFrontTexture(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\"")))
                .setLeftTexture(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\"")))
                .setRightTexture(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\"")))
                .setTopTexture(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\""))))
              .addShaders(new ComposedShader("x3dom").setLanguage("GLSL")
                .addField(new field().setName("cube").setType("SFInt32").setAccessType("inputOutput").setValue("0"))
                .addComments(Java.to([" ",
"		       <field name='cube' type='SFNode' accessType=\"inputOutput\">",
"			  <ComposedCubeMapTexture USE=\"texture\"/>",
"		  </field>"], Java.type("java.lang.String[]")))
                .addField(new field().setName("chromaticDispertion").setType("SFVec3f").setAccessType("initializeOnly").setValue("0.98 1.0 1.033"))
                .addField(new field().setName("bias").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
                .addField(new field().setName("scale").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
                .addField(new field().setName("power").setType("SFFloat").setAccessType("inputOutput").setValue("2"))
                .addField(new field().setName("a").setType("SFFloat").setAccessType("inputOutput").setValue("10"))
                .addField(new field().setName("b").setType("SFFloat").setAccessType("inputOutput").setValue("1"))
                .addField(new field().setName("c").setType("SFFloat").setAccessType("inputOutput").setValue("20"))
                .addField(new field().setName("d").setType("SFFloat").setAccessType("inputOutput").setValue("20"))
                .addField(new field().setName("tdelta").setType("SFFloat").setAccessType("inputOutput").setValue("0"))
                .addField(new field().setName("pdelta").setType("SFFloat").setAccessType("inputOutput").setValue("0"))
                .addParts(new ShaderPart().setUrl(new MFString("\"../shaders/x3dom_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\"")))
                .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString("\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\""))))
              .addShaders(new ComposedShader("x_ite").setLanguage("GLSL")
                .addField(new field().setName("cube").setType("SFNode").setAccessType("inputOutput")
                  .addChild(new ComposedCubeMapTexture()))
                .addField(new field().setName("chromaticDispertion").setType("SFVec3f").setAccessType("initializeOnly").setValue("0.98 1.0 1.033"))
                .addField(new field().setName("bias").setType("SFFloat").setAccessType("inputOnly").setValue("0.5"))
                .addField(new field().setName("scale").setType("SFFloat").setAccessType("inputOnly").setValue("0.5"))
                .addField(new field().setName("power").setType("SFFloat").setAccessType("inputOnly").setValue("2"))
                .addField(new field().setName("a").setType("SFFloat").setAccessType("inputOnly").setValue("10"))
                .addField(new field().setName("b").setType("SFFloat").setAccessType("inputOnly").setValue("1"))
                .addField(new field().setName("c").setType("SFFloat").setAccessType("inputOnly").setValue("20"))
                .addField(new field().setName("d").setType("SFFloat").setAccessType("inputOnly").setValue("20"))
                .addField(new field().setName("tdelta").setType("SFFloat").setAccessType("inputOnly").setValue("0"))
                .addField(new field().setName("pdelta").setType("SFFloat").setAccessType("inputOnly").setValue("0"))
                .addParts(new ShaderPart().setUrl(new MFString("\"../shaders/x_ite_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs\"")))
                .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString("\"../shaders/x_ite.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs\"")))))
            .setGeometry(new Sphere())))
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
"				tdelta = tdelta + 0.5;" + "\n" + 
"				pdelta = pdelta + 0.5;" + "\n" + 
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
        .addChild(new ROUTE().setFromNode("Animate").setFromField("translation_changed").setToNode("animate_transform").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("a").setToNode("x_ite").setToField("a"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("b").setToNode("x_ite").setToField("b"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("c").setToNode("x_ite").setToField("c"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("d").setToNode("x_ite").setToField("d"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("pdelta").setToNode("x_ite").setToField("pdelta"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("tdelta").setToNode("x_ite").setToField("tdelta"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("a").setToNode("x3dom").setToField("a"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("b").setToNode("x3dom").setToField("b"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("c").setToNode("x3dom").setToField("c"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("d").setToNode("x3dom").setToField("d"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("pdelta").setToNode("x3dom").setToField("pdelta"))
        .addChild(new ROUTE().setFromNode("Animate").setFromField("tdelta").setToNode("x3dom").setToField("tdelta"))))
    .addChild(new ProtoInstance())
    .addChild(new ProtoInstance())
    .addChild(new ProtoInstance()));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return flowers model
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
		var testObject = new flowers();
		print ("flowers execution self-validation test results: " + testObject.validateSelf());
	}
}
new flowers().main();