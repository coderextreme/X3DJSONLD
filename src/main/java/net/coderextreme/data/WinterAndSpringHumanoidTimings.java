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
public class WinterAndSpringHumanoidTimings implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new WinterAndSpringHumanoidTimings().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/WinterAndSpringHumanoidTimings.new.java.x3d");
    model.toFileJSON("../data/WinterAndSpringHumanoidTimings.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("WinterAndSpringHumanoidTimings.x3d"))
        .addMeta(new meta().setName("description").setContent("Example animation timings, manually translated from tool outputs and export."))
        .addMeta(new meta().setName("reference").setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/WinterAndSpringHumanoidTimings.x3dv"))
        .addMeta(new meta().setName("info").setContent("reference .x3dv model successfully translated by Castle Game Engine, IICM, and Xj3D import (with loss of comments)"))
        .addMeta(new meta().setName("creator").setContent("Katy Schildmeyer"))
        .addMeta(new meta().setName("creator").setContent("Carol McDonald"))
        .addMeta(new meta().setName("translator").setContent("Joe Williams"))
        .addMeta(new meta().setName("translator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("2 July 2023"))
        .addMeta(new meta().setName("translated").setContent("9 July 2023"))
        .addMeta(new meta().setName("modified").setContent("Mon, 15 Sep 2025 05:21:02 GMT"))
        .addMeta(new meta().setName("hint").setContent("MetadataString approach for name=poses sequence, matching the key/keyValue pairs, is experimental but seems unambiguous."))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringHumanoidTimings.x3d"))
        .addMeta(new meta().setName("generator").setContent("Cinema 4D https://www.maxon.net/en/cinema-4d")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("WinterAndSpringHumanoidTimings.x3d"))
        .addChild(new Viewpoint().setDEF("EntryView1").setDescription("Hello characters 1").setPosition(new float[] {0f ,2f ,40f }))
        .addChild(new Viewpoint().setDEF("EntryView2").setDescription("Hello characters 2").setPosition(new float[] {-15f ,10f ,30f }).setOrientation(new float[] {0f ,1f ,0f ,-0.643501f }).setCenterOfRotation(new float[] {0f ,10f ,10f }))
        .addChild(new Transform().setDEF("TextRoot").setTranslation(new float[] {9.8557f ,0.95f ,3.5f })
          .addChild(new Shape().setDEF("ModelDescriptionText")
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0.960784f ,0.894118f ,0f })))
            .setGeometry(new Text().setString(new MFString0().getArray())
              .setFontStyle(new FontStyle().setFamily(new MFString1().getArray()).setStyle("BOLD").setSize(0.8f ).setJustify(new MFString2().getArray())))))
        .addChild(new Transform().setDEF("Root4").setTranslation(new float[] {11.3657f ,0.475f ,3.377131f }))
        .addChild(new Transform().setDEF("Root5").setTranslation(new float[] {10.55646f ,0.475f ,3.391616f }))
        .addChild(new Transform().setDEF("Root6").setTranslation(new float[] {9.167682f ,0.475f ,3.332752f }))
        .addChild(new PositionInterpolator().setDEF("Gramps_HumanoidRoot_TranslationInterpolator").setKey(new MFFloat3().getArray()).setKeyValue(new MFVec3f4().getArray())
          .setMetadata(new MetadataString().setName("poses").setValue(new MFString5().getArray())))
        .addChild(new PositionInterpolator().setDEF("Leif_HumanoidRoot_TranslationInterpolator").setKey(new MFFloat6().getArray()).setKeyValue(new MFVec3f7().getArray())
          .setMetadata(new MetadataString().setName("poses").setValue(new MFString8().getArray())))
        .addChild(new PositionInterpolator().setDEF("Lily_HumanoidRoot_TranslationInterpolator").setKey(new MFFloat9().getArray()).setKeyValue(new MFVec3f10().getArray())
          .setMetadata(new MetadataString().setName("poses").setValue(new MFString11().getArray())))
        .addChild(new PositionInterpolator().setDEF("Tufani_HumanoidRoot_TranslationInterpolator").setKey(new MFFloat12().getArray()).setKeyValue(new MFVec3f13().getArray())
          .setMetadata(new MetadataString().setName("poses").setValue(new MFString14().getArray())))
        .addChild(new Background().setDEF("Background3Black"))
        .addChild(new Background().setDEF("Background4SkyBlueGreenGrass").setSkyColor(new MFColor15().getArray()).setGroundAngle(new MFFloat16().getArray()).setGroundColor(new MFColor17().getArray()))
        .addChild(new Background().setDEF("Background5LightGrey").setSkyColor(new MFColor18().getArray()))
        .addChild(new Background().setDEF("Background6DarkGrey").setSkyColor(new MFColor19().getArray()))
        .addChild(new TimeSensor().setDEF("Clock10Seconds").setCycleInterval(5d).setLoop(true))
        .addChild(new TimeSensor().setDEF("Clock100Seconds").setEnabled(false).setCycleInterval(100d))
        .addChild(new BooleanSequencer().setDEF("Background3Sequencer").setKey(new MFFloat20().getArray()).setKeyValue(new MFBool21().getArray()))
        .addChild(new BooleanSequencer().setDEF("Background4Sequencer").setKey(new MFFloat22().getArray()).setKeyValue(new MFBool23().getArray()))
        .addChild(new BooleanSequencer().setDEF("Background5Sequencer").setKey(new MFFloat24().getArray()).setKeyValue(new MFBool25().getArray()))
        .addChild(new BooleanSequencer().setDEF("Background6Sequencer").setKey(new MFFloat26().getArray()).setKeyValue(new MFBool27().getArray()))
        .addChild(new ROUTE().setFromNode("Background3Sequencer").setFromField("value_changed").setToNode("Background3Black").setToField("set_bind"))
        .addChild(new ROUTE().setFromNode("Background4Sequencer").setFromField("value_changed").setToNode("Background4SkyBlueGreenGrass").setToField("set_bind"))
        .addChild(new ROUTE().setFromNode("Background5Sequencer").setFromField("value_changed").setToNode("Background5LightGrey").setToField("set_bind"))
        .addChild(new ROUTE().setFromNode("Background6Sequencer").setFromField("value_changed").setToNode("Background6DarkGrey").setToField("set_bind"))
        .addChild(new ROUTE().setFromNode("Clock10Seconds").setFromField("fraction_changed").setToNode("Background3Sequencer").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Clock10Seconds").setFromField("fraction_changed").setToNode("Background4Sequencer").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Clock10Seconds").setFromField("fraction_changed").setToNode("Background5Sequencer").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Clock10Seconds").setFromField("fraction_changed").setToNode("Background6Sequencer").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Clock100Seconds").setFromField("fraction_changed").setToNode("Background3Sequencer").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Clock100Seconds").setFromField("fraction_changed").setToNode("Background4Sequencer").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Clock100Seconds").setFromField("fraction_changed").setToNode("Background5Sequencer").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Clock100Seconds").setFromField("fraction_changed").setToNode("Background6Sequencer").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Clock10Seconds").setFromField("fraction_changed").setToNode("Gramps_HumanoidRoot_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Clock10Seconds").setFromField("fraction_changed").setToNode("Leif_HumanoidRoot_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Clock10Seconds").setFromField("fraction_changed").setToNode("Lily_HumanoidRoot_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Clock10Seconds").setFromField("fraction_changed").setToNode("Tufani_HumanoidRoot_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Clock100Seconds").setFromField("fraction_changed").setToNode("Gramps_HumanoidRoot_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Clock100Seconds").setFromField("fraction_changed").setToNode("Leif_HumanoidRoot_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Clock100Seconds").setFromField("fraction_changed").setToNode("Lily_HumanoidRoot_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Clock100Seconds").setFromField("fraction_changed").setToNode("Tufani_HumanoidRoot_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Gramps_HumanoidRoot_TranslationInterpolator").setFromField("value_changed").setToNode("TextRoot").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Leif_HumanoidRoot_TranslationInterpolator").setFromField("value_changed").setToNode("Root4").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Lily_HumanoidRoot_TranslationInterpolator").setFromField("value_changed").setToNode("Root5").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Tufani_HumanoidRoot_TranslationInterpolator").setFromField("value_changed").setToNode("Root6").setToField("set_translation")));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"This scene tests","","experimental approaches","","for human animation"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFFloat3 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.09f ,0.11f ,0.22f ,0.043f ,0.55f ,0.63f ,0.73f ,0.85f ,0.86f ,1f });
  }
}
private class MFVec3f4 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.8557f ,0.95f ,0.5f ,6.8557f ,0.95f ,0.5f ,6.8557f ,0.95f ,0.5f ,9.8557f ,0.95f ,3.5f ,9.8557f ,0.95f ,3.5f ,9.8557f ,0.95f ,3.5f ,14.3558f ,0.95f ,8f ,16.8558f ,0.95f ,15f ,21.3557f ,0.95f ,24.5f ,21.3557f ,0.95f ,24.5f ,21.3557f ,0.95f ,24.5f });
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Gramps_Stand01","Gramps_Stand01","Gramps_Walk01","Gramps_Stand02","Gramps_Turn01","Gramps_Walk01","Gramps_Walk02","Gramps_Skip01","Gramps_Stand03","Gramps_Stand03","Gramps_Stand03"});
  }
}
private class MFFloat6 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.09f ,0.11f ,0.223f ,0.043f ,0.55f ,0.63f ,0.73f ,0.85f ,0.86f ,1f });
  }
}
private class MFVec3f7 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-7.9962f ,0.4f ,3f ,-7.9962f ,0.4f ,3f ,-7.9962f ,0.4f ,3f ,-7.9962f ,0.4f ,3f ,9.004f ,0.475f ,3.4999f ,11.5048f ,0.475f ,3.3699f ,16.0038f ,0.475f ,7.8699f ,18.5038f ,0.475f ,14.8699f ,23.0038f ,0.475f ,24.3699f ,23.0038f ,0.475f ,24.3699f ,23.0038f ,0.475f ,24.3699f });
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Leif_Stand01","Leif_Stand01","Leif_Stand01","Leif_Run01","Leif_Turn01","Leif_Walk01","Leif_Walk01","Leif_Skip01","Leif_Stand01","Leif_Stand01","Leif_Stand01"});
  }
}
private class MFFloat9 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.09f ,0.11f ,0.225f ,0.043f ,0.55f ,0.63f ,0.73f ,0.85f ,0.86f ,1f });
  }
}
private class MFVec3f10 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-8.0962f ,0.4f ,5.6f ,-8.0962f ,0.4f ,5.6f ,-8.0962f ,0.4f ,5.6f ,-8.0962f ,0.4f ,5.6f ,8.9038f ,0.475f ,4.0999f ,10.6538f ,0.475f ,3.3499f ,15.1538f ,0.475f ,7.8499f ,17.6538f ,0.475f ,14.8499f ,22.1538f ,0.475f ,24.3499f ,22.1538f ,0.475f ,24.3499f ,22.1538f ,0.475f ,24.3499f });
  }
}
private class MFString11 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Lily_Stand01","Lily_Stand01","Lily_Stand01","Leif_Run01","Lily_Turn01","Lily_Walk01","Lily_Walk01","Lily_Skip01","Lily_Stand01","Lily_Stand01","Lily_Stand01"});
  }
}
private class MFFloat12 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.09f ,0.11f ,0.227f ,0.043f ,0.55f ,0.63f ,0.73f ,0.85f ,0.86f ,1f });
  }
}
private class MFVec3f13 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-8.0962f ,0.4f ,6.4f ,-8.0962f ,0.4f ,6.4f ,-8.0962f ,0.4f ,6.4f ,-8.0962f ,0.4f ,6.4f ,9.40338f ,0.475f ,4.3999f ,9.1538f ,0.475f ,3.2699f ,13.6538f ,0.475f ,7.7699f ,16.1538f ,0.475f ,14.7699f ,20.6538f ,0.475f ,24.2699f ,20.6538f ,0.475f ,24.2699f ,20.6538f ,0.475f ,24.2699f });
  }
}
private class MFString14 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Tufani_Stand01","Tufani_Stand01","Tufani_Stand01","Tufani_Run01","Tufani_Turn01","Tufani_Walk01","Tufani_Walk01","Tufani_Skip01","Tufani_Stand01","Tufani_Stand01","Tufani_Stand01"});
  }
}
private class MFColor15 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f ,0.71f ,0.886f });
  }
}
private class MFFloat16 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.57f });
  }
}
private class MFColor17 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.356863f ,0.639216f ,0f ,0.721569f ,1f ,0.501961f });
  }
}
private class MFColor18 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.827f ,0.827f ,0.827f });
  }
}
private class MFColor19 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.6f ,0.2f ,0.2f });
  }
}
private class MFFloat20 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.09f ,0.11f ,0.22f ,0.043f ,0.55f ,0.63f ,0.73f ,0.85f ,0.86f ,1f });
  }
}
private class MFBool21 {
  private org.web3d.x3d.jsail.fields.MFBool getArray() {
    return new org.web3d.x3d.jsail.fields.MFBool(new boolean[] {true,true,true,false,false,false,false,false,false,false,false});
  }
}
private class MFFloat22 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.09f ,0.11f ,0.22f ,0.043f ,0.55f ,0.63f ,0.73f ,0.85f ,0.86f ,1f });
  }
}
private class MFBool23 {
  private org.web3d.x3d.jsail.fields.MFBool getArray() {
    return new org.web3d.x3d.jsail.fields.MFBool(new boolean[] {false,false,false,true,true,false,false,false,false,false,false});
  }
}
private class MFFloat24 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.09f ,0.11f ,0.22f ,0.043f ,0.55f ,0.63f ,0.73f ,0.85f ,0.86f ,1f });
  }
}
private class MFBool25 {
  private org.web3d.x3d.jsail.fields.MFBool getArray() {
    return new org.web3d.x3d.jsail.fields.MFBool(new boolean[] {false,false,false,false,false,true,true,true,false,false,false});
  }
}
private class MFFloat26 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.09f ,0.11f ,0.22f ,0.043f ,0.55f ,0.63f ,0.73f ,0.85f ,0.86f ,1f });
  }
}
private class MFBool27 {
  private org.web3d.x3d.jsail.fields.MFBool getArray() {
    return new org.web3d.x3d.jsail.fields.MFBool(new boolean[] {false,false,false,false,false,false,false,false,true,true,true});
  }
}
}
