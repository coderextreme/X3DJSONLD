load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js. </p>
 <p> Related links: <a href="../../../Buildings/ArchPrototype_sail.java">ArchPrototype_sail.java</a> source, <a href="../../../Buildings/ArchPrototypeIndex.html" target="_top">ArchPrototype catalog page</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Buildings/ArchPrototype.x3d">ArchPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Michele Foti, Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 15 December 2014 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 27 November 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Buildings/ArchModelingDiagrams.pdf">ArchModelingDiagrams.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://en.wikipedia.org/wiki/Arch" target="_blank">https://en.wikipedia.org/wiki/Arch</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d" target="_blank">http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Buildings/../license.html">../license.html</a> </td>
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

	* @author Michele Foti, Don Brutzman
 */

function ArchPrototype_sail
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
ArchPrototype_sail.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: ProtoDeclare appinfo field, scene-graph level=3, element #13, 39 total values */
	this.ProtoDeclare_ArchPrototype_3_13_appinfo = new SFStringObject("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.");

	/** Large attribute array: field appinfo field, scene-graph level=5, element #21, 26 total values */
	this.field_archHalf_5_21_appinfo = new SFStringObject("archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width");

	/** Large attribute array: field appinfo field, scene-graph level=5, element #22, 30 total values */
	this.field_archHalfExtensionWidth_5_22_appinfo = new SFStringObject("archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.");

	/** Large attribute array: field appinfo field, scene-graph level=5, element #23, 20 total values */
	this.field_onlyIntrados_5_23_appinfo = new SFStringObject("onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.");

	/** Large attribute array: field appinfo field, scene-graph level=5, element #24, 15 total values */
	this.field_archFilled_5_24_appinfo = new SFStringObject("archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.");

	/** Large attribute array: field appinfo field, scene-graph level=5, element #25, 28 total values */
	this.field_archHalfFilled_5_25_appinfo = new SFStringObject("archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.");

	/** Large attribute array: field appinfo field, scene-graph level=5, element #26, 21 total values */
	this.field_lintel_5_26_appinfo = new SFStringObject("lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.");

	/** Large attribute array: field appinfo field, scene-graph level=6, element #49, 29 total values */
	this.field_computedScale_6_49_appinfo = new SFStringObject("computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth");
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("ArchPrototype.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js."))
    .addMeta(new metaObject().setName("description").setContent("Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information."))
    .addMeta(new metaObject().setName("creator").setContent("Michele Foti, Don Brutzman"))
    .addMeta(new metaObject().setName("created").setContent("15 December 2014"))
    .addMeta(new metaObject().setName("modified").setContent("27 November 2015"))
    .addMeta(new metaObject().setName("reference").setContent("ArchModelingDiagrams.pdf"))
    .addMeta(new metaObject().setName("reference").setContent("https://en.wikipedia.org/wiki/Arch"))
    .addMeta(new metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new ProtoDeclareObject().setName("ArchPrototype").setAppinfo(this.ProtoDeclare_ArchPrototype_3_13_appinfo)
      .setProtoInterface(new ProtoInterfaceObject()
        .addComments(" COLOR OF ARCH ")
        .addField(new fieldObject().setAccessType("inputOutput").setName("diffuseColor").setType("SFColor").setValue("0.2 0.8 0.8").setAppinfo("color of arch"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("emissiveColor").setType("SFColor").setValue("0.2 0.8 0.8").setAppinfo("color of arch"))
        .addComments(" INPUT PARAMETERS ")
        .addComments(" General parameters: measures in meters ")
        .addField(new fieldObject().setAccessType("initializeOnly").setName("clearSpanWidth").setType("SFFloat").setValue("4").setAppinfo("clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("riseHeight").setType("SFFloat").setValue("2").setAppinfo("riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("depth").setType("SFFloat").setValue("3").setAppinfo("depth"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("topAbutmentHeight").setType("SFFloat").setValue("0.5").setAppinfo("topAbutmentHeight:topAbutmentHeight=0 means no topAbutment"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("pierWidth").setType("SFFloat").setValue("0.5").setAppinfo("pierWidth:pierWidtht=0 means no pierWidth"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("pierHeight").setType("SFFloat").setValue("1").setAppinfo("pierHeight: pierHeight=0 means no pierHeight"))
        .addComments(" Parameters to create to create shapes related to arch: put true to apply ")
        .addField(new fieldObject().setAccessType("initializeOnly").setName("archHalf").setType("SFBool").setValue("false").setAppinfo(this.field_archHalf_5_21_appinfo))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("archHalfExtensionWidth").setType("SFFloat").setValue("0").setAppinfo(this.field_archHalfExtensionWidth_5_22_appinfo))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("onlyIntrados").setType("SFBool").setValue("false").setAppinfo(this.field_onlyIntrados_5_23_appinfo))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("archFilled").setType("SFBool").setValue("false").setAppinfo(this.field_archFilled_5_24_appinfo))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("archHalfFilled").setType("SFBool").setValue("false").setAppinfo(this.field_archHalfFilled_5_25_appinfo))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("lintel").setType("SFBool").setValue("false").setAppinfo(this.field_lintel_5_26_appinfo)))
      .setProtoBody(new ProtoBodyObject()
        .addComments(" First node determines node type of this prototype ")
        .addComments(" IndexedFaceset creates arch ")
        .addChild(new TransformObject("ArchTransform")
          .addChild(new ShapeObject("Arch")
            .addComments(" note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly ")
            .setGeometry(new IndexedFaceSetObject("ArchIndex").setDEF("ArchIndex").setConvex(false).setSolid(false)
              .setCoord(new CoordinateObject("ArchChord")))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject("MaterialNode")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("emissiveColor").setProtoField("emissiveColor"))
                  .addConnect(new connectObject().setNodeField("diffuseColor").setProtoField("diffuseColor")))))))
        .addComments(" Subsequent nodes do not render, but still must be a valid X3D subgraph ")
        .addComments(" This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs ")
        .addChild(new ScriptObject("ArchPrototypeScript").setUrl(new MFStringObject("\"../node/ArchPrototypeScript.js\""))
          .addComments(" INPUT PARAMETERS ")
          .addComments(" General parameters ")
          .addComments(" Parameters to create to create shapes related to arch: put true to apply ")
          .addComments(" OUTPUT PARAMETERS ")
          .addField(new fieldObject().setAccessType("initializeOnly").setName("clearSpanWidth").setType("SFFloat").setAppinfo("user or default input for clearSpanWidth parameter"))
          .addField(new fieldObject().setAccessType("initializeOnly").setName("riseHeight").setType("SFFloat").setAppinfo("user or default input for riseHeight parameter"))
          .addField(new fieldObject().setAccessType("initializeOnly").setName("depth").setType("SFFloat").setAppinfo("user or default input for depth parameter"))
          .addField(new fieldObject().setAccessType("initializeOnly").setName("topAbutmentHeight").setType("SFFloat").setAppinfo("user or default input for topAbutmentHeight parameter"))
          .addField(new fieldObject().setAccessType("initializeOnly").setName("pierWidth").setType("SFFloat").setAppinfo("user or default input for pierWidth parameter"))
          .addField(new fieldObject().setAccessType("initializeOnly").setName("pierHeight").setType("SFFloat").setAppinfo("user or default input for pierHeight parameter"))
          .addField(new fieldObject().setAccessType("initializeOnly").setName("archHalf").setType("SFBool").setAppinfo("user or default input for archHalf parameter"))
          .addField(new fieldObject().setAccessType("initializeOnly").setName("archHalfExtensionWidth").setType("SFFloat").setAppinfo("user or default input for archHalfExtensionWidth parameter"))
          .addField(new fieldObject().setAccessType("initializeOnly").setName("onlyIntrados").setType("SFBool").setAppinfo("user or default input for onlyIntrados parameter"))
          .addField(new fieldObject().setAccessType("initializeOnly").setName("archFilled").setType("SFBool").setAppinfo("user or default input for archFilled parameter"))
          .addField(new fieldObject().setAccessType("initializeOnly").setName("archHalfFilled").setType("SFBool").setAppinfo("user or default input for archHalfFilled parameter"))
          .addField(new fieldObject().setAccessType("initializeOnly").setName("lintel").setType("SFBool").setAppinfo("user or default input for lintel parameter"))
          .addField(new fieldObject().setAccessType("outputOnly").setName("computedScale").setType("SFVec3f").setAppinfo(this.field_computedScale_6_49_appinfo))
          .addField(new fieldObject().setAccessType("outputOnly").setName("pointOut").setType("MFVec3f").setAppinfo("send computed points to the Coordinate node"))
          .addField(new fieldObject().setAccessType("outputOnly").setName("indexOut").setType("MFInt32").setAppinfo("send computed indices to the IndexedFaceSet node"))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("clearSpanWidth").setProtoField("clearSpanWidth"))
            .addConnect(new connectObject().setNodeField("riseHeight").setProtoField("riseHeight"))
            .addConnect(new connectObject().setNodeField("depth").setProtoField("depth"))
            .addConnect(new connectObject().setNodeField("pierWidth").setProtoField("pierWidth"))
            .addConnect(new connectObject().setNodeField("topAbutmentHeight").setProtoField("topAbutmentHeight"))
            .addConnect(new connectObject().setNodeField("pierHeight").setProtoField("pierHeight"))
            .addConnect(new connectObject().setNodeField("archHalf").setProtoField("archHalf"))
            .addConnect(new connectObject().setNodeField("archHalfExtensionWidth").setProtoField("archHalfExtensionWidth"))
            .addConnect(new connectObject().setNodeField("onlyIntrados").setProtoField("onlyIntrados"))
            .addConnect(new connectObject().setNodeField("archFilled").setProtoField("archFilled"))
            .addConnect(new connectObject().setNodeField("archHalfFilled").setProtoField("archHalfFilled"))
            .addConnect(new connectObject().setNodeField("lintel").setProtoField("lintel"))))
        .addChild(new ROUTEObject().setFromNode("ArchPrototypeScript").setFromField("computedScale").setToNode("ArchTransform").setToField("scale"))
        .addChild(new ROUTEObject().setFromNode("ArchPrototypeScript").setFromField("pointOut").setToNode("ArchChord").setToField("point"))
        .addChild(new ROUTEObject().setFromNode("ArchPrototypeScript").setFromField("indexOut").setToNode("ArchIndex").setToField("set_coordIndex"))))
    .addChild(new ProtoInstanceObject("ArchInstance", "ArchPrototype").setDEF("ArchInstance").setName("ArchPrototype")
      .addFieldValue(new fieldValueObject().setName("diffuseColor").setValue("0.5 0.3 0.6"))
      .addFieldValue(new fieldValueObject().setName("emissiveColor").setValue("0.5 0.3 0.6"))
      .addFieldValue(new fieldValueObject().setName("clearSpanWidth").setValue("5"))
      .addFieldValue(new fieldValueObject().setName("riseHeight").setValue("2.5"))
      .addFieldValue(new fieldValueObject().setName("depth").setValue("2"))
      .addFieldValue(new fieldValueObject().setName("topAbutmentHeight").setValue("0.6"))
      .addFieldValue(new fieldValueObject().setName("pierWidth").setValue("1"))
      .addFieldValue(new fieldValueObject().setName("pierHeight").setValue("2")))
    .addComments(" Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare) ")
    .addChild(new InlineObject("CoordinateAxes").setUrl(new MFStringObject("\"../data/CoordinateAxes.x3d\""))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return ArchPrototype_sail model
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
		var testObject = new ArchPrototype_sail();
		print ("ArchPrototype_sail execution self-validation test results: " + testObject.validateSelf());
	}
}
new ArchPrototype_sail().main();