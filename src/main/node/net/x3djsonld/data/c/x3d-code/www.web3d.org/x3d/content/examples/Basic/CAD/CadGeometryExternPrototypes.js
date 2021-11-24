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
 <p> Related links: <a href="../../../CAD/CadGeometryExternPrototypes.java">CadGeometryExternPrototypes.java</a> source, <a href="../../../CAD/CadGeometryExternPrototypesIndex.html" target="_top">CadGeometryExternPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../CAD/CadGeometryExternPrototypes.x3d">CadGeometryExternPrototypes.x3d</a> </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> information </i> </td>
			<td> Example scenes using these prototypes do not get support for making embedded metadata values visible at run time, though separate metadata nodes can certainly be saved in the scene file OK. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../CAD/CadGeometryPrototypes.x3d">CadGeometryPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../CAD/CadTeapot.x3d">CadTeapot.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> CADAssembly CADFace CADLayer CADPart IndexedQuadSet QuadSet </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/CADGeometry.html" target="_blank">https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/CADGeometry.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryExternPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryExternPrototypes.x3d</a> </td>
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

function CadGeometryExternPrototypes
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
CadGeometryExternPrototypes.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: ExternProtoDeclare appinfo field, scene-graph level=3, element #19, 76 total values */
	this.ExternProtoDeclare_IndexedQuadSet_3_19_appinfo = new autoclass.SFString("The IndexedQuadSet node represents a 3D shape composed of a collection of individual quadrilaterals (quads). IndexedQuadSet uses the indices in its index field to specify the vertices of each quad from the coord field. Each quad is formed from a set of four vertices of the Coordinate node identified by four consecutive indices from the index field If the index field does not contain a multiple of four coordinate values the remaining vertices shall be ignored.");

	/** Large attribute array: ExternProtoDeclare documentation field, scene-graph level=3, element #19, 1 total value */
	this.ExternProtoDeclare_IndexedQuadSet_3_19_documentation = new autoclass.SFString("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#IndexedQuadSet");

	/** Large attribute array: ExternProtoDeclare appinfo field, scene-graph level=3, element #32, 65 total values */
	this.ExternProtoDeclare_QuadSet_3_32_appinfo = new autoclass.SFString("The QuadSet node represents a 3D shape that represents a collection of individual planar quadrilaterals. The coord field contains a Coordinate node that defines the 3D vertices that define the quad. Each quad is formed from a consecutive set of four vertices of the coordinate node. If the coordinate node does not contain a multiple of four coordinate values the remaining vertices shall be ignored.");

	/** Large attribute array: ExternProtoDeclare documentation field, scene-graph level=3, element #32, 1 total value */
	this.ExternProtoDeclare_QuadSet_3_32_documentation = new autoclass.SFString("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#QuadSet");

	/** Large attribute array: ExternProtoDeclare documentation field, scene-graph level=3, element #44, 1 total value */
	this.ExternProtoDeclare_CADLayer_3_44_documentation = new autoclass.SFString("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#CADLayer");

	/** Large attribute array: ExternProtoDeclare documentation field, scene-graph level=3, element #53, 1 total value */
	this.ExternProtoDeclare_CADAssembly_3_53_documentation = new autoclass.SFString("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#CADAssembly");

	/** Large attribute array: ExternProtoDeclare documentation field, scene-graph level=3, element #61, 1 total value */
	this.ExternProtoDeclare_CADPart_3_61_documentation = new autoclass.SFString("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#CADPart");

	/** Large attribute array: ExternProtoDeclare documentation field, scene-graph level=3, element #74, 1 total value */
	this.ExternProtoDeclare_CADFace_3_74_documentation = new autoclass.SFString("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#CADFace");
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.1")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("CadGeometryExternPrototypes.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("This scene provides tool developers with X3D Amendment 1 CAD Component node prototypes, providing backwards compatibility with VRML97 and X3D v3.0."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Travis Rauch, Alan Shaffer, Mounir Sidhom, Patrick Sullivan and Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("28 April 2005"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("Do not use these prototypes in an up-to-date X3D browser that already provides CAD support."))
    .addMeta((new autoclass.meta()).setName("information").setContent("Recommended practice: avoid using these prototypes, instead use native definitions for CAD nodes using an up-to-date X3D browser."))
    .addMeta((new autoclass.meta()).setName("information").setContent("These scenes are not intended for regular authoring - use X3D v3.2 CAD component instead. Example scenes using these prototypes do not get support for making embdedded metadata values visible at run time, though metadata can certainly be saved in the scene file OK."))
    .addMeta((new autoclass.meta()).setName("information").setContent("Example scenes using these prototypes do not get support for making embedded metadata values visible at run time, though separate metadata nodes can certainly be saved in the scene file OK."))
    .addMeta((new autoclass.meta()).setName("reference").setContent("CadGeometryPrototypes.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("CadTeapot.x3d"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("CADAssembly CADFace CADLayer CADPart IndexedQuadSet QuadSet"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/CADGeometry.html"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryExternPrototypes.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("CadGeometryExternPrototypes.x3d"))
    .addChild((new autoclass.ExternProtoDeclare()).setName("IndexedQuadSet").setAppinfo(this.ExternProtoDeclare_IndexedQuadSet_3_19_appinfo).setUrl(new autoclass.MFString("\"CadGeometryPrototypes.x3d#IndexedQuadSet\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#IndexedQuadSet\" \"CadGeometryPrototypes.wrl#IndexedQuadSet\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#IndexedQuadSet\"")).setDocumentation(this.ExternProtoDeclare_IndexedQuadSet_3_19_documentation)
      .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_index").setType("MFInt32"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("color").setType("SFNode").setAppinfo("[X3DColorNode]"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("coord").setType("SFNode").setAppinfo("[X3DCoordinateNode]"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("fogCoord").setType("SFNode").setAppinfo("[FogCoordinate]"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("normal").setType("SFNode").setAppinfo("[X3DNormalNode]"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("texCoord").setType("SFNode").setAppinfo("[X3DTextureCoordinateNode]"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("ccw").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("colorPerVertex").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("normalPerVertex").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("index").setType("MFInt32"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addComments(" =========================================== ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("QuadSet").setAppinfo(this.ExternProtoDeclare_QuadSet_3_32_appinfo).setUrl(new autoclass.MFString("\"CadGeometryPrototypes.x3d#QuadSet\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#QuadSet\" \"CadGeometryPrototypes.wrl#QuadSet\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#QuadSet\"")).setDocumentation(this.ExternProtoDeclare_QuadSet_3_32_documentation)
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("attrib").setType("MFNode").setAppinfo("[X3DVertexAttributeNode]"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("color").setType("SFNode").setAppinfo("[X3DColorNode]"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("coord").setType("SFNode").setAppinfo("[X3DCoordinateNode]"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("fogCoord").setType("SFNode").setAppinfo("[FogCoordinate]"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("normal").setType("SFNode").setAppinfo("[X3DNormalNode]"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("texCoord").setType("SFNode").setAppinfo("[X3DTextureCoordinateNode]"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("ccw").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("colorPerVertex").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("normalPerVertex").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("solid").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addComments(" ======================================== ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("CADLayer").setAppinfo("The CADLayer node defines a hierarchy of nodes used for showing layer structure.").setUrl(new autoclass.MFString("\"CadGeometryPrototypes.x3d#CADLayer\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#CADLayer\" \"CadGeometryPrototypes.wrl#CADLayer\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#CADLayer\"")).setDocumentation(this.ExternProtoDeclare_CADLayer_3_44_documentation)
      .addField((new autoclass.field()).setAccessType("inputOnly").setName("addChildren").setType("MFNode"))
      .addField((new autoclass.field()).setAccessType("inputOnly").setName("removeChildren").setType("MFNode"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("children").setType("MFNode"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("visible").setType("MFBool"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxCenter").setType("SFVec3f"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxSize").setType("SFVec3f"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addComments(" ======================================== ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("CADAssembly").setAppinfo("The CADAssembly node holds a set of assemblies or parts grouped together.").setUrl(new autoclass.MFString("\"CadGeometryPrototypes.x3d#CADAssembly\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#CADAssembly\" \"CadGeometryPrototypes.wrl#CADAssembly\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#CADAssembly\"")).setDocumentation(this.ExternProtoDeclare_CADAssembly_3_53_documentation)
      .addField((new autoclass.field()).setAccessType("inputOnly").setName("addChildren").setType("MFNode"))
      .addField((new autoclass.field()).setAccessType("inputOnly").setName("removeChildren").setType("MFNode"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("children").setType("MFNode"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxCenter").setType("SFVec3f"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxSize").setType("SFVec3f"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addComments(" ======================================== ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("CADPart").setAppinfo("CADPart represents the location and faces that constitute a part").setUrl(new autoclass.MFString("\"CadGeometryPrototypes.wrl#CADPart\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#CADPart\" \"CadGeometryPrototypes.x3d#CADPart\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#CADPart\"")).setDocumentation(this.ExternProtoDeclare_CADPart_3_61_documentation)
      .addField((new autoclass.field()).setAccessType("inputOnly").setName("addChildren").setType("MFNode"))
      .addField((new autoclass.field()).setAccessType("inputOnly").setName("removeChildren").setType("MFNode"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("children").setType("MFNode"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("translation").setType("SFVec3f"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("rotation").setType("SFRotation"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("center").setType("SFVec3f"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("scale").setType("SFVec3f"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("scaleOrientation").setType("SFRotation"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxCenter").setType("SFVec3f"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxSize").setType("SFVec3f"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addComments(" ======================================== ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("CADFace").setAppinfo("The CADFace node holds the geometry representing a face of a part.").setUrl(new autoclass.MFString("\"CadGeometryPrototypes.x3d#CADFace\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#CADFace\" \"CadGeometryPrototypes.wrl#CADFace\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#CADFace\"")).setDocumentation(this.ExternProtoDeclare_CADFace_3_74_documentation)
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("shape").setType("SFNode"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxCenter").setType("SFVec3f"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxSize").setType("SFVec3f"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode")))
    .addComments(" ======================================== ")
    .addChild((new autoclass.Transform()).setTranslation(0.0,-2.0,0.0)
      .addChild((new autoclass.Anchor()).setDescription("CAD Teapot").setUrl(new autoclass.MFString("\"CadTeapot.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CadTeapot.x3d\" \"CadTeapot.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/CAD/CadTeapot.wrl\""))
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Example CAD structure nodes\" \"are found in CadTeapot.x3d\""))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.9)))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.2))))))
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
   * @return CadGeometryExternPrototypes model
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
		var testObject = new CadGeometryExternPrototypes();
		console.log ("CadGeometryExternPrototypes execution self-validation test results: " + testObject.validateSelf());
	}
}
new CadGeometryExternPrototypes().main();
process.exit(0);