package net.coderextreme.data;
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
import java.util.ArrayList;
import java.util.List;
import net.coderextreme.X3DRoots;
public class holgerProto implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new holgerProto().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/holgerProto.new.java.x3d");
    model.toFileJSON("../data/holgerProto.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("x3dconnectorProto.x3d"))
        .addMeta(new meta().setName("creator").setContent("Lost, Doug Sanden I think"))
        .addMeta(new meta().setName("created").setContent("Unknown"))
        .addMeta(new meta().setName("modified").setContent("Sat, 30 Dec 2023 10:14:10 GMT"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("generator").setContent("x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("x3dconnector")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("startnode"))
            .addField(new field().setType("SFNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("endnode"))
            .addField(new field().setType("SFNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("transnode"))
            .addField(new field().setType("SFNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("rotscalenode"))
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_startpoint"))
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_endpoint")))
          .setProtoBody(new ProtoBody()
            .addChild(new Script().setDEF("S1").setDirectOutput(true)
              .addField(new field().setType("SFNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("startnode"))
              .addField(new field().setType("SFNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("endnode"))
              .addField(new field().setType("SFNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("transnode"))
              .addField(new field().setType("SFNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("rotscalenode"))
              .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_startpoint"))
              .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_endpoint"))
              .setSourceCode("ecmascript:\n"+
"\n"+
"        function recompute(startpoint,endpoint){\n"+
"\n"+
"	    if (typeof endpoint === 'undefined') {\n"+
"\n"+
"		return;\n"+
"\n"+
"	    }\n"+
"\n"+
"            var dif = endpoint.subtract(startpoint);\n"+
"\n"+
"            var dist = dif.length()*0.5;\n"+
"\n"+
"            var dif2 = dif.multiply(0.5);\n"+
"\n"+
"            var norm = dif.normalize();\n"+
"\n"+
"            var transl = startpoint.add(dif2);\n"+
"\n"+
"	    if (typeof Quaternion !== 'undefined') {\n"+
"\n"+
"		    return {\n"+
"\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"\n"+
"			    translation : transl,\n"+
"\n"+
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n"+
"\n"+
"		    };\n"+
"\n"+
"	    } else {\n"+
"\n"+
"		    return {\n"+
"\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"\n"+
"			    translation : transl,\n"+
"\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"\n"+
"		    };\n"+
"\n"+
"	    }\n"+
"\n"+
"	}\n"+
"\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"\n"+
"	      if (trafo) {\n"+
"\n"+
"		      transnode.translation = trafo.translation;\n"+
"\n"+
"		      rotscalenode.rotation = trafo.rotation;\n"+
"\n"+
"		      rotscalenode.scale = trafo.scale;\n"+
"\n"+
"	      }\n"+
"\n"+
"	}\n"+
"\n"+
"        function initialize(){\n"+
"\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"\n"+
"        }\n"+
"\n"+
"        function set_startpoint(val,t){\n"+
"\n"+
"            recompute_and_route(val,endnode.translation);\n"+
"\n"+
"        }\n"+
"\n"+
"        function set_endpoint(val,t){\n"+
"\n"+
"            recompute_and_route(startnode.translation,val);\n"+
"\n"+
"        }")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("startnode").setProtoField("startnode"))
                .addConnect(new connect().setNodeField("endnode").setProtoField("endnode"))
                .addConnect(new connect().setNodeField("transnode").setProtoField("transnode"))
                .addConnect(new connect().setNodeField("rotscalenode").setProtoField("rotscalenode"))
                .addConnect(new connect().setNodeField("set_startpoint").setProtoField("set_startpoint"))
                .addConnect(new connect().setNodeField("set_endpoint").setProtoField("set_endpoint"))))))
        .addChild(new WorldInfo().setTitle("Connector Proto"))
        .addChild(new Viewpoint().setDescription("Only Viewpoint").setPosition(new double[] {0,0,5}))
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new Transform().setDEF("G1")
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new double[] {0.7,0.2,0.2})))
            .setGeometry(new Sphere().setRadius(0.1)))
          .addChild(new PlaneSensor().setDEF("PS1").setDescription("Grab to move")))
        .addChild(new Transform().setDEF("G2").setTranslation(new double[] {1,-1,0.01})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new double[] {0.2,0.7,0.2})))
            .setGeometry(new Sphere().setRadius(0.1)))
          .addChild(new PlaneSensor().setDEF("PS2").setDescription("Grab to move").setOffset(new double[] {1,-1,0.01})))
        .addChild(new Transform().setDEF("G3").setTranslation(new double[] {1,1,0.01})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new double[] {0.2,0.7,0.2})))
            .setGeometry(new Sphere().setRadius(0.1)))
          .addChild(new PlaneSensor().setDEF("PS3").setDescription("Grab to move").setOffset(new double[] {1,1,0.01})))
        .addChild(new Transform().setDEF("G4").setTranslation(new double[] {-1,1,0.01})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new double[] {0.2,0.7,0.2})))
            .setGeometry(new Sphere().setRadius(0.1)))
          .addChild(new PlaneSensor().setDEF("PS4").setDescription("Grab to move").setOffset(new double[] {-1,1,0.01})))
        .addChild(new Transform().setDEF("transC1")
          .addChild(new Transform().setDEF("rotscaleC1")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new double[] {0.2,0.7,0.7}).setTransparency(0.5)))
              .setGeometry(new Cylinder().setRadius(0.05)))))
        .addChild(new Transform().setDEF("transC2")
          .addChild(new Transform().setDEF("rotscaleC2")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new double[] {0.2,0.7,0.7}).setTransparency(0.5)))
              .setGeometry(new Cylinder().setRadius(0.05)))))
        .addChild(new Transform().setDEF("transC3")
          .addChild(new Transform().setDEF("rotscaleC3")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new double[] {0.2,0.7,0.7}).setTransparency(0.5)))
              .setGeometry(new Cylinder().setRadius(0.05)))))
        .addChild(ProtoInstance0 = new ProtoInstance().setDEF("connector1").setName("x3dconnector"))
        .addChild(ProtoInstance1 = new ProtoInstance().setDEF("connector2").setName("x3dconnector"))
        .addChild(ProtoInstance2 = new ProtoInstance().setDEF("connector3").setName("x3dconnector"))
        .addChild(new ROUTE().setFromNode("PS1").setFromField("translation_changed").setToNode("G1").setToField("translation"))
        .addChild(new ROUTE().setFromNode("PS2").setFromField("translation_changed").setToNode("G2").setToField("translation"))
        .addChild(new ROUTE().setFromNode("PS3").setFromField("translation_changed").setToNode("G3").setToField("translation"))
        .addChild(new ROUTE().setFromNode("PS4").setFromField("translation_changed").setToNode("G4").setToField("translation"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation").setToNode("connector1").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G2").setFromField("translation").setToNode("connector1").setToField("set_endpoint"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation").setToNode("connector2").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G3").setFromField("translation").setToNode("connector2").setToField("set_endpoint"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation").setToNode("connector3").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G4").setFromField("translation").setToNode("connector3").setToField("set_endpoint")))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(new Transform().setUSE("G1")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(new Transform().setUSE("G2")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("transnode")
            .addChild(new Transform().setUSE("transC1")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("rotscalenode")
            .addChild(new Transform().setUSE("rotscaleC1")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(new Transform().setUSE("G1")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(new Transform().setUSE("G3")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("transnode")
            .addChild(new Transform().setUSE("transC2")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("rotscalenode")
            .addChild(new Transform().setUSE("rotscaleC2")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(new Transform().setUSE("G1")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(new Transform().setUSE("G4")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("transnode")
            .addChild(new Transform().setUSE("transC3")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("rotscalenode")
            .addChild(new Transform().setUSE("rotscaleC3")));
    return X3D0;
    }
private class MFColor0 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {0.4,0.4,0.4});
  }
}
}
