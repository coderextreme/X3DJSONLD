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
 * <p> a prismatic sphere. </p>
 <p> Related links: ball.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.ball&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/ball.x3d">ball.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/ball.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/ball.x3d</a> </td>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
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
ball.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("EnvironmentalEffects").setLevel(1))
    .addComponent((new autoclass.component()).setName("EnvironmentalEffects").setLevel(3))
    .addComponent((new autoclass.component()).setName("Shaders").setLevel(1))
    .addComponent((new autoclass.component()).setName("CubeMapTexturing").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("ball.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/ball.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("a prismatic sphere")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.NavigationInfo()).setType(new autoclass.MFString("\"ANY\" \"EXAMINE\" \"FLY\" \"LOOKAT\"")))
    .addChild((new autoclass.Viewpoint()).setDescription("Tour Views"))
    .addChild((new autoclass.Background()).setBackUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png\"")).setBottomUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png\"")).setFrontUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png\"")).setLeftUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png\"")).setRightUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png\"")).setTopUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png\"")))
    .addChild((new autoclass.Transform())
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Sphere()))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setSpecularColor(0.5,0.5,0.5).setDiffuseColor(0.7,0.7,0.7))
          .setTexture((new autoclass.ComposedCubeMapTexture("texture"))
            .setBack((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png\"")))
            .setBottom((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png\"")))
            .setFront((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png\"")))
            .setLeft((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png\"")))
            .setRight((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png\"")))
            .setTop((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png\""))))
          .addComments(java.newArray("java.lang.String",["",
"                    <ProgramShader DEF='ProgramShader' containerField='shaders' language='GLSL'>",
"			<ShaderProgram url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' containerField='programs' type='VERTEX'>",
"                        <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'/>",
"                        <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'/>",
"                        <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'/>",
"                        <field name='power' accessType='initializeOnly' type='SFFloat' value='2'/>",
"                        </ShaderProgram>",
"			<ShaderProgram url='\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='programs' type='FRAGMENT'/>",
"		    </ProgramShader>"]))
          .addComments(java.newArray("java.lang.String",["",
"                <ComposedShader language='GLSL'>",
"		  <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field>",
"		  <field name='fw_Texture_unit0' type='SFNode' accessType=\"initializeOnly\">",
"			<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>",
"		  </field>",
"		  <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field>",
"		  <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field>",
"		  <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field>",
"		  <ShaderPart url='\"../shaders/contact.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/contact.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart>",
"		  <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>",
"                </ComposedShader>"]))
          .addComments(java.newArray("java.lang.String",["",
"                <ComposedShader language='GLSL'>",
"		  <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field>",
"		  <field name='cube' type='SFNode' accessType=\"inputOutput\">",
"			<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>",
"		  </field>",
"		  <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field>",
"		  <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field>",
"		  <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field>",
"		  <ShaderPart url='\"../shaders/octaga.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/octaga.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart>",
"		  <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>",
"                </ComposedShader>"]))
          .addComments(java.newArray("java.lang.String",["",
"                <ComposedShader language='GLSL'>",
"		  <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field>",
"		  <field name='cube' accessType='initializeOnly' type='SFInt32' value='0'></field>",
"		  <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field>",
"		  <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field>",
"		  <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field>",
"		  <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart>",
"		  <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>",
"                </ComposedShader>"]))
          .addComments(java.newArray("java.lang.String",[""]))
          .addShaders((new autoclass.ComposedShader()).setLanguage("GLSL")
            .addField((new autoclass.field()).setAccessType("inputOutput").setName("chromaticDispertion").setType("SFVec3f").setValue("0.98 1 1.033"))
            .addField((new autoclass.field()).setAccessType("inputOutput").setName("cube").setType("SFNode")
              .addChild((new autoclass.ComposedCubeMapTexture()).setUSE("texture")))
            .addField((new autoclass.field()).setAccessType("inputOutput").setName("bias").setType("SFFloat").setValue("0.5"))
            .addField((new autoclass.field()).setAccessType("inputOutput").setName("scale").setType("SFFloat").setValue("0.5"))
            .addField((new autoclass.field()).setAccessType("inputOutput").setName("power").setType("SFFloat").setValue("2"))
            .addParts((new autoclass.ShaderPart()).setUrl(new autoclass.MFString("\"../shaders/x3dom.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/src/main/shaders/x3dom.vs\"")))
            .addParts((new autoclass.ShaderPart("common")).setType("FRAGMENT").setUrl(new autoclass.MFString("\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\""))))
          .addShaders((new autoclass.ComposedShader()).setLanguage("GLSL")
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("chromaticDispertion").setType("SFVec3f").setValue("0.98 1 1.033"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("cube").setType("SFNode")
              .addChild((new autoclass.ComposedCubeMapTexture()).setUSE("texture")))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bias").setType("SFFloat").setValue("0.5"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("scale").setType("SFFloat").setValue("0.5"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("power").setType("SFFloat").setValue("2"))
            .addParts((new autoclass.ShaderPart()).setUrl(new autoclass.MFString("\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"")))
            .addParts((new autoclass.ShaderPart()).setUSE("common")))))));
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
		var testObject = new ball();
		console.log ("ball execution self-validation test results: " + testObject.validateSelf());
	}
}
new ball().main();