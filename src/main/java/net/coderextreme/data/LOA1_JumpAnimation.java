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
public class LOA1_JumpAnimation {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new LOA1_JumpAnimation().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/LOA1_JumpAnimation.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("LOA1_JumpAnimation.x3d"))
        .addMeta(new meta().setName("description").setContent("Humanoid animation prototype reusable by any Humanoid."))
        .addMeta(new meta().setName("creator").setContent("Cindy Ballreich cindy@ballreich.net 3Name3D"))
        .addMeta(new meta().setName("rights").setContent("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."))
        .addMeta(new meta().setName("translator").setContent("Scott Tufts"))
        .addMeta(new meta().setName("translated").setContent("1 December 2001"))
        .addMeta(new meta().setName("modified").setContent("23 May 2020"))
        .addMeta(new meta().setName("reference").setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"))
        .addMeta(new meta().setName("reference").setContent("http://www.HAnim.org"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Models"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Nodes"))
        .addMeta(new meta().setName("subject").setContent("InterchangableActorsViaDynamicRouting Nancy jump Animation HAnim 2001"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_JumpAnimation.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("LOA1_JumpAnimation.x3d"))
        .addChild(new ProtoDeclare().setName("LOA1_JumpAnimation")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFTime").setName("cycleInterval").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
            .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("true"))
            .addField(new field().setType("SFBool").setName("loop").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("true"))
            .addField(new field().setType("SFTime").setName("startTime").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField(new field().setType("SFTime").setName("stopTime").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("-1"))
            .addField(new field().setType("SFFloat").setName("fraction_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFBool").setName("isActive").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFVec3f").setName("HumanoidRoot_translation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("HumanoidRoot_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("lower_body_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("l_hip_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("l_knee_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("l_ankle_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("l_midtarsal_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("r_hip_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("r_knee_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("r_ankle_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("r_midtarsal_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("vl5_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("skullbase_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("l_shoulder_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("l_elbow_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("l_wrist_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("r_shoulder_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("r_elbow_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("r_wrist_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new TimeSensor().setDEF("TIMER").setLoop(true)
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("cycleInterval").setProtoField("cycleInterval"))
                  .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
                  .addConnect(new connect().setNodeField("loop").setProtoField("loop"))
                  .addConnect(new connect().setNodeField("startTime").setProtoField("startTime"))
                  .addConnect(new connect().setNodeField("stopTime").setProtoField("stopTime"))
                  .addConnect(new connect().setNodeField("fraction_changed").setProtoField("fraction_changed"))
                  .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))))
              .addChild(new PositionInterpolator().setDEF("HUMANOIDROOT_POSITION_ANIMATOR").setKey(new MFFloat0().getArray()).setKeyValue(new MFVec3f1().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("HumanoidRoot_translation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("HUMANOIDROOT_ANIMATOR").setKey(new MFFloat2().getArray()).setKeyValue(new MFRotation3().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("HumanoidRoot_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("SACROILIAC_ANIMATOR").setKey(new MFFloat4().getArray()).setKeyValue(new MFRotation5().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("lower_body_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("L_HIP_ANIMATOR").setKey(new MFFloat6().getArray()).setKeyValue(new MFRotation7().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_hip_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("L_KNEE_ANIMATOR").setKey(new MFFloat8().getArray()).setKeyValue(new MFRotation9().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_knee_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("L_ANKLE_ANIMATOR").setKey(new MFFloat10().getArray()).setKeyValue(new MFRotation11().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_ankle_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("L_MIDTARSAL_ANIMATOR").setKey(new MFFloat12().getArray()).setKeyValue(new MFRotation13().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_midtarsal_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("R_HIP_ANIMATOR").setKey(new MFFloat14().getArray()).setKeyValue(new MFRotation15().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("r_hip_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("R_KNEE_ANIMATOR").setKey(new MFFloat16().getArray()).setKeyValue(new MFRotation17().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("r_knee_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("R_ANKLE_ANIMATOR").setKey(new MFFloat18().getArray()).setKeyValue(new MFRotation19().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("r_ankle_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("R_MIDTARSAL_ANIMATOR").setKey(new MFFloat20().getArray()).setKeyValue(new MFRotation21().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("r_midtarsal_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("VL5_ANIMATOR").setKey(new MFFloat22().getArray()).setKeyValue(new MFRotation23().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("vl5_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("SKULLBASE_ANIMATOR").setKey(new MFFloat24().getArray()).setKeyValue(new MFRotation25().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("skullbase_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("L_SHOULDER_ANIMATOR").setKey(new MFFloat26().getArray()).setKeyValue(new MFRotation27().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_shoulder_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("L_ELBOW_ANIMATOR").setKey(new MFFloat28().getArray()).setKeyValue(new MFRotation29().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_elbow_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("L_WRIST_ANIMATOR").setKey(new MFFloat30().getArray()).setKeyValue(new MFRotation31().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_wrist_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("R_SHOULDER_ANIMATOR").setKey(new MFFloat32().getArray()).setKeyValue(new MFRotation33().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("r_shoulder_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("R_ELBOW_ANIMATOR").setKey(new MFFloat34().getArray()).setKeyValue(new MFRotation35().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("r_elbow_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("R_WRIST_ANIMATOR").setKey(new MFFloat36().getArray()).setKeyValue(new MFRotation37().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("r_wrist_rotation_changed")))))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("HUMANOIDROOT_POSITION_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("HUMANOIDROOT_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("SACROILIAC_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_HIP_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_KNEE_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_ANKLE_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_MIDTARSAL_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_HIP_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_KNEE_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_ANKLE_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_MIDTARSAL_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("VL5_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("SKULLBASE_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_SHOULDER_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_ELBOW_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_WRIST_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_SHOULDER_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_ELBOW_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_WRIST_ANIMATOR"))))
        .addChild(new Anchor().setDescription("see InterchangableActorsViaDynamicRouting scene").setParameter(new MFString38().getArray()).setUrl(new MFString39().getArray())
          .addChild(new Shape()
            .setGeometry(new Text().setString(new MFString40().getArray())
              .setFontStyle(new FontStyle().setJustify(new MFString41().getArray()).setSize(0.8000f)))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0.2f}))))))      ;
    return X3D0;
    }
protected class MFFloat0 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0400f,0.0800f,0.1200f,0.1600f,0.2000f,0.2400f,0.2800f,0.3200f,0.3600f,0.4000f,0.4400f,0.4800f,0.6400f,0.7600f,0.8000f,0.8400f,0.8800f,0.9200f,0.9600f,1.0000f});
  }
}
protected class MFVec3f1 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.0000f,-0.0126f,-0.0129f,0.0000f,-0.0471f,-0.0374f,-0.0003f,-0.1049f,-0.0535f,-0.0006f,-0.1892f,-0.0656f,-0.0008f,-0.2860f,-0.0628f,-0.0010f,-0.3795f,-0.0515f,-0.0011f,-0.4484f,-0.0366f,-0.0011f,-0.4484f,-0.0366f,-0.0011f,-0.3269f,-0.1499f,-0.0009f,-0.1300f,-0.0636f,-0.0005f,-0.0312f,-0.0549f,0.0005f,0.0530f,0.0273f,0.0002f,0.4148f,0.0069f,0.0000f,0.0305f,0.0215f,0.0000f,-0.0130f,-0.0106f,0.0000f,-0.0693f,-0.0106f,0.0001f,-0.1037f,-0.0051f,0.0001f,-0.0720f,-0.0076f,0.0001f,-0.0163f,-0.0049f,0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat2 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.4800f,0.6400f,0.7600f,1.0000f});
  }
}
protected class MFRotation3 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,1.0000f,0.0000f,0.0000f,0.3273f,1.0000f,0.0000f,0.0000f,0.3273f,0.0000f,0.0000f,1.0000f,0.0000f,0.0000f,0.0000f,1.0000f,0.0000f,0.0000f,0.0000f,1.0000f,0.0000f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat4 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.4800f,0.7600f,1.0000f});
  }
}
protected class MFRotation5 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,1.0000f,0.0000f,0.0000f,0.1892f,1.0000f,0.0000f,0.0000f,0.1892f,0.0000f,0.0000f,1.0000f,0.0000f,0.0000f,0.0000f,1.0000f,0.0000f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat6 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.3600f,0.4000f,0.4400f,0.4800f,0.6400f,0.7600f,0.8800f,1.0000f});
  }
}
protected class MFRotation7 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,1.0000f,0.0000f,0.0000f,4.3490f,1.0000f,0.0000f,0.0000f,4.3490f,1.0000f,0.0000f,0.0000f,4.6150f,-1.0000f,0.0000f,0.0000f,0.9136f,-1.0000f,0.0000f,0.0000f,0.3614f,0.0000f,0.0000f,1.0000f,0.0000f,-1.0000f,0.0000f,0.0000f,0.7869f,-1.0000f,0.0000f,0.0000f,0.3918f,-1.0000f,0.0000f,0.0000f,0.5433f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat8 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.4800f,0.6400f,0.7600f,0.8800f,1.0000f});
  }
}
protected class MFRotation9 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,1.0000f,0.0000f,0.0000f,2.0470f,1.0000f,0.0000f,0.0000f,2.0470f,0.0000f,0.0000f,1.0000f,0.0000f,1.0000f,0.0000f,0.0000f,1.5660f,1.0000f,0.0000f,0.0000f,0.5913f,1.0000f,0.0000f,0.0000f,0.9235f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat10 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.3600f,0.4000f,0.4400f,0.4800f,0.6400f,0.7600f,0.8400f,0.8800f,0.9200f,0.9600f,1.0000f});
  }
}
protected class MFRotation11 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,-1.0000f,0.0000f,0.0000f,0.6250f,-1.0000f,0.0000f,0.0000f,0.6250f,-1.0000f,0.0000f,0.0000f,0.3364f,-1.0000f,0.0000f,0.0000f,0.2742f,-1.0000f,0.0000f,0.0000f,0.0508f,1.0000f,0.0000f,0.0000f,0.2833f,1.0000f,0.0000f,0.0000f,0.6667f,1.0000f,0.0000f,0.0000f,0.2833f,-1.0000f,0.0000f,0.0000f,0.2108f,-1.0000f,0.0000f,0.0000f,0.3750f,-1.0000f,0.0000f,0.0000f,0.3146f,-1.0000f,0.0000f,0.0000f,0.1174f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat12 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.5000f,1.0000f});
  }
}
protected class MFRotation13 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1.0000f,0.0000f,0.0000f,0.0000f,1.0000f,0.0000f,0.0000f,-0.2000f,1.0000f,0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat14 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.3600f,0.4000f,0.4400f,0.4800f,0.6400f,0.7600f,0.8800f,1.0000f});
  }
}
protected class MFRotation15 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,1.0000f,0.0000f,0.0000f,4.4330f,1.0000f,0.0000f,0.0000f,4.4330f,1.0000f,0.0000f,0.0000f,4.6470f,-1.0000f,0.0000f,0.0000f,0.8943f,-1.0000f,0.0000f,0.0000f,0.3698f,0.0000f,0.0000f,1.0000f,0.0000f,-1.0000f,0.0000f,0.0000f,0.4963f,-1.0000f,0.0000f,0.0000f,0.3829f,-1.0000f,0.0000f,0.0000f,0.5169f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat16 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.4800f,0.6400f,0.7600f,0.8800f,1.0000f});
  }
}
protected class MFRotation17 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,1.0000f,0.0000f,0.0000f,2.0050f,1.0000f,0.0000f,0.0000f,2.0050f,0.0000f,0.0000f,1.0000f,0.0000f,1.0000f,0.0000f,0.0000f,0.9507f,1.0000f,0.0000f,0.0000f,0.5845f,1.0000f,0.0000f,0.0000f,0.9054f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat18 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.3600f,0.4000f,0.4400f,0.4800f,0.6400f,0.7600f,0.8400f,0.8800f,0.9200f,0.9600f,1.0000f});
  }
}
protected class MFRotation19 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,-1.0000f,0.0000f,0.0000f,0.6735f,-1.0000f,0.0000f,0.0000f,0.6735f,-1.0000f,0.0000f,0.0000f,0.3527f,-1.0000f,0.0000f,0.0000f,0.3038f,-1.0000f,0.0000f,0.0000f,0.0796f,1.0000f,0.0000f,0.0000f,0.3001f,1.0000f,0.0000f,0.0000f,0.6509f,1.0000f,0.0000f,0.0000f,0.3001f,-1.0000f,0.0000f,0.0000f,0.2087f,-1.0000f,0.0000f,0.0000f,0.3756f,-1.0000f,0.0000f,0.0000f,0.3279f,-1.0000f,0.0000f,0.0000f,0.1193f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat20 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.5000f,1.0000f});
  }
}
protected class MFRotation21 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1.0000f,0.0000f,0.0000f,-0.2000f,1.0000f,0.0000f,0.0000f,0.0000f,1.0000f,0.0000f,0.0000f,-0.2000f});
  }
}
protected class MFFloat22 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2083f,0.3750f,0.7500f,0.8333f,1.0000f});
  }
}
protected class MFRotation23 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,1.0000f,0.0000f,0.0826f,-0.0197f,-0.5974f,0.8017f,0.0823f,0.0093f,-0.9648f,0.2627f,0.1734f,-0.0124f,0.9549f,-0.2968f,0.0873f,-0.0081f,0.9691f,-0.2463f,0.1580f,0.0000f,1.0000f,0.0000f,0.0826f});
  }
}
protected class MFFloat24 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.4800f,0.7600f,1.0000f});
  }
}
protected class MFRotation25 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,-1.0000f,0.0000f,0.0000f,0.5989f,-1.0000f,0.0000f,0.0000f,0.5989f,-1.0000f,0.0000f,0.0000f,0.3216f,1.0000f,0.0000f,0.0000f,0.0650f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat26 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.6400f,0.7600f,0.8800f,1.0000f});
  }
}
protected class MFRotation27 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,-0.9987f,0.0255f,0.0450f,1.5700f,-0.9987f,0.0255f,0.0450f,1.5700f,1.0000f,0.0004f,0.0031f,4.1140f,-0.8413f,0.3238f,0.4329f,1.4530f,-0.8770f,0.4198f,0.2337f,0.6009f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat28 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.6400f,0.7600f,1.0000f});
  }
}
protected class MFRotation29 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,-1.0000f,0.0000f,0.0000f,0.1229f,-1.0000f,0.0000f,0.0000f,0.1229f,-1.0000f,0.0000f,0.0000f,0.5976f,-1.0000f,0.0000f,0.0000f,0.3917f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat30 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.6400f,0.7600f,0.8800f,1.0000f});
  }
}
protected class MFRotation31 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,0.0673f,0.9895f,-0.1281f,4.1557f,0.0673f,0.9895f,-0.1281f,4.1557f,0.0036f,0.9999f,0.0136f,4.5822f,0.0000f,-1.0000f,0.0000f,0.6559f,-0.0005f,-1.0000f,0.0013f,1.2840f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat32 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.6400f,0.7600f,0.8800f,1.0000f});
  }
}
protected class MFRotation33 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,0.9992f,0.0204f,0.0356f,4.6880f,0.9992f,0.0204f,0.0356f,4.6880f,0.9989f,-0.0462f,0.0052f,4.0790f,-0.8687f,-0.2525f,-0.4261f,1.5010f,-0.9410f,-0.2893f,-0.1754f,0.4788f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat34 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.6400f,0.7600f,1.0000f});
  }
}
protected class MFRotation35 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,-1.0000f,0.0000f,0.0000f,0.0415f,-1.0000f,0.0000f,0.0000f,0.0415f,-1.0000f,0.0000f,0.0000f,0.5855f,-1.0000f,0.0000f,0.0000f,0.5852f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat36 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.6400f,0.7600f,1.0000f});
  }
}
protected class MFRotation37 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,-0.0585f,0.9839f,-0.1688f,1.8596f,-0.0585f,0.9839f,-0.1688f,1.8596f,-0.0022f,0.9980f,-0.0630f,1.4607f,0.0000f,1.0000f,0.0000f,0.4973f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFString38 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_blank"});
  }
}
protected class MFString39 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"});
  }
}
protected class MFString40 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"LOA1_JumpAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."});
  }
}
protected class MFString41 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
