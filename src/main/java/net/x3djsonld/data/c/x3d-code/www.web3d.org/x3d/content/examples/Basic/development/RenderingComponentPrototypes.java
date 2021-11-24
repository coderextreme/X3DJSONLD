package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Prototype implementations of X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet) implemented as prototypes for backwards compatibility with VRML 97. </p>
 <p> Related links: <a href="../../../development/RenderingComponentPrototypes.java">RenderingComponentPrototypes.java</a> source, <a href="../../../development/RenderingComponentPrototypesIndex.html" target="_top">RenderingComponentPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/RenderingComponentPrototypes.x3d">RenderingComponentPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Prototype implementations of X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet) implemented as prototypes for backwards compatibility with VRML 97. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> X3dToVrml97.xslt translation stylesheet automatically invokes these prototypes upon encountering any new Rendering nodes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman, George Dabrowski, Ken Curtin, Duane Davis, Christos Kalogrias </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 17 November 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/RenderingComponentExamples.x3d">RenderingComponentExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/RenderingComponentExternProtoDefinitions.x3d">RenderingComponentExternProtoDefinitions.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rendering.html" target="_blank">https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rendering.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter13-PointsLinesFaces/Figure13.11IndexedLineSetBoxWireframe.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter13-PointsLinesFaces/Figure13.11IndexedLineSetBoxWireframe.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../development/../license.html">../license.html</a> </td>
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

	* @author Don Brutzman, George Dabrowski, Ken Curtin, Duane Davis, Christos Kalogrias
 */

