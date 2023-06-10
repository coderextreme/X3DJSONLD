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
public class Bubbles {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new Bubbles().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/Bubbles.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("Bubbles.x3d"))
        .addMeta(new meta().setName("description").setContent("Bubble animation used by Nancy Diving example."))
        .addMeta(new meta().setName("creator").setContent("Etsuko Lippi"))
        .addMeta(new meta().setName("created").setContent("24 January 2001"))
        .addMeta(new meta().setName("modified").setContent("23 May 2020"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("Bubbles.x3d"))
        .addChild(new Transform().setDEF("Bubbles")
          .addChild(new Group().setDEF("Bubble")
            .addChild(new TimeSensor().setDEF("BubbleClock").setCycleInterval(6d).setLoop(true))
            .addChild(new PositionInterpolator().setDEF("BubblePath1").setKey(new MFFloat0().getArray()).setKeyValue(new MFVec3f1().getArray()))
            .addChild(new PositionInterpolator().setDEF("BubblePath2").setKey(new MFFloat2().getArray()).setKeyValue(new MFVec3f3().getArray()))
            .addChild(new PositionInterpolator().setDEF("BubblePath3").setKey(new MFFloat4().getArray()).setKeyValue(new MFVec3f5().getArray()))
            .addChild(new PositionInterpolator().setDEF("BubblePath4").setKey(new MFFloat6().getArray()).setKeyValue(new MFVec3f7().getArray()))
            .addChild(new PositionInterpolator().setDEF("BubblePath5").setKey(new MFFloat8().getArray()).setKeyValue(new MFVec3f9().getArray()))
            .addChild(new PositionInterpolator().setDEF("BubblePath6").setKey(new MFFloat10().getArray()).setKeyValue(new MFVec3f11().getArray()))
            .addChild(new PositionInterpolator().setDEF("BubblePath7").setKey(new MFFloat12().getArray()).setKeyValue(new MFVec3f13().getArray()))
            .addChild(new PositionInterpolator().setDEF("BubblePath8").setKey(new MFFloat14().getArray()).setKeyValue(new MFVec3f15().getArray()))
            .addChild(new PositionInterpolator().setDEF("BubblePath9").setKey(new MFFloat16().getArray()).setKeyValue(new MFVec3f17().getArray()))
            .addChild(new PositionInterpolator().setDEF("BubblePath10").setKey(new MFFloat18().getArray()).setKeyValue(new MFVec3f19().getArray()))
            .addChild(new Transform()
              .addChild(new Transform().setDEF("bubble1")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8000f)))
                  .setGeometry(new Sphere().setRadius(0.0250f))))
              .addChild(new Transform().setDEF("bubble2")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8000f)))
                  .setGeometry(new Sphere().setRadius(0.0550f))))
              .addChild(new Transform().setDEF("bubble3")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8000f)))
                  .setGeometry(new Sphere().setRadius(0.0650f))))
              .addChild(new Transform().setDEF("bubble4")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8000f)))
                  .setGeometry(new Sphere().setRadius(0.0150f))))
              .addChild(new Transform().setDEF("bubble5")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8000f)))
                  .setGeometry(new Sphere().setRadius(0.0750f))))
              .addChild(new Transform().setDEF("bubble6")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8000f)))
                  .setGeometry(new Sphere().setRadius(0.0050f))))
              .addChild(new Transform().setDEF("bubble7")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8000f)))
                  .setGeometry(new Sphere().setRadius(0.0350f))))
              .addChild(new Transform().setDEF("bubble8")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8000f)))
                  .setGeometry(new Sphere().setRadius(0.0500f))))
              .addChild(new Transform().setDEF("bubble9")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8000f)))
                  .setGeometry(new Sphere().setRadius(0.0450f))))
              .addChild(new Transform().setDEF("bubble10")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8000f)))
                  .setGeometry(new Sphere().setRadius(0.0350f))))
              .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath1"))
              .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath2"))
              .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath3"))
              .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath4"))
              .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath5"))
              .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath6"))
              .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath7"))
              .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath8"))
              .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath9"))
              .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath10"))
              .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath1").setToField("set_translation").setToNode("bubble1"))
              .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath2").setToField("set_translation").setToNode("bubble2"))
              .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath3").setToField("set_translation").setToNode("bubble3"))
              .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath4").setToField("set_translation").setToNode("bubble4"))
              .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath5").setToField("set_translation").setToNode("bubble5"))
              .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath6").setToField("set_translation").setToNode("bubble6"))
              .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath7").setToField("set_translation").setToNode("bubble7"))
              .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath8").setToField("set_translation").setToNode("bubble8"))
              .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath9").setToField("set_translation").setToNode("bubble9"))
              .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath10").setToField("set_translation").setToNode("bubble10")))))
        .addChild(new Background().setSkyColor(new MFColor20().getArray())))      ;
    return X3D0;
    }
