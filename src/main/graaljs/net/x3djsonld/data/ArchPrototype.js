load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js. </p>
 <p> Related links: <a href="../../../Buildings/ArchPrototype.java">ArchPrototype.java</a> source, <a href="../../../Buildings/ArchPrototypeIndex.html" target="_top">ArchPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
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
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author Michele Foti, Don Brutzman
 */

function ArchPrototype
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
ArchPrototype.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: ProtoDeclare appinfo field, scene-graph level=3, element #13, 39 total values */
	this.ProtoDeclare_ArchPrototype_3_13_appinfo = new SFString("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.");

	/** Large attribute array: field appinfo field, scene-graph level=5, element #21, 26 total values */
	this.field_archHalf_5_21_appinfo = new SFString("archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width");

	/** Large attribute array: field appinfo field, scene-graph level=5, element #22, 30 total values */
	this.field_archHalfExtensionWidth_5_22_appinfo = new SFString("archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.");

	/** Large attribute array: field appinfo field, scene-graph level=5, element #23, 20 total values */
	this.field_onlyIntrados_5_23_appinfo = new SFString("onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.");

	/** Large attribute array: field appinfo field, scene-graph level=5, element #24, 15 total values */
	this.field_archFilled_5_24_appinfo = new SFString("archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.");

	/** Large attribute array: field appinfo field, scene-graph level=5, element #25, 28 total values */
	this.field_archHalfFilled_5_25_appinfo = new SFString("archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.");

	/** Large attribute array: field appinfo field, scene-graph level=5, element #26, 21 total values */
	this.field_lintel_5_26_appinfo = new SFString("lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.");

	/** Large attribute array: field appinfo field, scene-graph level=6, element #49, 29 total values */
	this.field_computedScale_6_49_appinfo = new SFString("computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth");
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.3")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("ArchPrototype.x3d"))
    .addMeta(new meta().setName("description").setContent("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js."))
    .addMeta(new meta().setName("description").setContent("Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information."))
    .addMeta(new meta().setName("creator").setContent("Michele Foti, Don Brutzman"))
    .addMeta(new meta().setName("created").setContent("15 December 2014"))
    .addMeta(new meta().setName("modified").setContent("27 November 2015"))
    .addMeta(new meta().setName("reference").setContent("ArchModelingDiagrams.pdf"))
    .addMeta(new meta().setName("reference").setContent("https://en.wikipedia.org/wiki/Arch"))
    .addMeta(new meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new ProtoDeclare().setName("ArchPrototype").setAppinfo(this.ProtoDeclare_ArchPrototype_3_13_appinfo)
      .setProtoInterface(new ProtoInterface()
        .addComments(" COLOR OF ARCH ")
        .addField(new field().setName("diffuseColor").setType("SFColor").setAccessType("inputOutput").setValue("0.2 0.8 0.8").setAppinfo("color of arch"))
        .addField(new field().setName("emissiveColor").setType("SFColor").setAccessType("inputOutput").setValue("0.2 0.8 0.8").setAppinfo("color of arch"))
        .addComments(" INPUT PARAMETERS ")
        .addComments(" General parameters: measures in meters ")
        .addField(new field().setName("clearSpanWidth").setType("SFFloat").setAccessType("initializeOnly").setValue("4").setAppinfo("clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference"))
        .addField(new field().setName("riseHeight").setType("SFFloat").setAccessType("initializeOnly").setValue("2").setAppinfo("riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference"))
        .addField(new field().setName("depth").setType("SFFloat").setAccessType("initializeOnly").setValue("3").setAppinfo("depth"))
        .addField(new field().setName("topAbutmentHeight").setType("SFFloat").setAccessType("initializeOnly").setValue("0.5").setAppinfo("topAbutmentHeight:topAbutmentHeight=0 means no topAbutment"))
        .addField(new field().setName("pierWidth").setType("SFFloat").setAccessType("initializeOnly").setValue("0.5").setAppinfo("pierWidth:pierWidtht=0 means no pierWidth"))
        .addField(new field().setName("pierHeight").setType("SFFloat").setAccessType("initializeOnly").setValue("1").setAppinfo("pierHeight: pierHeight=0 means no pierHeight"))
        .addComments(" Parameters to create to create shapes related to arch: put true to apply ")
        .addField(new field().setName("archHalf").setType("SFBool").setAccessType("initializeOnly").setValue("false").setAppinfo(this.field_archHalf_5_21_appinfo))
        .addField(new field().setName("archHalfExtensionWidth").setType("SFFloat").setAccessType("initializeOnly").setValue("0").setAppinfo(this.field_archHalfExtensionWidth_5_22_appinfo))
        .addField(new field().setName("onlyIntrados").setType("SFBool").setAccessType("initializeOnly").setValue("false").setAppinfo(this.field_onlyIntrados_5_23_appinfo))
        .addField(new field().setName("archFilled").setType("SFBool").setAccessType("initializeOnly").setValue("false").setAppinfo(this.field_archFilled_5_24_appinfo))
        .addField(new field().setName("archHalfFilled").setType("SFBool").setAccessType("initializeOnly").setValue("false").setAppinfo(this.field_archHalfFilled_5_25_appinfo))
        .addField(new field().setName("lintel").setType("SFBool").setAccessType("initializeOnly").setValue("false").setAppinfo(this.field_lintel_5_26_appinfo)))
      .setProtoBody(new ProtoBody()
        .addComments(" First node determines node type of this prototype ")
        .addComments(" IndexedFaceset creates arch ")
        .addChild(new Transform("ArchTransform")
          .addChild(new Shape("Arch")
            .addComments(" note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly ")
            .setGeometry(new IndexedFaceSet("ArchIndex").setDEF("ArchIndex").setConvex(false).setSolid(false)
              .setCoord(new Coordinate("ArchChord")))
            .setAppearance(new Appearance()
              .setMaterial(new Material("MaterialNode")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("emissiveColor").setProtoField("emissiveColor"))
                  .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor")))))))
        .addComments(" Subsequent nodes do not render, but still must be a valid X3D subgraph ")
        .addComments(" This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs ")
        .addChild(new Script("ArchPrototypeScript").setUrl(new MFString("\"../node/ArchPrototypeScript.js\" \"https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js\""))
          .addComments(" INPUT PARAMETERS ")
          .addComments(" General parameters ")
          .addComments(" Parameters to create to create shapes related to arch: put true to apply ")
          .addComments(" OUTPUT PARAMETERS ")
          .addField(new field().setName("clearSpanWidth").setType("SFFloat").setAccessType("initializeOnly").setAppinfo("user or default input for clearSpanWidth parameter"))
          .addField(new field().setName("riseHeight").setType("SFFloat").setAccessType("initializeOnly").setAppinfo("user or default input for riseHeight parameter"))
          .addField(new field().setName("depth").setType("SFFloat").setAccessType("initializeOnly").setAppinfo("user or default input for depth parameter"))
          .addField(new field().setName("topAbutmentHeight").setType("SFFloat").setAccessType("initializeOnly").setAppinfo("user or default input for topAbutmentHeight parameter"))
          .addField(new field().setName("pierWidth").setType("SFFloat").setAccessType("initializeOnly").setAppinfo("user or default input for pierWidth parameter"))
          .addField(new field().setName("pierHeight").setType("SFFloat").setAccessType("initializeOnly").setAppinfo("user or default input for pierHeight parameter"))
          .addField(new field().setName("archHalf").setType("SFBool").setAccessType("initializeOnly").setAppinfo("user or default input for archHalf parameter"))
          .addField(new field().setName("archHalfExtensionWidth").setType("SFFloat").setAccessType("initializeOnly").setAppinfo("user or default input for archHalfExtensionWidth parameter"))
          .addField(new field().setName("onlyIntrados").setType("SFBool").setAccessType("initializeOnly").setAppinfo("user or default input for onlyIntrados parameter"))
          .addField(new field().setName("archFilled").setType("SFBool").setAccessType("initializeOnly").setAppinfo("user or default input for archFilled parameter"))
          .addField(new field().setName("archHalfFilled").setType("SFBool").setAccessType("initializeOnly").setAppinfo("user or default input for archHalfFilled parameter"))
          .addField(new field().setName("lintel").setType("SFBool").setAccessType("initializeOnly").setAppinfo("user or default input for lintel parameter"))
          .addField(new field().setName("computedScale").setType("SFVec3f").setAccessType("outputOnly").setAppinfo(this.field_computedScale_6_49_appinfo))
          .addField(new field().setName("pointOut").setType("MFVec3f").setAccessType("outputOnly").setAppinfo("send computed points to the Coordinate node"))
          .addField(new field().setName("indexOut").setType("MFInt32").setAccessType("outputOnly").setAppinfo("send computed indices to the IndexedFaceSet node"))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("clearSpanWidth").setProtoField("clearSpanWidth"))
            .addConnect(new connect().setNodeField("riseHeight").setProtoField("riseHeight"))
            .addConnect(new connect().setNodeField("depth").setProtoField("depth"))
            .addConnect(new connect().setNodeField("pierWidth").setProtoField("pierWidth"))
            .addConnect(new connect().setNodeField("topAbutmentHeight").setProtoField("topAbutmentHeight"))
            .addConnect(new connect().setNodeField("pierHeight").setProtoField("pierHeight"))
            .addConnect(new connect().setNodeField("archHalf").setProtoField("archHalf"))
            .addConnect(new connect().setNodeField("archHalfExtensionWidth").setProtoField("archHalfExtensionWidth"))
            .addConnect(new connect().setNodeField("onlyIntrados").setProtoField("onlyIntrados"))
            .addConnect(new connect().setNodeField("archFilled").setProtoField("archFilled"))
            .addConnect(new connect().setNodeField("archHalfFilled").setProtoField("archHalfFilled"))
            .addConnect(new connect().setNodeField("lintel").setProtoField("lintel"))))
        .addChild(new ROUTE().setFromNode("ArchPrototypeScript").setFromField("computedScale").setToNode("ArchTransform").setToField("scale"))
        .addChild(new ROUTE().setFromNode("ArchPrototypeScript").setFromField("pointOut").setToNode("ArchChord").setToField("point"))
        .addChild(new ROUTE().setFromNode("ArchPrototypeScript").setFromField("indexOut").setToNode("ArchIndex").setToField("set_coordIndex"))))
    .addChild(new ProtoInstance("ArchInstance", "ArchPrototype")
      .addFieldValue(new fieldValue().setName("diffuseColor").setValue("0.5 0.3 0.6"))
      .addFieldValue(new fieldValue().setName("emissiveColor").setValue("0.5 0.3 0.6"))
      .addFieldValue(new fieldValue().setName("clearSpanWidth").setValue("5"))
      .addFieldValue(new fieldValue().setName("riseHeight").setValue("2.5"))
      .addFieldValue(new fieldValue().setName("depth").setValue("2"))
      .addFieldValue(new fieldValue().setName("topAbutmentHeight").setValue("0.6"))
      .addFieldValue(new fieldValue().setName("pierWidth").setValue("1"))
      .addFieldValue(new fieldValue().setName("pierHeight").setValue("2")))
    .addComments(" Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare) ")
    .addChild(new Inline("CoordinateAxes").setUrl(new MFString("\"../data/CoordinateAxes.x3d\""))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return ArchPrototype model
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
		var testObject = new ArchPrototype();
		print ("ArchPrototype execution self-validation test results: " + testObject.validateSelf());
	}
}
new ArchPrototype().main();