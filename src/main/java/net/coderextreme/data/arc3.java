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
public class arc3 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new arc3().initialize().toFileJSON("../data/arc3.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("arc3.x3d"))
        .addMeta(new meta().setName("creator").setContent("Lost, Doug Sanden I think"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d"))
        .addMeta(new meta().setName("description").setContent("a generic proto to connect two objects")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setPosition(new float[] {0f,0f,5f}).setDescription("Only Viewpoint"))
        .addChild(new Background().setSkyColor(new org.web3d.x3d.jsail.fields.MFColor(new MFColor0().getArray())).setTransparency(0f))
        .addChild(new Transform().setDEF("DECLpoint_G1_node").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
          .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
            .setGeometry(new Sphere().setRadius(0.1f))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f}))))
          .addChild(new PositionInterpolator().setDEF("DECLpoint_G1_PI1").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat1().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f2().getArray())))
          .addChild(new TimeSensor().setDEF("DECLpoint_G1_CL1").setCycleInterval(3d).setLoop(true))
          .addChild(new ROUTE().setFromNode("DECLpoint_G1_CL1").setFromField("cycleTime").setToNode("DECLpoint_G1_MB1").setToField("set_location"))
          .addChild(new ROUTE().setFromNode("DECLpoint_G1_CL1").setFromField("fraction_changed").setToNode("DECLpoint_G1_PI1").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("DECLpoint_G1_MB1").setFromField("keyValue").setToNode("DECLpoint_G1_PI1").setToField("keyValue"))
          .addChild(new ROUTE().setFromNode("DECLpoint_G1_PI1").setFromField("value_changed").setToNode("DECLpoint_G1_node").setToField("set_translation"))
          .addX3DScript(new X3DScript().setDEF("DECLpoint_G1_MB1")
            .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFVec3f").setName("old").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFTime").setName("set_location").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("MFVec3f").setName("keyValue").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0 0 5 0"))))
        .addChild(new Transform().setDEF("DECLpoint_G2_node").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
          .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
            .setGeometry(new Sphere().setRadius(0.1f))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f}))))
          .addChild(new PositionInterpolator().setDEF("DECLpoint_G2_PI1").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat3().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f4().getArray())))
          .addChild(new TimeSensor().setDEF("DECLpoint_G2_CL1").setCycleInterval(3d).setLoop(true))
          .addChild(new ROUTE().setFromNode("DECLpoint_G2_CL1").setFromField("cycleTime").setToNode("DECLpoint_G2_MB1").setToField("set_location"))
          .addChild(new ROUTE().setFromNode("DECLpoint_G2_CL1").setFromField("fraction_changed").setToNode("DECLpoint_G2_PI1").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("DECLpoint_G2_MB1").setFromField("keyValue").setToNode("DECLpoint_G2_PI1").setToField("keyValue"))
          .addChild(new ROUTE().setFromNode("DECLpoint_G2_PI1").setFromField("value_changed").setToNode("DECLpoint_G2_node").setToField("set_translation"))
          .addX3DScript(new X3DScript().setDEF("DECLpoint_G2_MB1")
            .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFVec3f").setName("old").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFTime").setName("set_location").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("MFVec3f").setName("keyValue").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0 0 5 0"))))
        .addChild(new Group().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
          .addChild(new Transform().setDEF("DECLx3dconnector_connector1_trans").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
            .addChild(new Transform().setDEF("DECLx3dconnector_connector1_rotscale").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
              .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0.2f,0.7f,0.7f}).setTransparency(0.5f)))
                .setGeometry(new Cylinder().setRadius(0.05f)))))
          .addX3DScript(new X3DScript().setDEF("DECLx3dconnector_connector1_S1")
            .addField(new field().setType("SFNode").setName("startnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Group().setUSE("DECLpoint_G1_node")))
            .addField(new field().setType("SFNode").setName("endnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Group().setUSE("DECLpoint_G2_node")))
            .addField(new field().setType("SFNode").setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Transform().setUSE("DECLx3dconnector_connector1_trans")))
            .addField(new field().setType("SFNode").setName("rotscale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Transform().setUSE("DECLx3dconnector_connector1_rotscale")))
            .addField(new field().setType("SFVec3f").setName("set_startpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("SFVec3f").setName("set_endpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))))
        .addChild(new ROUTE().setFromNode("DECLpoint_G1_node").setFromField("translation").setToNode("DECLx3dconnector_connector1_S1").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("DECLpoint_G2_node").setFromField("translation").setToNode("DECLx3dconnector_connector1_S1").setToField("set_endpoint")))      ;
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
protected class MFFloat3 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFVec3f4 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,5f,0f});
  }
}
}
