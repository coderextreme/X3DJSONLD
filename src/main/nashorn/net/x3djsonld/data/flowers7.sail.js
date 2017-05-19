load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> a flower. </p>
 <p> Related links: flowers7_sail.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.flowers7_sail&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/flowers7.x3d">flowers7.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/flowers7.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/flowers7.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a flower </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author John Carlson
 */

function flowers7_sail
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
flowers7_sail.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: field value field, scene-graph level=4, element #36, 9 total values */
	this.field_frontUrls_4_36_value = new SFStringObject("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"");

	/** Large attribute array: field value field, scene-graph level=4, element #37, 9 total values */
	this.field_backUrls_4_37_value = new SFStringObject("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"");

	/** Large attribute array: field value field, scene-graph level=4, element #38, 9 total values */
	this.field_leftUrls_4_38_value = new SFStringObject("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"");

	/** Large attribute array: field value field, scene-graph level=4, element #39, 9 total values */
	this.field_rightUrls_4_39_value = new SFStringObject("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"");

	/** Large attribute array: field value field, scene-graph level=4, element #40, 9 total values */
	this.field_topUrls_4_40_value = new SFStringObject("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"");

	/** Large attribute array: field value field, scene-graph level=4, element #41, 9 total values */
	this.field_bottomUrls_4_41_value = new SFStringObject("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"");
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("flowers7.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("generator").setContent("manual"))
    .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/flowers7.x3d"))
    .addMeta(new metaObject().setName("description").setContent("a flower")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject())
    .addComments(" Images courtesy of Paul Debevec's Light Probe Image Gallery ")
    .addChild(new BackgroundObject("background").setBackUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png\"")).setBottomUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png\"")).setFrontUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png\"")).setLeftUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png\"")).setRightUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png\"")).setTopUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png\"")))
    .addChild(new ViewpointObject().setDescription("Transparent rose").setPosition(0.0,0.0,40.0))
    .addChild(new TransformObject("Rose01")
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setSpecularColor(.5,.5,.5).setDiffuseColor(.7,.7,.7))
          .setTexture(new ComposedCubeMapTextureObject()
            .setBack(new ImageTextureObject("backShader").setUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png\"")))
            .setBottom(new ImageTextureObject("bottomShader").setUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png\"")))
            .setFront(new ImageTextureObject("frontShader").setUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png\"")))
            .setLeft(new ImageTextureObject("leftShader").setUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png\"")))
            .setRight(new ImageTextureObject("rightShader").setUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png\"")))
            .setTop(new ImageTextureObject("topShader").setUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png\""))))
          .addShaders(new ComposedShaderObject("cobweb").setLanguage("GLSL")
            .addField(new fieldObject().setAccessType("inputOnly").setName("set_cube").setType("SFInt32").setValue("0"))
            .addField(new fieldObject().setAccessType("initializeOnly").setName("set_chromaticDispertion").setType("SFVec3f").setValue("0.98 1.0 1.033"))
            .addField(new fieldObject().setAccessType("inputOnly").setName("set_bias").setType("SFFloat").setValue("0.5"))
            .addField(new fieldObject().setAccessType("inputOnly").setName("set_scale").setType("SFFloat").setValue("0.5"))
            .addField(new fieldObject().setAccessType("inputOnly").setName("set_power").setType("SFFloat").setValue("2"))
            .addField(new fieldObject().setAccessType("inputOnly").setName("set_a").setType("SFFloat").setValue("10"))
            .addField(new fieldObject().setAccessType("inputOnly").setName("set_b").setType("SFFloat").setValue("1"))
            .addField(new fieldObject().setAccessType("inputOnly").setName("set_c").setType("SFFloat").setValue("20"))
            .addField(new fieldObject().setAccessType("inputOnly").setName("set_d").setType("SFFloat").setValue("20"))
            .addField(new fieldObject().setAccessType("inputOnly").setName("set_tdelta").setType("SFFloat").setValue("0"))
            .addField(new fieldObject().setAccessType("inputOnly").setName("set_pdelta").setType("SFFloat").setValue("0"))
            .addParts(new ShaderPartObject().setUrl(new MFStringObject("\"../shaders/cobweb_flowers_input.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/cobweb_flowers_input.vs\"")))
            .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(new MFStringObject("\"../shaders/pc_input_flowers.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/pc_input_flowers.fs\"")))))
        .setGeometry(new SphereObject().setRadius(20).setSolid(false))))
    .addChild(new ScriptObject("UrlSelector").setDirectOutput(true).setSourceCode(
"<![CDATA[" + "\n" +
"\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"        function set_fraction( f, tm ) {" + "\n" + 
"            var side = Math.floor(f*frontUrls.length);" + "\n" + 
"            if (side > frontUrls.length-1) {" + "\n" + 
"                side = 0;" + "\n" + 
"            }" + "\n" + 
"            if (side != old) {" + "\n" + 
"                    old = side;" + "\n" + 
"                    front_changed[0] = frontUrls[side];" + "\n" + 
"                    back_changed[0] = backUrls[side];" + "\n" + 
"                    left_changed[0] = leftUrls[side];" + "\n" + 
"                    right_changed[0] = rightUrls[side];" + "\n" + 
"                    top_changed[0] = topUrls[side];" + "\n" + 
"                    bottom_changed[0] = bottomUrls[side];" + "\n" + 
"            }" + "\n" + 
"        }" + "\n" + "]]>"
)
      .addField(new fieldObject().setAccessType("initializeOnly").setName("frontUrls").setType("MFString").setValue(this.field_frontUrls_4_36_value))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("backUrls").setType("MFString").setValue(this.field_backUrls_4_37_value))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("leftUrls").setType("MFString").setValue(this.field_leftUrls_4_38_value))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("rightUrls").setType("MFString").setValue(this.field_rightUrls_4_39_value))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("topUrls").setType("MFString").setValue(this.field_topUrls_4_40_value))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("bottomUrls").setType("MFString").setValue(this.field_bottomUrls_4_41_value))
      .addField(new fieldObject().setAccessType("outputOnly").setName("front_changed").setType("MFString"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("back_changed").setType("MFString"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("left_changed").setType("MFString"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("right_changed").setType("MFString"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("top_changed").setType("MFString"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("bottom_changed").setType("MFString"))
      .addField(new fieldObject().setAccessType("inputOnly").setName("set_fraction").setType("SFFloat"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("old").setType("SFInt32").setValue("-1")))
    .addChild(new TimeSensorObject("Clock").setCycleInterval(45).setLoop(true))
    .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("UrlSelector").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("front_changed").setToNode("background").setToField("frontUrl"))
    .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("back_changed").setToNode("background").setToField("backUrl"))
    .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("left_changed").setToNode("background").setToField("leftUrl"))
    .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("right_changed").setToNode("background").setToField("rightUrl"))
    .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("top_changed").setToNode("background").setToField("topUrl"))
    .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("background").setToField("bottomUrl"))
    .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("front_changed").setToNode("frontShader").setToField("url"))
    .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("back_changed").setToNode("backShader").setToField("url"))
    .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("left_changed").setToNode("leftShader").setToField("url"))
    .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("right_changed").setToNode("rightShader").setToField("url"))
    .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("top_changed").setToNode("topShader").setToField("url"))
    .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("bottomShader").setToField("url"))
    .addChild(new ScriptObject("Animate").setDirectOutput(true).setSourceCode(
"<![CDATA[" + "\n" +
"\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_a(value) {" + "\n" + 
"	a = value;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_b(value) {" + "\n" + 
"	b = value;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_c(value) {" + "\n" + 
"	c = value;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_d(value) {" + "\n" + 
"	d = value;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_tdelta(value) {" + "\n" + 
"	tdelta = value;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_tdelta(value) {" + "\n" + 
"	tdelta = value;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_fraction() {" + "\n" + 
"	var choice = Math.floor(Math.random() * 4);" + "\n" + 
"	if (choice == 0) {" + "\n" + 
"		set_a(a + Math.floor(Math.random() * 2) * 2 - 1);" + "\n" + 
"	} else if (choice == 1) {" + "\n" + 
"		set_b(b + Math.floor(Math.random() * 2) * 2 - 1);" + "\n" + 
"	} else if (choice == 2) {" + "\n" + 
"		set_c(c + Math.floor(Math.random() * 2) * 2 - 1);" + "\n" + 
"	} else if (choice == 3) {" + "\n" + 
"		set_d(d + Math.floor(Math.random() * 2) * 2 - 1);" + "\n" + 
"	}" + "\n" + 
"	set_tdelta(tdelta + 0.5);" + "\n" + 
"	set_pdelta(pdelta + 0.5);" + "\n" + 
"	if (a < 1) {" + "\n" + 
"		set_a(10);" + "\n" + 
"	}" + "\n" + 
"	if (b < 1) {" + "\n" + 
"		set_b(10);" + "\n" + 
"	}" + "\n" + 
"	if (c < 1) {" + "\n" + 
"		set_c(4);" + "\n" + 
"	}" + "\n" + 
"	if (c > 20) {" + "\n" + 
"		set_c(4);" + "\n" + 
"	}" + "\n" + 
"	if (d < 1) {" + "\n" + 
"		set_d(4);" + "\n" + 
"	}" + "\n" + 
"	if (d > 20) {" + "\n" + 
"		set_d(4);" + "\n" + 
"	}" + "\n" + 
"	// console.log(a, b, c, d, tdelta, pdelta);" + "\n" + 
"}" + "\n" + "]]>"
)
      .addField(new fieldObject().setAccessType("inputOnly").setName("set_fraction").setType("SFFloat"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("a_changed").setType("SFFloat").setValue("10"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("b_changed").setType("SFFloat").setValue("1"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("c_changed").setType("SFFloat").setValue("20"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("d_changed").setType("SFFloat").setValue("20"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("tdelta_changed").setType("SFFloat").setValue("0"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("pdelta_changed").setType("SFFloat").setValue("0"))
      .addField(new fieldObject().setAccessType("inputOnly").setName("set_a").setType("SFFloat").setValue("10"))
      .addField(new fieldObject().setAccessType("inputOnly").setName("set_b").setType("SFFloat").setValue("1"))
      .addField(new fieldObject().setAccessType("inputOnly").setName("set_c").setType("SFFloat").setValue("20"))
      .addField(new fieldObject().setAccessType("inputOnly").setName("set_d").setType("SFFloat").setValue("20"))
      .addField(new fieldObject().setAccessType("inputOnly").setName("set_tdelta").setType("SFFloat").setValue("0"))
      .addField(new fieldObject().setAccessType("inputOnly").setName("set_pdelta").setType("SFFloat").setValue("0")))
    .addChild(new ROUTEObject().setFromNode("Animate").setFromField("a_changed").setToNode("cobweb").setToField("set_a"))
    .addChild(new ROUTEObject().setFromNode("Animate").setFromField("b_changed").setToNode("cobweb").setToField("set_b"))
    .addChild(new ROUTEObject().setFromNode("Animate").setFromField("c_changed").setToNode("cobweb").setToField("set_c"))
    .addChild(new ROUTEObject().setFromNode("Animate").setFromField("d_changed").setToNode("cobweb").setToField("set_d"))
    .addChild(new ROUTEObject().setFromNode("Animate").setFromField("pdelta_changed").setToNode("cobweb").setToField("set_pdelta"))
    .addChild(new ROUTEObject().setFromNode("Animate").setFromField("tdelta_changed").setToNode("cobweb").setToField("set_tdelta")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return flowers7_sail model
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
			if (meta.getName().equals(metaObject.NAME_ERROR) ||
				meta.getName().equals(metaObject.NAME_WARNING) ||
				meta.getName().equals(metaObject.NAME_HINT) ||
				meta.getName().equals(metaObject.NAME_INFO) ||
				meta.getName().equals(metaObject.NAME_TODO))
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
		var testObject = new flowers7_sail();
		print ("flowers7_sail execution self-validation test results: " + testObject.validateSelf());
	}
}
new flowers7_sail().main();