protected class MFFloat0 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.5000f,0.8000f,0.9000f,1.0000f});
  }
}
protected class MFVec3f1 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.7500f,0.7500f,0.7500f,0.8600f,0.8600f,0.8600f,0.9900f,0.9980f,0.9876f,1.2720f,1.9044f,0.9509f});
  }
}
protected class MFFloat2 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.3000f,0.6400f,0.8500f,1.0000f});
  }
}
protected class MFVec3f3 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1000f,0.1000f,0.1000f,0.2000f,0.4000f,0.2500f,0.3000f,0.5000f,0.4600f,0.7500f,0.5000f,0.5750f,0.0385f,1.9890f,1.0984f});
  }
}
protected class MFFloat4 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.1000f,0.4500f,0.7000f,1.0000f});
  }
}
protected class MFVec3f5 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0100f,0.0100f,0.0100f,0.2500f,0.3500f,0.0045f,0.5500f,0.6000f,0.0055f,0.6600f,0.6650f,0.0066f,1.5550f,1.0904f,0.0057f});
  }
}
protected class MFFloat6 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.5000f,0.6000f,0.8000f,1.0000f});
  }
}
protected class MFVec3f7 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.5000f,0.5000f,0.0050f,0.6000f,0.6000f,0.0060f,0.7500f,0.7500f,0.0075f,1.9486f,1.3983f,0.0090f});
  }
}
protected class MFFloat8 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2500f,0.3500f,0.6500f,1.0000f});
  }
}
protected class MFVec3f9 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.5000f,0.5000f,0.0050f,0.6000f,0.6000f,0.0060f,0.7500f,0.7500f,0.0075f,1.8444f,1.2222f,0.1000f});
  }
}
protected class MFFloat10 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.1500f,0.2223f,0.5556f,1.0000f});
  }
}
protected class MFVec3f11 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.2350f,0.3455f,0.0055f,0.3560f,0.6760f,0.0046f,0.5675f,0.7500f,0.0075f,1.0980f,1.0343f,0.1400f});
  }
}
protected class MFFloat12 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2425f,0.4535f,0.6775f,1.0000f});
  }
}
protected class MFVec3f13 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.1235f,0.2225f,0.0034f,0.7860f,0.4560f,0.0067f,0.7456f,0.7335f,0.0023f,0.0879f,1.0220f,0.1200f});
  }
}
protected class MFFloat14 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.1125f,0.5535f,0.9787f,1.0000f});
  }
}
protected class MFVec3f15 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.1235f,0.0500f,0.0013f,0.5666f,0.4346f,0.0056f,0.8975f,0.3458f,0.0099f,1.8787f,1.6860f,0.8600f});
  }
}
protected class MFFloat16 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0025f,0.0350f,0.6500f,1.0000f});
  }
}
protected class MFVec3f17 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.5220f,0.5445f,0.0057f,0.6543f,0.2260f,0.0055f,0.4557f,0.4375f,0.0067f,1.8787f,2.0000f,0.1545f});
  }
}
protected class MFFloat18 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0003f,0.0350f,0.6895f,1.0000f});
  }
}
protected class MFVec3f19 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.8765f,0.4450f,0.0034f,0.3336f,0.4446f,0.0056f,0.7650f,0.7500f,0.0075f,1.0000f,1.0000f,0.1000f});
  }
}
protected class MFColor20 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.0000f,0.0000f,0.6000f});
  }
}
}
