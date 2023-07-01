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
public class Table5_18PixelTexture {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new Table5_18PixelTexture().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/Table5_18PixelTexture.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("Table5_18PixelTexture"))
        .addMeta(new meta().setName("description").setContent("PixelTexture example for Table 5.18"))
        .addMeta(new meta().setName("creator").setContent("Leonard Daly and Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("18 December 2006"))
        .addMeta(new meta().setName("modified").setContent("2 April 2017"))
        .addMeta(new meta().setName("reference").setContent("http://X3dGraphics.com"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMeta(new meta().setName("rights").setContent("Copyright 2006, Daly Realism and Don Brutzman"))
        .addMeta(new meta().setName("subject").setContent("X3D, PixelTexture"))
        .addMeta(new meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/Table5_18PixelTexture"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new Transform().setDEF("Checkerboard").setTranslation(new float[] {0f,0f,-10f})
          .addChild(new Shape("Checkerboard")
            .setAppearance(new Appearance()
              .setTextureTransform(new TextureTransform().setScale(new float[] {500f,500f}))
              .setTexture(new PixelTexture().setImage(new int[] {2,2,3,15119869,16767927,16767927,15119869})))
            .setGeometry(new Box().setSize(new float[] {1000f,1000f,0.01f}))))
        .addChild(new Viewpoint().setDescription("View All").setPosition(new float[] {0f,0f,20f}))
        .addChild(new Viewpoint().setDescription("Empty Image").setPosition(new float[] {0f,5f,5f}))
        .addChild(new Transform().setDEF("EmptyImage").setRotation(new float[] {1f,1f,0f,1f}).setTranslation(new float[] {0f,5f,0f})
          .addChild(new Shape("EmptyImage")
            .setAppearance(new Appearance()
              .setTexture(new PixelTexture()))
            .setGeometry(new Box().setDEF("StandardBox"))))
        .addChild(new Viewpoint().setDescription("Black and white PixelTexture").setPosition(new float[] {-5f,0f,5f}))
        .addChild(new Transform().setDEF("BW").setRotation(new float[] {1f,1f,0f,1f}).setTranslation(new float[] {-5f,0f,0f})
          .addChild(new Shape("BW")
            .setAppearance(new Appearance()
              .setTexture(new PixelTexture().setImage(new int[] {1,2,1,255,0})))
            .setGeometry(new Box().setUSE("StandardBox"))))
        .addChild(new Viewpoint().setDescription("Black and white with Alpha PixelTexture").setPosition(new float[] {5f,0f,5f}))
        .addChild(new Transform().setDEF("AlphaBW").setRotation(new float[] {1f,1f,0f,1f}).setTranslation(new float[] {5f,0f,0f})
          .addChild(new Shape("AlphaBW")
            .setAppearance(new Appearance()
              .setTexture(new PixelTexture().setImage(new int[] {2,1,2,52479,8823})))
            .setGeometry(new Box().setUSE("StandardBox"))))
        .addChild(new Viewpoint().setDescription("RGB PixelTexture").setPosition(new float[] {-5f,-5f,5f}))
        .addChild(new Transform().setDEF("RGB").setRotation(new float[] {1f,1f,0f,1f}).setTranslation(new float[] {-5f,-5f,0f})
          .addChild(new Shape("RGB")
            .setAppearance(new Appearance()
              .setTexture(new PixelTexture().setImage(new int[] {2,4,3,16711680,65280,0,0,0,0,16777215,16776960})))
            .setGeometry(new Box().setUSE("StandardBox"))))
        .addChild(new Viewpoint().setDescription("RGB with Alpha PixelTexture").setPosition(new float[] {5f,-5f,5f}))
        .addChild(new Transform().setDEF("AlphaRGB").setRotation(new float[] {1f,1f,0f,1f}).setTranslation(new float[] {5f,-5f,0f})
          .addChild(new Shape("AlphaRGB")
            .setAppearance(new Appearance()
              .setTexture(new PixelTexture().setImage(new int[] {3,2,4,0xFF0000FF,16711935,65535,0xFF00007F,16711807,65407})))
            .setGeometry(new Box().setUSE("StandardBox")))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f,0f,1f});
  }
}
}
