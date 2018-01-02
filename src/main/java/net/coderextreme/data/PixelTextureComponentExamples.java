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
public class PixelTextureComponentExamples {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new PixelTextureComponentExamples().initialize().toFileJSON("../data/PixelTextureComponentExamples.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("PixelTextureComponentExamples.x3d"))
        .addMeta(new metaObject().setName("description").setContent("This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18."))
        .addMeta(new metaObject().setName("creator").setContent("Leonard Daly and Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("25 August 2008"))
        .addMeta(new metaObject().setName("modified").setContent("7 January 2014"))
        .addMeta(new metaObject().setName("reference").setContent("http://X3dGraphics.com"))
        .addMeta(new metaObject().setName("reference").setContent("X3D for Web Authors, Table 5.18"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMeta(new metaObject().setName("rights").setContent("Copyright (c) 2006, Daly Realism and Don Brutzman"))
        .addMeta(new metaObject().setName("subject").setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
        .addMeta(new metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new MFColor0().getArray())))
        .addChild(new ViewpointObject().setDescription("Table 5.18 SFImage component examples").setPosition(new float[] {0f,0f,14f}))
        .addChild(new TransformObject().setTranslation(new float[] {-6f,0f,0f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setTexture(new PixelTextureObject().setDEF("ZeroComponents")))
            .setGeometry(new BoxObject()))
          .addChild(new TransformObject().setTranslation(new float[] {0f,-2f,0f})
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString1().getArray()))
                .setFontStyle(new FontStyleObject().setDEF("CenterJustify").setJustify(new MFStringObject(new MFString2().getArray()))))
              .setAppearance(new AppearanceObject().setDEF("TextMaterial")
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,1f}))))))
        .addChild(new TransformObject().setTranslation(new float[] {-3f,0f,0f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setTexture(new PixelTextureObject().setDEF("OneComponent").setImage(new int[] {1,2,1,255,0})))
            .setGeometry(new BoxObject()))
          .addChild(new TransformObject().setTranslation(new float[] {0f,-2f,0f})
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString3().getArray()))
                .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
              .setAppearance(new AppearanceObject().setUSE("TextMaterial")))))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setTexture(new PixelTextureObject().setDEF("TwoComponents").setImage(new int[] {2,1,2,52479,8823})))
            .setGeometry(new BoxObject()))
          .addChild(new TransformObject().setTranslation(new float[] {0f,-2f,0f})
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString4().getArray()))
                .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
              .setAppearance(new AppearanceObject().setUSE("TextMaterial")))))
        .addChild(new TransformObject().setTranslation(new float[] {3f,0f,0f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .addComments(new CommentsBlock("note 0x000000 = 0"))
              .setTexture(new PixelTextureObject().setDEF("ThreeComponents").setImage(new int[] {2,4,3,16711680,65280,0,0,0,0,16777215,16776960})))
            .setGeometry(new BoxObject()))
          .addChild(new TransformObject().setTranslation(new float[] {0f,-2f,0f})
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString5().getArray()))
                .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
              .setAppearance(new AppearanceObject().setUSE("TextMaterial")))))
        .addChild(new TransformObject().setTranslation(new float[] {6f,0f,0f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .addComments(new CommentsBlock("Erroneous value in book: 1 0 0 255, 0 1 0 255, 0 0 1 255, 1 0 0 127, 0 1 0 127, 0 0 1 127"))
              .setTexture(new PixelTextureObject().setDEF("FourComponents").setImage(new int[] {3,2,4,0xFF0000FF,16711935,65535,0xFF00007F,16711807,65407})))
            .setGeometry(new BoxObject()))
          .addChild(new TransformObject().setTranslation(new float[] {0f,-2f,0f})
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString6().getArray()))
                .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
              .setAppearance(new AppearanceObject().setUSE("TextMaterial")))))
        .addComments(new CommentsBlock("Background from PixelTextureBW.x3d"))
        .addChild(new TransformObject().setTranslation(new float[] {0f,6f,-2f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setTexture(new PixelTextureObject().setImage(new int[] {8,8,1,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204})))
            .setGeometry(new BoxObject().setSize(new float[] {16f,16f,0.1f})))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.1f,0.1f,0.4f});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"0".replaceAll("\"", "\\\"")});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE".replaceAll("\"", "\\\""),"MIDDLE".replaceAll("\"", "\\\"")});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"1".replaceAll("\"", "\\\"")});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"2".replaceAll("\"", "\\\"")});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"3".replaceAll("\"", "\\\"")});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"4".replaceAll("\"", "\\\"")});
  }
}
}
