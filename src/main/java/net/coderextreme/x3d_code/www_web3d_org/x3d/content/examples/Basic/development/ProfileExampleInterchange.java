package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.development;
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
import org.web3d.x3d.sai.*;
import org.web3d.x3d.sai.CADGeometry.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.CubeMapTexturing.*;
import org.web3d.x3d.sai.DIS.*;
import org.web3d.x3d.sai.EnvironmentalEffects.*;
import org.web3d.x3d.sai.EnvironmentalSensor.*;
import org.web3d.x3d.sai.EventUtilities.*;
import org.web3d.x3d.sai.Followers.*;
import org.web3d.x3d.sai.Geometry2D.*;
import org.web3d.x3d.sai.Geometry3D.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.Interpolation.*;
import org.web3d.x3d.sai.KeyDeviceSensor.*;
import org.web3d.x3d.sai.Layering.*;
import org.web3d.x3d.sai.Layout.*;
import org.web3d.x3d.sai.Lighting.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.sai.Navigation.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.ParticleSystems.*;
import org.web3d.x3d.sai.Picking.*;
import org.web3d.x3d.sai.PointingDeviceSensor.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.Scripting.*;
import org.web3d.x3d.sai.Shaders.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Sound.*;
import org.web3d.x3d.sai.Text.*;
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Time.*;
import org.web3d.x3d.sai.VolumeRendering.*;
public class ProfileExampleInterchange {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new ProfileExampleInterchange().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/ProfileExampleInterchange.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interchange").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("ProfileExampleInterchange.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("6 January 2000"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("description").setContent("List of nodes available in a strictly compliant Interchange profile scene. Only Background renders in this example, other nodes have null values."))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/spec_editors/abstract/Part01/interchange.html"))
        .addMeta(new metaObject().setName("reference").setContent("ProfileExampleInterchange.png"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/ProfileExampleInterchange.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new GroupObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString0().getArray())))
              .setMaterial(new MaterialObject())
              .setTextureTransform(new TextureTransformObject()))
            .setGeometry(new IndexedFaceSetObject().setCreaseAngle(3.14159f)
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor1().getArray())))
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f2().getArray())))
              .setTexCoord(new MultiTextureCoordinateObject())))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject()
              .setColor(new ColorRGBAObject().setColor(new MFColorRGBAObject(new MFColorRGBA3().getArray())))))
          .addChild(new ShapeObject()
            .setGeometry(new BoxObject())
            .setAppearance(new AppearanceObject().setDEF("SilenceWarnings")))
          .addChild(new ShapeObject()
            .setGeometry(new ConeObject())
            .setAppearance(new AppearanceObject().setUSE("SilenceWarnings")))
          .addChild(new ShapeObject()
            .setGeometry(new CylinderObject())
            .setAppearance(new AppearanceObject().setUSE("SilenceWarnings")))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedTriangleFanSetObject()
              .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new MFVec2f4().getArray()))))
            .setAppearance(new AppearanceObject().setUSE("SilenceWarnings")))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedTriangleSetObject()
              .setTexCoord(new TextureCoordinateGeneratorObject()))
            .setAppearance(new AppearanceObject().setUSE("SilenceWarnings")))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedTriangleStripSetObject()
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f5().getArray()))))
            .setAppearance(new AppearanceObject().setUSE("SilenceWarnings")))
          .addChild(new ShapeObject()
            .setGeometry(new LineSetObject())
            .setAppearance(new AppearanceObject()
              .setTexture(new MultiTextureObject())
              .setTextureTransform(new MultiTextureTransformObject())))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setTexture(new PixelTextureObject()))
            .setGeometry(new PointSetObject()))
          .addChild(new ShapeObject()
            .setGeometry(new SphereObject())
            .setAppearance(new AppearanceObject().setUSE("SilenceWarnings")))
          .addChild(new ShapeObject()
            .setGeometry(new TriangleFanSetObject())
            .setAppearance(new AppearanceObject().setUSE("SilenceWarnings")))
          .addChild(new ShapeObject()
            .setGeometry(new TriangleSetObject())
            .setAppearance(new AppearanceObject().setUSE("SilenceWarnings")))
          .addChild(new ShapeObject()
            .setGeometry(new TriangleStripSetObject())
            .setAppearance(new AppearanceObject().setUSE("SilenceWarnings"))))
        .addChild(new BackgroundObject().setGroundColor(new MFColorObject(new MFColor6().getArray())).setSkyColor(new MFColorObject(new MFColor7().getArray())))
        .addChild(new CoordinateInterpolatorObject().setDEF("CI"))
        .addChild(new DirectionalLightObject())
        .addChild(new NavigationInfoObject())
        .addChild(new NormalInterpolatorObject().setDEF("NI").setKey(new MFFloatObject(new MFFloat8().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f9().getArray())))
        .addChild(new OrientationInterpolatorObject().setDEF("OI").setKey(new MFFloatObject(new MFFloat10().getArray())).setKeyValue(new MFRotationObject(new MFRotation11().getArray())))
        .addChild(new PositionInterpolatorObject().setDEF("PI").setKey(new MFFloatObject(new MFFloat12().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f13().getArray())))
        .addChild(new ScalarInterpolatorObject().setDEF("SI").setKey(new MFFloatObject(new MFFloat14().getArray())).setKeyValue(new MFFloatObject(new MFFloat15().getArray())))
        .addChild(new TimeSensorObject().setDEF("TS").setEnabled(false))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("TS").setToField("set_fraction").setToNode("NI"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("TS").setToField("set_fraction").setToNode("OI"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("TS").setToField("set_fraction").setToNode("PI"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("TS").setToField("set_fraction").setToNode("SI"))
        .addChild(new TransformObject())
        .addChild(new ViewpointObject().setDescription("InterchangeProfileExample"))
        .addChild(new WorldInfoObject())
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("TS").setToField("set_fraction").setToNode("PI")))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"earth-topo.png","earth-topo.gif","https://www.web3d.org/x3d/content/examples/Basic/development/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/development/earth-topo.gif"});
  }
}
protected class MFColor1 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,1f,1f});
  }
}
protected class MFVec3f2 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f});
  }
}
protected class MFColorRGBA3 {
  protected MFColorRGBAObject getArray() {
    return new MFColorRGBAObject(new float[] {1f,1f,1f,1f});
  }
}
protected class MFVec2f4 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0f,0f});
  }
}
protected class MFVec3f5 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f});
  }
}
protected class MFColor6 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFColor7 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.2f,0.7f});
  }
}
protected class MFFloat8 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,1f});
  }
}
protected class MFVec3f9 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f});
  }
}
protected class MFFloat10 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,1f});
  }
}
protected class MFRotation11 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0f,0f,1f,0f,0f});
  }
}
protected class MFFloat12 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,1f});
  }
}
protected class MFVec3f13 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat14 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,1f});
  }
}
protected class MFFloat15 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0f});
  }
}
}
