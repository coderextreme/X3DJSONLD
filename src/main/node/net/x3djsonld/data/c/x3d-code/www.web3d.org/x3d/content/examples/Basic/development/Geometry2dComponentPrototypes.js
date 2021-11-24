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
 * <p> X3D Geometry2D component nodes, implemented as prototypes for developmental use to provide backwards compatibility with VRML 97. Arc2D specifies a 2D linear circular arc. ArcClose2D specifies a portion of a circle. Circle2D specifies a 2D circular line. Disk2D specifies a 2D circular disk. Polyline2D specifies 2D line segments. Polypoint2D specifies 2D point array. Rectangle2D specifies a 2D rectangle. TriangleSet2D specifies 2D triangles. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs). </p>
 <p> Related links: <a href="../../../development/Geometry2dComponentPrototypes.java">Geometry2dComponentPrototypes.java</a> source, <a href="../../../development/Geometry2dComponentPrototypesIndex.html" target="_top">Geometry2dComponentPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
	</p>

	* @author Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis
 */

function Geometry2dComponentPrototypes
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
Geometry2dComponentPrototypes.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Text string field, scene-graph level=5, element #212, 11 total values */
	this.Text_5_212_string = new autoclass.MFString(new autoclass.MFString("\"Geometry2dComponentPrototypes\" \"is a developmental file.\" \"Click this text to view\" \"Geometry2dComponentExamples\""));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("Geometry2dComponentPrototypes.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("X3D Geometry2D component nodes, implemented as prototypes for developmental use to provide backwards compatibility with VRML 97. Arc2D specifies a 2D linear circular arc. ArcClose2D specifies a portion of a circle. Circle2D specifies a 2D circular line. Disk2D specifies a 2D circular disk. Polyline2D specifies 2D line segments. Polypoint2D specifies 2D point array. Rectangle2D specifies a 2D rectangle. TriangleSet2D specifies 2D triangles. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs)."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis"))
    .addMeta((new autoclass.meta()).setName("created").setContent("14 November 2003"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("These examples are complete but only used for developmental testing, not regular X3D authoring."))
    .addMeta((new autoclass.meta()).setName("reference").setContent("Geometry2dComponentExternProtos.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("Geometry2dComponentExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D)"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addComments(" ==================== ")
    .addChild((new autoclass.WorldInfo()).setTitle("Geometry2dComponentPrototypes.x3d"))
    .addChild((new autoclass.ProtoDeclare()).setName("Arc2D")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("startAngle").setType("SFFloat").setValue("0"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("endAngle").setType("SFFloat").setValue("1.5707963265"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("radius").setType("SFFloat").setValue("1"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("Metadata node only")
          .addComments(" default NULL ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addComments(" Only the first node counts as the node type of a prototype. This node must be a geometry node. ")
        .addChild((new autoclass.IndexedLineSet("ArcIndexPoints")).setDEF("ArcIndexPoints")
          .setCoord((new autoclass.Coordinate("Arc3DPoints"))))
        .addComments(" Any nodes after initial node in a ProtoBody is not rendered. ")
        .addChild((new autoclass.Group())
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("metadata").setProtoField("metadata")))
          .addChild((new autoclass.Script("Arc2dToFaceSet3d")).setSourceCode("\n" + 
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
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("startAngle").setType("SFFloat"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("endAngle").setType("SFFloat"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("radius").setType("SFFloat"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("arcSet3d").setType("MFVec3f"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("arcIndexSet3d").setType("MFInt32"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("startAngle").setProtoField("startAngle"))
              .addConnect((new autoclass.connect()).setNodeField("endAngle").setProtoField("endAngle"))
              .addConnect((new autoclass.connect()).setNodeField("radius").setProtoField("radius"))))
          .addChild((new autoclass.ROUTE()).setFromNode("Arc2dToFaceSet3d").setFromField("arcSet3d").setToNode("Arc3DPoints").setToField("point"))
          .addChild((new autoclass.ROUTE()).setFromNode("Arc2dToFaceSet3d").setFromField("arcIndexSet3d").setToNode("ArcIndexPoints").setToField("set_coordIndex")))))
    .addComments(" ==================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("ArcClose2D")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("startAngle").setType("SFFloat").setValue("0"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("endAngle").setType("SFFloat").setValue("1.5707963265"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("radius").setType("SFFloat").setValue("1"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("closureType").setType("SFString").setValue("PIE"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool").setValue("false"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("Metadata node only")
          .addComments(" default NULL ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.IndexedFaceSet("ArcPointFaceIndex")).setDEF("ArcPointFaceIndex")
          .setCoord((new autoclass.Coordinate("ArcClose2DFaceCoordinate"))))
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Script("ArcClose2dToFaceSet3d")).setSourceCode("\n" + 
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
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("closureType").setType("SFString"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("startAngle").setType("SFFloat"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("endAngle").setType("SFFloat"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("radius").setType("SFFloat"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("arcSet3d").setType("MFVec3f"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("pointIndex").setType("MFInt32"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("closureType").setProtoField("closureType"))
              .addConnect((new autoclass.connect()).setNodeField("startAngle").setProtoField("startAngle"))
              .addConnect((new autoclass.connect()).setNodeField("endAngle").setProtoField("endAngle"))
              .addConnect((new autoclass.connect()).setNodeField("radius").setProtoField("radius"))))
          .addChild((new autoclass.ROUTE()).setFromNode("ArcClose2dToFaceSet3d").setFromField("arcSet3d").setToNode("ArcClose2DFaceCoordinate").setToField("point"))
          .addChild((new autoclass.ROUTE()).setFromNode("ArcClose2dToFaceSet3d").setFromField("pointIndex").setToNode("ArcPointFaceIndex").setToField("set_coordIndex")))))
    .addComments(" ArcClose2DUnfilled also provided since FillProperties not available in VRML 97 ")
    .addChild((new autoclass.ProtoDeclare()).setName("ArcClose2DUnfilled")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("startAngle").setType("SFFloat").setValue("0"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("endAngle").setType("SFFloat").setValue("1.5707963265"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("radius").setType("SFFloat").setValue("1"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("closureType").setType("SFString").setValue("PIE"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool").setValue("false"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("Metadata node only")
          .addComments(" default NULL ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.IndexedLineSet("ArcPointLineIndex")).setDEF("ArcPointLineIndex")
          .setCoord((new autoclass.Coordinate("ArcClose2DLineCoordinate"))))
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Script("ArcClose2dToLineSet3d")).setSourceCode("\n" + 
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
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("closureType").setType("SFString"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("startAngle").setType("SFFloat"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("endAngle").setType("SFFloat"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("radius").setType("SFFloat"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("arcSet3d").setType("MFVec3f"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("pointIndex").setType("MFInt32"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("closureType").setProtoField("closureType"))
              .addConnect((new autoclass.connect()).setNodeField("startAngle").setProtoField("startAngle"))
              .addConnect((new autoclass.connect()).setNodeField("endAngle").setProtoField("endAngle"))
              .addConnect((new autoclass.connect()).setNodeField("radius").setProtoField("radius"))))
          .addChild((new autoclass.ROUTE()).setFromNode("ArcClose2dToLineSet3d").setFromField("arcSet3d").setToNode("ArcClose2DLineCoordinate").setToField("point"))
          .addChild((new autoclass.ROUTE()).setFromNode("ArcClose2dToLineSet3d").setFromField("pointIndex").setToNode("ArcPointLineIndex").setToField("set_coordIndex")))))
    .addComments(" ==================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("Circle2D")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("radius").setType("SFFloat").setValue("1"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool").setValue("false"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("Metadata node only")
          .addComments(" default NULL ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.IndexedLineSet("Circ3DPointsIndex")).setDEF("Circ3DPointsIndex")
          .setCoord((new autoclass.Coordinate("Circ3DPoints"))))
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Script("Circ2dToLineSet3d")).setSourceCode("\n" + 
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
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("radius").setType("SFFloat"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("circSet3d").setType("MFVec3f"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("circIndexSet3d").setType("MFInt32"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("radius").setProtoField("radius"))))
          .addChild((new autoclass.ROUTE()).setFromNode("Circ2dToLineSet3d").setFromField("circSet3d").setToNode("Circ3DPoints").setToField("point"))
          .addChild((new autoclass.ROUTE()).setFromNode("Circ2dToLineSet3d").setFromField("circIndexSet3d").setToNode("Circ3DPointsIndex").setToField("set_coordIndex")))))
    .addComments(" ==================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("Disk2D")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("innerRadius").setType("SFFloat").setValue("0"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("outerRadius").setType("SFFloat").setValue("1"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool").setValue("false"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("Metadata node only")
          .addComments(" default NULL ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.IndexedFaceSet("DiskPointsIndex")).setDEF("DiskPointsIndex")
          .setCoord((new autoclass.Coordinate("Disk3DPoints"))))
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Script("Disk2dToFaceSet3d")).setSourceCode("\n" + 
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
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("innerRadius").setType("SFFloat"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("outerRadius").setType("SFFloat"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("diskSet3d").setType("MFVec3f"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("diskIndexSet3d").setType("MFInt32"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("innerRadius").setProtoField("innerRadius"))
              .addConnect((new autoclass.connect()).setNodeField("outerRadius").setProtoField("outerRadius"))))
          .addChild((new autoclass.ROUTE()).setFromNode("Disk2dToFaceSet3d").setFromField("diskSet3d").setToNode("Disk3DPoints").setToField("point"))
          .addChild((new autoclass.ROUTE()).setFromNode("Disk2dToFaceSet3d").setFromField("diskIndexSet3d").setToNode("DiskPointsIndex").setToField("set_coordIndex")))))
    .addComments(" ==================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("Polyline2D")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("lineSegments").setType("MFVec2f"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool").setValue("false"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("Metadata node only")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.IndexedLineSet("LinesSegmentsIndexPoints")).setDEF("LinesSegmentsIndexPoints")
          .setCoord((new autoclass.Coordinate("LineSegments3DPoints"))))
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Script("LineSegments2dToLineSet3d")).setSourceCode("\n" + 
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
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("lineSegments").setType("MFVec2f"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("lineSegments3D").setType("MFVec3f"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("lineSegmentsIndex").setType("MFInt32"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("lineSegments").setProtoField("lineSegments"))))
          .addChild((new autoclass.ROUTE()).setFromNode("LineSegments2dToLineSet3d").setFromField("lineSegments3D").setToNode("LineSegments3DPoints").setToField("point"))
          .addChild((new autoclass.ROUTE()).setFromNode("LineSegments2dToLineSet3d").setFromField("lineSegmentsIndex").setToNode("LinesSegmentsIndexPoints").setToField("set_coordIndex")))))
    .addComments(" ==================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("Polypoint2D")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("point").setType("MFVec2f"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("Metadata node only")
          .addComments(" default NULL ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.PointSet())
          .setCoord((new autoclass.Coordinate("Points3D"))))
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Script("Points2dToLineSet3d")).setSourceCode("\n" + 
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
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("point").setType("MFVec2f"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("points3D").setType("MFVec3f"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("point").setProtoField("point"))))
          .addChild((new autoclass.ROUTE()).setFromNode("Points2dToLineSet3d").setFromField("points3D").setToNode("Points3D").setToField("point")))))
    .addComments(" ==================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("Rectangle2D").setAppinfo("Default filled matching default FillProperties filled=true.")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("size").setType("SFVec2f").setValue("2 2"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool").setValue("false"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("Metadata node only")
          .addComments(" default NULL ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.IndexedFaceSet()).setSolid(false).setCoordIndex(java.newArray("int", [0,1,2,0,-1,2,3,0,2]))
          .setCoord((new autoclass.Coordinate("RectanglePoints"))))
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Script("Rect2dToFaceSet3d")).setSourceCode("\n" + 
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
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("size").setType("SFVec2f"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("pointSet3d").setType("MFVec3f"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("fillNoFillSelection").setType("SFInt32"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("size").setProtoField("size"))))
          .addChild((new autoclass.ROUTE()).setFromNode("Rect2dToFaceSet3d").setFromField("pointSet3d").setToNode("RectanglePoints").setToField("point")))))
    .addComments(" Rectangle2DUnfilled also provided since FillProperties not available in VRML 97 ")
    .addChild((new autoclass.ProtoDeclare()).setName("Rectangle2DUnfilled")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("size").setType("SFVec2f").setValue("2 2"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool").setValue("false"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("Metadata node only")
          .addComments(" default NULL ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,2,3,0]))
          .setCoord((new autoclass.Coordinate("RectanglePointsLine"))))
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Script("Rect2dToLineSet3d")).setSourceCode("\n" + 
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
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("size").setType("SFVec2f"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("pointSet3d").setType("MFVec3f"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("fillNoFillSelection").setType("SFInt32"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("size").setProtoField("size"))))
          .addChild((new autoclass.ROUTE()).setFromNode("Rect2dToLineSet3d").setFromField("pointSet3d").setToNode("RectanglePointsLine").setToField("point")))))
    .addComments(" ==================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("TriangleSet2D")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("vertices").setType("MFVec2f"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool").setValue("false"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("Metadata node only")
          .addComments(" default NULL ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.IndexedFaceSet("TriangleSetIndexPoints")).setDEF("TriangleSetIndexPoints").setSolid(false)
          .setCoord((new autoclass.Coordinate("TriangleSet3DPoints"))))
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Script("TriangleSet2dToLineSet3d")).setSourceCode("\n" + 
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
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("vertices").setType("MFVec2f"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("triangleSet3D").setType("MFVec3f"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("triangleSetIndex").setType("MFInt32"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("vertices").setProtoField("vertices"))))
          .addChild((new autoclass.ROUTE()).setFromNode("TriangleSet2dToLineSet3d").setFromField("triangleSet3D").setToNode("TriangleSet3DPoints").setToField("point"))
          .addChild((new autoclass.ROUTE()).setFromNode("TriangleSet2dToLineSet3d").setFromField("triangleSetIndex").setToNode("TriangleSetIndexPoints").setToField("set_coordIndex")))))
    .addComments(" ==================== ")
    .addChild((new autoclass.Background()).setGroundColor(new autoclass.MFColor(java.newArray("float", [0.25,0.25,0.25]))).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.25,0.25,0.25]))))
    .addChild((new autoclass.Anchor("LinkToExamples")).setDescription("link to examples").setUrl(new autoclass.MFString("\"Geometry2dComponentExternProtos.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExternProtos.x3d\" \"Geometry2dComponentExamples.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExamples.wrl\""))
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.8,0.6,0.2)))
        .setGeometry((new autoclass.Text()).setString(this.Text_5_212_string)
          .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.75))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return Geometry2dComponentPrototypes model
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
		var testObject = new Geometry2dComponentPrototypes();
		console.log ("Geometry2dComponentPrototypes execution self-validation test results: " + testObject.validateSelf());
	}
}
new Geometry2dComponentPrototypes().main();
process.exit(0);