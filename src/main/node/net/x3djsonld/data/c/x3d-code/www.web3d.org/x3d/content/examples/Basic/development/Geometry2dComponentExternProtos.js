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
 * <p> ExternProto declarations and examples for developmental use showing X3D Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D), implemented as prototypes for backwards compatibility with VRML 97. Also provides Unfilled ProtoInstance versions of some nodes since FillProperties not possible in VRML 97. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs). </p>
 <p> Related links: <a href="../../../development/Geometry2dComponentExternProtos.java">Geometry2dComponentExternProtos.java</a> source, <a href="../../../development/Geometry2dComponentExternProtosIndex.html" target="_top">Geometry2dComponentExternProtos catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExternProtos.x3d">Geometry2dComponentExternProtos.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> ExternProto declarations and examples for developmental use showing X3D Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D), implemented as prototypes for backwards compatibility with VRML 97. Also provides Unfilled ProtoInstance versions of some nodes since FillProperties not possible in VRML 97. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs). </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 16 November 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> Check Polypoint2D and point rendering order </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> These examples are complete but only used for developmental testing, not regular X3D authoring. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/Geometry2dComponentPrototypes.x3d">Geometry2dComponentPrototypes.x3d</a> </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExternProtos.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExternProtos.x3d</a> </td>
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

