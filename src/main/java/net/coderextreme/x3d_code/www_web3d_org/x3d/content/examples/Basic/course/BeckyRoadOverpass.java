package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.course;
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
public class BeckyRoadOverpass {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new BeckyRoadOverpass().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/course/BeckyRoadOverpass.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interchange").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("BeckyRoadOverpass.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("Becky and Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("10 September 2000"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("description").setContent("Sixth grade project to build a highway overpass."))
        .addMeta(new metaObject().setName("Image").setContent("BeckyRoadOverpass.png"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/course/BeckyRoadOverpass.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("BeckyRoadOverpass.x3d"))
        .addChild(new ViewpointObject().setDescription("Front view, 4 inches above ground").setPosition(new float[] {0f,4f,20f}))
        .addChild(new ViewpointObject().setDescription("Side view, 6 inches above ground").setOrientation(new float[] {0f,1f,0f,1.57f}).setPosition(new float[] {25f,6f,0f}))
        .addChild(new ViewpointObject().setDescription("Top-down view, 20 inches above").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new float[] {0f,28f,0f}))
        .addChild(new BackgroundObject().setGroundAngle(new MFFloatObject(new MFFloat0().getArray())).setGroundColor(new MFColorObject(new MFColor1().getArray())).setSkyAngle(new MFFloatObject(new MFFloat2().getArray())).setSkyColor(new MFColorObject(new MFColor3().getArray())))
        .addComments(new CommentsBlock("Upper road surface is elevated y=8 inches in the air"))
        .addChild(new TransformObject().setTranslation(new float[] {0f,8f,0f})
          .addChild(new GroupObject().setDEF("Road")
            .addChild(new ShapeObject()
              .addComments(new CommentsBlock("Road model is x=20 inches long by z=7 inches wide, with posterboard y=0.25 inches thick"))
              .addComments(new CommentsBlock("Road surface color is grey"))
              .setGeometry(new BoxObject().setSize(new float[] {20f,0.2f,7f}))
              .setAppearance(new AppearanceObject().setDEF("GreyAppearance")
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.4f,0.4f,0.4f}))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.2f,0.3f})
              .addChild(new ShapeObject().setDEF("WhiteLine")
                .setGeometry(new BoxObject().setSize(new float[] {20f,0.01f,0.4f}))
                .setAppearance(new AppearanceObject().setDEF("WhiteAppearance")
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,1f}).setEmissiveColor(new float[] {0.5f,0.5f,0.5f})))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.2f,-0.3f})
              .addChild(new ShapeObject().setUSE("WhiteLine")))))
        .addComments(new CommentsBlock("Lower road is on the ground at y=0 inches, rotated 90 degrees around y axis"))
        .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,1.57f}).setTranslation(new float[] {0f,0.1f,0f})
          .addChild(new GroupObject().setUSE("Road")))
        .addComments(new CommentsBlock("Vertical center of y=8 inch tall pillar is y=4 inches in the air"))
        .addComments(new CommentsBlock("Center of each column matches top-down diagram"))
        .addChild(new TransformObject().setDEF("ColumnA").setTranslation(new float[] {-6f,4f,-2f})
          .addChild(new ShapeObject().setDEF("Column")
            .setGeometry(new CylinderObject().setHeight(8f))
            .setAppearance(new AppearanceObject().setUSE("GreyAppearance"))))
        .addChild(new TransformObject().setDEF("ColumnB").setTranslation(new float[] {6f,4f,-2f})
          .addChild(new ShapeObject().setUSE("Column")))
        .addChild(new TransformObject().setDEF("ColumnC").setTranslation(new float[] {-6f,4f,2f})
          .addChild(new ShapeObject().setUSE("Column")))
        .addChild(new TransformObject().setDEF("ColumnD").setTranslation(new float[] {6f,4f,2f})
          .addChild(new ShapeObject().setUSE("Column"))))      ;
    return X3D0;
    }
protected class MFFloat0 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1.309f,1.570796f});
  }
}
protected class MFColor1 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.1f,0.1f,0f,0.4f,0.25f,0.2f,0.6f,0.6f,0.6f});
  }
}
protected class MFFloat2 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1.309f,1.571f});
  }
}
protected class MFColor3 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.2f,0.7f,0f,0.5f,1f,1f,1f,1f});
  }
}
}
