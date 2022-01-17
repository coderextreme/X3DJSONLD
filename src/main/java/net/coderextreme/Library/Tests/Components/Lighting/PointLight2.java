package net.coderextreme.Library.Tests.Components.Lighting;
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
public class PointLight2 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new PointLight2().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../Library/Tests/Components/Lighting/PointLight2.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Full").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("comment").setContent("World of Titania"))
        .addMeta(new meta().setName("created").setContent("Tue, 05 Jun 2018 02:21:56 GMT"))
        .addMeta(new meta().setName("creator").setContent("Holger Seelig"))
        .addMeta(new meta().setName("generator").setContent("Titania V4.3.0, http://titania.create3000.de"))
        .addMeta(new meta().setName("identifier").setContent("file:///home/holger/Projekte/Library/Tests/Components/Lighting/PointLight2.x3d"))
        .addMeta(new meta().setName("modified").setContent("Wed, 06 Jun 2018 08:47:37 GMT")))
      .setScene(new Scene()
        .addChild(new WorldInfo()
          .setMetadata(new MetadataSet().setName("Titania").setDEF("Titania").setReference("http://titania.create3000.de")
            .addValue(new MetadataSet().setName("AngleGrid").setDEF("AngleGrid").setReference("http://titania.create3000.de")
              .addValue(new MetadataBoolean().setName("enabled").setDEF("enabled").setReference("http://titania.create3000.de").setValue(new MFBool0().getArray())))
            .addValue(new MetadataSet().setName("Grid").setDEF("Grid").setReference("http://titania.create3000.de")
              .addValue(new MetadataBoolean().setName("enabled").setDEF("enabled_1").setReference("http://titania.create3000.de").setValue(new MFBool1().getArray()))
              .addValue(new MetadataInteger().setName("dimension").setDEF("dimension").setReference("http://titania.create3000.de").setValue(new MFInt322().getArray())))
            .addValue(new MetadataSet().setName("Selection").setDEF("Selection").setReference("http://titania.create3000.de")
              .addValue(new MetadataBoolean().setName("selectGeometry").setDEF("selectGeometry").setReference("http://titania.create3000.de").setValue(new MFBool3().getArray()))
              .addValue(new MetadataSet().setName("nodes").setDEF("nodes").setReference("http://titania.create3000.de")
                .addValue(new PointLight().setDEF("_2").setGlobal(false).setLocation(new float[] {0f,5f,0f}).setShadowMapSize("2048"))))
            .addValue(new MetadataSet().setName("BrowserPanel").setDEF("BrowserPanel").setReference("http://titania.create3000.de")
              .addValue(new MetadataInteger().setName("layerNumber").setDEF("layerNumber").setReference("http://titania.create3000.de").setValue(new MFInt324().getArray()))
              .addValue(new MetadataString().setName("type").setDEF("type_3").setReference("http://titania.create3000.de").setValue(new MFString5().getArray()))
              .addValue(new MetadataSet().setName("viewpoints").setDEF("viewpoints").setReference("http://titania.create3000.de")
                .addValue(new MetadataSet().setName("PerspectiveViewpoint").setDEF("PerspectiveViewpoint").setReference("http://titania.create3000.de")
                  .addValue(new MetadataDouble().setName("position").setDEF("position_4").setReference("http://titania.create3000.de").setValue(new MFDouble6().getArray()))
                  .addValue(new MetadataDouble().setName("orientation").setDEF("orientation_5").setReference("http://titania.create3000.de").setValue(new MFDouble7().getArray()))
                  .addValue(new MetadataDouble().setName("centerOfRotation").setDEF("centerOfRotation_6").setReference("http://titania.create3000.de").setValue(new MFDouble8().getArray()))
                  .addValue(new MetadataDouble().setName("fieldOfViewScale").setDEF("fieldOfViewScale").setReference("http://titania.create3000.de").setValue(new MFDouble9().getArray())))
                .addValue(new MetadataSet().setName("TopViewpoint").setDEF("TopViewpoint").setReference("http://titania.create3000.de")
                  .addValue(new MetadataDouble().setName("position").setDEF("position_7").setReference("http://titania.create3000.de").setValue(new MFDouble10().getArray()))
                  .addValue(new MetadataDouble().setName("orientation").setDEF("orientation_8").setReference("http://titania.create3000.de").setValue(new MFDouble11().getArray()))
                  .addValue(new MetadataDouble().setName("centerOfRotation").setDEF("centerOfRotation_9").setReference("http://titania.create3000.de").setValue(new MFDouble12().getArray()))
                  .addValue(new MetadataDouble().setName("fieldOfViewScale").setDEF("fieldOfViewScale_10").setReference("http://titania.create3000.de").setValue(new MFDouble13().getArray())))
                .addValue(new MetadataSet().setName("FrontViewpoint").setDEF("FrontViewpoint").setReference("http://titania.create3000.de")
                  .addValue(new MetadataDouble().setName("position").setDEF("position_11").setReference("http://titania.create3000.de").setValue(new MFDouble14().getArray()))
                  .addValue(new MetadataDouble().setName("orientation").setDEF("orientation_12").setReference("http://titania.create3000.de").setValue(new MFDouble15().getArray()))
                  .addValue(new MetadataDouble().setName("centerOfRotation").setDEF("centerOfRotation_13").setReference("http://titania.create3000.de").setValue(new MFDouble16().getArray()))
                  .addValue(new MetadataDouble().setName("fieldOfViewScale").setDEF("fieldOfViewScale_14").setReference("http://titania.create3000.de").setValue(new MFDouble17().getArray())))))
            .addValue(new MetadataSet().setName("Page").setDEF("Page").setReference("http://titania.create3000.de")
              .addValue(new MetadataInteger().setName("activeView").setDEF("activeView").setReference("http://titania.create3000.de").setValue(new MFInt3218().getArray()))
              .addValue(new MetadataInteger().setName("multiView").setDEF("multiView").setReference("http://titania.create3000.de").setValue(new MFInt3219().getArray())))))
        .addChild(new NavigationInfo().setHeadlight(false))
        .addChild(new Viewpoint().setDEF("_15").setDescription("Inital View").setPosition(new float[] {5.1736f,10.0496f,10.0977f}).setOrientation(new float[] {-0.826747553796003f,0.526024485457868f,0.19946609484098f,0.860063252825464f}).setCenterOfRotation(new float[] {1.22569e-7f,-1.49027e-8f,-4.7967e-8f}))
        .addChild(new Group().setDEF("LightButton")
          .addChild(new PlaneSensor().setDEF("_16").setOffset(new float[] {0f,5f,0f}).setMaxPosition(new float[] {0f,-1f}))
          .addChild(new Transform().setDEF("Sphere").setTranslation(new float[] {0f,5f,0f}).setScale(new float[] {0.241256f,0.241256f,0.241256f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
              .setGeometry(new Sphere()))))
        .addChild(new Group()
          .addChild(new PointLight().setUSE("_2"))
          .addChild(new Transform().setDEF("Floor").setTranslation(new float[] {0f,-1f,0f}).setScale(new float[] {11f,1f,11f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Box())))
          .addChild(new Transform().setDEF("Box_17").setTranslation(new float[] {-4f,1f,0f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Box())))
          .addChild(new Transform().setDEF("Cone").setTranslation(new float[] {0f,1f,4f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Cone())))
          .addChild(new Transform().setDEF("Cylinder").setTranslation(new float[] {4f,1f,0f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Cylinder())))
          .addChild(new Transform().setDEF("Pyramid").setTranslation(new float[] {0f,1f,-4f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3220().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f21().getArray())))))
          .addChild(new Transform().setDEF("Ceiling").setTranslation(new float[] {0f,11.001f,0f}).setScale(new float[] {11f,1f,11f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Box())))
          .addChild(new Transform().setDEF("Box_18").setTranslation(new float[] {-4f,9f,0f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Box())))
          .addChild(new Transform().setDEF("Cone_19").setTranslation(new float[] {0f,9f,4f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Cone())))
          .addChild(new Transform().setDEF("Cylinder_20").setTranslation(new float[] {4f,9f,0f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Cylinder())))
          .addChild(new Transform().setDEF("Pyramid_21").setTranslation(new float[] {0f,9f,-4f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3222().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f23().getArray()))))))
        .addChild(new ROUTE().setFromNode("_16").setFromField("translation_changed").setToNode("_2").setToField("set_location"))
        .addChild(new ROUTE().setFromNode("_2").setFromField("location_changed").setToNode("Sphere").setToField("set_translation")))      ;
    return X3D0;
    }