public class RenderingComponentPrototypes
{
	/** Default constructor to create this object. */
	public RenderingComponentPrototypes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("RenderingComponentPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Prototype implementations of X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet) implemented as prototypes for backwards compatibility with VRML 97."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("X3dToVrml97.xslt translation stylesheet automatically invokes these prototypes upon encountering any new Rendering nodes."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman, George Dabrowski, Ken Curtin, Duane Davis, Christos Kalogrias"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("17 November 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("RenderingComponentExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("RenderingComponentExternProtoDefinitions.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rendering.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter13-PointsLinesFaces/Figure13.11IndexedLineSetBoxWireframe.x3d"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet)"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" ==================== ")
    .addChild(new WorldInfo().setTitle("RenderingComponentPrototypes.x3d"))
    .addChild(new ProtoDeclare("ColorRGBA").setName("ColorRGBA").setAppinfo("ColorRGBA defines a set of RGBA colors. Warning: VRML 97 support does not include alpha values.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("color").setType(field.TYPE_MFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("locally override MFColorRGBA type (which is not supported in VRML 97) in order to downgrade to Color RGB")
          .addComments(" The color field is a 4-tuple float array, and so we map it to an MFOrientation for backwards compatibility with VRML 97. "))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
          .addComments(" default initialization is NULL node to match X3D specification ")))
      .setProtoBody(new ProtoBody()
        .addChild(new Color("ColorRGB").setColor(new MFColor(new double[] {0.8,0.8,0.8})))
        .addComments(" remaining nodes are not rendered ")
        .addChild(new OrientationInterpolator("ColorRGBAholder")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("keyValue").setProtoField("color"))))
        .addChild(new Script("ConvertColorRGBAtoRGB").setDirectOutput(true).setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize () " + "\n" + 
"{" + "\n" + 
"//	Browser.print ('colorRGBAnode.keyValue.length=' + colorRGBAnode.keyValue.length);" + "\n" + 
"	for (i=0; i<=colorRGBAnode.keyValue.length-1; i++)" + "\n" + 
"	{" + "\n" + 
"		// type conversion of each array element" + "\n" + 
"		// specifically, colorRGBAnode.keyValue[i] is an SFRotation" + "\n" + 
"		// and individual element values are then extracted from that" + "\n" + 
"		nextColor = new SFColor (" + "\n" + 
"			colorRGBAnode.keyValue[i].x," + "\n" + 
"			colorRGBAnode.keyValue[i].y," + "\n" + 
"			colorRGBAnode.keyValue[i].z);" + "\n" + 
"		// note colorRGBAnode.keyValue[i].angle holds the alpha value; ignored " + "\n" + 
"//		Browser.print ('color[' + i + ']=' + nextColor);" + "\n" + 
"		colorRGBnode.color[i] = nextColor;" + "\n" + 
"	}" + "\n" + 
"}" + "\n")
          .addField(new field().setName("colorRGBAnode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new OrientationInterpolator().setUSE("ColorRGBAholder")))
          .addField(new field().setName("colorRGBnode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new Color().setUSE("ColorRGB"))))
        .addChild(new Group()
          .setMetadata(new MetadataSet()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("metadata").setProtoField("metadata")))))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("IndexedTriangleFanSet").setName("IndexedTriangleFanSet").setAppinfo("IndexedTriangleFanSet represents a 3D shape composed of triangles that form a fan shape around the first vertex declared in each fan.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("ccw").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("colorPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("normalPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("set_index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("[0 infinity] or -1"))
        .addField(new field().setName("index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("[0 infinity] or -1")
          .addComments(" default initialization is NULL array [] to match X3D specification "))
        .addField(new field().setName("color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Color ColorRGBA node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Coordinate node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("normal").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Normal node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("texCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("TextureCoordinate node only")
          .addComments(" default initialization is NULL node to match X3D specification ")))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedFaceSet("RenderedITFS").setDEF("RenderedITFS")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("ccw").setProtoField("ccw"))
            .addConnect(new connect().setNodeField("normalPerVertex").setProtoField("normalPerVertex"))
            .addConnect(new connect().setNodeField("solid").setProtoField("solid"))
            .addConnect(new connect().setNodeField("color").setProtoField("color"))
            .addConnect(new connect().setNodeField("coord").setProtoField("coord"))
            .addConnect(new connect().setNodeField("normal").setProtoField("normal"))
            .addConnect(new connect().setNodeField("texCoord").setProtoField("texCoord"))))
        .addChild(new Group("UnrenderedITFS")
          .addChild(new Shape()
            .addComments(" is this really needed at all?? ")
            .setGeometry(new IndexedFaceSet("NodesHolderITFS").setDEF("NodesHolderITFS")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("color").setProtoField("color"))
                .addConnect(new connect().setNodeField("coord").setProtoField("coord"))
                .addConnect(new connect().setNodeField("normal").setProtoField("normal"))
                .addConnect(new connect().setNodeField("texCoord").setProtoField("texCoord")))))
          .addChild(new Script("IndexedTriangleFanSetToIndexedFaceSet").setDirectOutput(true).setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"	// index is an array of triangle indices that form a fan shape" + "\n" + 
"	// around the first vertex declared in each fan. The ordering of" + "\n" + 
"	// the vertices is ccw (counter-clockwise)." + "\n" + 
"\n" + 
"	// ensure terminated by -1" + "\n" + 
"	if (index[index.length-1] != -1) index[index.length] = -1;" + "\n" + 
"\n" + 
"	// ensure legal index values" + "\n" + 
"	for (i=0; i <= index.length-1; i++)" + "\n" + 
"	{" + "\n" + 
"	  if (index[i] < -1)" + "\n" + 
"	  {" + "\n" + 
"		alwaysPrint ('error, index[' + i + ']=' + index[i] +" + "\n" + 
"' is illegal value, treated as -1');" + "\n" + 
"		index[i] = -1;" + "\n" + 
"	  }" + "\n" + 
"	}" + "\n" + 
"	tracePrint ('index.length=' + index.length);" + "\n" + 
"	tracePrint ('index=' + index);" + "\n" + 
"\n" + 
"	if (index.length < 4) " + "\n" + 
"	{" + "\n" + 
"		alwaysPrint ('warning, index.length=' + index.length + " + "\n" + 
"' insufficient to construct a triangle, ITFS ignored');" + "\n" + 
"		return;" + "\n" + 
"	}" + "\n" + 
"	j = 0; // coordIndexNew counter" + "\n" + 
"	coordIndexNew = new MFInt32 ();" + "\n" + 
"\n" + 
"	// i walks through index array," + "\n" + 
"	// goal is to initialize coordIndexNew list to match triangles" + "\n" + 
"	for (i=2; i <= index.length-1; i++)" + "\n" + 
"	{" + "\n" + 
"		if ((index[i] == index[i-1]) || (index[i] == index[i-2]) || (index[i-1] == index[i-2]))" + "\n" + 
"		{" + "\n" + 
"			alwaysPrint ('index=' + index);" + "\n" + 
"			alwaysPrint ('error, pair of equal indices in triangle');" + "\n" + 
"			return;" + "\n" + 
"		}" + "\n" + 
"	  if (index[i] >= 0) " + "\n" + 
"	  {" + "\n" + 
"		// add another triangle from latest 3 points of fan set to IFS" + "\n" + 
"		// swap order to ensure normal is ccw, i.e. in correct halfplane direction" + "\n" + 
"		coordIndexNew [coordIndexNew.length] = 0;" + "\n" + 
"		coordIndexNew [coordIndexNew.length] = index[i];" + "\n" + 
"		coordIndexNew [coordIndexNew.length] = index[i-1];" + "\n" + 
"		coordIndexNew [coordIndexNew.length] = -1; // terminate" + "\n" + 
"	  }" + "\n" + 
"	  else if (index[i] == -1) // finish current triangle, fan" + "\n" + 
"	  {" + "\n" + 
"		// ensure done, or sufficient points remain to build another triangle" + "\n" + 
"		if (	(i!=index.length-1) && (index.length - i < 2))" + "\n" + 
"		{" + "\n" + 
"			alwaysPrint ('index=' + index);" + "\n" + 
"			alwaysPrint ('error, insufficient index values after' +" + "\n" + 
"	'index[' + i + ']=-1');" + "\n" + 
"			return;" + "\n" + 
"		}" + "\n" + 
"		// ensure done, or enough legal index values remain to build another triangle" + "\n" + 
"		if (	(i!=index.length-1) &&" + "\n" + 
"			((index[i+1] == -1) || (index[i+2] == -1) || (index[i+3] == -1)))" + "\n" + 
"		{" + "\n" + 
"			alwaysPrint ('index=' + index);" + "\n" + 
"			alwaysPrint ('error, insufficient non-negative-one index values after' +" + "\n" + 
"	'index[' + i + ']=-1');" + "\n" + 
"			return;" + "\n" + 
"		}" + "\n" + 
"		tracePrint ('encountered -1 in index array');" + "\n" + 
"		// skip ahead to build next fan set, no effect if done" + "\n" + 
"		if (i!=index.length-1) i = i + 2; " + "\n" + 
"	  }" + "\n" + 
"	  // incremental trace of array being built" + "\n" + 
"	  tracePrint ('coordIndexNew=' + coordIndexNew);" + "\n" + 
"	}" + "\n" + 
"	renderedITFS.set_coordIndex = coordIndexNew;" + "\n" + 
"	tracePrint ('renderedITFS.coordIndex=' + renderedITFS.coordIndex);" + "\n" + 
"	// match colorIndex if any Color node exists" + "\n" + 
"	if (nodesHolder.color)" + "\n" + 
"	{" + "\n" + 
"	  if (nodesHolder.color.color.length > 0)" + "\n" + 
"	  {" + "\n" + 
"		renderedITFS.set_colorIndex = coordIndexNew;" + "\n" + 
"		tracePrint ('set_colorIndex=' + coordIndexNew);" + "\n" + 
"	  }" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"function set_index (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	index = value;" + "\n" + 
"	initialize ();" + "\n" + 
"}" + "\n" + 
"function tracePrint(outputString)" + "\n" + 
"{" + "\n" + 
"    if (localTraceEnabled)" + "\n" + 
"	Browser.print ('[IndexedTriangleFanSet]' + outputString);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint(outputString)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('[IndexedTriangleFanSet]' + outputString);" + "\n" + 
"}" + "\n")
            .addField(new field().setName("index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("set_index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("renderedITFS").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new IndexedFaceSet().setUSE("RenderedITFS")))
            .addField(new field().setName("nodesHolder").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new IndexedFaceSet().setUSE("NodesHolderITFS")))
            .addField(new field().setName("localTraceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
            .addField(new field().setName("coordIndexNew").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addComments(" constructed during initialization "))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("index").setProtoField("index"))
              .addConnect(new connect().setNodeField("set_index").setProtoField("set_index"))))
          .addChild(new Group()
            .setMetadata(new MetadataString()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("metadata").setProtoField("metadata"))))))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("IndexedTriangleSet").setName("IndexedTriangleSet").setAppinfo("IndexedTriangleSet represents a 3D shape composed of a collection of individual triangles.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("ccw").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("colorPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("normalPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("set_index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("[0 infinity] or -1"))
        .addField(new field().setName("index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("[0 infinity] or -1")
          .addComments(" default initialization is NULL array [] to match X3D specification "))
        .addField(new field().setName("color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Color ColorRGBA node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Coordinate node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("normal").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Normal node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("texCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("TextureCoordinate node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
          .addComments(" default initialization is NULL node to match X3D specification ")))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedFaceSet("RenderedITS").setDEF("RenderedITS")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("ccw").setProtoField("ccw"))
            .addConnect(new connect().setNodeField("normalPerVertex").setProtoField("normalPerVertex"))
            .addConnect(new connect().setNodeField("solid").setProtoField("solid"))
            .addConnect(new connect().setNodeField("color").setProtoField("color"))
            .addConnect(new connect().setNodeField("coord").setProtoField("coord"))
            .addConnect(new connect().setNodeField("normal").setProtoField("normal"))
            .addConnect(new connect().setNodeField("texCoord").setProtoField("texCoord"))))
        .addChild(new Group("UnrenderedITS")
          .addChild(new Shape()
            .addComments(" is this really needed at all?? ")
            .setGeometry(new IndexedFaceSet("NodesHolderITS").setDEF("NodesHolderITS")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("color").setProtoField("color"))
                .addConnect(new connect().setNodeField("coord").setProtoField("coord"))
                .addConnect(new connect().setNodeField("normal").setProtoField("normal"))
                .addConnect(new connect().setNodeField("texCoord").setProtoField("texCoord")))))
          .addChild(new Script("IndexedTriangleSetToIndexedFaceSet").setDirectOutput(true).setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"	// index is an array of triangle indices. The ordering of" + "\n" + 
"	// the vertices is ccw (counter-clockwise)." + "\n" + 
"\n" + 
"	// ensure legal index values" + "\n" + 
"	for (ii=0; ii <= index.length-1; ii++)" + "\n" + 
"	{" + "\n" + 
"	  if (index[ii] < -1)" + "\n" + 
"	  {" + "\n" + 
"		alwaysPrint ('error, index[' + ii + ']=' + index[ii] +" + "\n" + 
"' is illegal value');" + "\n" + 
"		return;" + "\n" + 
"	  }" + "\n" + 
"	}" + "\n" + 
"	tracePrint ('index.length=' + index.length);" + "\n" + 
"	tracePrint ('index=' + index);" + "\n" + 
"\n" + 
"	if (index.length < 3) " + "\n" + 
"	{" + "\n" + 
"		alwaysPrint ('warning, index.length=' + index.length + " + "\n" + 
"' insufficient to construct a triangle, ITS ignored');" + "\n" + 
"		return;" + "\n" + 
"	}" + "\n" + 
"\n" + 
"	coordIndexNew = new MFInt32 ();" + "\n" + 
"\n" + 
"	// ii walks through index array," + "\n" + 
"	// goal is to initialize coordIndexNew list to match triangles" + "\n" + 
"	for (ii=0; ii <= index.length-1; ii+=3)" + "\n" + 
"	{" + "\n" + 
"		if ((index[ii] == index[ii+1]) || (index[ii] == index[ii+2]) || (index[ii+1] == index[ii+2]))" + "\n" + 
"		{" + "\n" + 
"			alwaysPrint ('index=' + index);" + "\n" + 
"			alwaysPrint ('error, pair of equal indices in triangle');" + "\n" + 
"			return;" + "\n" + 
"		}" + "\n" + 
"	  " + "\n" + 
"		if (index[ii] >= 0) " + "\n" + 
"		{" + "\n" + 
"			// add another triangle from latest 3 points of fan set to ITS" + "\n" + 
"			// order is ccw, i.e. in correct halfplane direction" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = index[ii];" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = index[ii+1];" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = index[ii+2];" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = -1;" + "\n" + 
"		}" + "\n" + 
"\n" + 
"		if (index.length % 3 != 0) {" + "\n" + 
"			alwaysPrint ('error, index field does not contain a multiple' +" + "\n" + 
"		'of three coordinate values.');" + "\n" + 
"			alwaysPrint ('The remaining vertices shall be ignored');" + "\n" + 
"			return;" + "\n" + 
"		}" + "\n" + 
"\n" + 
"\n" + 
"		// ensure done, or sufficient points remain to build another triangle" + "\n" + 
"//		if (	(i!=index.length-1) && (index.length - i < 2))" + "\n" + 
"//		{" + "\n" + 
"//			alwaysPrint ('index=' + index);" + "\n" + 
"//			alwaysPrint ('error, insufficient index values after' +" + "\n" + 
"//	'index[' + i + ']=-1');" + "\n" + 
"//			return;" + "\n" + 
"//		}" + "\n" + 
"		// ensure done, or enough legal index values remain to build another triangle" + "\n" + 
"//		if (	(i!=index.length-1) &&" + "\n" + 
"//			((index[i+1] == -1) || (index[i+2] == -1) || (index[i+3] == -1)))" + "\n" + 
"//		{" + "\n" + 
"//			alwaysPrint ('index=' + index);" + "\n" + 
"//			alwaysPrint ('error, insufficient non-negative-one index values after' +" + "\n" + 
"//	'index[' + i + ']=-1');" + "\n" + 
"//			return;" + "\n" + 
"//		}" + "\n" + 
"	  // incremental trace of array being built" + "\n" + 
"	  tracePrint ('coordIndexNew=' + coordIndexNew);" + "\n" + 
"	}" + "\n" + 
"	renderedITS.coordIndex = coordIndexNew;" + "\n" + 
"	tracePrint ('renderedITS.coordIndex=' + renderedITS.coordIndex);" + "\n" + 
"\n" + 
"	// match colorIndex if any Color node exists" + "\n" + 
"	if (nodesHolder.color)" + "\n" + 
"	{" + "\n" + 
"	  if (nodesHolder.color.color.length > 0)" + "\n" + 
"	  {" + "\n" + 
"		renderedITS.set_colorIndex = coordIndexNew;" + "\n" + 
"		tracePrint ('set_colorIndex=' + coordIndexNew);" + "\n" + 
"	  }" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"function set_index (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	index = value;" + "\n" + 
"	initialize ();" + "\n" + 
"}" + "\n" + 
"function tracePrint(outputString)" + "\n" + 
"{" + "\n" + 
"    if (localTraceEnabled)" + "\n" + 
"	  Browser.print ('[IndexedTriangleSet]' + outputString);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint(outputString)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('[IndexedTriangleSet]' + outputString);" + "\n" + 
"}" + "\n")
            .addField(new field().setName("index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("set_index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("renderedITS").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new IndexedFaceSet().setUSE("RenderedITS")))
            .addField(new field().setName("nodesHolder").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new IndexedFaceSet().setUSE("NodesHolderITS")))
            .addField(new field().setName("localTraceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
            .addField(new field().setName("coordIndexNew").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addComments(" constructed during initialization "))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("index").setProtoField("index"))
              .addConnect(new connect().setNodeField("set_index").setProtoField("set_index"))))
          .addChild(new Group()
            .setMetadata(new MetadataString()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("metadata").setProtoField("metadata"))))))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("IndexedTriangleStripSet").setName("IndexedTriangleStripSet").setAppinfo("IndexedTriangleStripSet represents a 3D shape composed of strips of triangles.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("ccw").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("colorPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("normalPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("set_index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
          .addComments(" default initialization is NULL array [] to match X3D specification "))
        .addField(new field().setName("color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Color ColorRGBA node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Coordinate node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("normal").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Normal node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("texCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("TextureCoordinate node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
          .addComments(" default initialization is NULL node to match X3D specification ")))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedFaceSet("RenderedTSS").setDEF("RenderedTSS")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("ccw").setProtoField("ccw"))
            .addConnect(new connect().setNodeField("normalPerVertex").setProtoField("normalPerVertex"))
            .addConnect(new connect().setNodeField("solid").setProtoField("solid"))
            .addConnect(new connect().setNodeField("color").setProtoField("color"))
            .addConnect(new connect().setNodeField("coord").setProtoField("coord"))
            .addConnect(new connect().setNodeField("normal").setProtoField("normal"))
            .addConnect(new connect().setNodeField("texCoord").setProtoField("texCoord"))))
        .addChild(new Group()
          .addChild(new Shape()
            .addComments(" is this really needed at all?? ")
            .setGeometry(new IndexedFaceSet("NodesHolderTSS").setDEF("NodesHolderTSS")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("color").setProtoField("color"))
                .addConnect(new connect().setNodeField("coord").setProtoField("coord"))
                .addConnect(new connect().setNodeField("normal").setProtoField("normal"))
                .addConnect(new connect().setNodeField("texCoord").setProtoField("texCoord")))))
          .addChild(new Script("IndexedTriangleStripSetToIndexedFaceSet").setDirectOutput(true).setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"	// index is an array of triangle indices. The ordering of" + "\n" + 
"	// the vertices is ccw (counter-clockwise)." + "\n" + 
"\n" + 
"	// ensure legal index values" + "\n" + 
"	for (ii=0; ii <= index.length-1; ii++)" + "\n" + 
"	{" + "\n" + 
"	  if (index[ii] < -1)" + "\n" + 
"	  {" + "\n" + 
"		alwaysPrint ('error, index[' + ii + ']=' + index[ii] +" + "\n" + 
"' is illegal value');" + "\n" + 
"		return;" + "\n" + 
"	  }" + "\n" + 
"	}" + "\n" + 
"	tracePrint ('index.length=' + index.length);" + "\n" + 
"	tracePrint ('index=' + index);" + "\n" + 
"\n" + 
"	if (index.length < 3) " + "\n" + 
"	{" + "\n" + 
"		alwaysPrint ('warning, index.length=' + index.length + " + "\n" + 
"' insufficient to construct a triangle, ITS ignored');" + "\n" + 
"		return;" + "\n" + 
"	}" + "\n" + 
"\n" + 
"	coordIndexNew = new MFInt32 ();" + "\n" + 
"\n" + 
"	// ii walks through index array," + "\n" + 
"	// goal is to initialize coordIndexNew list to match triangles" + "\n" + 
"	for (ii=2; ii <= index.length-1; ii++)" + "\n" + 
"	{" + "\n" + 
"		if ((index[ii] == index[ii-1]) || (index[ii] == index[ii-2]) || (index[ii-1] == index[ii-2]))" + "\n" + 
"		{" + "\n" + 
"			alwaysPrint ('index=' + index);" + "\n" + 
"			alwaysPrint ('error, pair of equal indices in triangle');" + "\n" + 
"			return;" + "\n" + 
"		}" + "\n" + 
"	  " + "\n" + 
"		if (index[ii] >= 0) " + "\n" + 
"	  {" + "\n" + 
"			// add another triangle from latest 3 points of fan set to ITS" + "\n" + 
"			// order is ccw, i.e. in correct halfplane direction" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = index[ii-2];" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = index[ii-1];" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = index[ii];" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = -1;" + "\n" + 
"	  }" + "\n" + 
"\n" + 
"		// ensure done, or sufficient points remain to build another triangle" + "\n" + 
"//		if (	(i!=index.length-1) && (index.length - i < 2))" + "\n" + 
"//		{" + "\n" + 
"//			alwaysPrint ('index=' + index);" + "\n" + 
"//			alwaysPrint ('error, insufficient index values after' +" + "\n" + 
"//	'index[' + i + ']=-1');" + "\n" + 
"//			return;" + "\n" + 
"//		}" + "\n" + 
"		// ensure done, or enough legal index values remain to build another triangle" + "\n" + 
"//		if (	(i!=index.length-1) &&" + "\n" + 
"//			((index[i+1] == -1) || (index[i+2] == -1) || (index[i+3] == -1)))" + "\n" + 
"//		{" + "\n" + 
"//			alwaysPrint ('index=' + index);" + "\n" + 
"//			alwaysPrint ('error, insufficient non-negative-one index values after' +" + "\n" + 
"//	'index[' + i + ']=-1');" + "\n" + 
"//			return;" + "\n" + 
"//		}" + "\n" + 
"	  // incremental trace of array being built" + "\n" + 
"	  tracePrint ('TSScoordIndexNew=' + coordIndexNew);" + "\n" + 
"	}" + "\n" + 
"	renderedTSS.set_coordIndex = coordIndexNew;" + "\n" + 
"	tracePrint ('renderedTSS.coordIndex=' + renderedTSS.coordIndex);" + "\n" + 
"	// match colorIndex if any Color node exists" + "\n" + 
"	if (nodesHolder.color)" + "\n" + 
"	{" + "\n" + 
"	  if (nodesHolder.color.color.length > 0)" + "\n" + 
"	  {" + "\n" + 
"		renderedTSS.set_colorIndex = coordIndexNew;" + "\n" + 
"		tracePrint ('set_colorIndex=' + coordIndexNew);" + "\n" + 
"	  }" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"function set_index (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	index = value;" + "\n" + 
"	initialize ();" + "\n" + 
"}" + "\n" + 
"function tracePrint(outputString)" + "\n" + 
"{" + "\n" + 
"    if (localTraceEnabled)" + "\n" + 
"	  Browser.print ('[IndexedTriangleStripSet]' + outputString);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint(outputString)" + "\n" + 
"{" + "\n" + 
"	  Browser.print ('[IndexedTriangleStripSet]' + outputString);" + "\n" + 
"}" + "\n")
            .addField(new field().setName("index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("set_index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("renderedTSS").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new IndexedFaceSet().setUSE("RenderedTSS")))
            .addField(new field().setName("nodesHolder").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new IndexedFaceSet().setUSE("NodesHolderTSS")))
            .addField(new field().setName("localTraceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
            .addField(new field().setName("coordIndexNew").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addComments(" constructed during initialization "))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("index").setProtoField("index"))
              .addConnect(new connect().setNodeField("set_index").setProtoField("set_index"))))
          .addChild(new Group()
            .setMetadata(new MetadataString()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("metadata").setProtoField("metadata"))))))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("LineSet").setName("LineSet").setAppinfo("LineSet represents a 3D geometry formed by constructing polylines from 3D vertices.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("vertexCount").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
          .addComments(" default initialization is NULL array [] to match X3D specification "))
        .addField(new field().setName("color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Color ColorRGBA node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Coordinate node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
          .addComments(" default initialization is NULL node to match X3D specification ")))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedLineSet("RenderedILS").setDEF("RenderedILS")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("color").setProtoField("color"))))
        .addChild(new Group()
          .addChild(new Shape()
            .setGeometry(new IndexedLineSet("NodesHolderILS").setDEF("NodesHolderILS")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("color").setProtoField("color"))
                .addConnect(new connect().setNodeField("coord").setProtoField("coord"))))
            .setAppearance(new Appearance("UnusedAppearance")
              .setMaterial(new Material().setEmissiveColor(0.8,0.8,0.8))))
          .addChild(new Script("LineSetToIndexedLineSet").setDirectOutput(true).setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"	vertexCountSum = 0;" + "\n" + 
"	tracePrint ('vertexCount=' + vertexCount);" + "\n" + 
"	for (i=0; i < vertexCount.length; i++)" + "\n" + 
"	{" + "\n" + 
"		if (vertexCount[i] < 2)" + "\n" + 
"		{" + "\n" + 
"			alwaysPrint ('error, vertexCount[' + i + ']=' + vertexCount[i] +" + "\n" + 
"	' is illegal value, must be >= 2');" + "\n" + 
"			return;" + "\n" + 
"		}" + "\n" + 
"		vertexCountSum = vertexCountSum + vertexCountSum[i];" + "\n" + 
"	}" + "\n" + 
"	tracePrint ('vertexCountSum=' + vertexCountSum);" + "\n" + 
"	numberPoints = nodesHolder.coord.point.length;" + "\n" + 
"\n" + 
"	if (numberPoints < vertexCountSum) " + "\n" + 
"	{" + "\n" + 
"		alwaysPrint ('warning, Coordinate.point.length=' + numberPoints  + " + "\n" + 
"' is less than vertexCountSum=' + vertexCountSum + ', LS ignored');" + "\n" + 
"		return;" + "\n" + 
"	}" + "\n" + 
"	coordIndexNew = new MFInt32 ();" + "\n" + 
"\n" + 
"	numberSegments = vertexCountSum.length;  // need validity check" + "\n" + 
"\n" + 
"	// i walks through array of points to build line-segment indices" + "\n" + 
"	i = 0;" + "\n" + 
"	for (seg=0; seg < numberSegments; seg++)" + "\n" + 
"	{" + "\n" + 
"	  for (j=0; j < vertexCount[seg]; j++)" + "\n" + 
"	  {" + "\n" + 
"		coordIndexNew [coordIndexNew.length] = i;" + "\n" + 
"		i++;" + "\n" + 
"	  }" + "\n" + 
"	  coordIndexNew [coordIndexNew.length] = -1; // terminate current fan" + "\n" + 
"\n" + 
"	  // incremental trace of array being built" + "\n" + 
"	  tracePrint ('coordIndexNew=' + coordIndexNew);" + "\n" + 
"	} // repeat for all vertices" + "\n" + 
"\n" + 
"	renderedILS.coordIndex = coordIndexNew;" + "\n" + 
"	tracePrint ('renderedILS.coordIndex=' + renderedILS.coordIndex);" + "\n" + 
"\n" + 
"	// match colorIndex if any Color node exists" + "\n" + 
"	if (nodesHolder.color)" + "\n" + 
"	{" + "\n" + 
"	  if (nodesHolder.color.color.length > 0)" + "\n" + 
"	  {" + "\n" + 
"		renderedILS.colorIndex = coordIndexNew;" + "\n" + 
"		tracePrint ('set_colorIndex=' + coordIndexNew);" + "\n" + 
"	  }" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"function tracePrint(outputString)" + "\n" + 
"{" + "\n" + 
"    if (localTraceEnabled)" + "\n" + 
"	Browser.print ('[TriangleFanSet]' + outputString);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint(outputString)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('[TriangleFanSet]' + outputString);" + "\n" + 
"}" + "\n")
            .addField(new field().setName("vertexCount").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addComments(" default initialization is NULL array [] to match X3D specification "))
            .addField(new field().setName("renderedILS").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new IndexedLineSet().setUSE("RenderedILS")))
            .addField(new field().setName("nodesHolder").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new IndexedLineSet().setUSE("NodesHolderILS")))
            .addField(new field().setName("localTraceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
            .addField(new field().setName("coordIndexNew").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addComments(" constructed during initialization "))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("vertexCount").setProtoField("vertexCount"))))
          .addChild(new Group()
            .setMetadata(new MetadataString()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("metadata").setProtoField("metadata"))))))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("TriangleFanSet").setName("TriangleFanSet").setAppinfo("TriangleFanSet represents a 3D shape composed of triangles that form a fan shape around the first vertex declared in each fan.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("fanCount").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
          .addComments(" default initialization is NULL array [] to match X3D specification "))
        .addField(new field().setName("ccw").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("colorPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("normalPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Color ColorRGBA node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Coordinate node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("normal").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Normal node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("texCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("TextureCoordinate node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
          .addComments(" default initialization is NULL node to match X3D specification ")))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedFaceSet("RenderedTFS").setDEF("RenderedTFS")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("ccw").setProtoField("ccw"))
            .addConnect(new connect().setNodeField("colorPerVertex").setProtoField("colorPerVertex"))
            .addConnect(new connect().setNodeField("normalPerVertex").setProtoField("normalPerVertex"))
            .addConnect(new connect().setNodeField("solid").setProtoField("solid"))
            .addConnect(new connect().setNodeField("color").setProtoField("color"))
            .addConnect(new connect().setNodeField("coord").setProtoField("coord"))
            .addConnect(new connect().setNodeField("normal").setProtoField("normal"))
            .addConnect(new connect().setNodeField("texCoord").setProtoField("texCoord"))))
        .addChild(new Group("UnrenderedTFS")
          .addChild(new Shape()
            .addComments(" is this really needed at all?? ")
            .setGeometry(new IndexedFaceSet("NodesHolderTFS").setDEF("NodesHolderTFS")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("color").setProtoField("color"))
                .addConnect(new connect().setNodeField("coord").setProtoField("coord"))
                .addConnect(new connect().setNodeField("normal").setProtoField("normal"))
                .addConnect(new connect().setNodeField("texCoord").setProtoField("texCoord")))))
          .addChild(new Script("TriangleFanSetToIndexedFaceSet").setDirectOutput(true).setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"	fanCountSum = 0;" + "\n" + 
"	tracePrint ('fanCount=' + fanCount);" + "\n" + 
"	for (i=0; i < fanCount.length; i++)" + "\n" + 
"	{" + "\n" + 
"		if (fanCount[i] < 3)" + "\n" + 
"		{" + "\n" + 
"			alwaysPrint ('error, fanCount[' + i + ']=' + fanCount[i] +" + "\n" + 
"	' is illegal value, must be >= 3');" + "\n" + 
"			return;" + "\n" + 
"		}" + "\n" + 
"		fanCountSum = fanCountSum + fanCount[i];" + "\n" + 
"	}" + "\n" + 
"	tracePrint ('fanCountSum=' + fanCountSum);" + "\n" + 
"	numberPoints = nodesHolder.coord.point.length;" + "\n" + 
"\n" + 
"	if (numberPoints < fanCountSum) " + "\n" + 
"	{" + "\n" + 
"		alwaysPrint ('warning, Coordinate.point.length=' + numberPoints  + " + "\n" + 
"' is less than fanCountSum=' + fanCountSum + ', TFS ignored');" + "\n" + 
"		return;" + "\n" + 
"	}" + "\n" + 
"	coordIndexNew = new MFInt32 ();" + "\n" + 
"\n" + 
"	numberFans = fanCount.length;  // need validity check" + "\n" + 
"\n" + 
"	// i walks through array of points to build polygon indices" + "\n" + 
"	i = 0;" + "\n" + 
"	for (fan=0; fan < numberFans; fan++)" + "\n" + 
"	{" + "\n" + 
"	  for (j=0; j < fanCount[fan]; j++)" + "\n" + 
"	  {" + "\n" + 
"		coordIndexNew [coordIndexNew.length] = i;" + "\n" + 
"		i++;" + "\n" + 
"	  }" + "\n" + 
"	  coordIndexNew [coordIndexNew.length] = -1; // terminate current fan" + "\n" + 
"\n" + 
"	  // incremental trace of array being built" + "\n" + 
"	  tracePrint ('coordIndexNew=' + coordIndexNew);" + "\n" + 
"	} // repeat for all fans" + "\n" + 
"\n" + 
"	renderedTFS.coordIndex = coordIndexNew;" + "\n" + 
"	tracePrint ('renderedTFS.coordIndex=' + renderedTFS.coordIndex);" + "\n" + 
"\n" + 
"	// match colorIndex if any Color node exists" + "\n" + 
"	if (nodesHolder.color)" + "\n" + 
"	{" + "\n" + 
"	  if (nodesHolder.color.color.length > 0)" + "\n" + 
"	  {" + "\n" + 
"		renderedTFS.set_colorIndex = coordIndexNew;" + "\n" + 
"		tracePrint ('set_colorIndex=' + coordIndexNew);" + "\n" + 
"	  }" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"function tracePrint(outputString)" + "\n" + 
"{" + "\n" + 
"    if (localTraceEnabled)" + "\n" + 
"	Browser.print ('[TriangleFanSet]' + outputString);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint(outputString)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('[TriangleFanSet]' + outputString);" + "\n" + 
"}" + "\n")
            .addField(new field().setName("fanCount").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addComments(" default initialization is NULL array [] to match X3D specification "))
            .addField(new field().setName("renderedTFS").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new IndexedFaceSet().setUSE("RenderedTFS")))
            .addField(new field().setName("nodesHolder").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new IndexedFaceSet().setUSE("NodesHolderTFS")))
            .addField(new field().setName("localTraceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
            .addField(new field().setName("coordIndexNew").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addComments(" constructed during initialization "))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("fanCount").setProtoField("fanCount"))))
          .addChild(new Group()
            .setMetadata(new MetadataString()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("metadata").setProtoField("metadata"))))))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("TriangleSet").setName("TriangleSet").setAppinfo("TriangleSet represents a 3D shape that represents a collection of individual triangles.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("ccw").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("colorPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("normalPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Color ColorRGBA node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Coordinate node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("normal").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Normal node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("texCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("TextureCoordinate node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
          .addComments(" default initialization is NULL node to match X3D specification ")))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedFaceSet("RenderedTS").setDEF("RenderedTS")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("ccw").setProtoField("ccw"))
            .addConnect(new connect().setNodeField("normalPerVertex").setProtoField("normalPerVertex"))
            .addConnect(new connect().setNodeField("solid").setProtoField("solid"))
            .addConnect(new connect().setNodeField("color").setProtoField("color"))
            .addConnect(new connect().setNodeField("coord").setProtoField("coord"))
            .addConnect(new connect().setNodeField("normal").setProtoField("normal"))
            .addConnect(new connect().setNodeField("texCoord").setProtoField("texCoord"))))
        .addChild(new Group("UnrenderedTS")
          .addChild(new Shape()
            .addComments(" is this really needed at all?? ")
            .setGeometry(new IndexedFaceSet("NodesHolderTS").setDEF("NodesHolderTS")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("color").setProtoField("color"))
                .addConnect(new connect().setNodeField("coord").setProtoField("coord"))
                .addConnect(new connect().setNodeField("normal").setProtoField("normal"))
                .addConnect(new connect().setNodeField("texCoord").setProtoField("texCoord")))))
          .addChild(new Script("TriangleSetToIndexedFaceSet").setDirectOutput(true).setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"	// index is an array of triangle indices. The ordering of" + "\n" + 
"	// the vertices is ccw (counter-clockwise)." + "\n" + 
"\n" + 
"	// ensure legal index values" + "\n" + 
"	for (ii=0; ii <= index.length-1; ii++)" + "\n" + 
"	{" + "\n" + 
"	  if (index[ii] < -1)" + "\n" + 
"	  {" + "\n" + 
"		alwaysPrint ('error, index[' + ii + ']=' + index[ii] +" + "\n" + 
"' is illegal value');" + "\n" + 
"		return;" + "\n" + 
"	  }" + "\n" + 
"	}" + "\n" + 
"	tracePrint ('index.length=' + index.length);" + "\n" + 
"	tracePrint ('index=' + index);" + "\n" + 
"\n" + 
"	if (index.length < 3) " + "\n" + 
"	{" + "\n" + 
"		alwaysPrint ('warning, index.length=' + index.length + " + "\n" + 
"' insufficient to construct a triangle, ITS ignored');" + "\n" + 
"		return;" + "\n" + 
"	}" + "\n" + 
"\n" + 
"	coordIndexNew = new MFInt32 ();" + "\n" + 
"\n" + 
"	// ii walks through index array," + "\n" + 
"	// goal is to initialize coordIndexNew list to match triangles" + "\n" + 
"	for (ii=0; ii <= index.length-1; ii+=3)" + "\n" + 
"	{" + "\n" + 
"		if ((index[ii] == index[ii+1]) || (index[ii] == index[ii+2]) || (index[ii+1] == index[ii+2]))" + "\n" + 
"		{" + "\n" + 
"			alwaysPrint ('index=' + index);" + "\n" + 
"			alwaysPrint ('error, pair of equal indices in triangle');" + "\n" + 
"			return;" + "\n" + 
"		}" + "\n" + 
"	  " + "\n" + 
"		if (index[ii] >= 0) " + "\n" + 
"		{" + "\n" + 
"			// add another triangle from latest 3 points of fan set to ITS" + "\n" + 
"			// order is ccw, i.e. in correct halfplane direction" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = index[ii];" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = index[ii+1];" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = index[ii+2];" + "\n" + 
"			coordIndexNew [coordIndexNew.length] = -1;" + "\n" + 
"		}" + "\n" + 
"\n" + 
"		if (index.length % 3 != 0) {" + "\n" + 
"			alwaysPrint ('error, index field does not contain a multiple' +" + "\n" + 
"		'of three coordinate values.');" + "\n" + 
"			alwaysPrint ('The remaining vertices shall be ignored');" + "\n" + 
"			return;" + "\n" + 
"		}" + "\n" + 
"\n" + 
"\n" + 
"		// ensure done, or sufficient points remain to build another triangle" + "\n" + 
"//		if (	(i!=index.length-1) && (index.length - i < 2))" + "\n" + 
"//		{" + "\n" + 
"//			alwaysPrint ('index=' + index);" + "\n" + 
"//			alwaysPrint ('error, insufficient index values after' +" + "\n" + 
"//	'index[' + i + ']=-1');" + "\n" + 
"//			return;" + "\n" + 
"//		}" + "\n" + 
"		// ensure done, or enough legal index values remain to build another triangle" + "\n" + 
"//		if (	(i!=index.length-1) &&" + "\n" + 
"//			((index[i+1] == -1) || (index[i+2] == -1) || (index[i+3] == -1)))" + "\n" + 
"//		{" + "\n" + 
"//			alwaysPrint ('index=' + index);" + "\n" + 
"//			alwaysPrint ('error, insufficient non-negative-one index values after' +" + "\n" + 
"//	'index[' + i + ']=-1');" + "\n" + 
"//			return;" + "\n" + 
"//		}" + "\n" + 
"	  // incremental trace of array being built" + "\n" + 
"	  tracePrint ('coordIndexNew=' + coordIndexNew);" + "\n" + 
"	}" + "\n" + 
"	renderedITS.set_coordIndex = coordIndexNew;" + "\n" + 
"	tracePrint ('renderedITS.coordIndex=' + renderedITS.coordIndex);" + "\n" + 
"	// match colorIndex if any Color node exists" + "\n" + 
"	if (nodesHolder.color)" + "\n" + 
"	{" + "\n" + 
"	  if (nodesHolder.color.color.length > 0)" + "\n" + 
"	  {" + "\n" + 
"		renderedITS.set_colorIndex = coordIndexNew;" + "\n" + 
"		tracePrint ('set_colorIndex=' + coordIndexNew);" + "\n" + 
"	  }" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"function set_index (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	index = value;" + "\n" + 
"	initialize ();" + "\n" + 
"}" + "\n" + 
"function tracePrint(outputString)" + "\n" + 
"{" + "\n" + 
"    if (localTraceEnabled)" + "\n" + 
"	Browser.print('[IndexedTriangleSet]' + outputString);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint(outputString)" + "\n" + 
"{" + "\n" + 
"	Browser.print('[IndexedTriangleSet]' + outputString);" + "\n" + 
"}" + "\n")
            .addField(new field().setName("index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addComments(" default initialization is NULL "))
            .addField(new field().setName("set_index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("renderedTS").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new IndexedFaceSet().setUSE("RenderedTS")))
            .addField(new field().setName("nodesHolder").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new IndexedFaceSet().setUSE("NodesHolderTS")))
            .addField(new field().setName("localTraceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
            .addField(new field().setName("coordIndexNew").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addComments(" constructed during initialization ")))
          .addChild(new Group()
            .setMetadata(new MetadataString()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("metadata").setProtoField("metadata"))))))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("TriangleStripSet").setName("TriangleStripSet").setAppinfo("TriangleStripSet represents a 3D shape composed of strips of triangles.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("stripCount").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
          .addComments(" default initialization is NULL array [] to match X3D specification "))
        .addField(new field().setName("ccw").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("colorPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("normalPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Color ColorRGBA node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Coordinate node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("normal").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Normal node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("texCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("TextureCoordinate node only")
          .addComments(" default initialization is NULL node to match X3D specification "))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
          .addComments(" default initialization is NULL node to match X3D specification ")))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedFaceSet())))
    .addComments(" ==================== ")
    .addComments(" ProtoInstance examples are found in RenderingComponentExamples.x3d ")
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.2,0.2,0.2})).setSkyColor(new MFColor(new double[] {0.2,0.2,0.2})))
    .addChild(new Anchor("LinkToExamples").setDescription("link to examples").setUrl(new String[] {"RenderingComponentExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentExamples.x3d","RenderingComponentExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentExamples.wrl"})
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
        .setGeometry(new Text().setString(new String[] {"RenderingComponentPrototypes","is a developmental file.","Click this text to view","RenderingComponentExamples"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE))))
      .addComments(" Selectable Text has transparent Box and TouchSensor description as a tooltip ")
      .addChild(new Shape()
        .setGeometry(new Box().setSize(12.0,5.0,.001))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setTransparency(0.8))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return RenderingComponentPrototypes model
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
        X3D thisExampleX3dModel = new RenderingComponentPrototypes().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.RenderingComponentPrototypes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.RenderingComponentPrototypes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
