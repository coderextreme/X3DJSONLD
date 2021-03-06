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
public class LOA1_WalkAnimation {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new LOA1_WalkAnimation().initialize().toFileJSON("../data/LOA1_WalkAnimation.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("LOA1_WalkAnimation.x3d"))
        .addMeta(new meta().setName("description").setContent("Humanoid animation prototype reusable by any Humanoid."))
        .addMeta(new meta().setName("creator").setContent("Cindy Ballreich cindy@ballreich.net 3Name3D"))
        .addMeta(new meta().setName("rights").setContent("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."))
        .addMeta(new meta().setName("translator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("translated").setContent("1 October 2001"))
        .addMeta(new meta().setName("modified").setContent("23 May 2020"))
        .addMeta(new meta().setName("reference").setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Specifications/HAnim2001"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Models"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Nodes"))
        .addMeta(new meta().setName("subject").setContent("Nancy Walk Animation HAnim 2001"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("LOA1_WalkAnimation.x3d"))
        .addChild(new ProtoDeclare().setName("LOA1_WalkAnimation")
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
              .addChild(new TimeSensor().setDEF("TIMER")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("cycleInterval").setProtoField("cycleInterval"))
                  .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
                  .addConnect(new connect().setNodeField("loop").setProtoField("loop"))
                  .addConnect(new connect().setNodeField("startTime").setProtoField("startTime"))
                  .addConnect(new connect().setNodeField("stopTime").setProtoField("stopTime"))
                  .addConnect(new connect().setNodeField("fraction_changed").setProtoField("fraction_changed"))
                  .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))))
              .addChild(new PositionInterpolator().setDEF("HUMANOIDROOT_POSITION_ANIMATOR").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat0().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f1().getArray()))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("HumanoidRoot_translation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("HUMANOIDROOT_ANIMATOR").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat2().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation3().getArray()))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("HumanoidRoot_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("SACROILIAC_ANIMATOR").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat4().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation5().getArray()))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("lower_body_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("L_HIP_ANIMATOR").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat6().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation7().getArray()))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_hip_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("L_KNEE_ANIMATOR").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat8().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation9().getArray()))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_knee_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("L_ANKLE_ANIMATOR").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat10().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation11().getArray()))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_ankle_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("L_MIDTARSAL_ANIMATOR").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat12().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation13().getArray()))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_midtarsal_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("R_HIP_ANIMATOR").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat14().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation15().getArray()))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("r_hip_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("R_KNEE_ANIMATOR").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat16().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation17().getArray()))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("r_knee_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("R_ANKLE_ANIMATOR").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat18().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation19().getArray()))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("r_ankle_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("R_MIDTARSAL_ANIMATOR").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat20().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation21().getArray()))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("r_midtarsal_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("VL5_ANIMATOR").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat22().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation23().getArray()))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("vl5_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("SKULLBASE_ANIMATOR").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat24().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation25().getArray()))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("skullbase_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("L_SHOULDER_ANIMATOR").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat26().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation27().getArray()))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_shoulder_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("L_ELBOW_ANIMATOR").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat28().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation29().getArray()))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_elbow_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("L_WRIST_ANIMATOR").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat30().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation31().getArray()))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("l_wrist_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("R_SHOULDER_ANIMATOR").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat32().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation33().getArray()))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("r_shoulder_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("R_ELBOW_ANIMATOR").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat34().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation35().getArray()))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("value_changed").setProtoField("r_elbow_rotation_changed"))))
              .addChild(new OrientationInterpolator().setDEF("R_WRIST_ANIMATOR").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat36().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation37().getArray()))
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
        .addComments(new CommentsBlock("======================================"))
        .addComments(new CommentsBlock("Point to example use in case someone inspects this file"))
        .addChild(new Anchor().setDescription("InterchangableActorsViaDynamicRouting").setParameter(new org.web3d.x3d.jsail.fields.MFString(new MFString38().getArray())).setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString39().getArray()))
          .addChild(new Shape()
            .setGeometry(new Text().setString(new org.web3d.x3d.jsail.fields.MFString(new MFString40().getArray()))
              .setFontStyle(new FontStyle().setJustify(new org.web3d.x3d.jsail.fields.MFString(new MFString41().getArray())).setSize(0.8f)))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0.2f}))))))      ;
    return X3D0;
    }
