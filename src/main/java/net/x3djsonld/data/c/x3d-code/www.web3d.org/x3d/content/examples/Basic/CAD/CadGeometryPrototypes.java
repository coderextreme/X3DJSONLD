package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> This scene provides tool developers with X3D Amendment 1 CAD Component node prototypes, providing backwards compatibility with VRML97 and X3D v3.0. </p>
 <p> Related links: <a href="../../../CAD/CadGeometryPrototypes.java">CadGeometryPrototypes.java</a> source, <a href="../../../CAD/CadGeometryPrototypesIndex.html" target="_top">CadGeometryPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author Travis Rauch, Alan Shaffer, Mounir Sidhom, Patrick Sullivan and Don Brutzman
 */

public class CadGeometryPrototypes
{
	/** Default constructor to create this object. */
	public CadGeometryPrototypes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_1)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("CadGeometryPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This scene provides tool developers with X3D Amendment 1 CAD Component node prototypes, providing backwards compatibility with VRML97 and X3D v3.0."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Travis Rauch, Alan Shaffer, Mounir Sidhom, Patrick Sullivan and Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("28 April 2005"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("Do not use these prototypes in an up-to-date X3D browser that already provides CAD support."))
    .addMeta(new meta().setName("information").setContent("Recommended practice: avoid using these prototypes, instead use native definitions for CAD nodes using an up-to-date X3D browser."))
    .addMeta(new meta().setName("information").setContent("These scenes are not intended for regular authoring - use X3D v3.2 CAD component instead. Example scenes using these prototypes do not get support for making embdedded metadata values visible at run time, though metadata can certainly be saved in the scene file OK."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("CadGeometryExternPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/CADGeometry.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/CADInterchange.html"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("CADAssembly CADFace CADLayer CADPart IndexedQuadSet QuadSet"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" =========================================== ")
    .addChild(new WorldInfo().setTitle("CadGeometryPrototypes.x3d"))
    .addChild(new ProtoDeclare("IndexedQuadSet").setName("IndexedQuadSet").setAppinfo("The IndexedQuadSet node represents a 3D shape composed of a collection of individual quadrilaterals (quads). IndexedQuadSet uses the indices in its index field to specify the vertices of each quad from the coord field. Each quad is formed from a set of four vertices of the Coordinate node identified by four consecutive indices from the index field If the index field does not contain a multiple of four coordinate values the remaining vertices shall be ignored.").setDocumentation("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#IndexedQuadSet")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("set_index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("range [0..∞) or -1")
          .addComments(" No specific initialization value "))
        .addField(new field().setName("attrib").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DVertexAttributeNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField(new field().setName("color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DColorNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DCoordinateNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField(new field().setName("fogCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[FogCoordinate]")
          .addComments(" Specification initialization: NULL node "))
        .addField(new field().setName("normal").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DNormalNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField(new field().setName("texCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DTextureCoordinateNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField(new field().setName("ccw").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("colorPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true).setAppinfo("colorPerVertex ignored in IndexedQuadSet, and always treated as true"))
        .addField(new field().setName("normalPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("range [0..∞) or -1")
          .addComments(" No specific initialization value "))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedFaceSet("RenderedIQS").setDEF("RenderedIQS")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("attrib").setProtoField("attrib"))
            .addConnect(new connect().setNodeField("color").setProtoField("color"))
            .addConnect(new connect().setNodeField("colorPerVertex").setProtoField("colorPerVertex"))
            .addConnect(new connect().setNodeField("coord").setProtoField("coord"))
            .addConnect(new connect().setNodeField("fogCoord").setProtoField("fogCoord"))
            .addConnect(new connect().setNodeField("normal").setProtoField("normal"))
            .addConnect(new connect().setNodeField("texCoord").setProtoField("texCoord"))
            .addConnect(new connect().setNodeField("ccw").setProtoField("ccw"))
            .addConnect(new connect().setNodeField("normalPerVertex").setProtoField("normalPerVertex"))
            .addConnect(new connect().setNodeField("solid").setProtoField("solid"))))
        .addComments(" Initial node in the PROTO body is actual node type, and the only node rendered. Remaining ProtoBody nodes not rendered ")
        .addChild(new Group("UnrenderedIQS")
          .addChild(new Script("IndexedQuadSetToIndexedFaceSet").setDirectOutput(true).setSourceCode("\n" + 
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
            .addField(new field().setName("index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("set_index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("renderedIQS").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new IndexedFaceSet().setUSE("RenderedIQS")))
            .addField(new field().setName("localTraceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
            .addField(new field().setName("coordIndexNew").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addComments(" constructed during initialization "))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("index").setProtoField("index"))
              .addConnect(new connect().setNodeField("set_index").setProtoField("set_index"))))
          .addChild(new Group()
            .setMetadata(new MetadataString().setName("metadataHolder")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("metadata").setProtoField("metadata"))))))))
    .addComments(" =========================================== ")
    .addChild(new ProtoDeclare("QuadSet").setName("QuadSet").setAppinfo("The QuadSet node represents a 3D shape that represents a collection of individual planar quadrilaterals. The coord field contains a Coordinate node that defines the 3D vertices that define the quad. Each quad is formed from a consecutive set of four vertices of the coordinate node. If the coordinate node does not contain a multiple of four coordinate values the remaining vertices shall be ignored.").setDocumentation("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#QuadSet")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("attrib").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DVertexAttributeNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField(new field().setName("color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DColorNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DCoordinateNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField(new field().setName("fogCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[FogCoordinate]")
          .addComments(" Specification initialization: NULL node "))
        .addField(new field().setName("normal").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DNormalNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField(new field().setName("texCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DTextureCoordinateNode]")
          .addComments(" Specification initialization: NULL node "))
        .addField(new field().setName("ccw").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("colorPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true).setAppinfo("colorPerVertex ignored in QuadSet, and always treated as true"))
        .addField(new field().setName("normalPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedFaceSet("RenderedQS").setDEF("RenderedQS")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("attrib").setProtoField("attrib"))
            .addConnect(new connect().setNodeField("color").setProtoField("color"))
            .addConnect(new connect().setNodeField("colorPerVertex").setProtoField("colorPerVertex"))
            .addConnect(new connect().setNodeField("coord").setProtoField("coord"))
            .addConnect(new connect().setNodeField("fogCoord").setProtoField("fogCoord"))
            .addConnect(new connect().setNodeField("normal").setProtoField("normal"))
            .addConnect(new connect().setNodeField("texCoord").setProtoField("texCoord"))
            .addConnect(new connect().setNodeField("ccw").setProtoField("ccw"))
            .addConnect(new connect().setNodeField("normalPerVertex").setProtoField("normalPerVertex"))
            .addConnect(new connect().setNodeField("solid").setProtoField("solid"))))
        .addComments(" Initial node in the PROTO body is actual node type, and the only node rendered. Remaining ProtoBody nodes not rendered ")
        .addChild(new Group("UnrenderedQS")
          .addChild(new Script("QuadSetToIndexedFaceSet").setDirectOutput(true).setSourceCode("\n" + 
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
            .addField(new field().setName("index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addComments(" initialized in ecmascript "))
            .addField(new field().setName("set_index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("renderedQS").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new IndexedFaceSet().setUSE("RenderedQS")))
            .addField(new field().setName("localTraceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
            .addField(new field().setName("coordIndexNew").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addComments(" constructed during initialization ")))
          .addChild(new Group()
            .setMetadata(new MetadataString().setName("metadataHolder")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("metadata").setProtoField("metadata"))))))))
    .addComments(" ======================================== ")
    .addChild(new ProtoDeclare("CADAssembly").setName("CADAssembly").setAppinfo("The CADAssembly node holds a set of assemblies or parts grouped together.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("addChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("removeChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("The children field can contain X3DProductStructureChildNode types. Each child will be either a sub-assembly or a part.")
          .addComments(" Specification initialization: NULL node "))
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("The name field documents the name of this CADAssembly."))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)).setAppinfo("Bounding box center: position offset from origin of local coordinate system."))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0,-1.0,-1.0)).setAppinfo("Bounding box size: automatically calculated can be specified as an optimization or constraint."))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))
            .addConnect(new connect().setNodeField("children").setProtoField("children"))
            .addConnect(new connect().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connect().setNodeField("bboxSize").setProtoField("bboxSize"))))
        .addChild(new Group()
          .setMetadata(new MetadataString().setName("metadataHolder")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("metadata").setProtoField("metadata"))))
          .addComments(" name holder ")
          .addChild(new Anchor().setUrl(new String[] {"#hideWarning1"})
            .setIS(new IS()
              .addConnect(new connect().setNodeField("description").setProtoField("name")))))))
    .addComments(" ======================================== ")
    .addChild(new ProtoDeclare("ShapeHolder").setName("ShapeHolder").setAppinfo("local dummy node to hold value for CADFace")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("shape").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
          .addComments(" no initialization value ")))
      .setProtoBody(new ProtoBody()
        .addChild(new Script("HoldShapeNodeScript").setDirectOutput(true).setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"// no script code, this node is simply a container" + "\n" + 
"\n" + 
"// silence warning: no function provided that includes shape = something;" + "\n")
          .addField(new field().setName("shape").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("holder for IS field")
            .addComments(" no initialization node "))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("shape").setProtoField("shape"))))))
    .addComments(" = = = = = ")
    .addChild(new ProtoDeclare("CADFace").setName("CADFace").setAppinfo("The CADFace node holds the geometry representing a face of a part.").setDocumentation("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#CADPart")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("The name field documents the name of this CADFace."))
        .addField(new field().setName("shape").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DShapeNode | LOD]")
          .addComments(" Specification initialization: NULL node "))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)).setAppinfo("Bounding box center: position offset from origin of local coordinate system."))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0,-1.0,-1.0)).setAppinfo("Bounding box size: automatically calculated can be specified as an optimization or constraint."))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody(new ProtoBody()
        .addChild(new ProtoInstance("ShapeHolder").setContainerField("children")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("shape").setProtoField("shape"))))
        .addChild(new Group()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connect().setNodeField("bboxSize").setProtoField("bboxSize")))
          .setMetadata(new MetadataString().setName("metadataHolder")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("metadata").setProtoField("metadata"))))
          .addComments(" name holder ")
          .addChild(new Anchor().setUrl(new String[] {"#hideWarning2"})
            .setIS(new IS()
              .addConnect(new connect().setNodeField("description").setProtoField("name")))))))
    .addComments(" ======================================== ")
    .addChild(new ProtoDeclare("CADLayer").setName("CADLayer").setAppinfo("The CADLayer node defines a hierarchy of nodes used for showing layer structure.").setDocumentation("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#CADPart")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("addChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("removeChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("The children field can contain X3DChildNode types.")
          .addComments(" Specification initialization: NULL node "))
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("The name field documents the name of this CADLayer."))
        .addField(new field().setName("visible").setType(field.TYPE_MFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("specifies whether a particular child and its subchildren are visible. If the number of values is less than the number of children the remaining children shall be visible."))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)).setAppinfo("Bounding box center: position offset from origin of local coordinate system."))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0,-1.0,-1.0)).setAppinfo("Bounding box size: automatically calculated can be specified as an optimization or constraint."))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))
            .addConnect(new connect().setNodeField("children").setProtoField("children"))
            .addConnect(new connect().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connect().setNodeField("bboxSize").setProtoField("bboxSize"))))
        .addChild(new Group()
          .setMetadata(new MetadataString().setName("metadataHolder")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("metadata").setProtoField("metadata"))))
          .addComments(" name holder ")
          .addChild(new Anchor().setUrl(new String[] {"#hideWarning3"})
            .setIS(new IS()
              .addConnect(new connect().setNodeField("description").setProtoField("name")))))
        .addChild(new Script("HoldMFBoolFieldScript").setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"// no script code, this node is simply a container" + "\n")
          .addField(new field().setName("visible").setType(field.TYPE_MFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
            .addComments(" no initialization node "))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("visible").setProtoField("visible"))))
        .addComments(" No support for MFBool in VRML97, so no functionality provided for visible ")))
    .addComments(" ======================================== ")
    .addChild(new ProtoDeclare("CADPart").setName("CADPart").setAppinfo("CADPart represents the location and faces that constitute apart").setDocumentation("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#CADPart")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("addChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("removeChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("The children field can only contain CADFace nodes.")
          .addComments(" Specification initialization: NULL node "))
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("scale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(1.0,1.0,1.0)))
        .addField(new field().setName("scaleOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0,-1.0,-1.0)))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("children").setProtoField("children"))
            .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))
            .addConnect(new connect().setNodeField("translation").setProtoField("translation"))
            .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connect().setNodeField("center").setProtoField("center"))
            .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connect().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connect().setNodeField("bboxSize").setProtoField("bboxSize"))))
        .addChild(new Group()
          .setMetadata(new MetadataString().setName("metadataHolder")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("metadata").setProtoField("metadata"))))
          .addComments(" name holder ")
          .addChild(new Anchor().setUrl(new String[] {"#hideWarning4"})
            .setIS(new IS()
              .addConnect(new connect().setNodeField("description").setProtoField("name")))))))
    .addComments(" ======================================== ")
    .addChild(new Anchor().setDescription("CadGeometryExternPrototypes").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"CadGeometryExternPrototypes.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CadGeometryExternPrototypes.x3d","CadGeometryExternPrototypes.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CadGeometryExternPrototypes.wrl"})
      .addChild(new Shape()
        .setGeometry(new Text().setString(new String[] {"CadGeometryExternPrototypes","defines prototype examples","","Click text to see","CadGeometryExternPrototypes"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.9)))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.2)))))
    .addComments(" ======================================== ")
    .addChild(new Transform().setTranslation(-3.0,2.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance("White")
          .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
        .setGeometry(new ProtoInstance("IndexedQuadSet").setContainerField("geometry")
          .addFieldValue(new fieldValue().setName("index").setValue(new int[] {0,3,2,1,4,5,6,7,2,7,9,8,2,3,4,7}))
          .addFieldValue(new fieldValue().setName("coord")
            .addChild(new Coordinate().setPoint(new MFVec3f(new double[] {-1.5,0.0,0.0,-1.5,1.0,-1.0,-.5,1.0,-1.0,-.5,0.0,0.0,0.5,0.0,0.0,1.5,0.0,0.0,1.5,1.0,-1.0,0.5,1.0,-1.0,-0.5,2.0,-1.0,0.5,2.0,-1.0})))))))
    .addChild(new Transform().setTranslation(3.0,2.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance().setUSE("White"))
        .setGeometry(new ProtoInstance("QuadSet").setContainerField("geometry")
          .addFieldValue(new fieldValue().setName("coord")
            .addChild(new Coordinate().setPoint(new MFVec3f(new double[] {-1.5,0.0,0.0,-1.5,1.0,-1.0,-0.5,1.0,-1.0,-0.5,0.0,0.0,0.5,0.0,0.0,1.5,0.0,0.0,1.5,1.0,-1.0,0.5,1.0,-1.0})))))))
    .addComments(" ======================================== ")
    .addComments(" Silence scene warnings by providing ordered ProtoInstance examples. Note warning above that this scene is for developmental use. The ProtoInstance form of the CAD nodes should not be used, native X3D encoding should be used instead. ")
    .addChild(new ProtoInstance("CADLayer").setContainerField("children")
      .addFieldValue(new fieldValue().setName("children")
        .addChild(new ProtoInstance("CADAssembly").setContainerField("children")
          .addFieldValue(new fieldValue().setName("children")
            .addChild(new ProtoInstance("CADPart").setContainerField("children")
              .addFieldValue(new fieldValue().setName("children")
                .addChild(new ProtoInstance("CADFace").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("shape")
                    .addChild(new Shape()
                      .setGeometry(new Cylinder().setBottom(false).setHeight(0.000001).setRadius(0.000001).setSide(false))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material()))))))))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return CadGeometryPrototypes model
	 */
	public X3D getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** 
	 * Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#handleArguments-java.lang.String:A-">X3D.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#validationReport--">X3D.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3D thisExampleX3dModel = new CadGeometryPrototypes().getX3dModel();

		boolean hasArguments = (args != null) && (args.length > 0);
		boolean validate = true; // default
		boolean argumentsLoadNewModel = false;
		String  fileName = new String();

		if (args != null)
		{
			for (String arg : args)
			{
				if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
				{
					validate = true; // making sure
				}
				if (arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"net.x3djsonld.data.CadGeometryPrototypes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.CadGeometryPrototypes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
