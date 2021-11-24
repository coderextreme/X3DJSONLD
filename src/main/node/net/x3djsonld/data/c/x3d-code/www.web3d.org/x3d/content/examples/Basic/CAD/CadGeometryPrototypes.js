var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('./X3Dautoclass');

// Javadoc annotations follow, see below for source.
/**
 * <p> This scene provides tool developers with X3D Amendment 1 CAD Component node prototypes, providing backwards compatibility with VRML97 and X3D v3.0. </p>
 <p> Related links: <a href="../../../CAD/CadGeometryPrototypes.java">CadGeometryPrototypes.java</a> source, <a href="../../../CAD/CadGeometryPrototypesIndex.html" target="_top">CadGeometryPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../CAD/CadGeometryPrototypes.x3d">CadGeometryPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This scene provides tool developers with X3D Amendment 1 CAD Component node prototypes, providing backwards compatibility with VRML97 and X3D v3.0. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Travis Rauch, Alan Shaffer, Mounir Sidhom, Patrick Sullivan and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 28 April 2005 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Do not use these prototypes in an up-to-date X3D browser that already provides CAD support. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> information </i> </td>
			<td> Recommended practice: avoid using these prototypes, instead use native definitions for CAD nodes using an up-to-date X3D browser. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> information </i> </td>
			<td> These scenes are not intended for regular authoring - use X3D v3.2 CAD component instead. Example scenes using these prototypes do not get support for making embdedded metadata values visible at run time, though metadata can certainly be saved in the scene file OK. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../CAD/CadGeometryExternPrototypes.x3d">CadGeometryExternPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/CADGeometry.html" target="_blank">https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/CADGeometry.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/CADInterchange.html" target="_blank">https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/CADInterchange.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> CADAssembly CADFace CADLayer CADPart IndexedQuadSet QuadSet </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../CAD/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
	</p>

	* @author Travis Rauch, Alan Shaffer, Mounir Sidhom, Patrick Sullivan and Don Brutzman
 */