protected class MFFloat0 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.04167f,0.125f,0.1667f,0.2083f,0.25f,0.2917f,0.375f,0.4583f,0.5f,0.5417f,0.5833f,0.625f,0.7083f,0.75f,0.7917f,0.875f,0.9167f,1f});
  }
}
protected class MFVec3f1 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.00928f,0f,0f,-0.003858f,0f,0f,-0.008847f,0f,0f,-0.01486f,0f,0f,-0.02641f,0f,0f,-0.03934f,0f,0f,-0.0502f,0f,0f,-0.07469f,0f,0f,-0.02732f,0f,0f,-0.01608f,0f,0f,-0.01129f,0f,0f,-0.005819f,0f,0f,-0.002004f,0f,0f,-0.002579f,0f,0f,-0.0143f,0f,0f,-0.03799f,0f,0f,-0.05648f,0f,0f,-0.045f,0f,0f,-0.00928f,0f});
  }
}
protected class MFFloat2 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation3 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,1f,0f,0f});
  }
}
protected class MFFloat4 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation5 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,-1f,0.1056f,0f,0f,1f,0.09018f,0f,0f,-1f,0.1056f});
  }
}
protected class MFFloat6 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation7 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.873f,0.06094f,0.484f,0.2865f,0.9963f,-0.01057f,0.08481f,0.2488f,0.9965f,0.01591f,-0.08222f,0.3836f,-0.7018f,-0.03223f,-0.7117f,0.1289f,-1f,0f,0f,0.5518f,-0.9964f,0.02231f,0.0817f,0.5351f,-0.9809f,0.04912f,0.1881f,0.5204f,-0.873f,0.06094f,0.484f,0.2865f});
  }
}
protected class MFFloat8 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2083f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation9 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.3226f,1f,0f,0f,0.1556f,1f,0f,0f,0.08678f,1f,0f,0f,0.8751f,1f,0f,0f,1.131f,1f,0f,0f,0.09961f,1f,0f,0f,0.3942f,1f,0f,0f,0.3226f});
  }
}
protected class MFFloat10 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.2083f,0.375f,0.6667f,0.9167f,1f});
  }
}
protected class MFRotation11 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.06714f,-1f,0f,0f,0.2152f,-1f,0f,0f,0.3184f,-1f,0f,0f,0.4717f,-1f,0f,0f,0.2912f,1f,0f,0f,0.1222f,-1f,0f,0f,0.06714f});
  }
}
protected class MFFloat12 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation13 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,-0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat14 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.2083f,0.2917f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation15 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.5831f,0.03511f,0.8116f,0.1481f,-0.995f,0.02296f,0.09674f,0.4683f,-1f,0.00192f,0.007964f,0.4732f,-0.998f,-0.0158f,-0.06102f,0.5079f,-0.9911f,-0.03541f,-0.1286f,0.5419f,-0.9131f,-0.06243f,-0.403f,0.3361f,-0.4306f,-0.07962f,-0.899f,0.07038f,1f,0f,0f,0.2571f,0.9891f,-0.02805f,0.1444f,0.3879f,-0.5831f,0.03511f,0.8116f,0.1481f});
  }
}
protected class MFFloat16 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.2083f,0.2917f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation17 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.8573f,1f,0f,0f,0.8926f,1f,0f,0f,0.5351f,1f,0f,0f,0.1756f,1f,0f,0f,0.1194f,1f,0f,0f,0.3153f,1f,-1.176e-8f,-4.971e-9f,0.09354f,1f,0f,0f,0.08558f,1f,0f,0f,0.2475f,1f,0f,0f,0.8573f});
  }
}
protected class MFFloat18 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.2083f,0.375f,0.4583f,0.5f,0.6667f,0.75f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation19 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.3533f,-1f,0f,0f,0.1072f,1f,0f,0f,0.2612f,1f,-1.641e-7f,1.827e-8f,0.1268f,-1f,0f,0f,0.01793f,-1f,0f,0f,0.05824f,-1f,0f,0f,0.2398f,-1f,0f,0f,0.35f,-1f,0f,0f,0.3322f,0f,0f,1f,0f});
  }
}
protected class MFFloat20 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation21 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,-0.2f,1f,0f,0f,0f,1f,0f,0f,-0.2f});
  }
}
protected class MFFloat22 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2083f,0.375f,0.75f,0.8333f,1f});
  }
}
protected class MFRotation23 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0.0826f,-0.01972f,-0.5974f,0.8017f,0.08231f,0.009296f,-0.9648f,0.2627f,0.1734f,-0.01238f,0.9549f,-0.2968f,0.08732f,-0.008125f,0.9691f,-0.2463f,0.158f,0f,1f,0f,0.0826f});
  }
}
protected class MFFloat24 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.4167f,0.5f,0.5833f,0.6667f,0.75f,0.8333f,0.9167f,1f});
  }
}
protected class MFRotation25 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,-1f,0f,0.08642f,0f,1f,0f,0.1825f,0f,1f,0f,0.1505f,0f,1f,0f,0.1053f,0f,1f,0f,0.04391f,0f,-1f,0f,0.03119f,0f,-1f,0f,0.07936f,0f,-1f,0f,0.1616f,0f,-1f,0f,0.155f,0f,-1f,0f,0.08642f});
  }
}
protected class MFFloat26 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation27 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.1189f,-1f,-5.928e-7f,1.525e-7f,0.1861f,1f,-2.038e-7f,-1.257e-7f,0.3357f,1f,0f,0f,0.1189f});
  }
}
protected class MFFloat28 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation29 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,-1.58298e-7f,8.15967e-8f,0.0659878f,-1f,-3.28826e-8f,-2.31665e-8f,0.488383f,-1f,0.00000306462f,-0.00000311947f,0.0177536f,-1f,-1.58298e-7f,8.15967e-8f,0.0659878f});
  }
}
protected class MFFloat30 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation31 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.00000151276f,-1f,0.0000017724f,0.461076f,-0.330195f,-0.927451f,0.175516f,0.538852f,0.0327774f,-0.999314f,-0.0172185f,0.492033f,0.00000151276f,-1f,0.0000017724f,0.461076f});
  }
}
protected class MFFloat32 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation33 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,-7.689e-7f,-1.48e-7f,0.09346f,1f,5.004e-8f,2.254e-8f,0.3197f,-1f,-1.104e-7f,5.267e-10f,0.1564f,-1f,-7.689e-7f,-1.48e-7f,0.09346f});
  }
}
protected class MFFloat34 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation35 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,-4.45619e-8f,2.70318e-8f,0.411508f,-1f,8.16742e-7f,-1.09556e-7f,0.0925011f,-1f,-2.47628e-8f,-7.02862e-9f,0.572568f,-1f,-4.45619e-8f,2.70318e-8f,0.411508f});
  }
}
protected class MFFloat36 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation37 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.8129f,0.4759f,-0.3357f,0.1346f,0.1533f,-0.9878f,0.02582f,0.3902f,-0.5701f,0.7604f,-0.311f,0.366f,-0.8129f,0.4759f,-0.3357f,0.1346f});
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"LOA1_WalkAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."});
  }
}
protected class MFString41 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
