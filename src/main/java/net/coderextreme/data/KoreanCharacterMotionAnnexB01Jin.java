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
public class KoreanCharacterMotionAnnexB01Jin {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new KoreanCharacterMotionAnnexB01Jin().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/KoreanCharacterMotionAnnexB01Jin.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("KoreanCharacterMotionAnnexB01Jin.x3d"))
        .addMeta(new meta().setName("creator").setContent("Jin Hoon Lee and Min Joo Lee"))
        .addMeta(new meta().setName("translator").setContent("Chul Hee Jung and Myeong Won Lee"))
        .addMeta(new meta().setName("created").setContent("31 March 2011"))
        .addMeta(new meta().setName("translated").setContent("1 November 2014"))
        .addMeta(new meta().setName("modified").setContent("8 January 2023"))
        .addMeta(new meta().setName("description").setContent("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model."))
        .addMeta(new meta().setName("reference").setContent("KoreanCharacter00ReadMe.txt"))
        .addMeta(new meta().setName("reference").setContent("KoreanCharacterHumanMotion_Infotech2014_140706.pdf"))
        .addMeta(new meta().setName("reference").setContent("KoreanCharactersIllustrated.pdf"))
        .addMeta(new meta().setName("specificationSection").setContent("HAnim 2.0 Part 2: Humanoid animation (HAnim) motion data animation, Annex D (informative) Examples of HAnim motion data animation using a Motion object"))
        .addMeta(new meta().setName("specificationUrl").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/MotionDataAnimation/ExampleKeyframeAnimation.html"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/KoreanCharacterAnnexB01Jin.x3d"))
        .addMeta(new meta().setName("generator").setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"))
        .addMeta(new meta().setName("generator").setContent("Suwon HAnim Converter"))
        .addMeta(new meta().setName("generator").setContent("Gnu Image Manipulation Program, http://www.gimp.org"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new NavigationInfo().setSpeed(1.5f))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,1f,0f}).setDescription("AnnexB01Jin").setPosition(new float[] {0f,1f,3f}))
        .addChild(new Group().setDEF("KeyframeAnimation")
          .addChild(new TimeSensor().setDEF("KeyframeTimer").setCycleInterval(8.033494d).setLoop(true))
          .addChild(new PositionInterpolator().setDEF("Keyframe_HumanoidRoot").setKey(new MFFloat0().getArray()).setKeyValue(new MFVec3f1().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Keyframe_HumanoidRoot").setKey(new MFFloat2().getArray()).setKeyValue(new MFRotation3().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Keyframe_sacroiliac").setKey(new MFFloat4().getArray()).setKeyValue(new MFRotation5().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Keyframe_l_shoulder").setKey(new MFFloat6().getArray()).setKeyValue(new MFRotation7().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Keyframe_l_elbow").setKey(new MFFloat8().getArray()).setKeyValue(new MFRotation9().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Keyframe_l_radiocarpal").setKey(new MFFloat10().getArray()).setKeyValue(new MFRotation11().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Keyframe_r_shoulder").setKey(new MFFloat12().getArray()).setKeyValue(new MFRotation13().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Keyframe_r_elbow").setKey(new MFFloat14().getArray()).setKeyValue(new MFRotation15().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Keyframe_r_radiocarpal").setKey(new MFFloat16().getArray()).setKeyValue(new MFRotation17().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Keyframe_vl5").setKey(new MFFloat18().getArray()).setKeyValue(new MFRotation19().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Keyframe_skullbase").setKey(new MFFloat20().getArray()).setKeyValue(new MFRotation21().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Keyframe_l_hip").setKey(new MFFloat22().getArray()).setKeyValue(new MFRotation23().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Keyframe_l_knee").setKey(new MFFloat24().getArray()).setKeyValue(new MFRotation25().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Keyframe_l_talocrural").setKey(new MFFloat26().getArray()).setKeyValue(new MFRotation27().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Keyframe_l_metatarsophalangeal").setKey(new MFFloat28().getArray()).setKeyValue(new MFRotation29().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Keyframe_r_hip").setKey(new MFFloat30().getArray()).setKeyValue(new MFRotation31().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Keyframe_r_knee").setKey(new MFFloat32().getArray()).setKeyValue(new MFRotation33().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Keyframe_r_talocrural").setKey(new MFFloat34().getArray()).setKeyValue(new MFRotation35().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Keyframe_r_metatarsophalangeal").setKey(new MFFloat36().getArray()).setKeyValue(new MFRotation37().getArray()))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KeyframeTimer").setToField("set_fraction").setToNode("Keyframe_HumanoidRoot"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KeyframeTimer").setToField("set_fraction").setToNode("Keyframe_HumanoidRoot"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KeyframeTimer").setToField("set_fraction").setToNode("Keyframe_sacroiliac"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KeyframeTimer").setToField("set_fraction").setToNode("Keyframe_l_shoulder"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KeyframeTimer").setToField("set_fraction").setToNode("Keyframe_l_elbow"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KeyframeTimer").setToField("set_fraction").setToNode("Keyframe_l_radiocarpal"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KeyframeTimer").setToField("set_fraction").setToNode("Keyframe_r_shoulder"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KeyframeTimer").setToField("set_fraction").setToNode("Keyframe_r_elbow"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KeyframeTimer").setToField("set_fraction").setToNode("Keyframe_r_radiocarpal"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KeyframeTimer").setToField("set_fraction").setToNode("Keyframe_vl5"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KeyframeTimer").setToField("set_fraction").setToNode("Keyframe_skullbase"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KeyframeTimer").setToField("set_fraction").setToNode("Keyframe_l_hip"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KeyframeTimer").setToField("set_fraction").setToNode("Keyframe_l_knee"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KeyframeTimer").setToField("set_fraction").setToNode("Keyframe_l_talocrural"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KeyframeTimer").setToField("set_fraction").setToNode("Keyframe_l_metatarsophalangeal"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KeyframeTimer").setToField("set_fraction").setToNode("Keyframe_r_hip"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KeyframeTimer").setToField("set_fraction").setToNode("Keyframe_r_knee"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KeyframeTimer").setToField("set_fraction").setToNode("Keyframe_r_talocrural"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KeyframeTimer").setToField("set_fraction").setToNode("Keyframe_r_metatarsophalangeal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Keyframe_HumanoidRoot").setToField("translation").setToNode("hanim_HumanoidRoot"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Keyframe_HumanoidRoot").setToField("rotation").setToNode("hanim_HumanoidRoot"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Keyframe_sacroiliac").setToField("rotation").setToNode("hanim_sacroiliac"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Keyframe_l_shoulder").setToField("rotation").setToNode("hanim_l_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Keyframe_l_elbow").setToField("rotation").setToNode("hanim_l_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Keyframe_l_radiocarpal").setToField("rotation").setToNode("hanim_l_radiocarpal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Keyframe_r_shoulder").setToField("rotation").setToNode("hanim_r_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Keyframe_r_elbow").setToField("rotation").setToNode("hanim_r_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Keyframe_r_radiocarpal").setToField("rotation").setToNode("hanim_r_radiocarpal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Keyframe_vl5").setToField("rotation").setToNode("hanim_vl5"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Keyframe_skullbase").setToField("rotation").setToNode("hanim_skullbase"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Keyframe_l_hip").setToField("rotation").setToNode("hanim_l_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Keyframe_l_knee").setToField("rotation").setToNode("hanim_l_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Keyframe_l_talocrural").setToField("rotation").setToNode("hanim_l_talocrural"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Keyframe_l_talocrural").setToField("rotation").setToNode("hanim_l_metatarsophalangeal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Keyframe_r_hip").setToField("rotation").setToNode("hanim_r_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Keyframe_r_knee").setToField("rotation").setToNode("hanim_r_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Keyframe_l_talocrural").setToField("rotation").setToNode("hanim_r_talocrural"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Keyframe_l_talocrural").setToField("rotation").setToNode("hanim_r_metatarsophalangeal"))))      ;
    return X3D0;
    }
protected class MFFloat0 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFVec3f1 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat2 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation3 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat4 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation5 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat6 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation7 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,0f,0f,-1f,0f,0f,3f,0f,0f,0f,0f});
  }
}
protected class MFFloat8 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation9 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat10 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation11 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat12 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation13 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,0f,0f,-1f,0f,0f,3f,0f,0f,0f,0f});
  }
}
protected class MFFloat14 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation15 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat16 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation17 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat18 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation19 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat20 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation21 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat22 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation23 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat24 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation25 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat26 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation27 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat28 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation29 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat30 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation31 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat32 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation33 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat34 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation35 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat36 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation37 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
}
