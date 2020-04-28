package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.CAD;
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.CADGeometry.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CubeMapTexturing.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.Followers.*;
import org.web3d.x3d.jsail.Geometry2D.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.KeyDeviceSensor.*;
import org.web3d.x3d.jsail.Layering.*;
import org.web3d.x3d.jsail.Layout.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.NURBS.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.ParticleSystems.*;
import org.web3d.x3d.jsail.Picking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing3D.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;
import org.web3d.x3d.jsail.VolumeRendering.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.sai.*;
import org.web3d.x3d.sai.CADGeometry.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.CubeMapTexturing.*;
import org.web3d.x3d.sai.DIS.*;
import org.web3d.x3d.sai.EnvironmentalEffects.*;
import org.web3d.x3d.sai.EnvironmentalSensor.*;
import org.web3d.x3d.sai.EventUtilities.*;
import org.web3d.x3d.sai.Followers.*;
import org.web3d.x3d.sai.Geometry2D.*;
import org.web3d.x3d.sai.Geometry3D.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.Interpolation.*;
import org.web3d.x3d.sai.KeyDeviceSensor.*;
import org.web3d.x3d.sai.Layering.*;
import org.web3d.x3d.sai.Layout.*;
import org.web3d.x3d.sai.Lighting.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.sai.Navigation.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.ParticleSystems.*;
import org.web3d.x3d.sai.Picking.*;
import org.web3d.x3d.sai.PointingDeviceSensor.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.Scripting.*;
import org.web3d.x3d.sai.Shaders.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Sound.*;
import org.web3d.x3d.sai.Text.*;
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Time.*;
import org.web3d.x3d.sai.VolumeRendering.*;
public class CadGeometryPrototypes {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new CadGeometryPrototypes().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
ProtoInstanceObject ProtoInstance1 = null;
ProtoInstanceObject ProtoInstance2 = null;
ProtoInstanceObject ProtoInstance3 = null;
ProtoInstanceObject ProtoInstance4 = null;
ProtoInstanceObject ProtoInstance5 = null;
ProtoInstanceObject ProtoInstance6 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.1")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("CadGeometryPrototypes.x3d"))
        .addMeta(new metaObject().setName("description").setContent("This scene provides tool developers with X3D Amendment 1 CAD Component node prototypes, providing backwards compatibility with VRML97 and X3D v3.0."))
        .addMeta(new metaObject().setName("creator").setContent("Travis Rauch, Alan Shaffer, Mounir Sidhom, Patrick Sullivan and Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("28 April 2005"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("warning").setContent("Do not use these prototypes in an up-to-date X3D browser that already provides CAD support."))
        .addMeta(new metaObject().setName("information").setContent("Recommended practice: avoid using these prototypes, instead use native definitions for CAD nodes using an up-to-date X3D browser."))
        .addMeta(new metaObject().setName("information").setContent("These scenes are not intended for regular authoring - use X3D v3.2 CAD component instead. Example scenes using these prototypes do not get support for making embdedded metadata values visible at run time, though metadata can certainly be saved in the scene file OK."))
        .addMeta(new metaObject().setName("reference").setContent("CadGeometryExternPrototypes.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/CADGeometry.html"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/CADInterchange.html"))
        .addMeta(new metaObject().setName("subject").setContent("CADAssembly CADFace CADLayer CADPart IndexedQuadSet QuadSet"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("==========================================="))
        .addChild(new WorldInfoObject().setTitle("CadGeometryPrototypes.x3d"))
        .addChild(new ProtoDeclareObject().setName("IndexedQuadSet").setAppinfo("The IndexedQuadSet node represents a 3D shape composed of a collection of individual quadrilaterals (quads). IndexedQuadSet uses the indices in its index field to specify the vertices of each quad from the coord field. Each quad is formed from a set of four vertices of the Coordinate node identified by four consecutive indices from the index field If the index field does not contain a multiple of four coordinate values the remaining vertices shall be ignored.").setDocumentation("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#IndexedQuadSet")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFInt32").setName("set_index").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("range [0..∞) or -1")
              .addComments(new CommentsBlock("No specific initialization value")))
            .addField(new fieldObject().setType("MFNode").setName("attrib").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DVertexAttributeNode]")
              .addComments(new CommentsBlock("Specification initialization: NULL node")))
            .addField(new fieldObject().setType("SFNode").setName("color").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DColorNode]")
              .addComments(new CommentsBlock("Specification initialization: NULL node")))
            .addField(new fieldObject().setType("SFNode").setName("coord").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DCoordinateNode]")
              .addComments(new CommentsBlock("Specification initialization: NULL node")))
            .addField(new fieldObject().setType("SFNode").setName("fogCoord").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[FogCoordinate]")
              .addComments(new CommentsBlock("Specification initialization: NULL node")))
            .addField(new fieldObject().setType("SFNode").setName("normal").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DNormalNode]")
              .addComments(new CommentsBlock("Specification initialization: NULL node")))
            .addField(new fieldObject().setType("SFNode").setName("texCoord").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DTextureCoordinateNode]")
              .addComments(new CommentsBlock("Specification initialization: NULL node")))
            .addField(new fieldObject().setType("SFBool").setName("ccw").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("true"))
            .addField(new fieldObject().setType("SFBool").setName("colorPerVertex").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("colorPerVertex ignored in IndexedQuadSet, and always treated as true").setValue("true"))
            .addField(new fieldObject().setType("SFBool").setName("normalPerVertex").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("true"))
            .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("true"))
            .addField(new fieldObject().setType("MFInt32").setName("index").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("range [0..∞) or -1")
              .addComments(new CommentsBlock("No specific initialization value")))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DMetadataObject]")
              .addComments(new CommentsBlock("Specification initialization: NULL node"))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new IndexedFaceSetObject().setDEF("RenderedIQS")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("attrib").setProtoField("attrib"))
                .addConnect(new connectObject().setNodeField("color").setProtoField("color"))
                .addConnect(new connectObject().setNodeField("colorPerVertex").setProtoField("colorPerVertex"))
                .addConnect(new connectObject().setNodeField("coord").setProtoField("coord"))
                .addConnect(new connectObject().setNodeField("fogCoord").setProtoField("fogCoord"))
                .addConnect(new connectObject().setNodeField("normal").setProtoField("normal"))
                .addConnect(new connectObject().setNodeField("texCoord").setProtoField("texCoord"))
                .addConnect(new connectObject().setNodeField("ccw").setProtoField("ccw"))
                .addConnect(new connectObject().setNodeField("normalPerVertex").setProtoField("normalPerVertex"))
                .addConnect(new connectObject().setNodeField("solid").setProtoField("solid"))))
            .addComments(new CommentsBlock("Initial node in the PROTO body is actual node type, and the only node rendered. Remaining ProtoBody nodes not rendered"))
            .addChild(new GroupObject().setDEF("UnrenderedIQS")
              .addChild(new ScriptObject().setDEF("IndexedQuadSetToIndexedFaceSet").setDirectOutput(true)
                .addField(new fieldObject().setType("MFInt32").setName("index").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("MFInt32").setName("set_index").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType("SFNode").setName("renderedIQS").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
                  .addChild(new IndexedFaceSetObject().setUSE("RenderedIQS")))
                .addField(new fieldObject().setType("SFBool").setName("localTraceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("true"))
                .addField(new fieldObject().setType("MFInt32").setName("coordIndexNew").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
                  .addComments(new CommentsBlock("constructed during initialization")))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("index").setProtoField("index"))
                  .addConnect(new connectObject().setNodeField("set_index").setProtoField("set_index")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"	//colorPerVertex ignored in IndexedQuadSet, and always treated as \"true\"\n"+
"	RenderedIQS.colorPerVertex = true;\n"+
"\n"+
"	// index is an array of quad indices. The ordering of\n"+
"	// the vertices is ccw (counter-clockwise).\n"+
"\n"+
"	// ensure legal index values\n"+
"	for (ii=0; ii <= index.length-1; ii++)\n"+
"	{\n"+
"	  if (index[ii] < -1)\n"+
"	  {\n"+
"		alwaysPrint ('error, index[' + ii + ']=' + index[ii] + ' is illegal value');\n"+
"		return;\n"+
"	  }\n"+
"	}\n"+
"	tracePrint ('index.length=' + index.length);\n"+
"	tracePrint ('index=' + index);\n"+
"\n"+
"	if (index.length < 4)\n"+
"	{\n"+
"		alwaysPrint ('warning, index.length=' + index.length + ' insufficient to construct a quad, IQS ignored');\n"+
"		return;\n"+
"	}\n"+
"\n"+
"	coordIndexNew = new MFInt32 ();\n"+
"\n"+
"	// ii walks through index array,\n"+
"	// goal is to initialize coordIndexNew list to match quads\n"+
"	for (ii=0; ii <= index.length-1; ii+=4)\n"+
"	{\n"+
"		if ((index[ii]   == index[ii+1]) || (index[ii]   == index[ii+2]) || (index[ii] == index[ii+3]) ||\n"+
"		    (index[ii+1] == index[ii+2]) || (index[ii+1] == index[ii+3]) ||\n"+
"		    (index[ii+2] == index[ii+3]))\n"+
"		{\n"+
"			alwaysPrint ('index=' + index);\n"+
"			alwaysPrint ('error, pair of equal indices in quad');\n"+
"			return;\n"+
"		}\n"+
"\n"+
"		if (index[ii] >= 0)\n"+
"		{\n"+
"			// add another quad from latest 4 points of fan set to IQS\n"+
"			// order is ccw, i.e. in correct halfplane direction\n"+
"			// note: there is an implicit \"malloc\" here for the'length' element of the array\n"+
"			coordIndexNew [coordIndexNew.length] = index[ii];\n"+
"			coordIndexNew [coordIndexNew.length] = index[ii+1];\n"+
"			coordIndexNew [coordIndexNew.length] = index[ii+2];\n"+
"			coordIndexNew [coordIndexNew.length] = index[ii+3];\n"+
"			coordIndexNew [coordIndexNew.length] = -1;\n"+
"		}\n"+
"\n"+
"		if (index.length % 4 != 0) {\n"+
"			alwaysPrint ('error, index field does not contain a multiple of four coordinate values.');\n"+
"			alwaysPrint ('The remaining vertices shall be ignored');\n"+
"			return;\n"+
"		}\n"+
"\n"+
"	  // incremental trace of array being built\n"+
"	  tracePrint ('coordIndexNew=' + coordIndexNew);\n"+
"	}\n"+
"	renderedIQS.set_coordIndex = coordIndexNew;\n"+
"	tracePrint ('renderedIQS.coordIndex=' + renderedIQS.coordIndex);\n"+
"	// match colorIndex if any Color node exists\n"+
"//	if (nodesHolder.color)\n"+
"//	{\n"+
"//	  if (nodesHolder.color.color.length > 0)\n"+
"//	  {\n"+
"		//  Could implement color count check here\n"+
"//	  }\n"+
"//	}\n"+
"\n"+
"	// no need to set colorIndex since indexedFaceSet semantics handles this\n"+
"}\n"+
"function set_index (value, timestamp)\n"+
"{\n"+
"	index = value;\n"+
"	initialize ();\n"+
"}\n"+
"function tracePrint(outputString)\n"+
"{\n"+
"    if (localTraceEnabled)\n"+
"	  Browser.print ('[IndexedQuadSet]' + outputString);\n"+
"}\n"+
"function alwaysPrint(outputString)\n"+
"{\n"+
"	Browser.print ('[IndexedQuadSet]' + outputString);\n"+
"}"))
              .addChild(new GroupObject()
                .setMetadata(new MetadataStringObject().setName("metadataHolder")
                  .setIS(new ISObject()
                    .addConnect(new connectObject().setNodeField("metadata").setProtoField("metadata"))))))))
        .addComments(new CommentsBlock("==========================================="))
        .addChild(new ProtoDeclareObject().setName("QuadSet").setAppinfo("The QuadSet node represents a 3D shape that represents a collection of individual planar quadrilaterals. The coord field contains a Coordinate node that defines the 3D vertices that define the quad. Each quad is formed from a consecutive set of four vertices of the coordinate node. If the coordinate node does not contain a multiple of four coordinate values the remaining vertices shall be ignored.").setDocumentation("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#QuadSet")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFNode").setName("attrib").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DVertexAttributeNode]")
              .addComments(new CommentsBlock("Specification initialization: NULL node")))
            .addField(new fieldObject().setType("SFNode").setName("color").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DColorNode]")
              .addComments(new CommentsBlock("Specification initialization: NULL node")))
            .addField(new fieldObject().setType("SFNode").setName("coord").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DCoordinateNode]")
              .addComments(new CommentsBlock("Specification initialization: NULL node")))
            .addField(new fieldObject().setType("SFNode").setName("fogCoord").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[FogCoordinate]")
              .addComments(new CommentsBlock("Specification initialization: NULL node")))
            .addField(new fieldObject().setType("SFNode").setName("normal").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DNormalNode]")
              .addComments(new CommentsBlock("Specification initialization: NULL node")))
            .addField(new fieldObject().setType("SFNode").setName("texCoord").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DTextureCoordinateNode]")
              .addComments(new CommentsBlock("Specification initialization: NULL node")))
            .addField(new fieldObject().setType("SFBool").setName("ccw").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("true"))
            .addField(new fieldObject().setType("SFBool").setName("colorPerVertex").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("colorPerVertex ignored in QuadSet, and always treated as true").setValue("true"))
            .addField(new fieldObject().setType("SFBool").setName("normalPerVertex").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("true"))
            .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("true"))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DMetadataObject]")
              .addComments(new CommentsBlock("Specification initialization: NULL node"))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new IndexedFaceSetObject().setDEF("RenderedQS")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("attrib").setProtoField("attrib"))
                .addConnect(new connectObject().setNodeField("color").setProtoField("color"))
                .addConnect(new connectObject().setNodeField("colorPerVertex").setProtoField("colorPerVertex"))
                .addConnect(new connectObject().setNodeField("coord").setProtoField("coord"))
                .addConnect(new connectObject().setNodeField("fogCoord").setProtoField("fogCoord"))
                .addConnect(new connectObject().setNodeField("normal").setProtoField("normal"))
                .addConnect(new connectObject().setNodeField("texCoord").setProtoField("texCoord"))
                .addConnect(new connectObject().setNodeField("ccw").setProtoField("ccw"))
                .addConnect(new connectObject().setNodeField("normalPerVertex").setProtoField("normalPerVertex"))
                .addConnect(new connectObject().setNodeField("solid").setProtoField("solid"))))
            .addComments(new CommentsBlock("Initial node in the PROTO body is actual node type, and the only node rendered. Remaining ProtoBody nodes not rendered"))
            .addChild(new GroupObject().setDEF("UnrenderedQS")
              .addChild(new ScriptObject().setDEF("QuadSetToIndexedFaceSet").setDirectOutput(true)
                .addField(new fieldObject().setType("MFInt32").setName("index").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
                  .addComments(new CommentsBlock("initialized in ecmascript")))
                .addField(new fieldObject().setType("MFInt32").setName("set_index").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType("SFNode").setName("renderedQS").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
                  .addChild(new IndexedFaceSetObject().setUSE("RenderedQS")))
                .addField(new fieldObject().setType("SFBool").setName("localTraceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("true"))
                .addField(new fieldObject().setType("MFInt32").setName("coordIndexNew").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
                  .addComments(new CommentsBlock("constructed during initialization")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"	//colorPerVertex ignored in QuadSet, and always treated as \"true\"\n"+
"	RenderedQS.colorPerVertex = true;\n"+
"\n"+
"	// calculate index value from QuadSet coord values\n"+
"	if (renderedQS.coord)\n"+
"	{\n"+
"		numberOfCoordinatePoints = renderedQS.coord.point.length;\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		tracePrint ('no Coordinate node found');\n"+
"		return;\n"+
"	}\n"+
"	if (numberOfCoordinatePoints < 4)\n"+
"	{\n"+
"		alwaysPrint ('warning, numberOfCoordinatePoints=' + numberOfCoordinatePoints + ' insufficient to construct a quad, QuadSet ignored');\n"+
"		return;\n"+
"	}\n"+
"\n"+
"	coordIndexNew = new MFInt32 ();\n"+
"\n"+
"	// ii walks through index array,\n"+
"	// goal is to initialize coordIndexNew list to match quads\n"+
"	for (ii=0; ii <= numberOfCoordinatePoints-1; ii+=4)\n"+
"	{\n"+
"		// check if at least 4 vertices remaining to build a quad\n"+
"		if ((numberOfCoordinatePoints - ii) < 4)\n"+
"		{\n"+
"			alwaysPrint ('error, index field does not contain a multiple' +\n"+
"' of four coordinate values.');\n"+
"			alwaysPrint ('The remaining vertices shall be ignored');\n"+
"			return;\n"+
"		}\n"+
"\n"+
"		if ((index[ii]   == index[ii+1]) || (index[ii]   == index[ii+2]) || (index[ii] == index[ii+3]) ||\n"+
"		    (index[ii+1] == index[ii+2]) || (index[ii+1] == index[ii+3]) ||\n"+
"		    (index[ii+2] == index[ii+3]))\n"+
"		{\n"+
"			alwaysPrint ('index=' + index);\n"+
"			alwaysPrint ('error, pair of equal indices in quad');\n"+
"			return;\n"+
"		}\n"+
"\n"+
"		if (index[ii] >= 0)\n"+
"		{\n"+
"			// add another quad from latest 4 points of fan set to QS\n"+
"			// order is ccw, i.e. in correct halfplane direction\n"+
"			// note: there is an implicit \"malloc\" here for the'length' element of the array\n"+
"			coordIndexNew [coordIndexNew.length] = index[ii];\n"+
"			coordIndexNew [coordIndexNew.length] = index[ii+1];\n"+
"			coordIndexNew [coordIndexNew.length] = index[ii+2];\n"+
"			coordIndexNew [coordIndexNew.length] = index[ii+3];\n"+
"			coordIndexNew [coordIndexNew.length] = -1;\n"+
"		}\n"+
"\n"+
"	  // incremental trace of array being built\n"+
"	  tracePrint ('coordIndexNew=' + coordIndexNew);\n"+
"	}\n"+
"	renderedQS.set_coordIndex = coordIndexNew;\n"+
"	tracePrint ('renderedQS.coordIndex=' + renderedQS.coordIndex);\n"+
"	// match colorIndex if any Color node exists\n"+
"//	if (nodesHolder.color)\n"+
"//	{\n"+
"//	  if (nodesHolder.color.color.length > 0)\n"+
"//	  {\n"+
"		//  Could implement color count check here\n"+
"//	  }\n"+
"//	}\n"+
"\n"+
"	// no need to set colorIndex since indexedFaceSet semantics handles this\n"+
"}\n"+
"function set_index (value, timestamp)\n"+
"{\n"+
"	index = value;\n"+
"	initialize ();\n"+
"}\n"+
"function tracePrint(outputString)\n"+
"{\n"+
"    if (localTraceEnabled)\n"+
"	  Browser.print ('[IndexedQuadSet]' + outputString);\n"+
"}\n"+
"function alwaysPrint(outputString)\n"+
"{\n"+
"	Browser.print ('[IndexedQuadSet]' + outputString);\n"+
"}"))
              .addChild(new GroupObject()
                .setMetadata(new MetadataStringObject().setName("metadataHolder")
                  .setIS(new ISObject()
                    .addConnect(new connectObject().setNodeField("metadata").setProtoField("metadata"))))))))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new ProtoDeclareObject().setName("CADAssembly").setAppinfo("The CADAssembly node holds a set of assemblies or parts grouped together.")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFNode").setName("addChildren").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("MFNode").setName("removeChildren").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("MFNode").setName("children").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("The children field can contain X3DProductStructureChildNode types. Each child will be either a sub-assembly or a part.")
              .addComments(new CommentsBlock("Specification initialization: NULL node")))
            .addField(new fieldObject().setType("SFString").setName("name").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("The name field documents the name of this CADAssembly."))
            .addField(new fieldObject().setType("SFVec3f").setName("bboxCenter").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Bounding box center: position offset from origin of local coordinate system.").setValue("0 0 0"))
            .addField(new fieldObject().setType("SFVec3f").setName("bboxSize").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Bounding box size: automatically calculated can be specified as an optimization or constraint.").setValue("-1 -1 -1"))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DMetadataObject]")
              .addComments(new CommentsBlock("Specification initialization: NULL node"))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("addChildren").setProtoField("addChildren"))
                .addConnect(new connectObject().setNodeField("removeChildren").setProtoField("removeChildren"))
                .addConnect(new connectObject().setNodeField("children").setProtoField("children"))
                .addConnect(new connectObject().setNodeField("bboxCenter").setProtoField("bboxCenter"))
                .addConnect(new connectObject().setNodeField("bboxSize").setProtoField("bboxSize"))))
            .addChild(new GroupObject()
              .setMetadata(new MetadataStringObject().setName("metadataHolder")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("metadata").setProtoField("metadata"))))
              .addComments(new CommentsBlock("name holder"))
              .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString0().getArray()))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("description").setProtoField("name")))))))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new ProtoDeclareObject().setName("ShapeHolder").setAppinfo("local dummy node to hold value for CADFace")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFNode").setName("shape").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addComments(new CommentsBlock("no initialization value"))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new ScriptObject().setDEF("HoldShapeNodeScript").setDirectOutput(true)
              .addField(new fieldObject().setType("SFNode").setName("shape").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("holder for IS field")
                .addComments(new CommentsBlock("no initialization node")))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("shape").setProtoField("shape")))
              .setSourceCode("ecmascript:\n"+
"// no script code, this node is simply a container\n"+
"\n"+
"// silence warning: no function provided that includes shape = something;"))))
        .addComments(new CommentsBlock("= = = = ="))
        .addChild(new ProtoDeclareObject().setName("CADFace").setAppinfo("The CADFace node holds the geometry representing a face of a part.").setDocumentation("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#CADPart")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFString").setName("name").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("The name field documents the name of this CADFace."))
            .addField(new fieldObject().setType("SFNode").setName("shape").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DShapeNode | LOD]")
              .addComments(new CommentsBlock("Specification initialization: NULL node")))
            .addField(new fieldObject().setType("SFVec3f").setName("bboxCenter").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Bounding box center: position offset from origin of local coordinate system.").setValue("0 0 0"))
            .addField(new fieldObject().setType("SFVec3f").setName("bboxSize").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Bounding box size: automatically calculated can be specified as an optimization or constraint.").setValue("-1 -1 -1"))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DMetadataObject]")
              .addComments(new CommentsBlock("Specification initialization: NULL node"))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("ShapeHolder")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("shape").setProtoField("shape"))))
            .addChild(new GroupObject()
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("bboxCenter").setProtoField("bboxCenter"))
                .addConnect(new connectObject().setNodeField("bboxSize").setProtoField("bboxSize")))
              .setMetadata(new MetadataStringObject().setName("metadataHolder")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("metadata").setProtoField("metadata"))))
              .addComments(new CommentsBlock("name holder"))
              .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString1().getArray()))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("description").setProtoField("name")))))))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new ProtoDeclareObject().setName("CADLayer").setAppinfo("The CADLayer node defines a hierarchy of nodes used for showing layer structure.").setDocumentation("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#CADPart")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFNode").setName("addChildren").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("MFNode").setName("removeChildren").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("MFNode").setName("children").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("The children field can contain X3DChildNode types.")
              .addComments(new CommentsBlock("Specification initialization: NULL node")))
            .addField(new fieldObject().setType("SFString").setName("name").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("The name field documents the name of this CADLayer."))
            .addField(new fieldObject().setType("MFBool").setName("visible").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("specifies whether a particular child and its subchildren are visible. If the number of values is less than the number of children the remaining children shall be visible."))
            .addField(new fieldObject().setType("SFVec3f").setName("bboxCenter").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Bounding box center: position offset from origin of local coordinate system.").setValue("0 0 0"))
            .addField(new fieldObject().setType("SFVec3f").setName("bboxSize").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Bounding box size: automatically calculated can be specified as an optimization or constraint.").setValue("-1 -1 -1"))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DMetadataObject]")
              .addComments(new CommentsBlock("Specification initialization: NULL node"))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("addChildren").setProtoField("addChildren"))
                .addConnect(new connectObject().setNodeField("removeChildren").setProtoField("removeChildren"))
                .addConnect(new connectObject().setNodeField("children").setProtoField("children"))
                .addConnect(new connectObject().setNodeField("bboxCenter").setProtoField("bboxCenter"))
                .addConnect(new connectObject().setNodeField("bboxSize").setProtoField("bboxSize"))))
            .addChild(new GroupObject()
              .setMetadata(new MetadataStringObject().setName("metadataHolder")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("metadata").setProtoField("metadata"))))
              .addComments(new CommentsBlock("name holder"))
              .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString2().getArray()))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("description").setProtoField("name")))))
            .addChild(new ScriptObject().setDEF("HoldMFBoolFieldScript")
              .addField(new fieldObject().setType("MFBool").setName("visible").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
                .addComments(new CommentsBlock("no initialization node")))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("visible").setProtoField("visible")))
              .setSourceCode("ecmascript:\n"+
"// no script code, this node is simply a container"))
            .addComments(new CommentsBlock("No support for MFBool in VRML97, so no functionality provided for visible"))))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new ProtoDeclareObject().setName("CADPart").setAppinfo("CADPart represents the location and faces that constitute apart").setDocumentation("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#CADPart")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFNode").setName("addChildren").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("MFNode").setName("removeChildren").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("MFNode").setName("children").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("The children field can only contain CADFace nodes.")
              .addComments(new CommentsBlock("Specification initialization: NULL node")))
            .addField(new fieldObject().setType("SFString").setName("name").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
            .addField(new fieldObject().setType("SFVec3f").setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFRotation").setName("rotation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField(new fieldObject().setType("SFVec3f").setName("center").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFVec3f").setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField(new fieldObject().setType("SFRotation").setName("scaleOrientation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField(new fieldObject().setType("SFVec3f").setName("bboxCenter").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFVec3f").setName("bboxSize").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("-1 -1 -1"))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DMetadataObject]")
              .addComments(new CommentsBlock("Specification initialization: NULL node"))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("children").setProtoField("children"))
                .addConnect(new connectObject().setNodeField("addChildren").setProtoField("addChildren"))
                .addConnect(new connectObject().setNodeField("removeChildren").setProtoField("removeChildren"))
                .addConnect(new connectObject().setNodeField("translation").setProtoField("translation"))
                .addConnect(new connectObject().setNodeField("rotation").setProtoField("rotation"))
                .addConnect(new connectObject().setNodeField("center").setProtoField("center"))
                .addConnect(new connectObject().setNodeField("scale").setProtoField("scale"))
                .addConnect(new connectObject().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
                .addConnect(new connectObject().setNodeField("bboxCenter").setProtoField("bboxCenter"))
                .addConnect(new connectObject().setNodeField("bboxSize").setProtoField("bboxSize"))))
            .addChild(new GroupObject()
              .setMetadata(new MetadataStringObject().setName("metadataHolder")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("metadata").setProtoField("metadata"))))
              .addComments(new CommentsBlock("name holder"))
              .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString3().getArray()))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("description").setProtoField("name")))))))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new AnchorObject().setDescription("CadGeometryExternPrototypes").setParameter(new MFStringObject(new MFString4().getArray())).setUrl(new MFStringObject(new MFString5().getArray()))
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString6().getArray()))
              .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString7().getArray())).setSize(0.9f)))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,0.2f})))))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new TransformObject().setTranslation(new float[] {-3f,2f,0f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setDEF("White")
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,1f})))
            .setGeometry(ProtoInstance1 = new ProtoInstanceObject().setName("IndexedQuadSet"))))
        .addChild(new TransformObject().setTranslation(new float[] {3f,2f,0f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("White"))
            .setGeometry(ProtoInstance2 = new ProtoInstanceObject().setName("QuadSet"))))
        .addComments(new CommentsBlock("========================================"))
        .addComments(new CommentsBlock("Silence scene warnings by providing ordered ProtoInstance examples. Note warning above that this scene is for developmental use. The ProtoInstance form of the CAD nodes should not be used, native X3D encoding should be used instead."))
        .addChild(ProtoInstance3 = new ProtoInstanceObject().setName("CADLayer")))      ;
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("index").setValue("0 3 2 1 4 5 6 7 2 7 9 8 2 3 4 7"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("coord")
                .addChild(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f8().getArray()))));
