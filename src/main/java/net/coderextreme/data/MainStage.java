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
public class MainStage {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new MainStage().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/MainStage.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("MainStage.x3d"))
        .addMeta(new meta().setName("description").setContent("Main stage for HAnim scene Winter and Spring."))
        .addMeta(new meta().setName("creator").setContent("Joe Williams"))
        .addMeta(new meta().setName("translator").setContent("Joe Williams and Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("25 May 2023"))
        .addMeta(new meta().setName("modified").setContent("27 May 2023"))
        .addMeta(new meta().setName("reference").setContent("originals/0MainStageScene0525.x3dv"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("MainStage.x3d"))
        .addChild(new NavigationInfo().setHeadlight(false))
        .addChild(new DirectionalLight().setAmbientIntensity(1f).setDirection(new float[] {-0.5f,-0.5f,-0.5f}).setGlobal(true))
        .addChild(new DirectionalLight().setAmbientIntensity(1f).setDirection(new float[] {-1f,-1f,-1f}).setGlobal(true))
        .addChild(new DirectionalLight().setAmbientIntensity(1f).setDirection(new float[] {1f,1f,-1f}).setGlobal(true).setIntensity(0.5f))
        .addChild(new Viewpoint().setDEF("Scene_StageFrontViewFar").setDescription("hanim_Stage Front View").setOrientation(new float[] {1f,0f,0f,-0.449999988f}).setPosition(new float[] {0f,4f,10f}))
        .addChild(new Viewpoint().setDEF("Scene_InclinedView").setDescription("hanim_Inclined View").setOrientation(new float[] {-0.112999998f,0.992999971f,0.034699999f,0.671000004f}).setPosition(new float[] {2.619999886f,1.049999952f,4.059999943f}))
        .addChild(new Viewpoint().setDEF("Scene_StageFrontView").setDescription("hanim_Stage Front View").setPosition(new float[] {0f,1f,5f}))
        .addChild(new Viewpoint().setDEF("Scene_FeetStageBottomView").setDescription("hanim_feet View").setOrientation(new float[] {1f,0f,0f,1.570000052f}).setPosition(new float[] {0f,-10f,0f}))
        .addChild(new Viewpoint().setDEF("Scene_HeadTopView").setDescription("hanim_Head Top View").setOrientation(new float[] {1f,0f,0f,-1.570000052f}).setPosition(new float[] {0f,15f,0f}))
        .addChild(new Viewpoint().setDEF("Scene_TopFrontCloseView").setDescription("hanim_Head Top View").setOrientation(new float[] {1f,0f,0f,-1.100000024f}).setPosition(new float[] {0f,8f,3f}))
        .addChild(new Group().setDEF("HAnimStage")
          .addChild(new Transform("HAnimStage").setDEF("cordsysfloor").setScale(new float[] {0.174999997f,0.174999997f,0.174999997f})
            .addChild(new Inline("cordsysfloor").setUrl(new MFString0().getArray())))
          .addChild(new Transform("HAnimStage").setDEF("StageGeometry").setScale(new float[] {1f,0.01f,1f}).setTranslation(new float[] {0f,-0.01f,0f})
            .addChild(new Shape("StageGeometry")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setTransparency(0.6f)))
              .setGeometry(new Box().setSize(new float[] {9f,1f,9f})))
            .addChild(new Transform("StageGeometry").setDEF("Circle0")
              .addChild(new Shape("Circle0")
                .setAppearance(new Appearance().setDEF("LineColor")
                  .setMaterial(new Material("LineColor").setAmbientIntensity(1f).setDiffuseColor(new float[] {0.699999988f,0f,0.899999976f}).setEmissiveColor(new float[] {0.449999988f,0.449999988f,1f}).setShininess(1f).setSpecularColor(new float[] {0f,0f,1f})))
                .setGeometry(new IndexedLineSet().setDEF("Orbit1").setCoordIndex(new MFInt321().getArray())
                  .setCoord(new Coordinate("Orbit1").setPoint(new MFVec3f2().getArray())))))
            .addChild(new Transform("StageGeometry").setDEF("Circle1").setScale(new float[] {0.5f,1f,0.5f})
              .addChild(new Shape("Circle1")
                .setAppearance(new Appearance().setUSE("LineColor"))
                .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))
            .addChild(new Transform("StageGeometry").setDEF("Circle2").setScale(new float[] {0.25f,1f,0.25f})
              .addChild(new Shape("Circle2")
                .setAppearance(new Appearance().setUSE("LineColor"))
                .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))
            .addChild(new Transform("StageGeometry").setDEF("Circle3").setScale(new float[] {2f,1f,2f})
              .addChild(new Shape("Circle3")
                .setAppearance(new Appearance().setUSE("LineColor"))
                .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))
            .addChild(new Transform("StageGeometry").setDEF("Circle4").setScale(new float[] {3f,1f,3f})
              .addChild(new Shape("Circle4")
                .setAppearance(new Appearance().setUSE("LineColor"))
                .setGeometry(new IndexedLineSet().setUSE("Orbit1")))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JointCoordinateAxes.x3dv"});
  }
}
protected class MFInt321 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1});
  }
}
protected class MFVec3f2 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1f,0f,0f,0.995000005f,0f,-0.104999997f,0.978999972f,0f,-0.208000004f,0.950999975f,0f,-0.308999985f,0.913999975f,0f,-0.407000005f,0.865999997f,0f,-0.5f,0.809000015f,0f,-0.588f,0.742999971f,0f,-0.66900003f,0.66900003f,0f,-0.742999971f,0.588f,0f,-0.809000015f,0.5f,0f,-0.865999997f,0.407000005f,0f,-0.913999975f,0.308999985f,0f,-0.950999975f,0.208000004f,0f,-0.977999985f,0.104999997f,0f,-0.995000005f,0f,0f,-1f,-0.104999997f,0f,-0.994521976f,-0.208000004f,0f,-0.977999985f,-0.308999985f,0f,-0.950999975f,-0.407000005f,0f,-0.913999975f,-0.5f,0f,-0.865999997f,-0.588f,0f,-0.809000015f,-0.66900003f,0f,-0.742999971f,-0.742999971f,0f,-0.66900003f,-0.809000015f,0f,-0.588f,-0.865999997f,0f,-0.5f,-0.913999975f,0f,-0.407000005f,-0.950999975f,0f,-0.308999985f,-0.977999985f,0f,-0.208000004f,-0.995000005f,0f,-0.104999997f,-1f,0f,0f,-0.995000005f,0f,0.104999997f,-0.977999985f,0f,0.208000004f,-0.950999975f,0f,0.308999985f,-0.913999975f,0f,0.407000005f,-0.865999997f,0f,0.5f,-0.809000015f,0f,0.588f,-0.742999971f,0f,0.66900003f,-0.66900003f,0f,0.742999971f,-0.588f,0f,0.809000015f,-0.5f,0f,0.865999997f,-0.407000005f,0f,0.913999975f,-0.308999985f,0f,0.950999975f,-0.208000004f,0f,0.977999985f,-0.104999997f,0f,0.995000005f,0f,0f,1f,0.104999997f,0f,0.995000005f,0.208000004f,0f,0.977999985f,0.308999985f,0f,0.950999975f,0.407000005f,0f,0.913999975f,0.5f,0f,0.865999997f,0.588f,0f,0.809000015f,0.66900003f,0f,0.742999971f,0.742999971f,0f,0.66900003f,0.809000015f,0f,0.588f,0.865999997f,0f,0.5f,0.913999975f,0f,0.407000005f,0.950999975f,0f,0.308999985f,0.977999985f,0f,0.208000004f,0.995000005f,0f,0.104000002f,1f,0f,0f});
  }
}
}