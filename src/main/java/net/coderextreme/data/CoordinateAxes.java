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
public class CoordinateAxes {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new CoordinateAxes().initialize().toFileJSON("../data/CoordinateAxes.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("CoordinateAxis.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("Unknown, see X3D Resources Archives"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/CoordinateAxis.x3d"))
        .addMeta(new metaObject().setName("description").setContent("a box")))
      .setScene(new SceneObject()
        .addChild(new CollisionObject().setDEF("DoNotCollideWithVisualizationWidget")
          .addComments(new CommentsBlock("Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph."))
          .addComments(new CommentsBlock("This NavigationInfo allows examine mode and will be overridden by any parent scene."))
          .addComments(new CommentsBlock("Each arrow goes from +1m to -1m to allow linear scaling to fit a scene"))
          .addComments(new CommentsBlock("Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user"))
          .addChild(new GroupObject()
            .addComments(new CommentsBlock("Vertical Y arrow and label"))
            .addChild(new GroupObject().setDEF("ArrowGreen")
              .addChild(new ShapeObject()
                .setGeometry(new CylinderObject().setDEF("ArrowCylinder").setRadius(0.025f).setTop(false))
                .setAppearance(new AppearanceObject().setDEF("Green")
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.1f,0.6f,0.1f}).setEmissiveColor(new float[] {0.05f,0.2f,0.05f}))))
              .addChild(new TransformObject().setTranslation(new float[] {0f,1f,0f})
                .addChild(new ShapeObject()
                  .setGeometry(new ConeObject().setDEF("ArrowCone").setBottomRadius(0.05f).setHeight(0.1f))
                  .setAppearance(new AppearanceObject().setUSE("Green")))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,1.08f,0f})
              .addChild(new BillboardObject()
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject().setDEF("LABEL_APPEARANCE")
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,0.3f}).setEmissiveColor(new float[] {0.33f,0.33f,0.1f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString0().getArray()))
                    .setFontStyle(new FontStyleObject().setDEF("LABEL_FONT").setFamily(new MFStringObject(new MFString1().getArray())).setJustify(new MFStringObject(new MFString2().getArray())).setSize(0.2f)))))))
          .addChild(new TransformObject().setRotation(new float[] {0f,0f,1f,-1.57079f})
            .addComments(new CommentsBlock("Horizontal X arrow and label"))
            .addChild(new GroupObject()
              .addChild(new GroupObject().setDEF("ArrowRed")
                .addChild(new ShapeObject()
                  .setGeometry(new CylinderObject().setUSE("ArrowCylinder"))
                  .setAppearance(new AppearanceObject().setDEF("Red")
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.7f,0.1f,0.1f}).setEmissiveColor(new float[] {0.33f,0f,0f}))))
                .addChild(new TransformObject().setTranslation(new float[] {0f,1f,0f})
                  .addChild(new ShapeObject()
                    .setGeometry(new ConeObject().setUSE("ArrowCone"))
                    .setAppearance(new AppearanceObject().setUSE("Red")))))
              .addChild(new TransformObject().setRotation(new float[] {0f,0f,1f,1.57079f}).setTranslation(new float[] {0.072f,1.1f,0f})
                .addComments(new CommentsBlock("note label rotated back to original coordinate frame"))
                .addChild(new BillboardObject()
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject().setUSE("LABEL_APPEARANCE"))
                    .setGeometry(new TextObject().setString(new MFStringObject(new MFString3().getArray()))
                      .setFontStyle(new FontStyleObject().setUSE("LABEL_FONT"))))))))
          .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,1.57079f})
            .addComments(new CommentsBlock("Perpendicular Z arrow and label, note right-hand rule"))
            .addChild(new GroupObject()
              .addChild(new GroupObject().setDEF("ArrowBlue")
                .addChild(new ShapeObject()
                  .setGeometry(new CylinderObject().setUSE("ArrowCylinder"))
                  .setAppearance(new AppearanceObject().setDEF("Blue")
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.3f,0.3f,1f}).setEmissiveColor(new float[] {0.1f,0.1f,0.33f}))))
                .addChild(new TransformObject().setTranslation(new float[] {0f,1f,0f})
                  .addChild(new ShapeObject()
                    .setGeometry(new ConeObject().setUSE("ArrowCone"))
                    .setAppearance(new AppearanceObject().setUSE("Blue")))))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,-1.57079f}).setTranslation(new float[] {0f,1.1f,0.072f})
                .addComments(new CommentsBlock("note label rotated back to original coordinate frame"))
                .addChild(new BillboardObject()
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject().setUSE("LABEL_APPEARANCE"))
                    .setGeometry(new TextObject().setString(new MFStringObject(new MFString4().getArray()))
                      .setFontStyle(new FontStyleObject().setUSE("LABEL_FONT"))))))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Y".replaceAll("\"", "\\\"")});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SANS".replaceAll("\"", "\\\"")});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE".replaceAll("\"", "\\\""),"MIDDLE".replaceAll("\"", "\\\"")});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"X".replaceAll("\"", "\\\"")});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Z".replaceAll("\"", "\\\"")});
  }
}
}
