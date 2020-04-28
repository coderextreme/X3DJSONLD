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
public class Geometry2dComponentExamples {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new Geometry2dComponentExamples().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/Geometry2dComponentExamples.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Geometry2D").setLevel(2))
        .addMeta(new metaObject().setName("title").setContent("Geometry2dComponentExamples.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Examples showing native use of X3D Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D), implemented as prototypes for backwards compatibility with VRML 97. Also provides Unfilled ProtoInstance versions of some nodes since FillProperties not possible in VRML 97. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs)."))
        .addMeta(new metaObject().setName("creator").setContent("Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis"))
        .addMeta(new metaObject().setName("created").setContent("16 November 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("Image").setContent("Geometry2dComponentExamplesBsContact.png"))
        .addMeta(new metaObject().setName("Image").setContent("Geometry2dComponentExamplesCobweb.png"))
        .addMeta(new metaObject().setName("Image").setContent("Geometry2dComponentExamplesFreeWRL.png"))
        .addMeta(new metaObject().setName("Image").setContent("Geometry2dComponentExamplesH3dViewer.png"))
        .addMeta(new metaObject().setName("Image").setContent("Geometry2dComponentExamplesInstantReality.png"))
        .addMeta(new metaObject().setName("Image").setContent("Geometry2dComponentExamplesOctagaVS.png"))
        .addMeta(new metaObject().setName("Image").setContent("Geometry2dComponentExamplesView3dScene.png"))
        .addMeta(new metaObject().setName("Image").setContent("Geometry2dComponentExamplesX3DOM.png"))
        .addMeta(new metaObject().setName("reference").setContent("Geometry2dComponentExternProtos.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("Geometry2dComponentPrototypes.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html"))
        .addMeta(new metaObject().setName("subject").setContent("Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D)"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExamples.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("===================="))
        .addChild(new WorldInfoObject().setTitle("Geometry2dComponentExamples.x3d"))
        .addChild(new BackgroundObject().setGroundColor(new MFColorObject(new MFColor0().getArray())).setSkyColor(new MFColorObject(new MFColor1().getArray())))
        .addChild(new ViewpointObject().setDescription("Geometry2D Component Examples").setPosition(new float[] {0f,0f,12f}))
        .addComments(new CommentsBlock("===================="))
        .addComments(new CommentsBlock("Top row"))
        .addChild(new TransformObject().setTranslation(new float[] {-6f,2f,0f})
          .addChild(new TouchSensorObject().setDescription("ArcClose2D"))
          .addChild(new ShapeObject()
            .setGeometry(new ArcClose2DObject().setEndAngle(3f).setStartAngle(0.7f))
            .addComments(new CommentsBlock("default radius='1'"))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,1f}).setEmissiveColor(new float[] {0f,0f,1f})))))
        .addChild(new TransformObject().setTranslation(new float[] {-2f,2f,0f})
          .addChild(new TouchSensorObject().setDescription("Arc2D"))
          .addChild(new ShapeObject()
            .setGeometry(new Arc2DObject())
            .addComments(new CommentsBlock("default radius='1' startAngle='0'"))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,0f}))))
          .addChild(new TransformObject().setDEF("TransparentBackdropForTouchSensor").setTranslation(new float[] {0f,0f,-0.5f})
            .addChild(new ShapeObject()
              .setGeometry(new Rectangle2DObject())
              .addComments(new CommentsBlock("default"))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f}).setTransparency(1f))))))
        .addChild(new TransformObject().setTranslation(new float[] {2f,2f,0f})
          .addChild(new TouchSensorObject().setDescription("Circle2D"))
          .addChild(new ShapeObject()
            .setGeometry(new Circle2DObject())
            .addComments(new CommentsBlock("default radius='1'"))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,0f,0f}))))
          .addChild(new TransformObject().setUSE("TransparentBackdropForTouchSensor")))
        .addChild(new TransformObject().setTranslation(new float[] {6f,2f,0f})
          .addChild(new TouchSensorObject().setDescription("Disk2D"))
          .addChild(new ShapeObject()
            .setGeometry(new Disk2DObject().setInnerRadius(0.5f))
            .addComments(new CommentsBlock("default outerRadius='1'"))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.5f,1f,1f})))))
        .addComments(new CommentsBlock("===================="))
        .addComments(new CommentsBlock("Bottom row"))
        .addChild(new TransformObject().setTranslation(new float[] {-6f,-2f,0f})
          .addChild(new TouchSensorObject().setDescription("Rectangle2D"))
          .addChild(new ShapeObject()
            .setGeometry(new Rectangle2DObject().setSize(new float[] {1f,2f}))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))))
        .addChild(new TransformObject().setTranslation(new float[] {-2f,-2f,0f})
          .addChild(new TouchSensorObject().setDescription("Polyline2D"))
          .addChild(new ShapeObject()
            .setGeometry(new Polyline2DObject().setLineSegments(new MFVec2fObject(new MFVec2f2().getArray())))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,0f}).setEmissiveColor(new float[] {1f,0.5f,1f}))))
          .addChild(new TransformObject().setUSE("TransparentBackdropForTouchSensor")))
        .addChild(new TransformObject().setTranslation(new float[] {2f,-2f,0f})
          .addChild(new TouchSensorObject().setDescription("Polypoint2D"))
          .addChild(new ShapeObject()
            .setGeometry(new Polypoint2DObject().setPoint(new MFVec2fObject(new MFVec2f3().getArray())))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f}))))
          .addChild(new TransformObject().setTranslation(new float[] {0.1f,0.4f,-0.5f})
            .addChild(new ShapeObject()
              .setGeometry(new Rectangle2DObject().setDEF("BackDrop").setSize(new float[] {2.8f,2f}))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,0f}))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,-0.15f,0.2f})
              .addChild(new ShapeObject()
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString4().getArray()))
                  .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString5().getArray())).setSize(0.25f).setStyle("BOLD")))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject()))))))
        .addChild(new TransformObject().setTranslation(new float[] {6f,-2f,0f})
          .addChild(new TouchSensorObject().setDescription("TriangleSet2D"))
          .addChild(new ShapeObject()
            .setGeometry(new TriangleSet2DObject().setVertices(new MFVec2fObject(new MFVec2f6().getArray())))
            .setAppearance(new AppearanceObject()
              .setFillProperties(new FillPropertiesObject().setDEF("TestFillProperties"))
              .setLineProperties(new LinePropertiesObject().setDEF("TestLineProperties").setLinewidthScaleFactor(1f)
                .setMetadata(new MetadataStringObject().setName("test LineProperties metadata child").setDEF("TestLinePropertiesMetaData")))
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,1f,0f}))))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.3f,0.3f,0.3f});
  }
}
protected class MFColor1 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.3f,0.3f,0.3f});
  }
}
protected class MFVec2f2 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {-1f,0f,-0.5f,1f,0f,0f,0.5f,1f,1f,0f});
  }
}
protected class MFVec2f3 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {-1f,0f,-0.5f,1f,0f,0f,0.5f,1f,1f,0f});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"PolyPoint2D","5 points"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFVec2f6 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0f,0f,1f,1f,-1f,1f,0f,0f,1f,-0.5f,1f,0.5f,0f,0f,-2f,-1f,-1f,-2f});
  }
}
}
