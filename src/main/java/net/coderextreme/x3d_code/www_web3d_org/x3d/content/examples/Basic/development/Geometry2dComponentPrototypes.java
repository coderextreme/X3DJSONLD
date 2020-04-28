package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.development;
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
public class Geometry2dComponentPrototypes {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new Geometry2dComponentPrototypes().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("Geometry2dComponentPrototypes.x3d"))
        .addMeta(new metaObject().setName("description").setContent("X3D Geometry2D component nodes, implemented as prototypes for developmental use to provide backwards compatibility with VRML 97. Arc2D specifies a 2D linear circular arc. ArcClose2D specifies a portion of a circle. Circle2D specifies a 2D circular line. Disk2D specifies a 2D circular disk. Polyline2D specifies 2D line segments. Polypoint2D specifies 2D point array. Rectangle2D specifies a 2D rectangle. TriangleSet2D specifies 2D triangles. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs)."))
        .addMeta(new metaObject().setName("creator").setContent("Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis"))
        .addMeta(new metaObject().setName("created").setContent("14 November 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("warning").setContent("These examples are complete but only used for developmental testing, not regular X3D authoring."))
        .addMeta(new metaObject().setName("reference").setContent("Geometry2dComponentExternProtos.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("Geometry2dComponentExamples.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html"))
        .addMeta(new metaObject().setName("subject").setContent("Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D)"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("===================="))
        .addChild(new WorldInfoObject().setTitle("Geometry2dComponentPrototypes.x3d"))
        .addChild(new ProtoDeclareObject().setName("Arc2D")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFFloat").setName("startAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0"))
            .addField(new fieldObject().setType("SFFloat").setName("endAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("1.5707963265"))
            .addField(new fieldObject().setType("SFFloat").setName("radius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("1"))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
              .addComments(new CommentsBlock("default NULL"))))
          .setProtoBody(new ProtoBodyObject()
            .addComments(new CommentsBlock("Only the first node counts as the node type of a prototype. This node must be a geometry node."))
            .addChild(new IndexedLineSetObject().setDEF("ArcIndexPoints")
              .setCoord(new CoordinateObject().setDEF("Arc3DPoints")))
            .addComments(new CommentsBlock("Any nodes after initial node in a ProtoBody is not rendered."))
            .addChild(new GroupObject()
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("metadata").setProtoField("metadata")))
              .addChild(new ScriptObject().setDEF("Arc2dToFaceSet3d")
                .addField(new fieldObject().setType("SFFloat").setName("startAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("SFFloat").setName("endAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("SFFloat").setName("radius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("MFVec3f").setName("arcSet3d").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("MFInt32").setName("arcIndexSet3d").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("startAngle").setProtoField("startAngle"))
                  .addConnect(new connectObject().setNodeField("endAngle").setProtoField("endAngle"))
                  .addConnect(new connectObject().setNodeField("radius").setProtoField("radius")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"   numOfPoints = 100;\n"+
"\n"+
"   if (radius < 0)\n"+
"   {\n"+
"      Browser.print ('[Arc2D] Warning:  invalid value, radius=' + value + ' must instead be >= 0');\n"+
"   }\n"+
"\n"+
"   if ((startAngle < 0) || (startAngle >= 2 * Math.PI))\n"+
"   {\n"+
"	Browser.print ('[Arc2D] Warning: startAngle=' + startAngle + ' must be within range [0..2pi)'); // (]\n"+
"   }\n"+
"\n"+
"   if ((endAngle < 0) || (endAngle >= 2 * Math.PI))\n"+
"   {\n"+
"	Browser.print ('[Arc2D] Warning: endAngle=' + endAngle + ' must be within range [0..2pi)'); // (]\n"+
"   }\n"+
"\n"+
"   // equal startAngle, endAngle means draw full circle.\n"+
"   // high out-of-range endAngle is OK for local computation.\n"+
"   if (startAngle >= endAngle)\n"+
"      endAngle = endAngle + 2 * Math.PI;\n"+
"\n"+
"   differAng = Math.abs((endAngle - startAngle)) / numOfPoints;\n"+
"\n"+
"   for (i = 0; i <= numOfPoints; i++)\n"+
"   {\n"+
"	arcSet3d[i] = new SFVec3f (radius * Math.cos(startAngle + i * differAng), radius * Math.sin(startAngle + i * differAng), 0.0);\n"+
"        arcIndexSet3d[i] = i;\n"+
"   }\n"+
"\n"+
"} // initialize"))
              .addChild(new ROUTEObject().setFromField("arcSet3d").setFromNode("Arc2dToFaceSet3d").setToField("point").setToNode("Arc3DPoints"))
              .addChild(new ROUTEObject().setFromField("arcIndexSet3d").setFromNode("Arc2dToFaceSet3d").setToField("set_coordIndex").setToNode("ArcIndexPoints")))))
        .addComments(new CommentsBlock("===================="))
        .addChild(new ProtoDeclareObject().setName("ArcClose2D")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFFloat").setName("startAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0"))
            .addField(new fieldObject().setType("SFFloat").setName("endAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("1.5707963265"))
            .addField(new fieldObject().setType("SFFloat").setName("radius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("1"))
            .addField(new fieldObject().setType("SFString").setName("closureType").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("PIE"))
            .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("false"))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
              .addComments(new CommentsBlock("default NULL"))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new IndexedFaceSetObject().setDEF("ArcPointFaceIndex")
              .setCoord(new CoordinateObject().setDEF("ArcClose2DFaceCoordinate")))
            .addChild(new GroupObject()
              .addChild(new ScriptObject().setDEF("ArcClose2dToFaceSet3d")
                .addField(new fieldObject().setType("SFString").setName("closureType").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("SFFloat").setName("startAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("SFFloat").setName("endAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("SFFloat").setName("radius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("MFVec3f").setName("arcSet3d").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("MFInt32").setName("pointIndex").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("closureType").setProtoField("closureType"))
                  .addConnect(new connectObject().setNodeField("startAngle").setProtoField("startAngle"))
                  .addConnect(new connectObject().setNodeField("endAngle").setProtoField("endAngle"))
                  .addConnect(new connectObject().setNodeField("radius").setProtoField("radius")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"   if (radius < 0)\n"+
"   {\n"+
"      Browser.print ('[ArcClose2D] Warning:  invalid value, radius=' + value + ' must instead be >= 0');\n"+
"   }\n"+
"\n"+
"   if ((startAngle < 0) || (startAngle >= 2 * Math.PI))\n"+
"   {\n"+
"	Browser.print ('[ArcClose2D] Warning: startAngle=' + startAngle + ' must be within range [0..2pi)'); //(]\n"+
"   }\n"+
"\n"+
"   if ((endAngle< 0) || (endAngle>= 2 * Math.PI))\n"+
"   {\n"+
"	Browser.print ('[ArcClose2D] Warning: endAngle=' + endAngle+ ' must be within range [0..2pi)'); // (]\n"+
"    }\n"+
"\n"+
"    // equal startAngle, endAngle means draw full circle.\n"+
"    // high out-of-range endAngle is OK for local computation.\n"+
"   if (startAngle >= endAngle)\n"+
"      endAngle = endAngle + 2*Math.PI;\n"+
"\n"+
"   numOfPoints = 100;\n"+
"   differAng = Math.abs((endAngle - startAngle))/numOfPoints;\n"+
"\n"+
"   for ( i=0 ; i<=numOfPoints ; i++)\n"+
"   {\n"+
"	if ( i == numOfPoints)\n"+
"             arcSet3d[i] = new SFVec3f (0.0, 0.0, 0.0);\n"+
"        else\n"+
"             arcSet3d[i] = new SFVec3f ( radius*Math.cos(startAngle + i*differAng), radius*Math.sin(startAngle + i*differAng), 0.0 );\n"+
"   }\n"+
"\n"+
"   k=0;\n"+
"   if (closureType =='PIE')\n"+
"       for ( i=0 ; i<numOfPoints ; i++)\n"+
"       {\n"+
"        	pointIndex[k]   = numOfPoints;\n"+
"        	pointIndex[k+1] = i;\n"+
"        	pointIndex[k+2] = i + 1;\n"+
"        	pointIndex[k+3]   = numOfPoints;\n"+
"        	pointIndex[k+4] = -1;\n"+
"        k=k+5;\n"+
"	}\n"+
"   else\n"+
"       for ( i=0 ; i<numOfPoints-1 ; i++)\n"+
"       {\n"+
"              pointIndex[k]   = 0;\n"+
"              pointIndex[k+1] = i;\n"+
"              pointIndex[k+2] = i + 1;\n"+
"              pointIndex[k+3]   = 0;\n"+
"              pointIndex[k+4] = -1;\n"+
"        k=k+5;\n"+
"	}\n"+
"\n"+
"} // initialize"))
              .addChild(new ROUTEObject().setFromField("arcSet3d").setFromNode("ArcClose2dToFaceSet3d").setToField("point").setToNode("ArcClose2DFaceCoordinate"))
              .addChild(new ROUTEObject().setFromField("pointIndex").setFromNode("ArcClose2dToFaceSet3d").setToField("set_coordIndex").setToNode("ArcPointFaceIndex")))))
        .addComments(new CommentsBlock("ArcClose2DUnfilled also provided since FillProperties not available in VRML 97"))
        .addChild(new ProtoDeclareObject().setName("ArcClose2DUnfilled")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFFloat").setName("startAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0"))
            .addField(new fieldObject().setType("SFFloat").setName("endAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("1.5707963265"))
            .addField(new fieldObject().setType("SFFloat").setName("radius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("1"))
            .addField(new fieldObject().setType("SFString").setName("closureType").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("PIE"))
            .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("false"))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
              .addComments(new CommentsBlock("default NULL"))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new IndexedLineSetObject().setDEF("ArcPointLineIndex")
              .setCoord(new CoordinateObject().setDEF("ArcClose2DLineCoordinate")))
            .addChild(new GroupObject()
              .addChild(new ScriptObject().setDEF("ArcClose2dToLineSet3d")
                .addField(new fieldObject().setType("SFString").setName("closureType").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("SFFloat").setName("startAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("SFFloat").setName("endAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("SFFloat").setName("radius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("MFVec3f").setName("arcSet3d").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("MFInt32").setName("pointIndex").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("closureType").setProtoField("closureType"))
                  .addConnect(new connectObject().setNodeField("startAngle").setProtoField("startAngle"))
                  .addConnect(new connectObject().setNodeField("endAngle").setProtoField("endAngle"))
                  .addConnect(new connectObject().setNodeField("radius").setProtoField("radius")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"\n"+
"   if (radius < 0)\n"+
"   {\n"+
"      Browser.print ('[ArcCloseUnfilled2D] Warning:  invalid value, radius=' + value + ' must instead be >= 0');\n"+
"   }\n"+
"\n"+
"   if ((startAngle < 0) || (startAngle >= 2 * Math.PI))\n"+
"   {\n"+
"	Browser.print ('[ArcCloseUnfilled2D] Warning: startAngle=' + startAngle + ' must be within range [0..2pi)'); //(]\n"+
"   }\n"+
"\n"+
"   if ((endAngle< 0) || (endAngle>= 2 * Math.PI))\n"+
"   {\n"+
"	Browser.print ('[ArcCloseUnfilled2D] Warning: endAngle=' + endAngle+ ' must be within range [0..2pi)'); //(]\n"+
"    }\n"+
"\n"+
"    // equal startAngle, endAngle means draw full circle.\n"+
"    // high out-of-range endAngle is OK for local computation.\n"+
"   if (startAngle >= endAngle)\n"+
"      endAngle = endAngle + 2*Math.PI;\n"+
"\n"+
"   numOfPoints = 100;\n"+
"   differAng = Math.abs((endAngle - startAngle))/numOfPoints;\n"+
"\n"+
"   for ( i=0 ; i<=numOfPoints +1 ; i++)\n"+
"   {\n"+
"	if ( i == numOfPoints +1)\n"+
"             arcSet3d[i] = new SFVec3f (0.0, 0.0, 0.0);\n"+
"        else\n"+
"             arcSet3d[i] = new SFVec3f ( radius*Math.cos(startAngle + i*differAng), radius*Math.sin(startAngle + i*differAng), 0.0 );\n"+
"   }\n"+
"\n"+
"   if (closureType =='CHORD')\n"+
"   {\n"+
"	for ( i=0 ; i<=numOfPoints +1 ; i++)\n"+
"	{\n"+
"        	if ( i == numOfPoints +1)\n"+
"             		pointIndex[i] = 0.0;\n"+
"        	else\n"+
"             		pointIndex[i] = i;\n"+
"	}\n"+
"   }\n"+
"   else\n"+
"   {\n"+
"	for ( i=0 ; i<=numOfPoints +1 ; i++)\n"+
"	{\n"+
"         pointIndex[i] = i;\n"+
"	}\n"+
"         pointIndex[i] = 0.0;\n"+
"   }\n"+
"\n"+
"} // initialize"))
              .addChild(new ROUTEObject().setFromField("arcSet3d").setFromNode("ArcClose2dToLineSet3d").setToField("point").setToNode("ArcClose2DLineCoordinate"))
              .addChild(new ROUTEObject().setFromField("pointIndex").setFromNode("ArcClose2dToLineSet3d").setToField("set_coordIndex").setToNode("ArcPointLineIndex")))))
        .addComments(new CommentsBlock("===================="))
        .addChild(new ProtoDeclareObject().setName("Circle2D")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFFloat").setName("radius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("1"))
            .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("false"))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
              .addComments(new CommentsBlock("default NULL"))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new IndexedLineSetObject().setDEF("Circ3DPointsIndex")
              .setCoord(new CoordinateObject().setDEF("Circ3DPoints")))
            .addChild(new GroupObject()
              .addChild(new ScriptObject().setDEF("Circ2dToLineSet3d")
                .addField(new fieldObject().setType("SFFloat").setName("radius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("MFVec3f").setName("circSet3d").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("MFInt32").setName("circIndexSet3d").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("radius").setProtoField("radius")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"    if (radius < 0)\n"+
"   {\n"+
"      Browser.print ('[Circle2D] Warning:  invalid value, radius=' + value + ' must instead be >= 0');\n"+
"   }\n"+
"\n"+
"\n"+
"   numOfPoints = 100;\n"+
"   differAng = 2*Math.PI/numOfPoints;\n"+
"\n"+
"   for ( i=0 ; i<=numOfPoints ; i++)\n"+
"   {\n"+
"	circSet3d[i] = new SFVec3f ( radius*Math.cos(i*differAng), radius*Math.sin(i*differAng), 0.0 );\n"+
"        circIndexSet3d[i] = i;\n"+
"   }\n"+
"\n"+
"} // initialize"))
              .addChild(new ROUTEObject().setFromField("circSet3d").setFromNode("Circ2dToLineSet3d").setToField("point").setToNode("Circ3DPoints"))
              .addChild(new ROUTEObject().setFromField("circIndexSet3d").setFromNode("Circ2dToLineSet3d").setToField("set_coordIndex").setToNode("Circ3DPointsIndex")))))
        .addComments(new CommentsBlock("===================="))
        .addChild(new ProtoDeclareObject().setName("Disk2D")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFFloat").setName("innerRadius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0"))
            .addField(new fieldObject().setType("SFFloat").setName("outerRadius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("1"))
            .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("false"))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
              .addComments(new CommentsBlock("default NULL"))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new IndexedFaceSetObject().setDEF("DiskPointsIndex")
              .setCoord(new CoordinateObject().setDEF("Disk3DPoints")))
            .addChild(new GroupObject()
              .addChild(new ScriptObject().setDEF("Disk2dToFaceSet3d")
                .addField(new fieldObject().setType("SFFloat").setName("innerRadius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("SFFloat").setName("outerRadius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("MFVec3f").setName("diskSet3d").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("MFInt32").setName("diskIndexSet3d").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("innerRadius").setProtoField("innerRadius"))
                  .addConnect(new connectObject().setNodeField("outerRadius").setProtoField("outerRadius")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"   if (innerRadius < 0)\n"+
"   {\n"+
"      Browser.print ('[Disk2D] Warning:  invalid value, innerRadius=' + value + ' must instead be >= 0');\n"+
"   }\n"+
"\n"+
"   if (outerRadius < 0)\n"+
"   {\n"+
"      Browser.print ('[Disk2D] Warning:  invalid value, outerRadius=' + value + ' must instead be >= 0');\n"+
"   }\n"+
"\n"+
"\n"+
"\n"+
"   numOfPoints    = 100.0;\n"+
"   diskSet3d      = new MFVec3f();\n"+
"   diskIndexSet3d = new MFInt32();\n"+
"   differAng = 2 * Math.PI/numOfPoints;\n"+
"\n"+
"\n"+
"   for ( i=0 ; i<2*numOfPoints ; i++)\n"+
"   {\n"+
"        if ( i<numOfPoints)\n"+
"	     diskSet3d[i] = new SFVec3f ( innerRadius*Math.cos(i*differAng), innerRadius*Math.sin(i*differAng), 0.0 );\n"+
"        else\n"+
"             diskSet3d[i] = new SFVec3f ( outerRadius*Math.cos((i-numOfPoints-1.0)*differAng), outerRadius*Math.sin((i-numOfPoints-1.0)*differAng), 0.0 );\n"+
"   }\n"+
"\n"+
"\n"+
"   k=0;\n"+
"   for (i=0 ; i<numOfPoints ; i++)\n"+
"   {\n"+
"        diskIndexSet3d[k]   = i;\n"+
"        diskIndexSet3d[k+1] = i + numOfPoints;\n"+
"        diskIndexSet3d[k+2] = i + numOfPoints + 1;\n"+
"        diskIndexSet3d[k+3]   = i;\n"+
"        diskIndexSet3d[k+4] = -1;\n"+
"        diskIndexSet3d[k+5] = i+1;\n"+
"        diskIndexSet3d[k+6] = i ;\n"+
"        diskIndexSet3d[k+7] = i + numOfPoints +1;\n"+
"        diskIndexSet3d[k+8] = i +1;\n"+
"        diskIndexSet3d[k+9] = -1;\n"+
"\n"+
"        if (i == numOfPoints-1)\n"+
"        {\n"+
"        diskIndexSet3d[k]   = i;\n"+
"        diskIndexSet3d[k+1] = i + numOfPoints;\n"+
"        diskIndexSet3d[k+2] = numOfPoints;\n"+
"        diskIndexSet3d[k+3]   = i;\n"+
"        diskIndexSet3d[k+4] = -1;\n"+
"        diskIndexSet3d[k+5] = 0;\n"+
"        diskIndexSet3d[k+6] = i;\n"+
"        diskIndexSet3d[k+7] = numOfPoints;\n"+
"        diskIndexSet3d[k+8] = 0;\n"+
"        diskIndexSet3d[k+9] = -1;\n"+
"        }\n"+
"   k=k+10;\n"+
"   }\n"+
"\n"+
"} // initialize"))
              .addChild(new ROUTEObject().setFromField("diskSet3d").setFromNode("Disk2dToFaceSet3d").setToField("point").setToNode("Disk3DPoints"))
              .addChild(new ROUTEObject().setFromField("diskIndexSet3d").setFromNode("Disk2dToFaceSet3d").setToField("set_coordIndex").setToNode("DiskPointsIndex")))))
        .addComments(new CommentsBlock("===================="))
        .addChild(new ProtoDeclareObject().setName("Polyline2D")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFVec2f").setName("lineSegments").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
            .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("false"))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new IndexedLineSetObject().setDEF("LinesSegmentsIndexPoints")
              .setCoord(new CoordinateObject().setDEF("LineSegments3DPoints")))
            .addChild(new GroupObject()
              .addChild(new ScriptObject().setDEF("LineSegments2dToLineSet3d")
                .addField(new fieldObject().setType("MFVec2f").setName("lineSegments").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("MFVec3f").setName("lineSegments3D").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("MFInt32").setName("lineSegmentsIndex").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("lineSegments").setProtoField("lineSegments")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"   for ( i=0 ; i<lineSegments.length ; i++)\n"+
"   {\n"+
"          lineSegments3D[i] = new SFVec3f ( lineSegments[i].x, lineSegments[i].y, 0.0 );\n"+
"          lineSegmentsIndex[i] = i;\n"+
"   }\n"+
"\n"+
"     lineSegmentsIndex[i] = -1;\n"+
"\n"+
"} // initialize"))
              .addChild(new ROUTEObject().setFromField("lineSegments3D").setFromNode("LineSegments2dToLineSet3d").setToField("point").setToNode("LineSegments3DPoints"))
              .addChild(new ROUTEObject().setFromField("lineSegmentsIndex").setFromNode("LineSegments2dToLineSet3d").setToField("set_coordIndex").setToNode("LinesSegmentsIndexPoints")))))
        .addComments(new CommentsBlock("===================="))
        .addChild(new ProtoDeclareObject().setName("Polypoint2D")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFVec2f").setName("point").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
              .addComments(new CommentsBlock("default NULL"))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new PointSetObject()
              .setCoord(new CoordinateObject().setDEF("Points3D")))
            .addChild(new GroupObject()
              .addChild(new ScriptObject().setDEF("Points2dToLineSet3d")
                .addField(new fieldObject().setType("MFVec2f").setName("point").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("MFVec3f").setName("points3D").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("point").setProtoField("point")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"\n"+
"   for ( i=0 ; i<point.length ; i++)\n"+
"   {\n"+
"          points3D[i] = new SFVec3f ( point[i].x, point[i].y, 0.0 );\n"+
"   }\n"+
"\n"+
"} // initialize"))
              .addChild(new ROUTEObject().setFromField("points3D").setFromNode("Points2dToLineSet3d").setToField("point").setToNode("Points3D")))))
        .addComments(new CommentsBlock("===================="))
        .addChild(new ProtoDeclareObject().setName("Rectangle2D").setAppinfo("Default filled matching default FillProperties filled=true.")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec2f").setName("size").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("2 2"))
            .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("false"))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
              .addComments(new CommentsBlock("default NULL"))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt320().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setDEF("RectanglePoints")))
            .addChild(new GroupObject()
              .addChild(new ScriptObject().setDEF("Rect2dToFaceSet3d")
                .addField(new fieldObject().setType("SFVec2f").setName("size").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("MFVec3f").setName("pointSet3d").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFInt32").setName("fillNoFillSelection").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("size").setProtoField("size")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"   xDim = size[0];\n"+
"   yDim = size[1];\n"+
"\n"+
"   pointSet3d[0] = new SFVec3f ( (-xDim / 2.0), (yDim / 2.0), 0.0 );\n"+
"   pointSet3d[1] = new SFVec3f ( (-xDim / 2.0), (-yDim / 2.0), 0.0 );\n"+
"   pointSet3d[2] = new SFVec3f ( (xDim / 2.0), (-yDim / 2.0), 0.0 );\n"+
"   pointSet3d[3] = new SFVec3f ( (xDim / 2.0), (yDim / 2.0), 0.0 );\n"+
"\n"+
"} // initialize"))
              .addChild(new ROUTEObject().setFromField("pointSet3d").setFromNode("Rect2dToFaceSet3d").setToField("point").setToNode("RectanglePoints")))))
        .addComments(new CommentsBlock("Rectangle2DUnfilled also provided since FillProperties not available in VRML 97"))
        .addChild(new ProtoDeclareObject().setName("Rectangle2DUnfilled")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec2f").setName("size").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("2 2"))
            .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("false"))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
              .addComments(new CommentsBlock("default NULL"))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new IndexedLineSetObject().setCoordIndex(new MFInt32Object(new MFInt321().getArray()))
              .setCoord(new CoordinateObject().setDEF("RectanglePointsLine")))
            .addChild(new GroupObject()
              .addChild(new ScriptObject().setDEF("Rect2dToLineSet3d")
                .addField(new fieldObject().setType("SFVec2f").setName("size").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("MFVec3f").setName("pointSet3d").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFInt32").setName("fillNoFillSelection").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("size").setProtoField("size")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"   xDim = size[0];\n"+
"   yDim = size[1];\n"+
"\n"+
"   pointSet3d[0] = new SFVec3f ( (-xDim / 2.0), (yDim / 2.0), 0.0 );\n"+
"   pointSet3d[1] = new SFVec3f ( (-xDim / 2.0), (-yDim / 2.0), 0.0 );\n"+
"   pointSet3d[2] = new SFVec3f ( (xDim / 2.0), (-yDim / 2.0), 0.0 );\n"+
"   pointSet3d[3] = new SFVec3f ( (xDim / 2.0), (yDim / 2.0), 0.0 );\n"+
"\n"+
"} // initialize"))
              .addChild(new ROUTEObject().setFromField("pointSet3d").setFromNode("Rect2dToLineSet3d").setToField("point").setToNode("RectanglePointsLine")))))
        .addComments(new CommentsBlock("===================="))
        .addChild(new ProtoDeclareObject().setName("TriangleSet2D")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFVec2f").setName("vertices").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
            .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("false"))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
              .addComments(new CommentsBlock("default NULL"))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new IndexedFaceSetObject().setDEF("TriangleSetIndexPoints").setSolid(false)
              .setCoord(new CoordinateObject().setDEF("TriangleSet3DPoints")))
            .addChild(new GroupObject()
              .addChild(new ScriptObject().setDEF("TriangleSet2dToLineSet3d")
                .addField(new fieldObject().setType("MFVec2f").setName("vertices").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("MFVec3f").setName("triangleSet3D").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("MFInt32").setName("triangleSetIndex").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("vertices").setProtoField("vertices")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"   numbOfTriangles = Math.floor(vertices.length/3);\n"+
"\n"+
"   for ( i=0 ; i<3*numbOfTriangles ; i++)\n"+
"   {\n"+
"          triangleSet3D[i] = new SFVec3f ( vertices[i].x, vertices[i].y, 0.0 );\n"+
"   }\n"+
"\n"+
"   k=0;\n"+
"   for (i=0; i<numbOfTriangles; i++)\n"+
"   {\n"+
"        triangleSetIndex[k] = k - i ;\n"+
"        triangleSetIndex[k+1] = k - i + 1 ;\n"+
"        triangleSetIndex[k+2] = k - i + 2 ;\n"+
"        triangleSetIndex[k+3] = -1 ;\n"+
"\n"+
"        k=k+4;\n"+
"    }\n"+
"\n"+
"} // initialize"))
              .addChild(new ROUTEObject().setFromField("triangleSet3D").setFromNode("TriangleSet2dToLineSet3d").setToField("point").setToNode("TriangleSet3DPoints"))
              .addChild(new ROUTEObject().setFromField("triangleSetIndex").setFromNode("TriangleSet2dToLineSet3d").setToField("set_coordIndex").setToNode("TriangleSetIndexPoints")))))
        .addComments(new CommentsBlock("===================="))
        .addChild(new BackgroundObject().setGroundColor(new MFColorObject(new MFColor2().getArray())).setSkyColor(new MFColorObject(new MFColor3().getArray())))
        .addChild(new AnchorObject().setDEF("LinkToExamples").setDescription("link to examples").setUrl(new MFStringObject(new MFString4().getArray()))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.8f,0.6f,0.2f})))
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString5().getArray()))
              .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString6().getArray())).setSize(0.75f))))))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,0,-1,2,3,0,2});
  }
}
protected class MFInt321 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,0});
  }
}
protected class MFColor2 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.25f,0.25f,0.25f});
  }
}
protected class MFColor3 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.25f,0.25f,0.25f});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Geometry2dComponentExternProtos.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExternProtos.x3d","Geometry2dComponentExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExamples.wrl"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Geometry2dComponentPrototypes","is a developmental file.","Click this text to view","Geometry2dComponentExamples"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
