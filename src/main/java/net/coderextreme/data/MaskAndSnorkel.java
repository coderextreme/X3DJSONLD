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
public class MaskAndSnorkel {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new MaskAndSnorkel().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/MaskAndSnorkel.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("MaskAndSnorkel.x3d"))
        .addMeta(new meta().setName("description").setContent("Diving mask and snorkel tube."))
        .addMeta(new meta().setName("creator").setContent("Etsuko Lippi"))
        .addMeta(new meta().setName("created").setContent("January 24, 2001"))
        .addMeta(new meta().setName("modified").setContent("23 May 2020"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("MaskAndSnorkel.x3d"))
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new Transform().setDEF("maskAndSnorkel")
          .addChild(new Transform()
            .addChild(new Shape().setDEF("maskFrame")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDEF("frameColor").setDiffuseColor(new float[] {0f,0f,0f})))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321().getArray()).setCreaseAngle(1.4500f).setSolid(false)
                .setCoord(new Coordinate().setPoint(new MFVec3f2().getArray())))))
          .addChild(new Transform().setDEF("snorkelHoldRing").setTranslation(new float[] {0.075f,0.075f,-0.02f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("frameColor")))
              .setGeometry(new Cylinder().setHeight(0.0030f).setRadius(0.0150f))))
          .addChild(new Group().setDEF("snorkel")
            .addChild(new Transform().setTranslation(new float[] {0f,-0.02f,0f})
              .addChild(new Transform().setScale(new float[] {0.9f,0.9f,0.9f}).setTranslation(new float[] {0.035f,-0.07f,-0.02f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("snorkelTube").setDiffuseColor(new float[] {0.678f,1f,0.184f}).setTransparency(0.4000f)))
                  .setGeometry(new Extrusion().setCrossSection(new MFVec2f3().getArray()).setSpine(new MFVec3f4().getArray()))))
              .addChild(new Transform().setRotation(new float[] {0f,0f,1f,1.57f}).setScale(new float[] {0.9f,0.9f,0.9f}).setTranslation(new float[] {0.01f,-0.04f,-0.02f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("Mouthpiece").setDiffuseColor(new float[] {0.678f,1f,0.8f}).setTransparency(0.4000f)))
                  .setGeometry(new Extrusion().setCrossSection(new MFVec2f5().getArray()).setSpine(new MFVec3f6().getArray()))))
              .addChild(new Transform().setRotation(new float[] {0f,0f,1f,-0.85f}).setScale(new float[] {0.9f,0.9f,0.9f}).setTranslation(new float[] {0.005f,-0.01f,-0.02f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Mouthpiece")))
                  .setGeometry(new Extrusion().setCrossSection(new MFVec2f7().getArray()).setSpine(new MFVec3f8().getArray()))))))
          .addChild(new Transform()
            .addChild(new Shape().setDEF("maskLensR")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDEF("plastic").setDiffuseColor(new float[] {0.941f,0.973f,1f}).setTransparency(0.8000f)))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt329().getArray()).setCreaseAngle(1.4500f).setSolid(false)
                .setCoord(new Coordinate().setPoint(new MFVec3f10().getArray())))))
          .addChild(new Transform()
            .addChild(new Shape().setDEF("maskLensL")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("plastic")))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3211().getArray()).setCreaseAngle(1.4500f).setSolid(false)
                .setCoord(new Coordinate().setPoint(new MFVec3f12().getArray())))))
          .addChild(new Transform()
            .addChild(new Shape().setDEF("nose")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDEF("plasticFit").setDiffuseColor(new float[] {0.678f,1f,0.184f}).setTransparency(0.7000f)))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3213().getArray()).setCreaseAngle(1.4500f).setSolid(false)
                .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray())))))
          .addChild(new Transform()
            .addChild(new Shape().setDEF("faceFit")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("plasticFit")))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3215().getArray()).setCreaseAngle(1.4500f).setSolid(false)
                .setCoord(new Coordinate().setPoint(new MFVec3f16().getArray())))))
          .addChild(new Transform()
            .addChild(new Shape().setDEF("belt")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("plastic")))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3217().getArray()).setCreaseAngle(1.4500f).setSolid(false)
                .setCoord(new Coordinate().setPoint(new MFVec3f18().getArray())))))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.0000f,0.0000f,0.9000f});
  }
}
protected class MFInt321 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1});
  }
}
protected class MFVec3f2 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0800f,0.0000f,0.0200f,0.0500f,0.0000f,0.0500f,0.0500f,0.0000f,0.0600f,0.0600f,0.0000f,0.0600f,0.0900f,0.0000f,0.0500f,0.1000f,0.0000f,0.0000f,0.1000f,0.0000f,-0.0500f,0.1000f,0.0000f,-0.0600f,0.0900f,0.0000f,-0.0600f,0.0600f,0.0000f,-0.0500f,0.0500f,0.0000f,-0.0200f,0.0500f,0.0000f,0.0050f,0.0800f,0.0000f,0.0200f,0.0550f,0.0000f,0.0500f,0.0550f,0.0000f,0.0550f,0.0600f,0.0000f,0.0550f,0.0900f,0.0000f,0.0450f,0.0950f,0.0000f,0.0050f,0.0950f,0.0000f,-0.0050f,0.0800f,0.0000f,-0.0200f,0.0550f,0.0000f,-0.0500f,0.0550f,0.0000f,-0.0550f,0.0600f,0.0000f,-0.0550f,0.0900f,0.0000f,-0.0450f,0.0950f,0.0000f,-0.0050f,0.0950f,0.0000f});
  }
}
protected class MFVec2f3 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0000f,0.0130f,0.0049f,0.0120f,0.0092f,0.0092f,0.0120f,0.0049f,0.0130f,0.0000f,0.0120f,-0.0049f,0.0092f,-0.0092f,0.0049f,-0.0120f,0.0000f,0.0130f,-0.0049f,-0.0120f,-0.0092f,-0.0092f,-0.0120f,-0.0049f,-0.0130f,0.0000f,-0.0120f,0.0049f,-0.0092f,0.0092f,-0.0049f,0.0120f,0.0000f,0.0130f});
  }
}
protected class MFVec3f4 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0100f,-0.0400f,0.0000f,0.0000f,0.0000f,0.0000f,0.0300f,0.0500f,0.0000f,0.0500f,0.2000f,0.0000f,0.0300f,0.4000f,0.0300f});
  }
}
protected class MFVec2f5 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0000f,0.0130f,0.0049f,0.0120f,0.0092f,0.0092f,0.0120f,0.0049f,0.0130f,0.0000f,0.0120f,-0.0049f,0.0092f,-0.0092f,0.0049f,-0.0120f,0.0000f,0.0130f,-0.0049f,-0.0120f,-0.0092f,-0.0092f,-0.0120f,-0.0049f,-0.0130f,0.0000f,-0.0120f,0.0049f,-0.0092f,0.0092f,-0.0049f,0.0120f,0.0000f,0.0130f});
  }
}
protected class MFVec3f6 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0100f,-0.0300f,0.0000f,0.0000f,0.0000f,0.0000f,0.0200f,0.0100f,0.0000f});
  }
}
protected class MFVec2f7 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0000f,0.0130f,0.0049f,0.0120f,0.0092f,0.0092f,0.0120f,0.0049f,0.0130f,0.0000f,0.0120f,-0.0049f,0.0092f,-0.0092f,0.0049f,-0.0120f,0.0000f,0.0130f});
  }
}
protected class MFVec3f8 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0200f,-0.0300f,0.0000f,-0.0100f,-0.0300f,0.0000f,0.0000f,-0.0175f,0.0000f,0.0000f,-0.0135f,0.0000f,-0.0100f,0.0000f,0.0000f,-0.0200f,0.0000f,0.0000f});
  }
}
protected class MFInt329 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,13,14,15,16,17,18,12,-1});
  }
}
protected class MFVec3f10 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0800f,0.0000f,0.0200f,0.0500f,0.0000f,0.0500f,0.0500f,0.0000f,0.0600f,0.0600f,0.0000f,0.0600f,0.0900f,0.0000f,0.0500f,0.1000f,0.0000f,0.0000f,0.1000f,0.0000f,-0.0500f,0.1000f,0.0000f,-0.0600f,0.0900f,0.0000f,-0.0600f,0.0600f,0.0000f,-0.0500f,0.0500f,0.0000f,-0.0200f,0.0500f,0.0000f,0.0050f,0.0800f,0.0000f,0.0200f,0.0550f,0.0000f,0.0500f,0.0550f,0.0000f,0.0550f,0.0600f,0.0000f,0.0550f,0.0900f,0.0000f,0.0450f,0.0950f,0.0000f,0.0050f,0.0950f,0.0000f,-0.0050f,0.0800f,0.0000f,-0.0200f,0.0550f,0.0000f,-0.0500f,0.0550f,0.0000f,-0.0550f,0.0600f,0.0000f,-0.0550f,0.0900f,0.0000f,-0.0450f,0.0950f,0.0000f,-0.0050f,0.0950f,0.0000f});
  }
}
protected class MFInt3211 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {19,20,21,22,23,24,25,19,-1});
  }
}
protected class MFVec3f12 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0800f,0.0000f,0.0200f,0.0500f,0.0000f,0.0500f,0.0500f,0.0000f,0.0600f,0.0600f,0.0000f,0.0600f,0.0900f,0.0000f,0.0500f,0.1000f,0.0000f,0.0000f,0.1000f,0.0000f,-0.0500f,0.1000f,0.0000f,-0.0600f,0.0900f,0.0000f,-0.0600f,0.0600f,0.0000f,-0.0500f,0.0500f,0.0000f,-0.0200f,0.0500f,0.0000f,0.0050f,0.0800f,0.0000f,0.0200f,0.0550f,0.0000f,0.0500f,0.0550f,0.0000f,0.0550f,0.0600f,0.0000f,0.0550f,0.0900f,0.0000f,0.0450f,0.0950f,0.0000f,0.0050f,0.0950f,0.0000f,-0.0050f,0.0800f,0.0000f,-0.0200f,0.0550f,0.0000f,-0.0500f,0.0550f,0.0000f,-0.0550f,0.0600f,0.0000f,-0.0550f,0.0900f,0.0000f,-0.0450f,0.0950f,0.0000f,-0.0050f,0.0950f,0.0000f});
  }
}
protected class MFInt3213 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1});
  }
}
protected class MFVec3f14 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0800f,0.0000f,0.0200f,0.0500f,0.0000f,0.0500f,0.0500f,0.0000f,0.0600f,0.0600f,0.0000f,0.0600f,0.0900f,0.0000f,0.0500f,0.1000f,0.0000f,0.0000f,0.1000f,0.0000f,-0.0500f,0.1000f,0.0000f,-0.0600f,0.0900f,0.0000f,-0.0600f,0.0600f,0.0000f,-0.0500f,0.0500f,0.0000f,-0.0200f,0.0500f,0.0000f,0.0050f,0.0800f,0.0000f,0.0200f,0.0550f,0.0000f,0.0500f,0.0550f,0.0000f,0.0550f,0.0600f,0.0000f,0.0550f,0.0900f,0.0000f,0.0450f,0.0950f,0.0000f,0.0050f,0.0950f,0.0000f,-0.0050f,0.0800f,0.0000f,-0.0200f,0.0550f,0.0000f,-0.0500f,0.0550f,0.0000f,-0.0550f,0.0600f,0.0000f,-0.0550f,0.0900f,0.0000f,-0.0450f,0.0950f,0.0000f,-0.0050f,0.0950f,0.0000f,0.0000f,0.0400f,0.0150f,0.0500f,0.0400f,-0.0300f,0.0600f,0.0500f,-0.0300f,0.0700f,0.0950f,-0.0300f,0.0550f,0.1100f,-0.0300f,0.0000f,0.1100f,-0.0200f,-0.0550f,0.1100f,-0.0300f,-0.0700f,0.0950f,-0.0300f,-0.0600f,0.0500f,-0.0300f,-0.0500f,0.0400f,-0.0300f,-0.0200f,0.0400f,-0.0200f,0.0200f,0.0400f,-0.0200f});
  }
}
protected class MFInt3215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1});
  }
}
protected class MFVec3f16 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0800f,0.0000f,0.0200f,0.0500f,0.0000f,0.0500f,0.0500f,0.0000f,0.0600f,0.0600f,0.0000f,0.0600f,0.0900f,0.0000f,0.0500f,0.1000f,0.0000f,0.0000f,0.1000f,0.0000f,-0.0500f,0.1000f,0.0000f,-0.0600f,0.0900f,0.0000f,-0.0600f,0.0600f,0.0000f,-0.0500f,0.0500f,0.0000f,-0.0200f,0.0500f,0.0000f,0.0050f,0.0800f,0.0000f,0.0200f,0.0550f,0.0000f,0.0500f,0.0550f,0.0000f,0.0550f,0.0600f,0.0000f,0.0550f,0.0900f,0.0000f,0.0450f,0.0950f,0.0000f,0.0050f,0.0950f,0.0000f,-0.0050f,0.0800f,0.0000f,-0.0200f,0.0550f,0.0000f,-0.0500f,0.0550f,0.0000f,-0.0550f,0.0600f,0.0000f,-0.0550f,0.0900f,0.0000f,-0.0450f,0.0950f,0.0000f,-0.0050f,0.0950f,0.0000f,0.0000f,0.0500f,0.0150f,0.0500f,0.0400f,-0.0300f,0.0600f,0.0500f,-0.0300f,0.0700f,0.0950f,-0.0300f,0.0550f,0.1100f,-0.0300f,0.0000f,0.1100f,-0.0200f,-0.0550f,0.1100f,-0.0300f,-0.0700f,0.0950f,-0.0300f,-0.0600f,0.0500f,-0.0300f,-0.0500f,0.0400f,-0.0300f,-0.0200f,0.0400f,-0.0200f,0.0200f,0.0400f,-0.0200f});
  }
}
protected class MFInt3217 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1});
  }
}
protected class MFVec3f18 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0800f,0.0000f,0.0200f,0.0500f,0.0000f,0.0500f,0.0500f,0.0000f,0.0600f,0.0600f,0.0000f,0.0600f,0.0900f,0.0000f,0.0500f,0.1000f,0.0000f,0.0000f,0.1000f,0.0000f,-0.0500f,0.1000f,0.0000f,-0.0600f,0.0900f,0.0000f,-0.0600f,0.0600f,0.0000f,-0.0500f,0.0500f,0.0000f,-0.0200f,0.0500f,0.0000f,0.0050f,0.0800f,0.0000f,0.0200f,0.0550f,0.0000f,0.0500f,0.0550f,0.0000f,0.0550f,0.0600f,0.0000f,0.0550f,0.0900f,0.0000f,0.0450f,0.0950f,0.0000f,0.0050f,0.0950f,0.0000f,-0.0050f,0.0800f,0.0000f,-0.0200f,0.0550f,0.0000f,-0.0500f,0.0550f,0.0000f,-0.0550f,0.0600f,0.0000f,-0.0550f,0.0900f,0.0000f,-0.0450f,0.0950f,0.0000f,-0.0050f,0.0950f,0.0000f,0.0000f,0.0500f,0.0150f,0.0500f,0.0400f,-0.0300f,0.0600f,0.0500f,-0.0300f,0.0700f,0.0950f,-0.0300f,0.0550f,0.1100f,-0.0300f,0.0000f,0.1100f,-0.0200f,-0.0550f,0.1100f,-0.0300f,-0.0700f,0.0950f,-0.0300f,-0.0600f,0.0500f,-0.0300f,-0.0500f,0.0400f,-0.0300f,-0.0200f,0.0400f,-0.0200f,0.0200f,0.0400f,-0.0200f,0.0750f,0.0600f,-0.1350f,0.0750f,0.0900f,-0.1350f,-0.0750f,0.0600f,-0.1350f,-0.0750f,0.0900f,-0.1350f,0.0600f,0.0900f,-0.1650f,0.0600f,0.0600f,-0.1650f,-0.0600f,0.0900f,-0.1650f,-0.0600f,0.0600f,-0.1650f,0.0000f,0.0900f,-0.2000f,0.0000f,0.0600f,-0.1750f});
  }
}
}
