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
public class Arc2dComponentPrototype {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new Arc2dComponentPrototype().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/Arc2dComponentPrototype.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.1")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("Arc2dComponentPrototype.x3d"))
        .addMeta(new metaObject().setName("description").setContent("X3D Geometry2D component node, implemented as prototype for backwards compatibility with VRML 97. Arc2D specifies a 2D linear circular arc."))
        .addMeta(new metaObject().setName("creator").setContent("Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis"))
        .addMeta(new metaObject().setName("created").setContent("14 November 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html"))
        .addMeta(new metaObject().setName("subject").setContent("Geometry2D component node (Arc2D)"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/Arc2dComponentPrototype.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("===================="))
        .addChild(new WorldInfoObject().setTitle("Arc2dComponentPrototype.x3d"))
        .addChild(new ProtoDeclareObject().setName("Arc2D")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFFloat").setName("startAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0"))
            .addField(new fieldObject().setType("SFFloat").setName("endAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("1.5707963265"))
            .addField(new fieldObject().setType("SFFloat").setName("radius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("1"))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")))
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
"      Browser.print ('[Arc2D] Warning: startAngle=' + startAngle + ' must be within range [0..2pi)');\n"+
"   }\n"+
"\n"+
"   if ((endAngle < 0) || (endAngle >= 2 * Math.PI))\n"+
"   {\n"+
"      Browser.print ('[Arc2D] Warning: endAngle=' + endAngle + ' must be within range [0..2pi)');\n"+
"   }\n"+
"\n"+
"   // equal startAngle, endAngle means draw full circle.\n"+
"   // high out-of-range endAngle is OK for local computation.\n"+
"   if (startAngle >= endAngle)\n"+
"      endAngle += (2 * Math.PI);\n"+
"\n"+
"   differAng = Math.abs((endAngle - startAngle))/numOfPoints;\n"+
"\n"+
"   for (i = 0; i <= numOfPoints; i++)\n"+
"   {\n"+
"      arcSet3d[i] = new SFVec3f (radius * Math.cos(startAngle + i * differAng), radius * Math.sin(startAngle + i * differAng), 0.0);\n"+
"      arcIndexSet3d[i] = i;\n"+
"   }\n"+
"\n"+
"} // initialize"))
              .addChild(new ROUTEObject().setFromField("arcSet3d").setFromNode("Arc2dToFaceSet3d").setToField("point").setToNode("Arc3DPoints"))
              .addChild(new ROUTEObject().setFromField("arcIndexSet3d").setFromNode("Arc2dToFaceSet3d").setToField("set_coordIndex").setToNode("ArcIndexPoints"))))))      ;
    return X3D0;
    }
}