function Geometry2dComponentExternProtos
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
Geometry2dComponentExternProtos.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("Geometry2dComponentExternProtos.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("ExternProto declarations and examples for developmental use showing X3D Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D), implemented as prototypes for backwards compatibility with VRML 97. Also provides Unfilled ProtoInstance versions of some nodes since FillProperties not possible in VRML 97. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs)."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis"))
    .addMeta((new autoclass.meta()).setName("created").setContent("16 November 2003"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("Check Polypoint2D and point rendering order"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("These examples are complete but only used for developmental testing, not regular X3D authoring."))
    .addMeta((new autoclass.meta()).setName("reference").setContent("Geometry2dComponentPrototypes.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("Geometry2dComponentExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D)"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExternProtos.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addComments(" ==================== ")
    .addComments(" Do not copy these ExternProtoDeclare statements! They are copied automatically to provide backwards compatibility for VRML97 when using X3dToVrml97.xslt stylesheet mappings. ")
    .addComments(" ==================== ")
    .addChild((new autoclass.WorldInfo()).setTitle("Geometry2dComponentExternProtos.x3d"))
    .addChild((new autoclass.ExternProtoDeclare()).setName("Arc2D").setUrl(new autoclass.MFString("\"Geometry2dComponentPrototypes.wrl#Arc2D\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Arc2D\" \"Geometry2dComponentPrototypes.x3d#Arc2D\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Arc2D\""))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("startAngle").setType("SFFloat"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("endAngle").setType("SFFloat"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("radius").setType("SFFloat"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArcClose2D").setUrl(new autoclass.MFString("\"Geometry2dComponentPrototypes.wrl#ArcClose2D\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#ArcClose2D\" \"Geometry2dComponentPrototypes.x3d#ArcClose2D\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#ArcClose2D\""))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("startAngle").setType("SFFloat"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("endAngle").setType("SFFloat"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("radius").setType("SFFloat"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("closureType").setType("SFString"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("Circle2D").setUrl(new autoclass.MFString("\"Geometry2dComponentPrototypes.wrl#Circle2D\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Circle2D\" \"Geometry2dComponentPrototypes.x3d#Circle2D\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Circle2D\""))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("radius").setType("SFFloat"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("Disk2D").setUrl(new autoclass.MFString("\"Geometry2dComponentPrototypes.wrl#Disk2D\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Disk2D\" \"Geometry2dComponentPrototypes.x3d#Disk2D\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Disk2D\""))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("innerRadius").setType("SFFloat"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("outerRadius").setType("SFFloat"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("Polyline2D").setUrl(new autoclass.MFString("\"Geometry2dComponentPrototypes.wrl#Polyline2D\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Polyline2D\" \"Geometry2dComponentPrototypes.x3d#Polyline2D\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Polyline2D\""))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("lineSegments").setType("MFVec2f"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("Polypoint2D").setUrl(new autoclass.MFString("\"Geometry2dComponentPrototypes.wrl#Polypoint2D\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Polypoint2D\" \"Geometry2dComponentPrototypes.x3d#Polypoint2D\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Polypoint2D\""))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("point").setType("MFVec2f"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("Rectangle2D").setUrl(new autoclass.MFString("\"Geometry2dComponentPrototypes.wrl#Rectangle2D\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Rectangle2D\" \"Geometry2dComponentPrototypes.x3d#Rectangle2D\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Rectangle2D\""))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("size").setType("SFVec2f"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("TriangleSet2D").setUrl(new autoclass.MFString("\"Geometry2dComponentPrototypes.wrl#TriangleSet2D\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#TriangleSet2D\" \"Geometry2dComponentPrototypes.x3d#TriangleSet2D\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#TriangleSet2D\""))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("vertices").setType("MFVec2f"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addComments(" ==================== ")
    .addComments(" Additional Unfilled versions since FillProperties node not possible in native VRML 97 ")
    .addComments(" ==================== ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArcClose2DUnfilled").setUrl(new autoclass.MFString("\"Geometry2dComponentPrototypes.wrl#ArcClose2DUnfilled\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#ArcClose2DUnfilled\" \"Geometry2dComponentPrototypes.x3d#ArcClose2DUnfilled\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#ArcClose2DUnfilled\""))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("startAngle").setType("SFFloat"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("endAngle").setType("SFFloat"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("radius").setType("SFFloat"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("closureType").setType("SFString"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("Rectangle2DUnfilled").setUrl(new autoclass.MFString("\"Geometry2dComponentPrototypes.wrl#Rectangle2DUnfilled\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Rectangle2DUnfilled\" \"Geometry2dComponentPrototypes.x3d#Rectangle2DUnfilled\" \"https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Rectangle2DUnfilled\""))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("size").setType("SFVec2f"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addComments(" ==================== ")
    .addComments(" ==================== ")
    .addChild((new autoclass.Background()).setGroundColor(new autoclass.MFColor(java.newArray("float", [0.3,0.3,0.3]))).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.3,0.3,0.3]))))
    .addChild((new autoclass.Viewpoint()).setDescription("Geometry2D Component Examples").setPosition(0.0,0.0,12.0))
    .addComments(" ==================== ")
    .addComments(" Top row ")
    .addChild((new autoclass.Transform()).setTranslation(-5.0,2.0,0.0)
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.ProtoInstance()).setName("ArcClose2D")
          .addFieldValue((new autoclass.fieldValue()).setName("closureType").setValue("PIE"))
          .addFieldValue((new autoclass.fieldValue()).setName("startAngle").setValue("0.7"))
          .addFieldValue((new autoclass.fieldValue()).setName("endAngle").setValue("3"))
          .addFieldValue((new autoclass.fieldValue()).setName("radius").setValue("1")))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,1.0)))))
    .addChild((new autoclass.Transform("ArcClose2DUnfilledTransform")).setTranslation(-2.5,2.0,0.0)
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.ProtoInstance()).setName("ArcClose2DUnfilled")
          .addFieldValue((new autoclass.fieldValue()).setName("closureType").setValue("PIE"))
          .addFieldValue((new autoclass.fieldValue()).setName("startAngle").setValue("0.7"))
          .addFieldValue((new autoclass.fieldValue()).setName("endAngle").setValue("3"))
          .addFieldValue((new autoclass.fieldValue()).setName("radius").setValue("1")))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setEmissiveColor(0.2,0.2,1.0)))))
    .addChild((new autoclass.Transform()).setTranslation(-0.5,2.0,0.0)
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.ProtoInstance()).setName("Arc2D")
          .addFieldValue((new autoclass.fieldValue()).setName("startAngle").setValue("0"))
          .addFieldValue((new autoclass.fieldValue()).setName("endAngle").setValue("1.570796"))
          .addFieldValue((new autoclass.fieldValue()).setName("radius").setValue("1")))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,0.0)))))
    .addChild((new autoclass.Transform()).setTranslation(2.0,2.0,0.0)
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.ProtoInstance()).setName("Circle2D")
          .addFieldValue((new autoclass.fieldValue()).setName("radius").setValue("1")))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,0.0,0.0)))))
    .addChild((new autoclass.Transform()).setTranslation(5.0,2.0,0.0)
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.ProtoInstance()).setName("Disk2D")
          .addFieldValue((new autoclass.fieldValue()).setName("innerRadius").setValue("0.5"))
          .addFieldValue((new autoclass.fieldValue()).setName("outerRadius").setValue("1")))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.5,1.0,1.0)))))
    .addComments(" ==================== ")
    .addComments(" Bottom row ")
    .addChild((new autoclass.Transform()).setTranslation(-5.0,-2.0,0.0)
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.ProtoInstance()).setName("Rectangle2D")
          .addFieldValue((new autoclass.fieldValue()).setName("size").setValue("1 2")))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0)))))
    .addChild((new autoclass.Transform("RectangleUnfilled")).setTranslation(-3.0,-2.0,0.0)
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.ProtoInstance()).setName("Rectangle2DUnfilled")
          .addFieldValue((new autoclass.fieldValue()).setName("size").setValue("1 2")))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,0.2,0.2)))))
    .addChild((new autoclass.Transform()).setTranslation(-0.5,-2.0,0.0)
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.ProtoInstance()).setName("Polyline2D")
          .addFieldValue((new autoclass.fieldValue()).setName("lineSegments").setValue("-1 0 -0.5 1 0 0 0.5 1 1 0")))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(1.0,0.5,1.0)))))
    .addChild((new autoclass.Transform()).setTranslation(2.5,-2.0,0.0)
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.ProtoInstance()).setName("Polypoint2D")
          .addFieldValue((new autoclass.fieldValue()).setName("point").setValue("-1 0 -0.5 1 0 0 0.5 1 1 0")))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0))))
      .addChild((new autoclass.Transform()).setTranslation(0.0,0.5,-0.5)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.ProtoInstance("BackDrop", "Rectangle2D")).setDEF("BackDrop").setName("Rectangle2D")
            .addFieldValue((new autoclass.fieldValue()).setName("size").setValue("2.5 2")))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,0.0))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,-0.15,0.2)
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"PolyPoint2D\" \"5 points\""))
              .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.25).setCssStyle("BOLD")))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material())))))))
    .addChild((new autoclass.Transform()).setTranslation(5.0,-2.0,0.0)
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.ProtoInstance()).setName("TriangleSet2D")
          .addFieldValue((new autoclass.fieldValue()).setName("vertices").setValue("0 0 1 1 -1 1 0 0 1 0.5 1 -0.5 0 0 -1 -2 -2 -1")))
        .setAppearance((new autoclass.Appearance())
          .setFillProperties((new autoclass.FillProperties("TestFillProperties")))
          .setLineProperties((new autoclass.LineProperties("TestLineProperties")).setLinewidthScaleFactor(1)
            .setMetadata((new autoclass.MetadataString("TestLinePropertiesMetaData")).setName("test LineProperties metadata child")))
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,1.0,0.0))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return Geometry2dComponentExternProtos model
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
		var testObject = new Geometry2dComponentExternProtos();
		console.log ("Geometry2dComponentExternProtos execution self-validation test results: " + testObject.validateSelf());
	}
}
new Geometry2dComponentExternProtos().main();
process.exit(0);