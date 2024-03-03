load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> beginnings of a force directed graph in 3D. </p>
 <p> Related links: extrusion.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.extrusion&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John W Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> December 13 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="extrusion.x3d">extrusion.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> beginnings of a force directed graph in 3D </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vim, X3D-Edit, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
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

	* @author John W Carlson
 */

function extrusion
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
extrusion.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Extrusion DEF='extrusion' crossSection field, scene-graph level=5, element #8, 34 total numbers made up of 17 2-tuple values */
	this.extrusion_5_8_crossSection = new MFVec2f() /* splitting up long array to improve readability */
	.append(new MFVec2f(Java.to([doubleToFloat(1.00),doubleToFloat(0.00),doubleToFloat(0.92),doubleToFloat(-0.38),doubleToFloat(0.71),doubleToFloat(-0.71),doubleToFloat(0.38),doubleToFloat(-0.92),doubleToFloat(0.00),doubleToFloat(-1.00),doubleToFloat(-0.38),doubleToFloat(-0.92),doubleToFloat(-0.71),doubleToFloat(-0.71),doubleToFloat(-0.92),doubleToFloat(-0.38),doubleToFloat(-1.00),doubleToFloat(-0.00),doubleToFloat(-0.92),doubleToFloat(0.38)], Java.type("float[]"))))
	.append(new MFVec2f(Java.to([doubleToFloat(-0.71),doubleToFloat(0.71),doubleToFloat(-0.38),doubleToFloat(0.92),doubleToFloat(0.00),doubleToFloat(1.00),doubleToFloat(0.38),doubleToFloat(0.92),doubleToFloat(0.71),doubleToFloat(0.71),doubleToFloat(0.92),doubleToFloat(0.38),doubleToFloat(1.00),doubleToFloat(0.00)], Java.type("float[]"))));
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("4.0")
  .setHead(new head()
    .addMeta(new meta().setName("creator").setContent("John W Carlson"))
    .addMeta(new meta().setName("created").setContent("December 13 2015"))
    .addMeta(new meta().setName("title").setContent("extrusion.x3d"))
    .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"))
    .addMeta(new meta().setName("description").setContent("beginnings of a force directed graph in 3D"))
    .addMeta(new meta().setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
  .setScene(new Scene()
    .addChild(new Group()
      .addChild(new Shape()
        .setGeometry(new Extrusion("extrusion").setCreaseAngle(0.785).setCrossSection(this.extrusion_5_8_crossSection).setSpine(new MFVec3f(Java.to([doubleToFloat(-50.0),doubleToFloat(-50.0),doubleToFloat(0.0),doubleToFloat(50.0),doubleToFloat(50.0),doubleToFloat(0.0)], Java.type("float[]")))))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)))))
      .addChild(new TimeSensor("TourTime").setLoop(true))
      .addChild(new Script("MoveCylinder").setSourceCode("\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"                function set_cycle(value) {" + "\n" + 
"                        Browser.print(value);" + "\n" + 
"                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);" + "\n" + 
"                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);" + "\n" + 
"		        spine = new MFVec3f([endA, endB]);" + "\n" + 
"                }" + "\n")
        .addField(new field().setName("set_cycle").setType("SFTime").setAccessType("inputOnly"))
        .addField(new field().setName("spine").setType("MFVec3f").setAccessType("inputOutput").setValue("-50 -50 0 50 50 0")))
      .addChild(new ROUTE().setFromNode("TourTime").setFromField("cycleTime").setToNode("MoveCylinder").setToField("set_cycle"))
      .addChild(new ROUTE().setFromNode("MoveCylinder").setFromField("spine_changed").setToNode("extrusion").setToField("set_spine"))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return extrusion model
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
		var testObject = new extrusion();
		print ("extrusion execution self-validation test results: " + testObject.validateSelf());
	}
}
new extrusion().main();