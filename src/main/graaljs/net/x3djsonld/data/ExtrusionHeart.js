load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Simple extrusion of a Valentine heart. </p>
 <p> Related links: <a href="../../../course/ExtrusionHeart.java">ExtrusionHeart.java</a> source, <a href="../../../course/ExtrusionHeartIndex.html" target="_top">ExtrusionHeart catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../course/ExtrusionHeart.x3d">ExtrusionHeart.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Simple extrusion of a Valentine heart. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Class participants in course Introduction to VRML/X3D. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 14 February 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 27 November 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../course/../license.html">../license.html</a> </td>
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

	* @author Class participants in course Introduction to VRML/X3D.
 */

function ExtrusionHeart
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
ExtrusionHeart.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.0")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("ExtrusionHeart.x3d"))
    .addMeta(new meta().setName("description").setContent("Simple extrusion of a Valentine heart."))
    .addMeta(new meta().setName("creator").setContent("Class participants in course Introduction to VRML/X3D."))
    .addMeta(new meta().setName("created").setContent("14 February 2001"))
    .addMeta(new meta().setName("modified").setContent("27 November 2015"))
    .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new Viewpoint().setDescription("Extrusion Heart").setOrientation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.57)).setPosition(doubleToFloat(0.0),doubleToFloat(-4.0),doubleToFloat(0.0)))
    .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(-0.5),doubleToFloat(0.0))
      .addChild(new Shape()
        .setGeometry(new Extrusion().setCreaseAngle(3.14159).setCrossSection(new MFVec2f() /* splitting up long array to improve readability */
.append(new MFVec2f(Java.to([doubleToFloat(0.0),doubleToFloat(0.8),doubleToFloat(0.2),doubleToFloat(1.0),doubleToFloat(0.7),doubleToFloat(0.95),doubleToFloat(1.0),doubleToFloat(0.5),doubleToFloat(0.8),doubleToFloat(0.0),doubleToFloat(0.5),doubleToFloat(-0.3),doubleToFloat(0.0),doubleToFloat(-0.7),doubleToFloat(-0.5),doubleToFloat(-0.3),doubleToFloat(-0.8),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.5)], Java.type("float[]"))))
.append(new MFVec2f(Java.to([doubleToFloat(-0.7),doubleToFloat(0.95),doubleToFloat(-0.2),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.8)], Java.type("float[]"))))).setScale(new MFVec2f(Java.to([doubleToFloat(0.01),doubleToFloat(0.01),doubleToFloat(0.8),doubleToFloat(0.8),doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(0.8),doubleToFloat(0.8),doubleToFloat(0.01),doubleToFloat(0.01)], Java.type("float[]")))).setSolid(false).setSpine(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.5),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.9),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]")))))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.8),doubleToFloat(0.3),doubleToFloat(0.3)))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return ExtrusionHeart model
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
		var testObject = new ExtrusionHeart();
		print ("ExtrusionHeart execution self-validation test results: " + testObject.validateSelf());
	}
}
new ExtrusionHeart().main();