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
public class arcold {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new arcold().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/arcold.new.json");
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
ProtoInstance ProtoInstance3 = null;
ProtoInstance ProtoInstance4 = null;
ProtoInstance ProtoInstance5 = null;
ProtoInstance ProtoInstance6 = null;
ProtoInstance ProtoInstance7 = null;
ProtoInstance ProtoInstance8 = null;
ProtoInstance ProtoInstance9 = null;
ProtoInstance ProtoInstance10 = null;
ProtoInstance ProtoInstance11 = null;
ProtoInstance ProtoInstance12 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("arcold.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/arc.x3d"))
        .addMeta(new meta().setName("description").setContent("an attempt to implement an arc in a graph")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setPosition(new float[] {0f,0f,5f}).setDescription("a moving graph"))
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new Transform().setDEF("trans1")
          .addChild(new Transform("trans1").setDEF("rotscale1")
            .addChild(new Shape("rotscale1")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0.2f,0.7f,0.7f})))
              .setGeometry(new Cylinder().setRadius(0.1f)))))
        .addChild(new Transform().setDEF("trans2")
          .addChild(new Transform("trans2").setDEF("rotscale2")
            .addChild(new Shape("rotscale2")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0.2f,0.7f,0.7f})))
              .setGeometry(new Cylinder().setRadius(0.1f)))))
        .addChild(new Transform().setDEF("trans3")
          .addChild(new Transform("trans3").setDEF("rotscale3")
            .addChild(new Shape("rotscale3")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0.2f,0.7f,0.7f})))
              .setGeometry(new Cylinder().setRadius(0.1f)))))
        .addChild(new ProtoDeclare().setName("point")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF("node")
              .setIS(new IS("node")
                .addConnect(new connect().setNodeField("translation").setProtoField("translation")))
              .addChild(new Shape("node")
                .setGeometry(new Sphere().setRadius(0.1f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f}))))
              .addChild(new PositionInterpolator("node").setDEF("PI1").setKey(new MFFloat1().getArray()).setKeyValue(new MFVec3f2().getArray()))
              .addChild(new Script("node").setDEF("MB1")
                .addField(new field("MB1").setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0"))
                .addField(new field("MB1").setType("SFVec3f").setName("old").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new field("MB1").setType("SFTime").setName("set_location").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field("MB1").setType("MFVec3f").setName("keyValue").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}"))
              .addChild(new TimeSensor("node").setDEF("CL1").setCycleInterval(3d).setLoop(true))
              .addChild(new ROUTE("node").setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location"))
              .addChild(new ROUTE("node").setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction"))
              .addChild(new ROUTE("node").setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue"))
              .addChild(new ROUTE("node").setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation")))))
        .addComments("from doug sanden")
        .addChild(new ProtoDeclare().setName("x3dconnector")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFNode").setName("startnode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFNode").setName("endnode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFNode").setName("transnode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFNode").setName("rotscalenode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFVec3f").setName("set_startpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("SFVec3f").setName("set_endpoint").setAccessType(field.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new ProtoBody()
            .addChild(new Script().setDEF("S1")
              .addField(new field("S1").setType("SFNode").setName("startnode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field("S1").setType("SFNode").setName("endnode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field("S1").setType("SFNode").setName("transnode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field("S1").setType("SFNode").setName("rotscalenode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field("S1").setType("SFVec3f").setName("set_startpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field("S1").setType("SFVec3f").setName("set_endpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .setIS(new IS("S1")
                .addConnect(new connect().setNodeField("startnode").setProtoField("startnode"))
                .addConnect(new connect().setNodeField("endnode").setProtoField("endnode"))
                .addConnect(new connect().setNodeField("transnode").setProtoField("transnode"))
                .addConnect(new connect().setNodeField("rotscalenode").setProtoField("rotscalenode"))
                .addConnect(new connect().setNodeField("set_startpoint").setProtoField("set_startpoint"))
                .addConnect(new connect().setNodeField("set_endpoint").setProtoField("set_endpoint")))
              .setSourceCode("ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\n"+
"		return;\n"+
"	    }\n"+
"            var dif = endpoint.subtract(startpoint);\n"+
"            var dist = dif.length()*0.5;\n"+
"            var dif2 = dif.multiply(0.5);\n"+
"            var norm = dif.normalize();\n"+
"            var transl = startpoint.add(dif2);\n"+
"	    if (typeof Quaternion !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"		var trafo = recompute(startpoint, endpoint);\n"+
"		if (typeof trafo !== 'undefined') {\n"+
"			transnode.translation = trafo.translation;\n"+
"			rotscalenode.rotation = trafo.rotation;\n"+
"			rotscalenode.scale = trafo.scale;\n"+
"		} else {\n"+
"			Browser.print(\"recompute returned undefined\");\n"+
"		}\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val || startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val || endnode.translation);\n"+
"        }"))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("point").setDEF("G1"))
        .addChild(ProtoInstance1 = new ProtoInstance().setName("point").setDEF("G2"))
        .addChild(ProtoInstance2 = new ProtoInstance().setName("point").setDEF("G3"))
        .addChild(ProtoInstance3 = new ProtoInstance().setName("point").setDEF("G4"))
        .addChild(ProtoInstance4 = new ProtoInstance().setName("x3dconnector").setDEF("connector1"))
        .addChild(ProtoInstance7 = new ProtoInstance().setName("x3dconnector").setDEF("connector2"))
        .addChild(ProtoInstance10 = new ProtoInstance().setName("x3dconnector").setDEF("connector3"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("connector2").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G3").setFromField("translation_changed").setToNode("connector2").setToField("set_endpoint"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("connector3").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G4").setFromField("translation_changed").setToNode("connector3").setToField("set_endpoint")))      ;
ProtoInstance4
          .addFieldValue(new fieldValue("connector1").setName("startnode")
            .addChild(ProtoInstance5 = new ProtoInstance().setUSE("G1")));
ProtoInstance4
          .addFieldValue(new fieldValue("connector1").setName("endnode")
            .addChild(ProtoInstance6 = new ProtoInstance().setUSE("G2")));
ProtoInstance4
          .addFieldValue(new fieldValue("connector1").setName("transnode")
            .addChild(new Transform().setUSE("trans1")));
ProtoInstance4
          .addFieldValue(new fieldValue("connector1").setName("rotscalenode")
            .addChild(new Transform().setUSE("rotscale1")));
ProtoInstance7
          .addFieldValue(new fieldValue("connector2").setName("startnode")
            .addChild(ProtoInstance8 = new ProtoInstance().setUSE("G1")));
ProtoInstance7
          .addFieldValue(new fieldValue("connector2").setName("endnode")
            .addChild(ProtoInstance9 = new ProtoInstance().setUSE("G3")));
ProtoInstance7
          .addFieldValue(new fieldValue("connector2").setName("transnode")
            .addChild(new Transform().setUSE("trans2")));
ProtoInstance7
          .addFieldValue(new fieldValue("connector2").setName("rotscalenode")
            .addChild(new Transform().setUSE("rotscale2")));
ProtoInstance10
          .addFieldValue(new fieldValue("connector3").setName("startnode")
            .addChild(ProtoInstance11 = new ProtoInstance().setUSE("G1")));
ProtoInstance10
          .addFieldValue(new fieldValue("connector3").setName("endnode")
            .addChild(ProtoInstance12 = new ProtoInstance().setUSE("G4")));
ProtoInstance10
          .addFieldValue(new fieldValue("connector3").setName("transnode")
            .addChild(new Transform().setUSE("trans3")));
ProtoInstance10
          .addFieldValue(new fieldValue("connector3").setName("rotscalenode")
            .addChild(new Transform().setUSE("rotscale3")));
    return X3D0;
    }
protected class MFColor0 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.4f,0.4f,0.4f});
  }
}
protected class MFFloat1 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFVec3f2 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,5f,0f});
  }
}
}
