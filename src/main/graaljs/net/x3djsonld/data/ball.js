load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> a prismatic sphere. </p>
 <p> Related links: ball.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.ball&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d">ball.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a prismatic sphere </td>
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

function ball
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
ball.prototype = {
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
    .addComponent(new component().setName("Grouping").setLevel(3))
    .addComponent(new component().setName("Core").setLevel(1))
    .addMeta(new meta().setName("title").setContent("ball.x3d"))
    .addMeta(new meta().setName("creator").setContent("John Carlson"))
    .addMeta(new meta().setName("generator").setContent("manual"))
    .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d"))
    .addMeta(new meta().setName("description").setContent("a prismatic sphere")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("ball.x3d"))
    .addChild(new NavigationInfo().setType("\"ANY\" \"EXAMINE\" \"FLY\" \"LOOKAT\""))
    .addChild(new Viewpoint().setDescription("Tour Views"))
    .addChild(new Background().setBackUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\"")).setBottomUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\"")).setFrontUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\"")).setLeftUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\"")).setRightUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\"")).setTopUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\"")))
    .addChild(new Transform()
      .addChild(new Shape()
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
          .addComments(Java.to(["",
"                    <ProgramShader DEF='ProgramShader' containerField='shaders' language='GLSL'>",
"			<ShaderProgram url='\"../shaders/freewrl.vs\"' containerField='programs' type='VERTEX'>",
"                        <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'/>",
"                        <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'/>",
"                        <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'/>",
"                        <field name='power' accessType='initializeOnly' type='SFFloat' value='2'/>",
"                        </ShaderProgram>",
"			<ShaderProgram url='\"../shaders/freewrl.fs\"' containerField='programs' type='FRAGMENT'/>",
"		    </ProgramShader>"], Java.type("java.lang.String[]")))
          .addComments(Java.to(["",
"                <ComposedShader language='GLSL'>",
"		  <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field>",
"		  <field name='fw_Texture_unit0' type='SFNode' accessType=\"initializeOnly\">",
"			<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>",
"		  </field>",
"		  <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field>",
"		  <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field>",
"		  <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field>",
"		  <ShaderPart url='\"../shaders/contact.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart>",
"		  <ShaderPart url='\"../shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>",
"                </ComposedShader>"], Java.type("java.lang.String[]")))
          .addComments(Java.to(["",
"                <ComposedShader language='GLSL'>",
"		  <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field>",
"		  <field name='cube' type='SFNode' accessType=\"inputOutput\">",
"			<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>",
"		  </field>",
"		  <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field>",
"		  <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field>",
"		  <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field>",
"		  <ShaderPart url='\"../shaders/octaga.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart>",
"		  <ShaderPart url='\"../shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>",
"                </ComposedShader>"], Java.type("java.lang.String[]")))
          .addComments(Java.to(["",
"                <ComposedShader language='GLSL'>",
"		  <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field>",
"		  <field name='cube' accessType='initializeOnly' type='SFInt32' value='0'></field>",
"		  <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field>",
"		  <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field>",
"		  <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field>",
"		  <ShaderPart url='\"../shaders/instant.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart>",
"		  <ShaderPart url='\"../shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>",
"                </ComposedShader>"], Java.type("java.lang.String[]")))
          .addComments(Java.to([""], Java.type("java.lang.String[]")))
          .addShaders(new ComposedShader().setLanguage("GLSL")
            .addField(new field().setName("chromaticDispertion").setType("SFVec3f").setAccessType("inputOutput").setValue("0.98 1 1.033"))
            .addField(new field().setName("cube").setType("SFNode").setAccessType("inputOutput")
              .addChild(new ComposedCubeMapTexture().setUSE("texture")))
            .addField(new field().setName("bias").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
            .addField(new field().setName("scale").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
            .addField(new field().setName("power").setType("SFFloat").setAccessType("inputOutput").setValue("2"))
            .addParts(new ShaderPart().setUrl(new MFString("\"../shaders/x3dom.vs\"")))
            .addParts(new ShaderPart("common").setType("FRAGMENT").setUrl(new MFString("\"../shaders/common.fs\""))))
          .addShaders(new ComposedShader().setLanguage("GLSL")
            .addField(new field().setName("chromaticDispertion").setType("SFVec3f").setAccessType("initializeOnly").setValue("0.98 1 1.033"))
            .addField(new field().setName("cube").setType("SFNode").setAccessType("initializeOnly")
              .addChild(new ComposedCubeMapTexture().setUSE("texture")))
            .addField(new field().setName("bias").setType("SFFloat").setAccessType("initializeOnly").setValue("0.5"))
            .addField(new field().setName("scale").setType("SFFloat").setAccessType("initializeOnly").setValue("0.5"))
            .addField(new field().setName("power").setType("SFFloat").setAccessType("initializeOnly").setValue("2"))
            .addParts(new ShaderPart().setUrl(new MFString("\"../shaders/x_ite.vs\"")))
            .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString("\"../shaders/x_itebubbles.fs\""))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return ball model
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
		var testObject = new ball();
		print ("ball execution self-validation test results: " + testObject.validateSelf());
	}
}
new ball().main();