package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.CAD;
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
public class CatiaHubGasket {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new CatiaHubGasket().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/CAD/CatiaHubGasket.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("CatiaHubGasket.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Provide a Gasket part for use by CatiaHubAssemblyInline using CADAssembly and Inline nodes."))
        .addMeta(new metaObject().setName("creator").setContent("Hyokwang Lee, PartDB Co., Ltd."))
        .addMeta(new metaObject().setName("translator").setContent("Xj3D, http://www.xj3d.org"))
        .addMeta(new metaObject().setName("created").setContent("25 July 2012"))
        .addMeta(new metaObject().setName("modified").setContent("28 November 2019"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-X3DAbstractSpecification/Part01/components/CADGeometry.html"))
        .addMeta(new metaObject().setName("subject").setContent("X3D CAD CADInterchange profile"))
        .addMeta(new metaObject().setName("generator").setContent("CATIA V5 R18 and PartDB Converter with Xj3D"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubGasket.x3d"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setInfo(new MFStringObject(new MFString0().getArray())).setTitle("CatiaHubGasket.x3d"))
        .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"EXAMINE","WALK","FLY"}))
        .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new MFColor1().getArray())))
        .addChild(new ViewpointObject().setDescription("Main Viewpoint").setFieldOfView(0.471225f).setOrientation(new float[] {0.326678f,0.502925f,0.800218f,2.185925f}).setPosition(new float[] {0.411502f,0.183945f,0.216403f}))
        .addChild(new ViewpointObject().setDescription("Iso View").setFieldOfView(0.471225f).setOrientation(new float[] {0.187053f,0.451587f,0.872399f,2.448076f}).setPosition(new float[] {0.288675f,0.288675f,0.288675f}))
        .addChild(new ViewpointObject().setDescription("Front View").setFieldOfView(0.471225f).setOrientation(new float[] {0.57735f,0.57735f,0.57735f,2.094395f}).setPosition(new float[] {0.5f,0f,0f}))
        .addChild(new ViewpointObject().setDescription("Back View").setFieldOfView(0.471225f).setOrientation(new float[] {0.57735f,-0.57735f,-0.57735f,2.094395f}).setPosition(new float[] {-0.5f,0f,0f}))
        .addChild(new ViewpointObject().setDescription("Left View").setFieldOfView(0.471225f).setOrientation(new float[] {1f,-0.000173f,0.000173f,1.570796f}).setPosition(new float[] {0f,-0.5f,0f}))
        .addChild(new ViewpointObject().setDescription("Right View").setFieldOfView(0.471225f).setOrientation(new float[] {-0.000122f,-0.707107f,-0.707107f,3.141348f}).setPosition(new float[] {0f,0.5f,0f}))
        .addChild(new ViewpointObject().setDescription("Top View").setFieldOfView(0.471225f).setOrientation(new float[] {0f,0f,1f,1.570796f}).setPosition(new float[] {0f,0f,0.5f}))
        .addChild(new ViewpointObject().setDescription("Bottom View").setFieldOfView(0.471225f).setOrientation(new float[] {0.707107f,0.707107f,0f,3.141593f}).setPosition(new float[] {0f,0f,-0.5f}))
        .addChild(new TransformObject().setScale(new float[] {0.001f,0.001f,0.001f})
          .addChild(new GroupObject()
            .addChild(new GroupObject()
              .addChild(new GroupObject()
                .addChild(new GroupObject().setDEF("_025EA748")
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDEF("_material0").setDiffuseColor(new float[] {0f,1f,0f})))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt322().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f3().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f4().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt325().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f6().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f7().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt328().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f9().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f10().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3211().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f12().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f13().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3214().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f15().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3216().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f17().getArray())))))))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"File created using CATIA"});
  }
}
protected class MFColor1 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,1f,1f});
  }
}
protected class MFInt322 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1});
  }
}
protected class MFVec3f3 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-45f,0f,0f,-45f,0f,35f,-44.2338f,8.26873f,0f,-44.2338f,8.26873f,35f,-41.9613f,16.2559f,0f,-41.9613f,16.2559f,35f,-38.2598f,23.6894f,0f,-38.2598f,23.6894f,35f,-33.2554f,30.3163f,0f,-33.2554f,30.3163f,35f,-27.1186f,35.9108f,0f,-27.1186f,35.9108f,35f,-20.0582f,40.2823f,0f,-20.0582f,40.2823f,35f,-12.3148f,43.2822f,0f,-12.3148f,43.2822f,35f,-4.15208f,44.808f,0f,-4.15208f,44.808f,35f,4.15208f,44.808f,0f,4.15208f,44.808f,35f,12.3148f,43.2822f,0f,12.3148f,43.2822f,35f,20.0582f,40.2823f,0f,20.0582f,40.2823f,35f,27.1186f,35.9108f,0f,27.1186f,35.9108f,35f,33.2554f,30.3163f,0f,33.2554f,30.3163f,35f,38.2598f,23.6894f,0f,38.2598f,23.6894f,35f,41.9613f,16.2559f,0f,41.9613f,16.2559f,35f,44.2338f,8.26873f,0f,44.2338f,8.26873f,35f,45f,0f,0f,45f,0f,35f});
  }
}
protected class MFVec3f4 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.982978f,0.183721f,0f,-0.982978f,0.183721f,0f,-0.932482f,0.361217f,0f,-0.932482f,0.361217f,0f,-0.850228f,0.526414f,0f,-0.850228f,0.526414f,0f,-0.739036f,0.673666f,0f,-0.739036f,0.673666f,0f,-0.602619f,0.798029f,0f,-0.602619f,0.798029f,0f,-0.445723f,0.895171f,0f,-0.445723f,0.895171f,0f,-0.273659f,0.961827f,0f,-0.273659f,0.961827f,0f,-0.0922575f,0.995735f,0f,-0.0922575f,0.995735f,0f,0.0922575f,0.995735f,0f,0.0922575f,0.995735f,0f,0.273659f,0.961827f,0f,0.273659f,0.961827f,0f,0.445723f,0.895171f,0f,0.445723f,0.895171f,0f,0.602619f,0.798029f,0f,0.602619f,0.798029f,0f,0.739036f,0.673666f,0f,0.739036f,0.673666f,0f,0.850228f,0.526414f,0f,0.850228f,0.526414f,0f,0.932482f,0.361217f,0f,0.932482f,0.361217f,0f,0.982978f,0.183721f,0f,0.982978f,0.183721f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt325 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1});
  }
}
protected class MFVec3f6 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {45f,0f,0f,45f,0f,35f,44.2338f,-8.26873f,0f,44.2338f,-8.26873f,35f,41.9613f,-16.2559f,0f,41.9613f,-16.2559f,35f,38.2598f,-23.6894f,0f,38.2598f,-23.6894f,35f,33.2554f,-30.3163f,0f,33.2554f,-30.3163f,35f,27.1186f,-35.9108f,0f,27.1186f,-35.9108f,35f,20.0582f,-40.2823f,0f,20.0582f,-40.2823f,35f,12.3148f,-43.2822f,0f,12.3148f,-43.2822f,35f,4.15208f,-44.808f,0f,4.15208f,-44.808f,35f,-4.15208f,-44.808f,0f,-4.15208f,-44.808f,35f,-12.3148f,-43.2822f,0f,-12.3148f,-43.2822f,35f,-20.0582f,-40.2823f,0f,-20.0582f,-40.2823f,35f,-27.1186f,-35.9108f,0f,-27.1186f,-35.9108f,35f,-33.2554f,-30.3163f,0f,-33.2554f,-30.3163f,35f,-38.2598f,-23.6894f,0f,-38.2598f,-23.6894f,35f,-41.9613f,-16.2559f,0f,-41.9613f,-16.2559f,35f,-44.2338f,-8.26873f,0f,-44.2338f,-8.26873f,35f,-45f,0f,0f,-45f,0f,35f});
  }
}
protected class MFVec3f7 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.982978f,-0.183721f,0f,0.982978f,-0.183721f,0f,0.932482f,-0.361217f,0f,0.932482f,-0.361217f,0f,0.850228f,-0.526414f,0f,0.850228f,-0.526414f,0f,0.739036f,-0.673666f,0f,0.739036f,-0.673666f,0f,0.602619f,-0.798029f,0f,0.602619f,-0.798029f,0f,0.445723f,-0.895171f,0f,0.445723f,-0.895171f,0f,0.273659f,-0.961827f,0f,0.273659f,-0.961827f,0f,0.0922575f,-0.995735f,0f,0.0922575f,-0.995735f,0f,-0.0922575f,-0.995735f,0f,-0.0922575f,-0.995735f,0f,-0.273659f,-0.961827f,0f,-0.273659f,-0.961827f,0f,-0.445723f,-0.895171f,0f,-0.445723f,-0.895171f,0f,-0.602619f,-0.798029f,0f,-0.602619f,-0.798029f,0f,-0.739036f,-0.673666f,0f,-0.739036f,-0.673666f,0f,-0.850228f,-0.526414f,0f,-0.850228f,-0.526414f,0f,-0.932482f,-0.361217f,0f,-0.932482f,-0.361217f,0f,-0.982978f,-0.183721f,0f,-0.982978f,-0.183721f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt328 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1});
  }
}
protected class MFVec3f9 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {30f,0f,35f,30f,0f,0f,29.2478f,-6.67563f,35f,29.2478f,-6.67563f,0f,27.0291f,-13.0165f,35f,27.0291f,-13.0165f,0f,23.4549f,-18.7047f,35f,23.4549f,-18.7047f,0f,18.7047f,-23.4549f,35f,18.7047f,-23.4549f,0f,13.0165f,-27.0291f,35f,13.0165f,-27.0291f,0f,6.67563f,-29.2478f,35f,6.67563f,-29.2478f,0f,0f,-30f,35f,0f,-30f,0f,-6.67563f,-29.2478f,35f,-6.67563f,-29.2478f,0f,-13.0165f,-27.0291f,35f,-13.0165f,-27.0291f,0f,-18.7047f,-23.4549f,35f,-18.7047f,-23.4549f,0f,-23.4549f,-18.7047f,35f,-23.4549f,-18.7047f,0f,-27.0291f,-13.0165f,35f,-27.0291f,-13.0165f,0f,-29.2478f,-6.67563f,35f,-29.2478f,-6.67563f,0f,-30f,0f,35f,-30f,0f,0f});
  }
}
protected class MFVec3f10 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.97493f,0.22251f,0f,-0.97493f,0.22251f,0f,-0.90097f,0.433882f,0f,-0.90097f,0.433882f,0f,-0.781853f,0.623463f,0f,-0.781853f,0.623463f,0f,-0.623463f,0.781853f,0f,-0.623463f,0.781853f,0f,-0.433882f,0.90097f,0f,-0.433882f,0.90097f,0f,-0.22251f,0.97493f,0f,-0.22251f,0.97493f,0f,0f,1f,0f,0f,1f,0f,0.22251f,0.97493f,0f,0.22251f,0.97493f,0f,0.433882f,0.90097f,0f,0.433882f,0.90097f,0f,0.623463f,0.781853f,0f,0.623463f,0.781853f,0f,0.781853f,0.623463f,0f,0.781853f,0.623463f,0f,0.90097f,0.433882f,0f,0.90097f,0.433882f,0f,0.97493f,0.22251f,0f,0.97493f,0.22251f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3211 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1});
  }
}
protected class MFVec3f12 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-30f,0f,35f,-30f,0f,0f,-29.2478f,6.67563f,35f,-29.2478f,6.67563f,0f,-27.0291f,13.0165f,35f,-27.0291f,13.0165f,0f,-23.4549f,18.7047f,35f,-23.4549f,18.7047f,0f,-18.7047f,23.4549f,35f,-18.7047f,23.4549f,0f,-13.0165f,27.0291f,35f,-13.0165f,27.0291f,0f,-6.67563f,29.2478f,35f,-6.67563f,29.2478f,0f,0f,30f,35f,0f,30f,0f,6.67563f,29.2478f,35f,6.67563f,29.2478f,0f,13.0165f,27.0291f,35f,13.0165f,27.0291f,0f,18.7047f,23.4549f,35f,18.7047f,23.4549f,0f,23.4549f,18.7047f,35f,23.4549f,18.7047f,0f,27.0291f,13.0165f,35f,27.0291f,13.0165f,0f,29.2478f,6.67563f,35f,29.2478f,6.67563f,0f,30f,0f,35f,30f,0f,0f});
  }
}
protected class MFVec3f13 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.97493f,-0.22251f,0f,0.97493f,-0.22251f,0f,0.90097f,-0.433882f,0f,0.90097f,-0.433882f,0f,0.781853f,-0.623463f,0f,0.781853f,-0.623463f,0f,0.623463f,-0.781853f,0f,0.623463f,-0.781853f,0f,0.433882f,-0.90097f,0f,0.433882f,-0.90097f,0f,0.22251f,-0.97493f,0f,0.22251f,-0.97493f,0f,0f,-1f,0f,0f,-1f,0f,-0.22251f,-0.97493f,0f,-0.22251f,-0.97493f,0f,-0.433882f,-0.90097f,0f,-0.433882f,-0.90097f,0f,-0.623463f,-0.781853f,0f,-0.623463f,-0.781853f,0f,-0.781853f,-0.623463f,0f,-0.781853f,-0.623463f,0f,-0.90097f,-0.433882f,0f,-0.90097f,-0.433882f,0f,-0.97493f,-0.22251f,0f,-0.97493f,-0.22251f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3214 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,2,4,5,-1,4,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,7,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,17,18,16,-1,18,14,16,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,23,22,24,-1,22,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,28,27,29,-1,27,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,35,34,36,-1,34,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,41,18,17,-1,41,17,42,-1,41,42,43,-1,41,43,44,-1,41,44,45,-1,41,45,46,-1,41,46,47,-1,41,47,48,-1,41,48,49,-1,44,40,39,-1,44,39,50,-1,44,50,51,-1,44,51,52,-1,44,52,45,-1,53,1,0,-1,53,0,54,-1,53,54,55,-1,53,55,56,-1,53,56,57,-1,53,57,58,-1,53,58,59,-1,53,59,60,-1,53,60,61,-1,53,61,20,-1,53,20,19,-1});
  }
}
protected class MFVec3f15 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-33.2554f,30.3163f,0f,-6.67563f,29.2478f,0f,-38.2598f,23.6894f,0f,-13.0165f,27.0291f,0f,-18.7047f,23.4549f,0f,-41.9613f,16.2559f,0f,-23.4549f,18.7047f,0f,-44.2338f,8.26873f,0f,-27.0291f,13.0165f,0f,-29.2478f,6.67563f,0f,-45f,0f,0f,-30f,0f,0f,-44.2338f,-8.26873f,0f,-29.2478f,-6.67563f,0f,-41.9613f,-16.2559f,0f,-27.0291f,-13.0165f,0f,-23.4549f,-18.7047f,0f,-18.7047f,-23.4549f,0f,-38.2598f,-23.6894f,0f,6.67563f,29.2478f,0f,33.2554f,30.3163f,0f,13.0165f,27.0291f,0f,38.2598f,23.6894f,0f,18.7047f,23.4549f,0f,23.4549f,18.7047f,0f,41.9613f,16.2559f,0f,27.0291f,13.0165f,0f,44.2338f,8.26873f,0f,29.2478f,6.67563f,0f,30f,0f,0f,45f,0f,0f,29.2478f,-6.67563f,0f,44.2338f,-8.26873f,0f,27.0291f,-13.0165f,0f,41.9613f,-16.2559f,0f,23.4549f,-18.7047f,0f,18.7047f,-23.4549f,0f,38.2598f,-23.6894f,0f,13.0165f,-27.0291f,0f,33.2554f,-30.3163f,0f,6.67563f,-29.2478f,0f,-33.2554f,-30.3163f,0f,-13.0165f,-27.0291f,0f,-6.67563f,-29.2478f,0f,0f,-30f,0f,4.15208f,-44.808f,0f,-4.15208f,-44.808f,0f,-12.3148f,-43.2822f,0f,-20.0582f,-40.2823f,0f,-27.1186f,-35.9108f,0f,27.1186f,-35.9108f,0f,20.0582f,-40.2823f,0f,12.3148f,-43.2822f,0f,0f,30f,0f,-27.1186f,35.9108f,0f,-20.0582f,40.2823f,0f,-12.3148f,43.2822f,0f,-4.15208f,44.808f,0f,4.15208f,44.808f,0f,12.3148f,43.2822f,0f,20.0582f,40.2823f,0f,27.1186f,35.9108f,0f});
  }
}
protected class MFInt3216 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,4,3,5,-1,3,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,9,8,10,-1,8,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,17,18,15,-1,18,16,15,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,21,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,26,28,29,-1,28,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,33,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,41,42,43,-1,41,43,44,-1,41,44,45,-1,41,45,46,-1,41,46,47,-1,41,47,48,-1,41,48,49,-1,41,49,18,-1,41,18,17,-1,47,46,50,-1,47,50,51,-1,47,51,52,-1,47,52,38,-1,47,38,40,-1,53,20,19,-1,53,19,54,-1,53,54,55,-1,53,55,56,-1,53,56,57,-1,53,57,58,-1,53,58,59,-1,53,59,60,-1,53,60,61,-1,53,61,1,-1,53,1,0,-1});
  }
}
protected class MFVec3f17 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-6.67563f,29.2478f,35f,-33.2554f,30.3163f,35f,-13.0165f,27.0291f,35f,-38.2598f,23.6894f,35f,-18.7047f,23.4549f,35f,-23.4549f,18.7047f,35f,-41.9613f,16.2559f,35f,-27.0291f,13.0165f,35f,-44.2338f,8.26873f,35f,-29.2478f,6.67563f,35f,-30f,0f,35f,-45f,0f,35f,-29.2478f,-6.67563f,35f,-44.2338f,-8.26873f,35f,-27.0291f,-13.0165f,35f,-41.9613f,-16.2559f,35f,-23.4549f,-18.7047f,35f,-38.2598f,-23.6894f,35f,-18.7047f,-23.4549f,35f,33.2554f,30.3163f,35f,6.67563f,29.2478f,35f,38.2598f,23.6894f,35f,13.0165f,27.0291f,35f,18.7047f,23.4549f,35f,41.9613f,16.2559f,35f,23.4549f,18.7047f,35f,44.2338f,8.26873f,35f,27.0291f,13.0165f,35f,29.2478f,6.67563f,35f,45f,0f,35f,30f,0f,35f,44.2338f,-8.26873f,35f,29.2478f,-6.67563f,35f,41.9613f,-16.2559f,35f,27.0291f,-13.0165f,35f,23.4549f,-18.7047f,35f,38.2598f,-23.6894f,35f,18.7047f,-23.4549f,35f,33.2554f,-30.3163f,35f,13.0165f,-27.0291f,35f,6.67563f,-29.2478f,35f,-33.2554f,-30.3163f,35f,-27.1186f,-35.9108f,35f,-20.0582f,-40.2823f,35f,-12.3148f,-43.2822f,35f,-4.15208f,-44.808f,35f,4.15208f,-44.808f,35f,0f,-30f,35f,-6.67563f,-29.2478f,35f,-13.0165f,-27.0291f,35f,12.3148f,-43.2822f,35f,20.0582f,-40.2823f,35f,27.1186f,-35.9108f,35f,0f,30f,35f,27.1186f,35.9108f,35f,20.0582f,40.2823f,35f,12.3148f,43.2822f,35f,4.15208f,44.808f,35f,-4.15208f,44.808f,35f,-12.3148f,43.2822f,35f,-20.0582f,40.2823f,35f,-27.1186f,35.9108f,35f});
  }
}
}