function CadGeometryPrototypes
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
CadGeometryPrototypes.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: ProtoDeclare appinfo field, scene-graph level=3, element #18, 76 total values */
	this.ProtoDeclare_IndexedQuadSet_3_18_appinfo = new autoclass.SFString("The IndexedQuadSet node represents a 3D shape composed of a collection of individual quadrilaterals (quads). IndexedQuadSet uses the indices in its index field to specify the vertices of each quad from the coord field. Each quad is formed from a set of four vertices of the Coordinate node identified by four consecutive indices from the index field If the index field does not contain a multiple of four coordinate values the remaining vertices shall be ignored.");

	/** Large attribute array: ProtoDeclare documentation field, scene-graph level=3, element #18, 1 total value */
	this.ProtoDeclare_IndexedQuadSet_3_18_documentation = new autoclass.SFString("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#IndexedQuadSet");

	/** Large attribute array: ProtoDeclare appinfo field, scene-graph level=3, element #61, 65 total values */
	this.ProtoDeclare_QuadSet_3_61_appinfo = new autoclass.SFString("The QuadSet node represents a 3D shape that represents a collection of individual planar quadrilaterals. The coord field contains a Coordinate node that defines the 3D vertices that define the quad. Each quad is formed from a consecutive set of four vertices of the coordinate node. If the coordinate node does not contain a multiple of four coordinate values the remaining vertices shall be ignored.");

	/** Large attribute array: ProtoDeclare documentation field, scene-graph level=3, element #61, 1 total value */
	this.ProtoDeclare_QuadSet_3_61_documentation = new autoclass.SFString("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#QuadSet");

	/** Large attribute array: field appinfo field, scene-graph level=5, element #101, 17 total values */
	this.field_children_5_101_appinfo = new autoclass.SFString("The children field can contain X3DProductStructureChildNode types. Each child will be either a sub-assembly or a part.");

	/** Large attribute array: ProtoDeclare documentation field, scene-graph level=3, element #131, 1 total value */
	this.ProtoDeclare_CADFace_3_131_documentation = new autoclass.SFString("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#CADPart");

	/** Large attribute array: ProtoDeclare documentation field, scene-graph level=3, element #152, 1 total value */
	this.ProtoDeclare_CADLayer_3_152_documentation = new autoclass.SFString("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#CADPart");

	/** Large attribute array: field appinfo field, scene-graph level=5, element #156, 28 total values */
	this.field_visible_5_156_appinfo = new autoclass.SFString("specifies whether a particular child and its subchildren are visible. If the number of values is less than the number of children the remaining children shall be visible.");

	/** Large attribute array: ProtoDeclare documentation field, scene-graph level=3, element #181, 1 total value */
	this.ProtoDeclare_CADPart_3_181_documentation = new autoclass.SFString("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#CADPart");

	/** Large attribute array: Text string field, scene-graph level=5, element #215, 10 total values */
	this.Text_5_215_string = new autoclass.MFString(new autoclass.MFString("\"CadGeometryExternPrototypes\" \"defines prototype examples\" \"\" \"Click text to see\" \"CadGeometryExternPrototypes\""));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.1")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("CadGeometryPrototypes.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("This scene provides tool developers with X3D Amendment 1 CAD Component node prototypes, providing backwards compatibility with VRML97 and X3D v3.0."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Travis Rauch, Alan Shaffer, Mounir Sidhom, Patrick Sullivan and Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("28 April 2005"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("Do not use these prototypes in an up-to-date X3D browser that already provides CAD support."))
    .addMeta((new autoclass.meta()).setName("information").setContent("Recommended practice: avoid using these prototypes, instead use native definitions for CAD nodes using an up-to-date X3D browser."))
    .addMeta((new autoclass.meta()).setName("information").setContent("These scenes are not intended for regular authoring - use X3D v3.2 CAD component instead. Example scenes using these prototypes do not get support for making embdedded metadata values visible at run time, though metadata can certainly be saved in the scene file OK."))
    .addMeta((new autoclass.meta()).setName("reference").setContent("CadGeometryExternPrototypes.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/CADGeometry.html"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/CADInterchange.html"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("CADAssembly CADFace CADLayer CADPart IndexedQuadSet QuadSet"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addComments(" =========================================== ")
    .addChild((new autoclass.WorldInfo()).setTitle("CadGeometryPrototypes.x3d"))
    .addChild((new autoclass.ProtoDeclare()).setName("IndexedQuadSet").setAppinfo(this.ProtoDeclare_IndexedQuadSet_3_18_appinfo).setDocumentation(this.ProtoDeclare_IndexedQuadSet_3_18_documentation)
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_index").setType("MFInt32").setAppinfo("range [0..∞) or -1")
          .addComments(" No specific initialization value "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("attrib").setType("MFNode").setAppinfo("[X3DVertexAttributeNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("color").setType("SFNode").setAppinfo("[X3DColorNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("coord").setType("SFNode").setAppinfo("[X3DCoordinateNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("fogCoord").setType("SFNode").setAppinfo("[FogCoordinate]")
          .addComments(" Specification initialization: NULL node "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("normal").setType("SFNode").setAppinfo("[X3DNormalNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("texCoord").setType("SFNode").setAppinfo("[X3DTextureCoordinateNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("ccw").setType("SFBool").setValue("true"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("colorPerVertex").setType("SFBool").setValue("true").setAppinfo("colorPerVertex ignored in IndexedQuadSet, and always treated as true"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("normalPerVertex").setType("SFBool").setValue("true"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool").setValue("true"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("index").setType("MFInt32").setAppinfo("range [0..∞) or -1")
          .addComments(" No specific initialization value "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.IndexedFaceSet("RenderedIQS")).setDEF("RenderedIQS")
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("attrib").setProtoField("attrib"))
            .addConnect((new autoclass.connect()).setNodeField("color").setProtoField("color"))
            .addConnect((new autoclass.connect()).setNodeField("colorPerVertex").setProtoField("colorPerVertex"))
            .addConnect((new autoclass.connect()).setNodeField("coord").setProtoField("coord"))
            .addConnect((new autoclass.connect()).setNodeField("fogCoord").setProtoField("fogCoord"))
            .addConnect((new autoclass.connect()).setNodeField("normal").setProtoField("normal"))
            .addConnect((new autoclass.connect()).setNodeField("texCoord").setProtoField("texCoord"))
            .addConnect((new autoclass.connect()).setNodeField("ccw").setProtoField("ccw"))
            .addConnect((new autoclass.connect()).setNodeField("normalPerVertex").setProtoField("normalPerVertex"))
            .addConnect((new autoclass.connect()).setNodeField("solid").setProtoField("solid"))))
        .addComments(" Initial node in the PROTO body is actual node type, and the only node rendered. Remaining ProtoBody nodes not rendered ")
        .addChild((new autoclass.Group("UnrenderedIQS"))
          .addChild((new autoclass.Script("IndexedQuadSetToIndexedFaceSet")).setDirectOutput(true).setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"	//colorPerVertex ignored in IndexedQuadSet, and always treated as \"true\"\n" + 
"	RenderedIQS.colorPerVertex = true;" + "\n" + 
"\n" + 
"	// index is an array of quad indices. The ordering of" + "\n" + 
"	// the vertices is ccw (counter-clockwise)." + "\n" + 
"\n" + 
"	// ensure legal index values" + "\n" + 
"	for (ii=0; ii <= index.length-1; ii++)" + "\n" + 
"	{" + "\n" + 
"	  if (index[ii] < -1)" + "\n" + 
"	  {" + "\n" + 
"		alwaysPrint ('error, index[' + ii + ']=' + index[ii] + ' is illegal value');" + "\n" + 
"		return;" + "\n" + 
"	  }" + "\n" + 
"	}" + "\n" + 
"	tracePrint ('index.length=' + index.length);" + "\n" + 
"	tracePrint ('index=' + index);" + "\n" + 
"\n" + 
"	if (index.length < 4)" + "\n" + 
"	{" + "\n" + 
"		alwaysPrint ('warning, index.length=' + index.length + ' insufficient to construct a quad, IQS ignored');" + "\n" + 
"		return;" + "\n" + 
"	}" + "\n" + 
"\n" + 
"	coordIndexNew = new MFInt32 ();" + "\n" + 
"\n" + 
"	// ii walks through index array," + "\n" + 
"	// goal is to initialize coordIndexNew list to match quads" + "\n" + 
"	for (ii=0; ii <= index.length-1; ii+=4)" + "\n" + 
"	{" + "\n" + 
"		if ((index[ii]   == index[ii+1]) || (index[ii]   == index[ii+2]) || (index[ii] == index[ii+3]) ||" + "\n" + 
"		    (index[ii+1] == index[ii+2]) || (index[ii+1] == index[ii+3]) ||" + "\n" + 
"		    (index[ii+2] == index[ii+3]))" + "\n" + 
"		{" + "\n" + 
"			alwaysPrint ('index=' + index);" + "\n" + 
"			alwaysPrint ('error, pair of equal indices in quad');" + "\n" + 
"			return;" + "\n" + 
"		}" + "\n" + 
"\n" + 
"		if (index[ii] >= 0)" + "\n" + 
"		{" + "\n" + 
"			// add another quad from latest 4 points of fan set to IQS" + "\n" + 
"			// order is ccw, i.e. in correct halfplane direction" + "\n" + 
"			// note: there is an implicit \"malloc\" here for the'length' element of the array" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = index[ii];" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = index[ii+1];" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = index[ii+2];" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = index[ii+3];" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = -1;" + "\n" + 
"		}" + "\n" + 
"\n" + 
"		if (index.length % 4 != 0) {" + "\n" + 
"			alwaysPrint ('error, index field does not contain a multiple of four coordinate values.');" + "\n" + 
"			alwaysPrint ('The remaining vertices shall be ignored');" + "\n" + 
"			return;" + "\n" + 
"		}" + "\n" + 
"\n" + 
"	  // incremental trace of array being built" + "\n" + 
"	  tracePrint ('coordIndexNew=' + coordIndexNew);" + "\n" + 
"	}" + "\n" + 
"	renderedIQS.set_coordIndex = coordIndexNew;" + "\n" + 
"	tracePrint ('renderedIQS.coordIndex=' + renderedIQS.coordIndex);" + "\n" + 
"	// match colorIndex if any Color node exists" + "\n" + 
"//	if (nodesHolder.color)" + "\n" + 
"//	{" + "\n" + 
"//	  if (nodesHolder.color.color.length > 0)" + "\n" + 
"//	  {" + "\n" + 
"		//  Could implement color count check here" + "\n" + 
"//	  }" + "\n" + 
"//	}" + "\n" + 
"\n" + 
"	// no need to set colorIndex since indexedFaceSet semantics handles this" + "\n" + 
"}" + "\n" + 
"function set_index (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	index = value;" + "\n" + 
"	initialize ();" + "\n" + 
"}" + "\n" + 
"function tracePrint(outputString)" + "\n" + 
"{" + "\n" + 
"    if (localTraceEnabled)" + "\n" + 
"	  Browser.print ('[IndexedQuadSet]' + outputString);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint(outputString)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('[IndexedQuadSet]' + outputString);" + "\n" + 
"}" + "\n")
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("index").setType("MFInt32"))
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_index").setType("MFInt32"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("renderedIQS").setType("SFNode")
              .addChild((new autoclass.IndexedFaceSet()).setUSE("RenderedIQS")))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("localTraceEnabled").setType("SFBool").setValue("true"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("coordIndexNew").setType("MFInt32")
              .addComments(" constructed during initialization "))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("index").setProtoField("index"))
              .addConnect((new autoclass.connect()).setNodeField("set_index").setProtoField("set_index"))))
          .addChild((new autoclass.Group())
            .setMetadata((new autoclass.MetadataString()).setName("metadataHolder")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("metadata").setProtoField("metadata"))))))))
    .addComments(" =========================================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("QuadSet").setAppinfo(this.ProtoDeclare_QuadSet_3_61_appinfo).setDocumentation(this.ProtoDeclare_QuadSet_3_61_documentation)
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("attrib").setType("MFNode").setAppinfo("[X3DVertexAttributeNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("color").setType("SFNode").setAppinfo("[X3DColorNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("coord").setType("SFNode").setAppinfo("[X3DCoordinateNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("fogCoord").setType("SFNode").setAppinfo("[FogCoordinate]")
          .addComments(" Specification initialization: NULL node "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("normal").setType("SFNode").setAppinfo("[X3DNormalNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("texCoord").setType("SFNode").setAppinfo("[X3DTextureCoordinateNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("ccw").setType("SFBool").setValue("true"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("colorPerVertex").setType("SFBool").setValue("true").setAppinfo("colorPerVertex ignored in QuadSet, and always treated as true"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("normalPerVertex").setType("SFBool").setValue("true"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool").setValue("true"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.IndexedFaceSet("RenderedQS")).setDEF("RenderedQS")
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("attrib").setProtoField("attrib"))
            .addConnect((new autoclass.connect()).setNodeField("color").setProtoField("color"))
            .addConnect((new autoclass.connect()).setNodeField("colorPerVertex").setProtoField("colorPerVertex"))
            .addConnect((new autoclass.connect()).setNodeField("coord").setProtoField("coord"))
            .addConnect((new autoclass.connect()).setNodeField("fogCoord").setProtoField("fogCoord"))
            .addConnect((new autoclass.connect()).setNodeField("normal").setProtoField("normal"))
            .addConnect((new autoclass.connect()).setNodeField("texCoord").setProtoField("texCoord"))
            .addConnect((new autoclass.connect()).setNodeField("ccw").setProtoField("ccw"))
            .addConnect((new autoclass.connect()).setNodeField("normalPerVertex").setProtoField("normalPerVertex"))
            .addConnect((new autoclass.connect()).setNodeField("solid").setProtoField("solid"))))
        .addComments(" Initial node in the PROTO body is actual node type, and the only node rendered. Remaining ProtoBody nodes not rendered ")
        .addChild((new autoclass.Group("UnrenderedQS"))
          .addChild((new autoclass.Script("QuadSetToIndexedFaceSet")).setDirectOutput(true).setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"	//colorPerVertex ignored in QuadSet, and always treated as \"true\"\n" + 
"	RenderedQS.colorPerVertex = true;" + "\n" + 
"\n" + 
"	// calculate index value from QuadSet coord values" + "\n" + 
"	if (renderedQS.coord)" + "\n" + 
"	{" + "\n" + 
"		numberOfCoordinatePoints = renderedQS.coord.point.length;" + "\n" + 
"	}" + "\n" + 
"	else" + "\n" + 
"	{" + "\n" + 
"		tracePrint ('no Coordinate node found');" + "\n" + 
"		return;" + "\n" + 
"	}" + "\n" + 
"	if (numberOfCoordinatePoints < 4)" + "\n" + 
"	{" + "\n" + 
"		alwaysPrint ('warning, numberOfCoordinatePoints=' + numberOfCoordinatePoints + ' insufficient to construct a quad, QuadSet ignored');" + "\n" + 
"		return;" + "\n" + 
"	}" + "\n" + 
"\n" + 
"	coordIndexNew = new MFInt32 ();" + "\n" + 
"\n" + 
"	// ii walks through index array," + "\n" + 
"	// goal is to initialize coordIndexNew list to match quads" + "\n" + 
"	for (ii=0; ii <= numberOfCoordinatePoints-1; ii+=4)" + "\n" + 
"	{" + "\n" + 
"		// check if at least 4 vertices remaining to build a quad" + "\n" + 
"		if ((numberOfCoordinatePoints - ii) < 4)" + "\n" + 
"		{" + "\n" + 
"			alwaysPrint ('error, index field does not contain a multiple' +" + "\n" + 
"' of four coordinate values.');" + "\n" + 
"			alwaysPrint ('The remaining vertices shall be ignored');" + "\n" + 
"			return;" + "\n" + 
"		}" + "\n" + 
"\n" + 
"		if ((index[ii]   == index[ii+1]) || (index[ii]   == index[ii+2]) || (index[ii] == index[ii+3]) ||" + "\n" + 
"		    (index[ii+1] == index[ii+2]) || (index[ii+1] == index[ii+3]) ||" + "\n" + 
"		    (index[ii+2] == index[ii+3]))" + "\n" + 
"		{" + "\n" + 
"			alwaysPrint ('index=' + index);" + "\n" + 
"			alwaysPrint ('error, pair of equal indices in quad');" + "\n" + 
"			return;" + "\n" + 
"		}" + "\n" + 
"\n" + 
"		if (index[ii] >= 0)" + "\n" + 
"		{" + "\n" + 
"			// add another quad from latest 4 points of fan set to QS" + "\n" + 
"			// order is ccw, i.e. in correct halfplane direction" + "\n" + 
"			// note: there is an implicit \"malloc\" here for the'length' element of the array" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = index[ii];" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = index[ii+1];" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = index[ii+2];" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = index[ii+3];" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = -1;" + "\n" + 
"		}" + "\n" + 
"\n" + 
"	  // incremental trace of array being built" + "\n" + 
"	  tracePrint ('coordIndexNew=' + coordIndexNew);" + "\n" + 
"	}" + "\n" + 
"	renderedQS.set_coordIndex = coordIndexNew;" + "\n" + 
"	tracePrint ('renderedQS.coordIndex=' + renderedQS.coordIndex);" + "\n" + 
"	// match colorIndex if any Color node exists" + "\n" + 
"//	if (nodesHolder.color)" + "\n" + 
"//	{" + "\n" + 
"//	  if (nodesHolder.color.color.length > 0)" + "\n" + 
"//	  {" + "\n" + 
"		//  Could implement color count check here" + "\n" + 
"//	  }" + "\n" + 
"//	}" + "\n" + 
"\n" + 
"	// no need to set colorIndex since indexedFaceSet semantics handles this" + "\n" + 
"}" + "\n" + 
"function set_index (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	index = value;" + "\n" + 
"	initialize ();" + "\n" + 
"}" + "\n" + 
"function tracePrint(outputString)" + "\n" + 
"{" + "\n" + 
"    if (localTraceEnabled)" + "\n" + 
"	  Browser.print ('[IndexedQuadSet]' + outputString);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint(outputString)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('[IndexedQuadSet]' + outputString);" + "\n" + 
"}" + "\n")
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("index").setType("MFInt32")
              .addComments(" initialized in ecmascript "))
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_index").setType("MFInt32"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("renderedQS").setType("SFNode")
              .addChild((new autoclass.IndexedFaceSet()).setUSE("RenderedQS")))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("localTraceEnabled").setType("SFBool").setValue("true"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("coordIndexNew").setType("MFInt32")
              .addComments(" constructed during initialization ")))
          .addChild((new autoclass.Group())
            .setMetadata((new autoclass.MetadataString()).setName("metadataHolder")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("metadata").setProtoField("metadata"))))))))
    .addComments(" ======================================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("CADAssembly").setAppinfo("The CADAssembly node holds a set of assemblies or parts grouped together.")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("addChildren").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("removeChildren").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("children").setType("MFNode").setAppinfo(this.field_children_5_101_appinfo)
          .addComments(" Specification initialization: NULL node "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString").setAppinfo("The name field documents the name of this CADAssembly."))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxCenter").setType("SFVec3f").setValue("0 0 0").setAppinfo("Bounding box center: position offset from origin of local coordinate system."))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxSize").setType("SFVec3f").setValue("-1 -1 -1").setAppinfo("Bounding box size: automatically calculated can be specified as an optimization or constraint."))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Group())
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect((new autoclass.connect()).setNodeField("removeChildren").setProtoField("removeChildren"))
            .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("children"))
            .addConnect((new autoclass.connect()).setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect((new autoclass.connect()).setNodeField("bboxSize").setProtoField("bboxSize"))))
        .addChild((new autoclass.Group())
          .setMetadata((new autoclass.MetadataString()).setName("metadataHolder")
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("metadata").setProtoField("metadata"))))
          .addComments(" name holder ")
          .addChild((new autoclass.Anchor()).setUrl(new autoclass.MFString("\"#hideWarning1\""))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("description").setProtoField("name")))))))
    .addComments(" ======================================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("ShapeHolder").setAppinfo("local dummy node to hold value for CADFace")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("shape").setType("SFNode")
          .addComments(" no initialization value ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Script("HoldShapeNodeScript")).setDirectOutput(true).setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"// no script code, this node is simply a container" + "\n" + 
"\n" + 
"// silence warning: no function provided that includes shape = something;" + "\n")
          .addField((new autoclass.field()).setAccessType("inputOutput").setName("shape").setType("SFNode").setAppinfo("holder for IS field")
            .addComments(" no initialization node "))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("shape").setProtoField("shape"))))))
    .addComments(" = = = = = ")
    .addChild((new autoclass.ProtoDeclare()).setName("CADFace").setAppinfo("The CADFace node holds the geometry representing a face of a part.").setDocumentation(this.ProtoDeclare_CADFace_3_131_documentation)
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString").setAppinfo("The name field documents the name of this CADFace."))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("shape").setType("SFNode").setAppinfo("[X3DShapeNode | LOD]")
          .addComments(" Specification initialization: NULL node "))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxCenter").setType("SFVec3f").setValue("0 0 0").setAppinfo("Bounding box center: position offset from origin of local coordinate system."))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxSize").setType("SFVec3f").setValue("-1 -1 -1").setAppinfo("Bounding box size: automatically calculated can be specified as an optimization or constraint."))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.ProtoInstance()).setName("ShapeHolder")
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("shape").setProtoField("shape"))))
        .addChild((new autoclass.Group())
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect((new autoclass.connect()).setNodeField("bboxSize").setProtoField("bboxSize")))
          .setMetadata((new autoclass.MetadataString()).setName("metadataHolder")
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("metadata").setProtoField("metadata"))))
          .addComments(" name holder ")
          .addChild((new autoclass.Anchor()).setUrl(new autoclass.MFString("\"#hideWarning2\""))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("description").setProtoField("name")))))))
    .addComments(" ======================================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("CADLayer").setAppinfo("The CADLayer node defines a hierarchy of nodes used for showing layer structure.").setDocumentation(this.ProtoDeclare_CADLayer_3_152_documentation)
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("addChildren").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("removeChildren").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("children").setType("MFNode").setAppinfo("The children field can contain X3DChildNode types.")
          .addComments(" Specification initialization: NULL node "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString").setAppinfo("The name field documents the name of this CADLayer."))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("visible").setType("MFBool").setAppinfo(this.field_visible_5_156_appinfo))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxCenter").setType("SFVec3f").setValue("0 0 0").setAppinfo("Bounding box center: position offset from origin of local coordinate system."))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxSize").setType("SFVec3f").setValue("-1 -1 -1").setAppinfo("Bounding box size: automatically calculated can be specified as an optimization or constraint."))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Group())
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect((new autoclass.connect()).setNodeField("removeChildren").setProtoField("removeChildren"))
            .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("children"))
            .addConnect((new autoclass.connect()).setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect((new autoclass.connect()).setNodeField("bboxSize").setProtoField("bboxSize"))))
        .addChild((new autoclass.Group())
          .setMetadata((new autoclass.MetadataString()).setName("metadataHolder")
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("metadata").setProtoField("metadata"))))
          .addComments(" name holder ")
          .addChild((new autoclass.Anchor()).setUrl(new autoclass.MFString("\"#hideWarning3\""))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("description").setProtoField("name")))))
        .addChild((new autoclass.Script("HoldMFBoolFieldScript")).setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"// no script code, this node is simply a container" + "\n")
          .addField((new autoclass.field()).setAccessType("inputOutput").setName("visible").setType("MFBool")
            .addComments(" no initialization node "))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("visible").setProtoField("visible"))))
        .addComments(" No support for MFBool in VRML97, so no functionality provided for visible ")))
    .addComments(" ======================================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("CADPart").setAppinfo("CADPart represents the location and faces that constitute apart").setDocumentation(this.ProtoDeclare_CADPart_3_181_documentation)
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("addChildren").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("removeChildren").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("children").setType("MFNode").setAppinfo("The children field can only contain CADFace nodes.")
          .addComments(" Specification initialization: NULL node "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("rotation").setType("SFRotation").setValue("0 0 1 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("center").setType("SFVec3f").setValue("0 0 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("scale").setType("SFVec3f").setValue("1 1 1"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("scaleOrientation").setType("SFRotation").setValue("0 0 1 0"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxCenter").setType("SFVec3f").setValue("0 0 0"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxSize").setType("SFVec3f").setValue("-1 -1 -1"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform())
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("children"))
            .addConnect((new autoclass.connect()).setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect((new autoclass.connect()).setNodeField("removeChildren").setProtoField("removeChildren"))
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("translation"))
            .addConnect((new autoclass.connect()).setNodeField("rotation").setProtoField("rotation"))
            .addConnect((new autoclass.connect()).setNodeField("center").setProtoField("center"))
            .addConnect((new autoclass.connect()).setNodeField("scale").setProtoField("scale"))
            .addConnect((new autoclass.connect()).setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect((new autoclass.connect()).setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect((new autoclass.connect()).setNodeField("bboxSize").setProtoField("bboxSize"))))
        .addChild((new autoclass.Group())
          .setMetadata((new autoclass.MetadataString()).setName("metadataHolder")
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("metadata").setProtoField("metadata"))))
          .addComments(" name holder ")
          .addChild((new autoclass.Anchor()).setUrl(new autoclass.MFString("\"#hideWarning4\""))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("description").setProtoField("name")))))))
    .addComments(" ======================================== ")
    .addChild((new autoclass.Anchor()).setDescription("CadGeometryExternPrototypes").setParameter(new autoclass.MFString("\"target=_blank\"")).setUrl(new autoclass.MFString("\"CadGeometryExternPrototypes.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CadGeometryExternPrototypes.x3d\" \"CadGeometryExternPrototypes.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CadGeometryExternPrototypes.wrl\""))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text()).setString(this.Text_5_215_string)
          .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.9)))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.2)))))
    .addComments(" ======================================== ")
    .addChild((new autoclass.Transform()).setTranslation(-3.0,2.0,0.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance("White"))
          .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,1.0)))
        .setGeometry((new autoclass.ProtoInstance()).setName("IndexedQuadSet")
          .addFieldValue((new autoclass.fieldValue()).setName("index").setValue("0 3 2 1 4 5 6 7 2 7 9 8 2 3 4 7"))
          .addFieldValue((new autoclass.fieldValue()).setName("coord")
            .addChild((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-1.5,0.0,0.0,-1.5,1.0,-1.0,-.5,1.0,-1.0,-.5,0.0,0.0,0.5,0.0,0.0,1.5,0.0,0.0,1.5,1.0,-1.0,0.5,1.0,-1.0,-0.5,2.0,-1.0,0.5,2.0,-1.0]))))))))
    .addChild((new autoclass.Transform()).setTranslation(3.0,2.0,0.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance()).setUSE("White"))
        .setGeometry((new autoclass.ProtoInstance()).setName("QuadSet")
          .addFieldValue((new autoclass.fieldValue()).setName("coord")
            .addChild((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-1.5,0.0,0.0,-1.5,1.0,-1.0,-0.5,1.0,-1.0,-0.5,0.0,0.0,0.5,0.0,0.0,1.5,0.0,0.0,1.5,1.0,-1.0,0.5,1.0,-1.0]))))))))
    .addComments(" ======================================== ")
    .addComments(" Silence scene warnings by providing ordered ProtoInstance examples. Note warning above that this scene is for developmental use. The ProtoInstance form of the CAD nodes should not be used, native X3D encoding should be used instead. ")
    .addChild((new autoclass.ProtoInstance()).setName("CADLayer")
      .addFieldValue((new autoclass.fieldValue()).setName("children")
        .addChild((new autoclass.ProtoInstance()).setName("CADAssembly")
          .addFieldValue((new autoclass.fieldValue()).setName("children")
            .addChild((new autoclass.ProtoInstance()).setName("CADPart")
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild((new autoclass.ProtoInstance()).setName("CADFace")
                  .addFieldValue((new autoclass.fieldValue()).setName("shape")
                    .addChild((new autoclass.Shape())
                      .setGeometry((new autoclass.Cylinder()).setHeight(0.000001).setRadius(0.000001).setBottom(false).setSide(false))
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material())))))))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return CadGeometryPrototypes model
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
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = "";
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
		var testObject = new CadGeometryPrototypes();
		console.log ("CadGeometryPrototypes execution self-validation test results: " + testObject.validateSelf());
	}
}
new CadGeometryPrototypes().main();
process.exit(0);