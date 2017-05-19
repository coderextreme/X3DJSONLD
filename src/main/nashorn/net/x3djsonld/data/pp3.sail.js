load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> A process pipeline between three spheres (try typing on spheres and blue. </p>
 <p> Related links: pp3_sail.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.pp3_sail&nbsp; Document Metadata </td>
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
			<td> 05 May 2017 </td>
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
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author John Carlson
 */

function pp3_sail
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
pp3_sail.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #12, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_8_12_crossSection = new MFVec2fObject() /* splitting up long array to improve readability */
	.append(new MFVec2fObject(Java.to([1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38], Java.type("float[]"))))
	.append(new MFVec2fObject(Java.to([-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0], Java.type("float[]"))));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #17, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_8_17_crossSection = new MFVec2fObject() /* splitting up long array to improve readability */
	.append(new MFVec2fObject(Java.to([1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38], Java.type("float[]"))))
	.append(new MFVec2fObject(Java.to([-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0], Java.type("float[]"))));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #29, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_8_29_crossSection = new MFVec2fObject() /* splitting up long array to improve readability */
	.append(new MFVec2fObject(Java.to([1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38], Java.type("float[]"))))
	.append(new MFVec2fObject(Java.to([-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0], Java.type("float[]"))));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #41, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_8_41_crossSection = new MFVec2fObject() /* splitting up long array to improve readability */
	.append(new MFVec2fObject(Java.to([1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38], Java.type("float[]"))))
	.append(new MFVec2fObject(Java.to([-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0], Java.type("float[]"))));
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("pp3.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("translator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("created").setContent("5 May 2015"))
    .addMeta(new metaObject().setName("modified").setContent("05 May 2017"))
    .addMeta(new metaObject().setName("description").setContent("A process pipeline between three spheres (try typing on spheres and blue"))
    .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/x3d/pp3.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("manual")))
  .setScene(new SceneObject()
    .addChild(new ProtoDeclareObject().setName("Process")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new GroupObject()
          .addComments("left")
          .addChild(new TransformObject().setScale(0.5,0.5,0.5)
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setTransparency(0.5).setDiffuseColor(0.7,1.0,0.0)))
              .setGeometry(new ExtrusionObject().setSpine(new MFVec3fObject(Java.to([-2.5,0.0,0.0,-1.5,0.0,0.0], Java.type("float[]")))).setCreaseAngle(0.785).setCrossSection(this.Extrusion_8_12_crossSection)))
            .addComments("<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>"))
          .addComments("right")
          .addChild(new TransformObject().setScale(0.5,0.5,0.5)
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(0.0,0.7,1.0).setTransparency(0.5)))
              .setGeometry(new ExtrusionObject().setCreaseAngle(0.785).setCrossSection(this.Extrusion_8_17_crossSection).setSpine(new MFVec3fObject(Java.to([1.5,0.0,0.0,2.5,0.0,0.0], Java.type("float[]"))))))
            .addChild(new TransformObject().setTranslation(2.0,0.0,0.0)
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject("MaterialLightBlue").setDiffuseColor(1.0,1.0,1.0)))
                .setGeometry(new TextObject("RightString").setString(new MFStringObject("\"r\"")))))
            .addChild(new StringSensorObject("RightSensor").setEnabled(false))
            .addChild(new TouchSensorObject("RightTouch").setDescription("touch to activate")))
          .addComments("up")
          .addChild(new TransformObject().setScale(0.5,0.5,0.5)
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(0.0,0.7,1.0).setTransparency(0.5)))
              .setGeometry(new ExtrusionObject().setSpine(new MFVec3fObject(Java.to([0.0,1.5,0.0,0.0,2.5,0.0], Java.type("float[]")))).setCreaseAngle(0.785).setCrossSection(this.Extrusion_8_29_crossSection)))
            .addChild(new TransformObject().setTranslation(-0.5,2.0,0.0)
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setUSE("MaterialLightBlue")))
                .setGeometry(new TextObject("UpString").setString(new MFStringObject("\"u\"")))))
            .addChild(new StringSensorObject("UpSensor").setEnabled(false))
            .addChild(new TouchSensorObject("UpTouch").setDescription("touch to activate")))
          .addComments("down")
          .addChild(new TransformObject().setScale(0.5,0.5,0.5)
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setTransparency(0.5).setDiffuseColor(0.7,1.0,0.0)))
              .setGeometry(new ExtrusionObject().setSpine(new MFVec3fObject(Java.to([0.0,-2.5,0.0,0.0,-1.5,0.0], Java.type("float[]")))).setCreaseAngle(0.785).setCrossSection(this.Extrusion_8_41_crossSection)))
            .addComments("<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>"))
          .addComments("center")
          .addChild(new TransformObject()
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(1.0,0.0,0.7)))
              .setGeometry(new SphereObject()))
            .addChild(new TransformObject().setTranslation(-0.5,0.0,1.0).setScale(0.5,0.5,0.5)
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setUSE("MaterialLightBlue")))
                .setGeometry(new TextObject("CenterString"))))
            .addChild(new StringSensorObject("CenterSensor").setEnabled(false))
            .addChild(new TouchSensorObject("CenterTouch").setDescription("touch to activate"))))
        .addChild(new ScriptObject("RightSingleToMultiString").setSourceCode(
"<![CDATA[" + "\n" +
"\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"	rightlines = new MFString(\"\");" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_rightstring(rightstr) {" + "\n" + 
"	rightlines = new MFString(rightstr);" + "\n" + 
"}" + "\n" + "]]>"
)
          .addField(new fieldObject().setAccessType("inputOnly").setName("set_rightstring").setType("SFString"))
          .addField(new fieldObject().setAccessType("outputOnly").setName("rightlines").setType("MFString")))
        .addChild(new ScriptObject("UpSingleToMultiString").setSourceCode(
"<![CDATA[" + "\n" +
"\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"	uplines = new MFString(\"\");" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_upstring(upstr) {" + "\n" + 
"	uplines = new MFString(upstr);" + "\n" + 
"}" + "\n" + "]]>"
)
          .addField(new fieldObject().setAccessType("inputOnly").setName("set_upstring").setType("SFString"))
          .addField(new fieldObject().setAccessType("outputOnly").setName("uplines").setType("MFString")))
        .addChild(new ScriptObject("CenterSingleToMultiString").setSourceCode(
"<![CDATA[" + "\n" +
"\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"	centerlines = new MFString(\"\");" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_centerstring(centerstr) {" + "\n" + 
"	centerlines = new MFString(centerstr);" + "\n" + 
"}" + "\n" + "]]>"
)
          .addField(new fieldObject().setAccessType("inputOnly").setName("set_centerstring").setType("SFString"))
          .addField(new fieldObject().setAccessType("outputOnly").setName("centerlines").setType("MFString")))
        .addChild(new ROUTEObject().setFromNode("CenterSensor").setFromField("enteredText").setToNode("CenterSingleToMultiString").setToField("set_centerstring"))
        .addChild(new ROUTEObject().setFromNode("CenterSingleToMultiString").setFromField("centerlines").setToNode("CenterString").setToField("set_string"))
        .addChild(new ROUTEObject().setFromNode("CenterTouch").setFromField("isOver").setToNode("CenterSensor").setToField("set_enabled"))
        .addChild(new ROUTEObject().setFromNode("RightSensor").setFromField("enteredText").setToNode("RightSingleToMultiString").setToField("set_rightstring"))
        .addChild(new ROUTEObject().setFromNode("RightSingleToMultiString").setFromField("rightlines").setToNode("RightString").setToField("set_string"))
        .addChild(new ROUTEObject().setFromNode("RightTouch").setFromField("isOver").setToNode("RightSensor").setToField("set_enabled"))
        .addChild(new ROUTEObject().setFromNode("UpSensor").setFromField("enteredText").setToNode("UpSingleToMultiString").setToField("set_upstring"))
        .addChild(new ROUTEObject().setFromNode("UpSingleToMultiString").setFromField("uplines").setToNode("UpString").setToField("set_string"))
        .addChild(new ROUTEObject().setFromNode("UpTouch").setFromField("isOver").setToNode("UpSensor").setToField("set_enabled"))))
    .addChild(new NavigationInfoObject())
    .addChild(new ViewpointObject().setDescription("Process pipes").setPosition(0.0,5.0,12.0).setOrientation(1.0,0.0,0.0,-0.4))
    .addChild(new TransformObject().setTranslation(0.0,-2.5,0.0)
      .addChild(new ProtoInstanceObject().setName("Process")))
    .addChild(new TransformObject()
      .addChild(new ProtoInstanceObject().setName("Process")))
    .addChild(new TransformObject().setTranslation(0.0,2.5,0.0)
      .addChild(new ProtoInstanceObject().setName("Process"))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return pp3_sail model
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
		var testObject = new pp3_sail();
		print ("pp3_sail execution self-validation test results: " + testObject.validateSelf());
	}
}
new pp3_sail().main();