load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> A process pipeline between three spheres (try typing on spheres and blue. </p>
 <p> Related links: pp3.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.pp3&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/x3d/pp3.x3d">pp3.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 5 May 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 23 Dec 2022 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A process pipeline between three spheres (try typing on spheres and blue </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/x3d/pp3.x3d" target="_blank">https://coderextreme.net/x3d/pp3.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
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

function pp3
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
pp3.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #12, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_8_12_crossSection = new MFVec2f() /* splitting up long array to improve readability */
	.append(new MFVec2f(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.92),doubleToFloat(-0.38),doubleToFloat(0.71),doubleToFloat(-0.71),doubleToFloat(0.38),doubleToFloat(-0.92),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(-0.38),doubleToFloat(-0.92),doubleToFloat(-0.71),doubleToFloat(-0.71),doubleToFloat(-0.92),doubleToFloat(-0.38),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(-0.92),doubleToFloat(0.38)], Java.type("float[]"))))
	.append(new MFVec2f(Java.to([doubleToFloat(-0.71),doubleToFloat(0.71),doubleToFloat(-0.38),doubleToFloat(0.92),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.38),doubleToFloat(0.92),doubleToFloat(0.71),doubleToFloat(0.71),doubleToFloat(0.92),doubleToFloat(0.38),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #17, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_8_17_crossSection = new MFVec2f() /* splitting up long array to improve readability */
	.append(new MFVec2f(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.92),doubleToFloat(-0.38),doubleToFloat(0.71),doubleToFloat(-0.71),doubleToFloat(0.38),doubleToFloat(-0.92),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(-0.38),doubleToFloat(-0.92),doubleToFloat(-0.71),doubleToFloat(-0.71),doubleToFloat(-0.92),doubleToFloat(-0.38),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(-0.92),doubleToFloat(0.38)], Java.type("float[]"))))
	.append(new MFVec2f(Java.to([doubleToFloat(-0.71),doubleToFloat(0.71),doubleToFloat(-0.38),doubleToFloat(0.92),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.38),doubleToFloat(0.92),doubleToFloat(0.71),doubleToFloat(0.71),doubleToFloat(0.92),doubleToFloat(0.38),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #29, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_8_29_crossSection = new MFVec2f() /* splitting up long array to improve readability */
	.append(new MFVec2f(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.92),doubleToFloat(-0.38),doubleToFloat(0.71),doubleToFloat(-0.71),doubleToFloat(0.38),doubleToFloat(-0.92),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(-0.38),doubleToFloat(-0.92),doubleToFloat(-0.71),doubleToFloat(-0.71),doubleToFloat(-0.92),doubleToFloat(-0.38),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(-0.92),doubleToFloat(0.38)], Java.type("float[]"))))
	.append(new MFVec2f(Java.to([doubleToFloat(-0.71),doubleToFloat(0.71),doubleToFloat(-0.38),doubleToFloat(0.92),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.38),doubleToFloat(0.92),doubleToFloat(0.71),doubleToFloat(0.71),doubleToFloat(0.92),doubleToFloat(0.38),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #41, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_8_41_crossSection = new MFVec2f() /* splitting up long array to improve readability */
	.append(new MFVec2f(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.92),doubleToFloat(-0.38),doubleToFloat(0.71),doubleToFloat(-0.71),doubleToFloat(0.38),doubleToFloat(-0.92),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(-0.38),doubleToFloat(-0.92),doubleToFloat(-0.71),doubleToFloat(-0.71),doubleToFloat(-0.92),doubleToFloat(-0.38),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(-0.92),doubleToFloat(0.38)], Java.type("float[]"))))
	.append(new MFVec2f(Java.to([doubleToFloat(-0.71),doubleToFloat(0.71),doubleToFloat(-0.38),doubleToFloat(0.92),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.38),doubleToFloat(0.92),doubleToFloat(0.71),doubleToFloat(0.71),doubleToFloat(0.92),doubleToFloat(0.38),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))));
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.3")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("pp3.x3d"))
    .addMeta(new meta().setName("creator").setContent("John Carlson"))
    .addMeta(new meta().setName("translator").setContent("John Carlson"))
    .addMeta(new meta().setName("created").setContent("5 May 2015"))
    .addMeta(new meta().setName("modified").setContent("23 Dec 2022"))
    .addMeta(new meta().setName("description").setContent("A process pipeline between three spheres (try typing on spheres and blue"))
    .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/x3d/pp3.x3d"))
    .addMeta(new meta().setName("generator").setContent("manual")))
  .setScene(new Scene()
    .addChild(new ProtoDeclare().setName("Process")
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addComments("left")
          .addChild(new Transform().setScale(doubleToFloat(0.5),doubleToFloat(0.5),doubleToFloat(0.5))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.7),doubleToFloat(1.0),doubleToFloat(0.0)).setTransparency(0.5)))
              .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(this.Extrusion_8_12_crossSection).setSpine(new MFVec3f(Java.to([doubleToFloat(-2.5),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-1.5),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))))
            .addComments("<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>"))
          .addComments("right")
          .addChild(new Transform().setScale(doubleToFloat(0.5),doubleToFloat(0.5),doubleToFloat(0.5))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.0),doubleToFloat(0.7),doubleToFloat(1.0)).setTransparency(0.5)))
              .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(this.Extrusion_8_17_crossSection).setSpine(new MFVec3f(Java.to([doubleToFloat(1.5),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(2.5),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))))
            .addChild(new Transform().setTranslation(doubleToFloat(2.0),doubleToFloat(0.0),doubleToFloat(0.0))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material("MaterialLightBlue").setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                .setGeometry(new Text("RightString").setString(new MFString("\"r\"")))))
            .addChild(new StringSensor("RightSensor").setEnabled(false))
            .addChild(new TouchSensor("RightTouch").setDescription("touch to activate")))
          .addComments("up")
          .addChild(new Transform().setScale(doubleToFloat(0.5),doubleToFloat(0.5),doubleToFloat(0.5))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.0),doubleToFloat(0.7),doubleToFloat(1.0)).setTransparency(0.5)))
              .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(this.Extrusion_8_29_crossSection).setSpine(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(1.5),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(2.5),doubleToFloat(0.0)], Java.type("float[]"))))))
            .addChild(new Transform().setTranslation(doubleToFloat(-0.5),doubleToFloat(2.0),doubleToFloat(0.0))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("MaterialLightBlue")))
                .setGeometry(new Text("UpString").setString(new MFString("\"u\"")))))
            .addChild(new StringSensor("UpSensor").setEnabled(false))
            .addChild(new TouchSensor("UpTouch").setDescription("touch to activate")))
          .addComments("down")
          .addChild(new Transform().setScale(doubleToFloat(0.5),doubleToFloat(0.5),doubleToFloat(0.5))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.7),doubleToFloat(1.0),doubleToFloat(0.0)).setTransparency(0.5)))
              .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(this.Extrusion_8_41_crossSection).setSpine(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(-2.5),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-1.5),doubleToFloat(0.0)], Java.type("float[]"))))))
            .addComments("<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>"))
          .addComments("center")
          .addChild(new Transform()
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.7))))
              .setGeometry(new Sphere()))
            .addChild(new Transform().setScale(doubleToFloat(0.5),doubleToFloat(0.5),doubleToFloat(0.5)).setTranslation(doubleToFloat(-0.5),doubleToFloat(0.0),doubleToFloat(1.0))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("MaterialLightBlue")))
                .setGeometry(new Text("CenterString"))))
            .addChild(new StringSensor("CenterSensor").setEnabled(false))
            .addChild(new TouchSensor("CenterTouch").setDescription("touch to activate"))))
        .addChild(new Script("RightSingleToMultiString").setSourceCode("\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"	rightlines = new MFString(\"\");" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_rightstring(rightstr) {" + "\n" + 
"	rightlines = new MFString(rightstr);" + "\n" + 
"}" + "\n")
          .addField(new field().setName("set_rightstring").setType("SFString").setAccessType("inputOnly"))
          .addField(new field().setName("rightlines").setType("MFString").setAccessType("outputOnly")))
        .addChild(new Script("UpSingleToMultiString").setSourceCode("\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"	uplines = new MFString(\"\");" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_upstring(upstr) {" + "\n" + 
"	uplines = new MFString(upstr);" + "\n" + 
"}" + "\n")
          .addField(new field().setName("set_upstring").setType("SFString").setAccessType("inputOnly"))
          .addField(new field().setName("uplines").setType("MFString").setAccessType("outputOnly")))
        .addChild(new Script("CenterSingleToMultiString").setSourceCode("\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"	centerlines = new MFString(\"\");" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_centerstring(centerstr) {" + "\n" + 
"	centerlines = new MFString(centerstr);" + "\n" + 
"}" + "\n")
          .addField(new field().setName("set_centerstring").setType("SFString").setAccessType("inputOnly"))
          .addField(new field().setName("centerlines").setType("MFString").setAccessType("outputOnly")))
        .addChild(new ROUTE().setFromNode("CenterSensor").setFromField("enteredText").setToNode("CenterSingleToMultiString").setToField("set_centerstring"))
        .addChild(new ROUTE().setFromNode("CenterSingleToMultiString").setFromField("centerlines").setToNode("CenterString").setToField("set_string"))
        .addChild(new ROUTE().setFromNode("CenterTouch").setFromField("isOver").setToNode("CenterSensor").setToField("set_enabled"))
        .addChild(new ROUTE().setFromNode("RightSensor").setFromField("enteredText").setToNode("RightSingleToMultiString").setToField("set_rightstring"))
        .addChild(new ROUTE().setFromNode("RightSingleToMultiString").setFromField("rightlines").setToNode("RightString").setToField("set_string"))
        .addChild(new ROUTE().setFromNode("RightTouch").setFromField("isOver").setToNode("RightSensor").setToField("set_enabled"))
        .addChild(new ROUTE().setFromNode("UpSensor").setFromField("enteredText").setToNode("UpSingleToMultiString").setToField("set_upstring"))
        .addChild(new ROUTE().setFromNode("UpSingleToMultiString").setFromField("uplines").setToNode("UpString").setToField("set_string"))
        .addChild(new ROUTE().setFromNode("UpTouch").setFromField("isOver").setToNode("UpSensor").setToField("set_enabled"))))
    .addChild(new NavigationInfo())
    .addChild(new Viewpoint().setDescription("Process pipes").setOrientation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.4)).setPosition(doubleToFloat(0.0),doubleToFloat(5.0),doubleToFloat(12.0)))
    .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(-2.5),doubleToFloat(0.0))
      .addChild(new ProtoInstance()))
    .addChild(new Transform()
      .addChild(new ProtoInstance()))
    .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(2.5),doubleToFloat(0.0))
      .addChild(new ProtoInstance())));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return pp3 model
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
		var testObject = new pp3();
		print ("pp3 execution self-validation test results: " + testObject.validateSelf());
	}
}
new pp3().main();