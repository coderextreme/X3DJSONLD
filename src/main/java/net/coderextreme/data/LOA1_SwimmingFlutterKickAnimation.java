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
public class LOA1_SwimmingFlutterKickAnimation {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new LOA1_SwimmingFlutterKickAnimation().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/LOA1_SwimmingFlutterKickAnimation.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("LOA1_SwimmingFlutterKickAnimation.x3d"))
        .addMeta(new meta().setName("description").setContent("Humanoid animation prototype reusable by any Humanoid."))
        .addMeta(new meta().setName("creator").setContent("Etsuko Lippi"))
        .addMeta(new meta().setName("created").setContent("13 December 2001"))
        .addMeta(new meta().setName("modified").setContent("23 May 2020"))
        .addMeta(new meta().setName("warning").setContent("not yet tested, need to compare with NancyDivingExample interpolators"))
        .addMeta(new meta().setName("reference").setContent("http://www.HAnim.org"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Models"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Nodes"))
        .addMeta(new meta().setName("subject").setContent("Swimming flutter kick Animation HAnim 2001"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_SwimmingFlutterKickAnimation.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("LOA1_SwimmingFlutterKickAnimation.x3d"))
        .addChild(new ProtoDeclare().setName("LOA1_DivingAnimation")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFTime").setName("cycleInterval").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("7"))
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
              .addComments("no SACROILIAC_ANIMATOR")
              .addChild(new OrientationInterpolator().setDEF("L_HIP_ANIMATOR").setKey(new MFFloat4().getArray()).setKeyValue(new MFRotation5().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_hip_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("L_KNEE_ANIMATOR").setKey(new MFFloat6().getArray()).setKeyValue(new MFRotation7().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_knee_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("L_ANKLE_ANIMATOR").setKey(new MFFloat8().getArray()).setKeyValue(new MFRotation9().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_ankle_rotation_changed"))))
              .addComments("no L_MIDTARSAL_ANIMATOR")
              .addChild(new OrientationInterpolator().setDEF("R_HIP_ANIMATOR").setKey(new MFFloat10().getArray()).setKeyValue(new MFRotation11().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("r_hip_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("R_KNEE_ANIMATOR").setKey(new MFFloat12().getArray()).setKeyValue(new MFRotation13().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("r_knee_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("R_ANKLE_ANIMATOR").setKey(new MFFloat14().getArray()).setKeyValue(new MFRotation15().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("r_ankle_rotation_changed"))))
              .addComments("no L_MIDTARSAL_ANIMATOR")
              .addChild(new OrientationInterpolator().setDEF("VL5_ANIMATOR").setKey(new MFFloat16().getArray()).setKeyValue(new MFRotation17().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("vl5_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("SKULLBASE_ANIMATOR").setKey(new MFFloat18().getArray()).setKeyValue(new MFRotation19().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("skullbase_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("L_SHOULDER_ANIMATOR").setKey(new MFFloat20().getArray()).setKeyValue(new MFRotation21().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_shoulder_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("L_ELBOW_ANIMATOR").setKey(new MFFloat22().getArray()).setKeyValue(new MFRotation23().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_elbow_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("L_WRIST_ANIMATOR").setKey(new MFFloat24().getArray()).setKeyValue(new MFRotation25().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_wrist_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("R_SHOULDER_ANIMATOR").setKey(new MFFloat26().getArray()).setKeyValue(new MFRotation27().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("r_shoulder_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("R_ELBOW_ANIMATOR").setKey(new MFFloat28().getArray()).setKeyValue(new MFRotation29().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("r_elbow_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("R_WRIST_ANIMATOR").setKey(new MFFloat30().getArray()).setKeyValue(new MFRotation31().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("r_wrist_rotation_changed")))))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("HUMANOIDROOT_POSITION_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("HUMANOIDROOT_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("SKULLBASE_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("VL5_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_HIP_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_KNEE_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_ANKLE_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_HIP_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_KNEE_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_ANKLE_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_SHOULDER_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_ELBOW_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_WRIST_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_SHOULDER_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_ELBOW_ANIMATOR"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_WRIST_ANIMATOR"))))
        .addChild(new Viewpoint().setDescription("LOA1_SwimmingFlutterKickAnimation scene").setPosition(new float[] {0f,0f,12f}))
        .addChild(new Anchor().setDescription("Nancy Diving").setParameter(new MFString32().getArray()).setUrl(new MFString33().getArray())
          .addChild(new Shape()
            .setGeometry(new Text().setString(new MFString34().getArray())
              .setFontStyle(new FontStyle().setJustify(new MFString35().getArray()).setSize(0.8000f)))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0.2f}))))))      ;
    return X3D0;
    }
protected class MFFloat0 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0417f,0.1250f,0.1667f,0.2083f,0.2500f,0.2917f,0.3750f,0.4583f,0.5000f,0.5417f,0.5833f,0.6250f,0.7083f,0.7500f,0.7917f,0.8750f,0.9167f,1.0000f});
  }
}
protected class MFVec3f1 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,-0.0093f,0.0000f,0.0000f,-0.0039f,0.0000f,0.0000f,-0.0088f,0.0000f,0.0000f,-0.0149f,0.0000f,0.0000f,-0.0264f,0.0000f,0.0000f,-0.0393f,0.0000f,0.0000f,-0.0502f,0.0000f,0.0000f,-0.0747f,0.0000f,0.0000f,-0.0273f,0.0000f,0.0000f,-0.0161f,0.0000f,0.0000f,-0.0113f,0.0000f,0.0000f,-0.0058f,0.0000f,0.0000f,-0.0020f,0.0000f,0.0000f,-0.0026f,0.0000f,0.0000f,-0.0143f,0.0000f,0.0000f,-0.0380f,0.0000f,0.0000f,-0.0565f,0.0000f,0.0000f,-0.0450f,0.0000f,0.0000f,-0.0093f,0.0000f});
  }
}
protected class MFFloat2 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,1.0000f});
  }
}
protected class MFRotation3 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat4 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2500f,0.3750f,0.6667f,0.7917f,0.9167f,1.0000f});
  }
}
protected class MFRotation5 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.8730f,0.0609f,0.4840f,0.2865f,0.9963f,-0.0106f,0.0848f,0.2488f,0.9965f,0.0159f,-0.0822f,0.3836f,-1.0000f,0.0000f,0.0000f,0.5518f,-0.9964f,0.0223f,0.0817f,0.5351f,-0.9809f,0.0491f,0.1881f,0.5204f,-0.8730f,0.0609f,0.4840f,0.2865f});
  }
}
protected class MFFloat6 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2083f,0.3750f,0.5000f,0.6667f,0.7917f,0.9167f,1.0000f});
  }
}
protected class MFRotation7 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1.0000f,0.0000f,0.0000f,0.3226f,1.0000f,0.0000f,0.0000f,0.1556f,1.0000f,0.0000f,0.0000f,0.0868f,1.0000f,0.0000f,0.0000f,0.8751f,1.0000f,0.0000f,0.0000f,1.1310f,1.0000f,0.0000f,0.0000f,0.0996f,1.0000f,0.0000f,0.0000f,0.3942f,1.0000f,0.0000f,0.0000f,0.3226f});
  }
}
protected class MFFloat8 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.1250f,0.2083f,0.3750f,0.4583f,0.5000f,0.6667f,0.7500f,0.7917f,0.9167f,1.0000f});
  }
}
protected class MFRotation9 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1.0000f,0.0000f,0.0000f,0.6001f,1.0000f,0.0000f,0.0000f,0.6509f,1.0000f,0.0000f,0.0000f,0.6001f,1.0000f,0.0000f,0.0000f,0.6001f,1.0000f,0.0000f,0.0000f,0.6509f,1.0000f,0.0000f,0.0000f,0.6001f,1.0000f,0.0000f,0.0000f,0.6001f,1.0000f,0.0000f,0.0000f,0.6509f,1.0000f,0.0000f,0.0000f,0.6001f,1.0000f,0.0000f,0.0000f,0.6509f,1.0000f,0.0000f,0.0000f,0.6001f});
  }
}
protected class MFFloat10 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.1250f,0.2083f,0.2917f,0.5000f,0.7917f,0.9167f,1.0000f});
  }
}
protected class MFRotation11 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.5831f,0.0351f,0.8116f,0.1481f,-0.9950f,0.0230f,0.0967f,0.4683f,-1.0000f,0.0019f,0.0080f,0.4732f,-0.9980f,-0.0158f,-0.0610f,0.5079f,-0.9131f,-0.0624f,-0.4030f,0.3361f,1.0000f,0.0000f,0.0000f,0.2571f,0.9891f,-0.0280f,0.1444f,0.3879f,-0.5831f,0.0351f,0.8116f,0.1481f});
  }
}
protected class MFFloat12 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.1250f,0.2083f,0.3750f,0.5000f,0.6667f,0.9167f,1.0000f});
  }
}
protected class MFRotation13 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1.0000f,0.0000f,0.0000f,0.8573f,1.0000f,0.0000f,0.0000f,0.5351f,1.0000f,0.0000f,0.0000f,0.1756f,1.0000f,0.0000f,0.0000f,0.1194f,1.0000f,0.0000f,0.0000f,0.3153f,1.0000f,0.0000f,0.0000f,0.0935f,1.0000f,0.0000f,0.0000f,0.0856f,1.0000f,0.0000f,0.0000f,0.8573f});
  }
}
protected class MFFloat14 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.1250f,0.2083f,0.3750f,0.4583f,0.5000f,0.6667f,0.7500f,0.7917f,0.9167f,1.0000f});
  }
}
protected class MFRotation15 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1.0000f,0.0000f,0.0000f,0.8001f,1.0000f,0.0000f,0.0000f,0.8509f,1.0000f,0.0000f,0.0000f,0.8001f,1.0000f,0.0000f,0.0000f,0.8001f,1.0000f,0.0000f,0.0000f,0.8509f,1.0000f,0.0000f,0.0000f,0.8001f,1.0000f,0.0000f,0.0000f,0.8001f,1.0000f,0.0000f,0.0000f,0.8001f,1.0000f,0.0000f,0.0000f,0.8001f,1.0000f,0.0000f,0.0000f,0.8509f,1.0000f,0.0000f,0.0000f,0.8600f});
  }
}
protected class MFFloat16 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2083f,0.3750f,0.7500f,0.8333f,1.0000f});
  }
}
protected class MFRotation17 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,1.0000f,0.0000f,0.0826f,-0.0197f,-0.5974f,0.8017f,0.0823f,0.0093f,-0.9648f,0.2627f,0.1734f,-0.0124f,0.9549f,-0.2968f,0.0873f,-0.0081f,0.9691f,-0.2463f,0.1580f,0.0000f,1.0000f,0.0000f,0.0826f});
  }
}
protected class MFFloat18 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3000f,0.3200f,0.4000f,0.4500f,0.6000f,0.6500f,0.7000f,0.7500f,0.8500f,0.9000f,0.9500f,1.0000f});
  }
}
protected class MFRotation19 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1.0000f,0.0000f,0.0000f,1.0000f,-1.0000f,0.0000f,0.0000f,1.0000f,-1.0000f,0.0000f,0.0000f,0.9990f,-1.0000f,0.0000f,0.0000f,0.9900f,-1.0000f,0.0000f,0.0000f,0.9900f,-1.0000f,0.0000f,0.0000f,0.9000f,-1.0000f,0.0000f,0.0000f,0.9000f,-1.0000f,0.0000f,0.0000f,0.9000f,-1.0000f,0.0000f,0.0000f,0.9000f,-1.0000f,0.0000f,0.0000f,0.9000f,-1.0000f,0.0000f,0.0000f,0.9000f,-1.0000f,0.0000f,0.0000f,0.9000f,-1.0000f,0.0000f,0.0000f,0.9000f,-1.0000f,0.0000f,0.0000f,1.0000f});
  }
}
protected class MFFloat20 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2500f,0.3750f,0.6667f,0.7917f,0.9167f,1.0000f});
  }
}
protected class MFRotation21 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.1000f,0.0000f,0.0000f,1.0000f,0.2000f,0.0000f,0.0000f,1.0000f,0.2000f,0.8600f,0.2500f,0.4200f,0.5000f,0.8600f,0.2500f,0.4200f,0.8000f,0.8600f,0.2500f,0.4200f,0.4000f,0.8600f,0.2500f,0.4200f,0.2000f});
  }
}
protected class MFFloat22 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.6400f,0.7600f,1.0000f});
  }
}
protected class MFRotation23 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,-1.0000f,0.0000f,0.0000f,0.1229f,-1.0000f,0.0000f,0.0000f,0.1229f,-1.0000f,0.0000f,0.0000f,0.5976f,-1.0000f,0.0000f,0.0000f,0.3917f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat24 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.3200f,0.6400f,0.8800f,1.0000f});
  }
}
protected class MFRotation25 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,0.0670f,0.9800f,-0.1280f,4.1500f,0.0670f,0.9800f,-0.1280f,4.1500f,0.0670f,0.9800f,-0.1280f,4.1500f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat26 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.4500f,0.6400f,0.7600f,0.8800f,1.0000f});
  }
}
protected class MFRotation27 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,0.9992f,0.0204f,0.0356f,7.2000f,0.9989f,-0.0462f,0.0052f,4.0790f,-0.8687f,-0.2525f,-0.4261f,1.5010f,-0.9410f,-0.2893f,-0.1754f,0.4788f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat28 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.6400f,0.7600f,1.0000f});
  }
}
protected class MFRotation29 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,-1.0000f,0.0000f,0.0000f,0.0415f,-1.0000f,0.0000f,0.0000f,0.0415f,-1.0000f,0.0000f,0.0000f,0.5855f,-1.0000f,0.0000f,0.0000f,0.5852f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat30 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.6400f,0.7600f,1.0000f});
  }
}
protected class MFRotation31 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,-0.0585f,0.9839f,-0.1688f,1.8596f,-0.0585f,0.9839f,-0.1688f,1.8596f,-0.0022f,0.9980f,-0.0630f,1.4607f,0.0000f,1.0000f,0.0000f,0.4973f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFString32 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_blank"});
  }
}
protected class MFString33 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"NancyDiving.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d","NancyDiving.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl"});
  }
}
protected class MFString34 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"LOA1_SwimmingFlutterKickAnimation.x3d","defines a prototype","for animating a humanoid.","","Click text to see example."});
  }
}
protected class MFString35 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
