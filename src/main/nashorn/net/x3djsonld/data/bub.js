load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> 3 prismatic spheres. </p>
 <p> Related links: bub.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.bub&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/bub.x3d">bub.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> 3 prismatic spheres </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/bub.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/bub.x3d</a> </td>
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

function bub
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
bub.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.3")
  .setHead(new head()
    .addComponent(new component().setName("Shaders").setLevel(1))
    .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
    .addComponent(new component().setName("Texturing").setLevel(1))
    .addComponent(new component().setName("Rendering").setLevel(1))
    .addComponent(new component().setName("Shape").setLevel(4))
    .addComponent(new component().setName("Grouping").setLevel(3))
    .addMeta(new meta().setName("title").setContent("bub.x3d"))
    .addMeta(new meta().setName("creator").setContent("John Carlson"))
    .addMeta(new meta().setName("description").setContent("3 prismatic spheres"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/bub.x3d")))
  .setScene(new Scene()
    .addChild(new NavigationInfo())
    .addChild(new Background().setBackUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png\"")).setBottomUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png\"")).setFrontUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png\"")).setLeftUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png\"")).setRightUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png\"")).setTopUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png\"")))
    .addChild(new Viewpoint().setDescription("Look at the bubbles flying").setPosition(0.0,0.0,20.0))
    .addChild(new ProtoDeclare().setName("Bubble")
      .setProtoBody(new ProtoBody()
        .addChild(new Transform("transform")
          .addChild(new Shape("myShape")
            .setAppearance(new Appearance()
              .setMaterial(new Material().setSpecularColor(.5,.5,.5).setDiffuseColor(.7,.7,.7))
              .setTexture(new ComposedCubeMapTexture("texture")
                .setBack(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png\"")))
                .setBottom(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png\"")))
                .setFront(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png\"")))
                .setLeft(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png\"")))
                .setRight(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png\"")))
                .setTop(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png\""))))
              .addComments(Java.to(["",
"					<ComposedShader DEF='gl' language=\"GLSL\">",
"					  <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/>",
"					  <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/>",
"					  <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/>",
"					  <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/>",
"					  <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/>",
"",
"					  <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"' type='VERTEX'></ShaderPart>",
"					  <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart>",
"					</ComposedShader>",
"					<ComposedShader DEF='freewrl' language=\"GLSL\">",
"					  <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/>",
"					  <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/>",
"					  <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/>",
"					  <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/>",
"					  <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/>",
"",
"					  <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart>",
"					  <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart>",
"					</ComposedShader>"], Java.type("java.lang.String[]")))
              .addShaders(new ComposedShader("x3dom").setLanguage("GLSL")
                .addField(new field().setAccessType("inputOutput").setName("cube").setType("SFInt32").setValue("0"))
                .addField(new field().setAccessType("inputOutput").setName("chromaticDispertion").setType("SFVec3f").setValue("0.98 1.0 1.033"))
                .addField(new field().setAccessType("inputOutput").setName("bias").setType("SFFloat").setValue("0.5"))
                .addField(new field().setAccessType("inputOutput").setName("scale").setType("SFFloat").setValue("0.5"))
                .addField(new field().setAccessType("inputOutput").setName("power").setType("SFFloat").setValue("2.0"))
                .addParts(new ShaderPart().setUrl(new MFString("\"../shaders/x3dom.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs\"")))
                .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString("\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\""))))
              .addComments(Java.to(["",
"					<ComposedShader DEF='instant' language=\"GLSL\">",
"					  <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/>",
"					  <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/>",
"					  <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/>",
"					  <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/>",
"					  <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/>",
"",
"			      <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type='VERTEX'></ShaderPart>",
"			      <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart>",
"                            </ComposedShader>"], Java.type("java.lang.String[]")))
              .addShaders(new ComposedShader("x_ite").setLanguage("GLSL")
                .addField(new field().setAccessType("inputOutput").setName("cube").setType("SFNode")
                  .addChild(new ComposedCubeMapTexture().setUSE("texture")))
                .addField(new field().setAccessType("inputOutput").setName("chromaticDispertion").setType("SFVec3f").setValue("0.98 1.0 1.033"))
                .addField(new field().setAccessType("inputOutput").setName("bias").setType("SFFloat").setValue("0.5"))
                .addField(new field().setAccessType("inputOutput").setName("scale").setType("SFFloat").setValue("0.5"))
                .addField(new field().setAccessType("inputOutput").setName("power").setType("SFFloat").setValue("2.0"))
                .addParts(new ShaderPart().setUrl(new MFString("\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/src/main/shaders/x_ite.vs\"")))
                .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString("\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"")))))
            .setGeometry(new Sphere())))
        .addChild(new Script("Bounce").setSourceCode("\n" + 
"ecmascript:" + "\n" + 
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
"			    if (Math.abs(translation.x) > 10) {" + "\n" + 
"				initialize();" + "\n" + 
"			    } else if (Math.abs(translation.y) > 10) {" + "\n" + 
"				initialize();" + "\n" + 
"			    } else if (Math.abs(translation.z) > 10) {" + "\n" + 
"				initialize();" + "\n" + 
"			    } else {" + "\n" + 
"				velocity.x += Math.random() * 0.2 - 0.1;" + "\n" + 
"				velocity.y += Math.random() * 0.2 - 0.1;" + "\n" + 
"				velocity.z += Math.random() * 0.2 - 0.1;" + "\n" + 
"			    }" + "\n" + 
"			}" + "\n")
          .addField(new field().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
          .addField(new field().setAccessType("inputOutput").setName("velocity").setType("SFVec3f").setValue("0 0 0"))
          .addField(new field().setAccessType("inputOnly").setName("set_fraction").setType("SFTime")))
        .addChild(new TimeSensor("TourTime").setCycleInterval(0.150).setLoop(true))
        .addChild(new ROUTE().setFromNode("TourTime").setFromField("cycleTime").setToNode("Bounce").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation"))))
    .addChild(new ProtoInstance().setName("Bubble"))
    .addChild(new ProtoInstance().setName("Bubble"))
    .addChild(new ProtoInstance().setName("Bubble")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return bub model
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
		var testObject = new bub();
		print ("bub execution self-validation test results: " + testObject.validateSelf());
	}
}
new bub().main();