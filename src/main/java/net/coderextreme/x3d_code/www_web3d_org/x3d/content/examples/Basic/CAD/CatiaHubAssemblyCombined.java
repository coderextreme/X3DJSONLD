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
public class CatiaHubAssemblyCombined {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new CatiaHubAssemblyCombined().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/CAD/CatiaHubAssemblyCombined.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interactive").setVersion("3.1")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("CADGeometry").setLevel(2))
        .addMeta(new metaObject().setName("title").setContent("CatiaHubAssemblyCombined.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Single file combining all information for the CatiaHubAssembly model, demonstrating CAD assembly structure conserving transform information of each CADAssembly."))
        .addMeta(new metaObject().setName("creator").setContent("Hyokwang Lee, PartDB Co., Ltd."))
        .addMeta(new metaObject().setName("translator").setContent("Xj3D, http://www.xj3d.org"))
        .addMeta(new metaObject().setName("created").setContent("25 July 2012"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("Image").setContent("CatiaHubAssemblyCombined.png"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-X3DAbstractSpecification/Part01/components/CADGeometry.html"))
        .addMeta(new metaObject().setName("subject").setContent("X3D CAD CADInterchange profile"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubAssemblyCombined.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("CATIA V5 R18 and PartDB Converter with Xj3D"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("CatiaHubAssemblyCombined.x3d"))
        .addChild(new ViewpointObject().setDescription("Hello CatiaHubAssemblyCombined").setPosition(new float[] {0f,0f,1f}))
        .addChild(new TransformObject().setDEF("RootTransform").setScale(new float[] {0.001f,0.001f,0.001f})
          .addChild(new CADAssemblyObject().setName("Hub_Assembly")
            .addChild(new TransformObject().setDEF("TransformCatiaHubDiscWithHoles")
              .addChild(new CADAssemblyObject().setName("disc_with_holes")
                .addChild(new CADPartObject().setName("disc_with_holes")
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh01")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setDEF("_material0").setDiffuseColor(new float[] {1f,0.745098f,0.278431f})))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt320().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f2().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh02")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt323().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f4().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f5().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh03")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt326().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f7().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f8().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh04")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt329().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f10().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f11().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh05")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3212().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f13().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f14().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh06")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3215().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f16().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f17().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh07")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3218().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f19().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f20().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh08")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3221().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f22().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f23().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh09")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3224().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f25().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f26().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh10")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3227().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f28().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f29().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh11")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3230().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f31().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f32().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh12")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3233().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f34().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f35().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh13")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3236().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f37().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f38().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh14")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3239().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f40().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f41().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh15")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3242().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f43().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f44().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh16")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3245().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f46().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f47().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh17")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3248().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f49().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f50().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh18")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3251().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f52().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f53().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh19")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3254().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f55().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f56().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh20")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3257().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f58().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f59().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh21")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3260().getArray()).append(new MFInt3261().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f62().getArray()))))))
                  .addChild(new CADFaceObject().setName("disc_with_holes_mesh22")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material0")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3263().getArray()).append(new MFInt3264().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f65().getArray())))))))))
            .addChild(new TransformObject().setDEF("TransformCatiaHubCap").setTranslation(new float[] {0f,0f,30f})
              .addChild(new CADAssemblyObject().setName("cap")
                .addChild(new CADPartObject().setName("cap")
                  .addChild(new CADFaceObject().setName("cap_mesh01")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setDEF("_material1").setDiffuseColor(new float[] {0.94902f,0.635294f,0.341176f})))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3266().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f67().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f68().getArray()))))))
                  .addChild(new CADFaceObject().setName("cap_mesh02")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material1")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3269().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f70().getArray())))
                        .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f71().getArray()))))))
                  .addChild(new CADFaceObject().setName("cap_mesh03")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material1")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3272().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f73().getArray()))))))
                  .addChild(new CADFaceObject().setName("cap_mesh04")
                    .setShape(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setUSE("_material1")))
                      .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3274().getArray())).setSolid(false)
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f75().getArray())))))))))
            .addChild(new TransformObject().setDEF("TransformCatiaHubGasket")
              .addChild(new CADAssemblyObject().setName("sleeve_sub_assembly")
                .addChild(new TransformObject().setDEF("T5").setTranslation(new float[] {0f,0f,50f})
                  .addChild(new CADAssemblyObject().setName("gasket")
                    .addChild(new CADPartObject().setName("gasket")
                      .addChild(new CADFaceObject().setName("gasket_mesh01")
                        .setShape(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setDEF("_material2").setDiffuseColor(new float[] {0f,1f,0f})))
                          .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3276().getArray())).setSolid(false)
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f77().getArray())))
                            .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f78().getArray()))))))
                      .addChild(new CADFaceObject().setName("gasket_mesh02")
                        .setShape(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setUSE("_material2")))
                          .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3279().getArray())).setSolid(false)
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f80().getArray())))
                            .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f81().getArray()))))))
                      .addChild(new CADFaceObject().setName("gasket_mesh03")
                        .setShape(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setUSE("_material2")))
                          .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3282().getArray())).setSolid(false)
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f83().getArray())))
                            .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f84().getArray()))))))
                      .addChild(new CADFaceObject().setName("gasket_mesh04")
                        .setShape(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setUSE("_material2")))
                          .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3285().getArray())).setSolid(false)
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f86().getArray())))
                            .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f87().getArray()))))))
                      .addChild(new CADFaceObject().setName("gasket_mesh05")
                        .setShape(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setUSE("_material2")))
                          .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3288().getArray())).setSolid(false)
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f89().getArray()))))))
                      .addChild(new CADFaceObject().setName("gasket_mesh06")
                        .setShape(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setUSE("_material2")))
                          .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3290().getArray())).setSolid(false)
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f91().getArray())))))))))
                .addChild(new TransformObject().setDEF("TransformCatiaHubBushing").setTranslation(new float[] {0f,0f,85f})
                  .addChild(new CADAssemblyObject().setName("cylinder")
                    .addChild(new CADPartObject().setName("cylinder")
                      .addChild(new CADFaceObject().setName("cylinder_mesh01")
                        .setShape(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setDEF("_material3").setDiffuseColor(new float[] {0f,1f,1f})))
                          .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3292().getArray())).setSolid(false)
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f93().getArray())))
                            .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f94().getArray()))))))
                      .addChild(new CADFaceObject().setName("cylinder_mesh02")
                        .setShape(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setUSE("_material3")))
                          .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3295().getArray())).setSolid(false)
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f96().getArray())))
                            .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f97().getArray()))))))
                      .addChild(new CADFaceObject().setName("cylinder_mesh03")
                        .setShape(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setUSE("_material3")))
                          .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3298().getArray())).setSolid(false)
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f99().getArray())))
                            .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f100().getArray()))))))
                      .addChild(new CADFaceObject().setName("cylinder_mesh04")
                        .setShape(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setUSE("_material3")))
                          .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32101().getArray())).setSolid(false)
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f102().getArray())))
                            .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f103().getArray()))))))
                      .addChild(new CADFaceObject().setName("cylinder_mesh05")
                        .setShape(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setUSE("_material3")))
                          .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32104().getArray())).setSolid(false)
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f105().getArray()))))))
                      .addChild(new CADFaceObject().setName("cylinder_mesh06")
                        .setShape(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setUSE("_material3")))
                          .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32106().getArray())).setSolid(false)
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f107().getArray()))))))))))))))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1,44,45,46,-1,45,47,46,-1,46,47,48,-1,47,49,48,-1,48,49,50,-1,49,51,50,-1,50,51,52,-1,51,53,52,-1,52,53,54,-1,53,55,54,-1,54,55,56,-1,55,57,56,-1,56,57,58,-1,57,59,58,-1,58,59,60,-1,59,61,60,-1,60,61,62,-1,61,63,62,-1});
  }
}
protected class MFVec3f1 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-150f,0f,0f,-150f,0f,30f,-149.23f,15.1752f,0f,-149.23f,15.1752f,30f,-146.929f,30.1948f,0f,-146.929f,30.1948f,30f,-143.121f,44.9045f,0f,-143.121f,44.9045f,30f,-137.844f,59.1534f,0f,-137.844f,59.1534f,30f,-131.152f,72.7953f,0f,-131.152f,72.7953f,30f,-123.115f,85.6902f,0f,-123.115f,85.6902f,30f,-113.814f,97.7059f,0f,-113.814f,97.7059f,30f,-103.345f,108.719f,0f,-103.345f,108.719f,30f,-91.8159f,118.616f,0f,-91.8159f,118.616f,30f,-79.3446f,127.297f,0f,-79.3446f,127.297f,30f,-66.0591f,134.671f,0f,-66.0591f,134.671f,30f,-52.0958f,140.663f,0f,-52.0958f,140.663f,30f,-37.5979f,145.212f,0f,-37.5979f,145.212f,30f,-22.7142f,148.27f,0f,-22.7142f,148.27f,30f,-7.59738f,149.807f,0f,-7.59738f,149.807f,30f,7.59738f,149.807f,0f,7.59738f,149.807f,30f,22.7142f,148.27f,0f,22.7142f,148.27f,30f,37.5979f,145.212f,0f,37.5979f,145.212f,30f,52.0958f,140.663f,0f,52.0958f,140.663f,30f,66.0591f,134.671f,0f,66.0591f,134.671f,30f,79.3446f,127.297f,0f,79.3446f,127.297f,30f,91.8159f,118.616f,0f,91.8159f,118.616f,30f,103.345f,108.719f,0f,103.345f,108.719f,30f,113.814f,97.7059f,0f,113.814f,97.7059f,30f,123.115f,85.6902f,0f,123.115f,85.6902f,30f,131.152f,72.7953f,0f,131.152f,72.7953f,30f,137.844f,59.1534f,0f,137.844f,59.1534f,30f,143.121f,44.9045f,0f,143.121f,44.9045f,30f,146.929f,30.1948f,0f,146.929f,30.1948f,30f,149.23f,15.1752f,0f,149.23f,15.1752f,30f,150f,0f,0f,150f,0f,30f});
  }
}
protected class MFVec3f2 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.994872f,0.101138f,0f,-0.994872f,0.101138f,0f,-0.979536f,0.20127f,0f,-0.979536f,0.20127f,0f,-0.954141f,0.299356f,0f,-0.954141f,0.299356f,0f,-0.918969f,0.39433f,0f,-0.918969f,0.39433f,0f,-0.874362f,0.485275f,0f,-0.874362f,0.485275f,0f,-0.820779f,0.571245f,0f,-0.820779f,0.571245f,0f,-0.758772f,0.651357f,0f,-0.758772f,0.651357f,0f,-0.688955f,0.724804f,0f,-0.688955f,0.724804f,0f,-0.612079f,0.790796f,0f,-0.612079f,0.790796f,0f,-0.528947f,0.848655f,0f,-0.528947f,0.848655f,0f,-0.440382f,0.89781f,0f,-0.440382f,0.89781f,0f,-0.347301f,0.937754f,0f,-0.347301f,0.937754f,0f,-0.250649f,0.968078f,0f,-0.250649f,0.968078f,0f,-0.151402f,0.988472f,0f,-0.151402f,0.988472f,0f,-0.0506302f,0.998717f,0f,-0.0506302f,0.998717f,0f,0.0506302f,0.998717f,0f,0.0506302f,0.998717f,0f,0.151402f,0.988472f,0f,0.151402f,0.988472f,0f,0.250649f,0.968078f,0f,0.250649f,0.968078f,0f,0.347301f,0.937754f,0f,0.347301f,0.937754f,0f,0.440382f,0.89781f,0f,0.440382f,0.89781f,0f,0.528947f,0.848655f,0f,0.528947f,0.848655f,0f,0.612079f,0.790796f,0f,0.612079f,0.790796f,0f,0.688955f,0.724804f,0f,0.688955f,0.724804f,0f,0.758772f,0.651357f,0f,0.758772f,0.651357f,0f,0.820779f,0.571245f,0f,0.820779f,0.571245f,0f,0.874362f,0.485275f,0f,0.874362f,0.485275f,0f,0.918969f,0.39433f,0f,0.918969f,0.39433f,0f,0.954141f,0.299356f,0f,0.954141f,0.299356f,0f,0.979536f,0.20127f,0f,0.979536f,0.20127f,0f,0.994872f,0.101138f,0f,0.994872f,0.101138f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt323 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1,44,45,46,-1,45,47,46,-1,46,47,48,-1,47,49,48,-1,48,49,50,-1,49,51,50,-1,50,51,52,-1,51,53,52,-1,52,53,54,-1,53,55,54,-1,54,55,56,-1,55,57,56,-1,56,57,58,-1,57,59,58,-1,58,59,60,-1,59,61,60,-1,60,61,62,-1,61,63,62,-1});
  }
}
protected class MFVec3f4 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {150f,0f,0f,150f,0f,30f,149.23f,-15.1752f,0f,149.23f,-15.1752f,30f,146.929f,-30.1948f,0f,146.929f,-30.1948f,30f,143.121f,-44.9045f,0f,143.121f,-44.9045f,30f,137.844f,-59.1534f,0f,137.844f,-59.1534f,30f,131.152f,-72.7953f,0f,131.152f,-72.7953f,30f,123.115f,-85.6902f,0f,123.115f,-85.6902f,30f,113.814f,-97.7059f,0f,113.814f,-97.7059f,30f,103.345f,-108.719f,0f,103.345f,-108.719f,30f,91.8159f,-118.616f,0f,91.8159f,-118.616f,30f,79.3446f,-127.297f,0f,79.3446f,-127.297f,30f,66.0591f,-134.671f,0f,66.0591f,-134.671f,30f,52.0958f,-140.663f,0f,52.0958f,-140.663f,30f,37.5979f,-145.212f,0f,37.5979f,-145.212f,30f,22.7142f,-148.27f,0f,22.7142f,-148.27f,30f,7.59738f,-149.807f,0f,7.59738f,-149.807f,30f,-7.59738f,-149.807f,0f,-7.59738f,-149.807f,30f,-22.7142f,-148.27f,0f,-22.7142f,-148.27f,30f,-37.5979f,-145.212f,0f,-37.5979f,-145.212f,30f,-52.0958f,-140.663f,0f,-52.0958f,-140.663f,30f,-66.0591f,-134.671f,0f,-66.0591f,-134.671f,30f,-79.3446f,-127.297f,0f,-79.3446f,-127.297f,30f,-91.8159f,-118.616f,0f,-91.8159f,-118.616f,30f,-103.345f,-108.719f,0f,-103.345f,-108.719f,30f,-113.814f,-97.7059f,0f,-113.814f,-97.7059f,30f,-123.115f,-85.6902f,0f,-123.115f,-85.6902f,30f,-131.152f,-72.7953f,0f,-131.152f,-72.7953f,30f,-137.844f,-59.1534f,0f,-137.844f,-59.1534f,30f,-143.121f,-44.9045f,0f,-143.121f,-44.9045f,30f,-146.929f,-30.1948f,0f,-146.929f,-30.1948f,30f,-149.23f,-15.1752f,0f,-149.23f,-15.1752f,30f,-150f,0f,0f,-150f,0f,30f});
  }
}
protected class MFVec3f5 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.994872f,-0.101138f,0f,0.994872f,-0.101138f,0f,0.979536f,-0.20127f,0f,0.979536f,-0.20127f,0f,0.954141f,-0.299356f,0f,0.954141f,-0.299356f,0f,0.918969f,-0.39433f,0f,0.918969f,-0.39433f,0f,0.874362f,-0.485275f,0f,0.874362f,-0.485275f,0f,0.820779f,-0.571245f,0f,0.820779f,-0.571245f,0f,0.758772f,-0.651357f,0f,0.758772f,-0.651357f,0f,0.688955f,-0.724804f,0f,0.688955f,-0.724804f,0f,0.612079f,-0.790796f,0f,0.612079f,-0.790796f,0f,0.528947f,-0.848655f,0f,0.528947f,-0.848655f,0f,0.440382f,-0.89781f,0f,0.440382f,-0.89781f,0f,0.347301f,-0.937754f,0f,0.347301f,-0.937754f,0f,0.250649f,-0.968078f,0f,0.250649f,-0.968078f,0f,0.151402f,-0.988472f,0f,0.151402f,-0.988472f,0f,0.0506302f,-0.998717f,0f,0.0506302f,-0.998717f,0f,-0.0506302f,-0.998717f,0f,-0.0506302f,-0.998717f,0f,-0.151402f,-0.988472f,0f,-0.151402f,-0.988472f,0f,-0.250649f,-0.968078f,0f,-0.250649f,-0.968078f,0f,-0.347301f,-0.937754f,0f,-0.347301f,-0.937754f,0f,-0.440382f,-0.89781f,0f,-0.440382f,-0.89781f,0f,-0.528947f,-0.848655f,0f,-0.528947f,-0.848655f,0f,-0.612079f,-0.790796f,0f,-0.612079f,-0.790796f,0f,-0.688955f,-0.724804f,0f,-0.688955f,-0.724804f,0f,-0.758772f,-0.651357f,0f,-0.758772f,-0.651357f,0f,-0.820779f,-0.571245f,0f,-0.820779f,-0.571245f,0f,-0.874362f,-0.485275f,0f,-0.874362f,-0.485275f,0f,-0.918969f,-0.39433f,0f,-0.918969f,-0.39433f,0f,-0.954141f,-0.299356f,0f,-0.954141f,-0.299356f,0f,-0.979536f,-0.20127f,0f,-0.979536f,-0.20127f,0f,-0.994872f,-0.101138f,0f,-0.994872f,-0.101138f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt326 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f7 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {15f,120f,30f,15f,120f,0f,14.2658f,115.365f,30f,14.2658f,115.365f,0f,12.1353f,111.183f,30f,12.1353f,111.183f,0f,8.81678f,107.865f,30f,8.81678f,107.865f,0f,4.63525f,105.734f,30f,4.63525f,105.734f,0f,0f,105f,30f,0f,105f,0f,-4.63525f,105.734f,30f,-4.63525f,105.734f,0f,-8.81678f,107.865f,30f,-8.81678f,107.865f,0f,-12.1353f,111.183f,30f,-12.1353f,111.183f,0f,-14.2658f,115.365f,30f,-14.2658f,115.365f,0f,-15f,120f,30f,-15f,120f,0f});
  }
}
protected class MFVec3f8 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.951062f,0.309f,0f,-0.951062f,0.309f,0f,-0.809038f,0.587756f,0f,-0.809038f,0.587756f,0f,-0.587756f,0.809038f,0f,-0.587756f,0.809038f,0f,-0.309f,0.951062f,0f,-0.309f,0.951062f,0f,0f,1f,0f,0f,1f,0f,0.309f,0.951062f,0f,0.309f,0.951062f,0f,0.587756f,0.809038f,0f,0.587756f,0.809038f,0f,0.809038f,0.587756f,0f,0.809038f,0.587756f,0f,0.951062f,0.309f,0f,0.951062f,0.309f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt329 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f10 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-15f,120f,30f,-15f,120f,0f,-14.2658f,124.635f,30f,-14.2658f,124.635f,0f,-12.1353f,128.817f,30f,-12.1353f,128.817f,0f,-8.81678f,132.135f,30f,-8.81678f,132.135f,0f,-4.63525f,134.266f,30f,-4.63525f,134.266f,0f,0f,135f,30f,0f,135f,0f,4.63525f,134.266f,30f,4.63525f,134.266f,0f,8.81678f,132.135f,30f,8.81678f,132.135f,0f,12.1353f,128.817f,30f,12.1353f,128.817f,0f,14.2658f,124.635f,30f,14.2658f,124.635f,0f,15f,120f,30f,15f,120f,0f});
  }
}
protected class MFVec3f11 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.951062f,-0.309f,0f,0.951062f,-0.309f,0f,0.809038f,-0.587756f,0f,0.809038f,-0.587756f,0f,0.587756f,-0.809038f,0f,0.587756f,-0.809038f,0f,0.309f,-0.951062f,0f,0.309f,-0.951062f,0f,0f,-1f,0f,0f,-1f,0f,-0.309f,-0.951062f,0f,-0.309f,-0.951062f,0f,-0.587756f,-0.809038f,0f,-0.587756f,-0.809038f,0f,-0.809038f,-0.587756f,0f,-0.809038f,-0.587756f,0f,-0.951062f,-0.309f,0f,-0.951062f,-0.309f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3212 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f13 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {92.1345f,91.9253f,30f,92.1345f,91.9253f,0f,91.4004f,87.2901f,30f,91.4004f,87.2901f,0f,89.2698f,83.1086f,30f,89.2698f,83.1086f,0f,85.9513f,79.7901f,30f,85.9513f,79.7901f,0f,81.7698f,77.6595f,30f,81.7698f,77.6595f,0f,77.1345f,76.9253f,30f,77.1345f,76.9253f,0f,72.4993f,77.6595f,30f,72.4993f,77.6595f,0f,68.3177f,79.7901f,30f,68.3177f,79.7901f,0f,64.9993f,83.1086f,30f,64.9993f,83.1086f,0f,62.8687f,87.2901f,30f,62.8687f,87.2901f,0f,62.1345f,91.9253f,30f,62.1345f,91.9253f,0f});
  }
}
protected class MFVec3f14 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.951062f,0.309f,0f,-0.951062f,0.309f,0f,-0.809038f,0.587756f,0f,-0.809038f,0.587756f,0f,-0.587756f,0.809038f,0f,-0.587756f,0.809038f,0f,-0.309f,0.951062f,0f,-0.309f,0.951062f,0f,0f,1f,0f,0f,1f,0f,0.309f,0.951062f,0f,0.309f,0.951062f,0f,0.587756f,0.809038f,0f,0.587756f,0.809038f,0f,0.809038f,0.587756f,0f,0.809038f,0.587756f,0f,0.951062f,0.309f,0f,0.951062f,0.309f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3215 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f16 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {62.1345f,91.9253f,30f,62.1345f,91.9253f,0f,62.8687f,96.5606f,30f,62.8687f,96.5606f,0f,64.9993f,100.742f,30f,64.9993f,100.742f,0f,68.3177f,104.061f,30f,68.3177f,104.061f,0f,72.4993f,106.191f,30f,72.4993f,106.191f,0f,77.1345f,106.925f,30f,77.1345f,106.925f,0f,81.7698f,106.191f,30f,81.7698f,106.191f,0f,85.9513f,104.061f,30f,85.9513f,104.061f,0f,89.2698f,100.742f,30f,89.2698f,100.742f,0f,91.4004f,96.5606f,30f,91.4004f,96.5606f,0f,92.1345f,91.9253f,30f,92.1345f,91.9253f,0f});
  }
}
protected class MFVec3f17 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.951062f,-0.309f,0f,0.951062f,-0.309f,0f,0.809038f,-0.587756f,0f,0.809038f,-0.587756f,0f,0.587756f,-0.809038f,0f,0.587756f,-0.809038f,0f,0.309f,-0.951062f,0f,0.309f,-0.951062f,0f,0f,-1f,0f,0f,-1f,0f,-0.309f,-0.951062f,0f,-0.309f,-0.951062f,0f,-0.587756f,-0.809038f,0f,-0.587756f,-0.809038f,0f,-0.809038f,-0.587756f,0f,-0.809038f,-0.587756f,0f,-0.951062f,-0.309f,0f,-0.951062f,-0.309f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3218 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f19 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {133.177f,20.8378f,30f,133.177f,20.8378f,0f,132.443f,16.2025f,30f,132.443f,16.2025f,0f,130.312f,12.021f,30f,130.312f,12.021f,0f,126.994f,8.70253f,30f,126.994f,8.70253f,0f,122.812f,6.57193f,30f,122.812f,6.57193f,0f,118.177f,5.83778f,30f,118.177f,5.83778f,0f,113.542f,6.57193f,30f,113.542f,6.57193f,0f,109.36f,8.70253f,30f,109.36f,8.70253f,0f,106.042f,12.021f,30f,106.042f,12.021f,0f,103.911f,16.2025f,30f,103.911f,16.2025f,0f,103.177f,20.8378f,30f,103.177f,20.8378f,0f});
  }
}
protected class MFVec3f20 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.951062f,0.309f,0f,-0.951062f,0.309f,0f,-0.809038f,0.587756f,0f,-0.809038f,0.587756f,0f,-0.587756f,0.809038f,0f,-0.587756f,0.809038f,0f,-0.309f,0.951062f,0f,-0.309f,0.951062f,0f,0f,1f,0f,0f,1f,0f,0.309f,0.951062f,0f,0.309f,0.951062f,0f,0.587756f,0.809038f,0f,0.587756f,0.809038f,0f,0.809038f,0.587756f,0f,0.809038f,0.587756f,0f,0.951062f,0.309f,0f,0.951062f,0.309f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3221 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f22 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {103.177f,20.8378f,30f,103.177f,20.8378f,0f,103.911f,25.473f,30f,103.911f,25.473f,0f,106.042f,29.6546f,30f,106.042f,29.6546f,0f,109.36f,32.973f,30f,109.36f,32.973f,0f,113.542f,35.1036f,30f,113.542f,35.1036f,0f,118.177f,35.8378f,30f,118.177f,35.8378f,0f,122.812f,35.1036f,30f,122.812f,35.1036f,0f,126.994f,32.973f,30f,126.994f,32.973f,0f,130.312f,29.6546f,30f,130.312f,29.6546f,0f,132.443f,25.473f,30f,132.443f,25.473f,0f,133.177f,20.8378f,30f,133.177f,20.8378f,0f});
  }
}
protected class MFVec3f23 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.951062f,-0.309f,0f,0.951062f,-0.309f,0f,0.809038f,-0.587756f,0f,0.809038f,-0.587756f,0f,0.587756f,-0.809038f,0f,0.587756f,-0.809038f,0f,0.309f,-0.951062f,0f,0.309f,-0.951062f,0f,0f,-1f,0f,0f,-1f,0f,-0.309f,-0.951062f,0f,-0.309f,-0.951062f,0f,-0.587756f,-0.809038f,0f,-0.587756f,-0.809038f,0f,-0.809038f,-0.587756f,0f,-0.809038f,-0.587756f,0f,-0.951062f,-0.309f,0f,-0.951062f,-0.309f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3224 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f25 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {118.923f,-60f,30f,118.923f,-60f,0f,118.189f,-64.6353f,30f,118.189f,-64.6353f,0f,116.058f,-68.8168f,30f,116.058f,-68.8168f,0f,112.74f,-72.1353f,30f,112.74f,-72.1353f,0f,108.558f,-74.2658f,30f,108.558f,-74.2658f,0f,103.923f,-75f,30f,103.923f,-75f,0f,99.2878f,-74.2658f,30f,99.2878f,-74.2658f,0f,95.1063f,-72.1353f,30f,95.1063f,-72.1353f,0f,91.7878f,-68.8168f,30f,91.7878f,-68.8168f,0f,89.6572f,-64.6353f,30f,89.6572f,-64.6353f,0f,88.923f,-60f,30f,88.923f,-60f,0f});
  }
}
protected class MFVec3f26 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.951062f,0.309f,0f,-0.951062f,0.309f,0f,-0.809038f,0.587756f,0f,-0.809038f,0.587756f,0f,-0.587756f,0.809038f,0f,-0.587756f,0.809038f,0f,-0.309f,0.951062f,0f,-0.309f,0.951062f,0f,0f,1f,0f,0f,1f,0f,0.309f,0.951062f,0f,0.309f,0.951062f,0f,0.587756f,0.809038f,0f,0.587756f,0.809038f,0f,0.809038f,0.587756f,0f,0.809038f,0.587756f,0f,0.951062f,0.309f,0f,0.951062f,0.309f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3227 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f28 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {88.923f,-60f,30f,88.923f,-60f,0f,89.6572f,-55.3647f,30f,89.6572f,-55.3647f,0f,91.7878f,-51.1832f,30f,91.7878f,-51.1832f,0f,95.1063f,-47.8647f,30f,95.1063f,-47.8647f,0f,99.2878f,-45.7342f,30f,99.2878f,-45.7342f,0f,103.923f,-45f,30f,103.923f,-45f,0f,108.558f,-45.7342f,30f,108.558f,-45.7342f,0f,112.74f,-47.8647f,30f,112.74f,-47.8647f,0f,116.058f,-51.1832f,30f,116.058f,-51.1832f,0f,118.189f,-55.3647f,30f,118.189f,-55.3647f,0f,118.923f,-60f,30f,118.923f,-60f,0f});
  }
}
protected class MFVec3f29 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.951062f,-0.309f,0f,0.951062f,-0.309f,0f,0.809038f,-0.587756f,0f,0.809038f,-0.587756f,0f,0.587756f,-0.809038f,0f,0.587756f,-0.809038f,0f,0.309f,-0.951062f,0f,0.309f,-0.951062f,0f,0f,-1f,0f,0f,-1f,0f,-0.309f,-0.951062f,0f,-0.309f,-0.951062f,0f,-0.587756f,-0.809038f,0f,-0.587756f,-0.809038f,0f,-0.809038f,-0.587756f,0f,-0.809038f,-0.587756f,0f,-0.951062f,-0.309f,0f,-0.951062f,-0.309f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3230 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f31 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {56.0424f,-112.763f,30f,56.0424f,-112.763f,0f,55.3083f,-117.398f,30f,55.3083f,-117.398f,0f,53.1777f,-121.58f,30f,53.1777f,-121.58f,0f,49.8592f,-124.898f,30f,49.8592f,-124.898f,0f,45.6777f,-127.029f,30f,45.6777f,-127.029f,0f,41.0424f,-127.763f,30f,41.0424f,-127.763f,0f,36.4072f,-127.029f,30f,36.4072f,-127.029f,0f,32.2256f,-124.898f,30f,32.2256f,-124.898f,0f,28.9072f,-121.58f,30f,28.9072f,-121.58f,0f,26.7766f,-117.398f,30f,26.7766f,-117.398f,0f,26.0424f,-112.763f,30f,26.0424f,-112.763f,0f});
  }
}
protected class MFVec3f32 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.951062f,0.309f,0f,-0.951062f,0.309f,0f,-0.809038f,0.587756f,0f,-0.809038f,0.587756f,0f,-0.587756f,0.809038f,0f,-0.587756f,0.809038f,0f,-0.309f,0.951062f,0f,-0.309f,0.951062f,0f,0f,1f,0f,0f,1f,0f,0.309f,0.951062f,0f,0.309f,0.951062f,0f,0.587756f,0.809038f,0f,0.587756f,0.809038f,0f,0.809038f,0.587756f,0f,0.809038f,0.587756f,0f,0.951062f,0.309f,0f,0.951062f,0.309f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3233 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f34 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {26.0424f,-112.763f,30f,26.0424f,-112.763f,0f,26.7766f,-108.128f,30f,26.7766f,-108.128f,0f,28.9072f,-103.946f,30f,28.9072f,-103.946f,0f,32.2256f,-100.628f,30f,32.2256f,-100.628f,0f,36.4072f,-98.4973f,30f,36.4072f,-98.4973f,0f,41.0424f,-97.7631f,30f,41.0424f,-97.7631f,0f,45.6777f,-98.4973f,30f,45.6777f,-98.4973f,0f,49.8592f,-100.628f,30f,49.8592f,-100.628f,0f,53.1777f,-103.946f,30f,53.1777f,-103.946f,0f,55.3083f,-108.128f,30f,55.3083f,-108.128f,0f,56.0424f,-112.763f,30f,56.0424f,-112.763f,0f});
  }
}
protected class MFVec3f35 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.951062f,-0.309f,0f,0.951062f,-0.309f,0f,0.809038f,-0.587756f,0f,0.809038f,-0.587756f,0f,0.587756f,-0.809038f,0f,0.587756f,-0.809038f,0f,0.309f,-0.951062f,0f,0.309f,-0.951062f,0f,0f,-1f,0f,0f,-1f,0f,-0.309f,-0.951062f,0f,-0.309f,-0.951062f,0f,-0.587756f,-0.809038f,0f,-0.587756f,-0.809038f,0f,-0.809038f,-0.587756f,0f,-0.809038f,-0.587756f,0f,-0.951062f,-0.309f,0f,-0.951062f,-0.309f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3236 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f37 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-26.0424f,-112.763f,30f,-26.0424f,-112.763f,0f,-26.7766f,-117.398f,30f,-26.7766f,-117.398f,0f,-28.9072f,-121.58f,30f,-28.9072f,-121.58f,0f,-32.2256f,-124.898f,30f,-32.2256f,-124.898f,0f,-36.4072f,-127.029f,30f,-36.4072f,-127.029f,0f,-41.0424f,-127.763f,30f,-41.0424f,-127.763f,0f,-45.6777f,-127.029f,30f,-45.6777f,-127.029f,0f,-49.8592f,-124.898f,30f,-49.8592f,-124.898f,0f,-53.1777f,-121.58f,30f,-53.1777f,-121.58f,0f,-55.3083f,-117.398f,30f,-55.3083f,-117.398f,0f,-56.0424f,-112.763f,30f,-56.0424f,-112.763f,0f});
  }
}
protected class MFVec3f38 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.951062f,0.309f,0f,-0.951062f,0.309f,0f,-0.809038f,0.587756f,0f,-0.809038f,0.587756f,0f,-0.587756f,0.809038f,0f,-0.587756f,0.809038f,0f,-0.309f,0.951062f,0f,-0.309f,0.951062f,0f,0f,1f,0f,0f,1f,0f,0.309f,0.951062f,0f,0.309f,0.951062f,0f,0.587756f,0.809038f,0f,0.587756f,0.809038f,0f,0.809038f,0.587756f,0f,0.809038f,0.587756f,0f,0.951062f,0.309f,0f,0.951062f,0.309f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3239 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f40 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-56.0424f,-112.763f,30f,-56.0424f,-112.763f,0f,-55.3083f,-108.128f,30f,-55.3083f,-108.128f,0f,-53.1777f,-103.946f,30f,-53.1777f,-103.946f,0f,-49.8592f,-100.628f,30f,-49.8592f,-100.628f,0f,-45.6777f,-98.4973f,30f,-45.6777f,-98.4973f,0f,-41.0424f,-97.7631f,30f,-41.0424f,-97.7631f,0f,-36.4072f,-98.4973f,30f,-36.4072f,-98.4973f,0f,-32.2256f,-100.628f,30f,-32.2256f,-100.628f,0f,-28.9072f,-103.946f,30f,-28.9072f,-103.946f,0f,-26.7766f,-108.128f,30f,-26.7766f,-108.128f,0f,-26.0424f,-112.763f,30f,-26.0424f,-112.763f,0f});
  }
}
protected class MFVec3f41 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.951062f,-0.309f,0f,0.951062f,-0.309f,0f,0.809038f,-0.587756f,0f,0.809038f,-0.587756f,0f,0.587756f,-0.809038f,0f,0.587756f,-0.809038f,0f,0.309f,-0.951062f,0f,0.309f,-0.951062f,0f,0f,-1f,0f,0f,-1f,0f,-0.309f,-0.951062f,0f,-0.309f,-0.951062f,0f,-0.587756f,-0.809038f,0f,-0.587756f,-0.809038f,0f,-0.809038f,-0.587756f,0f,-0.809038f,-0.587756f,0f,-0.951062f,-0.309f,0f,-0.951062f,-0.309f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3242 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f43 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-88.923f,-60f,30f,-88.923f,-60f,0f,-89.6572f,-64.6353f,30f,-89.6572f,-64.6353f,0f,-91.7878f,-68.8168f,30f,-91.7878f,-68.8168f,0f,-95.1063f,-72.1353f,30f,-95.1063f,-72.1353f,0f,-99.2878f,-74.2658f,30f,-99.2878f,-74.2658f,0f,-103.923f,-75f,30f,-103.923f,-75f,0f,-108.558f,-74.2658f,30f,-108.558f,-74.2658f,0f,-112.74f,-72.1353f,30f,-112.74f,-72.1353f,0f,-116.058f,-68.8168f,30f,-116.058f,-68.8168f,0f,-118.189f,-64.6353f,30f,-118.189f,-64.6353f,0f,-118.923f,-60f,30f,-118.923f,-60f,0f});
  }
}
protected class MFVec3f44 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.951062f,0.309f,0f,-0.951062f,0.309f,0f,-0.809038f,0.587756f,0f,-0.809038f,0.587756f,0f,-0.587756f,0.809038f,0f,-0.587756f,0.809038f,0f,-0.309f,0.951062f,0f,-0.309f,0.951062f,0f,0f,1f,0f,0f,1f,0f,0.309f,0.951062f,0f,0.309f,0.951062f,0f,0.587756f,0.809038f,0f,0.587756f,0.809038f,0f,0.809038f,0.587756f,0f,0.809038f,0.587756f,0f,0.951062f,0.309f,0f,0.951062f,0.309f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3245 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f46 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-118.923f,-60f,30f,-118.923f,-60f,0f,-118.189f,-55.3647f,30f,-118.189f,-55.3647f,0f,-116.058f,-51.1832f,30f,-116.058f,-51.1832f,0f,-112.74f,-47.8647f,30f,-112.74f,-47.8647f,0f,-108.558f,-45.7342f,30f,-108.558f,-45.7342f,0f,-103.923f,-45f,30f,-103.923f,-45f,0f,-99.2878f,-45.7342f,30f,-99.2878f,-45.7342f,0f,-95.1063f,-47.8647f,30f,-95.1063f,-47.8647f,0f,-91.7878f,-51.1832f,30f,-91.7878f,-51.1832f,0f,-89.6572f,-55.3647f,30f,-89.6572f,-55.3647f,0f,-88.923f,-60f,30f,-88.923f,-60f,0f});
  }
}
protected class MFVec3f47 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.951062f,-0.309f,0f,0.951062f,-0.309f,0f,0.809038f,-0.587756f,0f,0.809038f,-0.587756f,0f,0.587756f,-0.809038f,0f,0.587756f,-0.809038f,0f,0.309f,-0.951062f,0f,0.309f,-0.951062f,0f,0f,-1f,0f,0f,-1f,0f,-0.309f,-0.951062f,0f,-0.309f,-0.951062f,0f,-0.587756f,-0.809038f,0f,-0.587756f,-0.809038f,0f,-0.809038f,-0.587756f,0f,-0.809038f,-0.587756f,0f,-0.951062f,-0.309f,0f,-0.951062f,-0.309f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3248 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f49 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-103.177f,20.8378f,30f,-103.177f,20.8378f,0f,-103.911f,16.2025f,30f,-103.911f,16.2025f,0f,-106.042f,12.021f,30f,-106.042f,12.021f,0f,-109.36f,8.70253f,30f,-109.36f,8.70253f,0f,-113.542f,6.57193f,30f,-113.542f,6.57193f,0f,-118.177f,5.83778f,30f,-118.177f,5.83778f,0f,-122.812f,6.57193f,30f,-122.812f,6.57193f,0f,-126.994f,8.70253f,30f,-126.994f,8.70253f,0f,-130.312f,12.021f,30f,-130.312f,12.021f,0f,-132.443f,16.2025f,30f,-132.443f,16.2025f,0f,-133.177f,20.8378f,30f,-133.177f,20.8378f,0f});
  }
}
protected class MFVec3f50 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.951062f,0.309f,0f,-0.951062f,0.309f,0f,-0.809038f,0.587756f,0f,-0.809038f,0.587756f,0f,-0.587756f,0.809038f,0f,-0.587756f,0.809038f,0f,-0.309f,0.951062f,0f,-0.309f,0.951062f,0f,0f,1f,0f,0f,1f,0f,0.309f,0.951062f,0f,0.309f,0.951062f,0f,0.587756f,0.809038f,0f,0.587756f,0.809038f,0f,0.809038f,0.587756f,0f,0.809038f,0.587756f,0f,0.951062f,0.309f,0f,0.951062f,0.309f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3251 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f52 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-133.177f,20.8378f,30f,-133.177f,20.8378f,0f,-132.443f,25.473f,30f,-132.443f,25.473f,0f,-130.312f,29.6546f,30f,-130.312f,29.6546f,0f,-126.994f,32.973f,30f,-126.994f,32.973f,0f,-122.812f,35.1036f,30f,-122.812f,35.1036f,0f,-118.177f,35.8378f,30f,-118.177f,35.8378f,0f,-113.542f,35.1036f,30f,-113.542f,35.1036f,0f,-109.36f,32.973f,30f,-109.36f,32.973f,0f,-106.042f,29.6546f,30f,-106.042f,29.6546f,0f,-103.911f,25.473f,30f,-103.911f,25.473f,0f,-103.177f,20.8378f,30f,-103.177f,20.8378f,0f});
  }
}
protected class MFVec3f53 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.951062f,-0.309f,0f,0.951062f,-0.309f,0f,0.809038f,-0.587756f,0f,0.809038f,-0.587756f,0f,0.587756f,-0.809038f,0f,0.587756f,-0.809038f,0f,0.309f,-0.951062f,0f,0.309f,-0.951062f,0f,0f,-1f,0f,0f,-1f,0f,-0.309f,-0.951062f,0f,-0.309f,-0.951062f,0f,-0.587756f,-0.809038f,0f,-0.587756f,-0.809038f,0f,-0.809038f,-0.587756f,0f,-0.809038f,-0.587756f,0f,-0.951062f,-0.309f,0f,-0.951062f,-0.309f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3254 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f55 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-62.1345f,91.9253f,30f,-62.1345f,91.9253f,0f,-62.8687f,87.2901f,30f,-62.8687f,87.2901f,0f,-64.9993f,83.1086f,30f,-64.9993f,83.1086f,0f,-68.3177f,79.7901f,30f,-68.3177f,79.7901f,0f,-72.4993f,77.6595f,30f,-72.4993f,77.6595f,0f,-77.1345f,76.9253f,30f,-77.1345f,76.9253f,0f,-81.7698f,77.6595f,30f,-81.7698f,77.6595f,0f,-85.9513f,79.7901f,30f,-85.9513f,79.7901f,0f,-89.2698f,83.1086f,30f,-89.2698f,83.1086f,0f,-91.4004f,87.2901f,30f,-91.4004f,87.2901f,0f,-92.1345f,91.9253f,30f,-92.1345f,91.9253f,0f});
  }
}
protected class MFVec3f56 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.951062f,0.309f,0f,-0.951062f,0.309f,0f,-0.809038f,0.587756f,0f,-0.809038f,0.587756f,0f,-0.587756f,0.809038f,0f,-0.587756f,0.809038f,0f,-0.309f,0.951062f,0f,-0.309f,0.951062f,0f,0f,1f,0f,0f,1f,0f,0.309f,0.951062f,0f,0.309f,0.951062f,0f,0.587756f,0.809038f,0f,0.587756f,0.809038f,0f,0.809038f,0.587756f,0f,0.809038f,0.587756f,0f,0.951062f,0.309f,0f,0.951062f,0.309f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3257 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1});
  }
}
protected class MFVec3f58 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-92.1345f,91.9253f,30f,-92.1345f,91.9253f,0f,-91.4004f,96.5606f,30f,-91.4004f,96.5606f,0f,-89.2698f,100.742f,30f,-89.2698f,100.742f,0f,-85.9513f,104.061f,30f,-85.9513f,104.061f,0f,-81.7698f,106.191f,30f,-81.7698f,106.191f,0f,-77.1345f,106.925f,30f,-77.1345f,106.925f,0f,-72.4993f,106.191f,30f,-72.4993f,106.191f,0f,-68.3177f,104.061f,30f,-68.3177f,104.061f,0f,-64.9993f,100.742f,30f,-64.9993f,100.742f,0f,-62.8687f,96.5606f,30f,-62.8687f,96.5606f,0f,-62.1345f,91.9253f,30f,-62.1345f,91.9253f,0f});
  }
}
protected class MFVec3f59 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.951062f,-0.309f,0f,0.951062f,-0.309f,0f,0.809038f,-0.587756f,0f,0.809038f,-0.587756f,0f,0.587756f,-0.809038f,0f,0.587756f,-0.809038f,0f,0.309f,-0.951062f,0f,0.309f,-0.951062f,0f,0f,-1f,0f,0f,-1f,0f,-0.309f,-0.951062f,0f,-0.309f,-0.951062f,0f,-0.587756f,-0.809038f,0f,-0.587756f,-0.809038f,0f,-0.809038f,-0.587756f,0f,-0.809038f,-0.587756f,0f,-0.951062f,-0.309f,0f,-0.951062f,-0.309f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3260 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {40,41,42,-1,41,43,42,-1,44,45,46,-1,45,47,46,-1,15,14,12,-1,14,48,12,-1,12,48,10,-1,19,18,49,-1,18,50,49,-1,49,50,51,-1,51,52,49,-1,52,53,49,-1,23,22,54,-1,22,38,54,-1,54,38,37,-1,33,3,55,-1,3,56,55,-1,55,56,57,-1,56,24,57,-1,57,24,26,-1,58,27,59,-1,27,29,59,-1,59,29,60,-1,43,61,62,-1,61,63,62,-1,62,63,64,-1,63,65,64,-1,64,65,66,-1,65,67,66,-1,66,67,68,-1,67,69,68,-1,68,69,70,-1,28,27,71,-1,27,72,71,-1,71,72,73,-1,72,31,73,-1,73,31,30,-1,19,74,20,-1,74,75,20,-1,20,75,76,-1,36,35,77,-1,35,78,77,-1,77,78,79,-1,79,78,80,-1,78,81,80,-1,80,81,82,-1,81,83,82,-1,82,83,84,-1,83,85,84,-1,84,85,86,-1,70,69,87,-1,69,88,87,-1,87,88,89,-1,90,91,92,-1,90,92,93,-1,90,93,94,-1,95,96,97,-1,95,97,98,-1,95,98,99,-1,95,99,100,-1,95,100,16,-1,95,16,15,-1,95,15,53,-1,95,53,52,-1,95,52,8,-1,95,8,7,-1,95,7,101,-1,102,103,44,-1,102,44,46,-1,102,46,104,-1,102,104,105,-1,102,105,106,-1,102,106,107,-1,102,107,108,-1,102,108,96,-1,102,96,109,-1,47,110,111,-1,47,111,112,-1,47,112,113,-1,47,113,114,-1,47,114,115,-1,47,115,116,-1,47,116,46,-1,117,118,119,-1,117,119,120,-1,117,120,121,-1,117,121,122,-1,117,122,0,-1,117,0,2,-1,1,123,124,-1,1,124,125,-1,1,125,126,-1,1,126,43,-1,1,43,62,-1,43,126,127,-1,43,127,128,-1,43,128,129,-1,43,129,130,-1,43,130,131,-1,43,131,132,-1,43,132,42,-1,133,40,42,-1,133,42,134,-1,133,134,135,-1,133,135,136,-1,133,136,137,-1,133,137,138,-1,133,138,111,-1,133,111,110,-1,139,140,141,-1,139,141,142,-1,139,142,143,-1,139,143,25,-1,139,25,24,-1,144,111,145,-1,144,145,146,-1,144,146,147,-1,144,147,148,-1,144,148,140,-1,144,140,139,-1,144,139,149,-1,144,149,92,-1,144,92,91,-1,144,91,150,-1,144,150,151,-1,144,151,152,-1,144,152,96,-1,153,12,11,-1,153,11,154,-1,153,154,155,-1,153,155,156,-1,153,156,94,-1,153,94,93,-1,157,9,8,-1,157,8,158,-1,157,158,159,-1,157,159,160,-1,157,160,161,-1,157,161,162,-1,7,84,86,-1,7,86,163,-1,7,163,164,-1,7,164,165,-1,7,165,166,-1,7,166,167,-1,7,167,101,-1,163,168,169,-1,163,169,170,-1,163,170,171,-1,163,171,172,-1,163,172,164,-1,161,173,174,-1,161,174,175,-1,161,175,176,-1,161,176,177,-1,161,177,178,-1,161,178,179,-1,161,179,180,-1,161,180,162,-1,181,174,173,-1,181,173,182,-1,181,182,183,-1,181,183,184,-1,181,184,185,-1,186,181,185,-1,186,185,187,-1,186,187,188,-1,186,188,189,-1,186,189,76,-1,186,76,75,-1,190,35,34,-1,190,34,191,-1,190,191,192,-1,190,192,193,-1,190,193,194,-1,190,194,177,-1,177,194,195,-1,177,195,196,-1,177,196,178,-1,168,163,197,-1,168,197,22,-1,168,22,21,-1,96,95,198,-1,96,198,199,-1,96,199,200,-1,96,200,201,-1,96,201,39,-1,96,39,38,-1,96,38,202,-1,96,202,109,-1,96,108,203,-1,96,203,204,-1,96,204,205,-1,96,205,206,-1,96,206,144,-1,111,144,207,-1,111,207,208,-1,111,208,209,-1,111,209,210,-1,111,210,112,-1,123,1,0,-1,123,0,32,-1,123,32,31,-1,123,31,3,-1,123,3,6,-1,123,6,211,-1,123,211,212,-1,123,212,213,-1,123,213,111,-1,111,138,214,-1});
  }
}
protected class MFInt3261 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {111,214,215,-1,111,215,216,-1,111,216,217,-1,111,217,123,-1,218,219,220,-1,218,220,221,-1,218,221,222,-1,218,222,223,-1,218,223,89,-1,218,89,88,-1,219,224,225,-1,219,225,226,-1,219,226,220,-1,119,118,227,-1,119,227,228,-1,119,228,224,-1,119,224,219,-1,119,219,229,-1,119,229,230,-1,119,230,231,-1,119,231,232,-1,233,234,235,-1,233,235,236,-1,233,236,237,-1,233,237,238,-1,233,238,232,-1,233,232,231,-1,234,59,60,-1,234,60,239,-1,234,239,240,-1,234,240,241,-1,234,241,235,-1,0,1,2,-1,3,4,5,-1,6,3,5,-1,7,8,9,-1,10,11,12,-1,13,14,15,-1,13,15,16,-1,17,18,19,-1,19,20,17,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,4,3,-1,34,35,36,-1,37,38,39,-1});
  }
}
protected class MFVec3f62 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {89.6572f,-55.3647f,0f,103.911f,25.473f,0f,103.177f,20.8378f,0f,66.0591f,-134.671f,0f,55.3083f,-117.398f,0f,56.0424f,-112.763f,0f,55.3083f,-108.128f,0f,-103.911f,25.473f,0f,-89.6572f,-55.3647f,0f,-103.177f,20.8378f,0f,-45.6777f,-127.029f,0f,-41.0424f,-127.763f,0f,-52.0958f,-140.663f,0f,-55.3083f,-117.398f,0f,-53.1777f,-121.58f,0f,-66.0591f,-134.671f,0f,-56.0424f,-112.763f,0f,-99.2878f,-74.2658f,0f,-95.1063f,-72.1353f,0f,-103.345f,-108.719f,0f,-103.923f,-75f,0f,-72.4993f,106.191f,0f,-79.3446f,127.297f,0f,-68.3177f,104.061f,0f,37.5979f,-145.212f,0f,36.4072f,-127.029f,0f,41.0424f,-127.763f,0f,103.345f,-108.719f,0f,99.2878f,-74.2658f,0f,103.923f,-75f,0f,89.6572f,-64.6353f,0f,79.3446f,-127.297f,0f,88.923f,-60f,0f,53.1777f,-121.58f,0f,-130.312f,29.6546f,0f,-146.929f,30.1948f,0f,-126.994f,32.973f,0f,-62.8687f,96.5606f,0f,-66.0591f,134.671f,0f,-62.1345f,91.9253f,0f,79.3446f,127.297f,0f,91.8159f,118.616f,0f,77.1345f,106.925f,0f,103.345f,108.719f,0f,7.59738f,149.807f,0f,22.7142f,148.27f,0f,0f,135f,0f,37.5979f,145.212f,0f,-49.8592f,-124.898f,0f,-91.8159f,-118.616f,0f,-91.7878f,-68.8168f,0f,-89.6572f,-64.6353f,0f,-88.923f,-60f,0f,-79.3446f,-127.297f,0f,-64.9993f,100.742f,0f,49.8592f,-124.898f,0f,52.0958f,-140.663f,0f,45.6777f,-127.029f,0f,113.814f,-97.7059f,0f,123.115f,-85.6902f,0f,108.558f,-74.2658f,0f,113.814f,97.7059f,0f,106.042f,29.6546f,0f,123.115f,85.6902f,0f,109.36f,32.973f,0f,131.152f,72.7953f,0f,113.542f,35.1036f,0f,137.844f,59.1534f,0f,118.177f,35.8378f,0f,143.121f,44.9045f,0f,122.812f,35.1036f,0f,95.1063f,-72.1353f,0f,91.8159f,-118.616f,0f,91.7878f,-68.8168f,0f,-113.814f,-97.7059f,0f,-123.115f,-85.6902f,0f,-108.558f,-74.2658f,0f,-122.812f,35.1036f,0f,-143.121f,44.9045f,0f,-118.177f,35.8378f,0f,-113.542f,35.1036f,0f,-137.844f,59.1534f,0f,-109.36f,32.973f,0f,-131.152f,72.7953f,0f,-106.042f,29.6546f,0f,-123.115f,85.6902f,0f,-113.814f,97.7059f,0f,126.994f,32.973f,0f,146.929f,30.1948f,0f,130.312f,29.6546f,0f,-26.0424f,-112.763f,0f,-26.7766f,-108.128f,0f,-7.59738f,-149.807f,0f,-22.7142f,-148.27f,0f,-26.7766f,-117.398f,0f,-77.1345f,76.9253f,0f,-41.0424f,-97.7631f,0f,-45.6777f,-98.4973f,0f,-49.8592f,-100.628f,0f,-53.1777f,-103.946f,0f,-55.3083f,-108.128f,0f,-81.7698f,77.6595f,0f,-22.7142f,148.27f,0f,-7.59738f,149.807f,0f,-4.63525f,134.266f,0f,-8.81678f,132.135f,0f,-12.1353f,128.817f,0f,-14.2658f,124.635f,0f,-15f,120f,0f,-37.5979f,145.212f,0f,52.0958f,140.663f,0f,41.0424f,-97.7631f,0f,15f,120f,0f,14.2658f,124.635f,0f,12.1353f,128.817f,0f,8.81678f,132.135f,0f,4.63525f,134.266f,0f,103.911f,16.2025f,0f,106.042f,12.021f,0f,103.923f,-45f,0f,99.2878f,-45.7342f,0f,95.1063f,-47.8647f,0f,91.7878f,-51.1832f,0f,77.1345f,76.9253f,0f,81.7698f,77.6595f,0f,85.9513f,79.7901f,0f,89.2698f,83.1086f,0f,91.4004f,87.2901f,0f,92.1345f,91.9253f,0f,91.4004f,96.5606f,0f,89.2698f,100.742f,0f,85.9513f,104.061f,0f,81.7698f,106.191f,0f,66.0591f,134.671f,0f,72.4993f,106.191f,0f,68.3177f,104.061f,0f,64.9993f,100.742f,0f,62.8687f,96.5606f,0f,62.1345f,91.9253f,0f,22.7142f,-148.27f,0f,26.0424f,-112.763f,0f,26.7766f,-117.398f,0f,28.9072f,-121.58f,0f,32.2256f,-124.898f,0f,0f,105f,0f,36.4072f,-98.4973f,0f,32.2256f,-100.628f,0f,28.9072f,-103.946f,0f,26.7766f,-108.128f,0f,7.59738f,-149.807f,0f,-28.9072f,-103.946f,0f,-32.2256f,-100.628f,0f,-36.4072f,-98.4973f,0f,-37.5979f,-145.212f,0f,-36.4072f,-127.029f,0f,-32.2256f,-124.898f,0f,-28.9072f,-121.58f,0f,-103.911f,16.2025f,0f,-91.7878f,-51.1832f,0f,-95.1063f,-47.8647f,0f,-99.2878f,-45.7342f,0f,-103.923f,-45f,0f,-106.042f,12.021f,0f,-103.345f,108.719f,0f,-92.1345f,91.9253f,0f,-91.4004f,87.2901f,0f,-89.2698f,83.1086f,0f,-85.9513f,79.7901f,0f,-77.1345f,106.925f,0f,-81.7698f,106.191f,0f,-85.9513f,104.061f,0f,-89.2698f,100.742f,0f,-91.4004f,96.5606f,0f,-108.558f,-45.7342f,0f,-143.121f,-44.9045f,0f,-146.929f,-30.1948f,0f,-149.23f,-15.1752f,0f,-150f,0f,0f,-118.177f,5.83778f,0f,-113.542f,6.57193f,0f,-109.36f,8.70253f,0f,-137.844f,-59.1534f,0f,-112.74f,-47.8647f,0f,-116.058f,-51.1832f,0f,-118.189f,-55.3647f,0f,-118.923f,-60f,0f,-131.152f,-72.7953f,0f,-118.189f,-64.6353f,0f,-116.058f,-68.8168f,0f,-112.74f,-72.1353f,0f,-149.23f,15.1752f,0f,-132.443f,25.473f,0f,-133.177f,20.8378f,0f,-132.443f,16.2025f,0f,-130.312f,12.021f,0f,-126.994f,8.70253f,0f,-122.812f,6.57193f,0f,-91.8159f,118.616f,0f,-72.4993f,77.6595f,0f,-68.3177f,79.7901f,0f,-64.9993f,83.1086f,0f,-62.8687f,87.2901f,0f,-52.0958f,140.663f,0f,-14.2658f,115.365f,0f,-12.1353f,111.183f,0f,-8.81678f,107.865f,0f,-4.63525f,105.734f,0f,4.63525f,105.734f,0f,8.81678f,107.865f,0f,12.1353f,111.183f,0f,14.2658f,115.365f,0f,53.1777f,-103.946f,0f,49.8592f,-100.628f,0f,45.6777f,-98.4973f,0f,62.8687f,87.2901f,0f,64.9993f,83.1086f,0f,68.3177f,79.7901f,0f,72.4993f,77.6595f,0f,149.23f,15.1752f,0f,150f,0f,0f,130.312f,12.021f,0f,132.443f,16.2025f,0f,133.177f,20.8378f,0f,132.443f,25.473f,0f,118.177f,5.83778f,0f,122.812f,6.57193f,0f,126.994f,8.70253f,0f,109.36f,8.70253f,0f,113.542f,6.57193f,0f,149.23f,-15.1752f,0f,146.929f,-30.1948f,0f,143.121f,-44.9045f,0f,108.558f,-45.7342f,0f,137.844f,-59.1534f,0f,131.152f,-72.7953f,0f,118.923f,-60f,0f,118.189f,-55.3647f,0f,116.058f,-51.1832f,0f,112.74f,-47.8647f,0f,112.74f,-72.1353f,0f,116.058f,-68.8168f,0f,118.189f,-64.6353f,0f});
  }
}
protected class MFInt3263 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {40,41,42,-1,41,43,42,-1,44,45,46,-1,45,47,46,-1,14,13,48,-1,13,10,48,-1,48,10,12,-1,18,17,49,-1,17,50,49,-1,49,50,51,-1,52,51,53,-1,51,50,53,-1,22,21,38,-1,21,54,38,-1,38,54,39,-1,5,33,55,-1,33,56,55,-1,55,56,26,-1,56,57,26,-1,26,57,24,-1,29,58,27,-1,58,59,27,-1,27,59,60,-1,61,42,62,-1,42,63,62,-1,62,63,64,-1,63,65,64,-1,64,65,66,-1,65,67,66,-1,66,67,68,-1,67,69,68,-1,68,69,70,-1,29,28,71,-1,28,72,71,-1,71,72,31,-1,72,73,31,-1,31,73,32,-1,74,17,75,-1,17,20,75,-1,75,20,76,-1,35,34,77,-1,34,78,77,-1,77,78,79,-1,77,79,80,-1,79,81,80,-1,80,81,82,-1,81,83,82,-1,82,83,84,-1,83,85,84,-1,84,85,86,-1,68,70,87,-1,70,88,87,-1,87,88,89,-1,90,91,92,-1,90,92,93,-1,90,93,94,-1,95,96,9,-1,95,9,8,-1,95,8,52,-1,95,52,53,-1,95,53,13,-1,95,13,16,-1,95,16,97,-1,95,97,98,-1,95,98,99,-1,95,99,100,-1,95,100,101,-1,102,103,101,-1,102,101,104,-1,102,104,105,-1,102,105,106,-1,102,106,107,-1,102,107,108,-1,102,108,47,-1,102,47,45,-1,102,45,109,-1,46,47,110,-1,46,110,111,-1,46,111,112,-1,46,112,113,-1,46,113,114,-1,46,114,115,-1,46,115,116,-1,117,0,2,-1,117,2,118,-1,117,118,119,-1,117,119,120,-1,117,120,121,-1,117,121,122,-1,1,63,42,-1,1,42,123,-1,1,123,124,-1,1,124,125,-1,1,125,126,-1,42,43,127,-1,42,127,128,-1,42,128,129,-1,42,129,130,-1,42,130,131,-1,42,131,132,-1,42,132,123,-1,133,116,115,-1,133,115,134,-1,133,134,135,-1,133,135,136,-1,133,136,137,-1,133,137,138,-1,133,138,43,-1,133,43,41,-1,139,26,25,-1,139,25,140,-1,139,140,141,-1,139,141,142,-1,139,142,143,-1,144,101,145,-1,144,145,146,-1,144,146,147,-1,144,147,94,-1,144,94,93,-1,144,93,148,-1,144,148,139,-1,144,139,143,-1,144,143,149,-1,144,149,150,-1,144,150,151,-1,144,151,152,-1,144,152,115,-1,153,92,91,-1,153,91,154,-1,153,154,155,-1,153,155,156,-1,153,156,11,-1,153,11,10,-1,157,158,159,-1,157,159,160,-1,157,160,161,-1,157,161,162,-1,157,162,8,-1,157,8,7,-1,9,96,163,-1,9,163,164,-1,9,164,165,-1,9,165,166,-1,9,166,167,-1,9,167,86,-1,9,86,85,-1,167,166,168,-1,167,168,169,-1,167,169,170,-1,167,170,171,-1,167,171,172,-1,159,158,173,-1,159,173,174,-1,159,174,175,-1,159,175,176,-1,159,176,177,-1,159,177,178,-1,159,178,179,-1,159,179,180,-1,181,182,183,-1,181,183,184,-1,181,184,185,-1,181,185,180,-1,181,180,179,-1,186,75,76,-1,186,76,187,-1,186,187,188,-1,186,188,189,-1,186,189,182,-1,186,182,181,-1,190,176,191,-1,190,191,192,-1,190,192,193,-1,190,193,194,-1,190,194,36,-1,190,36,35,-1,176,175,195,-1,176,195,196,-1,176,196,191,-1,172,23,22,-1,172,22,197,-1,172,197,167,-1,101,103,198,-1,101,198,38,-1,101,38,37,-1,101,37,199,-1,101,199,200,-1,101,200,201,-1,101,201,202,-1,101,202,95,-1,101,144,203,-1,101,203,204,-1,101,204,205,-1,101,205,206,-1,101,206,104,-1,115,114,207,-1,115,207,208,-1,115,208,209,-1,115,209,210,-1,115,210,144,-1,126,115,211,-1,126,211,212,-1,126,212,213,-1,126,213,6,-1,126,6,5,-1,126,5,31,-1,126,31,30,-1,126,30,2,-1,126,2,1,-1,115,126,214,-1});
  }
}
protected class MFInt3264 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {115,214,215,-1,115,215,216,-1,115,216,217,-1,115,217,134,-1,218,87,89,-1,218,89,219,-1,218,219,220,-1,218,220,221,-1,218,221,222,-1,218,222,223,-1,223,222,224,-1,223,224,225,-1,223,225,226,-1,121,227,228,-1,121,228,229,-1,121,229,230,-1,121,230,223,-1,121,223,226,-1,121,226,231,-1,121,231,232,-1,121,232,122,-1,233,228,227,-1,233,227,234,-1,233,234,235,-1,233,235,236,-1,233,236,237,-1,233,237,238,-1,238,237,239,-1,238,239,240,-1,238,240,241,-1,238,241,60,-1,238,60,59,-1,0,1,2,-1,3,4,5,-1,3,5,6,-1,7,8,9,-1,10,11,12,-1,13,14,15,-1,16,13,15,-1,17,18,19,-1,19,20,17,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,5,4,33,-1,34,35,36,-1,37,38,39,-1});
  }
}
protected class MFVec3f65 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {103.177f,20.8378f,30f,103.911f,25.473f,30f,89.6572f,-55.3647f,30f,56.0424f,-112.763f,30f,55.3083f,-117.398f,30f,66.0591f,-134.671f,30f,55.3083f,-108.128f,30f,-103.177f,20.8378f,30f,-89.6572f,-55.3647f,30f,-103.911f,25.473f,30f,-52.0958f,-140.663f,30f,-41.0424f,-127.763f,30f,-45.6777f,-127.029f,30f,-66.0591f,-134.671f,30f,-53.1777f,-121.58f,30f,-55.3083f,-117.398f,30f,-56.0424f,-112.763f,30f,-103.345f,-108.719f,30f,-95.1063f,-72.1353f,30f,-99.2878f,-74.2658f,30f,-103.923f,-75f,30f,-68.3177f,104.061f,30f,-79.3446f,127.297f,30f,-72.4993f,106.191f,30f,41.0424f,-127.763f,30f,36.4072f,-127.029f,30f,37.5979f,-145.212f,30f,103.923f,-75f,30f,99.2878f,-74.2658f,30f,103.345f,-108.719f,30f,88.923f,-60f,30f,79.3446f,-127.297f,30f,89.6572f,-64.6353f,30f,53.1777f,-121.58f,30f,-126.994f,32.973f,30f,-146.929f,30.1948f,30f,-130.312f,29.6546f,30f,-62.1345f,91.9253f,30f,-66.0591f,134.671f,30f,-62.8687f,96.5606f,30f,91.8159f,118.616f,30f,79.3446f,127.297f,30f,103.345f,108.719f,30f,77.1345f,106.925f,30f,22.7142f,148.27f,30f,7.59738f,149.807f,30f,37.5979f,145.212f,30f,0f,135f,30f,-49.8592f,-124.898f,30f,-91.7878f,-68.8168f,30f,-91.8159f,-118.616f,30f,-89.6572f,-64.6353f,30f,-88.923f,-60f,30f,-79.3446f,-127.297f,30f,-64.9993f,100.742f,30f,52.0958f,-140.663f,30f,49.8592f,-124.898f,30f,45.6777f,-127.029f,30f,113.814f,-97.7059f,30f,123.115f,-85.6902f,30f,108.558f,-74.2658f,30f,113.814f,97.7059f,30f,123.115f,85.6902f,30f,106.042f,29.6546f,30f,131.152f,72.7953f,30f,109.36f,32.973f,30f,137.844f,59.1534f,30f,113.542f,35.1036f,30f,143.121f,44.9045f,30f,118.177f,35.8378f,30f,122.812f,35.1036f,30f,91.8159f,-118.616f,30f,95.1063f,-72.1353f,30f,91.7878f,-68.8168f,30f,-113.814f,-97.7059f,30f,-123.115f,-85.6902f,30f,-108.558f,-74.2658f,30f,-143.121f,44.9045f,30f,-122.812f,35.1036f,30f,-118.177f,35.8378f,30f,-137.844f,59.1534f,30f,-113.542f,35.1036f,30f,-131.152f,72.7953f,30f,-109.36f,32.973f,30f,-123.115f,85.6902f,30f,-106.042f,29.6546f,30f,-113.814f,97.7059f,30f,146.929f,30.1948f,30f,126.994f,32.973f,30f,130.312f,29.6546f,30f,-26.0424f,-112.763f,30f,-26.7766f,-117.398f,30f,-22.7142f,-148.27f,30f,-7.59738f,-149.807f,30f,-26.7766f,-108.128f,30f,-77.1345f,76.9253f,30f,-81.7698f,77.6595f,30f,-55.3083f,-108.128f,30f,-53.1777f,-103.946f,30f,-49.8592f,-100.628f,30f,-45.6777f,-98.4973f,30f,-41.0424f,-97.7631f,30f,-22.7142f,148.27f,30f,-37.5979f,145.212f,30f,-15f,120f,30f,-14.2658f,124.635f,30f,-12.1353f,128.817f,30f,-8.81678f,132.135f,30f,-4.63525f,134.266f,30f,-7.59738f,149.807f,30f,4.63525f,134.266f,30f,8.81678f,132.135f,30f,12.1353f,128.817f,30f,14.2658f,124.635f,30f,15f,120f,30f,41.0424f,-97.7631f,30f,52.0958f,140.663f,30f,103.911f,16.2025f,30f,91.7878f,-51.1832f,30f,95.1063f,-47.8647f,30f,99.2878f,-45.7342f,30f,103.923f,-45f,30f,106.042f,12.021f,30f,89.2698f,83.1086f,30f,85.9513f,79.7901f,30f,81.7698f,77.6595f,30f,77.1345f,76.9253f,30f,81.7698f,106.191f,30f,85.9513f,104.061f,30f,89.2698f,100.742f,30f,91.4004f,96.5606f,30f,92.1345f,91.9253f,30f,91.4004f,87.2901f,30f,66.0591f,134.671f,30f,62.1345f,91.9253f,30f,62.8687f,96.5606f,30f,64.9993f,100.742f,30f,68.3177f,104.061f,30f,72.4993f,106.191f,30f,22.7142f,-148.27f,30f,32.2256f,-124.898f,30f,28.9072f,-121.58f,30f,26.7766f,-117.398f,30f,26.0424f,-112.763f,30f,0f,105f,30f,-36.4072f,-98.4973f,30f,-32.2256f,-100.628f,30f,-28.9072f,-103.946f,30f,7.59738f,-149.807f,30f,26.7766f,-108.128f,30f,28.9072f,-103.946f,30f,32.2256f,-100.628f,30f,36.4072f,-98.4973f,30f,-37.5979f,-145.212f,30f,-28.9072f,-121.58f,30f,-32.2256f,-124.898f,30f,-36.4072f,-127.029f,30f,-103.911f,16.2025f,30f,-106.042f,12.021f,30f,-103.923f,-45f,30f,-99.2878f,-45.7342f,30f,-95.1063f,-47.8647f,30f,-91.7878f,-51.1832f,30f,-85.9513f,79.7901f,30f,-89.2698f,83.1086f,30f,-91.4004f,87.2901f,30f,-92.1345f,91.9253f,30f,-103.345f,108.719f,30f,-91.4004f,96.5606f,30f,-89.2698f,100.742f,30f,-85.9513f,104.061f,30f,-81.7698f,106.191f,30f,-77.1345f,106.925f,30f,-109.36f,8.70253f,30f,-113.542f,6.57193f,30f,-118.177f,5.83778f,30f,-150f,0f,30f,-149.23f,-15.1752f,30f,-146.929f,-30.1948f,30f,-143.121f,-44.9045f,30f,-108.558f,-45.7342f,30f,-137.844f,-59.1534f,30f,-118.923f,-60f,30f,-118.189f,-55.3647f,30f,-116.058f,-51.1832f,30f,-112.74f,-47.8647f,30f,-131.152f,-72.7953f,30f,-112.74f,-72.1353f,30f,-116.058f,-68.8168f,30f,-118.189f,-64.6353f,30f,-149.23f,15.1752f,30f,-130.312f,12.021f,30f,-132.443f,16.2025f,30f,-133.177f,20.8378f,30f,-132.443f,25.473f,30f,-122.812f,6.57193f,30f,-126.994f,8.70253f,30f,-91.8159f,118.616f,30f,-52.0958f,140.663f,30f,-62.8687f,87.2901f,30f,-64.9993f,83.1086f,30f,-68.3177f,79.7901f,30f,-72.4993f,77.6595f,30f,-4.63525f,105.734f,30f,-8.81678f,107.865f,30f,-12.1353f,111.183f,30f,-14.2658f,115.365f,30f,14.2658f,115.365f,30f,12.1353f,111.183f,30f,8.81678f,107.865f,30f,4.63525f,105.734f,30f,45.6777f,-98.4973f,30f,49.8592f,-100.628f,30f,53.1777f,-103.946f,30f,72.4993f,77.6595f,30f,68.3177f,79.7901f,30f,64.9993f,83.1086f,30f,62.8687f,87.2901f,30f,149.23f,15.1752f,30f,132.443f,25.473f,30f,133.177f,20.8378f,30f,132.443f,16.2025f,30f,130.312f,12.021f,30f,150f,0f,30f,126.994f,8.70253f,30f,122.812f,6.57193f,30f,118.177f,5.83778f,30f,108.558f,-45.7342f,30f,143.121f,-44.9045f,30f,146.929f,-30.1948f,30f,149.23f,-15.1752f,30f,113.542f,6.57193f,30f,109.36f,8.70253f,30f,137.844f,-59.1534f,30f,112.74f,-47.8647f,30f,116.058f,-51.1832f,30f,118.189f,-55.3647f,30f,118.923f,-60f,30f,131.152f,-72.7953f,30f,118.189f,-64.6353f,30f,116.058f,-68.8168f,30f,112.74f,-72.1353f,30f});
  }
}
protected class MFInt3266 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1});
  }
}
protected class MFVec3f67 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-75f,0f,0f,-75f,0f,20f,-74.2366f,10.6736f,0f,-74.2366f,10.6736f,20f,-71.962f,21.1299f,0f,-71.962f,21.1299f,20f,-68.2224f,31.1561f,0f,-68.2224f,31.1561f,20f,-63.094f,40.5481f,0f,-63.094f,40.5481f,20f,-56.6812f,49.1146f,0f,-56.6812f,49.1146f,20f,-49.1146f,56.6812f,0f,-49.1146f,56.6812f,20f,-40.5481f,63.094f,0f,-40.5481f,63.094f,20f,-31.1561f,68.2224f,0f,-31.1561f,68.2224f,20f,-21.1299f,71.962f,0f,-21.1299f,71.962f,20f,-10.6736f,74.2366f,0f,-10.6736f,74.2366f,20f,0f,75f,0f,0f,75f,20f,10.6736f,74.2366f,0f,10.6736f,74.2366f,20f,21.1299f,71.962f,0f,21.1299f,71.962f,20f,31.1561f,68.2224f,0f,31.1561f,68.2224f,20f,40.5481f,63.094f,0f,40.5481f,63.094f,20f,49.1146f,56.6812f,0f,49.1146f,56.6812f,20f,56.6812f,49.1146f,0f,56.6812f,49.1146f,20f,63.094f,40.5481f,0f,63.094f,40.5481f,20f,68.2224f,31.1561f,0f,68.2224f,31.1561f,20f,71.962f,21.1299f,0f,71.962f,21.1299f,20f,74.2366f,10.6736f,0f,74.2366f,10.6736f,20f,75f,0f,0f,75f,0f,20f});
  }
}
protected class MFVec3f68 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.989822f,0.142308f,0f,-0.989822f,0.142308f,0f,-0.959498f,0.281716f,0f,-0.959498f,0.281716f,0f,-0.909645f,0.415387f,0f,-0.909645f,0.415387f,0f,-0.841257f,0.540635f,0f,-0.841257f,0.540635f,0f,-0.755771f,0.654836f,0f,-0.755771f,0.654836f,0f,-0.654836f,0.755771f,0f,-0.654836f,0.755771f,0f,-0.540635f,0.841257f,0f,-0.540635f,0.841257f,0f,-0.415387f,0.909645f,0f,-0.415387f,0.909645f,0f,-0.281716f,0.959498f,0f,-0.281716f,0.959498f,0f,-0.142308f,0.989822f,0f,-0.142308f,0.989822f,0f,0f,1f,0f,0f,1f,0f,0.142308f,0.989822f,0f,0.142308f,0.989822f,0f,0.281716f,0.959498f,0f,0.281716f,0.959498f,0f,0.415387f,0.909645f,0f,0.415387f,0.909645f,0f,0.540635f,0.841257f,0f,0.540635f,0.841257f,0f,0.654836f,0.755771f,0f,0.654836f,0.755771f,0f,0.755771f,0.654836f,0f,0.755771f,0.654836f,0f,0.841257f,0.540635f,0f,0.841257f,0.540635f,0f,0.909645f,0.415387f,0f,0.909645f,0.415387f,0f,0.959498f,0.281716f,0f,0.959498f,0.281716f,0f,0.989822f,0.142308f,0f,0.989822f,0.142308f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3269 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1});
  }
}
protected class MFVec3f70 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {75f,0f,0f,75f,0f,20f,74.2366f,-10.6736f,0f,74.2366f,-10.6736f,20f,71.962f,-21.1299f,0f,71.962f,-21.1299f,20f,68.2224f,-31.1561f,0f,68.2224f,-31.1561f,20f,63.094f,-40.5481f,0f,63.094f,-40.5481f,20f,56.6812f,-49.1146f,0f,56.6812f,-49.1146f,20f,49.1146f,-56.6812f,0f,49.1146f,-56.6812f,20f,40.5481f,-63.094f,0f,40.5481f,-63.094f,20f,31.1561f,-68.2224f,0f,31.1561f,-68.2224f,20f,21.1299f,-71.962f,0f,21.1299f,-71.962f,20f,10.6736f,-74.2366f,0f,10.6736f,-74.2366f,20f,0f,-75f,0f,0f,-75f,20f,-10.6736f,-74.2366f,0f,-10.6736f,-74.2366f,20f,-21.1299f,-71.962f,0f,-21.1299f,-71.962f,20f,-31.1561f,-68.2224f,0f,-31.1561f,-68.2224f,20f,-40.5481f,-63.094f,0f,-40.5481f,-63.094f,20f,-49.1146f,-56.6812f,0f,-49.1146f,-56.6812f,20f,-56.6812f,-49.1146f,0f,-56.6812f,-49.1146f,20f,-63.094f,-40.5481f,0f,-63.094f,-40.5481f,20f,-68.2224f,-31.1561f,0f,-68.2224f,-31.1561f,20f,-71.962f,-21.1299f,0f,-71.962f,-21.1299f,20f,-74.2366f,-10.6736f,0f,-74.2366f,-10.6736f,20f,-75f,0f,0f,-75f,0f,20f});
  }
}
protected class MFVec3f71 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.989822f,-0.142308f,0f,0.989822f,-0.142308f,0f,0.959498f,-0.281716f,0f,0.959498f,-0.281716f,0f,0.909645f,-0.415387f,0f,0.909645f,-0.415387f,0f,0.841257f,-0.540635f,0f,0.841257f,-0.540635f,0f,0.755771f,-0.654836f,0f,0.755771f,-0.654836f,0f,0.654836f,-0.755771f,0f,0.654836f,-0.755771f,0f,0.540635f,-0.841257f,0f,0.540635f,-0.841257f,0f,0.415387f,-0.909645f,0f,0.415387f,-0.909645f,0f,0.281716f,-0.959498f,0f,0.281716f,-0.959498f,0f,0.142308f,-0.989822f,0f,0.142308f,-0.989822f,0f,0f,-1f,0f,0f,-1f,0f,-0.142308f,-0.989822f,0f,-0.142308f,-0.989822f,0f,-0.281716f,-0.959498f,0f,-0.281716f,-0.959498f,0f,-0.415387f,-0.909645f,0f,-0.415387f,-0.909645f,0f,-0.540635f,-0.841257f,0f,-0.540635f,-0.841257f,0f,-0.654836f,-0.755771f,0f,-0.654836f,-0.755771f,0f,-0.755771f,-0.654836f,0f,-0.755771f,-0.654836f,0f,-0.841257f,-0.540635f,0f,-0.841257f,-0.540635f,0f,-0.909645f,-0.415387f,0f,-0.909645f,-0.415387f,0f,-0.959498f,-0.281716f,0f,-0.959498f,-0.281716f,0f,-0.989822f,-0.142308f,0f,-0.989822f,-0.142308f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3272 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {2,1,3,-1,1,4,3,-1,3,4,5,-1,4,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,8,10,9,-1,9,10,11,-1,10,12,11,-1,11,12,13,-1,12,14,13,-1,13,14,15,-1,14,16,15,-1,15,16,17,-1,16,18,17,-1,17,18,19,-1,18,20,19,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,22,24,23,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,26,28,27,-1,27,28,29,-1,28,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,36,38,37,-1,37,38,39,-1,38,40,39,-1,39,40,41,-1,40,42,41,-1,41,42,43,-1,0,1,2,-1});
  }
}
protected class MFVec3f73 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,75f,0f,10.6736f,74.2366f,0f,-10.6736f,74.2366f,0f,-21.1299f,71.962f,0f,21.1299f,71.962f,0f,-31.1561f,68.2224f,0f,31.1561f,68.2224f,0f,-40.5481f,63.094f,0f,40.5481f,63.094f,0f,-49.1146f,56.6812f,0f,49.1146f,56.6812f,0f,-56.6812f,49.1146f,0f,56.6812f,49.1146f,0f,-63.094f,40.5481f,0f,63.094f,40.5481f,0f,-68.2224f,31.1561f,0f,68.2224f,31.1561f,0f,-71.962f,21.1299f,0f,71.962f,21.1299f,0f,-74.2366f,10.6736f,0f,74.2366f,10.6736f,0f,-75f,0f,0f,75f,0f,0f,-74.2366f,-10.6736f,0f,74.2366f,-10.6736f,0f,-71.962f,-21.1299f,0f,71.962f,-21.1299f,0f,-68.2224f,-31.1561f,0f,68.2224f,-31.1561f,0f,-63.094f,-40.5481f,0f,63.094f,-40.5481f,0f,-56.6812f,-49.1146f,0f,56.6812f,-49.1146f,0f,-49.1146f,-56.6812f,0f,49.1146f,-56.6812f,0f,-40.5481f,-63.094f,0f,40.5481f,-63.094f,0f,-31.1561f,-68.2224f,0f,31.1561f,-68.2224f,0f,-21.1299f,-71.962f,0f,21.1299f,-71.962f,0f,-10.6736f,-74.2366f,0f,10.6736f,-74.2366f,0f,0f,-75f,0f});
  }
}
protected class MFInt3274 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,0,3,-1,0,4,3,-1,3,4,5,-1,4,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,8,10,9,-1,9,10,11,-1,10,12,11,-1,11,12,13,-1,12,14,13,-1,13,14,15,-1,14,16,15,-1,15,16,17,-1,16,18,17,-1,17,18,19,-1,18,20,19,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,22,24,23,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,26,28,27,-1,27,28,29,-1,28,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,36,38,37,-1,37,38,39,-1,38,40,39,-1,39,40,41,-1,40,42,41,-1,41,42,43,-1,0,1,2,-1});
  }
}
protected class MFVec3f75 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-10.6736f,74.2366f,20f,10.6736f,74.2366f,20f,0f,75f,20f,21.1299f,71.962f,20f,-21.1299f,71.962f,20f,31.1561f,68.2224f,20f,-31.1561f,68.2224f,20f,40.5481f,63.094f,20f,-40.5481f,63.094f,20f,49.1146f,56.6812f,20f,-49.1146f,56.6812f,20f,56.6812f,49.1146f,20f,-56.6812f,49.1146f,20f,63.094f,40.5481f,20f,-63.094f,40.5481f,20f,68.2224f,31.1561f,20f,-68.2224f,31.1561f,20f,71.962f,21.1299f,20f,-71.962f,21.1299f,20f,74.2366f,10.6736f,20f,-74.2366f,10.6736f,20f,75f,0f,20f,-75f,0f,20f,74.2366f,-10.6736f,20f,-74.2366f,-10.6736f,20f,71.962f,-21.1299f,20f,-71.962f,-21.1299f,20f,68.2224f,-31.1561f,20f,-68.2224f,-31.1561f,20f,63.094f,-40.5481f,20f,-63.094f,-40.5481f,20f,56.6812f,-49.1146f,20f,-56.6812f,-49.1146f,20f,49.1146f,-56.6812f,20f,-49.1146f,-56.6812f,20f,40.5481f,-63.094f,20f,-40.5481f,-63.094f,20f,31.1561f,-68.2224f,20f,-31.1561f,-68.2224f,20f,21.1299f,-71.962f,20f,-21.1299f,-71.962f,20f,10.6736f,-74.2366f,20f,-10.6736f,-74.2366f,20f,0f,-75f,20f});
  }
}
protected class MFInt3276 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1});
  }
}
protected class MFVec3f77 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-45f,0f,0f,-45f,0f,35f,-44.2338f,8.26873f,0f,-44.2338f,8.26873f,35f,-41.9613f,16.2559f,0f,-41.9613f,16.2559f,35f,-38.2598f,23.6894f,0f,-38.2598f,23.6894f,35f,-33.2554f,30.3163f,0f,-33.2554f,30.3163f,35f,-27.1186f,35.9108f,0f,-27.1186f,35.9108f,35f,-20.0582f,40.2823f,0f,-20.0582f,40.2823f,35f,-12.3148f,43.2822f,0f,-12.3148f,43.2822f,35f,-4.15208f,44.808f,0f,-4.15208f,44.808f,35f,4.15208f,44.808f,0f,4.15208f,44.808f,35f,12.3148f,43.2822f,0f,12.3148f,43.2822f,35f,20.0582f,40.2823f,0f,20.0582f,40.2823f,35f,27.1186f,35.9108f,0f,27.1186f,35.9108f,35f,33.2554f,30.3163f,0f,33.2554f,30.3163f,35f,38.2598f,23.6894f,0f,38.2598f,23.6894f,35f,41.9613f,16.2559f,0f,41.9613f,16.2559f,35f,44.2338f,8.26873f,0f,44.2338f,8.26873f,35f,45f,0f,0f,45f,0f,35f});
  }
}
protected class MFVec3f78 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.982978f,0.183721f,0f,-0.982978f,0.183721f,0f,-0.932482f,0.361217f,0f,-0.932482f,0.361217f,0f,-0.850228f,0.526414f,0f,-0.850228f,0.526414f,0f,-0.739036f,0.673666f,0f,-0.739036f,0.673666f,0f,-0.602619f,0.798029f,0f,-0.602619f,0.798029f,0f,-0.445723f,0.895171f,0f,-0.445723f,0.895171f,0f,-0.273659f,0.961827f,0f,-0.273659f,0.961827f,0f,-0.0922575f,0.995735f,0f,-0.0922575f,0.995735f,0f,0.0922575f,0.995735f,0f,0.0922575f,0.995735f,0f,0.273659f,0.961827f,0f,0.273659f,0.961827f,0f,0.445723f,0.895171f,0f,0.445723f,0.895171f,0f,0.602619f,0.798029f,0f,0.602619f,0.798029f,0f,0.739036f,0.673666f,0f,0.739036f,0.673666f,0f,0.850228f,0.526414f,0f,0.850228f,0.526414f,0f,0.932482f,0.361217f,0f,0.932482f,0.361217f,0f,0.982978f,0.183721f,0f,0.982978f,0.183721f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3279 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1});
  }
}
protected class MFVec3f80 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {45f,0f,0f,45f,0f,35f,44.2338f,-8.26873f,0f,44.2338f,-8.26873f,35f,41.9613f,-16.2559f,0f,41.9613f,-16.2559f,35f,38.2598f,-23.6894f,0f,38.2598f,-23.6894f,35f,33.2554f,-30.3163f,0f,33.2554f,-30.3163f,35f,27.1186f,-35.9108f,0f,27.1186f,-35.9108f,35f,20.0582f,-40.2823f,0f,20.0582f,-40.2823f,35f,12.3148f,-43.2822f,0f,12.3148f,-43.2822f,35f,4.15208f,-44.808f,0f,4.15208f,-44.808f,35f,-4.15208f,-44.808f,0f,-4.15208f,-44.808f,35f,-12.3148f,-43.2822f,0f,-12.3148f,-43.2822f,35f,-20.0582f,-40.2823f,0f,-20.0582f,-40.2823f,35f,-27.1186f,-35.9108f,0f,-27.1186f,-35.9108f,35f,-33.2554f,-30.3163f,0f,-33.2554f,-30.3163f,35f,-38.2598f,-23.6894f,0f,-38.2598f,-23.6894f,35f,-41.9613f,-16.2559f,0f,-41.9613f,-16.2559f,35f,-44.2338f,-8.26873f,0f,-44.2338f,-8.26873f,35f,-45f,0f,0f,-45f,0f,35f});
  }
}
protected class MFVec3f81 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.982978f,-0.183721f,0f,0.982978f,-0.183721f,0f,0.932482f,-0.361217f,0f,0.932482f,-0.361217f,0f,0.850228f,-0.526414f,0f,0.850228f,-0.526414f,0f,0.739036f,-0.673666f,0f,0.739036f,-0.673666f,0f,0.602619f,-0.798029f,0f,0.602619f,-0.798029f,0f,0.445723f,-0.895171f,0f,0.445723f,-0.895171f,0f,0.273659f,-0.961827f,0f,0.273659f,-0.961827f,0f,0.0922575f,-0.995735f,0f,0.0922575f,-0.995735f,0f,-0.0922575f,-0.995735f,0f,-0.0922575f,-0.995735f,0f,-0.273659f,-0.961827f,0f,-0.273659f,-0.961827f,0f,-0.445723f,-0.895171f,0f,-0.445723f,-0.895171f,0f,-0.602619f,-0.798029f,0f,-0.602619f,-0.798029f,0f,-0.739036f,-0.673666f,0f,-0.739036f,-0.673666f,0f,-0.850228f,-0.526414f,0f,-0.850228f,-0.526414f,0f,-0.932482f,-0.361217f,0f,-0.932482f,-0.361217f,0f,-0.982978f,-0.183721f,0f,-0.982978f,-0.183721f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3282 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1});
  }
}
protected class MFVec3f83 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {30f,0f,35f,30f,0f,0f,29.2478f,-6.67563f,35f,29.2478f,-6.67563f,0f,27.0291f,-13.0165f,35f,27.0291f,-13.0165f,0f,23.4549f,-18.7047f,35f,23.4549f,-18.7047f,0f,18.7047f,-23.4549f,35f,18.7047f,-23.4549f,0f,13.0165f,-27.0291f,35f,13.0165f,-27.0291f,0f,6.67563f,-29.2478f,35f,6.67563f,-29.2478f,0f,0f,-30f,35f,0f,-30f,0f,-6.67563f,-29.2478f,35f,-6.67563f,-29.2478f,0f,-13.0165f,-27.0291f,35f,-13.0165f,-27.0291f,0f,-18.7047f,-23.4549f,35f,-18.7047f,-23.4549f,0f,-23.4549f,-18.7047f,35f,-23.4549f,-18.7047f,0f,-27.0291f,-13.0165f,35f,-27.0291f,-13.0165f,0f,-29.2478f,-6.67563f,35f,-29.2478f,-6.67563f,0f,-30f,0f,35f,-30f,0f,0f});
  }
}
protected class MFVec3f84 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.97493f,0.22251f,0f,-0.97493f,0.22251f,0f,-0.90097f,0.433882f,0f,-0.90097f,0.433882f,0f,-0.781853f,0.623463f,0f,-0.781853f,0.623463f,0f,-0.623463f,0.781853f,0f,-0.623463f,0.781853f,0f,-0.433882f,0.90097f,0f,-0.433882f,0.90097f,0f,-0.22251f,0.97493f,0f,-0.22251f,0.97493f,0f,0f,1f,0f,0f,1f,0f,0.22251f,0.97493f,0f,0.22251f,0.97493f,0f,0.433882f,0.90097f,0f,0.433882f,0.90097f,0f,0.623463f,0.781853f,0f,0.623463f,0.781853f,0f,0.781853f,0.623463f,0f,0.781853f,0.623463f,0f,0.90097f,0.433882f,0f,0.90097f,0.433882f,0f,0.97493f,0.22251f,0f,0.97493f,0.22251f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3285 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1});
  }
}
protected class MFVec3f86 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-30f,0f,35f,-30f,0f,0f,-29.2478f,6.67563f,35f,-29.2478f,6.67563f,0f,-27.0291f,13.0165f,35f,-27.0291f,13.0165f,0f,-23.4549f,18.7047f,35f,-23.4549f,18.7047f,0f,-18.7047f,23.4549f,35f,-18.7047f,23.4549f,0f,-13.0165f,27.0291f,35f,-13.0165f,27.0291f,0f,-6.67563f,29.2478f,35f,-6.67563f,29.2478f,0f,0f,30f,35f,0f,30f,0f,6.67563f,29.2478f,35f,6.67563f,29.2478f,0f,13.0165f,27.0291f,35f,13.0165f,27.0291f,0f,18.7047f,23.4549f,35f,18.7047f,23.4549f,0f,23.4549f,18.7047f,35f,23.4549f,18.7047f,0f,27.0291f,13.0165f,35f,27.0291f,13.0165f,0f,29.2478f,6.67563f,35f,29.2478f,6.67563f,0f,30f,0f,35f,30f,0f,0f});
  }
}
protected class MFVec3f87 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.97493f,-0.22251f,0f,0.97493f,-0.22251f,0f,0.90097f,-0.433882f,0f,0.90097f,-0.433882f,0f,0.781853f,-0.623463f,0f,0.781853f,-0.623463f,0f,0.623463f,-0.781853f,0f,0.623463f,-0.781853f,0f,0.433882f,-0.90097f,0f,0.433882f,-0.90097f,0f,0.22251f,-0.97493f,0f,0.22251f,-0.97493f,0f,0f,-1f,0f,0f,-1f,0f,-0.22251f,-0.97493f,0f,-0.22251f,-0.97493f,0f,-0.433882f,-0.90097f,0f,-0.433882f,-0.90097f,0f,-0.623463f,-0.781853f,0f,-0.623463f,-0.781853f,0f,-0.781853f,-0.623463f,0f,-0.781853f,-0.623463f,0f,-0.90097f,-0.433882f,0f,-0.90097f,-0.433882f,0f,-0.97493f,-0.22251f,0f,-0.97493f,-0.22251f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3288 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,2,4,5,-1,4,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,7,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,17,18,16,-1,18,14,16,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,23,22,24,-1,22,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,28,27,29,-1,27,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,35,34,36,-1,34,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,41,18,17,-1,41,17,42,-1,41,42,43,-1,41,43,44,-1,41,44,45,-1,41,45,46,-1,41,46,47,-1,41,47,48,-1,41,48,49,-1,44,40,39,-1,44,39,50,-1,44,50,51,-1,44,51,52,-1,44,52,45,-1,53,1,0,-1,53,0,54,-1,53,54,55,-1,53,55,56,-1,53,56,57,-1,53,57,58,-1,53,58,59,-1,53,59,60,-1,53,60,61,-1,53,61,20,-1,53,20,19,-1});
  }
}
protected class MFVec3f89 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-33.2554f,30.3163f,0f,-6.67563f,29.2478f,0f,-38.2598f,23.6894f,0f,-13.0165f,27.0291f,0f,-18.7047f,23.4549f,0f,-41.9613f,16.2559f,0f,-23.4549f,18.7047f,0f,-44.2338f,8.26873f,0f,-27.0291f,13.0165f,0f,-29.2478f,6.67563f,0f,-45f,0f,0f,-30f,0f,0f,-44.2338f,-8.26873f,0f,-29.2478f,-6.67563f,0f,-41.9613f,-16.2559f,0f,-27.0291f,-13.0165f,0f,-23.4549f,-18.7047f,0f,-18.7047f,-23.4549f,0f,-38.2598f,-23.6894f,0f,6.67563f,29.2478f,0f,33.2554f,30.3163f,0f,13.0165f,27.0291f,0f,38.2598f,23.6894f,0f,18.7047f,23.4549f,0f,23.4549f,18.7047f,0f,41.9613f,16.2559f,0f,27.0291f,13.0165f,0f,44.2338f,8.26873f,0f,29.2478f,6.67563f,0f,30f,0f,0f,45f,0f,0f,29.2478f,-6.67563f,0f,44.2338f,-8.26873f,0f,27.0291f,-13.0165f,0f,41.9613f,-16.2559f,0f,23.4549f,-18.7047f,0f,18.7047f,-23.4549f,0f,38.2598f,-23.6894f,0f,13.0165f,-27.0291f,0f,33.2554f,-30.3163f,0f,6.67563f,-29.2478f,0f,-33.2554f,-30.3163f,0f,-13.0165f,-27.0291f,0f,-6.67563f,-29.2478f,0f,0f,-30f,0f,4.15208f,-44.808f,0f,-4.15208f,-44.808f,0f,-12.3148f,-43.2822f,0f,-20.0582f,-40.2823f,0f,-27.1186f,-35.9108f,0f,27.1186f,-35.9108f,0f,20.0582f,-40.2823f,0f,12.3148f,-43.2822f,0f,0f,30f,0f,-27.1186f,35.9108f,0f,-20.0582f,40.2823f,0f,-12.3148f,43.2822f,0f,-4.15208f,44.808f,0f,4.15208f,44.808f,0f,12.3148f,43.2822f,0f,20.0582f,40.2823f,0f,27.1186f,35.9108f,0f});
  }
}
protected class MFInt3290 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,4,3,5,-1,3,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,9,8,10,-1,8,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,17,18,15,-1,18,16,15,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,21,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,26,28,29,-1,28,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,33,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,41,42,43,-1,41,43,44,-1,41,44,45,-1,41,45,46,-1,41,46,47,-1,41,47,48,-1,41,48,49,-1,41,49,18,-1,41,18,17,-1,47,46,50,-1,47,50,51,-1,47,51,52,-1,47,52,38,-1,47,38,40,-1,53,20,19,-1,53,19,54,-1,53,54,55,-1,53,55,56,-1,53,56,57,-1,53,57,58,-1,53,58,59,-1,53,59,60,-1,53,60,61,-1,53,61,1,-1,53,1,0,-1});
  }
}
protected class MFVec3f91 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-6.67563f,29.2478f,35f,-33.2554f,30.3163f,35f,-13.0165f,27.0291f,35f,-38.2598f,23.6894f,35f,-18.7047f,23.4549f,35f,-23.4549f,18.7047f,35f,-41.9613f,16.2559f,35f,-27.0291f,13.0165f,35f,-44.2338f,8.26873f,35f,-29.2478f,6.67563f,35f,-30f,0f,35f,-45f,0f,35f,-29.2478f,-6.67563f,35f,-44.2338f,-8.26873f,35f,-27.0291f,-13.0165f,35f,-41.9613f,-16.2559f,35f,-23.4549f,-18.7047f,35f,-38.2598f,-23.6894f,35f,-18.7047f,-23.4549f,35f,33.2554f,30.3163f,35f,6.67563f,29.2478f,35f,38.2598f,23.6894f,35f,13.0165f,27.0291f,35f,18.7047f,23.4549f,35f,41.9613f,16.2559f,35f,23.4549f,18.7047f,35f,44.2338f,8.26873f,35f,27.0291f,13.0165f,35f,29.2478f,6.67563f,35f,45f,0f,35f,30f,0f,35f,44.2338f,-8.26873f,35f,29.2478f,-6.67563f,35f,41.9613f,-16.2559f,35f,27.0291f,-13.0165f,35f,23.4549f,-18.7047f,35f,38.2598f,-23.6894f,35f,18.7047f,-23.4549f,35f,33.2554f,-30.3163f,35f,13.0165f,-27.0291f,35f,6.67563f,-29.2478f,35f,-33.2554f,-30.3163f,35f,-27.1186f,-35.9108f,35f,-20.0582f,-40.2823f,35f,-12.3148f,-43.2822f,35f,-4.15208f,-44.808f,35f,4.15208f,-44.808f,35f,0f,-30f,35f,-6.67563f,-29.2478f,35f,-13.0165f,-27.0291f,35f,12.3148f,-43.2822f,35f,20.0582f,-40.2823f,35f,27.1186f,-35.9108f,35f,0f,30f,35f,27.1186f,35.9108f,35f,20.0582f,40.2823f,35f,12.3148f,43.2822f,35f,4.15208f,44.808f,35f,-4.15208f,44.808f,35f,-12.3148f,43.2822f,35f,-20.0582f,40.2823f,35f,-27.1186f,35.9108f,35f});
  }
}
protected class MFInt3292 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1});
  }
}
protected class MFVec3f93 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-30f,0f,0f,-30f,0f,80f,-29.2478f,6.67563f,0f,-29.2478f,6.67563f,80f,-27.0291f,13.0165f,0f,-27.0291f,13.0165f,80f,-23.4549f,18.7047f,0f,-23.4549f,18.7047f,80f,-18.7047f,23.4549f,0f,-18.7047f,23.4549f,80f,-13.0165f,27.0291f,0f,-13.0165f,27.0291f,80f,-6.67563f,29.2478f,0f,-6.67563f,29.2478f,80f,0f,30f,0f,0f,30f,80f,6.67563f,29.2478f,0f,6.67563f,29.2478f,80f,13.0165f,27.0291f,0f,13.0165f,27.0291f,80f,18.7047f,23.4549f,0f,18.7047f,23.4549f,80f,23.4549f,18.7047f,0f,23.4549f,18.7047f,80f,27.0291f,13.0165f,0f,27.0291f,13.0165f,80f,29.2478f,6.67563f,0f,29.2478f,6.67563f,80f,30f,0f,0f,30f,0f,80f});
  }
}
protected class MFVec3f94 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.97493f,0.22251f,0f,-0.97493f,0.22251f,0f,-0.90097f,0.433882f,0f,-0.90097f,0.433882f,0f,-0.781853f,0.623463f,0f,-0.781853f,0.623463f,0f,-0.623463f,0.781853f,0f,-0.623463f,0.781853f,0f,-0.433882f,0.90097f,0f,-0.433882f,0.90097f,0f,-0.22251f,0.97493f,0f,-0.22251f,0.97493f,0f,0f,1f,0f,0f,1f,0f,0.22251f,0.97493f,0f,0.22251f,0.97493f,0f,0.433882f,0.90097f,0f,0.433882f,0.90097f,0f,0.623463f,0.781853f,0f,0.623463f,0.781853f,0f,0.781853f,0.623463f,0f,0.781853f,0.623463f,0f,0.90097f,0.433882f,0f,0.90097f,0.433882f,0f,0.97493f,0.22251f,0f,0.97493f,0.22251f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3295 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1});
  }
}
protected class MFVec3f96 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {30f,0f,0f,30f,0f,80f,29.2478f,-6.67563f,0f,29.2478f,-6.67563f,80f,27.0291f,-13.0165f,0f,27.0291f,-13.0165f,80f,23.4549f,-18.7047f,0f,23.4549f,-18.7047f,80f,18.7047f,-23.4549f,0f,18.7047f,-23.4549f,80f,13.0165f,-27.0291f,0f,13.0165f,-27.0291f,80f,6.67563f,-29.2478f,0f,6.67563f,-29.2478f,80f,0f,-30f,0f,0f,-30f,80f,-6.67563f,-29.2478f,0f,-6.67563f,-29.2478f,80f,-13.0165f,-27.0291f,0f,-13.0165f,-27.0291f,80f,-18.7047f,-23.4549f,0f,-18.7047f,-23.4549f,80f,-23.4549f,-18.7047f,0f,-23.4549f,-18.7047f,80f,-27.0291f,-13.0165f,0f,-27.0291f,-13.0165f,80f,-29.2478f,-6.67563f,0f,-29.2478f,-6.67563f,80f,-30f,0f,0f,-30f,0f,80f});
  }
}
protected class MFVec3f97 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.97493f,-0.22251f,0f,0.97493f,-0.22251f,0f,0.90097f,-0.433882f,0f,0.90097f,-0.433882f,0f,0.781853f,-0.623463f,0f,0.781853f,-0.623463f,0f,0.623463f,-0.781853f,0f,0.623463f,-0.781853f,0f,0.433882f,-0.90097f,0f,0.433882f,-0.90097f,0f,0.22251f,-0.97493f,0f,0.22251f,-0.97493f,0f,0f,-1f,0f,0f,-1f,0f,-0.22251f,-0.97493f,0f,-0.22251f,-0.97493f,0f,-0.433882f,-0.90097f,0f,-0.433882f,-0.90097f,0f,-0.623463f,-0.781853f,0f,-0.623463f,-0.781853f,0f,-0.781853f,-0.623463f,0f,-0.781853f,-0.623463f,0f,-0.90097f,-0.433882f,0f,-0.90097f,-0.433882f,0f,-0.97493f,-0.22251f,0f,-0.97493f,-0.22251f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3298 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1});
  }
}
protected class MFVec3f99 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {20f,0f,80f,20f,0f,0f,19.3185f,-5.17638f,80f,19.3185f,-5.17638f,0f,17.3205f,-10f,80f,17.3205f,-10f,0f,14.1421f,-14.1421f,80f,14.1421f,-14.1421f,0f,10f,-17.3205f,80f,10f,-17.3205f,0f,5.17638f,-19.3185f,80f,5.17638f,-19.3185f,0f,0f,-20f,80f,0f,-20f,0f,-5.17638f,-19.3185f,80f,-5.17638f,-19.3185f,0f,-10f,-17.3205f,80f,-10f,-17.3205f,0f,-14.1421f,-14.1421f,80f,-14.1421f,-14.1421f,0f,-17.3205f,-10f,80f,-17.3205f,-10f,0f,-19.3185f,-5.17638f,80f,-19.3185f,-5.17638f,0f,-20f,0f,80f,-20f,0f,0f});
  }
}
protected class MFVec3f100 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.965932f,0.258797f,0f,-0.965932f,0.258797f,0f,-0.866034f,0.499985f,0f,-0.866034f,0.499985f,0f,-0.707083f,0.70713f,0f,-0.707083f,0.70713f,0f,-0.499985f,0.866034f,0f,-0.499985f,0.866034f,0f,-0.258797f,0.965932f,0f,-0.258797f,0.965932f,0f,0f,1f,0f,0f,1f,0f,0.258797f,0.965932f,0f,0.258797f,0.965932f,0f,0.499985f,0.866034f,0f,0.499985f,0.866034f,0f,0.707083f,0.70713f,0f,0.707083f,0.70713f,0f,0.866034f,0.499985f,0f,0.866034f,0.499985f,0f,0.965932f,0.258797f,0f,0.965932f,0.258797f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt32101 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1});
  }
}
protected class MFVec3f102 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-20f,0f,80f,-20f,0f,0f,-19.3185f,5.17638f,80f,-19.3185f,5.17638f,0f,-17.3205f,10f,80f,-17.3205f,10f,0f,-14.1421f,14.1421f,80f,-14.1421f,14.1421f,0f,-10f,17.3205f,80f,-10f,17.3205f,0f,-5.17638f,19.3185f,80f,-5.17638f,19.3185f,0f,0f,20f,80f,0f,20f,0f,5.17638f,19.3185f,80f,5.17638f,19.3185f,0f,10f,17.3205f,80f,10f,17.3205f,0f,14.1421f,14.1421f,80f,14.1421f,14.1421f,0f,17.3205f,10f,80f,17.3205f,10f,0f,19.3185f,5.17638f,80f,19.3185f,5.17638f,0f,20f,0f,80f,20f,0f,0f});
  }
}
protected class MFVec3f103 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.965932f,-0.258797f,0f,0.965932f,-0.258797f,0f,0.866034f,-0.499985f,0f,0.866034f,-0.499985f,0f,0.707083f,-0.70713f,0f,0.707083f,-0.70713f,0f,0.499985f,-0.866034f,0f,0.499985f,-0.866034f,0f,0.258797f,-0.965932f,0f,0.258797f,-0.965932f,0f,0f,-1f,0f,0f,-1f,0f,-0.258797f,-0.965932f,0f,-0.258797f,-0.965932f,0f,-0.499985f,-0.866034f,0f,-0.499985f,-0.866034f,0f,-0.707083f,-0.70713f,0f,-0.707083f,-0.70713f,0f,-0.866034f,-0.499985f,0f,-0.866034f,-0.499985f,0f,-0.965932f,-0.258797f,0f,-0.965932f,-0.258797f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt32104 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,2,4,5,-1,4,6,5,-1,5,6,7,-1,5,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,12,14,15,-1,14,16,15,-1,15,16,17,-1,15,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,27,26,28,-1,26,29,28,-1,28,29,30,-1,30,29,31,-1,29,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,37,36,38,-1,36,39,38,-1,38,39,40,-1,40,39,19,-1,39,41,19,-1,19,41,21,-1,41,42,21,-1,21,42,43,-1,44,1,0,-1,44,0,45,-1,44,45,46,-1,44,46,47,-1,44,47,48,-1,44,48,49,-1,44,49,50,-1,44,50,51,-1,44,51,24,-1,44,24,23,-1});
  }
}
protected class MFVec3f105 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-23.4549f,18.7047f,0f,-5.17638f,19.3185f,0f,-27.0291f,13.0165f,0f,-10f,17.3205f,0f,-14.1421f,14.1421f,0f,-29.2478f,6.67563f,0f,-17.3205f,10f,0f,-19.3185f,5.17638f,0f,-30f,0f,0f,-20f,0f,0f,-29.2478f,-6.67563f,0f,-19.3185f,-5.17638f,0f,-27.0291f,-13.0165f,0f,-17.3205f,-10f,0f,-14.1421f,-14.1421f,0f,-23.4549f,-18.7047f,0f,-10f,-17.3205f,0f,-5.17638f,-19.3185f,0f,-18.7047f,-23.4549f,0f,0f,-20f,0f,-13.0165f,-27.0291f,0f,0f,-30f,0f,-6.67563f,-29.2478f,0f,5.17638f,19.3185f,0f,23.4549f,18.7047f,0f,10f,17.3205f,0f,27.0291f,13.0165f,0f,14.1421f,14.1421f,0f,17.3205f,10f,0f,29.2478f,6.67563f,0f,19.3185f,5.17638f,0f,20f,0f,0f,30f,0f,0f,19.3185f,-5.17638f,0f,29.2478f,-6.67563f,0f,17.3205f,-10f,0f,27.0291f,-13.0165f,0f,14.1421f,-14.1421f,0f,10f,-17.3205f,0f,23.4549f,-18.7047f,0f,5.17638f,-19.3185f,0f,18.7047f,-23.4549f,0f,13.0165f,-27.0291f,0f,6.67563f,-29.2478f,0f,0f,20f,0f,-18.7047f,23.4549f,0f,-13.0165f,27.0291f,0f,-6.67563f,29.2478f,0f,0f,30f,0f,6.67563f,29.2478f,0f,13.0165f,27.0291f,0f,18.7047f,23.4549f,0f});
  }
}
protected class MFInt32106 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,4,3,5,-1,3,6,5,-1,5,6,7,-1,7,6,8,-1,6,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,14,13,15,-1,13,16,15,-1,15,16,17,-1,17,16,18,-1,16,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,25,27,28,-1,27,29,28,-1,28,29,30,-1,28,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,35,37,38,-1,37,39,38,-1,38,39,40,-1,38,40,41,-1,40,18,41,-1,41,18,42,-1,18,20,42,-1,42,20,43,-1,44,24,23,-1,44,23,45,-1,44,45,46,-1,44,46,47,-1,44,47,48,-1,44,48,49,-1,44,49,50,-1,44,50,51,-1,44,51,1,-1,44,1,0,-1});
  }
}
protected class MFVec3f107 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-5.17638f,19.3185f,80f,-23.4549f,18.7047f,80f,-10f,17.3205f,80f,-27.0291f,13.0165f,80f,-14.1421f,14.1421f,80f,-17.3205f,10f,80f,-29.2478f,6.67563f,80f,-19.3185f,5.17638f,80f,-20f,0f,80f,-30f,0f,80f,-19.3185f,-5.17638f,80f,-29.2478f,-6.67563f,80f,-17.3205f,-10f,80f,-27.0291f,-13.0165f,80f,-14.1421f,-14.1421f,80f,-10f,-17.3205f,80f,-23.4549f,-18.7047f,80f,-5.17638f,-19.3185f,80f,0f,-20f,80f,-18.7047f,-23.4549f,80f,0f,-30f,80f,-13.0165f,-27.0291f,80f,-6.67563f,-29.2478f,80f,23.4549f,18.7047f,80f,5.17638f,19.3185f,80f,27.0291f,13.0165f,80f,10f,17.3205f,80f,14.1421f,14.1421f,80f,29.2478f,6.67563f,80f,17.3205f,10f,80f,19.3185f,5.17638f,80f,30f,0f,80f,20f,0f,80f,29.2478f,-6.67563f,80f,19.3185f,-5.17638f,80f,27.0291f,-13.0165f,80f,17.3205f,-10f,80f,14.1421f,-14.1421f,80f,23.4549f,-18.7047f,80f,10f,-17.3205f,80f,5.17638f,-19.3185f,80f,18.7047f,-23.4549f,80f,13.0165f,-27.0291f,80f,6.67563f,-29.2478f,80f,0f,20f,80f,18.7047f,23.4549f,80f,13.0165f,27.0291f,80f,6.67563f,29.2478f,80f,0f,30f,80f,-6.67563f,29.2478f,80f,-13.0165f,27.0291f,80f,-18.7047f,23.4549f,80f});
  }
}
}
