package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
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
 * <p> X3D Geometry2D component nodes, implemented as prototypes for developmental use to provide backwards compatibility with VRML 97. Arc2D specifies a 2D linear circular arc. ArcClose2D specifies a portion of a circle. Circle2D specifies a 2D circular line. Disk2D specifies a 2D circular disk. Polyline2D specifies 2D line segments. Polypoint2D specifies 2D point array. Rectangle2D specifies a 2D rectangle. TriangleSet2D specifies 2D triangles. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs). </p>
 <p> Related links: <a href="../../../development/Geometry2dComponentPrototypes.java">Geometry2dComponentPrototypes.java</a> source, <a href="../../../development/Geometry2dComponentPrototypesIndex.html" target="_top">Geometry2dComponentPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/Geometry2dComponentPrototypes.x3d">Geometry2dComponentPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> X3D Geometry2D component nodes, implemented as prototypes for developmental use to provide backwards compatibility with VRML 97. Arc2D specifies a 2D linear circular arc. ArcClose2D specifies a portion of a circle. Circle2D specifies a 2D circular line. Disk2D specifies a 2D circular disk. Polyline2D specifies 2D line segments. Polypoint2D specifies 2D point array. Rectangle2D specifies a 2D rectangle. TriangleSet2D specifies 2D triangles. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs). </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 14 November 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> These examples are complete but only used for developmental testing, not regular X3D authoring. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExternProtos.x3d">Geometry2dComponentExternProtos.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamples.x3d">Geometry2dComponentExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html" target="_blank">https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d</a> </td>
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

	* @author Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis
 */

