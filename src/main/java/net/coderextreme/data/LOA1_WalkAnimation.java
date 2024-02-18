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
public class LOA1_WalkAnimation implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new LOA1_WalkAnimation().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/LOA1_WalkAnimation.new.java.x3d");
    model.toFileJSON("../data/LOA1_WalkAnimation.new.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
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
        .addComments("======================================")
        .addComments("Point to example use in case someone inspects this file")
        .addChild(new Anchor().setDescription("InterchangableActorsViaDynamicRouting").setParameter(new MFString38().getArray()).setUrl(new MFString39().getArray())
          .addChild(new Shape()
            .setGeometry(new Text().setString(new MFString40().getArray())
              .setFontStyle(new FontStyle().setJustify(new MFString41().getArray()).setSize(0.8)))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new double[] {1,1,0.2}))))))      ;
    return X3D0;
    }
private class MFFloat0 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1});
  }
}
private class MFVec3f1 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0});
  }
}
private class MFFloat2 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation3 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,1,0,0,0,1,0,0});
  }
}
private class MFFloat4 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation5 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056});
  }
}
private class MFFloat6 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1});
  }
}
private class MFRotation7 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865});
  }
}
private class MFFloat8 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1});
  }
}
private class MFRotation9 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226});
  }
}
private class MFFloat10 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.125,0.2083,0.375,0.6667,0.9167,1});
  }
}
private class MFRotation11 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714});
  }
}
private class MFFloat12 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation13 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {1,0,0,0,1,0,0,-0.2,1,0,0,0});
  }
}
private class MFFloat14 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1});
  }
}
private class MFRotation15 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481});
  }
}
private class MFFloat16 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1});
  }
}
private class MFRotation17 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,-1.176e-8,-4.971e-9,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573});
  }
}
private class MFFloat18 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1});
  }
}
private class MFRotation19 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,-1.641e-7,1.827e-8,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0});
  }
}
private class MFFloat20 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation21 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {1,0,0,-0.2,1,0,0,0,1,0,0,-0.2});
  }
}
private class MFFloat22 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.2083,0.375,0.75,0.8333,1});
  }
}
private class MFRotation23 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826});
  }
}
private class MFFloat24 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1});
  }
}
private class MFRotation25 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642});
  }
}
private class MFFloat26 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.375,0.9167,1});
  }
}
private class MFRotation27 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {1,0,0,0.1189,-1,-5.928e-7,1.525e-7,0.1861,1,-2.038e-7,-1.257e-7,0.3357,1,0,0,0.1189});
  }
}
private class MFFloat28 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.375,0.9167,1});
  }
}
private class MFRotation29 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {-1,-1.58298e-7,8.15967e-8,0.0659878,-1,-3.28826e-8,-2.31665e-8,0.488383,-1,0.00000306462,-0.00000311947,0.0177536,-1,-1.58298e-7,8.15967e-8,0.0659878});
  }
}
private class MFFloat30 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.375,0.9167,1});
  }
}
private class MFRotation31 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0.00000151276,-1,0.0000017724,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0.00000151276,-1,0.0000017724,0.461076});
  }
}
private class MFFloat32 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.375,0.9167,1});
  }
}
private class MFRotation33 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {-1,-7.689e-7,-1.48e-7,0.09346,1,5.004e-8,2.254e-8,0.3197,-1,-1.104e-7,5.267e-10,0.1564,-1,-7.689e-7,-1.48e-7,0.09346});
  }
}
private class MFFloat34 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.375,0.9167,1});
  }
}
private class MFRotation35 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {-1,-4.45619e-8,2.70318e-8,0.411508,-1,8.16742e-7,-1.09556e-7,0.0925011,-1,-2.47628e-8,-7.02862e-9,0.572568,-1,-4.45619e-8,2.70318e-8,0.411508});
  }
}
private class MFFloat36 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.375,0.9167,1});
  }
}
private class MFRotation37 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346});
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"LOA1_WalkAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."});
  }
}
private class MFString41 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
