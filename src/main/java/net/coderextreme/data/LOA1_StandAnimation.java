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
public class LOA1_StandAnimation {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new LOA1_StandAnimation().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/LOA1_StandAnimation.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("LOA1_StandAnimation.x3d"))
        .addMeta(new meta().setName("description").setContent("Humanoid animation prototype reusable by any Humanoid."))
        .addMeta(new meta().setName("creator").setContent("Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman"))
        .addMeta(new meta().setName("rights").setContent("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."))
        .addMeta(new meta().setName("translator").setContent("Ozan APAYDIN"))
        .addMeta(new meta().setName("created").setContent("1 December 2001"))
        .addMeta(new meta().setName("modified").setContent("23 May 2020"))
        .addMeta(new meta().setName("TODO").setContent("consider adding eyeball animation"))
        .addMeta(new meta().setName("reference").setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"))
        .addMeta(new meta().setName("reference").setContent("http://www.HAnim.org"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Models"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Nodes"))
        .addMeta(new meta().setName("subject").setContent("Nancy Stand Animation HAnim 2001"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StandAnimation.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("LOA1_StandAnimation")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFTime").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("cycleInterval").setValue("0.00999999977648258"))
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("enabled").setValue("true"))
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("loop").setValue("true"))
            .addField(new field().setType("SFTime").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("startTime"))
            .addField(new field().setType("SFTime").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("stopTime").setValue("-1"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("fraction_changed"))
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("isActive"))
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("HumanoidRoot_translation_changed"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("HumanoidRoot_rotation_changed"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("lower_body_rotation_changed"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("l_hip_rotation_changed"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("l_knee_rotation_changed"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("l_ankle_rotation_changed"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("l_midtarsal_rotation_changed"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("r_hip_rotation_changed"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("r_knee_rotation_changed"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("r_ankle_rotation_changed"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("r_midtarsal_rotation_changed"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("vl5_rotation_changed"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("skullbase_rotation_changed"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("l_shoulder_rotation_changed"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("l_elbow_rotation_changed"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("l_wrist_rotation_changed"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("r_shoulder_rotation_changed"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("r_elbow_rotation_changed"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("r_wrist_rotation_changed")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new TimeSensor().setDEF("TIMER")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
                  .addConnect(new connect().setNodeField("cycleInterval").setProtoField("cycleInterval"))
                  .addConnect(new connect().setNodeField("loop").setProtoField("loop"))
                  .addConnect(new connect().setNodeField("startTime").setProtoField("startTime"))
                  .addConnect(new connect().setNodeField("stopTime").setProtoField("stopTime"))
                  .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))
                  .addConnect(new connect().setNodeField("fraction_changed").setProtoField("fraction_changed"))))
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
            .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("HUMANOIDROOT_POSITION_ANIMATOR").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("HUMANOIDROOT_ANIMATOR").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("SACROILIAC_ANIMATOR").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_HIP_ANIMATOR").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_KNEE_ANIMATOR").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_ANKLE_ANIMATOR").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_MIDTARSAL_ANIMATOR").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_HIP_ANIMATOR").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_KNEE_ANIMATOR").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_ANKLE_ANIMATOR").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_MIDTARSAL_ANIMATOR").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("VL5_ANIMATOR").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("SKULLBASE_ANIMATOR").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_SHOULDER_ANIMATOR").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_ELBOW_ANIMATOR").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_WRIST_ANIMATOR").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_SHOULDER_ANIMATOR").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_ELBOW_ANIMATOR").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_WRIST_ANIMATOR").setToField("set_fraction"))))
        .addChild(new WorldInfo().setTitle("LOA1_StandAnimation.x3d"))
        .addChild(new Anchor().setDescription("InterchangableActorsViaDynamicRouting").setUrl(new MFString38().getArray()).setParameter(new MFString39().getArray())
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0.2f})))
            .setGeometry(new Text().setString(new MFString40().getArray())
              .setFontStyle(new FontStyle().setSize(0.8f).setJustify(new MFString41().getArray()))))))      ;
    return X3D0;
    }
private class MFFloat0 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFVec3f1 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0f,0f});
  }
}
private class MFFloat2 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFRotation3 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat4 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFRotation5 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat6 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFRotation7 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat8 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFRotation9 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat10 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFRotation11 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat12 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFRotation13 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0f});
  }
}
private class MFFloat14 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFRotation15 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat16 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFRotation17 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat18 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFRotation19 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat20 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFRotation21 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0f});
  }
}
private class MFFloat22 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFRotation23 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat24 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation25 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.5f,0f,0f,1f,0f});
  }
}
private class MFFloat26 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFRotation27 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat28 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFRotation29 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat30 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFRotation31 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat32 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFRotation33 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat34 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFRotation35 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat36 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFRotation37 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFString38 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"});
  }
}
private class MFString39 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_blank"});
  }
}
private class MFString40 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"LOA1_StandAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."});
  }
}
private class MFString41 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
