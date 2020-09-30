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
    new arcold().initialize().toFileJSON("../data/arcold.new.json");
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
        .addChild(new Background().setSkyColor(new org.web3d.x3d.jsail.fields.MFColor(new MFColor0().getArray())).setTransparency(0f))
        .addChild(new Transform().setDEF("trans1").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
          .addChild(new Transform().setDEF("rotscale1").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
            .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0.2f,0.7f,0.7f})))
              .setGeometry(new Cylinder().setRadius(0.1f)))))
        .addChild(new Transform().setDEF("trans2").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
          .addChild(new Transform().setDEF("rotscale2").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
            .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0.2f,0.7f,0.7f})))
              .setGeometry(new Cylinder().setRadius(0.1f)))))
        .addChild(new Transform().setDEF("trans3").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
          .addChild(new Transform().setDEF("rotscale3").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
            .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0.2f,0.7f,0.7f})))
              .setGeometry(new Cylinder().setRadius(0.1f)))))
        .addChild(new ProtoDeclare().setName("point")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF("node").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("translation")))
              .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
                .setGeometry(new Sphere().setRadius(0.1f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f}))))
              .addChild(new PositionInterpolator().setDEF("PI1").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat1().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f2().getArray())))
              .addChild(new TimeSensor().setDEF("CL1").setCycleInterval(3d).setLoop(true))
              .addChild(new ROUTE().setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location"))
              .addChild(new ROUTE().setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction"))
              .addChild(new ROUTE().setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue"))
              .addChild(new ROUTE().setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation"))
              .addX3DScript(new X3DScript().setDEF("MB1")
                .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0"))
                .addField(new field().setType("SFVec3f").setName("old").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new field().setType("SFTime").setName("set_location").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("MFVec3f").setName("keyValue").setAccessType(field.ACCESSTYPE_OUTPUTONLY))))))
        .addComments(new CommentsBlock("from doug sanden"))
        .addChild(new ProtoDeclare().setName("x3dconnector")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFNode").setName("startnode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFNode").setName("endnode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFNode").setName("transnode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFNode").setName("rotscalenode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFVec3f").setName("set_startpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("SFVec3f").setName("set_endpoint").setAccessType(field.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new ProtoBody()
            .setX3DScript(new X3DScript().setDEF("S1")
              .addField(new field().setType("SFNode").setName("startnode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType("SFNode").setName("endnode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType("SFNode").setName("transnode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType("SFNode").setName("rotscalenode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType("SFVec3f").setName("set_startpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType("SFVec3f").setName("set_endpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("startnode").setProtoField("startnode"))
                .addConnect(new connect().setNodeField("endnode").setProtoField("endnode"))
                .addConnect(new connect().setNodeField("transnode").setProtoField("transnode"))
                .addConnect(new connect().setNodeField("rotscalenode").setProtoField("rotscalenode"))
                .addConnect(new connect().setNodeField("set_startpoint").setProtoField("set_startpoint"))
                .addConnect(new connect().setNodeField("set_endpoint").setProtoField("set_endpoint"))))))
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
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(ProtoInstance5 = new ProtoInstance().setUSE("G1")));
ProtoInstance4
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(ProtoInstance6 = new ProtoInstance().setUSE("G2")));
ProtoInstance4
          .addFieldValue(new fieldValue().setName("transnode")
            .addChild(new Transform().setUSE("trans1")));
ProtoInstance4
          .addFieldValue(new fieldValue().setName("rotscalenode")
            .addChild(new Transform().setUSE("rotscale1")));
ProtoInstance7
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(ProtoInstance8 = new ProtoInstance().setUSE("G1")));
ProtoInstance7
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(ProtoInstance9 = new ProtoInstance().setUSE("G3")));
ProtoInstance7
          .addFieldValue(new fieldValue().setName("transnode")
            .addChild(new Transform().setUSE("trans2")));
ProtoInstance7
          .addFieldValue(new fieldValue().setName("rotscalenode")
            .addChild(new Transform().setUSE("rotscale2")));
ProtoInstance10
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(ProtoInstance11 = new ProtoInstance().setUSE("G1")));
ProtoInstance10
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(ProtoInstance12 = new ProtoInstance().setUSE("G4")));
ProtoInstance10
          .addFieldValue(new fieldValue().setName("transnode")
            .addChild(new Transform().setUSE("trans3")));
ProtoInstance10
          .addFieldValue(new fieldValue().setName("rotscalenode")
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
