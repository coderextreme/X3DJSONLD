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
public class CatiaHubDiscWithHoles {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new CatiaHubDiscWithHoles().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/CAD/CatiaHubDiscWithHoles.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interchange").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("CatiaHubDiscWithHoles.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Provide a Disc with holes part for use by CatiaHubAssemblyInline using CADAssembly and Inline nodes."))
        .addMeta(new metaObject().setName("creator").setContent("Hyokwang Lee, PartDB Co., Ltd."))
        .addMeta(new metaObject().setName("created").setContent("25 July 2012"))
        .addMeta(new metaObject().setName("modified").setContent("28 November 2019"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-X3DAbstractSpecification/Part01/components/CADGeometry.html"))
        .addMeta(new metaObject().setName("subject").setContent("X3D CAD CADInterchange profile"))
        .addMeta(new metaObject().setName("generator").setContent("CATIA V5 R18 and PartDB Converter with Xj3D"))
        .addMeta(new metaObject().setName("generator").setContent("Xj3D, http://www.xj3d.org"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubDiscWithHoles.x3d"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setInfo(new MFStringObject(new MFString0().getArray())).setTitle("CatiaHubDiscWithHoles.x3d"))
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
                .addChild(new GroupObject().setDEF("_03E91BA8")
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDEF("_material0").setDiffuseColor(new float[] {1f,0.745098f,0.278431f})))
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
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f15().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f16().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3217().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f18().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f19().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3220().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f21().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f22().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3223().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f24().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f25().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3226().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f27().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f28().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3229().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f30().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f31().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3232().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f33().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f34().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3235().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f36().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f37().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3238().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f39().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f40().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3241().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f42().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f43().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3244().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f45().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f46().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3247().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f48().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f49().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3250().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f51().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f52().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3253().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f54().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f55().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3256().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f57().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f58().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3259().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f60().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f61().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3262().getArray()).append(new MFInt3263().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f64().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3265().getArray()).append(new MFInt3266().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f67().getArray())))))))))))      ;
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
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1,44,45,46,-1,45,47,46,-1,46,47,48,-1,47,49,48,-1,48,49,50,-1,49,51,50,-1,50,51,52,-1,51,53,52,-1,52,53,54,-1,53,55,54,-1,54,55,56,-1,55,57,56,-1,56,57,58,-1,57,59,58,-1,58,59,60,-1,59,61,60,-1,60,61,62,-1,61,63,62,-1});
  }
}
protected class MFVec3f3 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-150f,0f,0f,-150f,0f,30f,-149.23f,15.1752f,0f,-149.23f,15.1752f,30f,-146.929f,30.1948f,0f,-146.929f,30.1948f,30f,-143.121f,44.9045f,0f,-143.121f,44.9045f,30f,-137.844f,59.1534f,0f,-137.844f,59.1534f,30f,-131.152f,72.7953f,0f,-131.152f,72.7953f,30f,-123.115f,85.6902f,0f,-123.115f,85.6902f,30f,-113.814f,97.7059f,0f,-113.814f,97.7059f,30f,-103.345f,108.719f,0f,-103.345f,108.719f,30f,-91.8159f,118.616f,0f,-91.8159f,118.616f,30f,-79.3446f,127.297f,0f,-79.3446f,127.297f,30f,-66.0591f,134.671f,0f,-66.0591f,134.671f,30f,-52.0958f,140.663f,0f,-52.0958f,140.663f,30f,-37.5979f,145.212f,0f,-37.5979f,145.212f,30f,-22.7142f,148.27f,0f,-22.7142f,148.27f,30f,-7.59738f,149.807f,0f,-7.59738f,149.807f,30f,7.59738f,149.807f,0f,7.59738f,149.807f,30f,22.7142f,148.27f,0f,22.7142f,148.27f,30f,37.5979f,145.212f,0f,37.5979f,145.212f,30f,52.0958f,140.663f,0f,52.0958f,140.663f,30f,66.0591f,134.671f,0f,66.0591f,134.671f,30f,79.3446f,127.297f,0f,79.3446f,127.297f,30f,91.8159f,118.616f,0f,91.8159f,118.616f,30f,103.345f,108.719f,0f,103.345f,108.719f,30f,113.814f,97.7059f,0f,113.814f,97.7059f,30f,123.115f,85.6902f,0f,123.115f,85.6902f,30f,131.152f,72.7953f,0f,131.152f,72.7953f,30f,137.844f,59.1534f,0f,137.844f,59.1534f,30f,143.121f,44.9045f,0f,143.121f,44.9045f,30f,146.929f,30.1948f,0f,146.929f,30.1948f,30f,149.23f,15.1752f,0f,149.23f,15.1752f,30f,150f,0f,0f,150f,0f,30f});
  }
}
protected class MFVec3f4 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.994872f,0.101138f,0f,-0.994872f,0.101138f,0f,-0.979536f,0.20127f,0f,-0.979536f,0.20127f,0f,-0.954141f,0.299356f,0f,-0.954141f,0.299356f,0f,-0.918969f,0.39433f,0f,-0.918969f,0.39433f,0f,-0.874362f,0.485275f,0f,-0.874362f,0.485275f,0f,-0.820779f,0.571245f,0f,-0.820779f,0.571245f,0f,-0.758772f,0.651357f,0f,-0.758772f,0.651357f,0f,-0.688955f,0.724804f,0f,-0.688955f,0.724804f,0f,-0.612079f,0.790796f,0f,-0.612079f,0.790796f,0f,-0.528947f,0.848655f,0f,-0.528947f,0.848655f,0f,-0.440382f,0.89781f,0f,-0.440382f,0.89781f,0f,-0.347301f,0.937754f,0f,-0.347301f,0.937754f,0f,-0.250649f,0.968078f,0f,-0.250649f,0.968078f,0f,-0.151402f,0.988472f,0f,-0.151402f,0.988472f,0f,-0.0506302f,0.998717f,0f,-0.0506302f,0.998717f,0f,0.0506302f,0.998717f,0f,0.0506302f,0.998717f,0f,0.151402f,0.988472f,0f,0.151402f,0.988472f,0f,0.250649f,0.968078f,0f,0.250649f,0.968078f,0f,0.347301f,0.937754f,0f,0.347301f,0.937754f,0f,0.440382f,0.89781f,0f,0.440382f,0.89781f,0f,0.528947f,0.848655f,0f,0.528947f,0.848655f,0f,0.612079f,0.790796f,0f,0.612079f,0.790796f,0f,0.688955f,0.724804f,0f,0.688955f,0.724804f,0f,0.758772f,0.651357f,0f,0.758772f,0.651357f,0f,0.820779f,0.571245f,0f,0.820779f,0.571245f,0f,0.874362f,0.485275f,0f,0.874362f,0.485275f,0f,0.918969f,0.39433f,0f,0.918969f,0.39433f,0f,0.954141f,0.299356f,0f,0.954141f,0.299356f,0f,0.979536f,0.20127f,0f,0.979536f,0.20127f,0f,0.994872f,0.101138f,0f,0.994872f,0.101138f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt325 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1,44,45,46,-1,45,47,46,-1,46,47,48,-1,47,49,48,-1,48,49,50,-1,49,51,50,-1,50,51,52,-1,51,53,52,-1,52,53,54,-1,53,55,54,-1,54,55,56,-1,55,57,56,-1,56,57,58,-1,57,59,58,-1,58,59,60,-1,59,61,60,-1,60,61,62,-1,61,63,62,-1});
  }
}
protected class MFVec3f6 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {150f,0f,0f,150f,0f,30f,149.23f,-15.1752f,0f,149.23f,-15.1752f,30f,146.929f,-30.1948f,0f,146.929f,-30.1948f,30f,143.121f,-44.9045f,0f,143.121f,-44.9045f,30f,137.844f,-59.1534f,0f,137.844f,-59.1534f,30f,131.152f,-72.7953f,0f,131.152f,-72.7953f,30f,123.115f,-85.6902f,0f,123.115f,-85.6902f,30f,113.814f,-97.7059f,0f,113.814f,-97.7059f,30f,103.345f,-108.719f,0f,103.345f,-108.719f,30f,91.8159f,-118.616f,0f,91.8159f,-118.616f,30f,79.3446f,-127.297f,0f,79.3446f,-127.297f,30f,66.0591f,-134.671f,0f,66.0591f,-134.671f,30f,52.0958f,-140.663f,0f,52.0958f,-140.663f,30f,37.5979f,-145.212f,0f,37.5979f,-145.212f,30f,22.7142f,-148.27f,0f,22.7142f,-148.27f,30f,7.59738f,-149.807f,0f,7.59738f,-149.807f,30f,-7.59738f,-149.807f,0f,-7.59738f,-149.807f,30f,-22.7142f,-148.27f,0f,-22.7142f,-148.27f,30f,-37.5979f,-145.212f,0f,-37.5979f,-145.212f,30f,-52.0958f,-140.663f,0f,-52.0958f,-140.663f,30f,-66.0591f,-134.671f,0f,-66.0591f,-134.671f,30f,-79.3446f,-127.297f,0f,-79.3446f,-127.297f,30f,-91.8159f,-118.616f,0f,-91.8159f,-118.616f,30f,-103.345f,-108.719f,0f,-103.345f,-108.719f,30f,-113.814f,-97.7059f,0f,-113.814f,-97.7059f,30f,-123.115f,-85.6902f,0f,-123.115f,-85.6902f,30f,-131.152f,-72.7953f,0f,-131.152f,-72.7953f,30f,-137.844f,-59.1534f,0f,-137.844f,-59.1534f,30f,-143.121f,-44.9045f,0f,-143.121f,-44.9045f,30f,-146.929f,-30.1948f,0f,-146.929f,-30.1948f,30f,-149.23f,-15.1752f,0f,-149.23f,-15.1752f,30f,-150f,0f,0f,-150f,0f,30f});
  }
}
protected class MFVec3f7 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.994872f,-0.101138f,0f,0.994872f,-0.101138f,0f,0.979536f,-0.20127f,0f,0.979536f,-0.20127f,0f,0.954141f,-0.299356f,0f,0.954141f,-0.299356f,0f,0.918969f,-0.39433f,0f,0.918969f,-0.39433f,0f,0.874362f,-0.485275f,0f,0.874362f,-0.485275f,0f,0.820779f,-0.571245f,0f,0.820779f,-0.571245f,0f,0.758772f,-0.651357f,0f,0.758772f,-0.651357f,0f,0.688955f,-0.724804f,0f,0.688955f,-0.724804f,0f,0.612079f,-0.790796f,0f,0.612079f,-0.790796f,0f,0.528947f,-0.848655f,0f,0.528947f,-0.848655f,0f,0.440382f,-0.89781f,0f,0.440382f,-0.89781f,0f,0.347301f,-0.937754f,0f,0.347301f,-0.937754f,0f,0.250649f,-0.968078f,0f,0.250649f,-0.968078f,0f,0.151402f,-0.988472f,0f,0.151402f,-0.988472f,0f,0.0506302f,-0.998717f,0f,0.0506302f,-0.998717f,0f,-0.0506302f,-0.998717f,0f,-0.0506302f,-0.998717f,0f,-0.151402f,-0.988472f,0f,-0.151402f,-0.988472f,0f,-0.250649f,-0.968078f,0f,-0.250649f,-0.968078f,0f,-0.347301f,-0.937754f,0f,-0.347301f,-0.937754f,0f,-0.440382f,-0.89781f,0f,-0.440382f,-0.89781f,0f,-0.528947f,-0.848655f,0f,-0.528947f,-0.848655f,0f,-0.612079f,-0.790796f,0f,-0.612079f,-0.790796f,0f,-0.688955f,-0.724804f,0f,-0.688955f,-0.724804f,0f,-0.758772f,-0.651357f,0f,-0.758772f,-0.651357f,0f,-0.820779f,-0.571245f,0f,-0.820779f,-0.571245f,0f,-0.874362f,-0.485275f,0f,-0.874362f,-0.485275f,0f,-0.918969f,-0.39433f,0f,-0.918969f,-0.39433f,0f,-0.954141f,-0.299356f,0f,-0.954141f,-0.299356f,0f,-0.979536f,-0.20127f,0f,-0.979536f,-0.20127f,0f,-0.994872f,-0.101138f,0f,-0.994872f,-0.101138f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt328 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f9 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {15f,120f,30f,15f,120f,0f,14.2658f,115.365f,30f,14.2658f,115.365f,0f,12.1353f,111.183f,30f,12.1353f,111.183f,0f,8.81678f,107.865f,30f,8.81678f,107.865f,0f,4.63525f,105.734f,30f,4.63525f,105.734f,0f,0f,105f,30f,0f,105f,0f,-4.63525f,105.734f,30f,-4.63525f,105.734f,0f,-8.81678f,107.865f,30f,-8.81678f,107.865f,0f,-12.1353f,111.183f,30f,-12.1353f,111.183f,0f,-14.2658f,115.365f,30f,-14.2658f,115.365f,0f,-15f,120f,30f,-15f,120f,0f});
  }
}
protected class MFVec3f10 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.951062f,0.309f,0f,-0.951062f,0.309f,0f,-0.809038f,0.587756f,0f,-0.809038f,0.587756f,0f,-0.587756f,0.809038f,0f,-0.587756f,0.809038f,0f,-0.309f,0.951062f,0f,-0.309f,0.951062f,0f,0f,1f,0f,0f,1f,0f,0.309f,0.951062f,0f,0.309f,0.951062f,0f,0.587756f,0.809038f,0f,0.587756f,0.809038f,0f,0.809038f,0.587756f,0f,0.809038f,0.587756f,0f,0.951062f,0.309f,0f,0.951062f,0.309f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3211 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f12 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-15f,120f,30f,-15f,120f,0f,-14.2658f,124.635f,30f,-14.2658f,124.635f,0f,-12.1353f,128.817f,30f,-12.1353f,128.817f,0f,-8.81678f,132.135f,30f,-8.81678f,132.135f,0f,-4.63525f,134.266f,30f,-4.63525f,134.266f,0f,0f,135f,30f,0f,135f,0f,4.63525f,134.266f,30f,4.63525f,134.266f,0f,8.81678f,132.135f,30f,8.81678f,132.135f,0f,12.1353f,128.817f,30f,12.1353f,128.817f,0f,14.2658f,124.635f,30f,14.2658f,124.635f,0f,15f,120f,30f,15f,120f,0f});
  }
}
protected class MFVec3f13 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.951062f,-0.309f,0f,0.951062f,-0.309f,0f,0.809038f,-0.587756f,0f,0.809038f,-0.587756f,0f,0.587756f,-0.809038f,0f,0.587756f,-0.809038f,0f,0.309f,-0.951062f,0f,0.309f,-0.951062f,0f,0f,-1f,0f,0f,-1f,0f,-0.309f,-0.951062f,0f,-0.309f,-0.951062f,0f,-0.587756f,-0.809038f,0f,-0.587756f,-0.809038f,0f,-0.809038f,-0.587756f,0f,-0.809038f,-0.587756f,0f,-0.951062f,-0.309f,0f,-0.951062f,-0.309f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3214 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f15 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {92.1345f,91.9253f,30f,92.1345f,91.9253f,0f,91.4004f,87.2901f,30f,91.4004f,87.2901f,0f,89.2698f,83.1086f,30f,89.2698f,83.1086f,0f,85.9513f,79.7901f,30f,85.9513f,79.7901f,0f,81.7698f,77.6595f,30f,81.7698f,77.6595f,0f,77.1345f,76.9253f,30f,77.1345f,76.9253f,0f,72.4993f,77.6595f,30f,72.4993f,77.6595f,0f,68.3177f,79.7901f,30f,68.3177f,79.7901f,0f,64.9993f,83.1086f,30f,64.9993f,83.1086f,0f,62.8687f,87.2901f,30f,62.8687f,87.2901f,0f,62.1345f,91.9253f,30f,62.1345f,91.9253f,0f});
  }
}
protected class MFVec3f16 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.951062f,0.309f,0f,-0.951062f,0.309f,0f,-0.809038f,0.587756f,0f,-0.809038f,0.587756f,0f,-0.587756f,0.809038f,0f,-0.587756f,0.809038f,0f,-0.309f,0.951062f,0f,-0.309f,0.951062f,0f,0f,1f,0f,0f,1f,0f,0.309f,0.951062f,0f,0.309f,0.951062f,0f,0.587756f,0.809038f,0f,0.587756f,0.809038f,0f,0.809038f,0.587756f,0f,0.809038f,0.587756f,0f,0.951062f,0.309f,0f,0.951062f,0.309f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3217 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f18 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {62.1345f,91.9253f,30f,62.1345f,91.9253f,0f,62.8687f,96.5606f,30f,62.8687f,96.5606f,0f,64.9993f,100.742f,30f,64.9993f,100.742f,0f,68.3177f,104.061f,30f,68.3177f,104.061f,0f,72.4993f,106.191f,30f,72.4993f,106.191f,0f,77.1345f,106.925f,30f,77.1345f,106.925f,0f,81.7698f,106.191f,30f,81.7698f,106.191f,0f,85.9513f,104.061f,30f,85.9513f,104.061f,0f,89.2698f,100.742f,30f,89.2698f,100.742f,0f,91.4004f,96.5606f,30f,91.4004f,96.5606f,0f,92.1345f,91.9253f,30f,92.1345f,91.9253f,0f});
  }
}
protected class MFVec3f19 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.951062f,-0.309f,0f,0.951062f,-0.309f,0f,0.809038f,-0.587756f,0f,0.809038f,-0.587756f,0f,0.587756f,-0.809038f,0f,0.587756f,-0.809038f,0f,0.309f,-0.951062f,0f,0.309f,-0.951062f,0f,0f,-1f,0f,0f,-1f,0f,-0.309f,-0.951062f,0f,-0.309f,-0.951062f,0f,-0.587756f,-0.809038f,0f,-0.587756f,-0.809038f,0f,-0.809038f,-0.587756f,0f,-0.809038f,-0.587756f,0f,-0.951062f,-0.309f,0f,-0.951062f,-0.309f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3220 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f21 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {133.177f,20.8378f,30f,133.177f,20.8378f,0f,132.443f,16.2025f,30f,132.443f,16.2025f,0f,130.312f,12.021f,30f,130.312f,12.021f,0f,126.994f,8.70253f,30f,126.994f,8.70253f,0f,122.812f,6.57193f,30f,122.812f,6.57193f,0f,118.177f,5.83778f,30f,118.177f,5.83778f,0f,113.542f,6.57193f,30f,113.542f,6.57193f,0f,109.36f,8.70253f,30f,109.36f,8.70253f,0f,106.042f,12.021f,30f,106.042f,12.021f,0f,103.911f,16.2025f,30f,103.911f,16.2025f,0f,103.177f,20.8378f,30f,103.177f,20.8378f,0f});
  }
}
protected class MFVec3f22 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.951062f,0.309f,0f,-0.951062f,0.309f,0f,-0.809038f,0.587756f,0f,-0.809038f,0.587756f,0f,-0.587756f,0.809038f,0f,-0.587756f,0.809038f,0f,-0.309f,0.951062f,0f,-0.309f,0.951062f,0f,0f,1f,0f,0f,1f,0f,0.309f,0.951062f,0f,0.309f,0.951062f,0f,0.587756f,0.809038f,0f,0.587756f,0.809038f,0f,0.809038f,0.587756f,0f,0.809038f,0.587756f,0f,0.951062f,0.309f,0f,0.951062f,0.309f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3223 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f24 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {103.177f,20.8378f,30f,103.177f,20.8378f,0f,103.911f,25.473f,30f,103.911f,25.473f,0f,106.042f,29.6546f,30f,106.042f,29.6546f,0f,109.36f,32.973f,30f,109.36f,32.973f,0f,113.542f,35.1036f,30f,113.542f,35.1036f,0f,118.177f,35.8378f,30f,118.177f,35.8378f,0f,122.812f,35.1036f,30f,122.812f,35.1036f,0f,126.994f,32.973f,30f,126.994f,32.973f,0f,130.312f,29.6546f,30f,130.312f,29.6546f,0f,132.443f,25.473f,30f,132.443f,25.473f,0f,133.177f,20.8378f,30f,133.177f,20.8378f,0f});
  }
}
protected class MFVec3f25 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.951062f,-0.309f,0f,0.951062f,-0.309f,0f,0.809038f,-0.587756f,0f,0.809038f,-0.587756f,0f,0.587756f,-0.809038f,0f,0.587756f,-0.809038f,0f,0.309f,-0.951062f,0f,0.309f,-0.951062f,0f,0f,-1f,0f,0f,-1f,0f,-0.309f,-0.951062f,0f,-0.309f,-0.951062f,0f,-0.587756f,-0.809038f,0f,-0.587756f,-0.809038f,0f,-0.809038f,-0.587756f,0f,-0.809038f,-0.587756f,0f,-0.951062f,-0.309f,0f,-0.951062f,-0.309f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3226 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f27 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {118.923f,-60f,30f,118.923f,-60f,0f,118.189f,-64.6353f,30f,118.189f,-64.6353f,0f,116.058f,-68.8168f,30f,116.058f,-68.8168f,0f,112.74f,-72.1353f,30f,112.74f,-72.1353f,0f,108.558f,-74.2658f,30f,108.558f,-74.2658f,0f,103.923f,-75f,30f,103.923f,-75f,0f,99.2878f,-74.2658f,30f,99.2878f,-74.2658f,0f,95.1063f,-72.1353f,30f,95.1063f,-72.1353f,0f,91.7878f,-68.8168f,30f,91.7878f,-68.8168f,0f,89.6572f,-64.6353f,30f,89.6572f,-64.6353f,0f,88.923f,-60f,30f,88.923f,-60f,0f});
  }
}
protected class MFVec3f28 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.951062f,0.309f,0f,-0.951062f,0.309f,0f,-0.809038f,0.587756f,0f,-0.809038f,0.587756f,0f,-0.587756f,0.809038f,0f,-0.587756f,0.809038f,0f,-0.309f,0.951062f,0f,-0.309f,0.951062f,0f,0f,1f,0f,0f,1f,0f,0.309f,0.951062f,0f,0.309f,0.951062f,0f,0.587756f,0.809038f,0f,0.587756f,0.809038f,0f,0.809038f,0.587756f,0f,0.809038f,0.587756f,0f,0.951062f,0.309f,0f,0.951062f,0.309f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3229 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f30 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {88.923f,-60f,30f,88.923f,-60f,0f,89.6572f,-55.3647f,30f,89.6572f,-55.3647f,0f,91.7878f,-51.1832f,30f,91.7878f,-51.1832f,0f,95.1063f,-47.8647f,30f,95.1063f,-47.8647f,0f,99.2878f,-45.7342f,30f,99.2878f,-45.7342f,0f,103.923f,-45f,30f,103.923f,-45f,0f,108.558f,-45.7342f,30f,108.558f,-45.7342f,0f,112.74f,-47.8647f,30f,112.74f,-47.8647f,0f,116.058f,-51.1832f,30f,116.058f,-51.1832f,0f,118.189f,-55.3647f,30f,118.189f,-55.3647f,0f,118.923f,-60f,30f,118.923f,-60f,0f});
  }
}
protected class MFVec3f31 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.951062f,-0.309f,0f,0.951062f,-0.309f,0f,0.809038f,-0.587756f,0f,0.809038f,-0.587756f,0f,0.587756f,-0.809038f,0f,0.587756f,-0.809038f,0f,0.309f,-0.951062f,0f,0.309f,-0.951062f,0f,0f,-1f,0f,0f,-1f,0f,-0.309f,-0.951062f,0f,-0.309f,-0.951062f,0f,-0.587756f,-0.809038f,0f,-0.587756f,-0.809038f,0f,-0.809038f,-0.587756f,0f,-0.809038f,-0.587756f,0f,-0.951062f,-0.309f,0f,-0.951062f,-0.309f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3232 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f33 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {56.0424f,-112.763f,30f,56.0424f,-112.763f,0f,55.3083f,-117.398f,30f,55.3083f,-117.398f,0f,53.1777f,-121.58f,30f,53.1777f,-121.58f,0f,49.8592f,-124.898f,30f,49.8592f,-124.898f,0f,45.6777f,-127.029f,30f,45.6777f,-127.029f,0f,41.0424f,-127.763f,30f,41.0424f,-127.763f,0f,36.4072f,-127.029f,30f,36.4072f,-127.029f,0f,32.2256f,-124.898f,30f,32.2256f,-124.898f,0f,28.9072f,-121.58f,30f,28.9072f,-121.58f,0f,26.7766f,-117.398f,30f,26.7766f,-117.398f,0f,26.0424f,-112.763f,30f,26.0424f,-112.763f,0f});
  }
}
protected class MFVec3f34 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.951062f,0.309f,0f,-0.951062f,0.309f,0f,-0.809038f,0.587756f,0f,-0.809038f,0.587756f,0f,-0.587756f,0.809038f,0f,-0.587756f,0.809038f,0f,-0.309f,0.951062f,0f,-0.309f,0.951062f,0f,0f,1f,0f,0f,1f,0f,0.309f,0.951062f,0f,0.309f,0.951062f,0f,0.587756f,0.809038f,0f,0.587756f,0.809038f,0f,0.809038f,0.587756f,0f,0.809038f,0.587756f,0f,0.951062f,0.309f,0f,0.951062f,0.309f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3235 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f36 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {26.0424f,-112.763f,30f,26.0424f,-112.763f,0f,26.7766f,-108.128f,30f,26.7766f,-108.128f,0f,28.9072f,-103.946f,30f,28.9072f,-103.946f,0f,32.2256f,-100.628f,30f,32.2256f,-100.628f,0f,36.4072f,-98.4973f,30f,36.4072f,-98.4973f,0f,41.0424f,-97.7631f,30f,41.0424f,-97.7631f,0f,45.6777f,-98.4973f,30f,45.6777f,-98.4973f,0f,49.8592f,-100.628f,30f,49.8592f,-100.628f,0f,53.1777f,-103.946f,30f,53.1777f,-103.946f,0f,55.3083f,-108.128f,30f,55.3083f,-108.128f,0f,56.0424f,-112.763f,30f,56.0424f,-112.763f,0f});
  }
}
protected class MFVec3f37 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.951062f,-0.309f,0f,0.951062f,-0.309f,0f,0.809038f,-0.587756f,0f,0.809038f,-0.587756f,0f,0.587756f,-0.809038f,0f,0.587756f,-0.809038f,0f,0.309f,-0.951062f,0f,0.309f,-0.951062f,0f,0f,-1f,0f,0f,-1f,0f,-0.309f,-0.951062f,0f,-0.309f,-0.951062f,0f,-0.587756f,-0.809038f,0f,-0.587756f,-0.809038f,0f,-0.809038f,-0.587756f,0f,-0.809038f,-0.587756f,0f,-0.951062f,-0.309f,0f,-0.951062f,-0.309f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3238 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f39 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-26.0424f,-112.763f,30f,-26.0424f,-112.763f,0f,-26.7766f,-117.398f,30f,-26.7766f,-117.398f,0f,-28.9072f,-121.58f,30f,-28.9072f,-121.58f,0f,-32.2256f,-124.898f,30f,-32.2256f,-124.898f,0f,-36.4072f,-127.029f,30f,-36.4072f,-127.029f,0f,-41.0424f,-127.763f,30f,-41.0424f,-127.763f,0f,-45.6777f,-127.029f,30f,-45.6777f,-127.029f,0f,-49.8592f,-124.898f,30f,-49.8592f,-124.898f,0f,-53.1777f,-121.58f,30f,-53.1777f,-121.58f,0f,-55.3083f,-117.398f,30f,-55.3083f,-117.398f,0f,-56.0424f,-112.763f,30f,-56.0424f,-112.763f,0f});
  }
}
protected class MFVec3f40 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.951062f,0.309f,0f,-0.951062f,0.309f,0f,-0.809038f,0.587756f,0f,-0.809038f,0.587756f,0f,-0.587756f,0.809038f,0f,-0.587756f,0.809038f,0f,-0.309f,0.951062f,0f,-0.309f,0.951062f,0f,0f,1f,0f,0f,1f,0f,0.309f,0.951062f,0f,0.309f,0.951062f,0f,0.587756f,0.809038f,0f,0.587756f,0.809038f,0f,0.809038f,0.587756f,0f,0.809038f,0.587756f,0f,0.951062f,0.309f,0f,0.951062f,0.309f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3241 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f42 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-56.0424f,-112.763f,30f,-56.0424f,-112.763f,0f,-55.3083f,-108.128f,30f,-55.3083f,-108.128f,0f,-53.1777f,-103.946f,30f,-53.1777f,-103.946f,0f,-49.8592f,-100.628f,30f,-49.8592f,-100.628f,0f,-45.6777f,-98.4973f,30f,-45.6777f,-98.4973f,0f,-41.0424f,-97.7631f,30f,-41.0424f,-97.7631f,0f,-36.4072f,-98.4973f,30f,-36.4072f,-98.4973f,0f,-32.2256f,-100.628f,30f,-32.2256f,-100.628f,0f,-28.9072f,-103.946f,30f,-28.9072f,-103.946f,0f,-26.7766f,-108.128f,30f,-26.7766f,-108.128f,0f,-26.0424f,-112.763f,30f,-26.0424f,-112.763f,0f});
  }
}
protected class MFVec3f43 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.951062f,-0.309f,0f,0.951062f,-0.309f,0f,0.809038f,-0.587756f,0f,0.809038f,-0.587756f,0f,0.587756f,-0.809038f,0f,0.587756f,-0.809038f,0f,0.309f,-0.951062f,0f,0.309f,-0.951062f,0f,0f,-1f,0f,0f,-1f,0f,-0.309f,-0.951062f,0f,-0.309f,-0.951062f,0f,-0.587756f,-0.809038f,0f,-0.587756f,-0.809038f,0f,-0.809038f,-0.587756f,0f,-0.809038f,-0.587756f,0f,-0.951062f,-0.309f,0f,-0.951062f,-0.309f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3244 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f45 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-88.923f,-60f,30f,-88.923f,-60f,0f,-89.6572f,-64.6353f,30f,-89.6572f,-64.6353f,0f,-91.7878f,-68.8168f,30f,-91.7878f,-68.8168f,0f,-95.1063f,-72.1353f,30f,-95.1063f,-72.1353f,0f,-99.2878f,-74.2658f,30f,-99.2878f,-74.2658f,0f,-103.923f,-75f,30f,-103.923f,-75f,0f,-108.558f,-74.2658f,30f,-108.558f,-74.2658f,0f,-112.74f,-72.1353f,30f,-112.74f,-72.1353f,0f,-116.058f,-68.8168f,30f,-116.058f,-68.8168f,0f,-118.189f,-64.6353f,30f,-118.189f,-64.6353f,0f,-118.923f,-60f,30f,-118.923f,-60f,0f});
  }
}
protected class MFVec3f46 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.951062f,0.309f,0f,-0.951062f,0.309f,0f,-0.809038f,0.587756f,0f,-0.809038f,0.587756f,0f,-0.587756f,0.809038f,0f,-0.587756f,0.809038f,0f,-0.309f,0.951062f,0f,-0.309f,0.951062f,0f,0f,1f,0f,0f,1f,0f,0.309f,0.951062f,0f,0.309f,0.951062f,0f,0.587756f,0.809038f,0f,0.587756f,0.809038f,0f,0.809038f,0.587756f,0f,0.809038f,0.587756f,0f,0.951062f,0.309f,0f,0.951062f,0.309f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3247 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f48 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-118.923f,-60f,30f,-118.923f,-60f,0f,-118.189f,-55.3647f,30f,-118.189f,-55.3647f,0f,-116.058f,-51.1832f,30f,-116.058f,-51.1832f,0f,-112.74f,-47.8647f,30f,-112.74f,-47.8647f,0f,-108.558f,-45.7342f,30f,-108.558f,-45.7342f,0f,-103.923f,-45f,30f,-103.923f,-45f,0f,-99.2878f,-45.7342f,30f,-99.2878f,-45.7342f,0f,-95.1063f,-47.8647f,30f,-95.1063f,-47.8647f,0f,-91.7878f,-51.1832f,30f,-91.7878f,-51.1832f,0f,-89.6572f,-55.3647f,30f,-89.6572f,-55.3647f,0f,-88.923f,-60f,30f,-88.923f,-60f,0f});
  }
}
protected class MFVec3f49 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.951062f,-0.309f,0f,0.951062f,-0.309f,0f,0.809038f,-0.587756f,0f,0.809038f,-0.587756f,0f,0.587756f,-0.809038f,0f,0.587756f,-0.809038f,0f,0.309f,-0.951062f,0f,0.309f,-0.951062f,0f,0f,-1f,0f,0f,-1f,0f,-0.309f,-0.951062f,0f,-0.309f,-0.951062f,0f,-0.587756f,-0.809038f,0f,-0.587756f,-0.809038f,0f,-0.809038f,-0.587756f,0f,-0.809038f,-0.587756f,0f,-0.951062f,-0.309f,0f,-0.951062f,-0.309f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3250 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f51 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-103.177f,20.8378f,30f,-103.177f,20.8378f,0f,-103.911f,16.2025f,30f,-103.911f,16.2025f,0f,-106.042f,12.021f,30f,-106.042f,12.021f,0f,-109.36f,8.70253f,30f,-109.36f,8.70253f,0f,-113.542f,6.57193f,30f,-113.542f,6.57193f,0f,-118.177f,5.83778f,30f,-118.177f,5.83778f,0f,-122.812f,6.57193f,30f,-122.812f,6.57193f,0f,-126.994f,8.70253f,30f,-126.994f,8.70253f,0f,-130.312f,12.021f,30f,-130.312f,12.021f,0f,-132.443f,16.2025f,30f,-132.443f,16.2025f,0f,-133.177f,20.8378f,30f,-133.177f,20.8378f,0f});
  }
}
protected class MFVec3f52 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.951062f,0.309f,0f,-0.951062f,0.309f,0f,-0.809038f,0.587756f,0f,-0.809038f,0.587756f,0f,-0.587756f,0.809038f,0f,-0.587756f,0.809038f,0f,-0.309f,0.951062f,0f,-0.309f,0.951062f,0f,0f,1f,0f,0f,1f,0f,0.309f,0.951062f,0f,0.309f,0.951062f,0f,0.587756f,0.809038f,0f,0.587756f,0.809038f,0f,0.809038f,0.587756f,0f,0.809038f,0.587756f,0f,0.951062f,0.309f,0f,0.951062f,0.309f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3253 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f54 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-133.177f,20.8378f,30f,-133.177f,20.8378f,0f,-132.443f,25.473f,30f,-132.443f,25.473f,0f,-130.312f,29.6546f,30f,-130.312f,29.6546f,0f,-126.994f,32.973f,30f,-126.994f,32.973f,0f,-122.812f,35.1036f,30f,-122.812f,35.1036f,0f,-118.177f,35.8378f,30f,-118.177f,35.8378f,0f,-113.542f,35.1036f,30f,-113.542f,35.1036f,0f,-109.36f,32.973f,30f,-109.36f,32.973f,0f,-106.042f,29.6546f,30f,-106.042f,29.6546f,0f,-103.911f,25.473f,30f,-103.911f,25.473f,0f,-103.177f,20.8378f,30f,-103.177f,20.8378f,0f});
  }
}
protected class MFVec3f55 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.951062f,-0.309f,0f,0.951062f,-0.309f,0f,0.809038f,-0.587756f,0f,0.809038f,-0.587756f,0f,0.587756f,-0.809038f,0f,0.587756f,-0.809038f,0f,0.309f,-0.951062f,0f,0.309f,-0.951062f,0f,0f,-1f,0f,0f,-1f,0f,-0.309f,-0.951062f,0f,-0.309f,-0.951062f,0f,-0.587756f,-0.809038f,0f,-0.587756f,-0.809038f,0f,-0.809038f,-0.587756f,0f,-0.809038f,-0.587756f,0f,-0.951062f,-0.309f,0f,-0.951062f,-0.309f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3256 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f57 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-62.1345f,91.9253f,30f,-62.1345f,91.9253f,0f,-62.8687f,87.2901f,30f,-62.8687f,87.2901f,0f,-64.9993f,83.1086f,30f,-64.9993f,83.1086f,0f,-68.3177f,79.7901f,30f,-68.3177f,79.7901f,0f,-72.4993f,77.6595f,30f,-72.4993f,77.6595f,0f,-77.1345f,76.9253f,30f,-77.1345f,76.9253f,0f,-81.7698f,77.6595f,30f,-81.7698f,77.6595f,0f,-85.9513f,79.7901f,30f,-85.9513f,79.7901f,0f,-89.2698f,83.1086f,30f,-89.2698f,83.1086f,0f,-91.4004f,87.2901f,30f,-91.4004f,87.2901f,0f,-92.1345f,91.9253f,30f,-92.1345f,91.9253f,0f});
  }
}
protected class MFVec3f58 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.951062f,0.309f,0f,-0.951062f,0.309f,0f,-0.809038f,0.587756f,0f,-0.809038f,0.587756f,0f,-0.587756f,0.809038f,0f,-0.587756f,0.809038f,0f,-0.309f,0.951062f,0f,-0.309f,0.951062f,0f,0f,1f,0f,0f,1f,0f,0.309f,0.951062f,0f,0.309f,0.951062f,0f,0.587756f,0.809038f,0f,0.587756f,0.809038f,0f,0.809038f,0.587756f,0f,0.809038f,0.587756f,0f,0.951062f,0.309f,0f,0.951062f,0.309f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3259 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f60 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-92.1345f,91.9253f,30f,-92.1345f,91.9253f,0f,-91.4004f,96.5606f,30f,-91.4004f,96.5606f,0f,-89.2698f,100.742f,30f,-89.2698f,100.742f,0f,-85.9513f,104.061f,30f,-85.9513f,104.061f,0f,-81.7698f,106.191f,30f,-81.7698f,106.191f,0f,-77.1345f,106.925f,30f,-77.1345f,106.925f,0f,-72.4993f,106.191f,30f,-72.4993f,106.191f,0f,-68.3177f,104.061f,30f,-68.3177f,104.061f,0f,-64.9993f,100.742f,30f,-64.9993f,100.742f,0f,-62.8687f,96.5606f,30f,-62.8687f,96.5606f,0f,-62.1345f,91.9253f,30f,-62.1345f,91.9253f,0f});
  }
}
protected class MFVec3f61 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.951062f,-0.309f,0f,0.951062f,-0.309f,0f,0.809038f,-0.587756f,0f,0.809038f,-0.587756f,0f,0.587756f,-0.809038f,0f,0.587756f,-0.809038f,0f,0.309f,-0.951062f,0f,0.309f,-0.951062f,0f,0f,-1f,0f,0f,-1f,0f,-0.309f,-0.951062f,0f,-0.309f,-0.951062f,0f,-0.587756f,-0.809038f,0f,-0.587756f,-0.809038f,0f,-0.809038f,-0.587756f,0f,-0.809038f,-0.587756f,0f,-0.951062f,-0.309f,0f,-0.951062f,-0.309f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3262 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {40,41,42,-1,41,43,42,-1,44,45,46,-1,45,47,46,-1,15,14,12,-1,14,48,12,-1,12,48,10,-1,19,18,49,-1,18,50,49,-1,49,50,51,-1,51,52,49,-1,52,53,49,-1,23,22,54,-1,22,38,54,-1,54,38,37,-1,33,3,55,-1,3,56,55,-1,55,56,57,-1,56,24,57,-1,57,24,26,-1,58,27,59,-1,27,29,59,-1,59,29,60,-1,43,61,62,-1,61,63,62,-1,62,63,64,-1,63,65,64,-1,64,65,66,-1,65,67,66,-1,66,67,68,-1,67,69,68,-1,68,69,70,-1,28,27,71,-1,27,72,71,-1,71,72,73,-1,72,31,73,-1,73,31,30,-1,19,74,20,-1,74,75,20,-1,20,75,76,-1,36,35,77,-1,35,78,77,-1,77,78,79,-1,79,78,80,-1,78,81,80,-1,80,81,82,-1,81,83,82,-1,82,83,84,-1,83,85,84,-1,84,85,86,-1,70,69,87,-1,69,88,87,-1,87,88,89,-1,90,91,92,-1,90,92,93,-1,90,93,94,-1,95,96,97,-1,95,97,98,-1,95,98,99,-1,95,99,100,-1,95,100,16,-1,95,16,15,-1,95,15,53,-1,95,53,52,-1,95,52,8,-1,95,8,7,-1,95,7,101,-1,102,103,44,-1,102,44,46,-1,102,46,104,-1,102,104,105,-1,102,105,106,-1,102,106,107,-1,102,107,108,-1,102,108,96,-1,102,96,109,-1,47,110,111,-1,47,111,112,-1,47,112,113,-1,47,113,114,-1,47,114,115,-1,47,115,116,-1,47,116,46,-1,117,118,119,-1,117,119,120,-1,117,120,121,-1,117,121,122,-1,117,122,0,-1,117,0,2,-1,1,123,124,-1,1,124,125,-1,1,125,126,-1,1,126,43,-1,1,43,62,-1,43,126,127,-1,43,127,128,-1,43,128,129,-1,43,129,130,-1,43,130,131,-1,43,131,132,-1,43,132,42,-1,133,40,42,-1,133,42,134,-1,133,134,135,-1,133,135,136,-1,133,136,137,-1,133,137,138,-1,133,138,111,-1,133,111,110,-1,139,140,141,-1,139,141,142,-1,139,142,143,-1,139,143,25,-1,139,25,24,-1,144,111,145,-1,144,145,146,-1,144,146,147,-1,144,147,148,-1,144,148,140,-1,144,140,139,-1,144,139,149,-1,144,149,92,-1,144,92,91,-1,144,91,150,-1,144,150,151,-1,144,151,152,-1,144,152,96,-1,153,12,11,-1,153,11,154,-1,153,154,155,-1,153,155,156,-1,153,156,94,-1,153,94,93,-1,157,9,8,-1,157,8,158,-1,157,158,159,-1,157,159,160,-1,157,160,161,-1,157,161,162,-1,7,84,86,-1,7,86,163,-1,7,163,164,-1,7,164,165,-1,7,165,166,-1,7,166,167,-1,7,167,101,-1,163,168,169,-1,163,169,170,-1,163,170,171,-1,163,171,172,-1,163,172,164,-1,161,173,174,-1,161,174,175,-1,161,175,176,-1,161,176,177,-1,161,177,178,-1,161,178,179,-1,161,179,180,-1,161,180,162,-1,181,174,173,-1,181,173,182,-1,181,182,183,-1,181,183,184,-1,181,184,185,-1,186,181,185,-1,186,185,187,-1,186,187,188,-1,186,188,189,-1,186,189,76,-1,186,76,75,-1,190,35,34,-1,190,34,191,-1,190,191,192,-1,190,192,193,-1,190,193,194,-1,190,194,177,-1,177,194,195,-1,177,195,196,-1,177,196,178,-1,168,163,197,-1,168,197,22,-1,168,22,21,-1,96,95,198,-1,96,198,199,-1,96,199,200,-1,96,200,201,-1,96,201,39,-1,96,39,38,-1,96,38,202,-1,96,202,109,-1,96,108,203,-1,96,203,204,-1,96,204,205,-1,96,205,206,-1,96,206,144,-1,111,144,207,-1,111,207,208,-1,111,208,209,-1,111,209,210,-1,111,210,112,-1,123,1,0,-1,123,0,32,-1,123,32,31,-1,123,31,3,-1,123,3,6,-1,123,6,211,-1,123,211,212,-1,123,212,213,-1,123,213,111,-1,111,138,214,-1});
  }
}
protected class MFInt3263 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {111,214,215,-1,111,215,216,-1,111,216,217,-1,111,217,123,-1,218,219,220,-1,218,220,221,-1,218,221,222,-1,218,222,223,-1,218,223,89,-1,218,89,88,-1,219,224,225,-1,219,225,226,-1,219,226,220,-1,119,118,227,-1,119,227,228,-1,119,228,224,-1,119,224,219,-1,119,219,229,-1,119,229,230,-1,119,230,231,-1,119,231,232,-1,233,234,235,-1,233,235,236,-1,233,236,237,-1,233,237,238,-1,233,238,232,-1,233,232,231,-1,234,59,60,-1,234,60,239,-1,234,239,240,-1,234,240,241,-1,234,241,235,-1,0,1,2,-1,3,4,5,-1,6,3,5,-1,7,8,9,-1,10,11,12,-1,13,14,15,-1,13,15,16,-1,17,18,19,-1,19,20,17,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,4,3,-1,34,35,36,-1,37,38,39,-1});
  }
}
protected class MFVec3f64 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {89.6572f,-55.3647f,0f,103.911f,25.473f,0f,103.177f,20.8378f,0f,66.0591f,-134.671f,0f,55.3083f,-117.398f,0f,56.0424f,-112.763f,0f,55.3083f,-108.128f,0f,-103.911f,25.473f,0f,-89.6572f,-55.3647f,0f,-103.177f,20.8378f,0f,-45.6777f,-127.029f,0f,-41.0424f,-127.763f,0f,-52.0958f,-140.663f,0f,-55.3083f,-117.398f,0f,-53.1777f,-121.58f,0f,-66.0591f,-134.671f,0f,-56.0424f,-112.763f,0f,-99.2878f,-74.2658f,0f,-95.1063f,-72.1353f,0f,-103.345f,-108.719f,0f,-103.923f,-75f,0f,-72.4993f,106.191f,0f,-79.3446f,127.297f,0f,-68.3177f,104.061f,0f,37.5979f,-145.212f,0f,36.4072f,-127.029f,0f,41.0424f,-127.763f,0f,103.345f,-108.719f,0f,99.2878f,-74.2658f,0f,103.923f,-75f,0f,89.6572f,-64.6353f,0f,79.3446f,-127.297f,0f,88.923f,-60f,0f,53.1777f,-121.58f,0f,-130.312f,29.6546f,0f,-146.929f,30.1948f,0f,-126.994f,32.973f,0f,-62.8687f,96.5606f,0f,-66.0591f,134.671f,0f,-62.1345f,91.9253f,0f,79.3446f,127.297f,0f,91.8159f,118.616f,0f,77.1345f,106.925f,0f,103.345f,108.719f,0f,7.59738f,149.807f,0f,22.7142f,148.27f,0f,0f,135f,0f,37.5979f,145.212f,0f,-49.8592f,-124.898f,0f,-91.8159f,-118.616f,0f,-91.7878f,-68.8168f,0f,-89.6572f,-64.6353f,0f,-88.923f,-60f,0f,-79.3446f,-127.297f,0f,-64.9993f,100.742f,0f,49.8592f,-124.898f,0f,52.0958f,-140.663f,0f,45.6777f,-127.029f,0f,113.814f,-97.7059f,0f,123.115f,-85.6902f,0f,108.558f,-74.2658f,0f,113.814f,97.7059f,0f,106.042f,29.6546f,0f,123.115f,85.6902f,0f,109.36f,32.973f,0f,131.152f,72.7953f,0f,113.542f,35.1036f,0f,137.844f,59.1534f,0f,118.177f,35.8378f,0f,143.121f,44.9045f,0f,122.812f,35.1036f,0f,95.1063f,-72.1353f,0f,91.8159f,-118.616f,0f,91.7878f,-68.8168f,0f,-113.814f,-97.7059f,0f,-123.115f,-85.6902f,0f,-108.558f,-74.2658f,0f,-122.812f,35.1036f,0f,-143.121f,44.9045f,0f,-118.177f,35.8378f,0f,-113.542f,35.1036f,0f,-137.844f,59.1534f,0f,-109.36f,32.973f,0f,-131.152f,72.7953f,0f,-106.042f,29.6546f,0f,-123.115f,85.6902f,0f,-113.814f,97.7059f,0f,126.994f,32.973f,0f,146.929f,30.1948f,0f,130.312f,29.6546f,0f,-26.0424f,-112.763f,0f,-26.7766f,-108.128f,0f,-7.59738f,-149.807f,0f,-22.7142f,-148.27f,0f,-26.7766f,-117.398f,0f,-77.1345f,76.9253f,0f,-41.0424f,-97.7631f,0f,-45.6777f,-98.4973f,0f,-49.8592f,-100.628f,0f,-53.1777f,-103.946f,0f,-55.3083f,-108.128f,0f,-81.7698f,77.6595f,0f,-22.7142f,148.27f,0f,-7.59738f,149.807f,0f,-4.63525f,134.266f,0f,-8.81678f,132.135f,0f,-12.1353f,128.817f,0f,-14.2658f,124.635f,0f,-15f,120f,0f,-37.5979f,145.212f,0f,52.0958f,140.663f,0f,41.0424f,-97.7631f,0f,15f,120f,0f,14.2658f,124.635f,0f,12.1353f,128.817f,0f,8.81678f,132.135f,0f,4.63525f,134.266f,0f,103.911f,16.2025f,0f,106.042f,12.021f,0f,103.923f,-45f,0f,99.2878f,-45.7342f,0f,95.1063f,-47.8647f,0f,91.7878f,-51.1832f,0f,77.1345f,76.9253f,0f,81.7698f,77.6595f,0f,85.9513f,79.7901f,0f,89.2698f,83.1086f,0f,91.4004f,87.2901f,0f,92.1345f,91.9253f,0f,91.4004f,96.5606f,0f,89.2698f,100.742f,0f,85.9513f,104.061f,0f,81.7698f,106.191f,0f,66.0591f,134.671f,0f,72.4993f,106.191f,0f,68.3177f,104.061f,0f,64.9993f,100.742f,0f,62.8687f,96.5606f,0f,62.1345f,91.9253f,0f,22.7142f,-148.27f,0f,26.0424f,-112.763f,0f,26.7766f,-117.398f,0f,28.9072f,-121.58f,0f,32.2256f,-124.898f,0f,0f,105f,0f,36.4072f,-98.4973f,0f,32.2256f,-100.628f,0f,28.9072f,-103.946f,0f,26.7766f,-108.128f,0f,7.59738f,-149.807f,0f,-28.9072f,-103.946f,0f,-32.2256f,-100.628f,0f,-36.4072f,-98.4973f,0f,-37.5979f,-145.212f,0f,-36.4072f,-127.029f,0f,-32.2256f,-124.898f,0f,-28.9072f,-121.58f,0f,-103.911f,16.2025f,0f,-91.7878f,-51.1832f,0f,-95.1063f,-47.8647f,0f,-99.2878f,-45.7342f,0f,-103.923f,-45f,0f,-106.042f,12.021f,0f,-103.345f,108.719f,0f,-92.1345f,91.9253f,0f,-91.4004f,87.2901f,0f,-89.2698f,83.1086f,0f,-85.9513f,79.7901f,0f,-77.1345f,106.925f,0f,-81.7698f,106.191f,0f,-85.9513f,104.061f,0f,-89.2698f,100.742f,0f,-91.4004f,96.5606f,0f,-108.558f,-45.7342f,0f,-143.121f,-44.9045f,0f,-146.929f,-30.1948f,0f,-149.23f,-15.1752f,0f,-150f,0f,0f,-118.177f,5.83778f,0f,-113.542f,6.57193f,0f,-109.36f,8.70253f,0f,-137.844f,-59.1534f,0f,-112.74f,-47.8647f,0f,-116.058f,-51.1832f,0f,-118.189f,-55.3647f,0f,-118.923f,-60f,0f,-131.152f,-72.7953f,0f,-118.189f,-64.6353f,0f,-116.058f,-68.8168f,0f,-112.74f,-72.1353f,0f,-149.23f,15.1752f,0f,-132.443f,25.473f,0f,-133.177f,20.8378f,0f,-132.443f,16.2025f,0f,-130.312f,12.021f,0f,-126.994f,8.70253f,0f,-122.812f,6.57193f,0f,-91.8159f,118.616f,0f,-72.4993f,77.6595f,0f,-68.3177f,79.7901f,0f,-64.9993f,83.1086f,0f,-62.8687f,87.2901f,0f,-52.0958f,140.663f,0f,-14.2658f,115.365f,0f,-12.1353f,111.183f,0f,-8.81678f,107.865f,0f,-4.63525f,105.734f,0f,4.63525f,105.734f,0f,8.81678f,107.865f,0f,12.1353f,111.183f,0f,14.2658f,115.365f,0f,53.1777f,-103.946f,0f,49.8592f,-100.628f,0f,45.6777f,-98.4973f,0f,62.8687f,87.2901f,0f,64.9993f,83.1086f,0f,68.3177f,79.7901f,0f,72.4993f,77.6595f,0f,149.23f,15.1752f,0f,150f,0f,0f,130.312f,12.021f,0f,132.443f,16.2025f,0f,133.177f,20.8378f,0f,132.443f,25.473f,0f,118.177f,5.83778f,0f,122.812f,6.57193f,0f,126.994f,8.70253f,0f,109.36f,8.70253f,0f,113.542f,6.57193f,0f,149.23f,-15.1752f,0f,146.929f,-30.1948f,0f,143.121f,-44.9045f,0f,108.558f,-45.7342f,0f,137.844f,-59.1534f,0f,131.152f,-72.7953f,0f,118.923f,-60f,0f,118.189f,-55.3647f,0f,116.058f,-51.1832f,0f,112.74f,-47.8647f,0f,112.74f,-72.1353f,0f,116.058f,-68.8168f,0f,118.189f,-64.6353f,0f});
  }
}
protected class MFInt3265 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {40,41,42,-1,41,43,42,-1,44,45,46,-1,45,47,46,-1,14,13,48,-1,13,10,48,-1,48,10,12,-1,18,17,49,-1,17,50,49,-1,49,50,51,-1,52,51,53,-1,51,50,53,-1,22,21,38,-1,21,54,38,-1,38,54,39,-1,5,33,55,-1,33,56,55,-1,55,56,26,-1,56,57,26,-1,26,57,24,-1,29,58,27,-1,58,59,27,-1,27,59,60,-1,61,42,62,-1,42,63,62,-1,62,63,64,-1,63,65,64,-1,64,65,66,-1,65,67,66,-1,66,67,68,-1,67,69,68,-1,68,69,70,-1,29,28,71,-1,28,72,71,-1,71,72,31,-1,72,73,31,-1,31,73,32,-1,74,17,75,-1,17,20,75,-1,75,20,76,-1,35,34,77,-1,34,78,77,-1,77,78,79,-1,77,79,80,-1,79,81,80,-1,80,81,82,-1,81,83,82,-1,82,83,84,-1,83,85,84,-1,84,85,86,-1,68,70,87,-1,70,88,87,-1,87,88,89,-1,90,91,92,-1,90,92,93,-1,90,93,94,-1,95,96,9,-1,95,9,8,-1,95,8,52,-1,95,52,53,-1,95,53,13,-1,95,13,16,-1,95,16,97,-1,95,97,98,-1,95,98,99,-1,95,99,100,-1,95,100,101,-1,102,103,101,-1,102,101,104,-1,102,104,105,-1,102,105,106,-1,102,106,107,-1,102,107,108,-1,102,108,47,-1,102,47,45,-1,102,45,109,-1,46,47,110,-1,46,110,111,-1,46,111,112,-1,46,112,113,-1,46,113,114,-1,46,114,115,-1,46,115,116,-1,117,0,2,-1,117,2,118,-1,117,118,119,-1,117,119,120,-1,117,120,121,-1,117,121,122,-1,1,63,42,-1,1,42,123,-1,1,123,124,-1,1,124,125,-1,1,125,126,-1,42,43,127,-1,42,127,128,-1,42,128,129,-1,42,129,130,-1,42,130,131,-1,42,131,132,-1,42,132,123,-1,133,116,115,-1,133,115,134,-1,133,134,135,-1,133,135,136,-1,133,136,137,-1,133,137,138,-1,133,138,43,-1,133,43,41,-1,139,26,25,-1,139,25,140,-1,139,140,141,-1,139,141,142,-1,139,142,143,-1,144,101,145,-1,144,145,146,-1,144,146,147,-1,144,147,94,-1,144,94,93,-1,144,93,148,-1,144,148,139,-1,144,139,143,-1,144,143,149,-1,144,149,150,-1,144,150,151,-1,144,151,152,-1,144,152,115,-1,153,92,91,-1,153,91,154,-1,153,154,155,-1,153,155,156,-1,153,156,11,-1,153,11,10,-1,157,158,159,-1,157,159,160,-1,157,160,161,-1,157,161,162,-1,157,162,8,-1,157,8,7,-1,9,96,163,-1,9,163,164,-1,9,164,165,-1,9,165,166,-1,9,166,167,-1,9,167,86,-1,9,86,85,-1,167,166,168,-1,167,168,169,-1,167,169,170,-1,167,170,171,-1,167,171,172,-1,159,158,173,-1,159,173,174,-1,159,174,175,-1,159,175,176,-1,159,176,177,-1,159,177,178,-1,159,178,179,-1,159,179,180,-1,181,182,183,-1,181,183,184,-1,181,184,185,-1,181,185,180,-1,181,180,179,-1,186,75,76,-1,186,76,187,-1,186,187,188,-1,186,188,189,-1,186,189,182,-1,186,182,181,-1,190,176,191,-1,190,191,192,-1,190,192,193,-1,190,193,194,-1,190,194,36,-1,190,36,35,-1,176,175,195,-1,176,195,196,-1,176,196,191,-1,172,23,22,-1,172,22,197,-1,172,197,167,-1,101,103,198,-1,101,198,38,-1,101,38,37,-1,101,37,199,-1,101,199,200,-1,101,200,201,-1,101,201,202,-1,101,202,95,-1,101,144,203,-1,101,203,204,-1,101,204,205,-1,101,205,206,-1,101,206,104,-1,115,114,207,-1,115,207,208,-1,115,208,209,-1,115,209,210,-1,115,210,144,-1,126,115,211,-1,126,211,212,-1,126,212,213,-1,126,213,6,-1,126,6,5,-1,126,5,31,-1,126,31,30,-1,126,30,2,-1,126,2,1,-1,115,126,214,-1});
  }
}
protected class MFInt3266 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {115,214,215,-1,115,215,216,-1,115,216,217,-1,115,217,134,-1,218,87,89,-1,218,89,219,-1,218,219,220,-1,218,220,221,-1,218,221,222,-1,218,222,223,-1,223,222,224,-1,223,224,225,-1,223,225,226,-1,121,227,228,-1,121,228,229,-1,121,229,230,-1,121,230,223,-1,121,223,226,-1,121,226,231,-1,121,231,232,-1,121,232,122,-1,233,228,227,-1,233,227,234,-1,233,234,235,-1,233,235,236,-1,233,236,237,-1,233,237,238,-1,238,237,239,-1,238,239,240,-1,238,240,241,-1,238,241,60,-1,238,60,59,-1,0,1,2,-1,3,4,5,-1,3,5,6,-1,7,8,9,-1,10,11,12,-1,13,14,15,-1,16,13,15,-1,17,18,19,-1,19,20,17,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,5,4,33,-1,34,35,36,-1,37,38,39,-1});
  }
}
protected class MFVec3f67 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {103.177f,20.8378f,30f,103.911f,25.473f,30f,89.6572f,-55.3647f,30f,56.0424f,-112.763f,30f,55.3083f,-117.398f,30f,66.0591f,-134.671f,30f,55.3083f,-108.128f,30f,-103.177f,20.8378f,30f,-89.6572f,-55.3647f,30f,-103.911f,25.473f,30f,-52.0958f,-140.663f,30f,-41.0424f,-127.763f,30f,-45.6777f,-127.029f,30f,-66.0591f,-134.671f,30f,-53.1777f,-121.58f,30f,-55.3083f,-117.398f,30f,-56.0424f,-112.763f,30f,-103.345f,-108.719f,30f,-95.1063f,-72.1353f,30f,-99.2878f,-74.2658f,30f,-103.923f,-75f,30f,-68.3177f,104.061f,30f,-79.3446f,127.297f,30f,-72.4993f,106.191f,30f,41.0424f,-127.763f,30f,36.4072f,-127.029f,30f,37.5979f,-145.212f,30f,103.923f,-75f,30f,99.2878f,-74.2658f,30f,103.345f,-108.719f,30f,88.923f,-60f,30f,79.3446f,-127.297f,30f,89.6572f,-64.6353f,30f,53.1777f,-121.58f,30f,-126.994f,32.973f,30f,-146.929f,30.1948f,30f,-130.312f,29.6546f,30f,-62.1345f,91.9253f,30f,-66.0591f,134.671f,30f,-62.8687f,96.5606f,30f,91.8159f,118.616f,30f,79.3446f,127.297f,30f,103.345f,108.719f,30f,77.1345f,106.925f,30f,22.7142f,148.27f,30f,7.59738f,149.807f,30f,37.5979f,145.212f,30f,0f,135f,30f,-49.8592f,-124.898f,30f,-91.7878f,-68.8168f,30f,-91.8159f,-118.616f,30f,-89.6572f,-64.6353f,30f,-88.923f,-60f,30f,-79.3446f,-127.297f,30f,-64.9993f,100.742f,30f,52.0958f,-140.663f,30f,49.8592f,-124.898f,30f,45.6777f,-127.029f,30f,113.814f,-97.7059f,30f,123.115f,-85.6902f,30f,108.558f,-74.2658f,30f,113.814f,97.7059f,30f,123.115f,85.6902f,30f,106.042f,29.6546f,30f,131.152f,72.7953f,30f,109.36f,32.973f,30f,137.844f,59.1534f,30f,113.542f,35.1036f,30f,143.121f,44.9045f,30f,118.177f,35.8378f,30f,122.812f,35.1036f,30f,91.8159f,-118.616f,30f,95.1063f,-72.1353f,30f,91.7878f,-68.8168f,30f,-113.814f,-97.7059f,30f,-123.115f,-85.6902f,30f,-108.558f,-74.2658f,30f,-143.121f,44.9045f,30f,-122.812f,35.1036f,30f,-118.177f,35.8378f,30f,-137.844f,59.1534f,30f,-113.542f,35.1036f,30f,-131.152f,72.7953f,30f,-109.36f,32.973f,30f,-123.115f,85.6902f,30f,-106.042f,29.6546f,30f,-113.814f,97.7059f,30f,146.929f,30.1948f,30f,126.994f,32.973f,30f,130.312f,29.6546f,30f,-26.0424f,-112.763f,30f,-26.7766f,-117.398f,30f,-22.7142f,-148.27f,30f,-7.59738f,-149.807f,30f,-26.7766f,-108.128f,30f,-77.1345f,76.9253f,30f,-81.7698f,77.6595f,30f,-55.3083f,-108.128f,30f,-53.1777f,-103.946f,30f,-49.8592f,-100.628f,30f,-45.6777f,-98.4973f,30f,-41.0424f,-97.7631f,30f,-22.7142f,148.27f,30f,-37.5979f,145.212f,30f,-15f,120f,30f,-14.2658f,124.635f,30f,-12.1353f,128.817f,30f,-8.81678f,132.135f,30f,-4.63525f,134.266f,30f,-7.59738f,149.807f,30f,4.63525f,134.266f,30f,8.81678f,132.135f,30f,12.1353f,128.817f,30f,14.2658f,124.635f,30f,15f,120f,30f,41.0424f,-97.7631f,30f,52.0958f,140.663f,30f,103.911f,16.2025f,30f,91.7878f,-51.1832f,30f,95.1063f,-47.8647f,30f,99.2878f,-45.7342f,30f,103.923f,-45f,30f,106.042f,12.021f,30f,89.2698f,83.1086f,30f,85.9513f,79.7901f,30f,81.7698f,77.6595f,30f,77.1345f,76.9253f,30f,81.7698f,106.191f,30f,85.9513f,104.061f,30f,89.2698f,100.742f,30f,91.4004f,96.5606f,30f,92.1345f,91.9253f,30f,91.4004f,87.2901f,30f,66.0591f,134.671f,30f,62.1345f,91.9253f,30f,62.8687f,96.5606f,30f,64.9993f,100.742f,30f,68.3177f,104.061f,30f,72.4993f,106.191f,30f,22.7142f,-148.27f,30f,32.2256f,-124.898f,30f,28.9072f,-121.58f,30f,26.7766f,-117.398f,30f,26.0424f,-112.763f,30f,0f,105f,30f,-36.4072f,-98.4973f,30f,-32.2256f,-100.628f,30f,-28.9072f,-103.946f,30f,7.59738f,-149.807f,30f,26.7766f,-108.128f,30f,28.9072f,-103.946f,30f,32.2256f,-100.628f,30f,36.4072f,-98.4973f,30f,-37.5979f,-145.212f,30f,-28.9072f,-121.58f,30f,-32.2256f,-124.898f,30f,-36.4072f,-127.029f,30f,-103.911f,16.2025f,30f,-106.042f,12.021f,30f,-103.923f,-45f,30f,-99.2878f,-45.7342f,30f,-95.1063f,-47.8647f,30f,-91.7878f,-51.1832f,30f,-85.9513f,79.7901f,30f,-89.2698f,83.1086f,30f,-91.4004f,87.2901f,30f,-92.1345f,91.9253f,30f,-103.345f,108.719f,30f,-91.4004f,96.5606f,30f,-89.2698f,100.742f,30f,-85.9513f,104.061f,30f,-81.7698f,106.191f,30f,-77.1345f,106.925f,30f,-109.36f,8.70253f,30f,-113.542f,6.57193f,30f,-118.177f,5.83778f,30f,-150f,0f,30f,-149.23f,-15.1752f,30f,-146.929f,-30.1948f,30f,-143.121f,-44.9045f,30f,-108.558f,-45.7342f,30f,-137.844f,-59.1534f,30f,-118.923f,-60f,30f,-118.189f,-55.3647f,30f,-116.058f,-51.1832f,30f,-112.74f,-47.8647f,30f,-131.152f,-72.7953f,30f,-112.74f,-72.1353f,30f,-116.058f,-68.8168f,30f,-118.189f,-64.6353f,30f,-149.23f,15.1752f,30f,-130.312f,12.021f,30f,-132.443f,16.2025f,30f,-133.177f,20.8378f,30f,-132.443f,25.473f,30f,-122.812f,6.57193f,30f,-126.994f,8.70253f,30f,-91.8159f,118.616f,30f,-52.0958f,140.663f,30f,-62.8687f,87.2901f,30f,-64.9993f,83.1086f,30f,-68.3177f,79.7901f,30f,-72.4993f,77.6595f,30f,-4.63525f,105.734f,30f,-8.81678f,107.865f,30f,-12.1353f,111.183f,30f,-14.2658f,115.365f,30f,14.2658f,115.365f,30f,12.1353f,111.183f,30f,8.81678f,107.865f,30f,4.63525f,105.734f,30f,45.6777f,-98.4973f,30f,49.8592f,-100.628f,30f,53.1777f,-103.946f,30f,72.4993f,77.6595f,30f,68.3177f,79.7901f,30f,64.9993f,83.1086f,30f,62.8687f,87.2901f,30f,149.23f,15.1752f,30f,132.443f,25.473f,30f,133.177f,20.8378f,30f,132.443f,16.2025f,30f,130.312f,12.021f,30f,150f,0f,30f,126.994f,8.70253f,30f,122.812f,6.57193f,30f,118.177f,5.83778f,30f,108.558f,-45.7342f,30f,143.121f,-44.9045f,30f,146.929f,-30.1948f,30f,149.23f,-15.1752f,30f,113.542f,6.57193f,30f,109.36f,8.70253f,30f,137.844f,-59.1534f,30f,112.74f,-47.8647f,30f,116.058f,-51.1832f,30f,118.189f,-55.3647f,30f,118.923f,-60f,30f,131.152f,-72.7953f,30f,118.189f,-64.6353f,30f,116.058f,-68.8168f,30f,112.74f,-72.1353f,30f});
  }
}
}
