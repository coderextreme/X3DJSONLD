load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> an animated flower. </p>
 <p> Related links: flowers4.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.flowers4&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/flowers4.x3d">flowers4.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/flowers4.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/flowers4.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> an animated flower </td>
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

function flowers4
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
flowers4.prototype = {
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
    .addMeta(new meta().setName("title").setContent("flowers4.x3d"))
    .addMeta(new meta().setName("creator").setContent("John Carlson"))
    .addMeta(new meta().setName("generator").setContent("manual"))
    .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/flowers4.x3d"))
    .addMeta(new meta().setName("description").setContent("an animated flower")))
  .setScene(new Scene()
    .addChild(new NavigationInfo())
    .addChild(new Background().setBackUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png\"")).setBottomUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png\"")).setFrontUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png\"")).setLeftUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png\"")).setRightUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png\"")).setTopUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png\"")))
    .addChild(new Transform("transform")
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setSpecularColor(.5,.5,.5).setDiffuseColor(.7,.7,.7))
          .setTexture(new ComposedCubeMapTexture()
            .setBack(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png\"")))
            .setBottom(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png\"")))
            .setFront(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png\"")))
            .setLeft(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png\"")))
            .setRight(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png\"")))
            .setTop(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png\""))))
          .addShaders(new ComposedShader("shader").setLanguage("GLSL")
            .addField(new field().setAccessType("inputOutput").setName("cube").setType("SFInt32").setValue("0"))
            .addField(new field().setAccessType("inputOutput").setName("chromaticDispertion").setType("SFVec3f").setValue("0.98 1.0 1.033"))
            .addField(new field().setAccessType("inputOutput").setName("bias").setType("SFFloat").setValue("0.5"))
            .addField(new field().setAccessType("inputOutput").setName("scale").setType("SFFloat").setValue("0.5"))
            .addField(new field().setAccessType("inputOutput").setName("power").setType("SFFloat").setValue("2"))
            .addParts(new ShaderPart().setUrl(new MFString("\"../shaders/x3dom.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs\"")))
            .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString("\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"")))))
        .addComments(Java.to(["",
"                <Sphere>"], Java.type("java.lang.String[]")))
        .setGeometry(new IndexedFaceSet("Orbit").setDEF("Orbit").setConvex(false)
          .setCoord(new Coordinate("OrbitCoordinates")))))
    .addChild(new Script("OrbitScript").setSourceCode("\n" + 
"\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"var e = 5;" + "\n" + 
"var f = 5;" + "\n" + 
"var g = 5;" + "\n" + 
"var h = 5;" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"     var resolution = 100;" + "\n" + 
"     updateCoordinates(resolution);" + "\n" + 
"     var cis = [];" + "\n" + 
"     for ( i = 0; i < resolution-1; i++) {" + "\n" + 
"     	for ( j = 0; j < resolution-1; j++) {" + "\n" + 
"	     cis.push(i*resolution+j);" + "\n" + 
"	     cis.push(i*resolution+j+1);" + "\n" + 
"	     cis.push((i+1)*resolution+j+1);" + "\n" + 
"	     cis.push((i+1)*resolution+j);" + "\n" + 
"	     cis.push(-1);" + "\n" + 
"	}" + "\n" + 
"    }" + "\n" + 
"    coordIndexes = new MFInt32(cis);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function updateCoordinates(resolution) {" + "\n" + 
"     var theta = 0.0;" + "\n" + 
"     var phi = 0.0;" + "\n" + 
"     var delta = (2 * 3.141592653) / (resolution-1);" + "\n" + 
"     var crds = [];" + "\n" + 
"     for ( i = 0; i < resolution; i++) {" + "\n" + 
"     	for ( j = 0; j < resolution; j++) {" + "\n" + 
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);" + "\n" + 
"		crds.push(new SFVec3f(" + "\n" + 
"			rho * Math.cos(phi) * Math.cos(theta)," + "\n" + 
"			rho * Math.cos(phi) * Math.sin(theta)," + "\n" + 
"			rho * Math.sin(phi)" + "\n" + 
"		));" + "\n" + 
"		theta += delta;" + "\n" + 
"	}" + "\n" + 
"	phi += delta;" + "\n" + 
"     }" + "\n" + 
"     coordinates = new MFVec3f(crds);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_fraction(fraction, eventTime) {" + "\n" + 
"	var choice = Math.floor(Math.random() * 4);" + "\n" + 
"	switch (choice) {" + "\n" + 
"	case 0:" + "\n" + 
"		e += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	case 1:" + "\n" + 
"		f += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	case 2:" + "\n" + 
"		g += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	case 3:" + "\n" + 
"		h += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	}" + "\n" + 
"	if (f < 1) {" + "\n" + 
"		f = 10;" + "\n" + 
"	}" + "\n" + 
"	if (g < 1) {" + "\n" + 
"		g = 4;" + "\n" + 
"	}" + "\n" + 
"	if (h < 1) {" + "\n" + 
"		h = 4;" + "\n" + 
"	}" + "\n" + 
"	var resolution = 100;" + "\n" + 
"	updateCoordinates(resolution);" + "\n" + 
"}" + "\n")
      .addField(new field().setAccessType("inputOnly").setName("set_fraction").setType("SFFloat"))
      .addField(new field().setAccessType("inputOutput").setName("coordinates").setType("MFVec3f"))
      .addField(new field().setAccessType("outputOnly").setName("coordIndexes").setType("MFInt32")))
    .addChild(new TimeSensor("Clock").setCycleInterval(16).setLoop(true))
    .addChild(new ROUTE().setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("set_coordIndex"))
    .addChild(new ROUTE().setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("set_point"))
    .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return flowers4 model
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
		var testObject = new flowers4();
		print ("flowers4 execution self-validation test results: " + testObject.validateSelf());
	}
}
new flowers4().main();