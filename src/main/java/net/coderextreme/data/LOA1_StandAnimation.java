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
public class LOA1_StandAnimation implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(false);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new LOA1_StandAnimation().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/LOA1_StandAnimation.new.java.x3d");
    model.toFileJSON("../data/LOA1_StandAnimation.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
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
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("LOA1_StandAnimation.x3d"))
        .addChild(new ProtoDeclare().setName("LOA1_StandAnimation")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFTime").setName("cycleInterval").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.009999999776482582"))
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
        .addComments(new CommentsBlock("======================================"))
        .addComments(new CommentsBlock("Point to example use in case someone inspects this file"))
        .addChild(new Anchor().setDescription("InterchangableActorsViaDynamicRouting").setParameter(new MFString38().getArray()).setUrl(new MFString39().getArray())
          .addChild(new Shape()
            .setGeometry(new Text().setString(new MFString40().getArray())
              .setFontStyle(new FontStyle().setJustify(new MFString41().getArray()).setSize(0.8f)))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new double[] {1f,1f,0.2f}))))));
    return X3D0;
    }
private class MFFloat0 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f});
  }
}
private class MFVec3f1 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0f,0f,0f,0f,0f,0f});
  }
}
private class MFFloat2 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f});
  }
}
private class MFRotation3 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat4 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f});
  }
}
private class MFRotation5 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat6 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f});
  }
}
private class MFRotation7 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat8 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f});
  }
}
private class MFRotation9 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat10 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f});
  }
}
private class MFRotation11 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat12 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f});
  }
}
private class MFRotation13 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {1f,0f,0f,0f,1f,0f,0f,0f});
  }
}
private class MFFloat14 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f});
  }
}
private class MFRotation15 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat16 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f});
  }
}
private class MFRotation17 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat18 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f});
  }
}
private class MFRotation19 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat20 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f});
  }
}
private class MFRotation21 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {1f,0f,0f,0f,1f,0f,0f,0f});
  }
}
private class MFFloat22 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f});
  }
}
private class MFRotation23 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat24 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0.5f,1f});
  }
}
private class MFRotation25 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0f,0f,1f,0f,-1f,0f,0f,0.5f,0f,0f,1f,0f});
  }
}
private class MFFloat26 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f});
  }
}
private class MFRotation27 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat28 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f});
  }
}
private class MFRotation29 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat30 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f});
  }
}
private class MFRotation31 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat32 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f});
  }
}
private class MFRotation33 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat34 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f});
  }
}
private class MFRotation35 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat36 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f});
  }
}
private class MFRotation37 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFString38 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_blank"});
  }
}
private class MFString39 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"});
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
