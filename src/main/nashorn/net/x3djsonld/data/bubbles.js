load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> not sure what this is. </p>
 <p> Related links: bubbles.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.bubbles&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/bubbles.x3d">bubbles.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/bubbles.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/bubbles.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> not sure what this is </td>
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

function bubbles
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
bubbles.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.3")
  .setHead(new head()
    .addComponent(new component().setName("EnvironmentalEffects").setLevel(1))
    .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
    .addComponent(new component().setName("Shaders").setLevel(1))
    .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
    .addComponent(new component().setName("Texturing").setLevel(1))
    .addComponent(new component().setName("Rendering").setLevel(1))
    .addComponent(new component().setName("Shape").setLevel(4))
    .addComponent(new component().setName("Grouping").setLevel(3))
    .addMeta(new meta().setName("title").setContent("bubbles.x3d"))
    .addMeta(new meta().setName("creator").setContent("John Carlson"))
    .addMeta(new meta().setName("generator").setContent("manual"))
    .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/bubbles.x3d"))
    .addMeta(new meta().setName("description").setContent("not sure what this is")))
  .setScene(new Scene()
    .addChild(new NavigationInfo().setType(new MFString("\"EXAMINE\"")))
    .addChild(new Viewpoint("Tour").setDescription("Tour Views"))
    .addChild(new Viewpoint().setDescription("sphere in road").setPosition(0.0,0.0,4.0))
    .addChild(new Background().setBackUrl(new MFString("\"../resources/images/all_probes/uffizi_cross/uffizi_back.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_back.png\"")).setBottomUrl(new MFString("\"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_bottom.png\"")).setFrontUrl(new MFString("\"../resources/images/all_probes/uffizi_cross/uffizi_front.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_front.png\"")).setLeftUrl(new MFString("\"../resources/images/all_probes/uffizi_cross/uffizi_left.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_left.png\"")).setRightUrl(new MFString("\"../resources/images/all_probes/uffizi_cross/uffizi_right.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_right.png\"")).setTopUrl(new MFString("\"../resources/images/all_probes/uffizi_cross/uffizi_top.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_top.png\"")))
    .addChild(new Transform("Rose01")
      .addChild(new Shape()
        .setGeometry(new Sphere())
        .setAppearance(new Appearance("_01_-_Default")
          .setMaterial(new Material().setSpecularColor(0.5,0.5,0.5).setDiffuseColor(0.7,0.7,0.7))
          .setTexture(new ComposedCubeMapTexture()
            .setBackTexture(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/uffizi_cross/uffizi_back.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_back.png\"")))
            .setBottomTexture(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_bottom.png\"")))
            .setFrontTexture(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/uffizi_cross/uffizi_front.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_front.png\"")))
            .setLeftTexture(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/uffizi_cross/uffizi_left.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_left.png\"")))
            .setRightTexture(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/uffizi_cross/uffizi_right.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_right.png\"")))
            .setTopTexture(new ImageTexture().setUrl(new MFString("\"../resources/images/all_probes/uffizi_cross/uffizi_top.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_top.png\""))))
          .addShaders(new ComposedShader("x_ite").setLanguage("GLSL")
            .addField(new field().setAccessType("inputOutput").setName("cube").setType("SFInt32").setValue("0"))
            .addField(new field().setAccessType("inputOutput").setName("chromaticDispertion").setType("SFVec3f").setValue("0.98 1 1.033"))
            .addField(new field().setAccessType("inputOutput").setName("bias").setType("SFFloat").setValue("0.5"))
            .addField(new field().setAccessType("inputOutput").setName("scale").setType("SFFloat").setValue("0.5"))
            .addField(new field().setAccessType("inputOutput").setName("power").setType("SFFloat").setValue("2"))
            .addParts(new ShaderPart().setUrl(new MFString("\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"")))
            .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString("\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\""))))
          .addShaders(new ComposedShader("x3dom").setLanguage("GLSL")
            .addField(new field().setAccessType("inputOutput").setName("cube").setType("SFInt32").setValue("0"))
            .addField(new field().setAccessType("inputOutput").setName("chromaticDispertion").setType("SFVec3f").setValue("0.98 1 1.033"))
            .addField(new field().setAccessType("inputOutput").setName("bias").setType("SFFloat").setValue("0.5"))
            .addField(new field().setAccessType("inputOutput").setName("scale").setType("SFFloat").setValue("0.5"))
            .addField(new field().setAccessType("inputOutput").setName("power").setType("SFFloat").setValue("2"))
            .addParts(new ShaderPart().setUrl(new MFString("\"../shaders/x3dom.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs\"")))
            .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString("\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"")))))))
    .addChild(new TimeSensor("TourTime").setCycleInterval(5).setLoop(true))
    .addChild(new PositionInterpolator("TourPosition").setKeyValue(new MFVec3f(Java.to([0.0,0.0,10.0,0.0,0.0,-10.0], Java.type("float[]")))).setKey(Java.to([0.0,1.0], Java.type("float[]"))))
    .addChild(new OrientationInterpolator("TourOrientation").setKey(Java.to([0.0,1.0], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([0.0,1.0,0.0,0.0,0.0,1.0,0.0,3.1416], Java.type("float[]")))))
    .addChild(new Script("RandomTourTime").setSourceCode("\n" + 
"	    ecmascript:" + "\n" + 
"               function set_cycle(value) {" + "\n" + 
"	       	   try {" + "\n" + 
"                        var ov = lastKey;" + "\n" + 
"                        do {" + "\n" + 
"                            lastKey = Math.round(Math.random()*(positions.length-1));" + "\n" + 
"                        } while (lastKey === ov);" + "\n" + 
"                        var vc = lastKey;" + "\n" + 
"\n" + 
"                        position_changed = new MFVec3f();" + "\n" + 
"                        position_changed[0] = new SFVec3f(positions[ov].x,positions[ov].y,positions[ov].z);" + "\n" + 
"                        position_changed[1] = new SFVec3f(positions[vc].x,positions[vc].y,positions[vc].z);" + "\n" + 
"                        " + "\n" + 
"                        orientation_changed = new MFRotation();" + "\n" + 
"                        orientation_changed[0] = new SFRotation(orientations[ov].x, orientations[ov].y, orientations[ov].z, orientations[ov].w);" + "\n" + 
"                        orientation_changed[1] = new SFRotation(orientations[vc].x, orientations[vc].y, orientations[vc].z, orientations[vc].w);" + "\n" + 
"		   } catch (e) {" + "\n" + 
"		   	if (typeof console.log === 'function') {" + "\n" + 
"				console.log(e);" + "\n" + 
"			}" + "\n" + 
"		   }" + "\n" + 
"               }")
      .addField(new field().setAccessType("inputOnly").setName("set_cycle").setType("SFTime"))
      .addField(new field().setAccessType("inputOutput").setName("lastKey").setType("SFFloat").setValue("0"))
      .addField(new field().setAccessType("inputOutput").setName("orientations").setType("MFRotation").setValue("0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0"))
      .addField(new field().setAccessType("inputOutput").setName("positions").setType("MFVec3f").setValue("0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10"))
      .addField(new field().setAccessType("outputOnly").setName("position_changed").setType("MFVec3f"))
      .addField(new field().setAccessType("inputOnly").setName("set_orientation").setType("MFRotation"))
      .addField(new field().setAccessType("outputOnly").setName("orientation_changed").setType("MFRotation")))
    .addChild(new ROUTE().setFromNode("TourTime").setFromField("cycleTime_changed").setToNode("RandomTourTime").setToField("set_cycle"))
    .addChild(new ROUTE().setFromNode("RandomTourTime").setFromField("orientation_changed").setToNode("TourOrientation").setToField("set_keyValue"))
    .addChild(new ROUTE().setFromNode("RandomTourTime").setFromField("position_changed").setToNode("TourPosition").setToField("set_keyValue"))
    .addChild(new ROUTE().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourOrientation").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("TourOrientation").setFromField("value_changed").setToNode("Tour").setToField("set_orientation"))
    .addChild(new ROUTE().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourPosition").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("TourPosition").setFromField("value_changed").setToNode("Tour").setToField("set_position")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return bubbles model
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
		var testObject = new bubbles();
		print ("bubbles execution self-validation test results: " + testObject.validateSelf());
	}
}
new bubbles().main();