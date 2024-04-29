load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype. </p>
 <p> Related links: <a href="../../../Chapter14Prototypes/ViewFrustumPrototype.java">ViewFrustumPrototype.java</a> source, <a href="../../../Chapter14Prototypes/ViewFrustumPrototypeIndex.html" target="_top">ViewFrustumPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Chapter14Prototypes/ViewFrustumPrototype.x3d">ViewFrustumPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype. </td>
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
			<td> <a href="../../../Chapter14Prototypes/ViewFrustumExample.x3d">ViewFrustumExample.x3d</a> </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> view culling frustum </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d" target="_blank">http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d</a> </td>
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

function ViewFrustumPrototype
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
ViewFrustumPrototype.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Text string field, scene-graph level=5, element #78, 19 total values */
	this.Text_5_78_string = new MFString(new MFString("\"ViewFrustumPrototype.x3d\" \"is a Prototype declaration file.\" \"For an example scene using the prototype,\" \"click this text and view\" \"ViewFrustumExample.x3d\""));
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.3")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("ViewFrustumPrototype.x3d"))
    .addMeta(new meta().setName("description").setContent("Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype."))
    .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
    .addMeta(new meta().setName("translated").setContent("16 August 2008"))
    .addMeta(new meta().setName("modified").setContent("20 October 2019"))
    .addMeta(new meta().setName("reference").setContent("ViewFrustumExample.x3d"))
    .addMeta(new meta().setName("drawing").setContent("ViewFrustumComputation.png"))
    .addMeta(new meta().setName("Image").setContent("ViewFrustumOverheadView.png"))
    .addMeta(new meta().setName("Image").setContent("ViewFrustumObliqueView.png"))
    .addMeta(new meta().setName("subject").setContent("view culling frustum"))
    .addMeta(new meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("ViewFrustumPrototype.x3d"))
    .addChild(new ProtoDeclare().setName("ViewFrustum").setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("ViewpointNode").setType("SFNode").setAccessType("initializeOnly").setAppinfo("required: insert Viewpoint DEF or USE node for view of interest")
          .addComments(" NULL node, ProtoInstance must provide "))
        .addField(new field().setName("NavigationInfoNode").setType("SFNode").setAccessType("initializeOnly").setAppinfo("required: insert NavigationInfo DEF or USE node of interest")
          .addComments(" NULL node, ProtoInstance must provide "))
        .addField(new field().setName("visible").setType("SFBool").setAccessType("inputOutput").setValue("true").setAppinfo("whether or not frustum geometry is rendered"))
        .addField(new field().setName("lineColor").setType("SFColor").setAccessType("inputOutput").setValue("0.9 0.9 0.9").setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"))
        .addField(new field().setName("frustumColor").setType("SFColor").setAccessType("inputOutput").setValue("0.8 0.8 0.8").setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"))
        .addField(new field().setName("transparency").setType("SFFloat").setAccessType("inputOutput").setValue("0.5").setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5"))
        .addField(new field().setName("aspectRatio").setType("SFFloat").setAccessType("inputOutput").setValue("0.75").setAppinfo("assumed ratio height/width, default value 0.75"))
        .addField(new field().setName("trace").setType("SFBool").setAccessType("initializeOnly").setValue("false").setAppinfo("debug support, default false")))
      .setProtoBody(new ProtoBody()
        .addChild(new Switch("VisibilitySwitch").setWhichChoice(-1)
          .addChild(new Transform("PositionTransform").setRotation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(3.14159))
            .addChild(new Transform("OrientationTransform")
              .addChild(new Shape()
                .setGeometry(new IndexedLineSet("FrustumLines").setDEF("FrustumLines").setCoordIndex(Java.to([0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1], Java.type("int[]")))
                  .setCoord(new Coordinate("FrustumCoordinate").setPoint(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))))
                .setAppearance(new Appearance()
                  .setMaterial(new Material()
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("emissiveColor").setProtoField("lineColor"))))))
              .addChild(new Shape()
                .setGeometry(new Extrusion("FrustumExtrusion"))
                .setAppearance(new Appearance("FrustumAppearance")
                  .setMaterial(new Material()
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("diffuseColor").setProtoField("frustumColor"))
                      .addConnect(new connect().setNodeField("transparency").setProtoField("transparency"))))))
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.08))
                .setAppearance(new Appearance().setUSE("FrustumAppearance"))))))
        .addChild(new Script("GeometryComputationScript").setDirectOutput(true).setUrl(new MFString("\"ViewFrustumPrototypeScript.js\""))
          .addField(new field().setName("visible").setType("SFBool").setAccessType("inputOutput").setAppinfo("Whether or not frustum geometry is rendered"))
          .addField(new field().setName("visibilitySwitchSelection").setType("SFInt32").setAccessType("outputOnly").setAppinfo("Adjust Switch selection to make geometry visible or not"))
          .addField(new field().setName("ViewpointNode").setType("SFNode").setAccessType("initializeOnly")
            .addComments(" initialization node (if any) goes here "))
          .addField(new field().setName("NavigationInfoNode").setType("SFNode").setAccessType("initializeOnly")
            .addComments(" initialization node (if any) goes here "))
          .addField(new field().setName("FrustumCoordinate").setType("SFNode").setAccessType("initializeOnly")
            .addChild(new Coordinate().setUSE("FrustumCoordinate")))
          .addField(new field().setName("FrustumExtrusion").setType("SFNode").setAccessType("initializeOnly")
            .addChild(new Extrusion().setUSE("FrustumExtrusion")))
          .addField(new field().setName("recompute").setType("SFBool").setAccessType("inputOnly"))
          .addField(new field().setName("aspectRatio").setType("SFFloat").setAccessType("inputOutput").setAppinfo("assumed ratio height/width"))
          .addField(new field().setName("position_changed").setType("SFVec3f").setAccessType("outputOnly"))
          .addField(new field().setName("orientation_changed").setType("SFRotation").setAccessType("outputOnly"))
          .addField(new field().setName("spine_changed").setType("MFVec3f").setAccessType("outputOnly"))
          .addField(new field().setName("scale_changed").setType("MFVec2f").setAccessType("outputOnly"))
          .addField(new field().setName("point_changed").setType("MFVec3f").setAccessType("outputOnly"))
          .addField(new field().setName("trace").setType("SFBool").setAccessType("initializeOnly"))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("visible").setProtoField("visible"))
            .addConnect(new connect().setNodeField("ViewpointNode").setProtoField("ViewpointNode"))
            .addConnect(new connect().setNodeField("NavigationInfoNode").setProtoField("NavigationInfoNode"))
            .addConnect(new connect().setNodeField("aspectRatio").setProtoField("aspectRatio"))
            .addConnect(new connect().setNodeField("trace").setProtoField("trace"))))
        .addChild(new ROUTE().setFromNode("GeometryComputationScript").setFromField("visibilitySwitchSelection").setToNode("VisibilitySwitch").setToField("whichChoice"))
        .addChild(new ROUTE().setFromNode("GeometryComputationScript").setFromField("position_changed").setToNode("PositionTransform").setToField("translation"))
        .addChild(new ROUTE().setFromNode("GeometryComputationScript").setFromField("orientation_changed").setToNode("OrientationTransform").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("GeometryComputationScript").setFromField("spine_changed").setToNode("FrustumExtrusion").setToField("set_spine"))
        .addChild(new ROUTE().setFromNode("GeometryComputationScript").setFromField("scale_changed").setToNode("FrustumExtrusion").setToField("set_scale"))
        .addChild(new ROUTE().setFromNode("GeometryComputationScript").setFromField("point_changed").setToNode("FrustumCoordinate").setToField("point"))))
    .addComments(" Example use is in separate scene ")
    .addChild(new Anchor().setDescription("ViewFrustum Example").setUrl(new MFString("\"ViewFrustumExample.x3d\""))
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.8),doubleToFloat(0.4),doubleToFloat(0.0))))
        .setGeometry(new Text().setString(this.Text_5_78_string)
          .setFontStyle(new FontStyle().setJustify(new MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.8))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return ViewFrustumPrototype model
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
		var testObject = new ViewFrustumPrototype();
		print ("ViewFrustumPrototype execution self-validation test results: " + testObject.validateSelf());
	}
}
new ViewFrustumPrototype().main();