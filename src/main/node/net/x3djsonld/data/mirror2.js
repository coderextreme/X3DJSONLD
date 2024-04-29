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
 * <p> a mirrored sphere. </p>
 <p> Related links: mirror2.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.mirror2&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d">mirror2.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a mirrored sphere </td>
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

function mirror2
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
mirror2.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: field value field, scene-graph level=5, element #44, 9 total values */
	this.field_frontUrls_5_44_value = new autoclass.SFString("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"");

	/** Large attribute array: field value field, scene-graph level=5, element #45, 9 total values */
	this.field_backUrls_5_45_value = new autoclass.SFString("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"");

	/** Large attribute array: field value field, scene-graph level=5, element #46, 9 total values */
	this.field_leftUrls_5_46_value = new autoclass.SFString("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"");

	/** Large attribute array: field value field, scene-graph level=5, element #47, 9 total values */
	this.field_rightUrls_5_47_value = new autoclass.SFString("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"");

	/** Large attribute array: field value field, scene-graph level=5, element #48, 9 total values */
	this.field_topUrls_5_48_value = new autoclass.SFString("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"");

	/** Large attribute array: field value field, scene-graph level=5, element #49, 9 total values */
	this.field_bottomUrls_5_49_value = new autoclass.SFString("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"");
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("Scripting").setLevel(1))
    .addComponent((new autoclass.component()).setName("EnvironmentalEffects").setLevel(3))
    .addComponent((new autoclass.component()).setName("Shaders").setLevel(1))
    .addComponent((new autoclass.component()).setName("CubeMapTexturing").setLevel(1))
    .addComponent((new autoclass.component()).setName("Texturing").setLevel(1))
    .addComponent((new autoclass.component()).setName("Rendering").setLevel(1))
    .addComments("<component name='Shape' level='4'></component>")
    .addComponent((new autoclass.component()).setName("Grouping").setLevel(3))
    .addComponent((new autoclass.component()).setName("Core").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("mirror2.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("a mirrored sphere")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.Viewpoint()).setDescription("Switch background and images texture").setPosition(0.0,5.0,100.0))
    .addChild((new autoclass.Background("cube")).setBackUrl(new autoclass.MFString("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png\"")).setBottomUrl(new autoclass.MFString("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png\"")).setFrontUrl(new autoclass.MFString("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png\"")).setLeftUrl(new autoclass.MFString("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png\"")).setRightUrl(new autoclass.MFString("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png\"")).setTopUrl(new autoclass.MFString("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png\"")))
    .addChild((new autoclass.Transform())
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(.7,.7,.7).setSpecularColor(.5,.5,.5))
          .setTexture((new autoclass.ComposedCubeMapTexture())
            .setBackTexture((new autoclass.ImageTexture("backShader")).setUrl(new autoclass.MFString("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png\"")))
            .setBottomTexture((new autoclass.ImageTexture("bottomShader")).setUrl(new autoclass.MFString("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png\"")))
            .setFrontTexture((new autoclass.ImageTexture("frontShader")).setUrl(new autoclass.MFString("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png\"")))
            .setLeftTexture((new autoclass.ImageTexture("leftShader")).setUrl(new autoclass.MFString("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png\"")))
            .setRightTexture((new autoclass.ImageTexture("rightShader")).setUrl(new autoclass.MFString("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png\"")))
            .setTopTexture((new autoclass.ImageTexture("topShader")).setUrl(new autoclass.MFString("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png\""))))
          .addShaders((new autoclass.ComposedShader("x_ite")).setLanguage("GLSL")
            .addComments("http://hypertextbook.com/facts/2005/JustinChe.shtml")
            .addField((new autoclass.field()).setName("chromaticDispertion").setType("SFVec3f").setAccessType("inputOutput").setValue("0.98 1 1.033"))
            .addField((new autoclass.field()).setName("cube").setType("SFInt32").setAccessType("inputOutput").setValue("0"))
            .addField((new autoclass.field()).setName("bias").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
            .addField((new autoclass.field()).setName("scale").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
            .addField((new autoclass.field()).setName("power").setType("SFFloat").setAccessType("inputOutput").setValue("2"))
            .addParts((new autoclass.ShaderPart()).setUrl(new autoclass.MFString("\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"")))
            .addParts((new autoclass.ShaderPart()).setType("FRAGMENT").setUrl(new autoclass.MFString("\"../shaders/x_itemix.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs\""))))
          .addShaders((new autoclass.ComposedShader("x3dom")).setLanguage("GLSL")
            .addField((new autoclass.field()).setName("chromaticDispertion").setType("SFVec3f").setAccessType("inputOutput").setValue("0.98 1 1.033"))
            .addField((new autoclass.field()).setName("cube").setType("SFInt32").setAccessType("inputOutput").setValue("0"))
            .addField((new autoclass.field()).setName("bias").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
            .addField((new autoclass.field()).setName("scale").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
            .addField((new autoclass.field()).setName("power").setType("SFFloat").setAccessType("inputOutput").setValue("2"))
            .addParts((new autoclass.ShaderPart()).setUrl(new autoclass.MFString("\"../shaders/x3dom.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs\"")))
            .addParts((new autoclass.ShaderPart()).setType("FRAGMENT").setUrl(new autoclass.MFString("\"../shaders/mix.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs\"")))))
        .setGeometry((new autoclass.Sphere()).setRadius(30)))
      .addChild((new autoclass.Script("UrlSelector")).setDirectOutput(true).setSourceCode(" " + "\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"        function set_fraction( f, tm ) {" + "\n" + 
"	    var side = Math.floor(f*frontUrls.length);" + "\n" + 
"	    if (side > frontUrls.length-1) {" + "\n" + 
"	    	side = 0;" + "\n" + 
"	    }" + "\n" + 
"	    if (side != old) {" + "\n" + 
"	    	    // Browser.print(f+\" \"+side);" + "\n" + 
"	    	    old = side;" + "\n" + 
"		    front_changed[0] = frontUrls[side];" + "\n" + 
"		    back_changed[0] = backUrls[side];" + "\n" + 
"		    left_changed[0] = leftUrls[side];" + "\n" + 
"		    right_changed[0] = rightUrls[side];" + "\n" + 
"		    top_changed[0] = topUrls[side];" + "\n" + 
"		    bottom_changed[0] = bottomUrls[side];" + "\n" + 
"            }" + "\n" + 
"        }" + "\n")
        .addField((new autoclass.field()).setName("frontUrls").setType("MFString").setAccessType("initializeOnly").setValue(this.field_frontUrls_5_44_value))
        .addField((new autoclass.field()).setName("backUrls").setType("MFString").setAccessType("initializeOnly").setValue(this.field_backUrls_5_45_value))
        .addField((new autoclass.field()).setName("leftUrls").setType("MFString").setAccessType("initializeOnly").setValue(this.field_leftUrls_5_46_value))
        .addField((new autoclass.field()).setName("rightUrls").setType("MFString").setAccessType("initializeOnly").setValue(this.field_rightUrls_5_47_value))
        .addField((new autoclass.field()).setName("topUrls").setType("MFString").setAccessType("initializeOnly").setValue(this.field_topUrls_5_48_value))
        .addField((new autoclass.field()).setName("bottomUrls").setType("MFString").setAccessType("initializeOnly").setValue(this.field_bottomUrls_5_49_value))
        .addField((new autoclass.field()).setName("front_changed").setType("MFString").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("back_changed").setType("MFString").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("left_changed").setType("MFString").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("right_changed").setType("MFString").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("top_changed").setType("MFString").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("bottom_changed").setType("MFString").setAccessType("outputOnly"))
        .addField((new autoclass.field()).setName("set_fraction").setType("SFFloat").setAccessType("inputOnly"))
        .addField((new autoclass.field()).setName("old").setType("SFInt32").setAccessType("inputOutput").setValue("-1")))
      .addChild((new autoclass.TimeSensor("Clock")).setCycleInterval(45).setLoop(true))
      .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("UrlSelector").setToField("set_fraction"))
      .addChild((new autoclass.ROUTE()).setFromNode("UrlSelector").setFromField("front_changed").setToNode("cube").setToField("frontUrl"))
      .addChild((new autoclass.ROUTE()).setFromNode("UrlSelector").setFromField("back_changed").setToNode("cube").setToField("backUrl"))
      .addChild((new autoclass.ROUTE()).setFromNode("UrlSelector").setFromField("left_changed").setToNode("cube").setToField("leftUrl"))
      .addChild((new autoclass.ROUTE()).setFromNode("UrlSelector").setFromField("right_changed").setToNode("cube").setToField("rightUrl"))
      .addChild((new autoclass.ROUTE()).setFromNode("UrlSelector").setFromField("top_changed").setToNode("cube").setToField("topUrl"))
      .addChild((new autoclass.ROUTE()).setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("cube").setToField("bottomUrl"))
      .addChild((new autoclass.ROUTE()).setFromNode("UrlSelector").setFromField("front_changed").setToNode("frontShader").setToField("url"))
      .addChild((new autoclass.ROUTE()).setFromNode("UrlSelector").setFromField("back_changed").setToNode("backShader").setToField("url"))
      .addChild((new autoclass.ROUTE()).setFromNode("UrlSelector").setFromField("left_changed").setToNode("leftShader").setToField("url"))
      .addChild((new autoclass.ROUTE()).setFromNode("UrlSelector").setFromField("right_changed").setToNode("rightShader").setToField("url"))
      .addChild((new autoclass.ROUTE()).setFromNode("UrlSelector").setFromField("top_changed").setToNode("topShader").setToField("url"))
      .addChild((new autoclass.ROUTE()).setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("bottomShader").setToField("url"))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return mirror2 model
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
		var testObject = new mirror2();
		console.log ("mirror2 execution self-validation test results: " + testObject.validateSelf());
		process.exit();
	}
}
new mirror2().main();