ProtoInstance2
              .addFieldValue(new fieldValueObject().setName("coord")
                .addChild(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f9().getArray()))));
ProtoInstance3
          .addFieldValue(new fieldValueObject().setName("children")
            .addChild(ProtoInstance4 = new ProtoInstanceObject().setName("CADAssembly")));
ProtoInstance4
              .addFieldValue(new fieldValueObject().setName("children")
                .addChild(ProtoInstance5 = new ProtoInstanceObject().setName("CADPart")));
ProtoInstance5
                  .addFieldValue(new fieldValueObject().setName("children")
                    .addChild(ProtoInstance6 = new ProtoInstanceObject().setName("CADFace")));
ProtoInstance6
                      .addFieldValue(new fieldValueObject().setName("shape")
                        .addChild(new ShapeObject()
                          .setGeometry(new CylinderObject().setBottom(false).setHeight(0.000001f).setRadius(0.000001f).setSide(false))
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject()))));
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#hideWarning1"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#hideWarning2"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#hideWarning3"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#hideWarning4"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_blank"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CadGeometryExternPrototypes.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CadGeometryExternPrototypes.x3d","CadGeometryExternPrototypes.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CadGeometryExternPrototypes.wrl"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CadGeometryExternPrototypes","defines prototype examples","","Click text to see","CadGeometryExternPrototypes"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFVec3f8 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1.5f,0f,0f,-1.5f,1f,-1f,-0.5f,1f,-1f,-0.5f,0f,0f,0.5f,0f,0f,1.5f,0f,0f,1.5f,1f,-1f,0.5f,1f,-1f,-0.5f,2f,-1f,0.5f,2f,-1f});
  }
}
protected class MFVec3f9 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1.5f,0f,0f,-1.5f,1f,-1f,-0.5f,1f,-1f,-0.5f,0f,0f,0.5f,0f,0f,1.5f,0f,0f,1.5f,1f,-1f,0.5f,1f,-1f});
  }
}
}