protected class MFBool0 {
  protected org.web3d.x3d.jsail.fields.MFBool getArray() {
    return new org.web3d.x3d.jsail.fields.MFBool(new boolean[] {false});
  }
}
protected class MFBool1 {
  protected org.web3d.x3d.jsail.fields.MFBool getArray() {
    return new org.web3d.x3d.jsail.fields.MFBool(new boolean[] {true});
  }
}
protected class MFInt322 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10,20,10});
  }
}
protected class MFBool3 {
  protected org.web3d.x3d.jsail.fields.MFBool getArray() {
    return new org.web3d.x3d.jsail.fields.MFBool(new boolean[] {false});
  }
}
protected class MFInt324 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {-1,0,0,0,0,-1,-1,-1});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {", ","RIGHT_VIEW, ","MAIN_VIEW, ","PERSPECTIVE_VIEWFRONT_VIEW"});
  }
}
protected class MFDouble6 {
  protected org.web3d.x3d.jsail.fields.MFDouble getArray() {
    return new org.web3d.x3d.jsail.fields.MFDouble(new double[] {5.87788534164429d,6.46984958648682d,13.8524446487427d});
  }
}
protected class MFDouble7 {
  protected org.web3d.x3d.jsail.fields.MFDouble getArray() {
    return new org.web3d.x3d.jsail.fields.MFDouble(new double[] {-0.704047462871212d,0.695566762376517d,0.143192350010952d,0.568941727555854d});
  }
}
protected class MFDouble8 {
  protected org.web3d.x3d.jsail.fields.MFDouble getArray() {
    return new org.web3d.x3d.jsail.fields.MFDouble(new double[] {0d,0d,0d});
  }
}
protected class MFDouble9 {
  protected org.web3d.x3d.jsail.fields.MFDouble getArray() {
    return new org.web3d.x3d.jsail.fields.MFDouble(new double[] {1d});
  }
}
protected class MFDouble10 {
  protected org.web3d.x3d.jsail.fields.MFDouble getArray() {
    return new org.web3d.x3d.jsail.fields.MFDouble(new double[] {-5.9857227487932d,10.8662109375d,0.18038974973888d});
  }
}
protected class MFDouble11 {
  protected org.web3d.x3d.jsail.fields.MFDouble getArray() {
    return new org.web3d.x3d.jsail.fields.MFDouble(new double[] {1d,0d,0d,4.71238898038469d});
  }
}
protected class MFDouble12 {
  protected org.web3d.x3d.jsail.fields.MFDouble getArray() {
    return new org.web3d.x3d.jsail.fields.MFDouble(new double[] {-5.9857227487932d,0d,0.18038974973888d});
  }
}
protected class MFDouble13 {
  protected org.web3d.x3d.jsail.fields.MFDouble getArray() {
    return new org.web3d.x3d.jsail.fields.MFDouble(new double[] {2.6418009235867d});
  }
}
protected class MFDouble14 {
  protected org.web3d.x3d.jsail.fields.MFDouble getArray() {
    return new org.web3d.x3d.jsail.fields.MFDouble(new double[] {-3.76314300822868d,3.55015251499291d,10000d});
  }
}
protected class MFDouble15 {
  protected org.web3d.x3d.jsail.fields.MFDouble getArray() {
    return new org.web3d.x3d.jsail.fields.MFDouble(new double[] {0d,0d,1d,0d});
  }
}
protected class MFDouble16 {
  protected org.web3d.x3d.jsail.fields.MFDouble getArray() {
    return new org.web3d.x3d.jsail.fields.MFDouble(new double[] {-3.76314300822868d,3.55015251499291d,0d});
  }
}
protected class MFDouble17 {
  protected org.web3d.x3d.jsail.fields.MFDouble getArray() {
    return new org.web3d.x3d.jsail.fields.MFDouble(new double[] {2.01741078562512d});
  }
}
protected class MFInt3218 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3});
  }
}
protected class MFInt3219 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFInt3220 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,2,1,0,-1,0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1});
  }
}
protected class MFVec3f21 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-1f,-1f,1f,1f,-1f,1f,1f,-1f,-1f,-1f,-1f,-1f,0f,1f,0f});
  }
}
protected class MFInt3222 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,2,1,0,-1,0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1});
  }
}
protected class MFVec3f23 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-1f,-1f,1f,1f,-1f,1f,1f,-1f,-1f,-1f,-1f,-1f,0f,1f,0f});
  }
}
}
