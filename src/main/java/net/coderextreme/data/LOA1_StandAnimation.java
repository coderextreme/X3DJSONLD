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
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new LOA1_StandAnimation().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/LOA1_StandAnimation.new.java.x3d");
    model.toFileJSON("../data/LOA1_StandAnimation.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("LOA1_StandAnimation.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Humanoid animation prototype reusable by any Humanoid.")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman")))
        .addMeta(new meta().setName(new SFString("rights")).setContent(new SFString("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.")))
        .addMeta(new meta().setName(new SFString("translator")).setContent(new SFString("Ozan APAYDIN")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("1 December 2001")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("23 May 2020")))
        .addMeta(new meta().setName(new SFString("TODO")).setContent(new SFString("consider adding eyeball animation")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://www.HAnim.org")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://HAnim.org/Models")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://HAnim.org/Nodes")))
        .addMeta(new meta().setName(new SFString("subject")).setContent(new SFString("Nancy Stand Animation HAnim 2001")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StandAnimation.x3d")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../license.html"))))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle(new SFString("LOA1_StandAnimation.x3d")))
        .addChild(new ProtoDeclare().setName(new SFString("LOA1_StandAnimation"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFTime").setName(new SFString("cycleInterval")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.009999999776482582")))
            .addField(new field().setType("SFBool").setName(new SFString("enabled")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("true")))
            .addField(new field().setType("SFBool").setName(new SFString("loop")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("true")))
            .addField(new field().setType("SFTime").setName(new SFString("startTime")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0")))
            .addField(new field().setType("SFTime").setName(new SFString("stopTime")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("-1")))
            .addField(new field().setType("SFFloat").setName(new SFString("fraction_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFBool").setName(new SFString("isActive")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFVec3f").setName(new SFString("HumanoidRoot_translation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName(new SFString("HumanoidRoot_rotation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName(new SFString("lower_body_rotation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName(new SFString("l_hip_rotation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName(new SFString("l_knee_rotation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName(new SFString("l_ankle_rotation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName(new SFString("l_midtarsal_rotation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName(new SFString("r_hip_rotation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName(new SFString("r_knee_rotation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName(new SFString("r_ankle_rotation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName(new SFString("r_midtarsal_rotation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName(new SFString("vl5_rotation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName(new SFString("skullbase_rotation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName(new SFString("l_shoulder_rotation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName(new SFString("l_elbow_rotation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName(new SFString("l_wrist_rotation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName(new SFString("r_shoulder_rotation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName(new SFString("r_elbow_rotation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName(new SFString("r_wrist_rotation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new TimeSensor().setDEF(new SFString("TIMER"))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("cycleInterval")).setProtoField(new SFString("cycleInterval")))
                  .addConnect(new connect().setNodeField(new SFString("enabled")).setProtoField(new SFString("enabled")))
                  .addConnect(new connect().setNodeField(new SFString("loop")).setProtoField(new SFString("loop")))
                  .addConnect(new connect().setNodeField(new SFString("startTime")).setProtoField(new SFString("startTime")))
                  .addConnect(new connect().setNodeField(new SFString("stopTime")).setProtoField(new SFString("stopTime")))
                  .addConnect(new connect().setNodeField(new SFString("fraction_changed")).setProtoField(new SFString("fraction_changed")))
                  .addConnect(new connect().setNodeField(new SFString("isActive")).setProtoField(new SFString("isActive")))))
              .addChild(new PositionInterpolator().setDEF(new SFString("HUMANOIDROOT_POSITION_ANIMATOR")).setKey(new MFFloat0().getArray()).setKeyValue(new MFVec3f1().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("value_changed")).setProtoField(new SFString("HumanoidRoot_translation_changed")))))
              .addChild(new OrientationInterpolator().setDEF(new SFString("HUMANOIDROOT_ANIMATOR")).setKey(new MFFloat2().getArray()).setKeyValue(new MFRotation3().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("value_changed")).setProtoField(new SFString("HumanoidRoot_rotation_changed")))))
              .addChild(new OrientationInterpolator().setDEF(new SFString("SACROILIAC_ANIMATOR")).setKey(new MFFloat4().getArray()).setKeyValue(new MFRotation5().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("value_changed")).setProtoField(new SFString("lower_body_rotation_changed")))))
              .addChild(new OrientationInterpolator().setDEF(new SFString("L_HIP_ANIMATOR")).setKey(new MFFloat6().getArray()).setKeyValue(new MFRotation7().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("value_changed")).setProtoField(new SFString("l_hip_rotation_changed")))))
              .addChild(new OrientationInterpolator().setDEF(new SFString("L_KNEE_ANIMATOR")).setKey(new MFFloat8().getArray()).setKeyValue(new MFRotation9().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("value_changed")).setProtoField(new SFString("l_knee_rotation_changed")))))
              .addChild(new OrientationInterpolator().setDEF(new SFString("L_ANKLE_ANIMATOR")).setKey(new MFFloat10().getArray()).setKeyValue(new MFRotation11().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("value_changed")).setProtoField(new SFString("l_ankle_rotation_changed")))))
              .addChild(new OrientationInterpolator().setDEF(new SFString("L_MIDTARSAL_ANIMATOR")).setKey(new MFFloat12().getArray()).setKeyValue(new MFRotation13().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("value_changed")).setProtoField(new SFString("l_midtarsal_rotation_changed")))))
              .addChild(new OrientationInterpolator().setDEF(new SFString("R_HIP_ANIMATOR")).setKey(new MFFloat14().getArray()).setKeyValue(new MFRotation15().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("value_changed")).setProtoField(new SFString("r_hip_rotation_changed")))))
              .addChild(new OrientationInterpolator().setDEF(new SFString("R_KNEE_ANIMATOR")).setKey(new MFFloat16().getArray()).setKeyValue(new MFRotation17().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("value_changed")).setProtoField(new SFString("r_knee_rotation_changed")))))
              .addChild(new OrientationInterpolator().setDEF(new SFString("R_ANKLE_ANIMATOR")).setKey(new MFFloat18().getArray()).setKeyValue(new MFRotation19().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("value_changed")).setProtoField(new SFString("r_ankle_rotation_changed")))))
              .addChild(new OrientationInterpolator().setDEF(new SFString("R_MIDTARSAL_ANIMATOR")).setKey(new MFFloat20().getArray()).setKeyValue(new MFRotation21().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("value_changed")).setProtoField(new SFString("r_midtarsal_rotation_changed")))))
              .addChild(new OrientationInterpolator().setDEF(new SFString("VL5_ANIMATOR")).setKey(new MFFloat22().getArray()).setKeyValue(new MFRotation23().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("value_changed")).setProtoField(new SFString("vl5_rotation_changed")))))
              .addChild(new OrientationInterpolator().setDEF(new SFString("SKULLBASE_ANIMATOR")).setKey(new MFFloat24().getArray()).setKeyValue(new MFRotation25().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("value_changed")).setProtoField(new SFString("skullbase_rotation_changed")))))
              .addChild(new OrientationInterpolator().setDEF(new SFString("L_SHOULDER_ANIMATOR")).setKey(new MFFloat26().getArray()).setKeyValue(new MFRotation27().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("value_changed")).setProtoField(new SFString("l_shoulder_rotation_changed")))))
              .addChild(new OrientationInterpolator().setDEF(new SFString("L_ELBOW_ANIMATOR")).setKey(new MFFloat28().getArray()).setKeyValue(new MFRotation29().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("value_changed")).setProtoField(new SFString("l_elbow_rotation_changed")))))
              .addChild(new OrientationInterpolator().setDEF(new SFString("L_WRIST_ANIMATOR")).setKey(new MFFloat30().getArray()).setKeyValue(new MFRotation31().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("value_changed")).setProtoField(new SFString("l_wrist_rotation_changed")))))
              .addChild(new OrientationInterpolator().setDEF(new SFString("R_SHOULDER_ANIMATOR")).setKey(new MFFloat32().getArray()).setKeyValue(new MFRotation33().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("value_changed")).setProtoField(new SFString("r_shoulder_rotation_changed")))))
              .addChild(new OrientationInterpolator().setDEF(new SFString("R_ELBOW_ANIMATOR")).setKey(new MFFloat34().getArray()).setKeyValue(new MFRotation35().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("value_changed")).setProtoField(new SFString("r_elbow_rotation_changed")))))
              .addChild(new OrientationInterpolator().setDEF(new SFString("R_WRIST_ANIMATOR")).setKey(new MFFloat36().getArray()).setKeyValue(new MFRotation37().getArray())
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("value_changed")).setProtoField(new SFString("r_wrist_rotation_changed"))))))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("TIMER")).setToField(new SFString("set_fraction")).setToNode(new SFString("HUMANOIDROOT_POSITION_ANIMATOR")))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("TIMER")).setToField(new SFString("set_fraction")).setToNode(new SFString("HUMANOIDROOT_ANIMATOR")))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("TIMER")).setToField(new SFString("set_fraction")).setToNode(new SFString("SACROILIAC_ANIMATOR")))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("TIMER")).setToField(new SFString("set_fraction")).setToNode(new SFString("L_HIP_ANIMATOR")))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("TIMER")).setToField(new SFString("set_fraction")).setToNode(new SFString("L_KNEE_ANIMATOR")))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("TIMER")).setToField(new SFString("set_fraction")).setToNode(new SFString("L_ANKLE_ANIMATOR")))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("TIMER")).setToField(new SFString("set_fraction")).setToNode(new SFString("L_MIDTARSAL_ANIMATOR")))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("TIMER")).setToField(new SFString("set_fraction")).setToNode(new SFString("R_HIP_ANIMATOR")))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("TIMER")).setToField(new SFString("set_fraction")).setToNode(new SFString("R_KNEE_ANIMATOR")))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("TIMER")).setToField(new SFString("set_fraction")).setToNode(new SFString("R_ANKLE_ANIMATOR")))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("TIMER")).setToField(new SFString("set_fraction")).setToNode(new SFString("R_MIDTARSAL_ANIMATOR")))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("TIMER")).setToField(new SFString("set_fraction")).setToNode(new SFString("VL5_ANIMATOR")))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("TIMER")).setToField(new SFString("set_fraction")).setToNode(new SFString("SKULLBASE_ANIMATOR")))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("TIMER")).setToField(new SFString("set_fraction")).setToNode(new SFString("L_SHOULDER_ANIMATOR")))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("TIMER")).setToField(new SFString("set_fraction")).setToNode(new SFString("L_ELBOW_ANIMATOR")))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("TIMER")).setToField(new SFString("set_fraction")).setToNode(new SFString("L_WRIST_ANIMATOR")))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("TIMER")).setToField(new SFString("set_fraction")).setToNode(new SFString("R_SHOULDER_ANIMATOR")))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("TIMER")).setToField(new SFString("set_fraction")).setToNode(new SFString("R_ELBOW_ANIMATOR")))
            .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("TIMER")).setToField(new SFString("set_fraction")).setToNode(new SFString("R_WRIST_ANIMATOR")))))
        .addComments(new CommentsBlock("======================================"))
        .addComments(new CommentsBlock("Point to example use in case someone inspects this file"))
        .addChild(new Anchor().setDescription(new SFString("InterchangableActorsViaDynamicRouting")).setParameter(new MFString38().getArray()).setUrl(new MFString39().getArray())
          .addChild(new Shape()
            .setGeometry(new Text().setString(new MFString40().getArray())
              .setFontStyle(new FontStyle().setJustify(new MFString41().getArray()).setSize(0.8f )))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,0.2f }))))));
    return X3D0;
    }
private class MFFloat0 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFVec3f1 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat2 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation3 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat4 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation5 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat6 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation7 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat8 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation9 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat10 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation11 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat12 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation13 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat14 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation15 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat16 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation17 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat18 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation19 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat20 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation21 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat22 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation23 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat24 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation25 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat26 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation27 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat28 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation29 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat30 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation31 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat32 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation33 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat34 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation35 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat36 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation37 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
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
