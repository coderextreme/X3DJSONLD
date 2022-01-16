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
public class bubbles {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new bubbles().initialize().toFileJSON("../data/bubbles.new.json");
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
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8f)))
                  .setGeometry(new Sphere().setRadius(0.025f))))
              .addChild(new Transform().setDEF("bubble2")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8f)))
                  .setGeometry(new Sphere().setRadius(0.055f))))
              .addChild(new Transform().setDEF("bubble3")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8f)))
                  .setGeometry(new Sphere().setRadius(0.065f))))
              .addChild(new Transform().setDEF("bubble4")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8f)))
                  .setGeometry(new Sphere().setRadius(0.015f))))
              .addChild(new Transform().setDEF("bubble5")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8f)))
                  .setGeometry(new Sphere().setRadius(0.075f))))
              .addChild(new Transform().setDEF("bubble6")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8f)))
                  .setGeometry(new Sphere().setRadius(0.005f))))
              .addChild(new Transform().setDEF("bubble7")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8f)))
                  .setGeometry(new Sphere().setRadius(0.035f))))
              .addChild(new Transform().setDEF("bubble8")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8f)))
                  .setGeometry(new Sphere().setRadius(0.05f))))
              .addChild(new Transform().setDEF("bubble9")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8f)))
                  .setGeometry(new Sphere().setRadius(0.045f))))
              .addChild(new Transform().setDEF("bubble10")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8f)))
                  .setGeometry(new Sphere().setRadius(0.035f))))
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
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.8f,0.9f,1f});
  }
}
protected class MFVec3f1 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0.75f,0.75f,0.75f,0.86f,0.86f,0.86f,0.99f,0.998f,0.9876f,1.272f,1.9044f,0.9509f});
  }
}
protected class MFFloat2 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.3f,0.64f,0.85f,1f});
  }
}
protected class MFVec3f3 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.1f,0.1f,0.2f,0.4f,0.25f,0.3f,0.5f,0.46f,0.75f,0.5f,0.575f,0.038483478f,1.989f,1.098373f});
  }
}
protected class MFFloat4 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.1f,0.45f,0.7f,1f});
  }
}
protected class MFVec3f5 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01f,0.01f,0.01f,0.25f,0.35f,0.0045f,0.55f,0.6f,0.0055f,0.66f,0.665f,0.00655f,1.555f,1.09043f,0.005734f});
  }
}
protected class MFFloat6 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFVec3f7 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0.5f,0.5f,0.005f,0.6f,0.6f,0.006f,0.75f,0.75f,0.0075f,1.948594f,1.3983f,0.009009349f});
  }
}
protected class MFFloat8 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.35f,0.65f,1f});
  }
}
protected class MFVec3f9 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0.5f,0.5f,0.005f,0.6f,0.6f,0.006f,0.75f,0.75f,0.0075f,1.84444f,1.22222f,0.1f});
  }
}
protected class MFFloat10 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.15f,0.22235f,0.55565f,1f});
  }
}
protected class MFVec3f11 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0.235f,0.3455f,0.0055f,0.356f,0.676f,0.00456f,0.5675f,0.75f,0.0074565f,1.098f,1.0343f,0.14f});
  }
}
protected class MFFloat12 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2425f,0.4535f,0.6775f,1f});
  }
}
protected class MFVec3f13 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0.12345f,0.2225f,0.00335f,0.786f,0.456f,0.00666f,0.74555f,0.7335f,0.00234575f,0.08787f,1.022f,0.12f});
  }
}
protected class MFFloat14 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.1125f,0.5535f,0.97865f,1f});
  }
}
protected class MFVec3f15 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0.1235f,0.05f,0.00125f,0.5666f,0.4346f,0.005556f,0.8975f,0.34575f,0.0098775f,1.8787f,1.686f,0.86f});
  }
}
protected class MFFloat16 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.0025f,0.035f,0.65f,1f});
  }
}
protected class MFVec3f17 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0.522f,0.5445f,0.0057f,0.6543f,0.226f,0.0055f,0.45575f,0.4375f,0.0067f,1.8787f,2f,0.1545f});
  }
}
protected class MFFloat18 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.00025f,0.035f,0.6895f,1f});
  }
}
protected class MFVec3f19 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0.8765f,0.445f,0.00335f,0.3336f,0.4446f,0.005556f,0.765f,0.75f,0.0075f,1f,1f,0.1f});
  }
}
protected class MFColor20 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f,0f,0.6f});
  }
}
}
