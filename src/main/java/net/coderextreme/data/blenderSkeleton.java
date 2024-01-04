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
public class blenderSkeleton {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new blenderSkeleton().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/blenderSkeleton.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("filename").setContent("blenderSkeleton.x3d"))
        .addMeta(new meta().setName("copyright").setContent("2023"))
        .addMeta(new meta().setName("reference").setContent("http://www.web3D.org"))
        .addMeta(new meta().setName("generator").setContent("Blender 3.6.4"))
        .addComponent(new component().setName("HAnim").setLevel(3)))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addChild(new Background().setDEF("WO_World").setSkyColor(new MFColor0().getArray()).setGroundColor(new MFColor1().getArray()))
        .addChild(new Transform()
          .addChild(new Shape().setDEF("SiteShape")
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,1f})))
            .setGeometry(new Box().setSize(new float[] {0.05f,0.05f,0.05f}))))
        .addChild(new Transform()
          .addChild(new Shape().setDEF("JointShape")
            .setAppearance(new Appearance().setDEF("JointAppearance")
              .setMaterial(new Material().setDiffuseColor(new float[] {1f,0.5f,0f}).setTransparency(0.5f)))
            .setGeometry(new Sphere().setRadius(0.06f))))
        .addChild(new Transform().setDEF("Light_TRANSFORM").setTranslation(new float[] {4.07625f,1.00545f,5.90386f}).setRotation(new float[] {0.20594f,0.33152f,0.9207f,1.92627f})
          .addChild(new PointLight().setDEF("LA_Light").setLocation(new float[] {-8.940697e-8f,-3.576279e-7f,4.61936e-7f}).setRadius(29.99998f)))
        .addChild(new Transform().setDEF("Camera_TRANSFORM").setTranslation(new float[] {7.35889f,-6.92579f,4.95831f}).setRotation(new float[] {0.77344f,0.33383f,0.53884f,1.35072f})
          .addChild(new Viewpoint().setDEF("CA_Camera").setPosition(new float[] {-3.92708e-7f,-2.123415e-7f,2.384186e-7f}).setFieldOfView(0.6911112f)))
        .addChild(new Transform().setDEF("Humanoid_collection_TRANSFORM")
          .addChild(new HAnimHumanoid("Humanoid_collection_TRANSFORM").setDEF("hanim_armature_Humanoid_collection").setName("armature_Humanoid_collection"))))      ;
    return X3D0;
    }
private class MFColor0 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.05087609f,0.05087609f,0.05087609f});
  }
}
private class MFColor1 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.05087609f,0.05087609f,0.05087609f});
  }
}
}
