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
import java.util.ArrayList;
import java.util.List;
import net.coderextreme.X3DRoots;
public class MainStage implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new MainStage().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/MainStage.new.java.x3d");
    model.toFileJSON("../data/MainStage.new.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
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
        .addChild(new DirectionalLight().setAmbientIntensity(1).setDirection(new double[] {-0.5,-0.5,-0.5}).setGlobal(true))
        .addChild(new DirectionalLight().setAmbientIntensity(1).setDirection(new double[] {-1,-1,-1}).setGlobal(true))
        .addChild(new DirectionalLight().setAmbientIntensity(1).setDirection(new double[] {1,1,-1}).setGlobal(true).setIntensity(0.5))
        .addChild(new Viewpoint().setDEF("Scene_StageFrontViewFar").setDescription("hanim_Stage Front View").setOrientation(new double[] {1,0,0,-0.449999988}).setPosition(new double[] {0,4,10}))
        .addChild(new Viewpoint().setDEF("Scene_InclinedView").setDescription("hanim_Inclined View").setOrientation(new double[] {-0.112999998,0.992999971,0.034699999,0.671000004}).setPosition(new double[] {2.619999886,1.049999952,4.059999943}))
        .addChild(new Viewpoint().setDEF("Scene_StageFrontView").setDescription("hanim_Stage Front View").setPosition(new double[] {0,1,5}))
        .addChild(new Viewpoint().setDEF("Scene_FeetStageBottomView").setDescription("hanim_feet View").setOrientation(new double[] {1,0,0,1.570000052}).setPosition(new double[] {0,-10,0}))
        .addChild(new Viewpoint().setDEF("Scene_HeadTopView").setDescription("hanim_Head Top View").setOrientation(new double[] {1,0,0,-1.570000052}).setPosition(new double[] {0,15,0}))
        .addChild(new Viewpoint().setDEF("Scene_TopFrontCloseView").setDescription("hanim_Head Top View").setOrientation(new double[] {1,0,0,-1.100000024}).setPosition(new double[] {0,8,3}))
        .addChild(new Group().setDEF("HAnimStage")
          .addChild(new Transform().setDEF("cordsysfloor").setScale(new double[] {0.174999997,0.174999997,0.174999997})
            .addChild(new Inline().setUrl(new MFString0().getArray())))
          .addChild(new Transform().setDEF("StageGeometry").setScale(new double[] {1,0.01,1}).setTranslation(new double[] {0,-0.01,0})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setTransparency(0.6)))
              .setGeometry(new Box().setSize(new double[] {9,1,9})))
            .addChild(new Transform().setDEF("Circle0")
              .addChild(new Shape()
                .setAppearance(new Appearance().setDEF("LineColor")
                  .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(new double[] {0.699999988,0,0.899999976}).setEmissiveColor(new double[] {0.449999988,0.449999988,1}).setShininess(1).setSpecularColor(new double[] {0,0,1})))
                .setGeometry(new IndexedLineSet().setDEF("Orbit1").setCoordIndex(new MFInt321().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f2().getArray())))))
            .addChild(new Transform().setDEF("Circle1").setScale(new double[] {0.5,1,0.5})
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("LineColor"))
                .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))
            .addChild(new Transform().setDEF("Circle2").setScale(new double[] {0.25,1,0.25})
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("LineColor"))
                .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))
            .addChild(new Transform().setDEF("Circle3").setScale(new double[] {2,1,2})
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("LineColor"))
                .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))
            .addChild(new Transform().setDEF("Circle4").setScale(new double[] {3,1,3})
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("LineColor"))
                .setGeometry(new IndexedLineSet().setUSE("Orbit1")))))))      ;
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JointCoordinateAxes.x3dv"});
  }
}
private class MFInt321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1});
  }
}
private class MFVec3f2 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {1,0,0,0.995000005,0,-0.104999997,0.978999972,0,-0.208000004,0.950999975,0,-0.308999985,0.913999975,0,-0.407000005,0.865999997,0,-0.5,0.809000015,0,-0.588,0.742999971,0,-0.66900003,0.66900003,0,-0.742999971,0.588,0,-0.809000015,0.5,0,-0.865999997,0.407000005,0,-0.913999975,0.308999985,0,-0.950999975,0.208000004,0,-0.977999985,0.104999997,0,-0.995000005,0,0,-1,-0.104999997,0,-0.994521976,-0.208000004,0,-0.977999985,-0.308999985,0,-0.950999975,-0.407000005,0,-0.913999975,-0.5,0,-0.865999997,-0.588,0,-0.809000015,-0.66900003,0,-0.742999971,-0.742999971,0,-0.66900003,-0.809000015,0,-0.588,-0.865999997,0,-0.5,-0.913999975,0,-0.407000005,-0.950999975,0,-0.308999985,-0.977999985,0,-0.208000004,-0.995000005,0,-0.104999997,-1,0,0,-0.995000005,0,0.104999997,-0.977999985,0,0.208000004,-0.950999975,0,0.308999985,-0.913999975,0,0.407000005,-0.865999997,0,0.5,-0.809000015,0,0.588,-0.742999971,0,0.66900003,-0.66900003,0,0.742999971,-0.588,0,0.809000015,-0.5,0,0.865999997,-0.407000005,0,0.913999975,-0.308999985,0,0.950999975,-0.208000004,0,0.977999985,-0.104999997,0,0.995000005,0,0,1,0.104999997,0,0.995000005,0.208000004,0,0.977999985,0.308999985,0,0.950999975,0.407000005,0,0.913999975,0.5,0,0.865999997,0.588,0,0.809000015,0.66900003,0,0.742999971,0.742999971,0,0.66900003,0.809000015,0,0.588,0.865999997,0,0.5,0.913999975,0,0.407000005,0.950999975,0,0.308999985,0.977999985,0,0.208000004,0.995000005,0,0.104000002,1,0,0});
  }
}
}
