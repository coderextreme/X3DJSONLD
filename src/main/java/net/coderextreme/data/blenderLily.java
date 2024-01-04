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
public class blenderLily {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new blenderLily().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/blenderLily.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("filename").setContent("blenderLily.x3d"))
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
        .addChild(new Transform().setDEF("Light_001_TRANSFORM").setTranslation(new float[] {4.07625f,1.00545f,5.90386f}).setRotation(new float[] {0.20594f,0.33152f,0.9207f,1.92627f})
          .addChild(new PointLight().setDEF("LA_Light_001").setLocation(new float[] {2.980232e-8f,-4.023314e-7f,1.043081e-7f}).setRadius(29.99998f)))
        .addChild(new Transform().setDEF("Camera_001_TRANSFORM").setTranslation(new float[] {7.35889f,-6.92579f,4.95831f}).setRotation(new float[] {0.77344f,0.33383f,0.53884f,1.35072f})
          .addChild(new Viewpoint().setDEF("CA_Camera_001").setPosition(new float[] {-2.421449e-7f,4.991889e-7f,-7.152557e-7f}).setFieldOfView(0.6911112f)))
        .addChild(new Transform().setDEF("World_TRANSFORM").setRotation(new float[] {1f,0f,0f,1.5708f}).setScale(new float[] {0.01f,0.01f,0.01f})
          .addChild(new Transform().setDEF("World_001_TRANSFORM")
            .addChild(new Transform().setDEF("lily_7_3_animate_TRANSFORM")
              .addChild(new Transform().setDEF("CINEMA_4D_Editor_TRANSFORM").setTranslation(new float[] {-2.3832f,26.84083f,170.6878f}).setRotation(new float[] {0.03965f,0.99809f,0.04742f,1.39469f})
                .addChild(new Transform().setDEF("CINEMA_4D_Editor_001_TRANSFORM").setTranslation(new float[] {0.00001f,0f,0f}).setRotation(new float[] {0f,-1f,0f,3.14159f})
                  .addChild(new Viewpoint().setDEF("CA_CINEMA_4D_Editor_001").setPosition(new float[] {-0.00002747774f,0.000004980713f,-0.000003484735f}).setFieldOfView(0.9272952f))))
              .addChild(new Transform().setDEF("node_t_Lily_RV7_Shape_TRANSFORM")
                .addChild(new Transform().setDEF("humanoid_root_TRANSFORM").setTranslation(new float[] {0f,-0.91969f,0f}).setRotation(new float[] {0f,-1f,0f,1.5708f})
                  .addChild(new HAnimHumanoid("humanoid_root_TRANSFORM").setDEF("hanim_armature_humanoid_root").setName("armature_humanoid_root"))))))
          .addChild(new Transform().setDEF("Environment_TRANSFORM")
            .addChild(new Transform().setDEF("Sky_TRANSFORM").setTranslation(new float[] {0f,305f,0f}).setRotation(new float[] {1f,0f,0f,3.14159f})
              .addChild(new PointLight().setDEF("LA_Sky").setIntensity(0.005714286f).setLocation(new float[] {-9.59824e-19f,-0.00003051758f,-9.094947e-12f}).setRadius(0.25f)))
            .addChild(new Transform().setDEF("DistantLight_TRANSFORM").setTranslation(new float[] {0f,305f,0f}).setRotation(new float[] {-0.99144f,0.13053f,0f,3.14159f})
              .addChild(new DirectionalLight().setDEF("LA_DistantLight").setGlobal(true).setIntensity(0.005714286f).setAmbientIntensity(0.07f).setDirection(new float[] {5.329071e-15f,-3.552714e-15f,-1f})))))
        .addChild(new Transform().setDEF("SkinnedMeshes_TRANSFORM").setRotation(new float[] {1f,0f,0f,1.5708f}).setScale(new float[] {0.01f,0.01f,0.01f})))      ;
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
