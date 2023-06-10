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
public class PixelTextureComponentExamples {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new PixelTextureComponentExamples().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/PixelTextureComponentExamples.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("PixelTextureComponentExamples.x3d"))
        .addMeta(new meta().setName("description").setContent("This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18."))
        .addMeta(new meta().setName("creator").setContent("Leonard Daly and Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("25 August 2008"))
        .addMeta(new meta().setName("modified").setContent("7 January 2014"))
        .addMeta(new meta().setName("reference").setContent("http://X3dGraphics.com"))
        .addMeta(new meta().setName("reference").setContent("X3D for Web Authors, Table 5.18"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMeta(new meta().setName("rights").setContent("Copyright (c) 2006, Daly Realism and Don Brutzman"))
        .addMeta(new meta().setName("subject").setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
        .addMeta(new meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new Viewpoint().setDescription("Table 5.18 SFImage component examples").setPosition(new float[] {0f,0f,14f}))
        .addChild(new Transform().setTranslation(new float[] {-6f,0f,0f})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setTexture(new PixelTexture().setDEF("ZeroComponents")))
            .setGeometry(new Box()))
          .addChild(new Transform().setTranslation(new float[] {0f,-2f,0f})
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString1().getArray())
                .setFontStyle(new FontStyle().setDEF("CenterJustify").setJustify(new MFString2().getArray())))
              .setAppearance(new Appearance().setDEF("TextMaterial")
                .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}))))))
        .addChild(new Transform().setTranslation(new float[] {-3f,0f,0f})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setTexture(new PixelTexture().setDEF("OneComponent").setImage(new int[] {1,2,1,255,0})))
            .setGeometry(new Box()))
          .addChild(new Transform().setTranslation(new float[] {0f,-2f,0f})
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString3().getArray())
                .setFontStyle(new FontStyle().setUSE("CenterJustify")))
              .setAppearance(new Appearance().setUSE("TextMaterial")))))
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setTexture(new PixelTexture().setDEF("TwoComponents").setImage(new int[] {2,1,2,52479,8823})))
            .setGeometry(new Box()))
          .addChild(new Transform().setTranslation(new float[] {0f,-2f,0f})
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString4().getArray())
                .setFontStyle(new FontStyle().setUSE("CenterJustify")))
              .setAppearance(new Appearance().setUSE("TextMaterial")))))
        .addChild(new Transform().setTranslation(new float[] {3f,0f,0f})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .addComments("note 0x000000 = 0")
              .setTexture(new PixelTexture().setDEF("ThreeComponents").setImage(new int[] {2,4,3,16711680,65280,0,0,0,0,16777215,16776960})))
            .setGeometry(new Box()))
          .addChild(new Transform().setTranslation(new float[] {0f,-2f,0f})
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString5().getArray())
                .setFontStyle(new FontStyle().setUSE("CenterJustify")))
              .setAppearance(new Appearance().setUSE("TextMaterial")))))
        .addChild(new Transform().setTranslation(new float[] {6f,0f,0f})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .addComments("Erroneous value in book: 1 0 0 255, 0 1 0 255, 0 0 1 255, 1 0 0 127, 0 1 0 127, 0 0 1 127")
              .setTexture(new PixelTexture().setDEF("FourComponents").setImage(new int[] {3,2,4,0xFF0000FF,16711935,65535,0xFF00007F,16711807,65407})))
            .setGeometry(new Box()))
          .addChild(new Transform().setTranslation(new float[] {0f,-2f,0f})
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString6().getArray())
                .setFontStyle(new FontStyle().setUSE("CenterJustify")))
              .setAppearance(new Appearance().setUSE("TextMaterial")))))
        .addComments("Background from PixelTextureBW.x3d")
        .addChild(new Transform().setTranslation(new float[] {0f,6f,-2f})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setTexture(new PixelTexture().setImage(new int[] {8,8,1,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204})))
            .setGeometry(new Box().setSize(new float[] {16f,16f,0.1f})))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.1000f,0.1000f,0.4000f});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"0"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"1"});
  }
}
protected class MFString4 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"2"});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"3"});
  }
}
protected class MFString6 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"4"});
  }
}
}