public class Geometry2dComponentPrototypes
{
	/** Default constructor to create this object. */
	public Geometry2dComponentPrototypes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Geometry2dComponentPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("X3D Geometry2D component nodes, implemented as prototypes for developmental use to provide backwards compatibility with VRML 97. Arc2D specifies a 2D linear circular arc. ArcClose2D specifies a portion of a circle. Circle2D specifies a 2D circular line. Disk2D specifies a 2D circular disk. Polyline2D specifies 2D line segments. Polypoint2D specifies 2D point array. Rectangle2D specifies a 2D rectangle. TriangleSet2D specifies 2D triangles. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs)."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("14 November 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("These examples are complete but only used for developmental testing, not regular X3D authoring."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Geometry2dComponentExternProtos.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Geometry2dComponentExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D)"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" ==================== ")
    .addChild(new WorldInfo().setTitle("Geometry2dComponentPrototypes.x3d"))
    .addChild(new ProtoDeclare("Arc2D").setName("Arc2D")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("startAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0))
        .addField(new field().setName("endAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1.5707963265))
        .addField(new field().setName("radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
          .addComments(" default NULL ")))
      .setProtoBody(new ProtoBody()
        .addComments(" Only the first node counts as the node type of a prototype. This node must be a geometry node. ")
        .addChild(new IndexedLineSet("ArcIndexPoints").setDEF("ArcIndexPoints")
          .setCoord(new Coordinate("Arc3DPoints")))
        .addComments(" Any nodes after initial node in a ProtoBody is not rendered. ")
        .addChild(new Group()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("metadata").setProtoField("metadata")))
          .addChild(new Script("Arc2dToFaceSet3d").setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"   numOfPoints = 100;" + "\n" + 
"\n" + 
"   if (radius < 0)" + "\n" + 
"   {" + "\n" + 
"      Browser.print ('[Arc2D] Warning:  invalid value, radius=' + value + ' must instead be >= 0');" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   if ((startAngle < 0) || (startAngle >= 2 * Math.PI))" + "\n" + 
"   {" + "\n" + 
"	Browser.print ('[Arc2D] Warning: startAngle=' + startAngle + ' must be within range [0..2pi)'); // (]" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   if ((endAngle < 0) || (endAngle >= 2 * Math.PI))" + "\n" + 
"   {" + "\n" + 
"	Browser.print ('[Arc2D] Warning: endAngle=' + endAngle + ' must be within range [0..2pi)'); // (]" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   // equal startAngle, endAngle means draw full circle." + "\n" + 
"   // high out-of-range endAngle is OK for local computation." + "\n" + 
"   if (startAngle >= endAngle)" + "\n" + 
"      endAngle = endAngle + 2 * Math.PI;" + "\n" + 
"\n" + 
"   differAng = Math.abs((endAngle - startAngle)) / numOfPoints;" + "\n" + 
"\n" + 
"   for (i = 0; i <= numOfPoints; i++)" + "\n" + 
"   {" + "\n" + 
"	arcSet3d[i] = new SFVec3f (radius * Math.cos(startAngle + i * differAng), radius * Math.sin(startAngle + i * differAng), 0.0);" + "\n" + 
"        arcIndexSet3d[i] = i;" + "\n" + 
"   }" + "\n" + 
"\n" + 
"} // initialize" + "\n")
            .addField(new field().setName("startAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("endAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("arcSet3d").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("arcIndexSet3d").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("startAngle").setProtoField("startAngle"))
              .addConnect(new connect().setNodeField("endAngle").setProtoField("endAngle"))
              .addConnect(new connect().setNodeField("radius").setProtoField("radius"))))
          .addChild(new ROUTE().setFromNode("Arc2dToFaceSet3d").setFromField("arcSet3d").setToNode("Arc3DPoints").setToField("point"))
          .addChild(new ROUTE().setFromNode("Arc2dToFaceSet3d").setFromField("arcIndexSet3d").setToNode("ArcIndexPoints").setToField("set_coordIndex")))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("ArcClose2D").setName("ArcClose2D")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("startAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0))
        .addField(new field().setName("endAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1.5707963265))
        .addField(new field().setName("radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1))
        .addField(new field().setName("closureType").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("PIE"))
        .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
          .addComments(" default NULL ")))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedFaceSet("ArcPointFaceIndex").setDEF("ArcPointFaceIndex")
          .setCoord(new Coordinate("ArcClose2DFaceCoordinate")))
        .addChild(new Group()
          .addChild(new Script("ArcClose2dToFaceSet3d").setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"   if (radius < 0)" + "\n" + 
"   {" + "\n" + 
"      Browser.print ('[ArcClose2D] Warning:  invalid value, radius=' + value + ' must instead be >= 0');" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   if ((startAngle < 0) || (startAngle >= 2 * Math.PI))" + "\n" + 
"   {" + "\n" + 
"	Browser.print ('[ArcClose2D] Warning: startAngle=' + startAngle + ' must be within range [0..2pi)'); //(]" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   if ((endAngle< 0) || (endAngle>= 2 * Math.PI))" + "\n" + 
"   {" + "\n" + 
"	Browser.print ('[ArcClose2D] Warning: endAngle=' + endAngle+ ' must be within range [0..2pi)'); // (]" + "\n" + 
"    }" + "\n" + 
"\n" + 
"    // equal startAngle, endAngle means draw full circle." + "\n" + 
"    // high out-of-range endAngle is OK for local computation." + "\n" + 
"   if (startAngle >= endAngle)" + "\n" + 
"      endAngle = endAngle + 2*Math.PI;" + "\n" + 
"\n" + 
"   numOfPoints = 100;" + "\n" + 
"   differAng = Math.abs((endAngle - startAngle))/numOfPoints;" + "\n" + 
"\n" + 
"   for ( i=0 ; i<=numOfPoints ; i++)" + "\n" + 
"   {" + "\n" + 
"	if ( i == numOfPoints)" + "\n" + 
"             arcSet3d[i] = new SFVec3f (0.0, 0.0, 0.0);" + "\n" + 
"        else" + "\n" + 
"             arcSet3d[i] = new SFVec3f ( radius*Math.cos(startAngle + i*differAng), radius*Math.sin(startAngle + i*differAng), 0.0 );" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   k=0;" + "\n" + 
"   if (closureType =='PIE')" + "\n" + 
"       for ( i=0 ; i<numOfPoints ; i++)" + "\n" + 
"       {" + "\n" + 
"        	pointIndex[k]   = numOfPoints;" + "\n" + 
"        	pointIndex[k+1] = i;" + "\n" + 
"        	pointIndex[k+2] = i + 1;" + "\n" + 
"        	pointIndex[k+3]   = numOfPoints;" + "\n" + 
"        	pointIndex[k+4] = -1;" + "\n" + 
"        k=k+5;" + "\n" + 
"	}" + "\n" + 
"   else" + "\n" + 
"       for ( i=0 ; i<numOfPoints-1 ; i++)" + "\n" + 
"       {" + "\n" + 
"              pointIndex[k]   = 0;" + "\n" + 
"              pointIndex[k+1] = i;" + "\n" + 
"              pointIndex[k+2] = i + 1;" + "\n" + 
"              pointIndex[k+3]   = 0;" + "\n" + 
"              pointIndex[k+4] = -1;" + "\n" + 
"        k=k+5;" + "\n" + 
"	}" + "\n" + 
"\n" + 
"} // initialize" + "\n")
            .addField(new field().setName("closureType").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("startAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("endAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("arcSet3d").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("pointIndex").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("closureType").setProtoField("closureType"))
              .addConnect(new connect().setNodeField("startAngle").setProtoField("startAngle"))
              .addConnect(new connect().setNodeField("endAngle").setProtoField("endAngle"))
              .addConnect(new connect().setNodeField("radius").setProtoField("radius"))))
          .addChild(new ROUTE().setFromNode("ArcClose2dToFaceSet3d").setFromField("arcSet3d").setToNode("ArcClose2DFaceCoordinate").setToField("point"))
          .addChild(new ROUTE().setFromNode("ArcClose2dToFaceSet3d").setFromField("pointIndex").setToNode("ArcPointFaceIndex").setToField("set_coordIndex")))))
    .addComments(" ArcClose2DUnfilled also provided since FillProperties not available in VRML 97 ")
    .addChild(new ProtoDeclare("ArcClose2DUnfilled").setName("ArcClose2DUnfilled")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("startAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0))
        .addField(new field().setName("endAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1.5707963265))
        .addField(new field().setName("radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1))
        .addField(new field().setName("closureType").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("PIE"))
        .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
          .addComments(" default NULL ")))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedLineSet("ArcPointLineIndex").setDEF("ArcPointLineIndex")
          .setCoord(new Coordinate("ArcClose2DLineCoordinate")))
        .addChild(new Group()
          .addChild(new Script("ArcClose2dToLineSet3d").setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"\n" + 
"   if (radius < 0)" + "\n" + 
"   {" + "\n" + 
"      Browser.print ('[ArcCloseUnfilled2D] Warning:  invalid value, radius=' + value + ' must instead be >= 0');" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   if ((startAngle < 0) || (startAngle >= 2 * Math.PI))" + "\n" + 
"   {" + "\n" + 
"	Browser.print ('[ArcCloseUnfilled2D] Warning: startAngle=' + startAngle + ' must be within range [0..2pi)'); //(]" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   if ((endAngle< 0) || (endAngle>= 2 * Math.PI))" + "\n" + 
"   {" + "\n" + 
"	Browser.print ('[ArcCloseUnfilled2D] Warning: endAngle=' + endAngle+ ' must be within range [0..2pi)'); //(]" + "\n" + 
"    }" + "\n" + 
"\n" + 
"    // equal startAngle, endAngle means draw full circle." + "\n" + 
"    // high out-of-range endAngle is OK for local computation." + "\n" + 
"   if (startAngle >= endAngle)" + "\n" + 
"      endAngle = endAngle + 2*Math.PI;" + "\n" + 
"\n" + 
"   numOfPoints = 100;" + "\n" + 
"   differAng = Math.abs((endAngle - startAngle))/numOfPoints;" + "\n" + 
"\n" + 
"   for ( i=0 ; i<=numOfPoints +1 ; i++)" + "\n" + 
"   {" + "\n" + 
"	if ( i == numOfPoints +1)" + "\n" + 
"             arcSet3d[i] = new SFVec3f (0.0, 0.0, 0.0);" + "\n" + 
"        else" + "\n" + 
"             arcSet3d[i] = new SFVec3f ( radius*Math.cos(startAngle + i*differAng), radius*Math.sin(startAngle + i*differAng), 0.0 );" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   if (closureType =='CHORD')" + "\n" + 
"   {" + "\n" + 
"	for ( i=0 ; i<=numOfPoints +1 ; i++)" + "\n" + 
"	{" + "\n" + 
"        	if ( i == numOfPoints +1)" + "\n" + 
"             		pointIndex[i] = 0.0;" + "\n" + 
"        	else" + "\n" + 
"             		pointIndex[i] = i;" + "\n" + 
"	}" + "\n" + 
"   }" + "\n" + 
"   else" + "\n" + 
"   {" + "\n" + 
"	for ( i=0 ; i<=numOfPoints +1 ; i++)" + "\n" + 
"	{" + "\n" + 
"         pointIndex[i] = i;" + "\n" + 
"	}" + "\n" + 
"         pointIndex[i] = 0.0;" + "\n" + 
"   }" + "\n" + 
"\n" + 
"} // initialize" + "\n")
            .addField(new field().setName("closureType").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("startAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("endAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("arcSet3d").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("pointIndex").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("closureType").setProtoField("closureType"))
              .addConnect(new connect().setNodeField("startAngle").setProtoField("startAngle"))
              .addConnect(new connect().setNodeField("endAngle").setProtoField("endAngle"))
              .addConnect(new connect().setNodeField("radius").setProtoField("radius"))))
          .addChild(new ROUTE().setFromNode("ArcClose2dToLineSet3d").setFromField("arcSet3d").setToNode("ArcClose2DLineCoordinate").setToField("point"))
          .addChild(new ROUTE().setFromNode("ArcClose2dToLineSet3d").setFromField("pointIndex").setToNode("ArcPointLineIndex").setToField("set_coordIndex")))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("Circle2D").setName("Circle2D")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1))
        .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
          .addComments(" default NULL ")))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedLineSet("Circ3DPointsIndex").setDEF("Circ3DPointsIndex")
          .setCoord(new Coordinate("Circ3DPoints")))
        .addChild(new Group()
          .addChild(new Script("Circ2dToLineSet3d").setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"    if (radius < 0)" + "\n" + 
"   {" + "\n" + 
"      Browser.print ('[Circle2D] Warning:  invalid value, radius=' + value + ' must instead be >= 0');" + "\n" + 
"   }" + "\n" + 
"\n" + 
"\n" + 
"   numOfPoints = 100;" + "\n" + 
"   differAng = 2*Math.PI/numOfPoints;" + "\n" + 
"\n" + 
"   for ( i=0 ; i<=numOfPoints ; i++)" + "\n" + 
"   {" + "\n" + 
"	circSet3d[i] = new SFVec3f ( radius*Math.cos(i*differAng), radius*Math.sin(i*differAng), 0.0 );" + "\n" + 
"        circIndexSet3d[i] = i;" + "\n" + 
"   }" + "\n" + 
"\n" + 
"} // initialize" + "\n")
            .addField(new field().setName("radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("circSet3d").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("circIndexSet3d").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("radius").setProtoField("radius"))))
          .addChild(new ROUTE().setFromNode("Circ2dToLineSet3d").setFromField("circSet3d").setToNode("Circ3DPoints").setToField("point"))
          .addChild(new ROUTE().setFromNode("Circ2dToLineSet3d").setFromField("circIndexSet3d").setToNode("Circ3DPointsIndex").setToField("set_coordIndex")))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("Disk2D").setName("Disk2D")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("innerRadius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0))
        .addField(new field().setName("outerRadius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1))
        .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
          .addComments(" default NULL ")))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedFaceSet("DiskPointsIndex").setDEF("DiskPointsIndex")
          .setCoord(new Coordinate("Disk3DPoints")))
        .addChild(new Group()
          .addChild(new Script("Disk2dToFaceSet3d").setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"   if (innerRadius < 0)" + "\n" + 
"   {" + "\n" + 
"      Browser.print ('[Disk2D] Warning:  invalid value, innerRadius=' + value + ' must instead be >= 0');" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   if (outerRadius < 0)" + "\n" + 
"   {" + "\n" + 
"      Browser.print ('[Disk2D] Warning:  invalid value, outerRadius=' + value + ' must instead be >= 0');" + "\n" + 
"   }" + "\n" + 
"\n" + 
"\n" + 
"\n" + 
"   numOfPoints    = 100.0;" + "\n" + 
"   diskSet3d      = new MFVec3f();" + "\n" + 
"   diskIndexSet3d = new MFInt32();" + "\n" + 
"   differAng = 2 * Math.PI/numOfPoints;" + "\n" + 
"\n" + 
"\n" + 
"   for ( i=0 ; i<2*numOfPoints ; i++)" + "\n" + 
"   {" + "\n" + 
"        if ( i<numOfPoints)" + "\n" + 
"	     diskSet3d[i] = new SFVec3f ( innerRadius*Math.cos(i*differAng), innerRadius*Math.sin(i*differAng), 0.0 );" + "\n" + 
"        else" + "\n" + 
"             diskSet3d[i] = new SFVec3f ( outerRadius*Math.cos((i-numOfPoints-1.0)*differAng), outerRadius*Math.sin((i-numOfPoints-1.0)*differAng), 0.0 );" + "\n" + 
"   }" + "\n" + 
"\n" + 
"\n" + 
"   k=0;" + "\n" + 
"   for (i=0 ; i<numOfPoints ; i++)" + "\n" + 
"   {" + "\n" + 
"        diskIndexSet3d[k]   = i;" + "\n" + 
"        diskIndexSet3d[k+1] = i + numOfPoints;" + "\n" + 
"        diskIndexSet3d[k+2] = i + numOfPoints + 1;" + "\n" + 
"        diskIndexSet3d[k+3]   = i;" + "\n" + 
"        diskIndexSet3d[k+4] = -1;" + "\n" + 
"        diskIndexSet3d[k+5] = i+1;" + "\n" + 
"        diskIndexSet3d[k+6] = i ;" + "\n" + 
"        diskIndexSet3d[k+7] = i + numOfPoints +1;" + "\n" + 
"        diskIndexSet3d[k+8] = i +1;" + "\n" + 
"        diskIndexSet3d[k+9] = -1;" + "\n" + 
"\n" + 
"        if (i == numOfPoints-1)" + "\n" + 
"        {" + "\n" + 
"        diskIndexSet3d[k]   = i;" + "\n" + 
"        diskIndexSet3d[k+1] = i + numOfPoints;" + "\n" + 
"        diskIndexSet3d[k+2] = numOfPoints;" + "\n" + 
"        diskIndexSet3d[k+3]   = i;" + "\n" + 
"        diskIndexSet3d[k+4] = -1;" + "\n" + 
"        diskIndexSet3d[k+5] = 0;" + "\n" + 
"        diskIndexSet3d[k+6] = i;" + "\n" + 
"        diskIndexSet3d[k+7] = numOfPoints;" + "\n" + 
"        diskIndexSet3d[k+8] = 0;" + "\n" + 
"        diskIndexSet3d[k+9] = -1;" + "\n" + 
"        }" + "\n" + 
"   k=k+10;" + "\n" + 
"   }" + "\n" + 
"\n" + 
"} // initialize" + "\n")
            .addField(new field().setName("innerRadius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("outerRadius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("diskSet3d").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("diskIndexSet3d").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("innerRadius").setProtoField("innerRadius"))
              .addConnect(new connect().setNodeField("outerRadius").setProtoField("outerRadius"))))
          .addChild(new ROUTE().setFromNode("Disk2dToFaceSet3d").setFromField("diskSet3d").setToNode("Disk3DPoints").setToField("point"))
          .addChild(new ROUTE().setFromNode("Disk2dToFaceSet3d").setFromField("diskIndexSet3d").setToNode("DiskPointsIndex").setToField("set_coordIndex")))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("Polyline2D").setName("Polyline2D")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("lineSegments").setType(field.TYPE_MFVEC2F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
        .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedLineSet("LinesSegmentsIndexPoints").setDEF("LinesSegmentsIndexPoints")
          .setCoord(new Coordinate("LineSegments3DPoints")))
        .addChild(new Group()
          .addChild(new Script("LineSegments2dToLineSet3d").setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"   for ( i=0 ; i<lineSegments.length ; i++)" + "\n" + 
"   {" + "\n" + 
"          lineSegments3D[i] = new SFVec3f ( lineSegments[i].x, lineSegments[i].y, 0.0 );" + "\n" + 
"          lineSegmentsIndex[i] = i;" + "\n" + 
"   }" + "\n" + 
"\n" + 
"     lineSegmentsIndex[i] = -1;" + "\n" + 
"\n" + 
"} // initialize" + "\n")
            .addField(new field().setName("lineSegments").setType(field.TYPE_MFVEC2F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("lineSegments3D").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("lineSegmentsIndex").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("lineSegments").setProtoField("lineSegments"))))
          .addChild(new ROUTE().setFromNode("LineSegments2dToLineSet3d").setFromField("lineSegments3D").setToNode("LineSegments3DPoints").setToField("point"))
          .addChild(new ROUTE().setFromNode("LineSegments2dToLineSet3d").setFromField("lineSegmentsIndex").setToNode("LinesSegmentsIndexPoints").setToField("set_coordIndex")))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("Polypoint2D").setName("Polypoint2D")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("point").setType(field.TYPE_MFVEC2F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
          .addComments(" default NULL ")))
      .setProtoBody(new ProtoBody()
        .addChild(new PointSet()
          .setCoord(new Coordinate("Points3D")))
        .addChild(new Group()
          .addChild(new Script("Points2dToLineSet3d").setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"\n" + 
"   for ( i=0 ; i<point.length ; i++)" + "\n" + 
"   {" + "\n" + 
"          points3D[i] = new SFVec3f ( point[i].x, point[i].y, 0.0 );" + "\n" + 
"   }" + "\n" + 
"\n" + 
"} // initialize" + "\n")
            .addField(new field().setName("point").setType(field.TYPE_MFVEC2F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("points3D").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("point").setProtoField("point"))))
          .addChild(new ROUTE().setFromNode("Points2dToLineSet3d").setFromField("points3D").setToNode("Points3D").setToField("point")))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("Rectangle2D").setName("Rectangle2D").setAppinfo("Default filled matching default FillProperties filled=true.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("size").setType(field.TYPE_SFVEC2F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec2f(2.0,2.0)))
        .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
          .addComments(" default NULL ")))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,0,-1,2,3,0,2})
          .setCoord(new Coordinate("RectanglePoints")))
        .addChild(new Group()
          .addChild(new Script("Rect2dToFaceSet3d").setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"   xDim = size[0];" + "\n" + 
"   yDim = size[1];" + "\n" + 
"\n" + 
"   pointSet3d[0] = new SFVec3f ( (-xDim / 2.0), (yDim / 2.0), 0.0 );" + "\n" + 
"   pointSet3d[1] = new SFVec3f ( (-xDim / 2.0), (-yDim / 2.0), 0.0 );" + "\n" + 
"   pointSet3d[2] = new SFVec3f ( (xDim / 2.0), (-yDim / 2.0), 0.0 );" + "\n" + 
"   pointSet3d[3] = new SFVec3f ( (xDim / 2.0), (yDim / 2.0), 0.0 );" + "\n" + 
"\n" + 
"} // initialize" + "\n")
            .addField(new field().setName("size").setType(field.TYPE_SFVEC2F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("pointSet3d").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("fillNoFillSelection").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("size").setProtoField("size"))))
          .addChild(new ROUTE().setFromNode("Rect2dToFaceSet3d").setFromField("pointSet3d").setToNode("RectanglePoints").setToField("point")))))
    .addComments(" Rectangle2DUnfilled also provided since FillProperties not available in VRML 97 ")
    .addChild(new ProtoDeclare("Rectangle2DUnfilled").setName("Rectangle2DUnfilled")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("size").setType(field.TYPE_SFVEC2F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec2f(2.0,2.0)))
        .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
          .addComments(" default NULL ")))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedLineSet().setCoordIndex(new int[] {0,1,2,3,0})
          .setCoord(new Coordinate("RectanglePointsLine")))
        .addChild(new Group()
          .addChild(new Script("Rect2dToLineSet3d").setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"   xDim = size[0];" + "\n" + 
"   yDim = size[1];" + "\n" + 
"\n" + 
"   pointSet3d[0] = new SFVec3f ( (-xDim / 2.0), (yDim / 2.0), 0.0 );" + "\n" + 
"   pointSet3d[1] = new SFVec3f ( (-xDim / 2.0), (-yDim / 2.0), 0.0 );" + "\n" + 
"   pointSet3d[2] = new SFVec3f ( (xDim / 2.0), (-yDim / 2.0), 0.0 );" + "\n" + 
"   pointSet3d[3] = new SFVec3f ( (xDim / 2.0), (yDim / 2.0), 0.0 );" + "\n" + 
"\n" + 
"} // initialize" + "\n")
            .addField(new field().setName("size").setType(field.TYPE_SFVEC2F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("pointSet3d").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("fillNoFillSelection").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("size").setProtoField("size"))))
          .addChild(new ROUTE().setFromNode("Rect2dToLineSet3d").setFromField("pointSet3d").setToNode("RectanglePointsLine").setToField("point")))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("TriangleSet2D").setName("TriangleSet2D")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("vertices").setType(field.TYPE_MFVEC2F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
        .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
          .addComments(" default NULL ")))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedFaceSet("TriangleSetIndexPoints").setDEF("TriangleSetIndexPoints").setSolid(false)
          .setCoord(new Coordinate("TriangleSet3DPoints")))
        .addChild(new Group()
          .addChild(new Script("TriangleSet2dToLineSet3d").setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"   numbOfTriangles = Math.floor(vertices.length/3);" + "\n" + 
"\n" + 
"   for ( i=0 ; i<3*numbOfTriangles ; i++)" + "\n" + 
"   {" + "\n" + 
"          triangleSet3D[i] = new SFVec3f ( vertices[i].x, vertices[i].y, 0.0 );" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   k=0;" + "\n" + 
"   for (i=0; i<numbOfTriangles; i++)" + "\n" + 
"   {" + "\n" + 
"        triangleSetIndex[k] = k - i ;" + "\n" + 
"        triangleSetIndex[k+1] = k - i + 1 ;" + "\n" + 
"        triangleSetIndex[k+2] = k - i + 2 ;" + "\n" + 
"        triangleSetIndex[k+3] = -1 ;" + "\n" + 
"\n" + 
"        k=k+4;" + "\n" + 
"    }" + "\n" + 
"\n" + 
"} // initialize" + "\n")
            .addField(new field().setName("vertices").setType(field.TYPE_MFVEC2F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("triangleSet3D").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("triangleSetIndex").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("vertices").setProtoField("vertices"))))
          .addChild(new ROUTE().setFromNode("TriangleSet2dToLineSet3d").setFromField("triangleSet3D").setToNode("TriangleSet3DPoints").setToField("point"))
          .addChild(new ROUTE().setFromNode("TriangleSet2dToLineSet3d").setFromField("triangleSetIndex").setToNode("TriangleSetIndexPoints").setToField("set_coordIndex")))))
    .addComments(" ==================== ")
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.25,0.25,0.25})).setSkyColor(new MFColor(new double[] {0.25,0.25,0.25})))
    .addChild(new Anchor("LinkToExamples").setDescription("link to examples").setUrl(new String[] {"Geometry2dComponentExternProtos.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExternProtos.x3d","Geometry2dComponentExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExamples.wrl"})
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.8,0.6,0.2)))
        .setGeometry(new Text().setString(new String[] {"Geometry2dComponentPrototypes","is a developmental file.","Click this text to view","Geometry2dComponentExamples"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.75))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return Geometry2dComponentPrototypes model
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
        X3D thisExampleX3dModel = new Geometry2dComponentPrototypes().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.Geometry2dComponentPrototypes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.Geometry2dComponentPrototypes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
