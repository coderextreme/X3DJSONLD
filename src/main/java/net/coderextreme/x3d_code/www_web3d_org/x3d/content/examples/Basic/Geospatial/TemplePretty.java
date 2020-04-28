package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.Geospatial;
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
public class TemplePretty {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new TemplePretty().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/Geospatial/TemplePretty.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interchange").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("TemplePretty.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Temple with nice Background."))
        .addMeta(new metaObject().setName("creator").setContent("Martin Reddy SRI authored the original temple scene."))
        .addMeta(new metaObject().setName("translator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("translated").setContent("22 April 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.geovrml.org/examples"))
        .addMeta(new metaObject().setName("subject").setContent("X3D geospatial example"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/TemplePretty.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("TemplePretty.x3d"))
        .addChild(new ViewpointObject().setDescription("Temple").setPosition(new float[] {0f,0f,30f}))
        .addChild(new BackgroundObject().setGroundAngle(new MFFloatObject(new MFFloat0().getArray())).setGroundColor(new MFColorObject(new MFColor1().getArray())).setSkyAngle(new MFFloatObject(new MFFloat2().getArray())).setSkyColor(new MFColorObject(new MFColor3().getArray())))
        .addChild(new TransformObject().setTranslation(new float[] {-11f,2.5f,-11f})
          .addChild(new ShapeObject().setDEF("COLUMN")
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0.9f,0.8f}))
              .setTexture(new ImageTextureObject().setDEF("stone6").setUrl(new MFStringObject(new MFString4().getArray()))))
            .setGeometry(new CylinderObject().setHeight(5f).setRadius(0.6f))))
        .addChild(new TransformObject().setTranslation(new float[] {-9f,2.5f,-11f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-7f,2.5f,-11f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-5f,2.5f,-11f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-3f,2.5f,-11f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-1f,2.5f,-11f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {1f,2.5f,-11f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {3f,2.5f,-11f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {5f,2.5f,-11f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {7f,2.5f,-11f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {9f,2.5f,-11f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-11f,2.5f,-9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-9f,2.5f,-9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-7f,2.5f,-9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-5f,2.5f,-9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-3f,2.5f,-9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-1f,2.5f,-9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {1f,2.5f,-9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {3f,2.5f,-9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {5f,2.5f,-9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {7f,2.5f,-9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {9f,2.5f,-9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-11f,2.5f,-7f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-9f,2.5f,-7f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {7f,2.5f,-7f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {9f,2.5f,-7f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-11f,2.5f,-5f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-9f,2.5f,-5f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {7f,2.5f,-5f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {9f,2.5f,-5f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-11f,2.5f,-3f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-9f,2.5f,-3f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {7f,2.5f,-3f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {9f,2.5f,-3f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-11f,2.5f,-1f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-9f,2.5f,-1f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {7f,2.5f,-1f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {9f,2.5f,-1f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-11f,2.5f,1f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-9f,2.5f,1f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {7f,2.5f,1f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {9f,2.5f,1f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-11f,2.5f,3f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-9f,2.5f,3f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {7f,2.5f,3f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {9f,2.5f,3f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-11f,2.5f,5f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-9f,2.5f,5f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {7f,2.5f,5f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {9f,2.5f,5f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-11f,2.5f,7f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-9f,2.5f,7f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-7f,2.5f,7f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-5f,2.5f,7f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-3f,2.5f,7f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-1f,2.5f,7f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {1f,2.5f,7f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {3f,2.5f,7f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {5f,2.5f,7f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {7f,2.5f,7f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {9f,2.5f,7f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-11f,2.5f,9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-9f,2.5f,9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-7f,2.5f,9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-5f,2.5f,9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-3f,2.5f,9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-1f,2.5f,9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {1f,2.5f,9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {3f,2.5f,9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {5f,2.5f,9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {7f,2.5f,9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {9f,2.5f,9f})
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new TransformObject().setTranslation(new float[] {-1f,-0.5f,-1f})
          .addChild(new TransformObject()
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,1f}))
                .setTexture(new ImageTextureObject().setDEF("stone5").setUrl(new MFStringObject(new MFString5().getArray()))))
              .setGeometry(new BoxObject().setSize(new float[] {22f,1f,22f})))))
        .addChild(new TransformObject().setTranslation(new float[] {-1f,-1.5f,-1f})
          .addChild(new TransformObject()
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,1f}))
                .setTexture(new ImageTextureObject().setUSE("stone5")))
              .setGeometry(new BoxObject().setSize(new float[] {24f,1f,24f})))))
        .addChild(new TransformObject().setTranslation(new float[] {-1f,-2.5f,-1f})
          .addChild(new TransformObject()
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,1f}))
                .setTexture(new ImageTextureObject().setUSE("stone5")))
              .setGeometry(new BoxObject().setSize(new float[] {26f,1f,26f}))))))      ;
    return X3D0;
    }
protected class MFFloat0 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1.25f,1.37f});
  }
}
protected class MFColor1 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.01f,0.09f,0.2f,0.05f,0.65f,0.47f,0.4f,0.95f,0.85f});
  }
}
protected class MFFloat2 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1.3f,1.37f});
  }
}
protected class MFColor3 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0.2f,0.1f,0.1f,0.8f,0.7f,0.7f,1f});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/stone6.png","images/stone6.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone6.png","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone6.gif","http://www.ai.sri.com/~reddy/geovrml/examples/temple/stone6.gif"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/stone5.png","images/stone5.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone5.png","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone5.gif","http://www.ai.sri.com/~reddy/geovrml/examples/temple/stone5.gif"});
  }
}
}
