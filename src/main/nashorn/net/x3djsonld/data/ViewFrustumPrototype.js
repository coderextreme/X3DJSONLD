load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype. </p>
 <p> Related links: <a href="../../../Chapter14Prototypes/NeedClassName.java">NeedClassName.java</a> source, <a href="../../../Chapter14Prototypes/ViewFrustumPrototypeIndex.html" target="_top">ViewFrustumPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
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

function NeedClassName
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
NeedClassName.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Text string field, scene-graph level=5, element #78, 19 total values */
	this.Text_5_78_string = new MFStringObject(new MFStringObject("\"ViewFrustumPrototype.x3d\" \"is a Prototype declaration file.\" \"For an example scene using the prototype,\" \"click this text and view\" \"ViewFrustumExample.x3d\""));
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("ViewFrustumPrototype.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype."))
    .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
    .addMeta(new metaObject().setName("translated").setContent("16 August 2008"))
    .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
    .addMeta(new metaObject().setName("reference").setContent("ViewFrustumExample.x3d"))
    .addMeta(new metaObject().setName("drawing").setContent("ViewFrustumComputation.png"))
    .addMeta(new metaObject().setName("Image").setContent("ViewFrustumOverheadView.png"))
    .addMeta(new metaObject().setName("Image").setContent("ViewFrustumObliqueView.png"))
    .addMeta(new metaObject().setName("subject").setContent("view culling frustum"))
    .addMeta(new metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new WorldInfoObject().setTitle("ViewFrustumPrototype.x3d"))
    .addChild(new ProtoDeclareObject().setName("ViewFrustum").setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("initializeOnly").setName("ViewpointNode").setType("SFNode").setAppinfo("required: insert Viewpoint DEF or USE node for view of interest")
          .addComments(" NULL node, ProtoInstance must provide "))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("NavigationInfoNode").setType("SFNode").setAppinfo("required: insert NavigationInfo DEF or USE node of interest")
          .addComments(" NULL node, ProtoInstance must provide "))
        .addField(new fieldObject().setAccessType("inputOutput").setName("visible").setType("SFBool").setValue("true").setAppinfo("whether or not frustum geometry is rendered"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("lineColor").setType("SFColor").setValue("0.9 0.9 0.9").setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("frustumColor").setType("SFColor").setValue("0.8 0.8 0.8").setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("transparency").setType("SFFloat").setValue("0.5").setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("aspectRatio").setType("SFFloat").setValue("0.75").setAppinfo("assumed ratio height/width, default value 0.75"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("trace").setType("SFBool").setValue("false").setAppinfo("debug support, default false")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new SwitchObject("VisibilitySwitch").setWhichChoice(-1)
          .addChild(new TransformObject("PositionTransform").setRotation(0.0,1.0,0.0,3.14159)
            .addChild(new TransformObject("OrientationTransform")
              .addChild(new ShapeObject()
                .setGeometry(new IndexedLineSetObject("FrustumLines").setDEF("FrustumLines").setCoordIndex(Java.to([0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1], Java.type("int[]")))
                  .setCoord(new CoordinateObject("FrustumCoordinate").setPoint(new MFVec3fObject(Java.to([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0], Java.type("float[]"))))))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject()
                    .setIS(new ISObject()
                      .addConnect(new connectObject().setNodeField("emissiveColor").setProtoField("lineColor"))))))
              .addChild(new ShapeObject()
                .setGeometry(new ExtrusionObject("FrustumExtrusion"))
                .setAppearance(new AppearanceObject("FrustumAppearance")
                  .setMaterial(new MaterialObject()
                    .setIS(new ISObject()
                      .addConnect(new connectObject().setNodeField("diffuseColor").setProtoField("frustumColor"))
                      .addConnect(new connectObject().setNodeField("transparency").setProtoField("transparency"))))))
              .addChild(new ShapeObject()
                .setGeometry(new SphereObject().setRadius(0.08))
                .setAppearance(new AppearanceObject().setUSE("FrustumAppearance"))))))
        .addChild(new ScriptObject("GeometryComputationScript").setDirectOutput(true).setUrl(new MFStringObject("\"ViewFrustumPrototypeScript.js\""))
          .addField(new fieldObject().setAccessType("inputOutput").setName("visible").setType("SFBool").setAppinfo("Whether or not frustum geometry is rendered"))
          .addField(new fieldObject().setAccessType("outputOnly").setName("visibilitySwitchSelection").setType("SFInt32").setAppinfo("Adjust Switch selection to make geometry visible or not"))
          .addField(new fieldObject().setAccessType("initializeOnly").setName("ViewpointNode").setType("SFNode")
            .addComments(" initialization node (if any) goes here "))
          .addField(new fieldObject().setAccessType("initializeOnly").setName("NavigationInfoNode").setType("SFNode")
            .addComments(" initialization node (if any) goes here "))
          .addField(new fieldObject().setAccessType("initializeOnly").setName("FrustumCoordinate").setType("SFNode")
            .addChild(new CoordinateObject().setUSE("FrustumCoordinate")))
          .addField(new fieldObject().setAccessType("initializeOnly").setName("FrustumExtrusion").setType("SFNode")
            .addChild(new ExtrusionObject().setUSE("FrustumExtrusion")))
          .addField(new fieldObject().setAccessType("inputOnly").setName("recompute").setType("SFBool"))
          .addField(new fieldObject().setAccessType("inputOutput").setName("aspectRatio").setType("SFFloat").setAppinfo("assumed ratio height/width"))
          .addField(new fieldObject().setAccessType("outputOnly").setName("position_changed").setType("SFVec3f"))
          .addField(new fieldObject().setAccessType("outputOnly").setName("orientation_changed").setType("SFRotation"))
          .addField(new fieldObject().setAccessType("outputOnly").setName("spine_changed").setType("MFVec3f"))
          .addField(new fieldObject().setAccessType("outputOnly").setName("scale_changed").setType("MFVec2f"))
          .addField(new fieldObject().setAccessType("outputOnly").setName("point_changed").setType("MFVec3f"))
          .addField(new fieldObject().setAccessType("initializeOnly").setName("trace").setType("SFBool"))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("visible").setProtoField("visible"))
            .addConnect(new connectObject().setNodeField("ViewpointNode").setProtoField("ViewpointNode"))
            .addConnect(new connectObject().setNodeField("NavigationInfoNode").setProtoField("NavigationInfoNode"))
            .addConnect(new connectObject().setNodeField("aspectRatio").setProtoField("aspectRatio"))
            .addConnect(new connectObject().setNodeField("trace").setProtoField("trace"))))
        .addChild(new ROUTEObject().setFromNode("GeometryComputationScript").setFromField("visibilitySwitchSelection").setToNode("VisibilitySwitch").setToField("whichChoice"))
        .addChild(new ROUTEObject().setFromNode("GeometryComputationScript").setFromField("position_changed").setToNode("PositionTransform").setToField("translation"))
        .addChild(new ROUTEObject().setFromNode("GeometryComputationScript").setFromField("orientation_changed").setToNode("OrientationTransform").setToField("rotation"))
        .addChild(new ROUTEObject().setFromNode("GeometryComputationScript").setFromField("spine_changed").setToNode("FrustumExtrusion").setToField("set_spine"))
        .addChild(new ROUTEObject().setFromNode("GeometryComputationScript").setFromField("scale_changed").setToNode("FrustumExtrusion").setToField("set_scale"))
        .addChild(new ROUTEObject().setFromNode("GeometryComputationScript").setFromField("point_changed").setToNode("FrustumCoordinate").setToField("point"))))
    .addComments(" Example use is in separate scene ")
    .addChild(new AnchorObject().setDescription("ViewFrustum Example").setUrl(new MFStringObject("\"ViewFrustumExample.x3d\""))
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(0.8,0.4,0.0)))
        .setGeometry(new TextObject().setString(this.Text_5_78_string)
          .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\"")).setSize(0.8))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return NeedClassName model
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
		var testObject = new NeedClassName();
		print ("NeedClassName execution self-validation test results: " + testObject.validateSelf());
	}
}
new NeedClassName().main();