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
public class Table5_18PixelTexture {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new Table5_18PixelTexture().initialize().toFileJSON("../data/Table5_18PixelTexture.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interchange").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("Table5_18PixelTexture"))
        .addMeta(new metaObject().setName("description").setContent("PixelTexture example for Table 5.18"))
        .addMeta(new metaObject().setName("creator").setContent("Leonard Daly and Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("18 December 2006"))
        .addMeta(new metaObject().setName("modified").setContent("2 April 2017"))
        .addMeta(new metaObject().setName("reference").setContent("http://X3dGraphics.com"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMeta(new metaObject().setName("rights").setContent("Copyright 2006, Daly Realism and Don Brutzman"))
        .addMeta(new metaObject().setName("subject").setContent("X3D, PixelTexture"))
        .addMeta(new metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/Table5_18PixelTexture"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new MFColor0().getArray())))
        .addChild(new TransformObject().setDEF("Checkerboard").setTranslation(new float[] {0f,0f,-10f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setTextureTransform(new TextureTransformObject().setScale(new float[] {500f,500f}))
              .setTexture(new PixelTextureObject().setImage(new int[] {2,2,3,15119869,16767927,16767927,15119869})))
            .setGeometry(new BoxObject().setSize(new float[] {1000f,1000f,0.01f}))))
        .addChild(new ViewpointObject().setDescription("View All").setPosition(new float[] {0f,0f,20f}))
        .addChild(new ViewpointObject().setDescription("Empty Image").setPosition(new float[] {0f,5f,5f}))
        .addChild(new TransformObject().setDEF("EmptyImage").setRotation(new float[] {1f,1f,0f,1f}).setTranslation(new float[] {0f,5f,0f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setTexture(new PixelTextureObject()))
            .setGeometry(new BoxObject().setDEF("StandardBox"))))
        .addChild(new ViewpointObject().setDescription("Black and white PixelTexture").setPosition(new float[] {-5f,0f,5f}))
        .addChild(new TransformObject().setDEF("BW").setRotation(new float[] {1f,1f,0f,1f}).setTranslation(new float[] {-5f,0f,0f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setTexture(new PixelTextureObject().setImage(new int[] {1,2,1,255,0})))
            .setGeometry(new BoxObject().setUSE("StandardBox"))))
        .addChild(new ViewpointObject().setDescription("Black and white with Alpha PixelTexture").setPosition(new float[] {5f,0f,5f}))
        .addChild(new TransformObject().setDEF("AlphaBW").setRotation(new float[] {1f,1f,0f,1f}).setTranslation(new float[] {5f,0f,0f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setTexture(new PixelTextureObject().setImage(new int[] {2,1,2,52479,8823})))
            .setGeometry(new BoxObject().setUSE("StandardBox"))))
        .addChild(new ViewpointObject().setDescription("RGB PixelTexture").setPosition(new float[] {-5f,-5f,5f}))
        .addChild(new TransformObject().setDEF("RGB").setRotation(new float[] {1f,1f,0f,1f}).setTranslation(new float[] {-5f,-5f,0f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setTexture(new PixelTextureObject().setImage(new int[] {2,4,3,16711680,65280,0,0,0,0,16777215,16776960})))
            .setGeometry(new BoxObject().setUSE("StandardBox"))))
        .addChild(new ViewpointObject().setDescription("RGB with Alpha PixelTexture").setPosition(new float[] {5f,-5f,5f}))
        .addChild(new TransformObject().setDEF("AlphaRGB").setRotation(new float[] {1f,1f,0f,1f}).setTranslation(new float[] {5f,-5f,0f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setTexture(new PixelTextureObject().setImage(new int[] {3,2,4,0xFF0000FF,16711935,65535,0xFF00007F,16711807,65407})))
            .setGeometry(new BoxObject().setUSE("StandardBox")))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f});
  }
}
}
