load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype. </p>
 <p> Related links: <a href="../../../Chapter14Prototypes/ViewFrustumExample.java">ViewFrustumExample.java</a> source, <a href="../../../Chapter14Prototypes/ViewFrustumExampleIndex.html" target="_top">ViewFrustumExample catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Chapter14Prototypes/ViewFrustumExample.x3d">ViewFrustumExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 16 August 2008 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Chapter14Prototypes/ViewFrustumPrototype.x3d">ViewFrustumPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> drawing </i> </td>
			<td> <a href="../../../Chapter14Prototypes/ViewFrustumComputation.png">ViewFrustumComputation.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../Chapter14Prototypes/ViewFrustumOverheadView.png">ViewFrustumOverheadView.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../Chapter14Prototypes/ViewFrustumObliqueView.png">ViewFrustumObliqueView.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../Chapter14Prototypes/ViewpointCalculator.png">ViewpointCalculator.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../Chapter14Prototypes/ViewpointCalculatorComposed.png">ViewpointCalculatorComposed.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> view culling frustum </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d" target="_blank">http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Chapter14Prototypes/../license.html">../license.html</a> </td>
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

	* @author Don Brutzman
 */

function ViewFrustumExample
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
ViewFrustumExample.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.3")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("ViewFrustumExample.x3d"))
    .addMeta(new meta().setName("description").setContent("Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype."))
    .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
    .addMeta(new meta().setName("translated").setContent("16 August 2008"))
    .addMeta(new meta().setName("modified").setContent("20 October 2019"))
    .addMeta(new meta().setName("reference").setContent("ViewFrustumPrototype.x3d"))
    .addMeta(new meta().setName("drawing").setContent("ViewFrustumComputation.png"))
    .addMeta(new meta().setName("Image").setContent("ViewFrustumOverheadView.png"))
    .addMeta(new meta().setName("Image").setContent("ViewFrustumObliqueView.png"))
    .addMeta(new meta().setName("Image").setContent("ViewpointCalculator.png"))
    .addMeta(new meta().setName("Image").setContent("ViewpointCalculatorComposed.png"))
    .addMeta(new meta().setName("subject").setContent("view culling frustum"))
    .addMeta(new meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("ViewFrustumExample.x3d"))
    .addChild(new Viewpoint().setDescription("ViewFrustum from above, looking down").setOrientation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-1.57)).setPosition(doubleToFloat(0.0),doubleToFloat(40.0),doubleToFloat(0.0)))
    .addChild(new Viewpoint().setDescription("ViewFrustum from point of view"))
    .addChild(new Viewpoint().setDescription("ViewFrustum behind point of view").setPosition(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(15.0)))
    .addChild(new Viewpoint().setDescription("ViewFrustum oblique side view").setOrientation(doubleToFloat(0.8005),doubleToFloat(0.5926),doubleToFloat(0.0898),doubleToFloat(-0.3743)).setPosition(doubleToFloat(-5.0),doubleToFloat(5.0),doubleToFloat(20.0)))
    .addChild(new NavigationInfo().setType("\"EXAMINE\" \"FLY\" \"ANY\""))
    .addChild(new ExternProtoDeclare().setName("ViewFrustum").setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes").setUrl(new MFString("\"ViewFrustumPrototype.x3d#ViewFrustum\""))
      .addField(new field().setName("ViewpointNode").setType("SFNode").setAccessType("initializeOnly").setAppinfo("required: insert Viewpoint DEF or USE node for view of interest"))
      .addField(new field().setName("NavigationInfoNode").setType("SFNode").setAccessType("initializeOnly").setAppinfo("required: insert NavigationInfo DEF or USE node of interest"))
      .addField(new field().setName("visible").setType("SFBool").setAccessType("inputOutput").setAppinfo("whether or not frustum geometry is rendered"))
      .addField(new field().setName("lineColor").setType("SFColor").setAccessType("inputOutput").setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"))
      .addField(new field().setName("frustumColor").setType("SFColor").setAccessType("inputOutput").setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"))
      .addField(new field().setName("transparency").setType("SFFloat").setAccessType("inputOutput").setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5"))
      .addField(new field().setName("aspectRatio").setType("SFFloat").setAccessType("inputOutput").setAppinfo("assumed ratio height/width, default value 0.75"))
      .addField(new field().setName("trace").setType("SFBool").setAccessType("initializeOnly").setAppinfo("debug support, default false")))
    .addComments(" Example use ")
    .addChild(new ProtoInstance()
      .addFieldValue(new fieldValue().setName("ViewpointNode")
        .addComments(" prefer empty description to prevent entry in player's ViewpointList ")
        .addChild(new Viewpoint().setDescription("ViewFrustum ViewpointNode")))
      .addFieldValue(new fieldValue().setName("NavigationInfoNode")
        .addChild(new NavigationInfo().setVisibilityLimit(15)))
      .addFieldValue(new fieldValue().setName("visible").setValue("true"))
      .addFieldValue(new fieldValue().setName("lineColor").setValue("0.9 0.9 0.9"))
      .addFieldValue(new fieldValue().setName("frustumColor").setValue("0.8 0.8 0.8"))
      .addFieldValue(new fieldValue().setName("transparency").setValue("0.75"))
      .addFieldValue(new fieldValue().setName("trace").setValue("true")))
    .addComments(" Visualization assists ")
    .addChild(new Inline("GridXZ").setUrl(new MFString("\"GridXZ_20x20Fixed.x3d\"")))
    .addChild(new Transform().setScale(doubleToFloat(5.0),doubleToFloat(5.0),doubleToFloat(5.0))
      .addChild(new Inline("CoordinateAxes").setUrl(new MFString("\"CoordinateAxes.x3d\"")))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return ViewFrustumExample model
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
		var testObject = new ViewFrustumExample();
		print ("ViewFrustumExample execution self-validation test results: " + testObject.validateSelf());
	}
}
new ViewFrustumExample().main();