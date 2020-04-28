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
public class ModelOrientation {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new ModelOrientation().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/course/ModelOrientation.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interactive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("ModelOrientation.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("Jeffrey Weekley"))
        .addMeta(new metaObject().setName("created").setContent("15 July 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("description").setContent("X Y Z axis arrows and labels of X3D coordinate system to illustrate default entity center of gravity at 0 0 0, with default nose orientation pointing along the +X-axis. Ground vehicles have their position raised to allow bottom to touch the ground."))
        .addMeta(new metaObject().setName("Image").setContent("ModelOrientation.jpg"))
        .addMeta(new metaObject().setName("reference").setContent("../X3dSceneAuthoringHints.html#CoordinateSystems"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/course/ModelOrientation.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("ModelOrientation.x3d"))
        .addChild(new ViewpointObject().setDescription("Default model orientation: nose +X axis, up +Y axis, right-hand side +Z axis"))
        .addComments(new CommentsBlock("Each arrow goes from +1m to -1m to allow linear scaling to fit a scene"))
        .addComments(new CommentsBlock("Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user"))
        .addChild(new TransformObject().setScale(new float[] {2f,2f,2f})
          .addChild(new InlineObject().setDEF("CoordinateAxes").setUrl(new MFStringObject(new MFString0().getArray()))))
        .addChild(new TransformObject().setScale(new float[] {1.2f,1.6f,1.6f})
          .addChild(new TransformObject().setRotation(new float[] {0f,0f,-1f,1.57f}).setScale(new float[] {0.25f,0.25f,0.25f})
            .addChild(new ShapeObject()
              .setGeometry(new CylinderObject().setHeight(8f).setRadius(0.4425f).setTop(false))
              .setAppearance(new AppearanceObject().setDEF("Cammi")
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.45f,0.55f,0.55f}))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,4.9f,0f})
              .addChild(new ShapeObject()
                .setGeometry(new ConeObject().setBottomRadius(0.4425f).setHeight(1.8f))
                .setAppearance(new AppearanceObject().setUSE("Cammi"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,-4.1f,0f})
              .addChild(new ShapeObject()
                .setGeometry(new ConeObject().setBottomRadius(0.2f).setHeight(0.66f))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.15f,0.15f,0.15f}).setShininess(0.66f).setSpecularColor(new float[] {0.22f,0.22f,0.22f})))))
            .addChild(new TransformObject().setDEF("TailFin").setTranslation(new float[] {0.175f,-4.5f,0f})
              .addChild(new ShapeObject()
                .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321().getArray())).setSolid(false)
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f2().getArray()))))
                .setAppearance(new AppearanceObject().setUSE("Cammi"))))
            .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,1.57f})
              .addChild(new TransformObject().setUSE("TailFin")))
            .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,3.14f})
              .addChild(new TransformObject().setUSE("TailFin")))
            .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-1.57f})
              .addChild(new TransformObject().setUSE("TailFin"))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"});
  }
}
protected class MFInt321 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,-1});
  }
}
protected class MFVec3f2 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0.4f,0f,0.25f,0f,0f,0.75f,0f,0f,0.75f,1f,0f,0f,1.65f,0f,0f,0.4f,0f});
  }
}
}
