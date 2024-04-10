load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> a flower. </p>
 <p> Related links: flowers7.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.flowers7&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d">flowers7.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d</a> </td>
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
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author John Carlson
 */

function flowers7
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
flowers7.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: field value field, scene-graph level=4, element #59, 9 total values */
	this.field_frontUrls_4_59_value = new SFString("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"");

	/** Large attribute array: field value field, scene-graph level=4, element #60, 9 total values */
	this.field_backUrls_4_60_value = new SFString("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"");

	/** Large attribute array: field value field, scene-graph level=4, element #61, 9 total values */
	this.field_leftUrls_4_61_value = new SFString("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"");

	/** Large attribute array: field value field, scene-graph level=4, element #62, 9 total values */
	this.field_rightUrls_4_62_value = new SFString("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"");

	/** Large attribute array: field value field, scene-graph level=4, element #63, 9 total values */
	this.field_topUrls_4_63_value = new SFString("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"");

	/** Large attribute array: field value field, scene-graph level=4, element #64, 9 total values */
	this.field_bottomUrls_4_64_value = new SFString("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"");
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
    .addMeta(new meta().setName("title").setContent("flowers7.x3d"))
    .addMeta(new meta().setName("creator").setContent("John Carlson"))
    .addMeta(new meta().setName("generator").setContent("manual"))
    .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d"))
    .addMeta(new meta().setName("description").setContent("a flower")))
  .setScene(new Scene()
    .addChild(new NavigationInfo())
    .addComments(" Images courtesy of Paul Debevec's Light Probe Image Gallery ")
    .addChild(new Background("background").setBackUrl(new MFString("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png\"")).setBottomUrl(new MFString("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png\"")).setFrontUrl(new MFString("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png\"")).setLeftUrl(new MFString("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png\"")).setRightUrl(new MFString("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png\"")).setTopUrl(new MFString("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png\"")))
    .addChild(new Viewpoint().setDescription("Transparent rose").setPosition(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(40.0)))
    .addChild(new Transform()
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(.7),doubleToFloat(.7),doubleToFloat(.7)).setSpecularColor(doubleToFloat(.5),doubleToFloat(.5),doubleToFloat(.5)))
          .setTexture(new ComposedCubeMapTexture("texture")
            .setBackTexture(new ImageTexture("backShader").setUrl(new MFString("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png\"")))
            .setBottomTexture(new ImageTexture("bottomShader").setUrl(new MFString("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png\"")))
            .setFrontTexture(new ImageTexture("frontShader").setUrl(new MFString("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png\"")))
            .setLeftTexture(new ImageTexture("leftShader").setUrl(new MFString("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png\"")))
            .setRightTexture(new ImageTexture("rightShader").setUrl(new MFString("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png\"")))
            .setTopTexture(new ImageTexture("topShader").setUrl(new MFString("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png\""))))
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
              .addChild(new ComposedCubeMapTexture().setUSE("texture")))
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
    .addChild(new Script("UrlSelector").setDirectOutput(true).setSourceCode("\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"        function set_fraction( f, tm ) {" + "\n" + 
"            var side = Math.floor(f*frontUrls.length);" + "\n" + 
"            if (side > frontUrls.length-1) {" + "\n" + 
"                side = 0;" + "\n" + 
"            }" + "\n" + 
"            if (side != old) {" + "\n" + 
"                    old = side;" + "\n" + 
"                    front[0] = frontUrls[side];" + "\n" + 
"                    back[0] = backUrls[side];" + "\n" + 
"                    left[0] = leftUrls[side];" + "\n" + 
"                    right[0] = rightUrls[side];" + "\n" + 
"                    top[0] = topUrls[side];" + "\n" + 
"                    bottom[0] = bottomUrls[side];" + "\n" + 
"            }" + "\n" + 
"        }" + "\n")
      .addField(new field().setName("frontUrls").setType("MFString").setAccessType("initializeOnly").setValue(this.field_frontUrls_4_59_value))
      .addField(new field().setName("backUrls").setType("MFString").setAccessType("initializeOnly").setValue(this.field_backUrls_4_60_value))
      .addField(new field().setName("leftUrls").setType("MFString").setAccessType("initializeOnly").setValue(this.field_leftUrls_4_61_value))
      .addField(new field().setName("rightUrls").setType("MFString").setAccessType("initializeOnly").setValue(this.field_rightUrls_4_62_value))
      .addField(new field().setName("topUrls").setType("MFString").setAccessType("initializeOnly").setValue(this.field_topUrls_4_63_value))
      .addField(new field().setName("bottomUrls").setType("MFString").setAccessType("initializeOnly").setValue(this.field_bottomUrls_4_64_value))
      .addField(new field().setName("front").setType("MFString").setAccessType("inputOutput"))
      .addField(new field().setName("back").setType("MFString").setAccessType("inputOutput"))
      .addField(new field().setName("left").setType("MFString").setAccessType("inputOutput"))
      .addField(new field().setName("right").setType("MFString").setAccessType("inputOutput"))
      .addField(new field().setName("top").setType("MFString").setAccessType("inputOutput"))
      .addField(new field().setName("bottom").setType("MFString").setAccessType("inputOutput"))
      .addField(new field().setName("set_fraction").setType("SFFloat").setAccessType("inputOnly"))
      .addField(new field().setName("old").setType("SFInt32").setAccessType("inputOutput").setValue("-1")))
    .addComments(Java.to(["",
"            <TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/>",
"            <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/>",
"            <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/>",
"            <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/>",
"            <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/>",
"            <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/>",
"            <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/>",
"            <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/>",
"            <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/>",
"            <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/>",
"            <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/>",
"            <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/>",
"            <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/>",
"            <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>"], Java.type("java.lang.String[]")))
    .addChild(new Script("Animate").setDirectOutput(true).setSourceCode("\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_fraction() {" + "\n" + 
"	var choice = Math.floor(Math.random() * 4);" + "\n" + 
"	switch (choice) {" + "\n" + 
"	case 0:" + "\n" + 
"		a = a + Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	case 1:" + "\n" + 
"		b = b + Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	case 2:" + "\n" + 
"		c = c + Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	case 3:" + "\n" + 
"		d = d + Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	}" + "\n" + 
"	tdelta = tdelta + 0.5;" + "\n" + 
"	pdelta = pdelta + 0.5;" + "\n" + 
"	if (a < 1) {" + "\n" + 
"		a = 10;" + "\n" + 
"	}" + "\n" + 
"	if (b < 1) {" + "\n" + 
"		b = 10;" + "\n" + 
"	}" + "\n" + 
"	if (c < 1) {" + "\n" + 
"		c = 4;" + "\n" + 
"	}" + "\n" + 
"	if (c > 20) {" + "\n" + 
"		c = 4;" + "\n" + 
"	}" + "\n" + 
"	if (d < 1) {" + "\n" + 
"		d = 4;" + "\n" + 
"	}" + "\n" + 
"	if (d > 20) {" + "\n" + 
"		d = 4;" + "\n" + 
"	}" + "\n" + 
"}" + "\n")
      .addField(new field().setName("set_fraction").setType("SFFloat").setAccessType("inputOnly"))
      .addField(new field().setName("a").setType("SFFloat").setAccessType("inputOutput").setValue("10"))
      .addField(new field().setName("b").setType("SFFloat").setAccessType("inputOutput").setValue("1"))
      .addField(new field().setName("c").setType("SFFloat").setAccessType("inputOutput").setValue("20"))
      .addField(new field().setName("d").setType("SFFloat").setAccessType("inputOutput").setValue("20"))
      .addField(new field().setName("tdelta").setType("SFFloat").setAccessType("inputOutput").setValue("0"))
      .addField(new field().setName("pdelta").setType("SFFloat").setAccessType("inputOutput").setValue("0")))
    .addChild(new TimeSensor("TourTime").setCycleInterval(5).setLoop(true))
    .addChild(new ROUTE().setFromNode("TourTime").setFromField("fraction_changed").setToNode("Animate").setToField("set_fraction"))
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
    .addChild(new ROUTE().setFromNode("Animate").setFromField("tdelta").setToNode("x3dom").setToField("tdelta")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return flowers7 model
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
		var testObject = new flowers7();
		print ("flowers7 execution self-validation test results: " + testObject.validateSelf());
	}
}
new flowers7().main();