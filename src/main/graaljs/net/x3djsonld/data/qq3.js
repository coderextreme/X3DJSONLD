load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> 12 extrusions to test prototype expander. </p>
 <p> Related links: qq3.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.qq3&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/x3d/qq3.x3d">qq3.x3d</a> </td>
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
			<td> 11 Jan 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 05 May 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> 12 extrusions to test prototype expander </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/x3d/qq3.x3d" target="_blank">https://coderextreme.net/x3d/qq3.x3d</a> </td>
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

function qq3
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
qq3.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #12, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_8_12_crossSection = new MFVec2f() /* splitting up long array to improve readability */
	.append(new MFVec2f(Java.to([doubleToFloat(1.00),doubleToFloat(0.00),doubleToFloat(0.92),doubleToFloat(-0.38),doubleToFloat(0.71),doubleToFloat(-0.71),doubleToFloat(0.38),doubleToFloat(-0.92),doubleToFloat(0.00),doubleToFloat(-1.00),doubleToFloat(-0.38),doubleToFloat(-0.92),doubleToFloat(-0.71),doubleToFloat(-0.71),doubleToFloat(-0.92),doubleToFloat(-0.38),doubleToFloat(-1.00),doubleToFloat(-0.00),doubleToFloat(-0.92),doubleToFloat(0.38)], Java.type("float[]"))))
	.append(new MFVec2f(Java.to([doubleToFloat(-0.71),doubleToFloat(0.71),doubleToFloat(-0.38),doubleToFloat(0.92),doubleToFloat(0.00),doubleToFloat(1.00),doubleToFloat(0.38),doubleToFloat(0.92),doubleToFloat(0.71),doubleToFloat(0.71),doubleToFloat(0.92),doubleToFloat(0.38),doubleToFloat(1.00),doubleToFloat(0.00)], Java.type("float[]"))));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #17, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_8_17_crossSection = new MFVec2f() /* splitting up long array to improve readability */
	.append(new MFVec2f(Java.to([doubleToFloat(1.00),doubleToFloat(0.00),doubleToFloat(0.92),doubleToFloat(-0.38),doubleToFloat(0.71),doubleToFloat(-0.71),doubleToFloat(0.38),doubleToFloat(-0.92),doubleToFloat(0.00),doubleToFloat(-1.00),doubleToFloat(-0.38),doubleToFloat(-0.92),doubleToFloat(-0.71),doubleToFloat(-0.71),doubleToFloat(-0.92),doubleToFloat(-0.38),doubleToFloat(-1.00),doubleToFloat(-0.00),doubleToFloat(-0.92),doubleToFloat(0.38)], Java.type("float[]"))))
	.append(new MFVec2f(Java.to([doubleToFloat(-0.71),doubleToFloat(0.71),doubleToFloat(-0.38),doubleToFloat(0.92),doubleToFloat(0.00),doubleToFloat(1.00),doubleToFloat(0.38),doubleToFloat(0.92),doubleToFloat(0.71),doubleToFloat(0.71),doubleToFloat(0.92),doubleToFloat(0.38),doubleToFloat(1.00),doubleToFloat(0.00)], Java.type("float[]"))));
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.3")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("qq3.x3d"))
    .addMeta(new meta().setName("creator").setContent("John Carlson"))
    .addMeta(new meta().setName("translator").setContent("John Carlson"))
    .addMeta(new meta().setName("created").setContent("11 Jan 2015"))
    .addMeta(new meta().setName("modified").setContent("05 May 2017"))
    .addMeta(new meta().setName("description").setContent("12 extrusions to test prototype expander"))
    .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/x3d/qq3.x3d"))
    .addMeta(new meta().setName("generator").setContent("manual")))
  .setScene(new Scene()
    .addChild(new ProtoDeclare().setName("Process")
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addComments(" left ")
          .addChild(new Transform().setScale(doubleToFloat(0.5),doubleToFloat(0.5),doubleToFloat(0.5))
            .addChild(new Shape("ShapeLeftDown")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.7),doubleToFloat(1.0),doubleToFloat(0.0))))
              .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(this.Extrusion_8_12_crossSection).setSpine(new MFVec3f(Java.to([doubleToFloat(-2.5),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-1.5),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))))))
          .addComments(" right ")
          .addChild(new Transform().setScale(doubleToFloat(0.5),doubleToFloat(0.5),doubleToFloat(0.5))
            .addChild(new Shape("ShapeUpRight")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.0),doubleToFloat(0.7),doubleToFloat(1.0))))
              .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(this.Extrusion_8_17_crossSection).setSpine(new MFVec3f(Java.to([doubleToFloat(1.5),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(2.5),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))))))
          .addComments(" up ")
          .addChild(new Transform().setScale(doubleToFloat(0.5),doubleToFloat(0.5),doubleToFloat(0.5))
            .addChild(new Shape().setUSE("ShapeUpRight")))
          .addComments(" down ")
          .addChild(new Transform().setScale(doubleToFloat(0.5),doubleToFloat(0.5),doubleToFloat(0.5))
            .addChild(new Shape().setUSE("ShapeLeftDown"))))))
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
   * @return qq3 model
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
		var testObject = new qq3();
		print ("qq3 execution self-validation test results: " + testObject.validateSelf());
	}
}
new qq3().main();