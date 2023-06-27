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
public class JinLOA4Canonical101 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new JinLOA4Canonical101().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/JinLOA4Canonical101.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1)))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("JinLOA4.x3d"))
        .addChild(new NavigationInfo().setSpeed(1.5f))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {-0.0002f,0.0139f,-0.1019f}).setDescription("JinLOA4").setPosition(new float[] {-0.0002f,0.0139f,-0.0344f}))
        .addChild(new Transform().setDEF("cordsysfloor").setScale(new float[] {0.175f,0.175f,0.175f})
          .addChild(new Inline().setUrl(new MFString0().getArray())))
        .addChild(new HAnimHumanoid().setName("JinLOA4").setDEF("hanim_JinLOA4").setScale(new float[] {1f,1f,1f}).setVersion("2.0")
          .addSkeleton(new HAnimJoint().setName("humanoid_root").setDEF("hanim_humanoid_root").setCenter(new float[] {-0.0002f,0.8174f,-0.1178f}).setUlimit(new MFFloat1().getArray()).setLlimit(new MFFloat2().getArray())
            .addChild(new HAnimSegment().setName("sacrum").setDEF("hanim_sacrum")
              .addChild(new Transform().setTranslation(new float[] {-0.0002f,0.8174f,-0.1178f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                    .setTexture(new ImageTexture().setDEF("JinLOA4TextureAtlas").setUrl(new MFString3().getArray())))
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt324().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt325().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray()))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f7().getArray()))))))
            .addChild(new HAnimJoint().setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new float[] {-0.0002f,0.6986f,-0.1178f}).setUlimit(new MFFloat8().getArray()).setLlimit(new MFFloat9().getArray())
              .addChild(new HAnimSegment().setName("pelvis").setDEF("hanim_pelvis")
                .addChild(new Transform().setTranslation(new float[] {-0.0002f,0.6986f,-0.1178f})
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3210().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3211().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f12().getArray()))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f13().getArray()))))))
              .addChild(new HAnimJoint().setName("l_hip").setDEF("hanim_l_hip").setCenter(new float[] {0.0945f,0.8181f,-0.1202f}).setUlimit(new MFFloat14().getArray()).setLlimit(new MFFloat15().getArray())
                .addChild(new HAnimSegment().setName("l_thigh").setDEF("hanim_l_thigh")
                  .addChild(new Transform().setTranslation(new float[] {0.0945f,0.8181f,-0.1202f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3216().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3217().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f18().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f19().getArray()))))))
                .addChild(new HAnimJoint().setName("l_knee").setDEF("hanim_l_knee").setCenter(new float[] {0.0924f,0.4003f,-0.1213f}).setUlimit(new MFFloat20().getArray()).setLlimit(new MFFloat21().getArray())
                  .addChild(new HAnimSegment().setName("l_calf").setDEF("hanim_l_calf")
                    .addChild(new Transform().setTranslation(new float[] {0.0924f,0.4003f,-0.1213f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3222().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3223().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f24().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f25().getArray()))))))
                  .addChild(new HAnimJoint().setName("l_talocrural").setDEF("hanim_l_talocrural").setCenter(new float[] {0.0886f,0.0869f,-0.1123f}).setUlimit(new MFFloat26().getArray()).setLlimit(new MFFloat27().getArray())
                    .addChild(new HAnimSegment().setName("l_talus").setDEF("hanim_l_talus")
                      .addChild(new Transform().setTranslation(new float[] {0.0886f,0.0869f,-0.1123f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3228().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3229().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f31().getArray()))))))
                    .addChild(new HAnimJoint().setName("l_talocalcaneonavicular").setDEF("hanim_l_talocalcaneonavicular").setCenter(new float[] {0.0781f,0.0283f,-0.097f}).setUlimit(new MFFloat32().getArray()).setLlimit(new MFFloat33().getArray())
                      .addChild(new HAnimSegment().setName("l_navicular").setDEF("hanim_l_navicular")
                        .addChild(new Transform().setTranslation(new float[] {0.0781f,0.0283f,-0.097f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3234().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3235().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f36().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f37().getArray()))))))
                      .addChild(new HAnimJoint().setName("l_cuneonavicular_1").setDEF("hanim_l_cuneonavicular_1").setCenter(new float[] {0.0672f,0.0235f,-0.0835f}).setUlimit(new MFFloat38().getArray()).setLlimit(new MFFloat39().getArray())
                        .addChild(new HAnimSegment().setName("l_cuneiform_1").setDEF("hanim_l_cuneiform_1")
                          .addChild(new Transform().setTranslation(new float[] {0.0672f,0.0235f,-0.0835f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3240().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3241().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f43().getArray()))))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_1").setDEF("hanim_l_tarsometatarsal_1").setCenter(new float[] {0.0644f,0.0147f,-0.0577f}).setUlimit(new MFFloat44().getArray()).setLlimit(new MFFloat45().getArray())
                          .addChild(new HAnimSegment().setName("l_metatarsal_1").setDEF("hanim_l_metatarsal_1")
                            .addChild(new Transform().setTranslation(new float[] {0.0644f,0.0147f,-0.0577f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3246().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3247().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f48().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f49().getArray()))))))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_1").setDEF("hanim_l_metatarsophalangeal_1").setCenter(new float[] {0.0619f,0.0059f,-0.0083f}).setUlimit(new MFFloat50().getArray()).setLlimit(new MFFloat51().getArray())
                            .addChild(new HAnimSegment().setName("l_tarsal_proximal_phalanx_1").setDEF("hanim_l_tarsal_proximal_phalanx_1")
                              .addChild(new Transform().setTranslation(new float[] {0.0619f,0.0059f,-0.0083f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3252().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3253().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f54().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f55().getArray()))))))
                            .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_1").setDEF("hanim_l_tarsal_distal_interphalangeal_1").setCenter(new float[] {0.0619f,0.0036f,0.0134f}).setUlimit(new MFFloat56().getArray()).setLlimit(new MFFloat57().getArray())
                              .addChild(new HAnimSegment().setName("l_tarsal_distal_phalanx_1").setDEF("hanim_l_tarsal_distal_phalanx_1")
                                .addChild(new Transform().setTranslation(new float[] {0.0619f,0.0036f,0.0134f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3258().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3259().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f60().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f61().getArray()))))))))))
                      .addChild(new HAnimJoint().setName("l_cuneonavicular_2").setDEF("hanim_l_cuneonavicular_2").setCenter(new float[] {0.0812f,0.025f,-0.0805f}).setUlimit(new MFFloat62().getArray()).setLlimit(new MFFloat63().getArray())
                        .addChild(new HAnimSegment().setName("l_cuneiform_2").setDEF("hanim_l_cuneiform_2")
                          .addChild(new Transform().setTranslation(new float[] {0.0812f,0.025f,-0.0805f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3264().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3265().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f66().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f67().getArray()))))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_2").setDEF("hanim_l_tarsometatarsal_2").setCenter(new float[] {0.08f,0.0175f,-0.0608f}).setUlimit(new MFFloat68().getArray()).setLlimit(new MFFloat69().getArray())
                          .addChild(new HAnimSegment().setName("l_metatarsal_2").setDEF("hanim_l_metatarsal_2")
                            .addChild(new Transform().setTranslation(new float[] {0.08f,0.0175f,-0.0608f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3270().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3271().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f72().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f73().getArray()))))))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_2").setDEF("hanim_l_metatarsophalangeal_2").setCenter(new float[] {0.0824f,0.0064f,-0.004f}).setUlimit(new MFFloat74().getArray()).setLlimit(new MFFloat75().getArray())
                            .addChild(new HAnimSegment().setName("l_tarsal_proximal_phalanx_2").setDEF("hanim_l_tarsal_proximal_phalanx_2")
                              .addChild(new Transform().setTranslation(new float[] {0.0824f,0.0064f,-0.004f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3276().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3277().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f78().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f79().getArray()))))))
                            .addChild(new HAnimJoint().setName("l_tarsal_proximal_interphalangeal_2").setDEF("hanim_l_tarsal_proximal_interphalangeal_2").setCenter(new float[] {0.0841f,0.0041f,0.0121f}).setUlimit(new MFFloat80().getArray()).setLlimit(new MFFloat81().getArray())
                              .addChild(new HAnimSegment().setName("l_tarsal_middle_phalanx_2").setDEF("hanim_l_tarsal_middle_phalanx_2")
                                .addChild(new Transform().setTranslation(new float[] {0.0841f,0.0041f,0.0121f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3282().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3283().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f84().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f85().getArray()))))))
                              .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_2").setDEF("hanim_l_tarsal_distal_interphalangeal_2").setCenter(new float[] {0.0841f,0.0013f,0.0216f}).setUlimit(new MFFloat86().getArray()).setLlimit(new MFFloat87().getArray())
                                .addChild(new HAnimSegment().setName("l_tarsal_distal_phalanx_2").setDEF("hanim_l_tarsal_distal_phalanx_2")
                                  .addChild(new Transform().setTranslation(new float[] {0.0841f,0.0013f,0.0216f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3288().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3289().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f90().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f91().getArray())))))))))))
                      .addChild(new HAnimJoint().setName("l_cuneonavicular_3").setDEF("hanim_l_cuneonavicular_3").setCenter(new float[] {0.0928f,0.0248f,-0.0821f}).setUlimit(new MFFloat92().getArray()).setLlimit(new MFFloat93().getArray())
                        .addChild(new HAnimSegment().setName("l_cuneiform_3").setDEF("hanim_l_cuneiform_3")
                          .addChild(new Transform().setTranslation(new float[] {0.0928f,0.0248f,-0.0821f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3294().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3295().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f96().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f97().getArray()))))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_3").setDEF("hanim_l_tarsometatarsal_3").setCenter(new float[] {0.0944f,0.0175f,-0.0625f}).setUlimit(new MFFloat98().getArray()).setLlimit(new MFFloat99().getArray())
                          .addChild(new HAnimSegment().setName("l_metatarsal_3").setDEF("hanim_l_metatarsal_3")
                            .addChild(new Transform().setTranslation(new float[] {0.0944f,0.0175f,-0.0625f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32100().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32101().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f102().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f103().getArray()))))))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_3").setDEF("hanim_l_metatarsophalangeal_3").setCenter(new float[] {0.0963f,0.0065f,-0.0065f}).setUlimit(new MFFloat104().getArray()).setLlimit(new MFFloat105().getArray())
                            .addChild(new HAnimSegment().setName("l_tarsal_proximal_phalanx_3").setDEF("hanim_l_tarsal_proximal_phalanx_3")
                              .addChild(new Transform().setTranslation(new float[] {0.0963f,0.0065f,-0.0065f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32106().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32107().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f108().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f109().getArray()))))))
                            .addChild(new HAnimJoint().setName("l_tarsal_proximal_interphalangeal_3").setDEF("hanim_l_tarsal_proximal_interphalangeal_3").setCenter(new float[] {0.0987f,0.0034f,0.0086f}).setUlimit(new MFFloat110().getArray()).setLlimit(new MFFloat111().getArray())
                              .addChild(new HAnimSegment().setName("l_tarsal_middle_phalanx_3").setDEF("hanim_l_tarsal_middle_phalanx_3")
                                .addChild(new Transform().setTranslation(new float[] {0.0987f,0.0034f,0.0086f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32112().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32113().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f114().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f115().getArray()))))))
                              .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_3").setDEF("hanim_l_tarsal_distal_interphalangeal_3").setCenter(new float[] {0.1002f,0.0013f,0.0178f}).setUlimit(new MFFloat116().getArray()).setLlimit(new MFFloat117().getArray())
                                .addChild(new HAnimSegment().setName("l_tarsal_distal_phalanx_3").setDEF("hanim_l_tarsal_distal_phalanx_3")
                                  .addChild(new Transform().setTranslation(new float[] {0.1002f,0.0013f,0.0178f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32118().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32119().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f120().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f121().getArray()))))))))))))
                    .addChild(new HAnimJoint().setName("l_calcaneocuboid").setDEF("hanim_l_calcaneocuboid").setCenter(new float[] {0.0889f,0.0494f,-0.1278f}).setUlimit(new MFFloat122().getArray()).setLlimit(new MFFloat123().getArray())
                      .addChild(new HAnimSegment().setName("l_calcaneus").setDEF("hanim_l_calcaneus")
                        .addChild(new Transform().setTranslation(new float[] {0.0889f,0.0494f,-0.1278f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32124().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32125().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f126().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f127().getArray()))))))
                      .addChild(new HAnimJoint().setName("l_transversetarsal").setDEF("hanim_l_transversetarsal").setCenter(new float[] {0.1105f,0.0267f,-0.0998f}).setUlimit(new MFFloat128().getArray()).setLlimit(new MFFloat129().getArray())
                        .addChild(new HAnimSegment().setName("l_cuboid").setDEF("hanim_l_cuboid")
                          .addChild(new Transform().setTranslation(new float[] {0.1105f,0.0267f,-0.0998f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32130().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32131().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f132().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f133().getArray()))))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_4").setDEF("hanim_l_tarsometatarsal_4").setCenter(new float[] {0.1063f,0.016f,-0.0634f}).setUlimit(new MFFloat134().getArray()).setLlimit(new MFFloat135().getArray())
                          .addChild(new HAnimSegment().setName("l_metatarsal_4").setDEF("hanim_l_metatarsal_4")
                            .addChild(new Transform().setTranslation(new float[] {0.1063f,0.016f,-0.0634f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32136().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32137().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f138().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f139().getArray()))))))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_4").setDEF("hanim_l_metatarsophalangeal_4").setCenter(new float[] {0.1097f,0.0058f,-0.0107f}).setUlimit(new MFFloat140().getArray()).setLlimit(new MFFloat141().getArray())
                            .addChild(new HAnimSegment().setName("l_tarsal_proximal_phalanx_4").setDEF("hanim_l_tarsal_proximal_phalanx_4")
                              .addChild(new Transform().setTranslation(new float[] {0.1097f,0.0058f,-0.0107f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32142().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32143().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f144().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f145().getArray()))))))
                            .addChild(new HAnimJoint().setName("l_tarsal_proximal_interphalangeal_4").setDEF("hanim_l_tarsal_proximal_interphalangeal_4").setCenter(new float[] {0.114f,0.0037f,0.0044f}).setUlimit(new MFFloat146().getArray()).setLlimit(new MFFloat147().getArray())
                              .addChild(new HAnimSegment().setName("l_tarsal_middle_phalanx_4").setDEF("hanim_l_tarsal_middle_phalanx_4")
                                .addChild(new Transform().setTranslation(new float[] {0.114f,0.0037f,0.0044f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32148().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32149().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f150().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f151().getArray()))))))
                              .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_4").setDEF("hanim_l_tarsal_distal_interphalangeal_4").setCenter(new float[] {0.1155f,0.0008f,0.0118f}).setUlimit(new MFFloat152().getArray()).setLlimit(new MFFloat153().getArray())
                                .addChild(new HAnimSegment().setName("l_tarsal_distal_phalanx_4").setDEF("hanim_l_tarsal_distal_phalanx_4")
                                  .addChild(new Transform().setTranslation(new float[] {0.1155f,0.0008f,0.0118f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32154().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32155().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f156().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f157().getArray()))))))))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_5").setDEF("hanim_l_tarsometatarsal_5").setCenter(new float[] {0.1206f,0.0124f,-0.0671f}).setUlimit(new MFFloat158().getArray()).setLlimit(new MFFloat159().getArray())
                          .addChild(new HAnimSegment().setName("l_metatarsal_5").setDEF("hanim_l_metatarsal_5")
                            .addChild(new Transform().setTranslation(new float[] {0.1206f,0.0124f,-0.0671f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32160().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32161().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f162().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f163().getArray()))))))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_5").setDEF("hanim_l_metatarsophalangeal_5").setCenter(new float[] {0.1239f,0.0051f,-0.0153f}).setUlimit(new MFFloat164().getArray()).setLlimit(new MFFloat165().getArray())
                            .addChild(new HAnimSegment().setName("l_tarsal_proximal_phalanx_5").setDEF("hanim_l_tarsal_proximal_phalanx_5")
                              .addChild(new Transform().setTranslation(new float[] {0.1239f,0.0051f,-0.0153f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32166().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32167().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f168().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f169().getArray()))))))
                            .addChild(new HAnimJoint().setName("l_tarsal_proximal_interphalangeal_5").setDEF("hanim_l_tarsal_proximal_interphalangeal_5").setCenter(new float[] {0.1262f,0.0023f,-0.0077f}).setUlimit(new MFFloat170().getArray()).setLlimit(new MFFloat171().getArray())
                              .addChild(new HAnimSegment().setName("l_tarsal_middle_phalanx_5").setDEF("hanim_l_tarsal_middle_phalanx_5")
                                .addChild(new Transform().setTranslation(new float[] {0.1262f,0.0023f,-0.0077f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32172().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32173().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f174().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f175().getArray()))))))
                              .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_5").setDEF("hanim_l_tarsal_distal_interphalangeal_5").setCenter(new float[] {0.1271f,0f,0f}).setUlimit(new MFFloat176().getArray()).setLlimit(new MFFloat177().getArray())
                                .addChild(new HAnimSegment().setName("l_tarsal_distal_phalanx_5").setDEF("hanim_l_tarsal_distal_phalanx_5")
                                  .addChild(new Transform().setTranslation(new float[] {0.1271f,0f,0f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32178().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32179().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f180().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f181().getArray())))))))))))))))
              .addChild(new HAnimJoint().setName("r_hip").setDEF("hanim_r_hip").setCenter(new float[] {-0.0948f,0.8181f,-0.1202f}).setUlimit(new MFFloat182().getArray()).setLlimit(new MFFloat183().getArray())
                .addChild(new HAnimSegment().setName("r_thigh").setDEF("hanim_r_thigh")
                  .addChild(new Transform().setTranslation(new float[] {-0.0948f,0.8181f,-0.1202f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32184().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32185().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f186().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f187().getArray()))))))
                .addChild(new HAnimJoint().setName("r_knee").setDEF("hanim_r_knee").setCenter(new float[] {-0.0928f,0.4003f,-0.1213f}).setUlimit(new MFFloat188().getArray()).setLlimit(new MFFloat189().getArray())
                  .addChild(new HAnimSegment().setName("r_calf").setDEF("hanim_r_calf")
                    .addChild(new Transform().setTranslation(new float[] {-0.0928f,0.4003f,-0.1213f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32190().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32191().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f192().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f193().getArray()))))))
                  .addChild(new HAnimJoint().setName("r_talocrural").setDEF("hanim_r_talocrural").setCenter(new float[] {-0.0886f,0.0869f,-0.1123f}).setUlimit(new MFFloat194().getArray()).setLlimit(new MFFloat195().getArray())
                    .addChild(new HAnimSegment().setName("r_talus").setDEF("hanim_r_talus")
                      .addChild(new Transform().setTranslation(new float[] {-0.0886f,0.0869f,-0.1123f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32196().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32197().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f198().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f199().getArray()))))))
                    .addChild(new HAnimJoint().setName("r_talocalcaneonavicular").setDEF("hanim_r_talocalcaneonavicular").setCenter(new float[] {-0.0781f,0.0283f,-0.097f}).setUlimit(new MFFloat200().getArray()).setLlimit(new MFFloat201().getArray())
                      .addChild(new HAnimSegment().setName("r_navicular").setDEF("hanim_r_navicular")
                        .addChild(new Transform().setTranslation(new float[] {-0.0781f,0.0283f,-0.097f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32202().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32203().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f204().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f205().getArray()))))))
                      .addChild(new HAnimJoint().setName("r_cuneonavicular_1").setDEF("hanim_r_cuneonavicular_1").setCenter(new float[] {-0.0672f,0.0235f,-0.0835f}).setUlimit(new MFFloat206().getArray()).setLlimit(new MFFloat207().getArray())
                        .addChild(new HAnimSegment().setName("r_cuneiform_1").setDEF("hanim_r_cuneiform_1")
                          .addChild(new Transform().setTranslation(new float[] {-0.0672f,0.0235f,-0.0835f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32208().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32209().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f210().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f211().getArray()))))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_1").setDEF("hanim_r_tarsometatarsal_1").setCenter(new float[] {-0.0644f,0.0147f,-0.0577f}).setUlimit(new MFFloat212().getArray()).setLlimit(new MFFloat213().getArray())
                          .addChild(new HAnimSegment().setName("r_metatarsal_1").setDEF("hanim_r_metatarsal_1")
                            .addChild(new Transform().setTranslation(new float[] {-0.0644f,0.0147f,-0.0577f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32214().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32215().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f216().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f217().getArray()))))))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_1").setDEF("hanim_r_metatarsophalangeal_1").setCenter(new float[] {-0.0619f,0.0059f,-0.0083f}).setUlimit(new MFFloat218().getArray()).setLlimit(new MFFloat219().getArray())
                            .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_1").setDEF("hanim_r_tarsal_proximal_phalanx_1")
                              .addChild(new Transform().setTranslation(new float[] {-0.0619f,0.0059f,-0.0083f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32220().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32221().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f222().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f223().getArray()))))))
                            .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_1").setDEF("hanim_r_tarsal_distal_interphalangeal_1").setCenter(new float[] {-0.0619f,0.0036f,0.0134f}).setUlimit(new MFFloat224().getArray()).setLlimit(new MFFloat225().getArray())
                              .addChild(new HAnimSegment().setName("r_tarsal_distal_phalanx_1").setDEF("hanim_r_tarsal_distal_phalanx_1")
                                .addChild(new Transform().setTranslation(new float[] {-0.0619f,0.0036f,0.0134f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32226().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32227().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f228().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f229().getArray()))))))))))
                      .addChild(new HAnimJoint().setName("r_cuneonavicular_2").setDEF("hanim_r_cuneonavicular_2").setCenter(new float[] {-0.0812f,0.025f,-0.0805f}).setUlimit(new MFFloat230().getArray()).setLlimit(new MFFloat231().getArray())
                        .addChild(new HAnimSegment().setName("r_cuneiform_2").setDEF("hanim_r_cuneiform_2")
                          .addChild(new Transform().setTranslation(new float[] {-0.0812f,0.025f,-0.0805f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32232().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32233().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f234().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f235().getArray()))))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_2").setDEF("hanim_r_tarsometatarsal_2").setCenter(new float[] {-0.08f,0.0175f,-0.0608f}).setUlimit(new MFFloat236().getArray()).setLlimit(new MFFloat237().getArray())
                          .addChild(new HAnimSegment().setName("r_metatarsal_2").setDEF("hanim_r_metatarsal_2")
                            .addChild(new Transform().setTranslation(new float[] {-0.08f,0.0175f,-0.0608f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32238().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32239().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f240().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f241().getArray()))))))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_2").setDEF("hanim_r_metatarsophalangeal_2").setCenter(new float[] {-0.0823f,0.0064f,-0.004f}).setUlimit(new MFFloat242().getArray()).setLlimit(new MFFloat243().getArray())
                            .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_2").setDEF("hanim_r_tarsal_proximal_phalanx_2")
                              .addChild(new Transform().setTranslation(new float[] {-0.0823f,0.0064f,-0.004f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32244().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32245().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f246().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f247().getArray()))))))
                            .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_2").setDEF("hanim_r_tarsal_proximal_interphalangeal_2").setCenter(new float[] {-0.0841f,0.0041f,0.0121f}).setUlimit(new MFFloat248().getArray()).setLlimit(new MFFloat249().getArray())
                              .addChild(new HAnimSegment().setName("r_tarsal_middle_phalanx_2").setDEF("hanim_r_tarsal_middle_phalanx_2")
                                .addChild(new Transform().setTranslation(new float[] {-0.0841f,0.0041f,0.0121f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32250().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32251().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f252().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f253().getArray()))))))
                              .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_2").setDEF("hanim_r_tarsal_distal_interphalangeal_2").setCenter(new float[] {-0.0841f,0.0013f,0.0216f}).setUlimit(new MFFloat254().getArray()).setLlimit(new MFFloat255().getArray())
                                .addChild(new HAnimSegment().setName("r_tarsal_distal_phalanx_2").setDEF("hanim_r_tarsal_distal_phalanx_2")
                                  .addChild(new Transform().setTranslation(new float[] {-0.0841f,0.0013f,0.0216f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32256().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32257().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f258().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f259().getArray())))))))))))
                      .addChild(new HAnimJoint().setName("r_cuneonavicular_3").setDEF("hanim_r_cuneonavicular_3").setCenter(new float[] {-0.0928f,0.0248f,-0.0821f}).setUlimit(new MFFloat260().getArray()).setLlimit(new MFFloat261().getArray())
                        .addChild(new HAnimSegment().setName("r_cuneiform_3").setDEF("hanim_r_cuneiform_3")
                          .addChild(new Transform().setTranslation(new float[] {-0.0928f,0.0248f,-0.0821f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32262().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32263().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f264().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f265().getArray()))))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_3").setDEF("hanim_r_tarsometatarsal_3").setCenter(new float[] {-0.0944f,0.0175f,-0.0625f}).setUlimit(new MFFloat266().getArray()).setLlimit(new MFFloat267().getArray())
                          .addChild(new HAnimSegment().setName("r_metatarsal_3").setDEF("hanim_r_metatarsal_3")
                            .addChild(new Transform().setTranslation(new float[] {-0.0944f,0.0175f,-0.0625f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32268().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32269().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f270().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f271().getArray()))))))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_3").setDEF("hanim_r_metatarsophalangeal_3").setCenter(new float[] {-0.0963f,0.0065f,-0.0065f}).setUlimit(new MFFloat272().getArray()).setLlimit(new MFFloat273().getArray())
                            .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_3").setDEF("hanim_r_tarsal_proximal_phalanx_3")
                              .addChild(new Transform().setTranslation(new float[] {-0.0963f,0.0065f,-0.0065f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32274().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32275().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f276().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f277().getArray()))))))
                            .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_3").setDEF("hanim_r_tarsal_proximal_interphalangeal_3").setCenter(new float[] {-0.0987f,0.0034f,0.0086f}).setUlimit(new MFFloat278().getArray()).setLlimit(new MFFloat279().getArray())
                              .addChild(new HAnimSegment().setName("r_tarsal_middle_phalanx_3").setDEF("hanim_r_tarsal_middle_phalanx_3")
                                .addChild(new Transform().setTranslation(new float[] {-0.0987f,0.0034f,0.0086f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32280().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32281().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f282().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f283().getArray()))))))
                              .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_3").setDEF("hanim_r_tarsal_distal_interphalangeal_3").setCenter(new float[] {-0.1002f,0.0013f,0.0178f}).setUlimit(new MFFloat284().getArray()).setLlimit(new MFFloat285().getArray())
                                .addChild(new HAnimSegment().setName("r_tarsal_distal_phalanx_3").setDEF("hanim_r_tarsal_distal_phalanx_3")
                                  .addChild(new Transform().setTranslation(new float[] {-0.1002f,0.0013f,0.0178f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32286().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32287().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f288().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f289().getArray()))))))))))))
                    .addChild(new HAnimJoint().setName("r_calcaneocuboid").setDEF("hanim_r_calcaneocuboid").setCenter(new float[] {-0.0889f,0.0494f,-0.1278f}).setUlimit(new MFFloat290().getArray()).setLlimit(new MFFloat291().getArray())
                      .addChild(new HAnimSegment().setName("r_calcaneus").setDEF("hanim_r_calcaneus")
                        .addChild(new Transform().setTranslation(new float[] {-0.0889f,0.0494f,-0.1278f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32292().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32293().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f294().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f295().getArray()))))))
                      .addChild(new HAnimJoint().setName("r_transversetarsal").setDEF("hanim_r_transversetarsal").setCenter(new float[] {-0.1105f,0.0267f,-0.0998f}).setUlimit(new MFFloat296().getArray()).setLlimit(new MFFloat297().getArray())
                        .addChild(new HAnimSegment().setName("r_cuboid").setDEF("hanim_r_cuboid")
                          .addChild(new Transform().setTranslation(new float[] {-0.1105f,0.0267f,-0.0998f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32298().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32299().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f300().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f301().getArray()))))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_4").setDEF("hanim_r_tarsometatarsal_4").setCenter(new float[] {-0.1063f,0.016f,-0.0634f}).setUlimit(new MFFloat302().getArray()).setLlimit(new MFFloat303().getArray())
                          .addChild(new HAnimSegment().setName("r_metatarsal_4").setDEF("hanim_r_metatarsal_4")
                            .addChild(new Transform().setTranslation(new float[] {-0.1063f,0.016f,-0.0634f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32304().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32305().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f306().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f307().getArray()))))))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_4").setDEF("hanim_r_metatarsophalangeal_4").setCenter(new float[] {-0.1097f,0.0058f,-0.0107f}).setUlimit(new MFFloat308().getArray()).setLlimit(new MFFloat309().getArray())
                            .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_4").setDEF("hanim_r_tarsal_proximal_phalanx_4")
                              .addChild(new Transform().setTranslation(new float[] {-0.1097f,0.0058f,-0.0107f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32310().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32311().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f312().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f313().getArray()))))))
                            .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_4").setDEF("hanim_r_tarsal_proximal_interphalangeal_4").setCenter(new float[] {-0.114f,0.0037f,0.0044f}).setUlimit(new MFFloat314().getArray()).setLlimit(new MFFloat315().getArray())
                              .addChild(new HAnimSegment().setName("r_tarsal_middle_phalanx_4").setDEF("hanim_r_tarsal_middle_phalanx_4")
                                .addChild(new Transform().setTranslation(new float[] {-0.114f,0.0037f,0.0044f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32316().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32317().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f318().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f319().getArray()))))))
                              .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_4").setDEF("hanim_r_tarsal_distal_interphalangeal_4").setCenter(new float[] {-0.1155f,0.0008f,0.0118f}).setUlimit(new MFFloat320().getArray()).setLlimit(new MFFloat321().getArray())
                                .addChild(new HAnimSegment().setName("r_tarsal_distal_phalanx_4").setDEF("hanim_r_tarsal_distal_phalanx_4")
                                  .addChild(new Transform().setTranslation(new float[] {-0.1155f,0.0008f,0.0118f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32322().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32323().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f324().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f325().getArray()))))))))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_5").setDEF("hanim_r_tarsometatarsal_5").setCenter(new float[] {-0.1206f,0.0124f,-0.0671f}).setUlimit(new MFFloat326().getArray()).setLlimit(new MFFloat327().getArray())
                          .addChild(new HAnimSegment().setName("r_metatarsal_5").setDEF("hanim_r_metatarsal_5")
                            .addChild(new Transform().setTranslation(new float[] {-0.1206f,0.0124f,-0.0671f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32328().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32329().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f330().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f331().getArray()))))))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_5").setDEF("hanim_r_metatarsophalangeal_5").setCenter(new float[] {-0.1239f,0.0051f,-0.0153f}).setUlimit(new MFFloat332().getArray()).setLlimit(new MFFloat333().getArray())
                            .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_5").setDEF("hanim_r_tarsal_proximal_phalanx_5")
                              .addChild(new Transform().setTranslation(new float[] {-0.1239f,0.0051f,-0.0153f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32334().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32335().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f336().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f337().getArray()))))))
                            .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_5").setDEF("hanim_r_tarsal_proximal_interphalangeal_5").setCenter(new float[] {-0.1262f,0.0023f,-0.0077f}).setUlimit(new MFFloat338().getArray()).setLlimit(new MFFloat339().getArray())
                              .addChild(new HAnimSegment().setName("r_tarsal_middle_phalanx_5").setDEF("hanim_r_tarsal_middle_phalanx_5")
                                .addChild(new Transform().setTranslation(new float[] {-0.1262f,0.0023f,-0.0077f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32340().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32341().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f342().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f343().getArray()))))))
                              .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_5").setDEF("hanim_r_tarsal_distal_interphalangeal_5").setCenter(new float[] {-0.1271f,0f,0f}).setUlimit(new MFFloat344().getArray()).setLlimit(new MFFloat345().getArray())
                                .addChild(new HAnimSegment().setName("r_tarsal_distal_phalanx_5").setDEF("hanim_r_tarsal_distal_phalanx_5")
                                  .addChild(new Transform().setTranslation(new float[] {-0.1271f,0f,0f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32346().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32347().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f348().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f349().getArray())))))))))))))))
              .addChild(new HAnimJoint().setName("vl5").setDEF("hanim_vl5").setCenter(new float[] {-0.0002f,0.9169f,-0.1156f}).setUlimit(new MFFloat350().getArray()).setLlimit(new MFFloat351().getArray())
                .addChild(new HAnimSegment().setName("l5").setDEF("hanim_l5")
                  .addChild(new Transform().setTranslation(new float[] {-0.0002f,0.9169f,-0.1156f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32352().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32353().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f354().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f355().getArray()))))))
                .addChild(new HAnimJoint().setName("vl4").setDEF("hanim_vl4").setCenter(new float[] {-0.0002f,0.9412f,-0.1156f}).setUlimit(new MFFloat356().getArray()).setLlimit(new MFFloat357().getArray())
                  .addChild(new HAnimSegment().setName("l4").setDEF("hanim_l4")
                    .addChild(new Transform().setTranslation(new float[] {-0.0002f,0.9412f,-0.1156f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32358().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32359().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f360().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f361().getArray()))))))
                  .addChild(new HAnimJoint().setName("vl3").setDEF("hanim_vl3").setCenter(new float[] {-0.0002f,0.9574f,-0.1156f}).setUlimit(new MFFloat362().getArray()).setLlimit(new MFFloat363().getArray())
                    .addChild(new HAnimSegment().setName("l3").setDEF("hanim_l3")
                      .addChild(new Transform().setTranslation(new float[] {-0.0002f,0.9574f,-0.1156f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32364().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32365().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f366().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f367().getArray()))))))
                    .addChild(new HAnimJoint().setName("vl2").setDEF("hanim_vl2").setCenter(new float[] {-0.0002f,0.9738f,-0.1156f}).setUlimit(new MFFloat368().getArray()).setLlimit(new MFFloat369().getArray())
                      .addChild(new HAnimSegment().setName("l2").setDEF("hanim_l2")
                        .addChild(new Transform().setTranslation(new float[] {-0.0002f,0.9738f,-0.1156f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32370().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32371().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f372().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f373().getArray()))))))
                      .addChild(new HAnimJoint().setName("vl1").setDEF("hanim_vl1").setCenter(new float[] {-0.0002f,0.9911f,-0.1156f}).setUlimit(new MFFloat374().getArray()).setLlimit(new MFFloat375().getArray())
                        .addChild(new HAnimSegment().setName("l1").setDEF("hanim_l1")
                          .addChild(new Transform().setTranslation(new float[] {-0.0002f,0.9911f,-0.1156f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32376().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32377().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f378().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f379().getArray()))))))
                        .addChild(new HAnimJoint().setName("vt12").setDEF("hanim_vt12").setCenter(new float[] {-0.0002f,1.0145f,-0.1156f}).setUlimit(new MFFloat380().getArray()).setLlimit(new MFFloat381().getArray())
                          .addChild(new HAnimSegment().setName("t12").setDEF("hanim_t12")
                            .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.0145f,-0.1156f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32382().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32383().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f384().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f385().getArray()))))))
                          .addChild(new HAnimJoint().setName("vt11").setDEF("hanim_vt11").setCenter(new float[] {-0.0002f,1.0381f,-0.1156f}).setUlimit(new MFFloat386().getArray()).setLlimit(new MFFloat387().getArray())
                            .addChild(new HAnimSegment().setName("t11").setDEF("hanim_t11")
                              .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.0381f,-0.1156f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32388().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32389().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f390().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f391().getArray()))))))
                            .addChild(new HAnimJoint().setName("vt10").setDEF("hanim_vt10").setCenter(new float[] {-0.0002f,1.0552f,-0.1157f}).setUlimit(new MFFloat392().getArray()).setLlimit(new MFFloat393().getArray())
                              .addChild(new HAnimSegment().setName("t10").setDEF("hanim_t10")
                                .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.0552f,-0.1157f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32394().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32395().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f396().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f397().getArray()))))))
                              .addChild(new HAnimJoint().setName("vt9").setDEF("hanim_vt9").setCenter(new float[] {-0.0002f,1.0699f,-0.1156f}).setUlimit(new MFFloat398().getArray()).setLlimit(new MFFloat399().getArray())
                                .addChild(new HAnimSegment().setName("t9").setDEF("hanim_t9")
                                  .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.0699f,-0.1156f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32400().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32401().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f402().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f403().getArray()))))))
                                .addChild(new HAnimJoint().setName("vt8").setDEF("hanim_vt8").setCenter(new float[] {-0.0002f,1.0845f,-0.1156f}).setUlimit(new MFFloat404().getArray()).setLlimit(new MFFloat405().getArray())
                                  .addChild(new HAnimSegment().setName("t8").setDEF("hanim_t8")
                                    .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.0845f,-0.1156f})
                                      .addChild(new Shape()
                                        .setAppearance(new Appearance()
                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32406().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32407().getArray())
                                          .setCoord(new Coordinate().setPoint(new MFVec3f408().getArray()))
                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f409().getArray()))))))
                                  .addChild(new HAnimJoint().setName("vt7").setDEF("hanim_vt7").setCenter(new float[] {-0.0002f,1.1002f,-0.1156f}).setUlimit(new MFFloat410().getArray()).setLlimit(new MFFloat411().getArray())
                                    .addChild(new HAnimSegment().setName("t7").setDEF("hanim_t7")
                                      .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.1002f,-0.1156f})
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32412().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32413().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f414().getArray()))
                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f415().getArray()))))))
                                    .addChild(new HAnimJoint().setName("vt6").setDEF("hanim_vt6").setCenter(new float[] {-0.0002f,1.1131f,-0.1156f}).setUlimit(new MFFloat416().getArray()).setLlimit(new MFFloat417().getArray())
                                      .addChild(new HAnimSegment().setName("t6").setDEF("hanim_t6")
                                        .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.1131f,-0.1156f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32418().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32419().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f420().getArray()))
                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f421().getArray()))))))
                                      .addChild(new HAnimJoint().setName("vt5").setDEF("hanim_vt5").setCenter(new float[] {-0.0002f,1.1286f,-0.1156f}).setUlimit(new MFFloat422().getArray()).setLlimit(new MFFloat423().getArray())
                                        .addChild(new HAnimSegment().setName("t5").setDEF("hanim_t5")
                                          .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.1286f,-0.1156f})
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32424().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32425().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f426().getArray()))
                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f427().getArray()))))))
                                        .addChild(new HAnimJoint().setName("vt4").setDEF("hanim_vt4").setCenter(new float[] {-0.0002f,1.1439f,-0.1156f}).setUlimit(new MFFloat428().getArray()).setLlimit(new MFFloat429().getArray())
                                          .addChild(new HAnimSegment().setName("t4").setDEF("hanim_t4")
                                            .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.1439f,-0.1156f})
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32430().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32431().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f432().getArray()))
                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f433().getArray()))))))
                                          .addChild(new HAnimJoint().setName("vt3").setDEF("hanim_vt3").setCenter(new float[] {-0.0002f,1.1623f,-0.1156f}).setUlimit(new MFFloat434().getArray()).setLlimit(new MFFloat435().getArray())
                                            .addChild(new HAnimSegment().setName("t3").setDEF("hanim_t3")
                                              .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.1623f,-0.1156f})
                                                .addChild(new Shape()
                                                  .setAppearance(new Appearance()
                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32436().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32437().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f438().getArray()))
                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f439().getArray()))))))
                                            .addChild(new HAnimJoint().setName("vt2").setDEF("hanim_vt2").setCenter(new float[] {-0.0002f,1.1871f,-0.1157f}).setUlimit(new MFFloat440().getArray()).setLlimit(new MFFloat441().getArray())
                                              .addChild(new HAnimSegment().setName("t2").setDEF("hanim_t2")
                                                .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.1871f,-0.1157f})
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance()
                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32442().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32443().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f444().getArray()))
                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f445().getArray()))))))
                                              .addChild(new HAnimJoint().setName("vt1").setDEF("hanim_vt1").setCenter(new float[] {-0.0002f,1.2109f,-0.1156f}).setUlimit(new MFFloat446().getArray()).setLlimit(new MFFloat447().getArray())
                                                .addChild(new HAnimSegment().setName("t1").setDEF("hanim_t1")
                                                  .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.2109f,-0.1156f})
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32448().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32449().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f450().getArray()))
                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f451().getArray()))))))
                                                .addChild(new HAnimJoint().setName("vc7").setDEF("hanim_vc7").setCenter(new float[] {-0.0002f,1.2368f,-0.1169f}).setUlimit(new MFFloat452().getArray()).setLlimit(new MFFloat453().getArray())
                                                  .addChild(new HAnimSegment().setName("c7").setDEF("hanim_c7")
                                                    .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.2368f,-0.1169f})
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32454().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32455().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f456().getArray()))
                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f457().getArray()))))))
                                                  .addChild(new HAnimJoint().setName("vc6").setDEF("hanim_vc6").setCenter(new float[] {-0.0002f,1.249f,-0.1169f}).setUlimit(new MFFloat458().getArray()).setLlimit(new MFFloat459().getArray())
                                                    .addChild(new HAnimSegment().setName("c6").setDEF("hanim_c6")
                                                      .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.249f,-0.1169f})
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32460().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32461().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f462().getArray()))
                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f463().getArray()))))))
                                                    .addChild(new HAnimJoint().setName("vc5").setDEF("hanim_vc5").setCenter(new float[] {-0.0002f,1.2613f,-0.1169f}).setUlimit(new MFFloat464().getArray()).setLlimit(new MFFloat465().getArray())
                                                      .addChild(new HAnimSegment().setName("c5").setDEF("hanim_c5")
                                                        .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.2613f,-0.1169f})
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32466().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32467().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f468().getArray()))
                                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f469().getArray()))))))
                                                      .addChild(new HAnimJoint().setName("vc4").setDEF("hanim_vc4").setCenter(new float[] {-0.0002f,1.2737f,-0.1169f}).setUlimit(new MFFloat470().getArray()).setLlimit(new MFFloat471().getArray())
                                                        .addChild(new HAnimSegment().setName("c4").setDEF("hanim_c4")
                                                          .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.2737f,-0.1169f})
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32472().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32473().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f474().getArray()))
                                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f475().getArray()))))))
                                                        .addChild(new HAnimJoint().setName("vc3").setDEF("hanim_vc3").setCenter(new float[] {-0.0002f,1.2865f,-0.1169f}).setUlimit(new MFFloat476().getArray()).setLlimit(new MFFloat477().getArray())
                                                          .addChild(new HAnimSegment().setName("c3").setDEF("hanim_c3")
                                                            .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.2865f,-0.1169f})
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32478().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32479().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f480().getArray()))
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f481().getArray()))))))
                                                          .addChild(new HAnimJoint().setName("vc2").setDEF("hanim_vc2").setCenter(new float[] {-0.0002f,1.2982f,-0.1169f}).setUlimit(new MFFloat482().getArray()).setLlimit(new MFFloat483().getArray())
                                                            .addChild(new HAnimSegment().setName("c2").setDEF("hanim_c2")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.2982f,-0.1169f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32484().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32485().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f486().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f487().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("vc1").setDEF("hanim_vc1").setCenter(new float[] {-0.0002f,1.3099f,-0.1169f}).setUlimit(new MFFloat488().getArray()).setLlimit(new MFFloat489().getArray())
                                                              .addChild(new HAnimSegment().setName("c1").setDEF("hanim_c1")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.3099f,-0.1169f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32490().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32491().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f492().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f493().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("skullbase").setDEF("hanim_skullbase").setCenter(new float[] {-0.0002f,1.3041f,-0.1173f}).setUlimit(new MFFloat494().getArray()).setLlimit(new MFFloat495().getArray())
                                                                .addChild(new HAnimSegment().setName("skull").setDEF("hanim_skull")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.3041f,-0.1173f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32496().getArray().append(new MFInt32497().getArray()).append(new MFInt32498().getArray())).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32499().getArray().append(new MFInt32500().getArray()).append(new MFInt32501().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f502().getArray().append(new MFVec3f503().getArray())))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f504().getArray().append(new MFVec2f505().getArray())))))))
                                                                .addChild(new HAnimJoint().setName("l_eyelid_joint").setDEF("hanim_l_eyelid_joint").setCenter(new float[] {0.0503f,1.4157f,-0.0689f}).setUlimit(new MFFloat506().getArray()).setLlimit(new MFFloat507().getArray())
                                                                  .addChild(new HAnimSegment().setName("l_eyelid").setDEF("hanim_l_eyelid")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.0503f,1.4157f,-0.0689f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32508().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32509().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f510().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f511().getArray())))))))
                                                                .addChild(new HAnimJoint().setName("r_eyelid_joint").setDEF("hanim_r_eyelid_joint").setCenter(new float[] {-0.0507f,1.4157f,-0.0689f}).setUlimit(new MFFloat512().getArray()).setLlimit(new MFFloat513().getArray())
                                                                  .addChild(new HAnimSegment().setName("r_eyelid").setDEF("hanim_r_eyelid")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.0507f,1.4157f,-0.0689f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32514().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32515().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f516().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f517().getArray())))))))
                                                                .addChild(new HAnimJoint().setName("l_eyeball_joint").setDEF("hanim_l_eyeball_joint").setCenter(new float[] {0.0479f,1.3963f,-0.0188f}).setUlimit(new MFFloat518().getArray()).setLlimit(new MFFloat519().getArray())
                                                                  .addChild(new HAnimSegment().setName("l_eyeball").setDEF("hanim_l_eyeball")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.0479f,1.3963f,-0.0188f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32520().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32521().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f522().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f523().getArray())))))))
                                                                .addChild(new HAnimJoint().setName("r_eyeball_joint").setDEF("hanim_r_eyeball_joint").setCenter(new float[] {-0.0483f,1.3963f,-0.0188f}).setUlimit(new MFFloat524().getArray()).setLlimit(new MFFloat525().getArray())
                                                                  .addChild(new HAnimSegment().setName("r_eyeball").setDEF("hanim_r_eyeball")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.0483f,1.3963f,-0.0188f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32526().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32527().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f528().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f529().getArray())))))))
                                                                .addChild(new HAnimJoint().setName("l_eyebrow_joint").setDEF("hanim_l_eyebrow_joint").setCenter(new float[] {0.0216f,1.4053f,0.0051f}).setUlimit(new MFFloat530().getArray()).setLlimit(new MFFloat531().getArray())
                                                                  .addChild(new HAnimSegment().setName("l_eyebrow").setDEF("hanim_l_eyebrow")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.0216f,1.4053f,0.0051f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32532().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32533().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f534().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f535().getArray())))))))
                                                                .addChild(new HAnimJoint().setName("r_eyebrow_joint").setDEF("hanim_r_eyebrow_joint").setCenter(new float[] {-0.0219f,1.4053f,0.0051f}).setUlimit(new MFFloat536().getArray()).setLlimit(new MFFloat537().getArray())
                                                                  .addChild(new HAnimSegment().setName("r_eyebrow").setDEF("hanim_r_eyebrow")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.0219f,1.4053f,0.0051f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32538().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32539().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f540().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f541().getArray())))))))
                                                                .addChild(new HAnimJoint().setName("temporomandibular").setDEF("hanim_temporomandibular").setCenter(new float[] {-0.0002f,1.3043f,-0.0865f}).setUlimit(new MFFloat542().getArray()).setLlimit(new MFFloat543().getArray())
                                                                  .addChild(new HAnimSegment().setName("jaw").setDEF("hanim_jaw")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.0002f,1.3043f,-0.0865f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32544().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32545().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f546().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f547().getArray())))))))))))))))
                                                .addChild(new HAnimJoint().setName("l_acromioclavicular").setDEF("hanim_l_acromioclavicular").setCenter(new float[] {0.0383f,1.2001f,-0.1157f}).setUlimit(new MFFloat548().getArray()).setLlimit(new MFFloat549().getArray())
                                                  .addChild(new HAnimSegment().setName("l_clavicle").setDEF("hanim_l_clavicle")
                                                    .addChild(new Transform().setTranslation(new float[] {0.0383f,1.2001f,-0.1157f})
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32550().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32551().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f552().getArray()))
                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f553().getArray()))))))
                                                  .addChild(new HAnimJoint().setName("l_sternoclavicular").setDEF("hanim_l_sternoclavicular").setCenter(new float[] {0.1228f,1.1833f,-0.1148f}).setUlimit(new MFFloat554().getArray()).setLlimit(new MFFloat555().getArray())
                                                    .addChild(new HAnimSegment().setName("l_scapula").setDEF("hanim_l_scapula")
                                                      .addChild(new Transform().setTranslation(new float[] {0.1228f,1.1833f,-0.1148f})
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32556().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32557().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f558().getArray()))
                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f559().getArray()))))))
                                                    .addChild(new HAnimJoint().setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new float[] {0.1649f,1.17f,-0.1051f}).setUlimit(new MFFloat560().getArray()).setLlimit(new MFFloat561().getArray())
                                                      .addChild(new HAnimSegment().setName("l_upperarm").setDEF("hanim_l_upperarm")
                                                        .addChild(new Transform().setTranslation(new float[] {0.1649f,1.17f,-0.1051f})
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32562().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32563().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f564().getArray()))
                                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f565().getArray()))))))
                                                      .addChild(new HAnimJoint().setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new float[] {0.1819f,0.9202f,-0.1075f}).setUlimit(new MFFloat566().getArray()).setLlimit(new MFFloat567().getArray())
                                                        .addChild(new HAnimSegment().setName("l_forearm").setDEF("hanim_l_forearm")
                                                          .addChild(new Transform().setTranslation(new float[] {0.1819f,0.9202f,-0.1075f})
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32568().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32569().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f570().getArray()))
                                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f571().getArray()))))))
                                                        .addChild(new HAnimJoint().setName("l_radiocarpal").setDEF("hanim_l_radiocarpal").setCenter(new float[] {0.1818f,0.7157f,-0.1069f}).setUlimit(new MFFloat572().getArray()).setLlimit(new MFFloat573().getArray())
                                                          .addChild(new HAnimSegment().setName("l_carpal").setDEF("hanim_l_carpal")
                                                            .addChild(new Transform().setTranslation(new float[] {0.1818f,0.7157f,-0.1069f})
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32574().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32575().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f576().getArray()))
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f577().getArray()))))))
                                                          .addChild(new HAnimJoint().setName("l_midcarpal_1").setDEF("hanim_l_midcarpal_1").setCenter(new float[] {0.1811f,0.6975f,-0.0826f}).setUlimit(new MFFloat578().getArray()).setLlimit(new MFFloat579().getArray())
                                                            .addChild(new HAnimSegment().setName("l_trapezium").setDEF("hanim_l_trapezium")
                                                              .addChild(new Transform().setTranslation(new float[] {0.1811f,0.6975f,-0.0826f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32580().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32581().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f582().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f583().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("l_carpometacarpal_1").setDEF("hanim_l_carpometacarpal_1").setCenter(new float[] {0.1803f,0.684f,-0.0759f}).setUlimit(new MFFloat584().getArray()).setLlimit(new MFFloat585().getArray())
                                                              .addChild(new HAnimSegment().setName("l_metacarpal_1").setDEF("hanim_l_metacarpal_1")
                                                                .addChild(new Transform().setTranslation(new float[] {0.1803f,0.684f,-0.0759f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32586().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32587().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f588().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f589().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("l_metacarpophalangeal_1").setDEF("hanim_l_metacarpophalangeal_1").setCenter(new float[] {0.1809f,0.6642f,-0.0661f}).setUlimit(new MFFloat590().getArray()).setLlimit(new MFFloat591().getArray())
                                                                .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_1").setDEF("hanim_l_carpal_proximal_phalanx_1")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1809f,0.6642f,-0.0661f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32592().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32593().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f594().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f595().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("l_carpal_interphalangeal_1").setDEF("hanim_l_carpal_interphalangeal_1").setCenter(new float[] {0.1825f,0.6455f,-0.0522f}).setUlimit(new MFFloat596().getArray()).setLlimit(new MFFloat597().getArray())
                                                                  .addChild(new HAnimSegment().setName("l_carpal_distal_phalanx_1").setDEF("hanim_l_carpal_distal_phalanx_1")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1825f,0.6455f,-0.0522f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32598().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32599().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f600().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f601().getArray()))))))))))
                                                          .addChild(new HAnimJoint().setName("l_midcarpal_2").setDEF("hanim_l_midcarpal_2").setCenter(new float[] {0.1811f,0.6984f,-0.0935f}).setUlimit(new MFFloat602().getArray()).setLlimit(new MFFloat603().getArray())
                                                            .addChild(new HAnimSegment().setName("l_trapezoid").setDEF("hanim_l_trapezoid")
                                                              .addChild(new Transform().setTranslation(new float[] {0.1811f,0.6984f,-0.0935f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32604().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32605().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f606().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f607().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("l_carpometacarpal_2").setDEF("hanim_l_carpometacarpal_2").setCenter(new float[] {0.1811f,0.679f,-0.0922f}).setUlimit(new MFFloat608().getArray()).setLlimit(new MFFloat609().getArray())
                                                              .addChild(new HAnimSegment().setName("l_metacarpal_2").setDEF("hanim_l_metacarpal_2")
                                                                .addChild(new Transform().setTranslation(new float[] {0.1811f,0.679f,-0.0922f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32610().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32611().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f612().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f613().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("l_metacarpophalangeal_2").setDEF("hanim_l_metacarpophalangeal_2").setCenter(new float[] {0.1836f,0.6286f,-0.0868f}).setUlimit(new MFFloat614().getArray()).setLlimit(new MFFloat615().getArray())
                                                                .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_2").setDEF("hanim_l_carpal_proximal_phalanx_2")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1836f,0.6286f,-0.0868f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32616().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32617().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f618().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f619().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_proximal_interphalangeal_2").setCenter(new float[] {0.1815f,0.5983f,-0.0877f}).setUlimit(new MFFloat620().getArray()).setLlimit(new MFFloat621().getArray())
                                                                  .addChild(new HAnimSegment().setName("l_carpal_middle_phalanx_2").setDEF("hanim_l_carpal_middle_phalanx_2")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1815f,0.5983f,-0.0877f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32622().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32623().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f624().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f625().getArray()))))))
                                                                  .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_2").setDEF("hanim_l_carpal_distal_interphalangeal_2").setCenter(new float[] {0.1805f,0.5731f,-0.0885f}).setUlimit(new MFFloat626().getArray()).setLlimit(new MFFloat627().getArray())
                                                                    .addChild(new HAnimSegment().setName("l_carpal_distal_phalanx_2").setDEF("hanim_l_carpal_distal_phalanx_2")
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1805f,0.5731f,-0.0885f})
                                                                        .addChild(new Shape()
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32628().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32629().getArray())
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f630().getArray()))
                                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f631().getArray())))))))))))
                                                          .addChild(new HAnimJoint().setName("l_midcarpal_3").setDEF("hanim_l_midcarpal_3").setCenter(new float[] {0.1809f,0.7f,-0.1067f}).setUlimit(new MFFloat632().getArray()).setLlimit(new MFFloat633().getArray())
                                                            .addChild(new HAnimSegment().setName("l_capitate").setDEF("hanim_l_capitate")
                                                              .addChild(new Transform().setTranslation(new float[] {0.1809f,0.7f,-0.1067f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32634().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32635().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f636().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f637().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("l_carpometacarpal_3").setDEF("hanim_l_carpometacarpal_3").setCenter(new float[] {0.1809f,0.6772f,-0.1081f}).setUlimit(new MFFloat638().getArray()).setLlimit(new MFFloat639().getArray())
                                                              .addChild(new HAnimSegment().setName("l_metacarpal_3").setDEF("hanim_l_metacarpal_3")
                                                                .addChild(new Transform().setTranslation(new float[] {0.1809f,0.6772f,-0.1081f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32640().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32641().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f642().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f643().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("l_metacarpophalangeal_3").setDEF("hanim_l_metacarpophalangeal_3").setCenter(new float[] {0.1835f,0.6264f,-0.1058f}).setUlimit(new MFFloat644().getArray()).setLlimit(new MFFloat645().getArray())
                                                                .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_3").setDEF("hanim_l_carpal_proximal_phalanx_3")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1835f,0.6264f,-0.1058f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32646().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32647().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f648().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f649().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_proximal_interphalangeal_3").setCenter(new float[] {0.1815f,0.5947f,-0.1054f}).setUlimit(new MFFloat650().getArray()).setLlimit(new MFFloat651().getArray())
                                                                  .addChild(new HAnimSegment().setName("l_carpal_middle_phalanx_3").setDEF("hanim_l_carpal_middle_phalanx_3")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1815f,0.5947f,-0.1054f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32652().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32653().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f654().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f655().getArray()))))))
                                                                  .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_3").setDEF("hanim_l_carpal_distal_interphalangeal_3").setCenter(new float[] {0.1805f,0.5668f,-0.1056f}).setUlimit(new MFFloat656().getArray()).setLlimit(new MFFloat657().getArray())
                                                                    .addChild(new HAnimSegment().setName("l_carpal_distal_phalanx_3").setDEF("hanim_l_carpal_distal_phalanx_3")
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1805f,0.5668f,-0.1056f})
                                                                        .addChild(new Shape()
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32658().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32659().getArray())
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f660().getArray()))
                                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f661().getArray())))))))))))
                                                          .addChild(new HAnimJoint().setName("l_midcarpal_4_5").setDEF("hanim_l_midcarpal_4_5").setCenter(new float[] {0.1809f,0.6973f,-0.1276f}).setUlimit(new MFFloat662().getArray()).setLlimit(new MFFloat663().getArray())
                                                            .addChild(new HAnimSegment().setName("l_hamate").setDEF("hanim_l_hamate")
                                                              .addChild(new Transform().setTranslation(new float[] {0.1809f,0.6973f,-0.1276f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32664().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32665().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f666().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f667().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("l_carpometacarpal_4").setDEF("hanim_l_carpometacarpal_4").setCenter(new float[] {0.1809f,0.6777f,-0.1218f}).setUlimit(new MFFloat668().getArray()).setLlimit(new MFFloat669().getArray())
                                                              .addChild(new HAnimSegment().setName("l_metacarpal_4").setDEF("hanim_l_metacarpal_4")
                                                                .addChild(new Transform().setTranslation(new float[] {0.1809f,0.6777f,-0.1218f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32670().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32671().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f672().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f673().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("l_metacarpophalangeal_4").setDEF("hanim_l_metacarpophalangeal_4").setCenter(new float[] {0.1835f,0.6255f,-0.1233f}).setUlimit(new MFFloat674().getArray()).setLlimit(new MFFloat675().getArray())
                                                                .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_4").setDEF("hanim_l_carpal_proximal_phalanx_4")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1835f,0.6255f,-0.1233f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32676().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32677().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f678().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f679().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_proximal_interphalangeal_4").setCenter(new float[] {0.1815f,0.598f,-0.1225f}).setUlimit(new MFFloat680().getArray()).setLlimit(new MFFloat681().getArray())
                                                                  .addChild(new HAnimSegment().setName("l_carpal_middle_phalanx_4").setDEF("hanim_l_carpal_middle_phalanx_4")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1815f,0.598f,-0.1225f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32682().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32683().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f684().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f685().getArray()))))))
                                                                  .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_4").setDEF("hanim_l_carpal_distal_interphalangeal_4").setCenter(new float[] {0.1805f,0.5722f,-0.1217f}).setUlimit(new MFFloat686().getArray()).setLlimit(new MFFloat687().getArray())
                                                                    .addChild(new HAnimSegment().setName("l_carpal_distal_phalanx_4").setDEF("hanim_l_carpal_distal_phalanx_4")
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1805f,0.5722f,-0.1217f})
                                                                        .addChild(new Shape()
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32688().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32689().getArray())
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f690().getArray()))
                                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f691().getArray())))))))))))
                                                          .addChild(new HAnimJoint().setName("l_carpometacarpal_5").setDEF("hanim_l_carpometacarpal_5").setCenter(new float[] {0.1815f,0.6797f,-0.1347f}).setUlimit(new MFFloat692().getArray()).setLlimit(new MFFloat693().getArray())
                                                            .addChild(new HAnimSegment().setName("l_metacarpal_5").setDEF("hanim_l_metacarpal_5")
                                                              .addChild(new Transform().setTranslation(new float[] {0.1815f,0.6797f,-0.1347f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32694().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32695().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f696().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f697().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("l_metacarpophalangeal_5").setDEF("hanim_l_metacarpophalangeal_5").setCenter(new float[] {0.1832f,0.6295f,-0.1389f}).setUlimit(new MFFloat698().getArray()).setLlimit(new MFFloat699().getArray())
                                                              .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_5").setDEF("hanim_l_carpal_proximal_phalanx_5")
                                                                .addChild(new Transform().setTranslation(new float[] {0.1832f,0.6295f,-0.1389f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32700().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32701().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f702().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f703().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_5").setDEF("hanim_l_carpal_proximal_interphalangeal_5").setCenter(new float[] {0.1815f,0.6124f,-0.139f}).setUlimit(new MFFloat704().getArray()).setLlimit(new MFFloat705().getArray())
                                                                .addChild(new HAnimSegment().setName("l_carpal_middle_phalanx_5").setDEF("hanim_l_carpal_middle_phalanx_5")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1815f,0.6124f,-0.139f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32706().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32707().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f708().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f709().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_5").setDEF("hanim_l_carpal_distal_interphalangeal_5").setCenter(new float[] {0.1806f,0.5938f,-0.1388f}).setUlimit(new MFFloat710().getArray()).setLlimit(new MFFloat711().getArray())
                                                                  .addChild(new HAnimSegment().setName("l_carpal_distal_phalanx_5").setDEF("hanim_l_carpal_distal_phalanx_5")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1806f,0.5938f,-0.1388f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32712().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32713().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f714().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f715().getArray())))))))))))))))
                                                .addChild(new HAnimJoint().setName("r_acromioclavicular").setDEF("hanim_r_acromioclavicular").setCenter(new float[] {-0.0387f,1.2001f,-0.1157f}).setUlimit(new MFFloat716().getArray()).setLlimit(new MFFloat717().getArray())
                                                  .addChild(new HAnimSegment().setName("r_clavicle").setDEF("hanim_r_clavicle")
                                                    .addChild(new Transform().setTranslation(new float[] {-0.0387f,1.2001f,-0.1157f})
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32718().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32719().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f720().getArray()))
                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f721().getArray()))))))
                                                  .addChild(new HAnimJoint().setName("r_sternoclavicular").setDEF("hanim_r_sternoclavicular").setCenter(new float[] {-0.1231f,1.1833f,-0.1148f}).setUlimit(new MFFloat722().getArray()).setLlimit(new MFFloat723().getArray())
                                                    .addChild(new HAnimSegment().setName("r_scapula").setDEF("hanim_r_scapula")
                                                      .addChild(new Transform().setTranslation(new float[] {-0.1231f,1.1833f,-0.1148f})
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32724().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32725().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f726().getArray()))
                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f727().getArray()))))))
                                                    .addChild(new HAnimJoint().setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new float[] {-0.1649f,1.17f,-0.1051f}).setUlimit(new MFFloat728().getArray()).setLlimit(new MFFloat729().getArray())
                                                      .addChild(new HAnimSegment().setName("r_upperarm").setDEF("hanim_r_upperarm")
                                                        .addChild(new Transform().setTranslation(new float[] {-0.1649f,1.17f,-0.1051f})
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32730().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32731().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f732().getArray()))
                                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f733().getArray()))))))
                                                      .addChild(new HAnimJoint().setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new float[] {-0.1819f,0.9202f,-0.1075f}).setUlimit(new MFFloat734().getArray()).setLlimit(new MFFloat735().getArray())
                                                        .addChild(new HAnimSegment().setName("r_forearm").setDEF("hanim_r_forearm")
                                                          .addChild(new Transform().setTranslation(new float[] {-0.1819f,0.9202f,-0.1075f})
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32736().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32737().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f738().getArray()))
                                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f739().getArray()))))))
                                                        .addChild(new HAnimJoint().setName("r_radiocarpal").setDEF("hanim_r_radiocarpal").setCenter(new float[] {-0.1818f,0.7157f,-0.1069f}).setUlimit(new MFFloat740().getArray()).setLlimit(new MFFloat741().getArray())
                                                          .addChild(new HAnimSegment().setName("r_carpal").setDEF("hanim_r_carpal")
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1818f,0.7157f,-0.1069f})
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32742().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32743().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f744().getArray()))
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f745().getArray()))))))
                                                          .addChild(new HAnimJoint().setName("r_midcarpal_1").setDEF("hanim_r_midcarpal_1").setCenter(new float[] {-0.1811f,0.6975f,-0.0826f}).setUlimit(new MFFloat746().getArray()).setLlimit(new MFFloat747().getArray())
                                                            .addChild(new HAnimSegment().setName("r_trapezium").setDEF("hanim_r_trapezium")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1811f,0.6975f,-0.0826f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32748().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32749().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f750().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f751().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("r_carpometacarpal_1").setDEF("hanim_r_carpometacarpal_1").setCenter(new float[] {-0.1803f,0.684f,-0.0759f}).setUlimit(new MFFloat752().getArray()).setLlimit(new MFFloat753().getArray())
                                                              .addChild(new HAnimSegment().setName("r_metacarpal_1").setDEF("hanim_r_metacarpal_1")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1803f,0.684f,-0.0759f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32754().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32755().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f756().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f757().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("r_metacarpophalangeal_1").setDEF("hanim_r_metacarpophalangeal_1").setCenter(new float[] {-0.1808f,0.6642f,-0.0661f}).setUlimit(new MFFloat758().getArray()).setLlimit(new MFFloat759().getArray())
                                                                .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_1").setDEF("hanim_r_carpal_proximal_phalanx_1")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1808f,0.6642f,-0.0661f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32760().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32761().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f762().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f763().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("r_carpal_interphalangeal_1").setDEF("hanim_r_carpal_interphalangeal_1").setCenter(new float[] {-0.1825f,0.6455f,-0.0522f}).setUlimit(new MFFloat764().getArray()).setLlimit(new MFFloat765().getArray())
                                                                  .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_1").setDEF("hanim_r_carpal_distal_phalanx_1")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1825f,0.6455f,-0.0522f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32766().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32767().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f768().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f769().getArray()))))))))))
                                                          .addChild(new HAnimJoint().setName("r_midcarpal_2").setDEF("hanim_r_midcarpal_2").setCenter(new float[] {-0.1811f,0.6984f,-0.0935f}).setUlimit(new MFFloat770().getArray()).setLlimit(new MFFloat771().getArray())
                                                            .addChild(new HAnimSegment().setName("r_trapezoid").setDEF("hanim_r_trapezoid")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1811f,0.6984f,-0.0935f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32772().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32773().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f774().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f775().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("r_carpometacarpal_2").setDEF("hanim_r_carpometacarpal_2").setCenter(new float[] {-0.1811f,0.679f,-0.0922f}).setUlimit(new MFFloat776().getArray()).setLlimit(new MFFloat777().getArray())
                                                              .addChild(new HAnimSegment().setName("r_metacarpal_2").setDEF("hanim_r_metacarpal_2")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1811f,0.679f,-0.0922f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32778().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32779().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f780().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f781().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("r_metacarpophalangeal_2").setDEF("hanim_r_metacarpophalangeal_2").setCenter(new float[] {-0.1835f,0.6286f,-0.0868f}).setUlimit(new MFFloat782().getArray()).setLlimit(new MFFloat783().getArray())
                                                                .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_2").setDEF("hanim_r_carpal_proximal_phalanx_2")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1835f,0.6286f,-0.0868f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32784().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32785().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f786().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f787().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_proximal_interphalangeal_2").setCenter(new float[] {-0.1815f,0.5983f,-0.0877f}).setUlimit(new MFFloat788().getArray()).setLlimit(new MFFloat789().getArray())
                                                                  .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_2").setDEF("hanim_r_carpal_middle_phalanx_2")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1815f,0.5983f,-0.0877f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32790().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32791().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f792().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f793().getArray()))))))
                                                                  .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_2").setDEF("hanim_r_carpal_distal_interphalangeal_2").setCenter(new float[] {-0.1805f,0.5731f,-0.0885f}).setUlimit(new MFFloat794().getArray()).setLlimit(new MFFloat795().getArray())
                                                                    .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_2").setDEF("hanim_r_carpal_distal_phalanx_2")
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1805f,0.5731f,-0.0885f})
                                                                        .addChild(new Shape()
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32796().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32797().getArray())
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f798().getArray()))
                                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f799().getArray())))))))))))
                                                          .addChild(new HAnimJoint().setName("r_midcarpal_3").setDEF("hanim_r_midcarpal_3").setCenter(new float[] {-0.1809f,0.7f,-0.1067f}).setUlimit(new MFFloat800().getArray()).setLlimit(new MFFloat801().getArray())
                                                            .addChild(new HAnimSegment().setName("r_capitate").setDEF("hanim_r_capitate")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1809f,0.7f,-0.1067f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32802().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32803().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f804().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f805().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("r_carpometacarpal_3").setDEF("hanim_r_carpometacarpal_3").setCenter(new float[] {-0.1809f,0.6772f,-0.1081f}).setUlimit(new MFFloat806().getArray()).setLlimit(new MFFloat807().getArray())
                                                              .addChild(new HAnimSegment().setName("r_metacarpal_3").setDEF("hanim_r_metacarpal_3")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1809f,0.6772f,-0.1081f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32808().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32809().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f810().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f811().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("r_metacarpophalangeal_3").setDEF("hanim_r_metacarpophalangeal_3").setCenter(new float[] {-0.1835f,0.6264f,-0.1058f}).setUlimit(new MFFloat812().getArray()).setLlimit(new MFFloat813().getArray())
                                                                .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_3").setDEF("hanim_r_carpal_proximal_phalanx_3")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1835f,0.6264f,-0.1058f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32814().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32815().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f816().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f817().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_proximal_interphalangeal_3").setCenter(new float[] {-0.1815f,0.5947f,-0.1054f}).setUlimit(new MFFloat818().getArray()).setLlimit(new MFFloat819().getArray())
                                                                  .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_3").setDEF("hanim_r_carpal_middle_phalanx_3")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1815f,0.5947f,-0.1054f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32820().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32821().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f822().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f823().getArray()))))))
                                                                  .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_3").setDEF("hanim_r_carpal_distal_interphalangeal_3").setCenter(new float[] {-0.1805f,0.5668f,-0.1056f}).setUlimit(new MFFloat824().getArray()).setLlimit(new MFFloat825().getArray())
                                                                    .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_3").setDEF("hanim_r_carpal_distal_phalanx_3")
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1805f,0.5668f,-0.1056f})
                                                                        .addChild(new Shape()
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32826().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32827().getArray())
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f828().getArray()))
                                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f829().getArray())))))))))))
                                                          .addChild(new HAnimJoint().setName("r_midcarpal_4_5").setDEF("hanim_r_midcarpal_4_5").setCenter(new float[] {-0.1809f,0.6973f,-0.1276f}).setUlimit(new MFFloat830().getArray()).setLlimit(new MFFloat831().getArray())
                                                            .addChild(new HAnimSegment().setName("r_hamate").setDEF("hanim_r_hamate")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1809f,0.6973f,-0.1276f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32832().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32833().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f834().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f835().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("r_carpometacarpal_4").setDEF("hanim_r_carpometacarpal_4").setCenter(new float[] {-0.1809f,0.6777f,-0.1218f}).setUlimit(new MFFloat836().getArray()).setLlimit(new MFFloat837().getArray())
                                                              .addChild(new HAnimSegment().setName("r_metacarpal_4").setDEF("hanim_r_metacarpal_4")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1809f,0.6777f,-0.1218f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32838().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32839().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f840().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f841().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("r_metacarpophalangeal_4").setDEF("hanim_r_metacarpophalangeal_4").setCenter(new float[] {-0.1835f,0.6255f,-0.1233f}).setUlimit(new MFFloat842().getArray()).setLlimit(new MFFloat843().getArray())
                                                                .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_4").setDEF("hanim_r_carpal_proximal_phalanx_4")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1835f,0.6255f,-0.1233f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32844().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32845().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f846().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f847().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_proximal_interphalangeal_4").setCenter(new float[] {-0.1815f,0.598f,-0.1225f}).setUlimit(new MFFloat848().getArray()).setLlimit(new MFFloat849().getArray())
                                                                  .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_4").setDEF("hanim_r_carpal_middle_phalanx_4")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1815f,0.598f,-0.1225f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32850().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32851().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f852().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f853().getArray()))))))
                                                                  .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_4").setDEF("hanim_r_carpal_distal_interphalangeal_4").setCenter(new float[] {-0.1805f,0.5722f,-0.1217f}).setUlimit(new MFFloat854().getArray()).setLlimit(new MFFloat855().getArray())
                                                                    .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_4").setDEF("hanim_r_carpal_distal_phalanx_4")
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1805f,0.5722f,-0.1217f})
                                                                        .addChild(new Shape()
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32856().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32857().getArray())
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f858().getArray()))
                                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f859().getArray())))))))))))
                                                          .addChild(new HAnimJoint().setName("r_carpometacarpal_5").setDEF("hanim_r_carpometacarpal_5").setCenter(new float[] {-0.1814f,0.6797f,-0.1347f}).setUlimit(new MFFloat860().getArray()).setLlimit(new MFFloat861().getArray())
                                                            .addChild(new HAnimSegment().setName("r_metacarpal_5").setDEF("hanim_r_metacarpal_5")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1814f,0.6797f,-0.1347f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32862().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32863().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f864().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f865().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("r_metacarpophalangeal_5").setDEF("hanim_r_metacarpophalangeal_5").setCenter(new float[] {-0.1832f,0.6295f,-0.1389f}).setUlimit(new MFFloat866().getArray()).setLlimit(new MFFloat867().getArray())
                                                              .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_5").setDEF("hanim_r_carpal_proximal_phalanx_5")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1832f,0.6295f,-0.1389f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32868().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32869().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f870().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f871().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_5").setDEF("hanim_r_carpal_proximal_interphalangeal_5").setCenter(new float[] {-0.1815f,0.6124f,-0.139f}).setUlimit(new MFFloat872().getArray()).setLlimit(new MFFloat873().getArray())
                                                                .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_5").setDEF("hanim_r_carpal_middle_phalanx_5")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1815f,0.6124f,-0.139f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32874().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32875().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f876().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f877().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_5").setDEF("hanim_r_carpal_distal_interphalangeal_5").setCenter(new float[] {-0.1806f,0.5938f,-0.1388f}).setUlimit(new MFFloat878().getArray()).setLlimit(new MFFloat879().getArray())
                                                                  .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_5").setDEF("hanim_r_carpal_distal_phalanx_5")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1806f,0.5938f,-0.1388f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32880().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32881().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f882().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f883().getArray()))))))))))))))))))))))))))))))))))
          .addJoints(new HAnimJoint().setUSE("hanim_humanoid_root"))
          .addJoints(new HAnimJoint().setUSE("hanim_sacroiliac"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl5"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl4"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl3"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl2"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl1"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt12"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt11"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt10"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt9"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt8"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt7"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt6"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt5"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt4"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt3"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt2"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt1"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc7"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc6"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc5"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc4"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc3"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc2"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc1"))
          .addJoints(new HAnimJoint().setUSE("hanim_skullbase"))
          .addJoints(new HAnimJoint().setUSE("hanim_temporomandibular"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_acromioclavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_acromioclavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_calcaneocuboid"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_calcaneocuboid"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_interphalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_interphalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_cuneonavicular_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_cuneonavicular_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_cuneonavicular_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_cuneonavicular_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_cuneonavicular_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_cuneonavicular_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_elbow"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_elbow"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_eyeball_joint"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_eyeball_joint"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_eyebrow_joint"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_eyebrow_joint"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_eyelid_joint"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_eyelid_joint"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_hip"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_hip"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_knee"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_knee"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_4_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_4_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_radiocarpal"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_radiocarpal"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_shoulder"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_shoulder"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_sternoclavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_sternoclavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_talocalcaneonavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_talocalcaneonavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_talocrural"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_talocrural"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_transversetarsal"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_transversetarsal"))
          .addSegments(new HAnimSegment().setUSE("hanim_sacrum"))
          .addSegments(new HAnimSegment().setUSE("hanim_pelvis"))
          .addSegments(new HAnimSegment().setUSE("hanim_l5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l1"))
          .addSegments(new HAnimSegment().setUSE("hanim_t12"))
          .addSegments(new HAnimSegment().setUSE("hanim_t11"))
          .addSegments(new HAnimSegment().setUSE("hanim_t10"))
          .addSegments(new HAnimSegment().setUSE("hanim_t9"))
          .addSegments(new HAnimSegment().setUSE("hanim_t8"))
          .addSegments(new HAnimSegment().setUSE("hanim_t7"))
          .addSegments(new HAnimSegment().setUSE("hanim_t6"))
          .addSegments(new HAnimSegment().setUSE("hanim_t5"))
          .addSegments(new HAnimSegment().setUSE("hanim_t4"))
          .addSegments(new HAnimSegment().setUSE("hanim_t3"))
          .addSegments(new HAnimSegment().setUSE("hanim_t2"))
          .addSegments(new HAnimSegment().setUSE("hanim_t1"))
          .addSegments(new HAnimSegment().setUSE("hanim_c7"))
          .addSegments(new HAnimSegment().setUSE("hanim_c6"))
          .addSegments(new HAnimSegment().setUSE("hanim_c5"))
          .addSegments(new HAnimSegment().setUSE("hanim_c4"))
          .addSegments(new HAnimSegment().setUSE("hanim_c3"))
          .addSegments(new HAnimSegment().setUSE("hanim_c2"))
          .addSegments(new HAnimSegment().setUSE("hanim_c1"))
          .addSegments(new HAnimSegment().setUSE("hanim_skull"))
          .addSegments(new HAnimSegment().setUSE("hanim_jaw"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_calcaneus"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_calcaneus"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_calf"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_calf"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_capitate"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_capitate"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_distal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_distal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_distal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_distal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_distal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_distal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_distal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_distal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_distal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_distal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_middle_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_middle_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_middle_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_middle_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_middle_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_middle_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_middle_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_middle_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_clavicle"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_clavicle"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_cuboid"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_cuboid"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_cuneiform_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_cuneiform_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_cuneiform_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_cuneiform_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_cuneiform_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_cuneiform_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_eyeball"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_eyeball"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_eyebrow"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_eyebrow"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_eyelid"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_eyelid"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_forearm"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_forearm"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_hamate"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_hamate"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metatarsal_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metatarsal_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metatarsal_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metatarsal_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metatarsal_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_navicular"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_navicular"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_scapula"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_scapula"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_talus"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_talus"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_distal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_distal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_distal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_distal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_distal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_middle_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_middle_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_middle_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_middle_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_thigh"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_thigh"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_trapezium"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_trapezium"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_trapezoid"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_trapezoid"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_upperarm"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_upperarm"))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JointCoordinateAxes.x3dv"});
  }
}
protected class MFFloat1 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat2 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Jin.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Jin.png"});
  }
}
protected class MFInt324 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
protected class MFInt325 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
protected class MFVec3f6 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0002f,0.0151f,-0.1013f,-0.0002f,0.012f,-0.1141f,-0.01f,0.012f,-0.1123f,-0.0172f,0.012f,-0.1103f,-0.0199f,0.012f,-0.1013f,-0.0172f,0.012f,-0.0923f,-0.01f,0.012f,-0.0902f,-0.0002f,0.012f,-0.0885f,0.0097f,0.012f,-0.0902f,0.0169f,0.012f,-0.0923f,0.0195f,0.012f,-0.1013f,0.0169f,0.012f,-0.1103f,0.0097f,0.012f,-0.1123f,-0.0002f,0.0033f,-0.1218f,-0.0129f,0.0033f,-0.119f,-0.0222f,0.0033f,-0.1115f,-0.0256f,0.0033f,-0.1013f,-0.0222f,0.0033f,-0.091f,-0.0129f,0.0033f,-0.0862f,-0.0002f,0.0033f,-0.0834f,0.0126f,0.0033f,-0.0862f,0.0219f,0.0033f,-0.091f,0.0253f,0.0033f,-0.1013f,0.0219f,0.0033f,-0.1115f,0.0126f,0.0033f,-0.119f,-0.0002f,-0.0086f,-0.1235f,-0.0149f,-0.0086f,-0.1203f,-0.0256f,-0.0086f,-0.1117f,-0.0296f,-0.0086f,-0.1013f,-0.0256f,-0.0086f,-0.0894f,-0.0149f,-0.0086f,-0.0834f,-0.0002f,-0.0086f,-0.0802f,0.0145f,-0.0086f,-0.0834f,0.0253f,-0.0086f,-0.0894f,0.0292f,-0.0086f,-0.1013f,0.0253f,-0.0086f,-0.1117f,0.0145f,-0.0086f,-0.1203f,-0.0002f,-0.0204f,-0.1203f,-0.0129f,-0.0204f,-0.1176f,-0.0222f,-0.0204f,-0.1101f,-0.0256f,-0.0204f,-0.1013f,-0.0222f,-0.0204f,-0.091f,-0.0129f,-0.0204f,-0.0862f,-0.0002f,-0.0204f,-0.0834f,0.0126f,-0.0204f,-0.0862f,0.0219f,-0.0204f,-0.091f,0.0253f,-0.0204f,-0.1013f,0.0219f,-0.0204f,-0.1101f,0.0126f,-0.0204f,-0.1176f,-0.0002f,-0.0291f,-0.1117f,-0.0075f,-0.0291f,-0.1101f,-0.0129f,-0.0291f,-0.1072f,-0.0149f,-0.0291f,-0.1013f,-0.0129f,-0.0291f,-0.0953f,-0.0075f,-0.0291f,-0.091f,-0.0002f,-0.0291f,-0.0894f,0.0072f,-0.0291f,-0.091f,0.0126f,-0.0291f,-0.0953f,0.0145f,-0.0291f,-0.1013f,0.0126f,-0.0291f,-0.1072f,0.0072f,-0.0291f,-0.1101f,-0.0002f,-0.0323f,-0.1013f});
  }
}
protected class MFVec2f7 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.6211f,0.5754f,0.7851f,0.572f,0.7614f,0.572f,0.6907f,0.5698f,0.62f,0.5698f,0.6158f,0.5702f,0.5451f,0.5702f,0.4167f,0.5698f,0.5451f,0.5702f,0.6158f,0.5702f,0.62f,0.5698f,0.6907f,0.5698f,0.7614f,0.572f,0.8036f,0.5346f,0.7761f,0.5346f,0.6989f,0.4838f,0.6219f,0.4428f,0.6154f,0.4438f,0.5492f,0.4639f,0.4166f,0.5346f,0.5492f,0.4639f,0.6154f,0.4438f,0.6219f,0.4428f,0.6989f,0.4838f,0.7761f,0.5346f,0.7912f,0.4044f,0.7635f,0.4044f,0.7042f,0.3925f,0.6194f,0.3907f,0.6148f,0.3907f,0.545f,0.3974f,0.4163f,0.4938f,0.545f,0.3974f,0.6148f,0.3907f,0.6194f,0.3907f,0.7042f,0.3925f,0.7635f,0.4044f,0.795f,0.3772f,0.7662f,0.3772f,0.6945f,0.3645f,0.6236f,0.3695f,0.616f,0.3695f,0.5438f,0.378f,0.416f,0.453f,0.5438f,0.378f,0.616f,0.3695f,0.6236f,0.3695f,0.6945f,0.3645f,0.7662f,0.3772f,0.7887f,0.3451f,0.7635f,0.3451f,0.698f,0.3508f,0.6262f,0.3508f,0.6297f,0.3503f,0.5389f,0.3503f,0.4181f,0.3884f,0.5389f,0.3503f,0.6297f,0.3503f,0.6262f,0.3508f,0.698f,0.3508f,0.7635f,0.3451f,0.6237f,0.3398f});
  }
}
protected class MFFloat8 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat9 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3210 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
protected class MFInt3211 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
protected class MFVec3f12 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0002f,0.2342f,-0.0987f,-0.0002f,0.2178f,-0.1654f,-0.0515f,0.2178f,-0.1565f,-0.0891f,0.2178f,-0.1457f,-0.1029f,0.2178f,-0.0987f,-0.0891f,0.2178f,-0.0516f,-0.0515f,0.2178f,-0.0409f,-0.0002f,0.2178f,-0.0319f,0.0512f,0.2178f,-0.0409f,0.0888f,0.2178f,-0.0516f,0.1026f,0.2178f,-0.0987f,0.0888f,0.2178f,-0.1457f,0.0512f,0.2178f,-0.1565f,-0.0002f,0.1724f,-0.2057f,-0.0666f,0.1724f,-0.1914f,-0.1152f,0.1724f,-0.1522f,-0.133f,0.1724f,-0.0987f,-0.1152f,0.1724f,-0.0452f,-0.0666f,0.1724f,-0.0199f,-0.0002f,0.1724f,-0.0055f,0.0663f,0.1724f,-0.0199f,0.1149f,0.1724f,-0.0452f,0.1327f,0.1724f,-0.0987f,0.1149f,0.1724f,-0.1522f,0.0663f,0.1724f,-0.1914f,-0.0002f,0.1106f,-0.2148f,-0.0769f,0.1106f,-0.1982f,-0.133f,0.1106f,-0.153f,-0.1536f,0.1106f,-0.0987f,-0.133f,0.1106f,-0.0369f,-0.0769f,0.1106f,-0.0055f,-0.0002f,0.1106f,0.011f,0.0765f,0.1106f,-0.0055f,0.1327f,0.1106f,-0.0369f,0.1532f,0.1106f,-0.0987f,0.1327f,0.1106f,-0.153f,0.0765f,0.1106f,-0.1982f,-0.0002f,0.0488f,-0.1982f,-0.0666f,0.0488f,-0.1839f,-0.1152f,0.0488f,-0.1447f,-0.133f,0.0488f,-0.0987f,-0.1152f,0.0488f,-0.0452f,-0.0666f,0.0488f,-0.0199f,-0.0002f,0.0488f,-0.0055f,0.0663f,0.0488f,-0.0199f,0.1149f,0.0488f,-0.0452f,0.1327f,0.0488f,-0.0987f,0.1149f,0.0488f,-0.1447f,0.0663f,0.0488f,-0.1839f,-0.0002f,0.0035f,-0.153f,-0.0385f,0.0035f,-0.1447f,-0.0666f,0.0035f,-0.1296f,-0.0769f,0.0035f,-0.0987f,-0.0666f,0.0035f,-0.0678f,-0.0385f,0.0035f,-0.0452f,-0.0002f,0.0035f,-0.0369f,0.0382f,0.0035f,-0.0452f,0.0663f,0.0035f,-0.0678f,0.0765f,0.0035f,-0.0987f,0.0663f,0.0035f,-0.1296f,0.0382f,0.0035f,-0.1447f,-0.0002f,-0.0131f,-0.0987f});
  }
}
protected class MFVec2f13 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.6211f,0.5754f,0.7851f,0.572f,0.7614f,0.572f,0.6907f,0.5698f,0.62f,0.5698f,0.6158f,0.5702f,0.5451f,0.5702f,0.4167f,0.5698f,0.5451f,0.5702f,0.6158f,0.5702f,0.62f,0.5698f,0.6907f,0.5698f,0.7614f,0.572f,0.8036f,0.5346f,0.7761f,0.5346f,0.6989f,0.4838f,0.6219f,0.4428f,0.6154f,0.4438f,0.5492f,0.4639f,0.4166f,0.5346f,0.5492f,0.4639f,0.6154f,0.4438f,0.6219f,0.4428f,0.6989f,0.4838f,0.7761f,0.5346f,0.7912f,0.4044f,0.7635f,0.4044f,0.7042f,0.3925f,0.6194f,0.3907f,0.6148f,0.3907f,0.545f,0.3974f,0.4163f,0.4938f,0.545f,0.3974f,0.6148f,0.3907f,0.6194f,0.3907f,0.7042f,0.3925f,0.7635f,0.4044f,0.795f,0.3772f,0.7662f,0.3772f,0.6945f,0.3645f,0.6236f,0.3695f,0.616f,0.3695f,0.5438f,0.378f,0.416f,0.453f,0.5438f,0.378f,0.616f,0.3695f,0.6236f,0.3695f,0.6945f,0.3645f,0.7662f,0.3772f,0.7887f,0.3451f,0.7635f,0.3451f,0.698f,0.3508f,0.6262f,0.3508f,0.6297f,0.3503f,0.5389f,0.3503f,0.4181f,0.3884f,0.5389f,0.3503f,0.6297f,0.3503f,0.6262f,0.3508f,0.698f,0.3508f,0.7635f,0.3451f,0.6237f,0.3398f});
  }
}
protected class MFFloat14 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat15 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3216 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,58,60,61,-1,56,58,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1});
  }
}
protected class MFInt3217 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,44,46,47,-1,42,44,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1});
  }
}
protected class MFVec3f18 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0664f,-0.0102f,-0.1019f,0.0368f,-0.0102f,-0.0297f,-0.0298f,-0.0102f,-0.0118f,-0.0759f,-0.0102f,-0.0618f,-0.0759f,-0.0102f,-0.142f,-0.0298f,-0.0102f,-0.1919f,0.0368f,-0.0102f,-0.1741f,0.0664f,-0.0945f,-0.1019f,0.0368f,-0.0945f,-0.0297f,-0.0298f,-0.0945f,-0.0118f,-0.0759f,-0.0945f,-0.0618f,-0.0759f,-0.0945f,-0.142f,-0.0298f,-0.0945f,-0.1919f,0.0368f,-0.0945f,-0.1741f,0.0664f,-0.2408f,-0.1019f,0.0368f,-0.2408f,-0.0297f,-0.0298f,-0.2408f,-0.0118f,-0.0759f,-0.2408f,-0.0618f,-0.0759f,-0.2408f,-0.142f,-0.0298f,-0.2408f,-0.1919f,0.0368f,-0.2408f,-0.1741f,0.0756f,-0.3897f,-0.1019f,0.0425f,-0.3897f,-0.0213f,-0.0318f,-0.3897f,-0.0014f,-0.0757f,-0.3897f,-0.0571f,-0.0757f,-0.3897f,-0.1466f,-0.0318f,-0.3897f,-0.2024f,0.0425f,-0.3897f,-0.1825f,0.0481f,-0.2064f,-0.1019f,0.0254f,-0.2064f,-0.0465f,-0.0257f,-0.2064f,-0.0328f,-0.0594f,-0.2064f,-0.0711f,-0.0594f,-0.2064f,-0.1326f,-0.0257f,-0.2064f,-0.171f,0.0254f,-0.2064f,-0.1573f,0.0483f,-0.3517f,-0.1019f,0.0274f,-0.3517f,-0.0579f,-0.0197f,-0.3517f,-0.047f,-0.0574f,-0.3517f,-0.0775f,-0.0574f,-0.3517f,-0.1263f,-0.0197f,-0.3517f,-0.1568f,0.0274f,-0.3517f,-0.1459f,0.046f,0.0346f,-0.1019f,0.024f,0.0346f,-0.0484f,-0.0252f,0.0346f,-0.0353f,-0.0648f,0.0346f,-0.0722f,-0.0648f,0.0346f,-0.1315f,-0.0252f,0.0346f,-0.1685f,0.024f,0.0346f,-0.1553f,0.0413f,-0.4345f,-0.1019f,0.023f,-0.4345f,-0.0597f,-0.0181f,-0.4345f,-0.0502f,-0.0511f,-0.4345f,-0.0768f,-0.0511f,-0.4345f,-0.1232f,-0.0181f,-0.4345f,-0.1498f,0.023f,-0.4345f,-0.1403f,0.0139f,-0.4565f,-0.1019f,0.0059f,-0.4565f,-0.0814f,-0.012f,-0.4565f,-0.0772f,-0.0264f,-0.4565f,-0.0888f,-0.0264f,-0.4565f,-0.1112f,-0.012f,-0.4565f,-0.1228f,0.0059f,-0.4565f,-0.1187f});
  }
}
protected class MFVec2f19 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.719f,0.5576f,0.6284f,0.5576f,0.7414f,0.5576f,0.6787f,0.5576f,0.5781f,0.5576f,0.5154f,0.5576f,0.5378f,0.5576f,0.6284f,0.5029f,0.7509f,0.3997f,0.6284f,0.3997f,0.7509f,0.5029f,0.7811f,0.3997f,0.7811f,0.5029f,0.6964f,0.3997f,0.6964f,0.5029f,0.5604f,0.3997f,0.5604f,0.5029f,0.4756f,0.3997f,0.4756f,0.5029f,0.5059f,0.3997f,0.5059f,0.5029f,0.7509f,0.3197f,0.6284f,0.3197f,0.7811f,0.3197f,0.6964f,0.3197f,0.5604f,0.3197f,0.4756f,0.3197f,0.5059f,0.3197f,0.7651f,0.2166f,0.6284f,0.2166f,0.7989f,0.2166f,0.7043f,0.2166f,0.5525f,0.2166f,0.4579f,0.2166f,0.4917f,0.2166f,0.7224f,0.263f,0.6284f,0.263f,0.7456f,0.263f,0.6805f,0.263f,0.5762f,0.263f,0.5112f,0.263f,0.5344f,0.263f,0.8705f,0.5452f,0.8705f,0.5383f,0.8705f,0.5369f,0.8705f,0.5408f,0.8705f,0.5483f,0.8705f,0.5522f,0.8705f,0.5509f,0.917f,0.5452f,0.917f,0.5266f,0.89f,0.5304f,0.89f,0.5452f,0.917f,0.522f,0.89f,0.5268f,0.917f,0.5349f,0.89f,0.537f,0.917f,0.5555f,0.89f,0.5534f,0.917f,0.5684f,0.89f,0.5636f,0.917f,0.5638f,0.89f,0.56f,0.8746f,0.531f,0.8746f,0.5452f,0.8746f,0.5279f,0.8746f,0.5368f,0.8746f,0.5524f,0.8746f,0.5613f,0.8746f,0.5581f});
  }
}
protected class MFFloat20 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat21 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3222 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
  }
}
protected class MFInt3223 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
  }
}
protected class MFVec3f24 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.016f,0.0132f,-0.1014f,0.008f,0.0132f,-0.0808f,-0.01f,0.0132f,-0.0767f,-0.0244f,0.0132f,-0.0883f,-0.0244f,0.0132f,-0.1107f,-0.01f,0.0132f,-0.1223f,0.008f,0.0132f,-0.1182f,0.0524f,-0.1124f,-0.1014f,0.0327f,-0.0901f,-0.0565f,0.0276f,-0.0452f,-0.0474f,0.0475f,-0.0516f,-0.1014f,-0.0184f,-0.0901f,-0.0441f,-0.017f,-0.0452f,-0.0366f,-0.0509f,-0.1124f,-0.0736f,-0.0528f,-0.0516f,-0.0798f,-0.0509f,-0.1297f,-0.1327f,-0.0528f,-0.0516f,-0.1229f,-0.0184f,-0.1297f,-0.1672f,-0.017f,-0.0516f,-0.1552f,0.0327f,-0.1297f,-0.1549f,0.0276f,-0.0516f,-0.1443f,0.025f,-0.0086f,-0.0592f,0.0433f,-0.0086f,-0.1014f,-0.0161f,-0.0086f,-0.0497f,-0.049f,-0.0086f,-0.0763f,-0.049f,-0.0086f,-0.1227f,-0.0161f,-0.0086f,-0.1483f,0.025f,-0.0086f,-0.1388f,0.036f,-0.2993f,-0.1018f,0.0206f,-0.299f,-0.0667f,-0.0141f,-0.299f,-0.058f,-0.0419f,-0.2993f,-0.0823f,-0.0419f,-0.2997f,-0.1238f,-0.0141f,-0.2997f,-0.1411f,0.0206f,-0.2997f,-0.1324f,0.0157f,-0.3355f,-0.1013f,0.0079f,-0.3355f,-0.0836f,-0.0096f,-0.3355f,-0.0792f,-0.0237f,-0.3355f,-0.0915f,-0.0237f,-0.3357f,-0.1125f,-0.0096f,-0.3357f,-0.1212f,0.0079f,-0.3357f,-0.1168f});
  }
}
protected class MFVec2f25 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9309f,0.5848f,0.919f,0.5848f,0.8921f,0.5848f,0.8706f,0.5848f,0.8706f,0.5848f,0.8921f,0.5848f,0.919f,0.5848f,0.9845f,0.5321f,0.955f,0.5475f,0.9491f,0.5599f,0.9788f,0.5571f,0.8787f,0.5475f,0.8825f,0.5599f,0.8302f,0.5321f,0.8291f,0.5571f,0.8302f,0.52f,0.8291f,0.5571f,0.8787f,0.52f,0.8825f,0.5571f,0.955f,0.52f,0.9491f,0.5571f,0.9444f,0.5755f,0.9717f,0.5755f,0.8831f,0.5755f,0.8339f,0.5755f,0.8339f,0.5755f,0.8831f,0.5755f,0.9444f,0.5755f,0.9632f,0.3942f,0.9402f,0.3943f,0.8884f,0.3943f,0.8469f,0.3942f,0.8469f,0.3941f,0.8884f,0.3941f,0.9402f,0.3941f,0.9325f,0.3742f,0.9208f,0.3742f,0.8947f,0.3742f,0.8737f,0.3742f,0.8737f,0.3741f,0.8947f,0.3741f,0.9208f,0.3741f});
  }
}
protected class MFFloat26 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat27 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3228 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,34,21,-1,21,15,13,-1,9,20,21,-1,21,34,9,-1,0,2,14,-1,14,15,0,-1,30,3,16,-1,16,33,30,-1,3,4,25,-1,25,16,3,-1,22,5,18,-1,18,17,22,-1,5,6,29,-1,29,18,5,-1,6,27,19,-1,7,1,21,-1,21,20,7,-1,1,0,15,-1,15,21,1,-1,15,14,32,-1,32,13,15,-1,33,16,12,-1,12,11,33,-1,25,23,12,-1,12,16,25,-1,17,18,10,-1,10,24,17,-1,18,29,28,-1,28,10,18,-1,19,27,26,-1,26,8,19,-1,4,22,17,-1,17,25,4,-1,25,17,24,-1,24,23,25,-1,20,9,26,-1,26,27,20,-1,6,7,20,-1,20,27,6,-1,29,19,8,-1,8,28,29,-1,6,19,29,-1,1,31,0,-1,0,31,2,-1,31,3,30,-1,3,31,4,-1,4,31,22,-1,22,31,5,-1,5,31,6,-1,6,31,7,-1,7,31,1,-1,2,31,30,-1,14,2,30,-1,30,33,14,-1,32,14,33,-1,33,11,32,-1,35,46,45,-1,45,44,43,-1,43,42,41,-1,41,40,39,-1,43,41,39,-1,45,43,39,-1,35,45,39,-1,39,38,37,-1,35,39,37,-1,36,35,37,-1,26,35,36,-1,36,8,26,-1,8,36,37,-1,37,28,8,-1,28,37,38,-1,38,10,28,-1,10,38,39,-1,39,24,10,-1,24,39,40,-1,40,23,24,-1,23,40,41,-1,41,12,23,-1,12,41,42,-1,42,11,12,-1,11,42,43,-1,43,32,11,-1,32,43,44,-1,44,13,32,-1,13,44,45,-1,45,34,13,-1,34,45,46,-1,46,9,34,-1,9,46,35,-1,35,26,9,-1});
  }
}
protected class MFInt3229 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,34,27,-1,27,12,5,-1,7,28,27,-1,27,34,7,-1,9,10,11,-1,11,12,9,-1,30,13,14,-1,14,33,30,-1,13,15,16,-1,16,14,13,-1,17,18,19,-1,19,20,17,-1,18,21,22,-1,22,19,18,-1,21,23,24,-1,25,26,27,-1,27,28,25,-1,26,9,12,-1,12,27,26,-1,12,11,32,-1,32,5,12,-1,33,14,4,-1,4,3,33,-1,16,8,4,-1,4,14,16,-1,20,19,2,-1,2,6,20,-1,19,22,29,-1,29,2,19,-1,24,23,1,-1,1,0,24,-1,15,17,20,-1,20,16,15,-1,16,20,6,-1,6,8,16,-1,28,7,1,-1,1,23,28,-1,21,25,28,-1,28,23,21,-1,22,24,0,-1,0,29,22,-1,21,24,22,-1,26,31,9,-1,9,31,10,-1,31,13,30,-1,13,31,15,-1,15,31,17,-1,17,31,18,-1,18,31,21,-1,21,31,25,-1,25,31,26,-1,10,31,30,-1,11,10,30,-1,30,33,11,-1,32,11,33,-1,33,3,32,-1,35,46,45,-1,45,44,43,-1,43,42,41,-1,41,40,39,-1,43,41,39,-1,45,43,39,-1,35,45,39,-1,39,38,37,-1,35,39,37,-1,36,35,37,-1,1,35,36,-1,36,0,1,-1,0,36,37,-1,37,29,0,-1,29,37,38,-1,38,2,29,-1,2,38,39,-1,39,6,2,-1,6,39,40,-1,40,8,6,-1,8,40,41,-1,41,4,8,-1,4,41,42,-1,42,3,4,-1,3,42,43,-1,43,32,3,-1,32,43,44,-1,44,5,32,-1,5,44,45,-1,45,34,5,-1,34,45,46,-1,46,7,34,-1,7,46,35,-1,35,1,7,-1});
  }
}
protected class MFVec3f30 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0191f,-0.009f,-0.1286f,-0.0259f,-0.0116f,-0.1082f,-0.0082f,-0.0074f,-0.1381f,0.0194f,-0.0086f,-0.1286f,0.0251f,-0.0106f,-0.1138f,0.0168f,-0.0101f,-0.0892f,-0.0014f,-0.0092f,-0.0832f,-0.0173f,-0.0105f,-0.0892f,-0.0018f,-0.0331f,-0.0796f,-0.0232f,-0.038f,-0.0895f,0.02f,-0.0397f,-0.0889f,0.0057f,-0.0419f,-0.1444f,0.0231f,-0.039f,-0.1327f,-0.0231f,-0.039f,-0.1337f,-0.0079f,-0.0201f,-0.1397f,-0.0209f,-0.0204f,-0.1302f,0.0177f,-0.0195f,-0.1299f,0.0293f,-0.0312f,-0.1036f,0.016f,-0.0232f,-0.0888f,-0.0007f,-0.0203f,-0.0825f,-0.0184f,-0.0215f,-0.0888f,-0.0287f,-0.0232f,-0.1105f,0.0249f,-0.011f,-0.103f,0.0263f,-0.0457f,-0.1168f,0.0259f,-0.0459f,-0.1051f,0.0298f,-0.0302f,-0.1151f,-0.0119f,-0.0355f,-0.0828f,-0.0087f,-0.0209f,-0.0845f,0.009f,-0.0364f,-0.0825f,0.0085f,-0.0217f,-0.0845f,0.0052f,-0.0073f,-0.1381f,-0.001f,-0.001f,-0.1091f,-0.0068f,-0.0418f,-0.1445f,0.0046f,-0.0198f,-0.1397f,-0.0301f,-0.0443f,-0.1106f,-0.01f,-0.0541f,-0.0868f,-0.0024f,-0.0514f,-0.0845f,0.0058f,-0.0548f,-0.0866f,0.0142f,-0.0582f,-0.0915f,0.0192f,-0.0647f,-0.1052f,0.0196f,-0.0643f,-0.1156f,0.0171f,-0.0565f,-0.1287f,0.0029f,-0.0597f,-0.1381f,-0.0055f,-0.0598f,-0.1382f,-0.0186f,-0.0571f,-0.1295f,-0.0247f,-0.0634f,-0.1095f,-0.0189f,-0.0568f,-0.092f});
  }
}
protected class MFVec2f31 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.227f,0.1089f,0.2217f,0.1285f,0.2533f,0.0835f,0.273f,0.1232f,0.2824f,0.0941f,0.2433f,0.1632f,0.2685f,0.0797f,0.2165f,0.148f,0.2759f,0.0832f,0.2428f,0.156f,0.2563f,0.142f,0.2584f,0.1419f,0.2431f,0.1588f,0.2715f,0.1062f,0.2761f,0.1011f,0.2698f,0.09f,0.2775f,0.078f,0.2629f,0.0863f,0.248f,0.0935f,0.2498f,0.0895f,0.2702f,0.0748f,0.2296f,0.1148f,0.2397f,0.101f,0.2249f,0.1266f,0.2295f,0.1126f,0.2207f,0.1406f,0.2252f,0.1591f,0.2245f,0.1634f,0.2202f,0.1406f,0.2407f,0.0951f,0.2662f,0.1249f,0.2599f,0.1313f,0.2623f,0.1418f,0.2691f,0.1232f,0.2231f,0.166f,0.2217f,0.1285f,0.227f,0.1089f,0.2407f,0.0951f,0.2533f,0.0835f,0.2685f,0.0797f,0.2759f,0.0832f,0.2824f,0.0941f,0.273f,0.1232f,0.2623f,0.1418f,0.2433f,0.1632f,0.2231f,0.166f,0.2165f,0.148f});
  }
}
protected class MFFloat32 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat33 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3234 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,12,11,-1,11,6,7,-1,1,2,18,-1,18,17,1,-1,12,7,5,-1,5,10,12,-1,2,6,11,-1,5,0,13,-1,13,10,5,-1,1,17,14,-1,14,3,1,-1,11,18,2,-1,4,8,16,-1,16,15,4,-1,8,9,16,-1,3,14,16,-1,16,9,3,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,20,19,28,-1,24,20,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,38,43,42,-1,42,39,38,-1,37,36,35,-1,37,35,34,-1,34,33,32,-1,37,34,32,-1,32,31,30,-1,37,32,30,-1,37,30,29,-1,1,19,20,-1,20,2,1,-1,2,20,21,-1,21,6,2,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,5,7,-1,5,23,24,-1,24,0,5,-1,38,45,44,-1,44,43,38,-1,4,25,26,-1,26,8,4,-1,8,26,27,-1,27,9,8,-1,9,27,28,-1,28,3,9,-1,3,28,19,-1,19,1,3,-1,10,29,30,-1,30,12,10,-1,12,30,31,-1,31,11,12,-1,11,31,32,-1,32,18,11,-1,18,32,33,-1,33,17,18,-1,17,33,34,-1,34,14,17,-1,14,34,35,-1,35,16,14,-1,16,35,36,-1,36,15,16,-1,42,41,40,-1,40,39,42,-1,13,37,29,-1,29,10,13,-1,0,38,39,-1,39,13,0,-1,13,39,40,-1,40,37,13,-1,37,40,41,-1,41,36,37,-1,36,41,42,-1,42,15,36,-1,15,42,43,-1,43,4,15,-1,4,43,44,-1,44,25,4,-1,25,44,45,-1,45,24,25,-1,24,45,38,-1,38,0,24,-1});
  }
}
protected class MFInt3235 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,12,11,-1,11,6,7,-1,1,2,18,-1,18,17,1,-1,12,7,5,-1,5,10,12,-1,2,6,11,-1,5,0,13,-1,13,10,5,-1,1,17,14,-1,14,3,1,-1,11,18,2,-1,4,8,16,-1,16,15,4,-1,8,9,16,-1,3,14,16,-1,16,9,3,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,20,19,28,-1,24,20,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,38,43,42,-1,42,39,38,-1,37,36,35,-1,37,35,34,-1,34,33,32,-1,37,34,32,-1,32,31,30,-1,37,32,30,-1,37,30,29,-1,1,19,20,-1,20,2,1,-1,2,20,21,-1,21,6,2,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,5,7,-1,5,23,24,-1,24,0,5,-1,38,45,44,-1,44,43,38,-1,4,25,26,-1,26,8,4,-1,8,26,27,-1,27,9,8,-1,9,27,28,-1,28,3,9,-1,3,28,19,-1,19,1,3,-1,10,29,30,-1,30,12,10,-1,12,30,31,-1,31,11,12,-1,11,31,32,-1,32,18,11,-1,18,32,33,-1,33,17,18,-1,17,33,34,-1,34,14,17,-1,14,34,35,-1,35,16,14,-1,16,35,36,-1,36,15,16,-1,42,41,40,-1,40,39,42,-1,13,37,29,-1,29,10,13,-1,0,38,39,-1,39,13,0,-1,13,39,40,-1,40,37,13,-1,37,40,41,-1,41,36,37,-1,36,41,42,-1,42,15,36,-1,15,42,43,-1,43,4,15,-1,4,43,44,-1,44,25,4,-1,25,44,45,-1,45,24,25,-1,24,45,38,-1,38,0,24,-1});
  }
}
protected class MFVec3f36 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.02f,0.0095f,-0.0866f,-0.0157f,-0.0318f,-0.0922f,-0.0187f,-0.0085f,-0.0927f,-0.0124f,-0.04f,-0.0891f,0.0193f,-0.0416f,-0.0865f,0.0088f,0.0181f,-0.0874f,-0.0154f,0.0064f,-0.0902f,-0.0029f,0.0151f,-0.0857f,0.0085f,-0.042f,-0.0874f,-0.0033f,-0.0418f,-0.0856f,0.0087f,0.0254f,-0.0949f,-0.0127f,0.0206f,-0.1048f,-0.0014f,0.023f,-0.0981f,0.0195f,0.0222f,-0.0978f,-0.0143f,-0.0418f,-0.1049f,0.0198f,-0.0426f,-0.1052f,0.0032f,-0.0425f,-0.1038f,-0.0175f,-0.0325f,-0.1055f,-0.0204f,-0.0089f,-0.1056f,-0.0139f,-0.0307f,-0.0841f,-0.0168f,-0.0137f,-0.0845f,-0.0138f,-0.0035f,-0.0821f,-0.0024f,0.0025f,-0.0778f,0.0076f,0.0045f,-0.0796f,0.0168f,-0.0009f,-0.0791f,0.0162f,-0.0368f,-0.079f,0.0079f,-0.037f,-0.0796f,-0.0037f,-0.0369f,-0.0777f,-0.0113f,-0.0357f,-0.081f,0.0096f,0.0213f,-0.1085f,0.0009f,0.0192f,-0.1115f,-0.0077f,0.0174f,-0.1179f,-0.0144f,-0.0083f,-0.1183f,-0.0117f,-0.0305f,-0.1181f,-0.0098f,-0.0362f,-0.1173f,0.0044f,-0.0368f,-0.1165f,0.0161f,-0.0368f,-0.1184f,0.0158f,0.0196f,-0.1117f,0.0287f,0.0059f,-0.0915f,0.0283f,0.0115f,-0.0996f,0.0254f,0.0163f,-0.1085f,0.0258f,-0.0341f,-0.1145f,0.0286f,-0.0384f,-0.1048f,0.0282f,-0.0376f,-0.09f,0.0264f,-0.039f,-0.083f,0.027f,-0.0027f,-0.0831f});
  }
}
protected class MFVec2f37 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2314f,0.0879f,0.21f,0.1541f,0.2053f,0.1595f,0.2104f,0.1443f,0.2271f,0.0958f,0.2224f,0.1067f,0.2032f,0.149f,0.2132f,0.1285f,0.2197f,0.1123f,0.2163f,0.1174f,0.227f,0.1089f,0.2165f,0.148f,0.2217f,0.1285f,0.2407f,0.0951f,0.2178f,0.1526f,0.2363f,0.0929f,0.2213f,0.1179f,0.2171f,0.1588f,0.2129f,0.1643f,0.21f,0.1541f,0.2053f,0.1595f,0.2032f,0.149f,0.2132f,0.1285f,0.2224f,0.1067f,0.2314f,0.0879f,0.2271f,0.0958f,0.2197f,0.1123f,0.2163f,0.1174f,0.2104f,0.1443f,0.227f,0.1089f,0.2217f,0.1285f,0.2165f,0.148f,0.2129f,0.1643f,0.2171f,0.1588f,0.2178f,0.1526f,0.2213f,0.1179f,0.2363f,0.0929f,0.2407f,0.0951f,0.2314f,0.0879f,0.2407f,0.0951f,0.2407f,0.0951f,0.2363f,0.0929f,0.2363f,0.0929f,0.2271f,0.0958f,0.2271f,0.0958f,0.2314f,0.0879f});
  }
}
protected class MFFloat38 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat39 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3240 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,12,4,-1,1,0,6,-1,6,7,1,-1,10,12,0,-1,0,1,10,-1,1,2,11,-1,11,10,1,-1,8,3,2,-1,2,5,8,-1,11,2,13,-1,12,15,4,-1,9,6,0,-1,0,4,9,-1,1,7,5,-1,5,2,1,-1,3,14,13,-1,13,2,3,-1,24,23,22,-1,25,24,22,-1,28,25,22,-1,15,12,10,-1,10,11,13,-1,15,10,13,-1,14,15,13,-1,16,19,18,-1,18,17,16,-1,21,20,19,-1,19,16,21,-1,3,16,17,-1,17,14,3,-1,14,17,18,-1,18,15,14,-1,15,18,19,-1,19,4,15,-1,4,19,20,-1,20,9,4,-1,28,27,26,-1,26,25,28,-1,8,21,16,-1,16,3,8,-1,6,22,23,-1,23,7,6,-1,7,23,24,-1,24,5,7,-1,5,24,25,-1,25,8,5,-1,8,25,26,-1,26,21,8,-1,21,26,27,-1,27,20,21,-1,20,27,28,-1,28,9,20,-1,9,28,22,-1,22,6,9,-1});
  }
}
protected class MFInt3241 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,12,1,-1,2,0,6,-1,6,7,2,-1,10,12,0,-1,0,2,10,-1,2,3,11,-1,11,10,2,-1,8,4,3,-1,3,5,8,-1,11,3,13,-1,12,15,1,-1,9,6,0,-1,0,1,9,-1,2,7,5,-1,5,3,2,-1,4,14,13,-1,13,3,4,-1,24,23,22,-1,25,24,22,-1,28,25,22,-1,15,12,10,-1,10,11,13,-1,15,10,13,-1,14,15,13,-1,16,19,18,-1,18,17,16,-1,21,20,19,-1,19,16,21,-1,4,16,17,-1,17,14,4,-1,14,17,18,-1,18,15,14,-1,15,18,19,-1,19,1,15,-1,1,19,20,-1,20,9,1,-1,28,27,26,-1,26,25,28,-1,8,21,16,-1,16,4,8,-1,6,22,23,-1,23,7,6,-1,7,23,24,-1,24,5,7,-1,5,24,25,-1,25,8,5,-1,8,25,26,-1,26,21,8,-1,21,26,27,-1,27,20,21,-1,20,27,28,-1,28,9,20,-1,9,28,22,-1,22,6,9,-1});
  }
}
protected class MFVec3f42 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0002f,-0.0335f,-0.0923f,-0.0061f,-0.0259f,-0.0917f,-0.0072f,-0.0029f,-0.093f,0.0066f,0.012f,-0.0911f,0.0065f,-0.0366f,-0.0913f,-0.0107f,-0.0045f,-0.0776f,-0.007f,-0.0335f,-0.0769f,-0.0118f,-0.0255f,-0.0785f,0.0053f,0.0039f,-0.0752f,0.0054f,-0.0368f,-0.0749f,-0.0047f,-0.027f,-0.1058f,-0.0077f,-0.0037f,-0.1062f,-0.0014f,-0.0352f,-0.1026f,-0.0045f,0.0112f,-0.1038f,0.0081f,0.0199f,-0.0993f,0.0077f,-0.037f,-0.0991f,0.0124f,0.0097f,-0.0921f,0.0132f,0.0133f,-0.0958f,0.0129f,-0.0341f,-0.0957f,0.0122f,-0.0338f,-0.0908f,0.0112f,-0.0339f,-0.0771f,0.0111f,0.0022f,-0.0774f,-0.0056f,-0.0307f,-0.0688f,-0.0096f,-0.0249f,-0.0702f,-0.0086f,-0.0083f,-0.0694f,0.0054f,-0.0018f,-0.067f,0.0088f,-0.0027f,-0.0686f,0.0088f,-0.0315f,-0.0684f,0.005f,-0.0332f,-0.0667f});
  }
}
protected class MFVec2f43 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2027f,0.1355f,0.2132f,0.1171f,0.1958f,0.1447f,0.1899f,0.1499f,0.2047f,0.1286f,0.1825f,0.1473f,0.1858f,0.1369f,0.1864f,0.1452f,0.1953f,0.1244f,0.2059f,0.1148f,0.21f,0.1541f,0.2053f,0.1595f,0.2104f,0.1443f,0.2032f,0.149f,0.2132f,0.1285f,0.2163f,0.1174f,0.2047f,0.1286f,0.2132f,0.1285f,0.2163f,0.1174f,0.2132f,0.1171f,0.2059f,0.1148f,0.1953f,0.1244f,0.1858f,0.1369f,0.1864f,0.1452f,0.1825f,0.1473f,0.1953f,0.1244f,0.1953f,0.1244f,0.2059f,0.1148f,0.2059f,0.1148f});
  }
}
protected class MFFloat44 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat45 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3246 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,11,14,-1,5,7,2,-1,2,0,5,-1,1,10,9,-1,9,2,1,-1,15,8,20,-1,20,23,15,-1,3,4,19,-1,19,21,3,-1,13,4,10,-1,10,18,13,-1,12,1,6,-1,6,16,12,-1,6,1,2,-1,2,7,6,-1,5,0,14,-1,14,17,5,-1,10,4,3,-1,3,9,10,-1,9,11,0,-1,0,2,9,-1,10,1,12,-1,12,18,10,-1,8,11,9,-1,9,3,8,-1,8,15,14,-1,14,11,8,-1,21,20,8,-1,8,3,21,-1,13,22,19,-1,19,4,13,-1,34,33,39,-1,34,39,36,-1,34,36,35,-1,42,41,40,-1,42,40,46,-1,45,42,46,-1,31,30,29,-1,29,32,31,-1,32,29,24,-1,24,29,28,-1,28,25,24,-1,25,28,27,-1,27,26,25,-1,18,24,25,-1,25,13,18,-1,13,25,26,-1,26,22,13,-1,45,44,43,-1,43,42,45,-1,23,27,28,-1,28,15,23,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,17,14,-1,39,38,37,-1,37,36,39,-1,16,31,32,-1,32,12,16,-1,12,32,24,-1,24,18,12,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,6,7,-1,6,35,36,-1,36,16,6,-1,16,36,37,-1,37,31,16,-1,31,37,38,-1,38,30,31,-1,30,38,39,-1,39,17,30,-1,17,39,33,-1,33,5,17,-1,21,40,41,-1,41,20,21,-1,20,41,42,-1,42,23,20,-1,23,42,43,-1,43,27,23,-1,27,43,44,-1,44,26,27,-1,26,44,45,-1,45,22,26,-1,22,45,46,-1,46,19,22,-1,19,46,40,-1,40,21,19,-1});
  }
}
protected class MFInt3247 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,11,14,-1,5,7,2,-1,2,1,5,-1,3,10,9,-1,9,2,3,-1,15,8,20,-1,20,23,15,-1,0,4,19,-1,19,21,0,-1,13,4,10,-1,10,18,13,-1,12,3,6,-1,6,16,12,-1,6,3,2,-1,2,7,6,-1,5,1,14,-1,14,17,5,-1,10,4,0,-1,0,9,10,-1,9,11,1,-1,1,2,9,-1,10,3,12,-1,12,18,10,-1,8,11,9,-1,9,0,8,-1,8,15,14,-1,14,11,8,-1,21,20,8,-1,8,0,21,-1,13,22,19,-1,19,4,13,-1,34,33,39,-1,34,39,36,-1,34,36,35,-1,42,41,40,-1,42,40,46,-1,45,42,46,-1,31,30,29,-1,29,32,31,-1,32,14,24,-1,24,29,28,-1,28,25,24,-1,25,28,27,-1,27,26,25,-1,18,24,25,-1,25,13,18,-1,13,25,26,-1,26,22,13,-1,45,44,43,-1,43,42,45,-1,23,27,28,-1,28,15,23,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,17,14,-1,39,38,37,-1,37,36,39,-1,16,31,32,-1,32,12,16,-1,12,32,24,-1,24,18,12,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,6,7,-1,6,35,36,-1,36,16,6,-1,16,36,37,-1,37,31,16,-1,31,37,38,-1,38,30,31,-1,30,38,39,-1,39,17,30,-1,17,39,33,-1,33,5,17,-1,21,40,41,-1,41,20,21,-1,20,41,42,-1,42,23,20,-1,23,42,43,-1,43,27,23,-1,27,43,44,-1,44,26,27,-1,26,44,45,-1,45,22,26,-1,22,45,46,-1,46,19,22,-1,19,46,40,-1,40,21,19,-1});
  }
}
protected class MFVec3f48 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0128f,-0.0299f,-0.0707f,-0.0142f,-0.0033f,-0.0641f,-0.0173f,-0.0206f,-0.0652f,-0.0112f,-0.0165f,-0.0978f,-0.0094f,0.0036f,-0.0949f,-0.0119f,-0.0281f,-0.0529f,-0.0122f,-0.0067f,-0.0522f,-0.0142f,-0.0206f,-0.0506f,-0.0067f,-0.0246f,-0.0962f,-0.0162f,-0.0189f,-0.0781f,-0.013f,-0.0005f,-0.076f,-0.0121f,-0.0295f,-0.0796f,0.0084f,-0.0003f,-0.0652f,0.0075f,0.0091f,-0.0918f,0.0085f,-0.0299f,-0.0675f,0.0067f,-0.028f,-0.0943f,0.0101f,-0.0048f,-0.0525f,0.0102f,-0.0281f,-0.0534f,0.0076f,0.0044f,-0.0779f,-0.0079f,0.0043f,-0.1035f,-0.0042f,-0.0246f,-0.1028f,-0.0091f,-0.0166f,-0.1043f,0.008f,0.0128f,-0.101f,0.0081f,-0.0279f,-0.1007f,0.0136f,0.0003f,-0.0796f,0.0136f,0.005f,-0.0935f,0.0135f,0.0063f,-0.0968f,0.0137f,-0.0236f,-0.0965f,0.0128f,-0.0236f,-0.0943f,0.0145f,-0.0255f,-0.0678f,0.0157f,-0.0242f,-0.0578f,0.0157f,-0.0079f,-0.0572f,0.0144f,-0.0044f,-0.067f,-0.0082f,-0.0256f,-0.0479f,-0.01f,-0.0199f,-0.0459f,-0.0084f,-0.0094f,-0.0473f,0.0102f,-0.008f,-0.0476f,0.0148f,-0.0103f,-0.0515f,0.0148f,-0.0226f,-0.052f,0.0102f,-0.0256f,-0.0483f,-0.0006f,-0.0153f,-0.1094f,0.0023f,-0.0201f,-0.1082f,0.0108f,-0.0223f,-0.1076f,0.0127f,-0.0207f,-0.1058f,0.0126f,0.0039f,-0.106f,0.0109f,0.0065f,-0.1083f,0.0003f,0.001f,-0.1086f});
  }
}
protected class MFVec2f49 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.177f,0.1457f,0.1567f,0.1378f,0.1506f,0.1431f,0.1539f,0.1386f,0.1751f,0.1447f,0.1523f,0.1336f,0.1493f,0.1348f,0.1463f,0.1377f,0.1689f,0.1382f,0.1638f,0.1444f,0.1645f,0.1416f,0.1607f,0.138f,0.1731f,0.1071f,0.1859f,0.1202f,0.175f,0.1048f,0.1985f,0.1126f,0.1682f,0.1025f,0.1699f,0.1017f,0.1795f,0.1136f,0.1825f,0.1473f,0.1858f,0.1369f,0.1864f,0.1452f,0.1953f,0.1244f,0.2059f,0.1148f,0.1795f,0.1136f,0.1859f,0.1202f,0.1953f,0.1244f,0.2059f,0.1148f,0.1985f,0.1126f,0.175f,0.1048f,0.1699f,0.1017f,0.1682f,0.1025f,0.1731f,0.1071f,0.1523f,0.1336f,0.1463f,0.1377f,0.1493f,0.1348f,0.1682f,0.1025f,0.1682f,0.1025f,0.1699f,0.1017f,0.1699f,0.1017f,0.1864f,0.1452f,0.1858f,0.1369f,0.2059f,0.1148f,0.2059f,0.1148f,0.1953f,0.1244f,0.1953f,0.1244f,0.1825f,0.1473f});
  }
}
protected class MFFloat50 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat51 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3252 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,16,17,-1,17,10,9,-1,11,8,2,-1,2,1,11,-1,7,3,2,-1,2,8,7,-1,7,13,4,-1,4,3,7,-1,12,5,4,-1,4,13,12,-1,5,12,0,-1,0,6,5,-1,0,11,1,-1,1,6,0,-1,14,15,19,-1,19,20,14,-1,14,10,17,-1,17,15,14,-1,9,21,18,-1,18,16,9,-1,7,8,9,-1,9,10,7,-1,8,11,21,-1,21,9,8,-1,12,13,14,-1,14,20,12,-1,13,7,10,-1,10,14,13,-1,11,22,21,-1,0,12,23,-1,23,24,0,-1,11,0,24,-1,24,22,11,-1,23,12,20,-1,37,42,41,-1,41,40,39,-1,37,41,39,-1,38,37,39,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,27,26,25,-1,28,27,25,-1,28,25,29,-1,35,31,30,-1,30,36,35,-1,17,25,26,-1,26,15,17,-1,15,26,27,-1,27,19,15,-1,19,27,28,-1,28,18,19,-1,18,28,29,-1,29,16,18,-1,16,29,25,-1,25,17,16,-1,19,30,31,-1,31,20,19,-1,20,31,32,-1,32,23,20,-1,23,32,33,-1,33,24,23,-1,24,33,34,-1,34,22,24,-1,22,34,35,-1,35,21,22,-1,21,35,36,-1,36,18,21,-1,18,36,30,-1,30,19,18,-1,2,37,38,-1,38,1,2,-1,1,38,39,-1,39,6,1,-1,6,39,40,-1,40,5,6,-1,5,40,41,-1,41,4,5,-1,4,41,42,-1,42,3,4,-1,3,42,37,-1,37,2,3,-1});
  }
}
protected class MFInt3253 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,28,29,-1,29,1,2,-1,11,13,4,-1,4,5,11,-1,10,6,4,-1,4,13,10,-1,10,12,7,-1,7,6,10,-1,14,8,7,-1,7,12,14,-1,8,14,3,-1,3,9,8,-1,3,11,5,-1,5,9,3,-1,0,27,31,-1,31,33,0,-1,0,1,29,-1,29,27,0,-1,2,35,30,-1,30,28,2,-1,15,16,17,-1,17,18,15,-1,16,19,34,-1,34,17,16,-1,20,21,22,-1,22,32,20,-1,21,23,24,-1,24,22,21,-1,19,36,34,-1,25,20,37,-1,37,39,25,-1,19,26,38,-1,38,36,19,-1,37,20,32,-1,52,57,56,-1,56,55,54,-1,52,56,54,-1,53,52,54,-1,50,49,48,-1,50,48,47,-1,46,50,47,-1,42,41,40,-1,43,42,40,-1,43,40,44,-1,50,46,45,-1,45,51,50,-1,29,40,41,-1,41,27,29,-1,27,41,42,-1,42,31,27,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,28,30,-1,28,44,40,-1,40,29,28,-1,31,45,46,-1,46,33,31,-1,32,46,47,-1,47,37,32,-1,37,47,48,-1,48,39,37,-1,38,48,49,-1,49,36,38,-1,36,49,50,-1,50,34,36,-1,35,50,51,-1,51,30,35,-1,30,51,45,-1,45,31,30,-1,4,52,53,-1,53,5,4,-1,5,53,54,-1,54,9,5,-1,9,54,55,-1,55,8,9,-1,8,55,56,-1,56,7,8,-1,7,56,57,-1,57,6,7,-1,6,57,52,-1,52,4,6,-1});
  }
}
protected class MFVec3f54 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0111f,-0.0081f,-0.0901f,0.0112f,-0.0009f,-0.08f,-0.012f,-0.0006f,-0.0797f,-0.0133f,-0.0113f,-0.0795f,-0.0115f,-0.0211f,-0.0804f,0.0115f,-0.0211f,-0.0803f,0.0129f,-0.0116f,-0.0797f,-0.0115f,-0.0107f,-0.09f,-0.0103f,0.0018f,-0.0923f,-0.0089f,0.0012f,-0.0965f,-0.0107f,-0.0118f,-0.0955f,0.0098f,0.0014f,-0.0916f,0.0097f,-0.0189f,-0.0913f,-0.0099f,-0.0189f,-0.0916f,-0.0084f,-0.0185f,-0.097f,-0.0095f,-0.0193f,-0.1024f,-0.0097f,0.0021f,-0.1016f,-0.0117f,-0.0118f,-0.1f,0.0126f,0.004f,-0.102f,0.0127f,-0.0193f,-0.1028f,0.0125f,-0.0185f,-0.0961f,0.0125f,0.0016f,-0.0962f,0.0126f,-0.0007f,-0.0917f,0.0129f,-0.0147f,-0.0914f,0.0126f,-0.0074f,-0.0904f,-0.0091f,-0.0114f,-0.1055f,-0.0077f,-0.0163f,-0.1077f,0.0095f,-0.0163f,-0.1079f,0.0095f,0.0011f,-0.1072f,-0.0076f,-0.0003f,-0.1072f,0.0168f,-0.0145f,-0.1026f,0.0167f,-0.0141f,-0.0988f,0.017f,-0.0119f,-0.096f,0.0168f,-0.0077f,-0.0954f,0.0168f,-0.0038f,-0.0962f,0.0168f,-0.0025f,-0.0988f,0.0168f,-0.001f,-0.1021f,-0.0093f,-0.0037f,-0.0746f,0.0087f,-0.004f,-0.0749f,0.0099f,-0.0117f,-0.0745f,0.009f,-0.0183f,-0.075f,-0.009f,-0.0183f,-0.0751f,-0.0102f,-0.0114f,-0.0743f});
  }
}
protected class MFVec2f55 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.148f,0.1294f,0.142f,0.1322f,0.1446f,0.131f,0.1613f,0.0957f,0.1341f,0.1263f,0.1554f,0.0919f,0.1317f,0.1272f,0.1363f,0.1268f,0.1571f,0.0927f,0.1559f,0.0889f,0.1392f,0.1292f,0.16f,0.0958f,0.1443f,0.128f,0.1415f,0.1284f,0.1616f,0.0962f,0.1346f,0.0953f,0.1273f,0.0961f,0.126f,0.0891f,0.1339f,0.0889f,0.1175f,0.0992f,0.228f,0.0809f,0.2186f,0.0857f,0.2172f,0.0848f,0.2097f,0.0859f,0.2098f,0.0901f,0.2285f,0.0738f,0.1152f,0.1058f,0.1523f,0.1336f,0.1493f,0.1348f,0.1463f,0.1377f,0.1682f,0.1025f,0.1699f,0.1017f,0.2293f,0.0837f,0.1648f,0.0986f,0.112f,0.093f,0.1632f,0.098f,0.113f,0.0993f,0.2302f,0.0796f,0.1153f,0.1053f,0.2293f,0.0736f,0.1463f,0.1377f,0.1523f,0.1336f,0.1699f,0.1017f,0.1682f,0.1025f,0.1493f,0.1348f,0.1699f,0.1017f,0.1648f,0.0986f,0.2302f,0.0796f,0.2293f,0.0736f,0.113f,0.0993f,0.112f,0.093f,0.1682f,0.1025f,0.1341f,0.1263f,0.1554f,0.0919f,0.1559f,0.0889f,0.1571f,0.0927f,0.1363f,0.1268f,0.1317f,0.1272f});
  }
}
protected class MFFloat56 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat57 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3258 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,5,-1,5,2,3,-1,1,2,5,-1,5,0,1,-1,1,0,6,-1,6,7,1,-1,8,2,1,-1,1,7,8,-1,3,2,8,-1,8,9,3,-1,10,4,3,-1,3,9,10,-1,11,5,4,-1,4,10,11,-1,0,5,11,-1,11,6,0,-1,7,6,12,-1,12,13,7,-1,14,8,7,-1,7,13,14,-1,9,8,14,-1,14,15,9,-1,16,10,9,-1,9,15,16,-1,17,11,10,-1,10,16,17,-1,6,11,17,-1,17,12,6,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,18,19,-1,19,13,12,-1,13,19,20,-1,20,14,13,-1,14,20,21,-1,21,15,14,-1,15,21,22,-1,22,16,15,-1,16,22,23,-1,23,17,16,-1,17,23,18,-1,18,12,17,-1});
  }
}
protected class MFInt3259 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,13,14,15,-1,15,12,13,-1,8,3,5,-1,5,6,8,-1,0,3,8,-1,8,9,0,-1,10,1,0,-1,0,9,10,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,7,4,-1,12,15,16,-1,16,18,12,-1,20,8,6,-1,6,19,20,-1,9,8,20,-1,20,21,9,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,7,11,23,-1,23,17,7,-1,24,29,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,16,24,25,-1,25,18,16,-1,19,25,26,-1,26,20,19,-1,20,26,27,-1,27,21,20,-1,21,27,28,-1,28,22,21,-1,22,28,29,-1,29,23,22,-1,23,29,24,-1,24,17,23,-1});
  }
}
protected class MFVec3f60 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0076f,-0.0024f,-0.0851f,-0.0082f,-0.0021f,-0.0846f,-0.008f,-0.0105f,-0.0814f,-0.0079f,-0.0174f,-0.0857f,0.0073f,-0.0174f,-0.0862f,0.0078f,-0.0105f,-0.0818f,0.0105f,-0.0007f,-0.0928f,-0.0117f,-0.0003f,-0.0928f,-0.0129f,-0.0096f,-0.0919f,-0.0115f,-0.0185f,-0.0929f,0.0104f,-0.0185f,-0.0926f,0.0123f,-0.0124f,-0.0919f,0.0112f,0.0013f,-0.1017f,-0.012f,0.0017f,-0.1014f,-0.0133f,-0.009f,-0.1012f,-0.0115f,-0.0188f,-0.1021f,0.0115f,-0.0188f,-0.102f,0.0129f,-0.0093f,-0.1014f,0.0086f,-0.0015f,-0.1072f,-0.0093f,-0.0013f,-0.1069f,-0.0102f,-0.0088f,-0.1066f,-0.009f,-0.0157f,-0.1075f,0.0088f,-0.0157f,-0.1074f,0.0098f,-0.0092f,-0.1068f});
  }
}
protected class MFVec2f61 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1287f,0.113f,0.1423f,0.0921f,0.1396f,0.0889f,0.1257f,0.1107f,0.1415f,0.0903f,0.1274f,0.1123f,0.1297f,0.1214f,0.15f,0.0896f,0.1273f,0.1223f,0.1313f,0.1227f,0.1521f,0.0901f,0.1498f,0.0859f,0.0527f,0.151f,0.0282f,0.1325f,0.0446f,0.0894f,0.0746f,0.0899f,0.1016f,0.0977f,0.1554f,0.0919f,0.0779f,0.162f,0.1341f,0.1263f,0.1317f,0.1272f,0.1363f,0.1268f,0.1571f,0.0927f,0.1559f,0.0889f,0.1554f,0.0919f,0.0779f,0.162f,0.1317f,0.1272f,0.1363f,0.1268f,0.1571f,0.0927f,0.1559f,0.0889f});
  }
}
protected class MFFloat62 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat63 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3264 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,8,9,-1,9,4,1,-1,5,0,2,-1,2,7,5,-1,4,6,3,-1,3,1,4,-1,10,0,5,-1,5,11,10,-1,32,37,36,-1,36,33,32,-1,24,29,28,-1,28,25,24,-1,19,18,23,-1,19,23,22,-1,19,22,21,-1,19,21,20,-1,13,12,17,-1,13,17,16,-1,13,16,15,-1,13,15,14,-1,9,12,13,-1,13,4,9,-1,4,13,14,-1,14,6,4,-1,24,31,30,-1,30,29,24,-1,7,15,16,-1,16,5,7,-1,5,16,17,-1,17,11,5,-1,36,35,34,-1,34,33,36,-1,3,18,19,-1,19,1,3,-1,1,19,20,-1,20,8,1,-1,32,39,38,-1,38,37,32,-1,10,21,22,-1,22,0,10,-1,0,22,23,-1,23,2,0,-1,28,27,26,-1,26,25,28,-1,6,24,25,-1,25,3,6,-1,3,25,26,-1,26,18,3,-1,18,26,27,-1,27,23,18,-1,23,27,28,-1,28,2,23,-1,2,28,29,-1,29,7,2,-1,7,29,30,-1,30,15,7,-1,15,30,31,-1,31,14,15,-1,14,31,24,-1,24,6,14,-1,8,32,33,-1,33,9,8,-1,9,33,34,-1,34,12,9,-1,12,34,35,-1,35,17,12,-1,17,35,36,-1,36,11,17,-1,11,36,37,-1,37,10,11,-1,10,37,38,-1,38,21,10,-1,21,38,39,-1,39,20,21,-1,20,39,32,-1,32,8,20,-1});
  }
}
protected class MFInt3265 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,8,9,-1,9,4,0,-1,5,1,2,-1,2,7,5,-1,4,6,3,-1,3,0,4,-1,10,1,5,-1,5,11,10,-1,32,37,36,-1,36,33,32,-1,24,29,28,-1,28,25,24,-1,19,18,23,-1,19,23,22,-1,19,22,21,-1,19,21,20,-1,13,12,17,-1,13,17,16,-1,13,16,15,-1,13,15,14,-1,9,12,13,-1,13,4,9,-1,4,13,14,-1,14,6,4,-1,24,31,30,-1,30,29,24,-1,7,15,16,-1,16,5,7,-1,5,16,17,-1,17,11,5,-1,36,35,34,-1,34,33,36,-1,3,18,19,-1,19,0,3,-1,0,19,20,-1,20,8,0,-1,32,39,38,-1,38,37,32,-1,10,21,22,-1,22,1,10,-1,1,22,23,-1,23,2,1,-1,28,27,26,-1,26,25,28,-1,6,24,25,-1,25,3,6,-1,3,25,26,-1,26,18,3,-1,18,26,27,-1,27,23,18,-1,23,27,28,-1,28,2,23,-1,2,28,29,-1,29,7,2,-1,7,29,30,-1,30,15,7,-1,15,30,31,-1,31,14,15,-1,14,31,24,-1,24,6,14,-1,8,32,33,-1,33,9,8,-1,9,33,34,-1,34,12,9,-1,12,34,35,-1,35,17,12,-1,17,35,36,-1,36,11,17,-1,11,36,37,-1,37,10,11,-1,10,37,38,-1,38,21,10,-1,21,38,39,-1,39,20,21,-1,20,39,32,-1,32,8,20,-1});
  }
}
protected class MFVec3f66 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0053f,-0.0382f,-0.095f,0.0057f,0.0155f,-0.0958f,0.0052f,-0.0385f,-0.0846f,0.0063f,0.0082f,-0.0843f,-0.0075f,0.0106f,-0.0941f,-0.0075f,-0.038f,-0.0944f,-0.0088f,0.0025f,-0.0782f,-0.0087f,-0.0382f,-0.0779f,0.0056f,0.0215f,-0.1039f,-0.006f,0.0185f,-0.1023f,0.0054f,-0.0386f,-0.104f,-0.0064f,-0.0385f,-0.1021f,-0.0113f,0.0059f,-0.1001f,-0.0123f,0.0029f,-0.0962f,-0.0135f,-0.0032f,-0.0815f,-0.0134f,-0.0325f,-0.0812f,-0.0125f,-0.0324f,-0.095f,-0.0117f,-0.0326f,-0.1f,0.013f,0.0042f,-0.0867f,0.0124f,0.0099f,-0.0972f,0.0124f,0.0128f,-0.1017f,0.0122f,-0.0332f,-0.1018f,0.012f,-0.0329f,-0.0951f,0.0119f,-0.0331f,-0.087f,-0.0059f,-0.0019f,-0.0712f,0.0083f,0.0036f,-0.0775f,0.0104f,0.001f,-0.0783f,0.0095f,-0.0304f,-0.0785f,0.0063f,-0.0341f,-0.0774f,-0.0062f,-0.0338f,-0.0704f,-0.0081f,-0.0303f,-0.0717f,-0.0082f,-0.0059f,-0.072f,0.0048f,0.0183f,-0.1102f,-0.0049f,0.0158f,-0.1087f,-0.009f,0.005f,-0.1071f,-0.0094f,-0.0312f,-0.107f,-0.0061f,-0.0355f,-0.1083f,0.0046f,-0.0356f,-0.11f,0.009f,-0.0313f,-0.1086f,0.0092f,0.0114f,-0.1085f});
  }
}
protected class MFVec2f67 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2179f,0.1044f,0.2186f,0.1086f,0.2128f,0.1035f,0.2098f,0.0996f,0.2047f,0.1286f,0.2132f,0.1171f,0.1953f,0.1244f,0.2059f,0.1148f,0.2224f,0.1067f,0.2132f,0.1285f,0.2197f,0.1123f,0.2163f,0.1174f,0.2132f,0.1285f,0.2047f,0.1286f,0.1953f,0.1244f,0.1953f,0.1244f,0.2132f,0.1171f,0.2163f,0.1174f,0.2098f,0.0996f,0.2179f,0.1044f,0.2224f,0.1067f,0.2224f,0.1067f,0.2186f,0.1086f,0.2128f,0.1035f,0.1953f,0.1244f,0.2098f,0.0996f,0.2098f,0.0996f,0.2128f,0.1035f,0.2098f,0.0996f,0.1953f,0.1244f,0.1953f,0.1244f,0.1953f,0.1244f,0.2224f,0.1067f,0.2132f,0.1285f,0.2132f,0.1285f,0.2163f,0.1174f,0.2132f,0.1285f,0.2224f,0.1067f,0.2224f,0.1067f,0.2224f,0.1067f});
  }
}
protected class MFFloat68 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat69 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3270 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,15,7,-1,7,4,12,-1,0,8,9,-1,9,2,0,-1,1,10,11,-1,11,3,1,-1,5,0,2,-1,2,6,5,-1,8,1,3,-1,3,9,8,-1,14,13,12,-1,12,4,14,-1,18,17,13,-1,13,14,18,-1,42,39,38,-1,38,43,42,-1,46,51,50,-1,50,47,46,-1,29,35,34,-1,34,30,29,-1,19,26,25,-1,25,20,19,-1,28,27,26,-1,26,19,28,-1,21,24,23,-1,23,22,21,-1,37,36,35,-1,35,29,37,-1,30,34,31,-1,20,25,24,-1,24,21,20,-1,31,34,33,-1,33,32,31,-1,3,19,20,-1,20,9,3,-1,9,20,21,-1,21,2,9,-1,2,21,22,-1,22,6,2,-1,42,41,40,-1,40,39,42,-1,7,23,24,-1,24,4,7,-1,4,24,25,-1,25,16,4,-1,16,25,26,-1,26,14,16,-1,14,26,27,-1,27,18,14,-1,50,49,48,-1,48,47,50,-1,11,28,19,-1,19,3,11,-1,0,29,30,-1,30,8,0,-1,8,30,31,-1,31,1,8,-1,1,31,32,-1,32,10,1,-1,46,53,52,-1,52,51,46,-1,17,33,34,-1,34,13,17,-1,13,34,35,-1,35,12,13,-1,12,35,36,-1,36,15,12,-1,38,45,44,-1,44,43,38,-1,5,37,29,-1,29,0,5,-1,15,38,39,-1,39,7,15,-1,7,39,40,-1,40,23,7,-1,23,40,41,-1,41,22,23,-1,22,41,42,-1,42,6,22,-1,6,42,43,-1,43,5,6,-1,5,43,44,-1,44,37,5,-1,37,44,45,-1,45,36,37,-1,36,45,38,-1,38,15,36,-1,10,46,47,-1,47,11,10,-1,11,47,48,-1,48,28,11,-1,28,48,49,-1,49,27,28,-1,27,49,50,-1,50,18,27,-1,18,50,51,-1,51,17,18,-1,17,51,52,-1,52,33,17,-1,33,52,53,-1,53,32,33,-1,32,53,46,-1,46,10,32,-1});
  }
}
protected class MFInt3271 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,10,-1,10,0,1,-1,2,11,12,-1,12,3,2,-1,5,15,16,-1,16,6,5,-1,8,2,3,-1,3,9,8,-1,11,5,6,-1,6,12,11,-1,4,13,1,-1,1,0,4,-1,17,14,13,-1,13,4,17,-1,45,42,41,-1,41,46,45,-1,49,54,53,-1,53,50,49,-1,32,38,37,-1,37,33,32,-1,22,29,28,-1,28,23,22,-1,31,30,29,-1,29,22,31,-1,24,27,26,-1,26,25,24,-1,40,39,38,-1,38,32,40,-1,33,21,34,-1,23,28,27,-1,27,24,23,-1,34,37,36,-1,36,35,34,-1,6,22,23,-1,23,12,6,-1,12,23,24,-1,24,3,12,-1,3,24,25,-1,25,9,3,-1,45,44,43,-1,43,42,45,-1,10,26,27,-1,27,0,10,-1,20,27,28,-1,28,18,20,-1,18,28,29,-1,29,19,18,-1,4,29,30,-1,30,17,4,-1,53,52,51,-1,51,50,53,-1,16,31,22,-1,22,6,16,-1,2,32,33,-1,33,11,2,-1,11,33,34,-1,34,5,11,-1,5,34,35,-1,35,15,5,-1,49,56,55,-1,55,54,49,-1,14,36,37,-1,37,13,14,-1,13,37,38,-1,38,1,13,-1,1,38,39,-1,39,7,1,-1,41,48,47,-1,47,46,41,-1,8,40,32,-1,32,2,8,-1,7,41,42,-1,42,10,7,-1,10,42,43,-1,43,26,10,-1,26,43,44,-1,44,25,26,-1,25,44,45,-1,45,9,25,-1,9,45,46,-1,46,8,9,-1,8,46,47,-1,47,40,8,-1,40,47,48,-1,48,39,40,-1,39,48,41,-1,41,7,39,-1,15,49,50,-1,50,16,15,-1,16,50,51,-1,51,31,16,-1,31,51,52,-1,52,30,31,-1,30,52,53,-1,53,17,30,-1,17,53,54,-1,54,14,17,-1,14,54,55,-1,55,36,14,-1,36,55,56,-1,56,35,36,-1,35,56,49,-1,49,15,35,-1});
  }
}
protected class MFVec3f72 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0083f,-0.0029f,-0.0634f,0.0074f,0.0089f,-0.0897f,-0.0072f,-0.0031f,-0.0621f,-0.0081f,0.0063f,-0.0887f,-0.0071f,-0.0328f,-0.0644f,0.0085f,-0.0074f,-0.0511f,-0.0055f,-0.0077f,-0.0494f,-0.0054f,-0.031f,-0.0502f,0.0076f,0.003f,-0.0767f,-0.008f,0.0016f,-0.0748f,0.0075f,0.0156f,-0.1039f,-0.0075f,0.0099f,-0.0979f,0.0072f,-0.0328f,-0.0657f,0.0063f,-0.0313f,-0.0914f,-0.0089f,-0.0309f,-0.0911f,0.0085f,-0.0309f,-0.0519f,-0.0089f,-0.0309f,-0.0911f,0.0064f,-0.0311f,-0.1042f,-0.0075f,-0.0308f,-0.0975f,-0.0136f,0.0025f,-0.0898f,-0.0135f,-0.0022f,-0.0759f,-0.0128f,-0.0069f,-0.0633f,-0.0114f,-0.0105f,-0.0533f,-0.0114f,-0.0274f,-0.0539f,-0.0126f,-0.0287f,-0.0643f,-0.0144f,-0.0268f,-0.0907f,-0.0143f,-0.0268f,-0.0909f,-0.0134f,-0.0268f,-0.0934f,-0.0136f,0.004f,-0.0936f,0.0134f,-0.0057f,-0.0646f,0.0127f,0.0003f,-0.078f,0.0125f,0.0062f,-0.0911f,0.0126f,0.0111f,-0.1013f,0.0117f,-0.0285f,-0.1016f,0.0116f,-0.0286f,-0.0914f,0.0125f,-0.0301f,-0.0659f,0.0136f,-0.0286f,-0.0548f,0.0135f,-0.0095f,-0.0541f,0.0083f,-0.028f,-0.0475f,-0.0045f,-0.0281f,-0.0458f,-0.0085f,-0.0257f,-0.0462f,-0.0085f,-0.0128f,-0.0458f,-0.0046f,-0.011f,-0.0452f,0.0083f,-0.0107f,-0.0469f,0.0111f,-0.0119f,-0.0481f,0.0112f,-0.0267f,-0.0486f,0.0049f,0.0121f,-0.1122f,-0.0083f,0.007f,-0.1061f,-0.0131f,0.0024f,-0.1029f,-0.0129f,-0.0249f,-0.1027f,-0.0089f,-0.0275f,-0.1055f,0.0037f,-0.0278f,-0.112f,0.0067f,-0.0263f,-0.1105f,0.0075f,0.0095f,-0.1102f});
  }
}
protected class MFVec2f73 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.175f,0.1048f,0.1833f,0.0898f,0.1856f,0.0872f,0.1731f,0.1071f,0.1985f,0.1126f,0.2017f,0.0948f,0.1859f,0.1202f,0.1801f,0.0847f,0.1811f,0.0824f,0.1682f,0.1025f,0.1699f,0.1017f,0.1937f,0.091f,0.1795f,0.1136f,0.2068f,0.0986f,0.2128f,0.1035f,0.2098f,0.0996f,0.1953f,0.1244f,0.2059f,0.1148f,0.1795f,0.1136f,0.1859f,0.1202f,0.1731f,0.1071f,0.2017f,0.0948f,0.1859f,0.1202f,0.1795f,0.1136f,0.1731f,0.1071f,0.1682f,0.1025f,0.1682f,0.1025f,0.1731f,0.1071f,0.1795f,0.1136f,0.1859f,0.1202f,0.1953f,0.1244f,0.1953f,0.1244f,0.1856f,0.0872f,0.1937f,0.091f,0.2017f,0.0948f,0.2098f,0.0996f,0.2098f,0.0996f,0.2017f,0.0948f,0.1856f,0.0872f,0.1811f,0.0824f,0.1811f,0.0824f,0.1811f,0.0824f,0.1682f,0.1025f,0.1682f,0.1025f,0.1682f,0.1025f,0.1682f,0.1025f,0.1811f,0.0824f,0.1811f,0.0824f,0.1811f,0.0824f,0.2098f,0.0996f,0.1953f,0.1244f,0.1953f,0.1244f,0.1953f,0.1244f,0.1953f,0.1244f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f});
  }
}
protected class MFFloat74 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat75 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3276 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,6,20,-1,20,18,8,-1,14,11,19,-1,19,21,14,-1,6,1,20,-1,19,11,15,-1,0,2,3,-1,3,14,0,-1,12,8,16,-1,16,17,12,-1,15,11,12,-1,12,17,15,-1,6,3,2,-1,2,1,6,-1,0,14,21,-1,16,8,18,-1,3,6,5,-1,5,4,3,-1,6,8,7,-1,7,5,6,-1,10,9,12,-1,12,11,10,-1,14,13,10,-1,10,11,14,-1,13,14,3,-1,3,4,13,-1,8,12,9,-1,9,7,8,-1,19,23,24,-1,24,21,19,-1,22,18,20,-1,20,25,22,-1,31,30,36,-1,31,36,35,-1,34,31,35,-1,5,7,9,-1,9,10,13,-1,5,9,13,-1,4,5,13,-1,29,28,27,-1,27,26,29,-1,37,43,42,-1,42,41,37,-1,31,34,33,-1,33,32,31,-1,41,40,39,-1,41,39,38,-1,37,41,38,-1,25,26,27,-1,27,22,25,-1,22,27,28,-1,28,23,22,-1,23,28,29,-1,29,24,23,-1,24,29,26,-1,26,25,24,-1,15,30,31,-1,31,19,15,-1,19,31,32,-1,32,23,19,-1,23,32,33,-1,33,22,23,-1,22,33,34,-1,34,18,22,-1,18,34,35,-1,35,16,18,-1,16,35,36,-1,36,17,16,-1,17,36,30,-1,30,15,17,-1,21,37,38,-1,38,0,21,-1,0,38,39,-1,39,2,0,-1,2,39,40,-1,40,1,2,-1,1,40,41,-1,41,20,1,-1,20,41,42,-1,42,25,20,-1,25,42,43,-1,43,24,25,-1,24,43,37,-1,37,21,24,-1});
  }
}
protected class MFInt3277 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,30,-1,30,24,1,-1,3,2,25,-1,25,31,3,-1,0,4,30,-1,25,2,26,-1,9,10,5,-1,5,3,9,-1,7,1,27,-1,27,28,7,-1,26,2,8,-1,8,29,26,-1,0,6,11,-1,11,4,0,-1,9,3,31,-1,27,1,24,-1,12,15,14,-1,14,13,12,-1,15,17,16,-1,16,14,15,-1,19,18,21,-1,21,20,19,-1,23,22,19,-1,19,20,23,-1,22,23,12,-1,12,13,22,-1,17,21,18,-1,18,16,17,-1,35,37,38,-1,38,34,35,-1,36,32,33,-1,33,39,36,-1,45,44,50,-1,45,50,49,-1,48,45,49,-1,14,16,18,-1,18,19,22,-1,14,18,22,-1,13,14,22,-1,43,42,41,-1,41,40,43,-1,51,57,56,-1,56,55,51,-1,45,48,47,-1,47,46,45,-1,55,54,53,-1,55,53,52,-1,51,55,52,-1,39,40,41,-1,41,36,39,-1,36,41,42,-1,42,37,36,-1,37,42,43,-1,43,38,37,-1,38,43,40,-1,40,39,38,-1,26,44,45,-1,45,25,26,-1,35,45,46,-1,46,37,35,-1,37,46,47,-1,47,36,37,-1,36,47,48,-1,48,32,36,-1,24,48,49,-1,49,27,24,-1,27,49,50,-1,50,28,27,-1,29,50,44,-1,44,26,29,-1,31,51,52,-1,52,9,31,-1,9,52,53,-1,53,10,9,-1,11,53,54,-1,54,4,11,-1,4,54,55,-1,55,30,4,-1,33,55,56,-1,56,39,33,-1,39,56,57,-1,57,38,39,-1,38,57,51,-1,51,34,38,-1});
  }
}
protected class MFVec3f78 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0078f,-0.0013f,-0.0959f,-0.0075f,-0.0153f,-0.0956f,-0.0078f,-0.008f,-0.0946f,-0.0064f,-0.0094f,-0.0946f,-0.0056f,-0.0127f,-0.0846f,-0.0046f,-0.0209f,-0.085f,-0.0056f,-0.0185f,-0.0958f,0.0059f,-0.0207f,-0.0864f,0.005f,-0.0187f,-0.097f,0.0072f,-0.0115f,-0.086f,0.006f,-0.0006f,-0.0863f,0.0051f,0.0008f,-0.0972f,0.0066f,-0.0103f,-0.0962f,-0.0048f,-0.0003f,-0.085f,-0.0052f,0.0007f,-0.096f,0.0074f,-0.0012f,-0.0979f,0.0074f,-0.0156f,-0.0978f,0.0076f,-0.0085f,-0.0966f,0.0064f,-0.0191f,-0.1024f,0.0066f,0.0009f,-0.1028f,-0.0079f,-0.019f,-0.1003f,-0.0079f,0.001f,-0.1004f,0.0062f,-0.0198f,-0.1086f,0.0062f,0.0037f,-0.1078f,-0.0078f,0.0034f,-0.1062f,-0.0077f,-0.0198f,-0.107f,-0.0057f,-0.017f,-0.1128f,0.0028f,-0.0169f,-0.1138f,0.0029f,0.0012f,-0.1132f,-0.0058f,0.001f,-0.1122f,0.0116f,-0.003f,-0.1022f,0.0111f,-0.0013f,-0.106f,0.0109f,-0.0003f,-0.1077f,0.0109f,-0.0172f,-0.1083f,0.0109f,-0.0168f,-0.1054f,0.0117f,-0.0143f,-0.1021f,0.0117f,-0.0086f,-0.1011f,-0.0126f,-0.0013f,-0.1028f,-0.0127f,-0.003f,-0.0996f,-0.0126f,-0.0081f,-0.0986f,-0.0123f,-0.0139f,-0.0994f,-0.0127f,-0.0166f,-0.1028f,-0.0126f,-0.017f,-0.1058f,-0.0126f,-0.0003f,-0.1052f});
  }
}
protected class MFVec2f79 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2327f,0.0796f,0.2439f,0.0803f,0.2062f,0.05f,0.2147f,0.0491f,0.2302f,0.0796f,0.2205f,0.0532f,0.2301f,0.0734f,0.2486f,0.0743f,0.2013f,0.0552f,0.2187f,0.0481f,0.221f,0.0541f,0.2293f,0.0736f,0.1746f,0.075f,0.1709f,0.0678f,0.1706f,0.0686f,0.1745f,0.076f,0.1824f,0.0523f,0.1886f,0.0572f,0.183f,0.0511f,0.1834f,0.0508f,0.1882f,0.0556f,0.1885f,0.0566f,0.1716f,0.0676f,0.1748f,0.0736f,0.2444f,0.0847f,0.2027f,0.042f,0.2022f,0.0485f,0.2464f,0.0799f,0.2486f,0.0741f,0.2011f,0.0554f,0.2293f,0.0837f,0.2177f,0.0418f,0.1769f,0.0796f,0.1648f,0.0986f,0.1632f,0.098f,0.1766f,0.0777f,0.1801f,0.0847f,0.1811f,0.0824f,0.1682f,0.1025f,0.1699f,0.1017f,0.1699f,0.1017f,0.1801f,0.0847f,0.1811f,0.0824f,0.1682f,0.1025f,0.2022f,0.0485f,0.2027f,0.042f,0.1811f,0.0824f,0.1801f,0.0847f,0.1769f,0.0796f,0.2464f,0.0799f,0.2486f,0.0741f,0.1632f,0.098f,0.2187f,0.0481f,0.221f,0.0541f,0.2302f,0.0796f,0.2293f,0.0837f,0.1699f,0.1017f,0.1682f,0.1025f});
  }
}
protected class MFFloat80 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat81 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3282 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,6,-1,6,7,0,-1,2,0,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,1,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1});
  }
}
protected class MFInt3283 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,8,-1,8,9,0,-1,2,0,9,-1,9,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,13,4,-1,14,5,6,-1,6,12,14,-1,8,1,7,-1,7,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,13,11,-1,12,20,21,-1,21,14,12,-1,15,21,16,-1,16,8,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,7,1,-1,5,24,25,-1,25,6,5,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1});
  }
}
protected class MFVec3f84 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0073f,-0.0191f,-0.0918f,-0.008f,-0.0108f,-0.0915f,0.0066f,-0.0191f,-0.0933f,0.0076f,-0.0108f,-0.0933f,0.0065f,-0.0042f,-0.0933f,-0.0068f,-0.0036f,-0.0917f,-0.0074f,-0.0104f,-0.1008f,-0.0064f,-0.0185f,-0.1012f,0.0041f,-0.0184f,-0.1025f,0.0055f,-0.0092f,-0.1022f,0.0042f,0.0017f,-0.1025f,-0.0065f,0.002f,-0.1012f,-0.0063f,-0.0103f,-0.106f,-0.0055f,-0.0168f,-0.1063f,0.0021f,-0.0167f,-0.1074f,0.0032f,-0.0091f,-0.107f,0.0021f,0.0001f,-0.1073f,-0.0056f,0.0003f,-0.1064f,-0.0039f,-0.0158f,-0.0888f,-0.0042f,-0.0109f,-0.0885f,-0.0036f,-0.0071f,-0.0887f,0.004f,-0.0074f,-0.0896f,0.0046f,-0.0109f,-0.0896f,0.0041f,-0.0158f,-0.0896f});
  }
}
protected class MFVec2f85 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1653f,0.0654f,0.1636f,0.063f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1293f,0.0261f,0.0949f,0.0775f,0.1651f,0.0639f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1291f,0.0918f,0.1834f,0.0508f,0.1554f,0.0532f,0.1716f,0.0676f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1834f,0.0508f,0.1554f,0.0532f,0.1653f,0.0654f,0.1636f,0.063f,0.1651f,0.0639f,0.0949f,0.0775f,0.1792f,0.0409f,0.1795f,0.0453f});
  }
}
protected class MFFloat86 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat87 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3288 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,1,2,-1,2,4,5,-1,0,1,7,-1,7,6,0,-1,3,0,6,-1,6,8,3,-1,9,2,3,-1,3,8,9,-1,4,2,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,1,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1});
  }
}
protected class MFInt3289 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,1,2,-1,2,4,5,-1,0,1,9,-1,9,8,0,-1,3,0,8,-1,8,10,3,-1,11,2,3,-1,3,10,11,-1,4,2,11,-1,11,12,4,-1,14,7,6,-1,6,13,14,-1,9,1,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1});
  }
}
protected class MFVec3f90 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.005f,-0.0145f,-0.0945f,-0.0049f,-0.0092f,-0.0925f,0.0064f,-0.0092f,-0.0938f,0.0049f,-0.0145f,-0.0959f,0.0057f,-0.0036f,-0.0952f,-0.0046f,-0.0034f,-0.0937f,-0.0073f,-0.0163f,-0.1012f,-0.008f,-0.0079f,-0.1009f,0.0066f,-0.0163f,-0.1028f,0.0076f,-0.0079f,-0.1028f,0.0065f,-0.0013f,-0.1027f,-0.0068f,-0.0008f,-0.1011f,-0.0059f,-0.008f,-0.1054f,-0.0055f,-0.0138f,-0.1057f,0.0039f,-0.0138f,-0.1067f,0.0046f,-0.008f,-0.1067f,0.0039f,-0.0038f,-0.1067f,-0.0052f,-0.0034f,-0.1056f});
  }
}
protected class MFVec2f91 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1643f,0.0579f,0.1638f,0.0538f,0.174f,0.0396f,0.1747f,0.0423f,0.1756f,0.0403f,0.1632f,0.0573f,0.066f,0.0493f,0.0915f,0.0082f,0.1653f,0.0654f,0.1636f,0.063f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.0949f,0.0775f,0.1293f,0.0261f,0.1651f,0.0639f,0.1636f,0.063f,0.1653f,0.0654f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1293f,0.0261f});
  }
}
protected class MFFloat92 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat93 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3294 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,6,-1,6,0,4,-1,4,8,3,-1,5,2,7,-1,7,1,5,-1,2,9,7,-1,4,7,9,-1,9,8,4,-1,20,25,24,-1,24,21,20,-1,12,11,10,-1,10,13,12,-1,18,17,14,-1,14,19,18,-1,15,14,17,-1,17,16,15,-1,0,10,11,-1,11,4,0,-1,4,11,12,-1,12,7,4,-1,7,12,13,-1,13,1,7,-1,24,23,22,-1,22,21,24,-1,3,14,15,-1,15,6,3,-1,20,27,26,-1,26,25,20,-1,5,16,17,-1,17,2,5,-1,2,17,18,-1,18,9,2,-1,9,18,19,-1,19,8,9,-1,8,19,14,-1,14,3,8,-1,6,20,21,-1,21,0,6,-1,0,21,22,-1,22,10,0,-1,10,22,23,-1,23,13,10,-1,13,23,24,-1,24,1,13,-1,1,24,25,-1,25,5,1,-1,5,25,26,-1,26,16,5,-1,16,26,27,-1,27,15,16,-1,15,27,20,-1,20,6,15,-1});
  }
}
protected class MFInt3295 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,6,-1,6,0,4,-1,4,8,3,-1,5,2,7,-1,7,1,5,-1,2,9,7,-1,4,11,10,-1,10,8,4,-1,22,27,26,-1,26,23,22,-1,14,13,12,-1,12,15,14,-1,20,19,16,-1,16,21,20,-1,17,16,19,-1,19,18,17,-1,0,12,13,-1,13,4,0,-1,4,13,14,-1,14,11,4,-1,7,14,15,-1,15,1,7,-1,26,25,24,-1,24,23,26,-1,3,16,17,-1,17,6,3,-1,22,29,28,-1,28,27,22,-1,5,18,19,-1,19,2,5,-1,2,19,20,-1,20,9,2,-1,10,20,21,-1,21,8,10,-1,8,21,16,-1,16,3,8,-1,6,22,23,-1,23,0,6,-1,0,23,24,-1,24,12,0,-1,12,24,25,-1,25,15,12,-1,15,25,26,-1,26,1,15,-1,1,26,27,-1,27,5,1,-1,5,27,28,-1,28,18,5,-1,18,28,29,-1,29,17,18,-1,17,29,22,-1,22,6,17,-1});
  }
}
protected class MFVec3f96 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0069f,0.0052f,-0.082f,0.0052f,-0.0387f,-0.0822f,-0.0063f,-0.0381f,-0.0934f,-0.0058f,0.0156f,-0.0942f,0.0053f,0.013f,-0.1016f,-0.0063f,-0.0384f,-0.083f,-0.0052f,0.0083f,-0.0827f,0.0046f,-0.0381f,-0.1015f,-0.0059f,0.0216f,-0.1023f,-0.0061f,-0.0385f,-0.1024f,0.0123f,0.0004f,-0.0852f,0.011f,0.0056f,-0.0991f,0.0105f,-0.0357f,-0.099f,0.0108f,-0.036f,-0.0854f,-0.0109f,0.0137f,-0.0954f,-0.0104f,0.0071f,-0.085f,-0.0114f,-0.0359f,-0.0853f,-0.0113f,-0.0357f,-0.0933f,-0.0112f,-0.0359f,-0.0999f,-0.011f,0.017f,-0.0999f,-0.0053f,0.0019f,-0.0747f,0.0062f,-0.0007f,-0.074f,0.0101f,-0.0044f,-0.0761f,0.0087f,-0.0338f,-0.0763f,0.0048f,-0.0352f,-0.074f,-0.0059f,-0.035f,-0.0749f,-0.0093f,-0.0335f,-0.0764f,-0.0083f,0.0013f,-0.0761f});
  }
}
protected class MFVec2f97 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2226f,0.0828f,0.2197f,0.0903f,0.2186f,0.1086f,0.2179f,0.1044f,0.2314f,0.0879f,0.2128f,0.1035f,0.2098f,0.0996f,0.2271f,0.0958f,0.2224f,0.1067f,0.2197f,0.1123f,0.2224f,0.1067f,0.2314f,0.0879f,0.2226f,0.0828f,0.2314f,0.0879f,0.2314f,0.0879f,0.2197f,0.0903f,0.2179f,0.1044f,0.2098f,0.0996f,0.2098f,0.0996f,0.2186f,0.1086f,0.2197f,0.1123f,0.2224f,0.1067f,0.2098f,0.0996f,0.2226f,0.0828f,0.2226f,0.0828f,0.2197f,0.0903f,0.2226f,0.0828f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f});
  }
}
protected class MFFloat98 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat99 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32100 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15,3,13,-1,13,12,15,-1,10,2,0,-1,0,7,10,-1,9,6,14,-1,14,1,9,-1,3,10,7,-1,7,13,3,-1,12,16,5,-1,5,15,12,-1,6,9,17,-1,17,8,6,-1,17,4,11,-1,11,8,17,-1,27,31,28,-1,34,33,32,-1,32,35,34,-1,28,31,30,-1,30,29,28,-1,35,32,31,-1,31,27,35,-1,23,20,24,-1,22,21,20,-1,20,23,22,-1,25,19,18,-1,18,26,25,-1,24,20,19,-1,19,25,24,-1,1,18,19,-1,19,9,1,-1,9,19,20,-1,20,17,9,-1,17,20,21,-1,21,4,17,-1,48,47,46,-1,46,45,48,-1,5,22,23,-1,23,15,5,-1,15,23,24,-1,24,3,15,-1,3,24,25,-1,25,10,3,-1,10,25,26,-1,26,2,10,-1,40,39,38,-1,38,37,40,-1,13,27,28,-1,28,12,13,-1,12,28,29,-1,29,16,12,-1,44,51,50,-1,50,49,44,-1,11,30,31,-1,31,8,11,-1,8,31,32,-1,32,6,8,-1,6,32,33,-1,33,14,6,-1,36,43,42,-1,42,41,36,-1,0,34,35,-1,35,7,0,-1,7,35,27,-1,27,13,7,-1,37,36,41,-1,41,40,37,-1,48,45,44,-1,44,49,48,-1,14,36,37,-1,37,1,14,-1,1,37,38,-1,38,18,1,-1,18,38,39,-1,39,26,18,-1,26,39,40,-1,40,2,26,-1,2,40,41,-1,41,0,2,-1,0,41,42,-1,42,34,0,-1,34,42,43,-1,43,33,34,-1,33,43,36,-1,36,14,33,-1,16,44,45,-1,45,5,16,-1,5,45,46,-1,46,22,5,-1,22,46,47,-1,47,21,22,-1,21,47,48,-1,48,4,21,-1,4,48,49,-1,49,11,4,-1,11,49,50,-1,50,30,11,-1,30,50,51,-1,51,29,30,-1,29,51,44,-1,44,16,29,-1});
  }
}
protected class MFInt32101 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {25,3,16,-1,16,7,25,-1,12,2,0,-1,0,9,12,-1,22,18,20,-1,20,1,22,-1,13,23,19,-1,19,17,13,-1,15,26,5,-1,5,24,15,-1,8,11,28,-1,28,21,8,-1,14,4,6,-1,6,10,14,-1,43,27,45,-1,54,53,51,-1,51,55,54,-1,46,50,48,-1,48,47,46,-1,56,52,49,-1,49,44,56,-1,36,28,38,-1,35,34,33,-1,33,37,35,-1,40,30,29,-1,29,42,40,-1,39,32,31,-1,31,41,39,-1,1,29,30,-1,30,22,1,-1,11,31,32,-1,32,28,11,-1,14,33,34,-1,34,4,14,-1,70,69,68,-1,68,67,70,-1,5,35,37,-1,37,24,5,-1,25,36,38,-1,38,3,25,-1,13,39,41,-1,41,23,13,-1,12,40,42,-1,42,2,12,-1,62,61,60,-1,60,58,62,-1,16,43,45,-1,45,7,16,-1,15,46,47,-1,47,26,15,-1,66,74,73,-1,73,71,66,-1,6,48,50,-1,50,10,6,-1,21,49,52,-1,52,8,21,-1,18,51,53,-1,53,20,18,-1,57,65,64,-1,64,63,57,-1,0,54,55,-1,55,9,0,-1,19,56,44,-1,44,17,19,-1,59,57,63,-1,63,62,59,-1,70,67,66,-1,66,72,70,-1,20,57,59,-1,59,1,20,-1,1,58,60,-1,60,29,1,-1,29,60,61,-1,61,42,29,-1,42,61,62,-1,62,2,42,-1,2,62,63,-1,63,0,2,-1,0,63,64,-1,64,54,0,-1,54,64,65,-1,65,53,54,-1,53,65,57,-1,57,20,53,-1,26,66,67,-1,67,5,26,-1,5,67,68,-1,68,35,5,-1,35,68,69,-1,69,34,35,-1,34,69,70,-1,70,4,34,-1,4,70,72,-1,72,6,4,-1,6,71,73,-1,73,48,6,-1,48,73,74,-1,74,47,48,-1,47,74,66,-1,66,26,47,-1});
  }
}
protected class MFVec3f102 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0077f,-0.0084f,-0.0526f,-0.0059f,-0.0309f,-0.0502f,-0.0059f,-0.0074f,-0.0494f,-0.0068f,0.003f,-0.075f,-0.008f,-0.0311f,-0.1026f,-0.0069f,0.0156f,-0.1023f,0.0051f,-0.0328f,-0.0659f,0.0065f,-0.0037f,-0.0639f,0.0047f,-0.0318f,-0.0916f,-0.0072f,-0.0328f,-0.064f,-0.0061f,-0.0029f,-0.0618f,0.0036f,-0.0314f,-0.1018f,0.0056f,0.0072f,-0.0901f,0.0058f,0.0017f,-0.077f,0.0078f,-0.031f,-0.0536f,-0.007f,0.0089f,-0.0881f,0.0053f,0.0125f,-0.1016f,-0.0081f,-0.0313f,-0.0897f,-0.0104f,-0.0289f,-0.0522f,-0.0115f,-0.0304f,-0.064f,-0.0125f,-0.029f,-0.0895f,-0.0123f,-0.0288f,-0.1002f,-0.0114f,0.0123f,-0.0999f,-0.0115f,0.007f,-0.0889f,-0.0113f,0.0011f,-0.0758f,-0.0106f,-0.0049f,-0.0624f,-0.0104f,-0.0088f,-0.0515f,0.0103f,-0.001f,-0.0799f,0.0101f,0.0045f,-0.093f,0.01f,0.008f,-0.1006f,0.0085f,-0.0288f,-0.1007f,0.0094f,-0.0291f,-0.0933f,0.0098f,-0.03f,-0.0679f,0.012f,-0.0286f,-0.058f,0.0118f,-0.0104f,-0.0573f,0.011f,-0.0065f,-0.0668f,0.0089f,-0.0282f,-0.0495f,-0.004f,-0.0282f,-0.0463f,-0.0065f,-0.0273f,-0.0462f,-0.0066f,-0.0111f,-0.0457f,-0.0042f,-0.0106f,-0.0457f,0.0087f,-0.0115f,-0.0487f,0.0114f,-0.0126f,-0.0497f,0.0116f,-0.027f,-0.0503f,0.004f,0.0105f,-0.1072f,-0.0067f,0.0132f,-0.108f,-0.0095f,0.011f,-0.1064f,-0.0104f,-0.0273f,-0.1067f,-0.0076f,-0.0288f,-0.1082f,0.0029f,-0.0291f,-0.1073f,0.0062f,-0.0273f,-0.1066f,0.0075f,0.007f,-0.1064f});
  }
}
protected class MFVec2f103 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.195f,0.0629f,0.1801f,0.0847f,0.1811f,0.0824f,0.1937f,0.091f,0.2128f,0.1035f,0.2098f,0.0996f,0.2197f,0.0903f,0.2138f,0.0778f,0.1989f,0.0701f,0.1984f,0.068f,0.2129f,0.0844f,0.1833f,0.0898f,0.1856f,0.0872f,0.1937f,0.091f,0.2068f,0.0986f,0.2138f,0.0778f,0.2061f,0.0729f,0.2061f,0.0729f,0.1989f,0.0701f,0.1984f,0.068f,0.1952f,0.0651f,0.2129f,0.0844f,0.1833f,0.0898f,0.1856f,0.0872f,0.2017f,0.0948f,0.2017f,0.0948f,0.2226f,0.0828f,0.2138f,0.0778f,0.1937f,0.091f,0.1811f,0.0824f,0.1856f,0.0872f,0.1856f,0.0872f,0.1937f,0.091f,0.2017f,0.0948f,0.2098f,0.0996f,0.2098f,0.0996f,0.2017f,0.0948f,0.2017f,0.0948f,0.1937f,0.091f,0.1937f,0.091f,0.1856f,0.0872f,0.1856f,0.0872f,0.1811f,0.0824f,0.2061f,0.0729f,0.2061f,0.0729f,0.2138f,0.0778f,0.2138f,0.0778f,0.2226f,0.0828f,0.2226f,0.0828f,0.2138f,0.0778f,0.2138f,0.0778f,0.1984f,0.068f,0.1984f,0.068f,0.195f,0.0629f,0.195f,0.0629f,0.1984f,0.068f,0.1984f,0.068f,0.195f,0.0629f,0.1811f,0.0824f,0.1801f,0.0847f,0.1811f,0.0824f,0.1811f,0.0824f,0.1811f,0.0824f,0.195f,0.0629f,0.195f,0.0629f,0.195f,0.0629f,0.2226f,0.0828f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f,0.2226f,0.0828f,0.2197f,0.0903f,0.2226f,0.0828f,0.2226f,0.0828f});
  }
}
protected class MFFloat104 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat105 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32106 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,7,1,-1,1,0,13,-1,7,9,2,-1,2,1,7,-1,4,3,14,-1,14,6,4,-1,8,5,4,-1,4,6,8,-1,5,8,13,-1,13,0,5,-1,23,19,15,-1,15,17,23,-1,16,20,24,-1,24,18,16,-1,9,7,19,-1,19,23,9,-1,8,6,24,-1,24,20,8,-1,7,11,19,-1,24,6,21,-1,10,12,13,-1,13,8,10,-1,14,9,25,-1,25,22,14,-1,21,6,14,-1,14,22,21,-1,7,13,12,-1,12,11,7,-1,10,8,20,-1,25,9,23,-1,9,14,3,-1,3,2,9,-1,1,2,3,-1,3,4,5,-1,1,3,5,-1,0,1,5,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,41,37,43,-1,43,42,41,-1,28,27,26,-1,26,29,28,-1,35,31,30,-1,30,36,35,-1,41,40,39,-1,37,41,39,-1,37,39,38,-1,15,26,27,-1,27,17,15,-1,17,27,28,-1,28,18,17,-1,18,28,29,-1,29,16,18,-1,16,29,26,-1,26,15,16,-1,17,30,31,-1,31,23,17,-1,23,31,32,-1,32,25,23,-1,25,32,33,-1,33,22,25,-1,22,33,34,-1,34,21,22,-1,21,34,35,-1,35,24,21,-1,24,35,36,-1,36,18,24,-1,18,36,30,-1,30,17,18,-1,20,37,38,-1,38,10,20,-1,10,38,39,-1,39,12,10,-1,12,39,40,-1,40,11,12,-1,11,40,41,-1,41,19,11,-1,19,41,42,-1,42,15,19,-1,15,42,43,-1,43,16,15,-1,16,43,37,-1,37,20,16,-1});
  }
}
protected class MFInt32107 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {22,7,0,-1,0,1,22,-1,7,9,2,-1,2,0,7,-1,4,3,23,-1,23,6,4,-1,8,5,4,-1,4,6,8,-1,5,8,22,-1,22,1,5,-1,36,29,24,-1,24,26,36,-1,25,31,38,-1,38,27,25,-1,11,10,28,-1,28,35,11,-1,13,12,37,-1,37,30,13,-1,10,15,28,-1,37,12,32,-1,14,20,16,-1,16,13,14,-1,18,11,39,-1,39,33,18,-1,32,12,19,-1,19,34,32,-1,10,17,21,-1,21,15,10,-1,14,13,30,-1,39,11,35,-1,9,23,3,-1,3,2,9,-1,0,2,3,-1,3,4,5,-1,0,3,5,-1,1,0,5,-1,49,48,47,-1,49,47,46,-1,45,49,46,-1,55,51,57,-1,57,56,55,-1,42,41,40,-1,40,43,42,-1,49,45,44,-1,44,50,49,-1,55,54,53,-1,51,55,53,-1,51,53,52,-1,24,40,41,-1,41,26,24,-1,26,41,42,-1,42,27,26,-1,27,42,43,-1,43,25,27,-1,25,43,40,-1,40,24,25,-1,26,44,45,-1,45,36,26,-1,35,45,46,-1,46,39,35,-1,39,46,47,-1,47,33,39,-1,34,47,48,-1,48,32,34,-1,32,48,49,-1,49,37,32,-1,38,49,50,-1,50,27,38,-1,27,50,44,-1,44,26,27,-1,30,51,52,-1,52,14,30,-1,14,52,53,-1,53,20,14,-1,21,53,54,-1,54,15,21,-1,15,54,55,-1,55,28,15,-1,29,55,56,-1,56,24,29,-1,24,56,57,-1,57,25,24,-1,25,57,51,-1,51,31,25,-1});
  }
}
protected class MFVec3f108 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0038f,-0.0116f,-0.0853f,-0.0026f,-0.0208f,-0.086f,0.0065f,-0.0206f,-0.088f,0.0079f,-0.0116f,-0.0882f,0.007f,-0.0022f,-0.0882f,-0.0027f,-0.0019f,-0.0859f,0.005f,0.0001f,-0.0981f,-0.004f,-0.0192f,-0.0957f,-0.004f,0.0004f,-0.0959f,0.0046f,-0.0193f,-0.0981f,-0.0065f,-0.0013f,-0.0955f,-0.0065f,-0.0157f,-0.0954f,-0.0064f,-0.0086f,-0.0942f,-0.0051f,-0.0101f,-0.0941f,0.0065f,-0.0108f,-0.0968f,-0.0078f,-0.0199f,-0.1062f,-0.0077f,0.0037f,-0.1054f,0.0059f,-0.0199f,-0.1096f,0.0059f,0.0027f,-0.1086f,-0.0075f,-0.0192f,-0.0999f,-0.0073f,0.0008f,-0.1004f,0.0073f,-0.0011f,-0.0987f,0.0074f,-0.0088f,-0.0972f,0.0065f,-0.0191f,-0.1036f,0.0063f,0.0003f,-0.1041f,0.0072f,-0.0183f,-0.0987f,-0.0063f,-0.0169f,-0.112f,0.0019f,-0.0169f,-0.114f,0.0019f,0.0002f,-0.1133f,-0.0063f,0.0008f,-0.1114f,0.0104f,-0.0145f,-0.1083f,0.0107f,-0.0142f,-0.1053f,0.0111f,-0.0137f,-0.1028f,0.0112f,-0.009f,-0.1021f,0.0111f,-0.0052f,-0.1029f,0.0106f,-0.0045f,-0.1055f,0.0104f,-0.0033f,-0.1078f,-0.0114f,-0.0012f,-0.1019f,-0.0108f,-0.0029f,-0.098f,-0.0107f,-0.0086f,-0.097f,-0.0108f,-0.0143f,-0.098f,-0.0116f,-0.017f,-0.1014f,-0.0117f,-0.0174f,-0.1053f,-0.0116f,0.0004f,-0.1047f});
  }
}
protected class MFVec2f109 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1706f,0.0686f,0.1709f,0.0678f,0.1824f,0.0523f,0.183f,0.0511f,0.1834f,0.0508f,0.1716f,0.0676f,0.1882f,0.0556f,0.1745f,0.076f,0.1748f,0.0736f,0.1886f,0.0572f,0.2327f,0.0796f,0.2439f,0.0803f,0.2076f,0.0485f,0.2162f,0.0476f,0.2201f,0.0466f,0.2302f,0.0796f,0.2219f,0.0517f,0.2301f,0.0734f,0.2486f,0.0743f,0.2027f,0.0537f,0.2224f,0.0526f,0.2293f,0.0736f,0.1746f,0.075f,0.1885f,0.0566f,0.1801f,0.0847f,0.1811f,0.0824f,0.1952f,0.0651f,0.195f,0.0629f,0.2293f,0.0837f,0.1769f,0.0796f,0.2191f,0.0403f,0.1766f,0.0777f,0.2037f,0.047f,0.2486f,0.0741f,0.2026f,0.0539f,0.2444f,0.0847f,0.1915f,0.0602f,0.2041f,0.0405f,0.1915f,0.0578f,0.2464f,0.0799f,0.1801f,0.0847f,0.1952f,0.0651f,0.195f,0.0629f,0.1811f,0.0824f,0.1952f,0.0651f,0.1915f,0.0602f,0.2464f,0.0799f,0.2486f,0.0741f,0.2037f,0.047f,0.2041f,0.0405f,0.195f,0.0629f,0.1766f,0.0777f,0.2201f,0.0466f,0.2224f,0.0526f,0.2302f,0.0796f,0.2293f,0.0837f,0.1801f,0.0847f,0.1811f,0.0824f});
  }
}
protected class MFFloat110 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat111 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32112 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,0,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,1,18,19,-1,19,0,1,-1,0,19,20,-1,20,5,0,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,1,2,-1});
  }
}
protected class MFInt32113 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,8,-1,8,9,0,-1,2,0,9,-1,9,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,13,4,-1,14,6,7,-1,7,12,14,-1,8,1,5,-1,5,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,13,11,-1,12,20,21,-1,21,14,12,-1,15,21,16,-1,16,8,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,5,1,-1,6,24,25,-1,25,7,6,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1});
  }
}
protected class MFVec3f114 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0061f,-0.01f,-0.0911f,-0.0053f,-0.0184f,-0.0917f,0.0079f,-0.0184f,-0.0944f,0.0088f,-0.01f,-0.0945f,0.0078f,-0.0034f,-0.0943f,-0.0051f,-0.0029f,-0.0919f,-0.0062f,-0.0084f,-0.1004f,-0.005f,-0.0177f,-0.1011f,0.0041f,-0.0175f,-0.1031f,0.0055f,-0.0084f,-0.1033f,0.0046f,0.001f,-0.1032f,-0.0051f,0.0013f,-0.101f,-0.0052f,-0.0084f,-0.1046f,-0.0044f,-0.0155f,-0.1052f,0.0012f,-0.0154f,-0.1064f,0.0024f,-0.0084f,-0.1065f,0.0016f,-0.0011f,-0.1065f,-0.0044f,-0.0009f,-0.1051f,-0.0017f,-0.015f,-0.089f,-0.0021f,-0.0101f,-0.0886f,-0.0016f,-0.0064f,-0.0892f,0.0057f,-0.0067f,-0.0904f,0.0062f,-0.0101f,-0.0905f,0.0056f,-0.015f,-0.0905f});
  }
}
protected class MFVec2f115 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1653f,0.0654f,0.1636f,0.063f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1651f,0.0639f,0.1293f,0.0261f,0.0949f,0.0775f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1291f,0.0918f,0.1834f,0.0508f,0.1554f,0.0532f,0.1716f,0.0676f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1834f,0.0508f,0.1554f,0.0532f,0.1653f,0.0654f,0.1636f,0.063f,0.1651f,0.0639f,0.0949f,0.0775f,0.1792f,0.0409f,0.1795f,0.0453f});
  }
}
protected class MFFloat116 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat117 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32118 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,3,-1,3,0,1,-1,5,0,3,-1,3,4,5,-1,1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,0,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1});
  }
}
protected class MFInt32119 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,8,-1,8,9,0,-1,1,0,9,-1,9,10,1,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,8,3,5,-1,5,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,8,15,-1});
  }
}
protected class MFVec3f120 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0037f,-0.0092f,-0.0933f,-0.0039f,-0.0145f,-0.0952f,0.0046f,-0.0145f,-0.0971f,0.006f,-0.0092f,-0.0953f,0.0053f,-0.0036f,-0.0965f,-0.0036f,-0.0034f,-0.0944f,-0.0077f,-0.0079f,-0.1003f,-0.0069f,-0.0163f,-0.1009f,0.0063f,-0.0163f,-0.1036f,0.0073f,-0.0079f,-0.1037f,0.0063f,-0.0013f,-0.1036f,-0.0066f,-0.0008f,-0.1011f,-0.006f,-0.008f,-0.105f,-0.0055f,-0.0138f,-0.1055f,0.0032f,-0.0138f,-0.1073f,0.0039f,-0.008f,-0.1073f,0.0033f,-0.0038f,-0.1072f,-0.0054f,-0.0034f,-0.1056f});
  }
}
protected class MFVec2f121 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1643f,0.0579f,0.1747f,0.0423f,0.174f,0.0396f,0.1638f,0.0538f,0.1756f,0.0403f,0.1632f,0.0573f,0.0915f,0.0082f,0.066f,0.0493f,0.1636f,0.063f,0.1653f,0.0654f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.0949f,0.0775f,0.1293f,0.0261f,0.1651f,0.0639f,0.1636f,0.063f,0.1653f,0.0654f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1293f,0.0261f});
  }
}
protected class MFFloat122 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat123 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32124 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,4,7,19,-1,19,18,4,-1,0,3,9,-1,9,8,0,-1,10,11,3,-1,3,2,10,-1,12,13,7,-1,7,6,12,-1,13,20,19,-1,19,7,13,-1,25,9,14,-1,14,26,25,-1,3,11,14,-1,14,9,3,-1,15,16,11,-1,11,10,15,-1,13,17,21,-1,21,20,13,-1,11,16,14,-1,4,18,23,-1,23,5,4,-1,14,37,38,-1,34,35,16,-1,16,15,34,-1,17,36,39,-1,39,21,17,-1,17,13,12,-1,35,37,14,-1,14,16,35,-1,5,27,30,-1,30,6,5,-1,18,1,22,-1,22,23,18,-1,2,1,18,-1,18,19,2,-1,10,2,19,-1,19,20,10,-1,15,10,20,-1,20,21,15,-1,34,15,21,-1,21,39,34,-1,22,1,0,-1,0,8,22,-1,25,24,8,-1,8,9,25,-1,14,38,33,-1,33,26,14,-1,23,29,27,-1,27,5,23,-1,22,28,29,-1,29,23,22,-1,8,24,28,-1,28,22,8,-1,30,31,12,-1,12,6,30,-1,32,40,12,-1,12,31,32,-1,40,36,17,-1,17,12,40,-1,44,43,42,-1,42,41,49,-1,44,42,49,-1,49,48,47,-1,44,49,47,-1,45,44,47,-1,46,45,47,-1,55,54,53,-1,53,52,51,-1,55,53,51,-1,50,55,51,-1,55,50,59,-1,59,56,55,-1,56,59,58,-1,58,57,56,-1,34,41,42,-1,42,35,34,-1,35,42,43,-1,43,37,35,-1,37,43,44,-1,44,38,37,-1,38,44,45,-1,45,33,38,-1,33,45,46,-1,46,32,33,-1,32,46,47,-1,47,40,32,-1,40,47,48,-1,48,36,40,-1,36,48,49,-1,49,39,36,-1,39,49,41,-1,41,34,39,-1,25,50,51,-1,51,24,25,-1,24,51,52,-1,52,28,24,-1,28,52,53,-1,53,29,28,-1,29,53,54,-1,54,27,29,-1,27,54,55,-1,55,30,27,-1,30,55,56,-1,56,31,30,-1,31,56,57,-1,57,32,31,-1,32,57,58,-1,58,33,32,-1,33,58,59,-1,59,26,33,-1,26,59,50,-1,50,25,26,-1});
  }
}
protected class MFInt32125 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,4,7,19,-1,19,18,4,-1,0,3,9,-1,9,8,0,-1,10,11,3,-1,3,2,10,-1,12,13,7,-1,7,6,12,-1,13,20,19,-1,19,7,13,-1,25,9,14,-1,14,26,25,-1,3,11,14,-1,14,9,3,-1,15,16,11,-1,11,10,15,-1,13,17,21,-1,21,20,13,-1,11,16,14,-1,4,18,23,-1,23,5,4,-1,14,37,38,-1,34,35,16,-1,16,15,34,-1,17,36,39,-1,39,21,17,-1,17,13,12,-1,35,37,14,-1,14,16,35,-1,5,27,30,-1,30,6,5,-1,18,1,22,-1,22,23,18,-1,2,1,18,-1,18,19,2,-1,10,2,19,-1,19,20,10,-1,15,10,20,-1,20,21,15,-1,34,15,21,-1,21,39,34,-1,22,1,0,-1,0,8,22,-1,25,24,8,-1,8,9,25,-1,14,38,33,-1,33,26,14,-1,23,29,27,-1,27,5,23,-1,22,28,29,-1,29,23,22,-1,8,24,28,-1,28,22,8,-1,30,31,12,-1,12,6,30,-1,32,40,12,-1,12,31,32,-1,40,36,17,-1,17,12,40,-1,44,43,42,-1,42,41,49,-1,44,42,49,-1,49,48,47,-1,44,49,47,-1,45,44,47,-1,46,45,47,-1,55,54,53,-1,53,52,51,-1,55,53,51,-1,50,55,51,-1,55,50,59,-1,59,56,55,-1,56,59,58,-1,58,57,56,-1,34,41,42,-1,42,35,34,-1,35,42,43,-1,43,37,35,-1,37,43,44,-1,44,38,37,-1,38,44,45,-1,45,33,38,-1,33,45,46,-1,46,32,33,-1,32,46,47,-1,47,40,32,-1,40,47,48,-1,48,36,40,-1,36,48,49,-1,49,39,36,-1,39,49,41,-1,41,34,39,-1,25,50,51,-1,51,24,25,-1,24,51,52,-1,52,28,24,-1,28,52,53,-1,53,29,28,-1,29,53,54,-1,54,27,29,-1,27,54,55,-1,55,30,27,-1,30,55,56,-1,56,31,30,-1,31,56,57,-1,57,32,31,-1,32,57,58,-1,58,33,32,-1,33,58,59,-1,59,26,33,-1,26,59,50,-1,50,25,26,-1});
  }
}
protected class MFVec3f126 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0223f,-0.0647f,-0.1215f,0.0076f,-0.0647f,-0.1321f,0.0074f,-0.0552f,-0.1365f,0.0247f,-0.0552f,-0.1248f,-0.0193f,-0.0647f,-0.1223f,-0.0275f,-0.0646f,-0.094f,-0.0291f,-0.0552f,-0.0945f,-0.022f,-0.0552f,-0.1257f,0.0279f,-0.0646f,-0.094f,0.0297f,-0.0552f,-0.0945f,0.0074f,-0.0349f,-0.1392f,0.0262f,-0.0341f,-0.1274f,-0.0321f,-0.0309f,-0.0943f,-0.0237f,-0.0351f,-0.1282f,0.0317f,-0.0333f,-0.0943f,0.0065f,-0.019f,-0.1346f,0.0245f,-0.0193f,-0.1227f,-0.0236f,-0.0196f,-0.1237f,-0.005f,-0.0647f,-0.1323f,-0.0052f,-0.0552f,-0.1366f,-0.0054f,-0.0351f,-0.1393f,-0.0062f,-0.0191f,-0.1348f,0.0066f,-0.0646f,-0.094f,-0.0097f,-0.0646f,-0.094f,0.029f,-0.0631f,-0.0766f,0.0317f,-0.0551f,-0.0771f,0.0313f,-0.0341f,-0.0773f,-0.0251f,-0.0629f,-0.0741f,0.0091f,-0.0636f,-0.0744f,-0.0075f,-0.0636f,-0.073f,-0.0283f,-0.0536f,-0.0747f,-0.0311f,-0.0299f,-0.0748f,-0.0235f,-0.0005f,-0.074f,0.0197f,-0.0022f,-0.0734f,0.0054f,-0.0044f,-0.1289f,0.0228f,-0.0015f,-0.1172f,-0.0234f,-0.0015f,-0.1182f,0.026f,-0.0083f,-0.1013f,0.0256f,-0.0084f,-0.0896f,-0.007f,-0.0044f,-0.129f,-0.0304f,-0.0068f,-0.0951f,0.0043f,0.008f,-0.1217f,0.0188f,0.0109f,-0.112f,0.0214f,0.0041f,-0.0987f,0.021f,0.0039f,-0.0884f,0.0166f,0.0099f,-0.0763f,-0.0194f,0.0114f,-0.0769f,-0.0247f,0.0052f,-0.0929f,-0.0186f,0.0106f,-0.1128f,-0.0051f,0.0079f,-0.1218f,0.0284f,-0.0535f,-0.0696f,0.0266f,-0.0582f,-0.0697f,0.0092f,-0.0586f,-0.0676f,-0.0072f,-0.0586f,-0.0662f,-0.0223f,-0.058f,-0.0674f,-0.0245f,-0.0519f,-0.0676f,-0.0273f,-0.0313f,-0.0675f,-0.0206f,-0.0076f,-0.067f,0.0174f,-0.0089f,-0.0663f,0.0279f,-0.0355f,-0.0699f});
  }
}
protected class MFVec2f127 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2845f,0.0964f,0.2768f,0.1211f,0.2792f,0.1228f,0.2886f,0.0939f,0.2493f,0.1586f,0.2252f,0.161f,0.2241f,0.1634f,0.2489f,0.1638f,0.2727f,0.0786f,0.2746f,0.076f,0.2809f,0.1238f,0.2914f,0.0926f,0.2206f,0.1691f,0.249f,0.1672f,0.2762f,0.0729f,0.2769f,0.1234f,0.2869f,0.0933f,0.2461f,0.1652f,0.2661f,0.1399f,0.2685f,0.1417f,0.27f,0.1429f,0.2661f,0.1424f,0.24f,0.098f,0.2266f,0.1229f,0.2628f,0.0703f,0.2665f,0.0671f,0.2664f,0.0668f,0.2178f,0.1526f,0.2363f,0.0929f,0.2213f,0.1179f,0.2171f,0.1588f,0.2129f,0.1643f,0.2165f,0.148f,0.2533f,0.0835f,0.273f,0.1232f,0.2824f,0.0941f,0.2433f,0.1632f,0.2759f,0.0832f,0.2685f,0.0797f,0.2623f,0.1418f,0.2231f,0.166f,0.273f,0.1232f,0.2824f,0.0941f,0.2759f,0.0832f,0.2685f,0.0797f,0.2533f,0.0835f,0.2165f,0.148f,0.2231f,0.166f,0.2433f,0.1632f,0.2623f,0.1418f,0.2665f,0.0671f,0.2628f,0.0703f,0.2363f,0.0929f,0.2213f,0.1179f,0.2178f,0.1526f,0.2171f,0.1588f,0.2129f,0.1643f,0.2165f,0.148f,0.2533f,0.0835f,0.2664f,0.0668f});
  }
}
protected class MFFloat128 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat129 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32130 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,16,-1,16,17,1,-1,3,0,5,-1,5,8,3,-1,6,1,2,-1,2,7,6,-1,2,10,4,-1,18,10,2,-1,4,12,13,-1,13,9,4,-1,11,12,4,-1,4,10,11,-1,6,5,0,-1,0,1,6,-1,9,7,2,-1,2,4,9,-1,8,15,14,-1,14,3,8,-1,3,19,16,-1,16,0,3,-1,14,19,3,-1,1,17,18,-1,18,2,1,-1,27,26,33,-1,33,32,31,-1,27,33,31,-1,30,27,31,-1,21,20,25,-1,25,24,21,-1,35,34,42,-1,36,35,42,-1,42,41,40,-1,36,42,40,-1,39,36,40,-1,22,21,24,-1,24,23,22,-1,11,20,21,-1,21,12,11,-1,12,21,22,-1,22,13,12,-1,39,38,37,-1,37,36,39,-1,15,23,24,-1,24,14,15,-1,14,24,25,-1,25,19,14,-1,30,29,28,-1,28,27,30,-1,10,26,27,-1,27,11,10,-1,11,27,28,-1,28,20,11,-1,20,28,29,-1,29,25,20,-1,25,29,30,-1,30,19,25,-1,19,30,31,-1,31,16,19,-1,16,31,32,-1,32,17,16,-1,17,32,33,-1,33,18,17,-1,18,33,26,-1,26,10,18,-1,5,34,35,-1,35,8,5,-1,8,35,36,-1,36,15,8,-1,15,36,37,-1,37,23,15,-1,23,37,38,-1,38,22,23,-1,22,38,39,-1,39,13,22,-1,13,39,40,-1,40,9,13,-1,9,40,41,-1,41,7,9,-1,7,41,42,-1,42,6,7,-1,6,42,34,-1,34,5,6,-1});
  }
}
protected class MFInt32131 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,16,-1,16,17,1,-1,2,0,5,-1,5,8,2,-1,6,1,3,-1,3,7,6,-1,3,10,4,-1,18,10,3,-1,4,12,13,-1,13,9,4,-1,11,12,4,-1,4,10,11,-1,6,5,0,-1,0,1,6,-1,9,7,3,-1,3,4,9,-1,8,15,14,-1,14,2,8,-1,2,19,16,-1,16,0,2,-1,14,19,2,-1,1,17,18,-1,18,3,1,-1,27,26,33,-1,33,32,31,-1,27,33,31,-1,30,27,31,-1,21,20,25,-1,25,24,21,-1,35,34,42,-1,36,35,42,-1,42,41,40,-1,36,42,40,-1,39,36,40,-1,22,21,24,-1,24,23,22,-1,11,20,21,-1,21,12,11,-1,12,21,22,-1,22,13,12,-1,39,38,37,-1,37,36,39,-1,15,23,24,-1,24,14,15,-1,14,24,25,-1,25,19,14,-1,30,29,28,-1,28,27,30,-1,10,26,27,-1,27,11,10,-1,11,27,28,-1,28,20,11,-1,20,28,29,-1,29,25,20,-1,25,29,30,-1,30,19,25,-1,19,30,31,-1,31,16,19,-1,16,31,32,-1,32,17,16,-1,17,32,33,-1,33,18,17,-1,18,33,26,-1,26,10,18,-1,5,34,35,-1,35,8,5,-1,8,35,36,-1,36,15,8,-1,15,36,37,-1,37,23,15,-1,23,37,38,-1,38,22,23,-1,22,38,39,-1,39,13,22,-1,13,39,40,-1,40,9,13,-1,9,40,41,-1,41,7,9,-1,7,41,42,-1,42,6,7,-1,6,42,34,-1,34,5,6,-1});
  }
}
protected class MFVec3f132 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0087f,-0.0388f,-0.0873f,0.0122f,-0.0322f,-0.0914f,0.0093f,-0.0121f,-0.0884f,-0.0049f,-0.0399f,-0.0839f,-0.0006f,0.0031f,-0.0852f,0.0138f,-0.0398f,-0.0713f,0.0174f,-0.0325f,-0.0731f,0.014f,-0.0143f,-0.0711f,0.001f,-0.0409f,-0.0677f,0.0017f,-0.0039f,-0.0674f,-0.0018f,0.0205f,-0.1014f,-0.0128f,0.0238f,-0.095f,-0.0123f,0.0112f,-0.0838f,-0.0108f,0.0034f,-0.0643f,-0.013f,-0.04f,-0.0837f,-0.0124f,-0.0406f,-0.0645f,0.0075f,-0.0404f,-0.1047f,0.0102f,-0.0324f,-0.1051f,0.0097f,-0.0114f,-0.1054f,-0.0125f,-0.0409f,-0.1024f,-0.0225f,0.0136f,-0.0914f,-0.0221f,0.0076f,-0.0861f,-0.0208f,0.0005f,-0.0684f,-0.0222f,-0.0359f,-0.0686f,-0.0226f,-0.0355f,-0.0835f,-0.0221f,-0.0361f,-0.0971f,-0.0086f,0.018f,-0.1119f,-0.0158f,0.0201f,-0.107f,-0.0228f,0.0128f,-0.1045f,-0.0224f,-0.0327f,-0.1097f,-0.0155f,-0.0361f,-0.1136f,0.0009f,-0.0357f,-0.1148f,0.0025f,-0.031f,-0.1151f,0.002f,-0.0114f,-0.1155f,0.0123f,-0.0389f,-0.0615f,0.002f,-0.0398f,-0.0586f,-0.0105f,-0.0395f,-0.0551f,-0.0172f,-0.0333f,-0.0579f,-0.016f,-0.0029f,-0.0578f,-0.0103f,-0.0048f,-0.0547f,0.0005f,-0.011f,-0.0578f,0.0113f,-0.0201f,-0.0611f,0.0142f,-0.035f,-0.0628f});
  }
}
protected class MFVec2f133 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2528f,0.0622f,0.2585f,0.0581f,0.2383f,0.0796f,0.2566f,0.0607f,0.243f,0.0749f,0.2469f,0.052f,0.2512f,0.047f,0.2484f,0.051f,0.2292f,0.0691f,0.2342f,0.0682f,0.2533f,0.0835f,0.2407f,0.0951f,0.2314f,0.0879f,0.2226f,0.0828f,0.2271f,0.0958f,0.2197f,0.0903f,0.2628f,0.0703f,0.2665f,0.0671f,0.2664f,0.0668f,0.2363f,0.0929f,0.2407f,0.0951f,0.2314f,0.0879f,0.2226f,0.0828f,0.2197f,0.0903f,0.2271f,0.0958f,0.2363f,0.0929f,0.2533f,0.0835f,0.2407f,0.0951f,0.2407f,0.0951f,0.2363f,0.0929f,0.2363f,0.0929f,0.2628f,0.0703f,0.2665f,0.0671f,0.2664f,0.0668f,0.2469f,0.052f,0.2292f,0.0691f,0.2197f,0.0903f,0.2197f,0.0903f,0.2226f,0.0828f,0.2226f,0.0828f,0.2342f,0.0682f,0.2484f,0.051f,0.2512f,0.047f});
  }
}
protected class MFFloat134 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat135 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32136 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,16,17,-1,17,13,11,-1,10,14,16,-1,16,11,10,-1,5,7,3,-1,3,1,5,-1,0,4,6,-1,6,2,0,-1,14,10,12,-1,12,15,14,-1,7,4,0,-1,0,3,7,-1,8,9,5,-1,5,1,8,-1,40,37,36,-1,36,41,40,-1,48,45,44,-1,44,49,48,-1,27,31,28,-1,28,31,30,-1,30,29,28,-1,34,33,32,-1,32,35,34,-1,35,32,31,-1,31,27,35,-1,18,24,19,-1,26,25,24,-1,24,18,26,-1,20,23,22,-1,22,21,20,-1,19,24,23,-1,23,20,19,-1,5,18,19,-1,19,7,5,-1,7,19,20,-1,20,4,7,-1,4,20,21,-1,21,6,4,-1,40,39,38,-1,38,37,40,-1,15,22,23,-1,23,14,15,-1,14,23,24,-1,24,16,14,-1,16,24,25,-1,25,17,16,-1,44,51,50,-1,50,49,44,-1,9,26,18,-1,18,5,9,-1,3,27,28,-1,28,1,3,-1,1,28,29,-1,29,8,1,-1,48,47,46,-1,46,45,48,-1,13,30,31,-1,31,11,13,-1,11,31,32,-1,32,10,11,-1,10,32,33,-1,33,12,10,-1,36,43,42,-1,42,41,36,-1,2,34,35,-1,35,0,2,-1,0,35,27,-1,27,3,0,-1,12,36,37,-1,37,15,12,-1,15,37,38,-1,38,22,15,-1,22,38,39,-1,39,21,22,-1,21,39,40,-1,40,6,21,-1,6,40,41,-1,41,2,6,-1,2,41,42,-1,42,34,2,-1,34,42,43,-1,43,33,34,-1,33,43,36,-1,36,12,33,-1,17,44,45,-1,45,13,17,-1,13,45,46,-1,46,30,13,-1,30,46,47,-1,47,29,30,-1,29,47,48,-1,48,8,29,-1,8,48,49,-1,49,9,8,-1,9,49,50,-1,50,26,9,-1,26,50,51,-1,51,25,26,-1,25,51,44,-1,44,17,25,-1});
  }
}
protected class MFInt32137 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,16,17,-1,17,13,5,-1,2,7,16,-1,16,5,2,-1,9,12,6,-1,6,1,9,-1,0,8,11,-1,11,4,0,-1,7,2,3,-1,3,10,7,-1,12,8,0,-1,0,6,12,-1,14,15,9,-1,9,1,14,-1,42,39,38,-1,38,43,42,-1,50,47,46,-1,46,51,50,-1,29,18,30,-1,30,33,32,-1,32,31,30,-1,36,35,34,-1,34,37,36,-1,37,34,33,-1,33,29,37,-1,20,19,21,-1,28,27,26,-1,26,20,28,-1,22,25,24,-1,24,23,22,-1,21,26,25,-1,25,22,21,-1,9,20,21,-1,21,12,9,-1,12,21,22,-1,22,8,12,-1,8,22,23,-1,23,11,8,-1,42,41,40,-1,40,39,42,-1,10,24,25,-1,25,7,10,-1,7,25,26,-1,26,16,7,-1,16,26,27,-1,27,17,16,-1,46,53,52,-1,52,51,46,-1,15,28,20,-1,20,9,15,-1,6,29,30,-1,30,1,6,-1,1,30,31,-1,31,14,1,-1,50,49,48,-1,48,47,50,-1,13,32,33,-1,33,5,13,-1,5,33,34,-1,34,2,5,-1,2,34,35,-1,35,3,2,-1,38,45,44,-1,44,43,38,-1,4,36,37,-1,37,0,4,-1,0,37,29,-1,29,6,0,-1,3,38,39,-1,39,10,3,-1,10,39,40,-1,40,24,10,-1,24,40,41,-1,41,23,24,-1,23,41,42,-1,42,11,23,-1,11,42,43,-1,43,4,11,-1,4,43,44,-1,44,36,4,-1,36,44,45,-1,45,35,36,-1,35,45,38,-1,38,3,35,-1,17,46,47,-1,47,13,17,-1,13,47,48,-1,48,32,13,-1,32,48,49,-1,49,31,32,-1,31,49,50,-1,50,14,31,-1,14,50,51,-1,51,15,14,-1,15,51,52,-1,52,28,15,-1,28,52,53,-1,53,27,28,-1,27,53,46,-1,46,17,27,-1});
  }
}
protected class MFVec3f138 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0095f,-0.004f,-0.0657f,0.0075f,0.0022f,-0.0924f,0.0091f,-0.0083f,-0.0551f,0.0089f,-0.001f,-0.079f,-0.0054f,-0.0022f,-0.063f,-0.0063f,0.0088f,-0.0891f,-0.0042f,-0.0068f,-0.0517f,-0.0061f,0.0033f,-0.076f,0.0059f,0.0069f,-0.1037f,-0.0066f,0.0141f,-0.1007f,0.0074f,-0.0312f,-0.0702f,0.0065f,-0.0307f,-0.094f,0.0098f,-0.0285f,-0.0561f,0.0052f,-0.0302f,-0.1041f,-0.0068f,-0.0312f,-0.065f,-0.0041f,-0.0294f,-0.0526f,-0.0072f,-0.0302f,-0.0907f,-0.0083f,-0.0299f,-0.1008f,-0.0119f,0.0052f,-0.0903f,-0.0117f,-0.0003f,-0.0772f,-0.0111f,-0.0057f,-0.0641f,-0.0103f,-0.0093f,-0.0553f,-0.0101f,-0.0257f,-0.056f,-0.0122f,-0.027f,-0.0648f,-0.0125f,-0.0261f,-0.0901f,-0.0133f,-0.0258f,-0.0964f,-0.012f,0.008f,-0.0963f,0.0139f,-0.0051f,-0.0822f,0.0125f,-0.0022f,-0.0955f,0.0114f,0.0007f,-0.103f,0.0108f,-0.0269f,-0.1033f,0.0118f,-0.0272f,-0.0961f,0.0127f,-0.0277f,-0.0732f,0.0148f,-0.0256f,-0.0619f,0.014f,-0.011f,-0.0612f,0.0145f,-0.0078f,-0.0695f,0.01f,-0.0254f,-0.0518f,-0.0028f,-0.0263f,-0.0482f,-0.0067f,-0.0241f,-0.0485f,-0.0069f,-0.0118f,-0.0479f,-0.0031f,-0.0104f,-0.0476f,0.0092f,-0.0117f,-0.051f,0.0122f,-0.0133f,-0.0538f,0.0128f,-0.0239f,-0.0544f,-0.0093f,-0.0265f,-0.1089f,0.0028f,-0.0268f,-0.1119f,0.006f,-0.0248f,-0.1118f,0.0065f,-0.0006f,-0.1116f,0.0023f,0.0042f,-0.1115f,-0.0084f,0.0103f,-0.109f,-0.0114f,0.0066f,-0.1059f,-0.0126f,-0.0239f,-0.106f});
  }
}
protected class MFVec2f139 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2117f,0.0481f,0.2254f,0.0615f,0.2142f,0.0508f,0.2102f,0.0461f,0.2083f,0.0443f,0.2202f,0.0585f,0.2186f,0.0548f,0.1989f,0.0701f,0.1984f,0.068f,0.2138f,0.0778f,0.1952f,0.0651f,0.195f,0.0629f,0.2061f,0.0729f,0.2292f,0.0691f,0.2342f,0.0682f,0.2226f,0.0828f,0.2129f,0.0844f,0.2197f,0.0903f,0.2254f,0.0615f,0.2061f,0.0729f,0.2138f,0.0778f,0.2061f,0.0729f,0.1984f,0.068f,0.195f,0.0629f,0.195f,0.0629f,0.1984f,0.068f,0.2061f,0.0729f,0.2226f,0.0828f,0.2226f,0.0828f,0.2186f,0.0548f,0.2254f,0.0615f,0.2342f,0.0682f,0.2342f,0.0682f,0.2254f,0.0615f,0.2117f,0.0481f,0.2083f,0.0443f,0.2083f,0.0443f,0.2117f,0.0481f,0.2083f,0.0443f,0.195f,0.0629f,0.195f,0.0629f,0.195f,0.0629f,0.195f,0.0629f,0.2083f,0.0443f,0.2083f,0.0443f,0.2083f,0.0443f,0.2226f,0.0828f,0.2342f,0.0682f,0.2342f,0.0682f,0.2342f,0.0682f,0.2342f,0.0682f,0.2226f,0.0828f,0.2226f,0.0828f,0.2226f,0.0828f});
  }
}
protected class MFFloat140 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat141 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32142 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,10,1,-1,1,2,13,-1,10,8,3,-1,3,1,10,-1,3,8,0,-1,0,4,3,-1,0,9,5,-1,5,4,0,-1,7,6,5,-1,5,9,7,-1,6,7,13,-1,13,2,6,-1,22,14,18,-1,18,17,22,-1,20,15,21,-1,21,19,20,-1,9,21,15,-1,15,7,9,-1,10,16,14,-1,8,10,14,-1,14,22,8,-1,21,9,23,-1,11,12,13,-1,13,7,11,-1,0,8,24,-1,24,25,0,-1,16,10,13,-1,13,12,16,-1,23,9,0,-1,0,25,23,-1,11,7,15,-1,24,8,22,-1,35,34,33,-1,31,35,33,-1,31,33,32,-1,1,3,4,-1,4,5,6,-1,1,4,6,-1,2,1,6,-1,37,40,39,-1,39,38,37,-1,28,27,26,-1,26,29,28,-1,35,31,30,-1,30,36,35,-1,37,43,42,-1,40,37,42,-1,40,42,41,-1,18,26,27,-1,27,17,18,-1,17,27,28,-1,28,19,17,-1,19,28,29,-1,29,20,19,-1,20,29,26,-1,26,18,20,-1,17,30,31,-1,31,22,17,-1,22,31,32,-1,32,24,22,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,23,25,-1,23,34,35,-1,35,21,23,-1,21,35,36,-1,36,19,21,-1,19,36,30,-1,30,17,19,-1,14,37,38,-1,38,18,14,-1,18,38,39,-1,39,20,18,-1,20,39,40,-1,40,15,20,-1,15,40,41,-1,41,11,15,-1,11,41,42,-1,42,12,11,-1,12,42,43,-1,43,16,12,-1,16,43,37,-1,37,14,16,-1});
  }
}
protected class MFInt32143 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {27,10,1,-1,1,2,27,-1,10,11,3,-1,3,1,10,-1,3,11,0,-1,0,4,3,-1,0,12,5,-1,5,4,0,-1,9,6,5,-1,5,12,9,-1,6,9,27,-1,27,2,6,-1,35,7,29,-1,29,28,35,-1,31,8,33,-1,33,30,31,-1,15,32,16,-1,16,14,15,-1,17,18,13,-1,19,17,13,-1,13,34,19,-1,32,15,36,-1,20,21,22,-1,22,14,20,-1,23,19,37,-1,37,38,23,-1,18,17,25,-1,25,24,18,-1,36,15,26,-1,26,39,36,-1,20,14,16,-1,37,19,34,-1,49,48,47,-1,45,49,47,-1,45,47,46,-1,1,3,4,-1,4,5,6,-1,1,4,6,-1,2,1,6,-1,51,54,53,-1,53,52,51,-1,42,41,40,-1,40,43,42,-1,49,45,44,-1,44,50,49,-1,51,57,56,-1,54,51,56,-1,54,56,55,-1,29,40,41,-1,41,28,29,-1,28,41,42,-1,42,30,28,-1,30,42,43,-1,43,31,30,-1,31,43,40,-1,40,29,31,-1,28,44,45,-1,45,35,28,-1,34,45,46,-1,46,37,34,-1,37,46,47,-1,47,38,37,-1,39,47,48,-1,48,36,39,-1,36,48,49,-1,49,32,36,-1,33,49,50,-1,50,30,33,-1,30,50,44,-1,44,28,30,-1,7,51,52,-1,52,29,7,-1,29,52,53,-1,53,31,29,-1,31,53,54,-1,54,8,31,-1,16,54,55,-1,55,20,16,-1,20,55,56,-1,56,21,20,-1,24,56,57,-1,57,18,24,-1,18,57,51,-1,51,13,18,-1});
  }
}
protected class MFVec3f144 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0072f,-0.0098f,-0.0976f,-0.0014f,-0.0199f,-0.0857f,-0.0026f,-0.0109f,-0.0855f,0.0079f,-0.0205f,-0.088f,0.009f,-0.0109f,-0.0884f,0.0082f,-0.0014f,-0.0879f,-0.0018f,-0.0004f,-0.0856f,-0.0039f,0.0002f,-0.0948f,0.0058f,-0.0182f,-0.0985f,0.0059f,-0.0005f,-0.0985f,-0.0039f,-0.018f,-0.0951f,-0.0061f,-0.0004f,-0.0945f,-0.006f,-0.0081f,-0.093f,-0.0047f,-0.01f,-0.0932f,-0.0069f,-0.0184f,-0.0993f,-0.0071f,0.001f,-0.0999f,-0.0062f,-0.0176f,-0.0944f,0.0064f,-0.0183f,-0.1088f,-0.0075f,-0.0192f,-0.1053f,0.0057f,0.0019f,-0.1078f,-0.0075f,0.0034f,-0.1044f,0.0068f,-0.0005f,-0.1047f,0.0068f,-0.0171f,-0.1046f,0.0077f,-0.0013f,-0.0995f,0.0078f,-0.0179f,-0.0994f,0.0081f,-0.0105f,-0.0984f,-0.0063f,-0.0161f,-0.1114f,0.0023f,-0.0156f,-0.1135f,0.0018f,-0.0003f,-0.1128f,-0.0063f,0.0006f,-0.1106f,0.0113f,-0.015f,-0.1089f,0.0112f,-0.0146f,-0.1074f,0.0126f,-0.0152f,-0.1038f,0.0128f,-0.0104f,-0.1032f,0.0124f,-0.0034f,-0.1041f,0.0111f,-0.0027f,-0.1082f,0.0107f,-0.0026f,-0.1083f,-0.0117f,-0.016f,-0.1005f,-0.012f,-0.0163f,-0.1035f,-0.012f,-0.0007f,-0.1029f,-0.0119f,-0.0014f,-0.1016f,-0.0112f,-0.0025f,-0.0975f,-0.0111f,-0.0082f,-0.0964f,-0.0113f,-0.0154f,-0.0975f});
  }
}
protected class MFVec2f145 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2033f,0.0375f,0.1866f,0.0487f,0.186f,0.0472f,0.1969f,0.0343f,0.1963f,0.0328f,0.1973f,0.0341f,0.1873f,0.048f,0.1915f,0.0602f,0.1915f,0.0578f,0.1897f,0.0535f,0.1888f,0.0569f,0.2031f,0.037f,0.2012f,0.0381f,0.2444f,0.0847f,0.2208f,0.06f,0.2111f,0.0557f,0.2254f,0.054f,0.2483f,0.0809f,0.2464f,0.0799f,0.2587f,0.0865f,0.225f,0.0604f,0.2239f,0.0673f,0.2238f,0.0671f,0.267f,0.0845f,0.2486f,0.0741f,0.2486f,0.074f,0.2049f,0.059f,0.1896f,0.055f,0.2102f,0.0461f,0.1952f,0.0651f,0.2083f,0.0443f,0.195f,0.0629f,0.2109f,0.0476f,0.2048f,0.0404f,0.2576f,0.0911f,0.2063f,0.0414f,0.2083f,0.0537f,0.2612f,0.0869f,0.2671f,0.0842f,0.2047f,0.0593f,0.1952f,0.0651f,0.2102f,0.0461f,0.2083f,0.0443f,0.195f,0.0629f,0.2102f,0.0461f,0.2063f,0.0414f,0.2612f,0.0869f,0.2671f,0.0842f,0.2083f,0.0537f,0.2109f,0.0476f,0.2083f,0.0443f,0.2444f,0.0847f,0.1952f,0.0651f,0.195f,0.0629f,0.1915f,0.0578f,0.225f,0.0604f,0.2239f,0.0673f,0.2464f,0.0799f});
  }
}
protected class MFFloat146 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat147 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32148 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,7,-1,7,6,0,-1,2,0,6,-1,6,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,1,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1});
  }
}
protected class MFInt32149 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,9,-1,9,8,0,-1,2,0,8,-1,8,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,9,1,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,5,1,-1,6,24,25,-1,25,7,6,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1});
  }
}
protected class MFVec3f150 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0052f,-0.0188f,-0.0932f,-0.0063f,-0.0104f,-0.0926f,0.0062f,-0.0188f,-0.0957f,0.0074f,-0.0104f,-0.0956f,0.0066f,-0.0047f,-0.0961f,-0.0052f,-0.0041f,-0.093f,-0.0056f,-0.0178f,-0.1009f,-0.0069f,-0.0087f,-0.1007f,0.0037f,-0.0184f,-0.1032f,0.0047f,-0.0087f,-0.1035f,0.0039f,0.0007f,-0.1031f,-0.0061f,0.0017f,-0.1008f,-0.0058f,-0.0086f,-0.1057f,-0.0048f,-0.0156f,-0.1059f,0.0006f,-0.0159f,-0.1072f,0.0014f,-0.0087f,-0.1075f,0.0007f,-0.0014f,-0.1071f,-0.0051f,-0.0008f,-0.1058f,-0.0016f,-0.0154f,-0.0905f,-0.0022f,-0.0104f,-0.0901f,-0.0018f,-0.0076f,-0.0904f,0.0045f,-0.0079f,-0.0914f,0.0049f,-0.0103f,-0.0916f,0.0041f,-0.0154f,-0.0918f});
  }
}
protected class MFVec2f151 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1822f,0.0458f,0.1809f,0.0434f,0.1953f,0.0282f,0.1948f,0.024f,0.1933f,0.0293f,0.1816f,0.0411f,0.1287f,0.0243f,0.0943f,0.0785f,0.1866f,0.0487f,0.186f,0.0472f,0.1969f,0.0343f,0.1963f,0.0328f,0.1973f,0.0341f,0.1322f,0.09f,0.157f,0.0552f,0.1873f,0.048f,0.186f,0.0472f,0.1866f,0.0487f,0.1969f,0.0343f,0.1963f,0.0328f,0.1973f,0.0341f,0.157f,0.0552f,0.1822f,0.0458f,0.1809f,0.0434f,0.1816f,0.0411f,0.0943f,0.0785f,0.1948f,0.024f,0.1953f,0.0282f});
  }
}
protected class MFFloat152 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat153 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32154 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,7,-1,7,6,0,-1,1,0,6,-1,6,8,1,-1,9,2,1,-1,1,8,9,-1,4,2,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,3,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1});
  }
}
protected class MFInt32155 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,9,-1,9,8,0,-1,1,0,8,-1,8,10,1,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,9,3,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1});
  }
}
protected class MFVec3f156 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0036f,-0.014f,-0.0961f,0.0034f,-0.014f,-0.0977f,0.0041f,-0.0082f,-0.0958f,-0.004f,-0.0082f,-0.0943f,0.0034f,-0.0043f,-0.0973f,-0.0034f,-0.004f,-0.0957f,-0.0067f,-0.0159f,-0.1005f,-0.0078f,-0.0075f,-0.1f,0.0047f,-0.0159f,-0.1031f,0.0059f,-0.0075f,-0.103f,0.0051f,-0.0018f,-0.1035f,-0.0068f,-0.0012f,-0.1004f,-0.0062f,-0.0076f,-0.1047f,-0.0055f,-0.0134f,-0.1051f,0.0016f,-0.0134f,-0.1067f,0.0025f,-0.0075f,-0.1065f,0.002f,-0.0042f,-0.107f,-0.0056f,-0.0039f,-0.105f});
  }
}
protected class MFVec2f157 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1831f,0.0355f,0.1904f,0.0263f,0.1901f,0.0243f,0.1819f,0.0351f,0.1913f,0.0249f,0.182f,0.0368f,0.088f,0.0133f,0.0677f,0.0461f,0.1822f,0.0458f,0.1809f,0.0434f,0.1953f,0.0282f,0.1948f,0.024f,0.1933f,0.0293f,0.0943f,0.0785f,0.1287f,0.0243f,0.1816f,0.0411f,0.1809f,0.0434f,0.1822f,0.0458f,0.1953f,0.0282f,0.1948f,0.024f,0.1933f,0.0293f,0.1287f,0.0243f});
  }
}
protected class MFFloat158 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat159 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32160 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,10,1,-1,2,9,17,-1,17,12,2,-1,6,14,11,-1,11,0,6,-1,2,8,7,-1,7,1,2,-1,3,18,19,-1,19,4,3,-1,13,5,20,-1,20,22,13,-1,5,9,10,-1,10,4,5,-1,6,0,1,-1,1,7,6,-1,8,2,12,-1,12,15,8,-1,9,5,13,-1,13,17,9,-1,0,11,16,-1,16,3,0,-1,9,2,1,-1,1,10,9,-1,3,4,10,-1,10,0,3,-1,16,21,18,-1,18,3,16,-1,19,20,5,-1,5,4,19,-1,35,34,33,-1,36,35,33,-1,32,36,33,-1,27,26,25,-1,25,24,27,-1,41,40,39,-1,41,39,45,-1,44,41,45,-1,28,23,29,-1,28,27,24,-1,24,23,28,-1,29,23,31,-1,31,30,29,-1,11,23,24,-1,24,16,11,-1,16,24,25,-1,25,21,16,-1,32,38,37,-1,37,36,32,-1,22,26,27,-1,27,13,22,-1,13,27,28,-1,28,17,13,-1,17,28,29,-1,29,12,17,-1,12,29,30,-1,30,15,12,-1,44,43,42,-1,42,41,44,-1,14,31,23,-1,23,11,14,-1,21,32,33,-1,33,18,21,-1,18,33,34,-1,34,19,18,-1,19,34,35,-1,35,20,19,-1,20,35,36,-1,36,22,20,-1,22,36,37,-1,37,26,22,-1,26,37,38,-1,38,25,26,-1,25,38,32,-1,32,21,25,-1,7,39,40,-1,40,6,7,-1,6,40,41,-1,41,14,6,-1,14,41,42,-1,42,31,14,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,15,30,-1,15,44,45,-1,45,8,15,-1,8,45,39,-1,39,7,8,-1});
  }
}
protected class MFInt32161 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,10,1,-1,2,9,17,-1,17,12,2,-1,6,14,11,-1,11,0,6,-1,2,8,7,-1,7,1,2,-1,3,18,19,-1,19,4,3,-1,13,5,20,-1,20,22,13,-1,5,9,10,-1,10,4,5,-1,6,0,1,-1,1,7,6,-1,8,2,12,-1,12,15,8,-1,9,5,13,-1,13,17,9,-1,0,11,16,-1,16,3,0,-1,9,2,1,-1,1,10,9,-1,3,4,10,-1,10,0,3,-1,16,21,18,-1,18,3,16,-1,19,20,5,-1,5,4,19,-1,35,34,33,-1,36,35,33,-1,32,36,33,-1,27,26,25,-1,25,24,27,-1,41,40,39,-1,41,39,45,-1,44,41,45,-1,28,11,29,-1,28,27,24,-1,24,23,28,-1,29,23,31,-1,31,30,29,-1,11,23,24,-1,24,16,11,-1,16,24,25,-1,25,21,16,-1,32,38,37,-1,37,36,32,-1,22,26,27,-1,27,13,22,-1,13,27,28,-1,28,17,13,-1,17,28,29,-1,29,12,17,-1,12,29,30,-1,30,15,12,-1,44,43,42,-1,42,41,44,-1,14,31,23,-1,23,11,14,-1,21,32,33,-1,33,18,21,-1,18,33,34,-1,34,19,18,-1,19,34,35,-1,35,20,19,-1,20,35,36,-1,36,22,20,-1,22,36,37,-1,37,26,22,-1,26,37,38,-1,38,25,26,-1,25,38,32,-1,32,21,25,-1,7,39,40,-1,40,6,7,-1,6,40,41,-1,41,14,6,-1,14,41,42,-1,42,31,14,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,15,30,-1,15,44,45,-1,45,8,15,-1,8,45,39,-1,39,7,8,-1});
  }
}
protected class MFVec3f162 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0073f,-0.0276f,-0.0761f,0.0132f,-0.0184f,-0.0694f,0.01f,-0.0041f,-0.0669f,0.0069f,-0.0261f,-0.0934f,0.0108f,-0.0184f,-0.0929f,0.007f,-0.0014f,-0.092f,0.0079f,-0.0256f,-0.0567f,0.0116f,-0.0184f,-0.0576f,0.0095f,-0.0071f,-0.0567f,0.0088f,-0.0028f,-0.0783f,0.012f,-0.0184f,-0.0812f,-0.0069f,-0.0276f,-0.0664f,-0.0048f,-0.0004f,-0.062f,-0.0068f,0.0058f,-0.0887f,-0.0045f,-0.0249f,-0.0524f,-0.0053f,-0.0046f,-0.0514f,-0.0078f,-0.0271f,-0.0903f,-0.0054f,0.0026f,-0.0753f,0.0036f,-0.0255f,-0.1039f,0.0072f,-0.0182f,-0.1057f,0.0038f,0f,-0.1038f,-0.0092f,-0.0266f,-0.1004f,-0.0084f,0.0105f,-0.1001f,-0.0123f,-0.0232f,-0.0663f,-0.0131f,-0.0227f,-0.0897f,-0.0139f,-0.0224f,-0.0957f,-0.0134f,0.0044f,-0.0955f,-0.0126f,0.002f,-0.0895f,-0.0112f,-0.0013f,-0.0758f,-0.0105f,-0.0042f,-0.0628f,-0.0111f,-0.0072f,-0.0553f,-0.0102f,-0.0212f,-0.0559f,-0.0118f,-0.0239f,-0.1073f,-0.001f,-0.023f,-0.1099f,0.0016f,-0.0177f,-0.1114f,-0.0015f,-0.0012f,-0.1096f,-0.0118f,0.0074f,-0.1071f,-0.0147f,0.0034f,-0.1037f,-0.0152f,-0.0209f,-0.1039f,0.0084f,-0.019f,-0.0535f,0.006f,-0.0233f,-0.0529f,-0.0043f,-0.0228f,-0.0487f,-0.0085f,-0.0204f,-0.0511f,-0.0091f,-0.011f,-0.0506f,-0.0055f,-0.0095f,-0.0479f,0.0069f,-0.0114f,-0.0528f});
  }
}
protected class MFVec2f163 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2299f,0.0317f,0.2316f,0.0247f,0.2265f,0.0269f,0.241f,0.0419f,0.244f,0.0359f,0.2401f,0.0413f,0.2245f,0.0286f,0.226f,0.0221f,0.2232f,0.0245f,0.2333f,0.0341f,0.2378f,0.0303f,0.2142f,0.0508f,0.2117f,0.0481f,0.2254f,0.0615f,0.2102f,0.0461f,0.2083f,0.0443f,0.2202f,0.0585f,0.2186f,0.0548f,0.2469f,0.052f,0.2512f,0.047f,0.2484f,0.051f,0.2292f,0.0691f,0.2342f,0.0682f,0.2142f,0.0508f,0.2202f,0.0585f,0.2292f,0.0691f,0.2342f,0.0682f,0.2254f,0.0615f,0.2186f,0.0548f,0.2117f,0.0481f,0.2083f,0.0443f,0.2102f,0.0461f,0.2292f,0.0691f,0.2469f,0.052f,0.2512f,0.047f,0.2484f,0.051f,0.2342f,0.0682f,0.2342f,0.0682f,0.2292f,0.0691f,0.226f,0.0221f,0.2245f,0.0286f,0.2102f,0.0461f,0.2102f,0.0461f,0.2083f,0.0443f,0.2083f,0.0443f,0.2232f,0.0245f});
  }
}
protected class MFFloat164 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat165 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32166 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,10,11,-1,11,3,2,-1,0,12,14,-1,14,5,0,-1,2,6,13,-1,13,10,2,-1,0,3,11,-1,11,12,0,-1,15,16,0,-1,0,5,15,-1,17,1,2,-1,2,3,17,-1,16,17,3,-1,3,0,16,-1,2,1,4,-1,4,6,2,-1,6,4,8,-1,7,9,18,-1,18,15,7,-1,8,4,18,-1,18,9,8,-1,7,15,5,-1,1,17,20,-1,20,19,1,-1,17,16,21,-1,21,20,17,-1,16,15,22,-1,22,21,16,-1,22,15,18,-1,18,23,22,-1,23,18,4,-1,4,24,23,-1,24,4,1,-1,1,19,24,-1,27,26,25,-1,28,27,25,-1,29,28,25,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,19,20,24,-1,30,33,32,-1,32,31,30,-1,30,36,35,-1,33,30,35,-1,33,35,34,-1,10,25,26,-1,26,11,10,-1,11,26,27,-1,27,12,11,-1,12,27,28,-1,28,14,12,-1,14,28,29,-1,29,13,14,-1,13,29,25,-1,25,10,13,-1,6,30,31,-1,31,13,6,-1,13,31,32,-1,32,14,13,-1,14,32,33,-1,33,5,14,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,9,7,-1,9,35,36,-1,36,8,9,-1,8,36,30,-1,30,6,8,-1});
  }
}
protected class MFInt32167 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,23,24,-1,24,1,0,-1,3,25,27,-1,27,2,3,-1,0,4,26,-1,26,23,0,-1,3,1,24,-1,24,25,3,-1,5,6,7,-1,7,8,5,-1,9,10,11,-1,11,12,9,-1,6,13,14,-1,14,7,6,-1,11,10,17,-1,17,15,11,-1,15,17,18,-1,16,19,20,-1,20,5,16,-1,18,17,22,-1,22,21,18,-1,16,5,8,-1,31,30,35,-1,35,34,31,-1,30,29,36,-1,36,35,30,-1,29,28,37,-1,37,36,29,-1,37,28,33,-1,33,38,37,-1,38,33,32,-1,32,39,38,-1,39,32,31,-1,31,34,39,-1,42,41,40,-1,43,42,40,-1,44,43,40,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,34,35,39,-1,45,48,47,-1,47,46,45,-1,45,51,50,-1,48,45,50,-1,48,50,49,-1,23,40,41,-1,41,24,23,-1,24,41,42,-1,42,25,24,-1,25,42,43,-1,43,27,25,-1,27,43,44,-1,44,26,27,-1,26,44,40,-1,40,23,26,-1,4,45,46,-1,46,26,4,-1,26,46,47,-1,47,27,26,-1,27,47,48,-1,48,2,27,-1,8,48,49,-1,49,16,8,-1,16,49,50,-1,50,19,16,-1,21,50,51,-1,51,18,21,-1,18,51,45,-1,45,15,18,-1});
  }
}
protected class MFVec3f168 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.006f,-0.0025f,-0.1035f,0.0048f,-0.0194f,-0.098f,0.0048f,-0.0177f,-0.1041f,0.0074f,-0.0111f,-0.1037f,-0.0043f,-0.0171f,-0.0955f,-0.0074f,0.0002f,-0.1001f,-0.0074f,-0.0164f,-0.1f,-0.0065f,-0.0006f,-0.0949f,-0.0064f,-0.0172f,-0.0948f,-0.0061f,-0.0098f,-0.0938f,0.0047f,-0.0183f,-0.1085f,0.0084f,-0.0111f,-0.1095f,0.0063f,0.0001f,-0.1085f,-0.0078f,-0.0176f,-0.1042f,-0.0085f,0.0026f,-0.1032f,-0.0044f,-0.0004f,-0.0954f,0.0055f,-0.0021f,-0.0981f,0.0068f,-0.0106f,-0.0974f,-0.0051f,-0.0096f,-0.0939f,0.0056f,-0.0198f,-0.0952f,0.0074f,-0.0115f,-0.095f,0.0063f,-0.0036f,-0.0952f,-0.0041f,-0.0022f,-0.0929f,-0.0047f,-0.0108f,-0.0918f,-0.0035f,-0.018f,-0.093f,0.0015f,-0.0152f,-0.113f,0.0039f,-0.0105f,-0.1136f,0.0023f,-0.0022f,-0.1129f,-0.007f,-0.0006f,-0.1097f,-0.0065f,-0.0147f,-0.1104f,-0.0114f,-0.0141f,-0.1008f,-0.0113f,-0.0148f,-0.1033f,-0.0119f,-0.0012f,-0.1026f,-0.0114f,-0.0022f,-0.1012f,-0.0107f,-0.0028f,-0.0971f,-0.0104f,-0.0096f,-0.0962f,-0.0106f,-0.0147f,-0.0969f});
  }
}
protected class MFVec2f169 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2192f,0.0256f,0.2205f,0.0195f,0.2048f,0.0404f,0.2199f,0.022f,0.2063f,0.0414f,0.2047f,0.0523f,0.1956f,0.0462f,0.1979f,0.0386f,0.2109f,0.0476f,0.277f,0.1031f,0.2673f,0.0987f,0.263f,0.1f,0.2744f,0.109f,0.1892f,0.0439f,0.1911f,0.0375f,0.2576f,0.0911f,0.2083f,0.0537f,0.263f,0.0893f,0.2612f,0.0869f,0.2047f,0.0593f,0.2048f,0.0593f,0.2671f,0.0842f,0.2673f,0.0839f,0.2245f,0.0286f,0.226f,0.0221f,0.2232f,0.0245f,0.2102f,0.0461f,0.2083f,0.0443f,0.2039f,0.0358f,0.2152f,0.0224f,0.2154f,0.0203f,0.2126f,0.0258f,0.2034f,0.0366f,0.2033f,0.0375f,0.2114f,0.0219f,0.2132f,0.0168f,0.2123f,0.0196f,0.1999f,0.0356f,0.201f,0.0349f,0.2011f,0.0354f,0.2245f,0.0286f,0.226f,0.0221f,0.2232f,0.0245f,0.2083f,0.0443f,0.2102f,0.0461f,0.2576f,0.0911f,0.2102f,0.0461f,0.2083f,0.0443f,0.2048f,0.0404f,0.2083f,0.0537f,0.2047f,0.0593f,0.2612f,0.0869f});
  }
}
protected class MFFloat170 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat171 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32172 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,7,1,-1,1,0,6,-1,7,8,2,-1,2,1,7,-1,8,9,3,-1,3,2,8,-1,3,9,10,-1,10,4,3,-1,4,10,11,-1,11,5,4,-1,5,11,6,-1,6,0,5,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,1,18,19,-1,19,0,1,-1,0,19,20,-1,20,5,0,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,1,2,-1});
  }
}
protected class MFInt32173 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,7,0,-1,0,1,6,-1,7,8,2,-1,2,0,7,-1,8,9,3,-1,3,2,8,-1,3,9,10,-1,10,4,3,-1,4,10,11,-1,11,5,4,-1,5,11,6,-1,6,1,5,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1});
  }
}
protected class MFVec3f174 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0052f,-0.0177f,-0.0956f,0.0068f,-0.0115f,-0.0958f,0.0059f,-0.0047f,-0.0956f,-0.0054f,-0.004f,-0.0934f,-0.0062f,-0.0116f,-0.0929f,-0.0044f,-0.0176f,-0.0937f,0.0033f,-0.0169f,-0.1028f,0.0051f,-0.0087f,-0.1026f,0.0039f,-0.0008f,-0.1028f,-0.0064f,0.0006f,-0.1005f,-0.007f,-0.008f,-0.0994f,-0.0058f,-0.0152f,-0.1006f,0.0007f,-0.0143f,-0.1056f,0.002f,-0.0086f,-0.1053f,0.0011f,-0.0028f,-0.1056f,-0.0052f,-0.002f,-0.1043f,-0.0056f,-0.0079f,-0.1033f,-0.0047f,-0.0132f,-0.1043f,0.0042f,-0.0113f,-0.0918f,0.0034f,-0.0143f,-0.0917f,-0.0013f,-0.0143f,-0.0909f,-0.0022f,-0.0113f,-0.0903f,-0.0018f,-0.0076f,-0.0907f,0.0037f,-0.0079f,-0.0917f});
  }
}
protected class MFVec2f175 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2109f,0.0133f,0.2102f,0.0181f,0.2093f,0.0169f,0.1959f,0.0354f,0.1986f,0.0324f,0.1989f,0.0342f,0.2114f,0.0219f,0.2132f,0.0168f,0.2123f,0.0196f,0.1999f,0.0356f,0.201f,0.0349f,0.2011f,0.0354f,0.2114f,0.0219f,0.2132f,0.0168f,0.2123f,0.0196f,0.1999f,0.0356f,0.201f,0.0349f,0.2011f,0.0354f,0.2109f,0.0133f,0.2102f,0.0181f,0.1989f,0.0342f,0.1986f,0.0324f,0.1959f,0.0354f,0.2093f,0.0169f});
  }
}
protected class MFFloat176 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat177 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32178 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,4,-1,4,1,2,-1,0,1,4,-1,4,5,0,-1,7,1,0,-1,0,6,7,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,10,4,3,-1,3,9,10,-1,5,4,10,-1,10,11,5,-1,0,5,11,-1,11,6,0,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1});
  }
}
protected class MFInt32179 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,3,-1,3,0,1,-1,5,0,3,-1,3,4,5,-1,9,0,5,-1,5,8,9,-1,1,0,9,-1,9,10,1,-1,12,6,7,-1,7,11,12,-1,14,3,2,-1,2,13,14,-1,4,3,14,-1,14,15,4,-1,5,4,15,-1,15,8,5,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,11,18,19,-1,19,12,11,-1,13,19,20,-1,20,14,13,-1,14,20,21,-1,21,15,14,-1,15,21,16,-1,16,8,15,-1});
  }
}
protected class MFVec3f180 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0026f,-0.0153f,-0.0974f,0.0047f,-0.0095f,-0.0954f,0.0036f,-0.0044f,-0.0966f,-0.0029f,-0.004f,-0.0952f,-0.0028f,-0.0093f,-0.0939f,-0.003f,-0.0153f,-0.0963f,0.0043f,-0.0154f,-0.1033f,0.0059f,-0.0092f,-0.1036f,0.005f,-0.0024f,-0.1033f,-0.0063f,-0.0017f,-0.1011f,-0.0071f,-0.0093f,-0.1006f,-0.0053f,-0.0153f,-0.1014f,0.0015f,-0.0129f,-0.107f,0.0025f,-0.0091f,-0.1072f,0.0019f,-0.0047f,-0.107f,-0.005f,-0.0043f,-0.1057f,-0.0055f,-0.0091f,-0.1053f,-0.0044f,-0.0128f,-0.1059f});
  }
}
protected class MFVec2f181 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2048f,0.0135f,0.2053f,0.0142f,0.1964f,0.026f,0.1976f,0.0232f,0.1977f,0.0271f,0.2052f,0.017f,0.0639f,0.0523f,0.0903f,0.0107f,0.2102f,0.0181f,0.2109f,0.0133f,0.2093f,0.0169f,0.1317f,0.0215f,0.0951f,0.0836f,0.1959f,0.0354f,0.1986f,0.0324f,0.1989f,0.0342f,0.2102f,0.0181f,0.2109f,0.0133f,0.2093f,0.0169f,0.0951f,0.0836f,0.1986f,0.0324f,0.1989f,0.0342f});
  }
}
protected class MFFloat182 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat183 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32184 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,61,60,58,-1,58,57,56,-1,61,58,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1});
  }
}
protected class MFInt32185 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,47,46,44,-1,44,43,42,-1,47,44,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1});
  }
}
protected class MFVec3f186 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0668f,-0.0102f,-0.1019f,-0.0371f,-0.0102f,-0.0297f,0.0294f,-0.0102f,-0.0118f,0.0756f,-0.0102f,-0.0618f,0.0756f,-0.0102f,-0.142f,0.0294f,-0.0102f,-0.1919f,-0.0371f,-0.0102f,-0.1741f,-0.0668f,-0.0945f,-0.1019f,-0.0371f,-0.0945f,-0.0297f,0.0294f,-0.0945f,-0.0118f,0.0756f,-0.0945f,-0.0618f,0.0756f,-0.0945f,-0.142f,0.0294f,-0.0945f,-0.1919f,-0.0371f,-0.0945f,-0.1741f,-0.0668f,-0.2408f,-0.1019f,-0.0371f,-0.2408f,-0.0297f,0.0294f,-0.2408f,-0.0118f,0.0756f,-0.2408f,-0.0618f,0.0756f,-0.2408f,-0.142f,0.0294f,-0.2408f,-0.1919f,-0.0371f,-0.2408f,-0.1741f,-0.0759f,-0.3897f,-0.1019f,-0.0429f,-0.3897f,-0.0213f,0.0315f,-0.3897f,-0.0014f,0.0753f,-0.3897f,-0.0571f,0.0753f,-0.3897f,-0.1466f,0.0315f,-0.3897f,-0.2024f,-0.0429f,-0.3897f,-0.1825f,-0.0485f,-0.2064f,-0.1019f,-0.0257f,-0.2064f,-0.0465f,0.0254f,-0.2064f,-0.0328f,0.0591f,-0.2064f,-0.0711f,0.0591f,-0.2064f,-0.1326f,0.0254f,-0.2064f,-0.171f,-0.0257f,-0.2064f,-0.1573f,-0.0487f,-0.3517f,-0.1019f,-0.0277f,-0.3517f,-0.0579f,0.0193f,-0.3517f,-0.047f,0.057f,-0.3517f,-0.0775f,0.057f,-0.3517f,-0.1263f,0.0193f,-0.3517f,-0.1568f,-0.0277f,-0.3517f,-0.1459f,-0.0463f,0.0346f,-0.1019f,-0.0244f,0.0346f,-0.0484f,0.0249f,0.0346f,-0.0353f,0.0644f,0.0346f,-0.0722f,0.0644f,0.0346f,-0.1315f,0.0249f,0.0346f,-0.1685f,-0.0244f,0.0346f,-0.1553f,-0.0416f,-0.4345f,-0.1019f,-0.0234f,-0.4345f,-0.0597f,0.0177f,-0.4345f,-0.0502f,0.0507f,-0.4345f,-0.0768f,0.0507f,-0.4345f,-0.1232f,0.0177f,-0.4345f,-0.1498f,-0.0234f,-0.4345f,-0.1403f,-0.0143f,-0.4565f,-0.1019f,-0.0063f,-0.4565f,-0.0814f,0.0117f,-0.4565f,-0.0772f,0.0261f,-0.4565f,-0.0888f,0.0261f,-0.4565f,-0.1112f,0.0117f,-0.4565f,-0.1228f,-0.0063f,-0.4565f,-0.1187f});
  }
}
protected class MFVec2f187 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.719f,0.5576f,0.6284f,0.5576f,0.7414f,0.5576f,0.6787f,0.5576f,0.5781f,0.5576f,0.5154f,0.5576f,0.5378f,0.5576f,0.6284f,0.5029f,0.7509f,0.3997f,0.6284f,0.3997f,0.7509f,0.5029f,0.7811f,0.3997f,0.7811f,0.5029f,0.6964f,0.3997f,0.6964f,0.5029f,0.5604f,0.3997f,0.5604f,0.5029f,0.4756f,0.3997f,0.4756f,0.5029f,0.5059f,0.3997f,0.5059f,0.5029f,0.7509f,0.3197f,0.6284f,0.3197f,0.7811f,0.3197f,0.6964f,0.3197f,0.5604f,0.3197f,0.4756f,0.3197f,0.5059f,0.3197f,0.7651f,0.2166f,0.6284f,0.2166f,0.7989f,0.2166f,0.7043f,0.2166f,0.5525f,0.2166f,0.4579f,0.2166f,0.4917f,0.2166f,0.7224f,0.263f,0.6284f,0.263f,0.7456f,0.263f,0.6805f,0.263f,0.5762f,0.263f,0.5112f,0.263f,0.5344f,0.263f,0.8705f,0.5452f,0.8705f,0.5383f,0.8705f,0.5369f,0.8705f,0.5408f,0.8705f,0.5483f,0.8705f,0.5522f,0.8705f,0.5509f,0.917f,0.5452f,0.917f,0.5266f,0.89f,0.5304f,0.89f,0.5452f,0.917f,0.522f,0.89f,0.5268f,0.917f,0.5349f,0.89f,0.537f,0.917f,0.5555f,0.89f,0.5534f,0.917f,0.5684f,0.89f,0.5636f,0.917f,0.5638f,0.89f,0.56f,0.8746f,0.531f,0.8746f,0.5452f,0.8746f,0.5279f,0.8746f,0.5368f,0.8746f,0.5524f,0.8746f,0.5613f,0.8746f,0.5581f});
  }
}
protected class MFFloat188 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat189 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32190 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
  }
}
protected class MFInt32191 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
  }
}
protected class MFVec3f192 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0163f,0.0132f,-0.1014f,-0.0084f,0.0132f,-0.0808f,0.0096f,0.0132f,-0.0767f,0.024f,0.0132f,-0.0883f,0.024f,0.0132f,-0.1107f,0.0096f,0.0132f,-0.1223f,-0.0084f,0.0132f,-0.1182f,-0.0528f,-0.1124f,-0.1014f,-0.033f,-0.0901f,-0.0565f,-0.028f,-0.0452f,-0.0474f,-0.0478f,-0.0516f,-0.1014f,0.0181f,-0.0901f,-0.0441f,0.0166f,-0.0452f,-0.0366f,0.0505f,-0.1124f,-0.0736f,0.0524f,-0.0516f,-0.0798f,0.0505f,-0.1297f,-0.1327f,0.0524f,-0.0516f,-0.1229f,0.0181f,-0.1297f,-0.1672f,0.0166f,-0.0516f,-0.1552f,-0.033f,-0.1297f,-0.1549f,-0.028f,-0.0516f,-0.1443f,-0.0254f,-0.0086f,-0.0592f,-0.0437f,-0.0086f,-0.1014f,0.0157f,-0.0086f,-0.0497f,0.0486f,-0.0086f,-0.0763f,0.0486f,-0.0086f,-0.1227f,0.0157f,-0.0086f,-0.1483f,-0.0254f,-0.0086f,-0.1388f,-0.0363f,-0.2993f,-0.1018f,-0.0209f,-0.299f,-0.0667f,0.0137f,-0.299f,-0.058f,0.0415f,-0.2993f,-0.0823f,0.0415f,-0.2997f,-0.1238f,0.0137f,-0.2997f,-0.1411f,-0.0209f,-0.2997f,-0.1324f,-0.0161f,-0.3355f,-0.1013f,-0.0083f,-0.3355f,-0.0836f,0.0092f,-0.3355f,-0.0792f,0.0233f,-0.3355f,-0.0915f,0.0233f,-0.3357f,-0.1125f,0.0092f,-0.3357f,-0.1212f,-0.0083f,-0.3357f,-0.1168f});
  }
}
protected class MFVec2f193 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9309f,0.5848f,0.919f,0.5848f,0.8921f,0.5848f,0.8706f,0.5848f,0.8706f,0.5848f,0.8921f,0.5848f,0.919f,0.5848f,0.9845f,0.5321f,0.955f,0.5475f,0.9491f,0.5599f,0.9788f,0.5571f,0.8787f,0.5475f,0.8825f,0.5599f,0.8302f,0.5321f,0.8291f,0.5571f,0.8302f,0.52f,0.8291f,0.5571f,0.8787f,0.52f,0.8825f,0.5571f,0.955f,0.52f,0.9491f,0.5571f,0.9444f,0.5755f,0.9717f,0.5755f,0.8831f,0.5755f,0.8339f,0.5755f,0.8339f,0.5755f,0.8831f,0.5755f,0.9444f,0.5755f,0.9632f,0.3942f,0.9402f,0.3943f,0.8884f,0.3943f,0.8469f,0.3942f,0.8469f,0.3941f,0.8884f,0.3941f,0.9402f,0.3941f,0.9325f,0.3742f,0.9208f,0.3742f,0.8947f,0.3742f,0.8737f,0.3742f,0.8737f,0.3741f,0.8947f,0.3741f,0.9208f,0.3741f});
  }
}
protected class MFFloat194 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat195 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32196 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,15,21,-1,21,34,13,-1,9,34,21,-1,21,20,9,-1,0,15,14,-1,14,2,0,-1,30,33,16,-1,16,3,30,-1,3,16,25,-1,25,4,3,-1,22,17,18,-1,18,5,22,-1,5,18,29,-1,29,6,5,-1,6,19,27,-1,7,20,21,-1,21,1,7,-1,1,21,15,-1,15,0,1,-1,15,13,32,-1,32,14,15,-1,33,11,12,-1,12,16,33,-1,25,16,12,-1,12,23,25,-1,17,24,10,-1,10,18,17,-1,18,10,28,-1,28,29,18,-1,19,8,26,-1,26,27,19,-1,4,25,17,-1,17,22,4,-1,25,23,24,-1,24,17,25,-1,20,27,26,-1,26,9,20,-1,6,27,20,-1,20,7,6,-1,29,28,8,-1,8,19,29,-1,6,29,19,-1,1,0,31,-1,0,2,31,-1,31,30,3,-1,3,4,31,-1,4,22,31,-1,22,5,31,-1,5,6,31,-1,6,7,31,-1,7,1,31,-1,2,30,31,-1,14,33,30,-1,30,2,14,-1,32,11,33,-1,33,14,32,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,39,43,45,-1,45,46,35,-1,39,45,35,-1,37,39,35,-1,36,37,35,-1,26,8,36,-1,36,35,26,-1,8,28,37,-1,37,36,8,-1,28,10,38,-1,38,37,28,-1,10,24,39,-1,39,38,10,-1,24,23,40,-1,40,39,24,-1,23,12,41,-1,41,40,23,-1,12,11,42,-1,42,41,12,-1,11,32,43,-1,43,42,11,-1,32,13,44,-1,44,43,32,-1,13,34,45,-1,45,44,13,-1,34,9,46,-1,46,45,34,-1,9,26,35,-1,35,46,9,-1});
  }
}
protected class MFInt32197 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,12,27,-1,27,34,5,-1,7,34,27,-1,27,28,7,-1,9,12,11,-1,11,10,9,-1,30,33,14,-1,14,13,30,-1,13,14,16,-1,16,15,13,-1,17,20,19,-1,19,18,17,-1,18,19,22,-1,22,21,18,-1,21,24,23,-1,25,28,27,-1,27,26,25,-1,26,27,12,-1,12,9,26,-1,12,5,32,-1,32,11,12,-1,33,3,4,-1,4,14,33,-1,16,14,4,-1,4,8,16,-1,20,6,2,-1,2,19,20,-1,19,2,29,-1,29,22,19,-1,24,0,1,-1,1,23,24,-1,15,16,20,-1,20,17,15,-1,16,8,6,-1,6,20,16,-1,28,23,1,-1,1,7,28,-1,21,23,28,-1,28,25,21,-1,22,29,0,-1,0,24,22,-1,21,22,24,-1,26,9,31,-1,9,10,31,-1,31,30,13,-1,13,15,31,-1,15,17,31,-1,17,18,31,-1,18,21,31,-1,21,25,31,-1,25,26,31,-1,10,30,31,-1,11,33,30,-1,30,10,11,-1,32,3,33,-1,33,11,32,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,39,43,45,-1,45,46,35,-1,39,45,35,-1,37,39,35,-1,36,37,35,-1,1,0,36,-1,36,35,1,-1,0,29,37,-1,37,36,0,-1,29,2,38,-1,38,37,29,-1,2,6,39,-1,39,38,2,-1,6,8,40,-1,40,39,6,-1,8,4,41,-1,41,40,8,-1,4,3,42,-1,42,41,4,-1,3,32,43,-1,43,42,3,-1,32,5,44,-1,44,43,32,-1,5,34,45,-1,45,44,5,-1,34,7,46,-1,46,45,34,-1,7,1,35,-1,35,46,7,-1});
  }
}
protected class MFVec3f198 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0187f,-0.009f,-0.1286f,0.0256f,-0.0116f,-0.1082f,0.0078f,-0.0074f,-0.1381f,-0.0198f,-0.0086f,-0.1286f,-0.0255f,-0.0106f,-0.1138f,-0.0172f,-0.0101f,-0.0892f,0.001f,-0.0092f,-0.0832f,0.0169f,-0.0105f,-0.0892f,0.0015f,-0.0331f,-0.0796f,0.0229f,-0.038f,-0.0895f,-0.0203f,-0.0397f,-0.0889f,-0.0061f,-0.0419f,-0.1444f,-0.0234f,-0.039f,-0.1327f,0.0227f,-0.039f,-0.1337f,0.0076f,-0.0201f,-0.1397f,0.0206f,-0.0204f,-0.1302f,-0.0181f,-0.0195f,-0.1299f,-0.0297f,-0.0312f,-0.1036f,-0.0163f,-0.0232f,-0.0888f,0.0003f,-0.0203f,-0.0825f,0.0181f,-0.0215f,-0.0888f,0.0283f,-0.0232f,-0.1105f,-0.0253f,-0.011f,-0.103f,-0.0266f,-0.0457f,-0.1168f,-0.0262f,-0.0459f,-0.1051f,-0.0301f,-0.0302f,-0.1151f,0.0115f,-0.0355f,-0.0828f,0.0084f,-0.0209f,-0.0845f,-0.0093f,-0.0364f,-0.0825f,-0.0088f,-0.0217f,-0.0845f,-0.0056f,-0.0073f,-0.1381f,0.0007f,-0.001f,-0.1091f,0.0064f,-0.0418f,-0.1445f,-0.0049f,-0.0198f,-0.1397f,0.0298f,-0.0443f,-0.1106f,0.0096f,-0.0541f,-0.0868f,0.0021f,-0.0514f,-0.0845f,-0.0061f,-0.0548f,-0.0866f,-0.0146f,-0.0582f,-0.0915f,-0.0196f,-0.0647f,-0.1052f,-0.0199f,-0.0643f,-0.1156f,-0.0174f,-0.0565f,-0.1287f,-0.0033f,-0.0597f,-0.1381f,0.0051f,-0.0598f,-0.1382f,0.0183f,-0.0571f,-0.1295f,0.0243f,-0.0634f,-0.1095f,0.0185f,-0.0568f,-0.092f});
  }
}
protected class MFVec2f199 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.227f,0.1089f,0.2217f,0.1285f,0.2533f,0.0835f,0.273f,0.1232f,0.2824f,0.0941f,0.2433f,0.1632f,0.2685f,0.0797f,0.2165f,0.148f,0.2759f,0.0832f,0.2428f,0.156f,0.2563f,0.142f,0.2584f,0.1419f,0.2431f,0.1588f,0.2715f,0.1062f,0.2761f,0.1011f,0.2698f,0.09f,0.2775f,0.078f,0.2629f,0.0863f,0.248f,0.0935f,0.2498f,0.0895f,0.2702f,0.0748f,0.2296f,0.1148f,0.2397f,0.101f,0.2249f,0.1266f,0.2295f,0.1126f,0.2207f,0.1406f,0.2252f,0.1591f,0.2245f,0.1634f,0.2202f,0.1406f,0.2407f,0.0951f,0.2662f,0.1249f,0.2599f,0.1313f,0.2623f,0.1418f,0.2691f,0.1232f,0.2231f,0.166f,0.2217f,0.1285f,0.227f,0.1089f,0.2407f,0.0951f,0.2533f,0.0835f,0.2685f,0.0797f,0.2759f,0.0832f,0.2824f,0.0941f,0.273f,0.1232f,0.2623f,0.1418f,0.2433f,0.1632f,0.2231f,0.166f,0.2165f,0.148f});
  }
}
protected class MFFloat200 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat201 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32202 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,6,11,-1,11,12,7,-1,1,17,18,-1,18,2,1,-1,12,10,5,-1,5,7,12,-1,2,11,6,-1,5,10,13,-1,13,0,5,-1,1,3,14,-1,14,17,1,-1,11,2,18,-1,4,15,16,-1,16,8,4,-1,8,16,9,-1,3,9,16,-1,16,14,3,-1,26,27,28,-1,28,19,20,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,28,20,24,-1,26,28,24,-1,25,26,24,-1,38,39,42,-1,42,43,38,-1,37,29,30,-1,30,31,32,-1,37,30,32,-1,32,33,34,-1,37,32,34,-1,37,34,35,-1,37,35,36,-1,1,2,20,-1,20,19,1,-1,2,6,21,-1,21,20,2,-1,6,7,22,-1,22,21,6,-1,7,5,23,-1,23,22,7,-1,5,0,24,-1,24,23,5,-1,38,43,44,-1,44,45,38,-1,4,8,26,-1,26,25,4,-1,8,9,27,-1,27,26,8,-1,9,3,28,-1,28,27,9,-1,3,1,19,-1,19,28,3,-1,10,12,30,-1,30,29,10,-1,12,11,31,-1,31,30,12,-1,11,18,32,-1,32,31,11,-1,18,17,33,-1,33,32,18,-1,17,14,34,-1,34,33,17,-1,14,16,35,-1,35,34,14,-1,16,15,36,-1,36,35,16,-1,42,39,40,-1,40,41,42,-1,13,10,29,-1,29,37,13,-1,0,13,39,-1,39,38,0,-1,13,37,40,-1,40,39,13,-1,37,36,41,-1,41,40,37,-1,36,15,42,-1,42,41,36,-1,15,4,43,-1,43,42,15,-1,4,25,44,-1,44,43,4,-1,25,24,45,-1,45,44,25,-1,24,0,38,-1,38,45,24,-1});
  }
}
protected class MFInt32203 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,6,11,-1,11,12,7,-1,1,17,18,-1,18,2,1,-1,12,10,5,-1,5,7,12,-1,2,11,6,-1,5,10,13,-1,13,0,5,-1,1,3,14,-1,14,17,1,-1,11,2,18,-1,4,15,16,-1,16,8,4,-1,8,16,9,-1,3,9,16,-1,16,14,3,-1,26,27,28,-1,28,19,20,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,28,20,24,-1,26,28,24,-1,25,26,24,-1,38,39,42,-1,42,43,38,-1,37,29,30,-1,30,31,32,-1,37,30,32,-1,32,33,34,-1,37,32,34,-1,37,34,35,-1,37,35,36,-1,1,2,20,-1,20,19,1,-1,2,6,21,-1,21,20,2,-1,6,7,22,-1,22,21,6,-1,7,5,23,-1,23,22,7,-1,5,0,24,-1,24,23,5,-1,38,43,44,-1,44,45,38,-1,4,8,26,-1,26,25,4,-1,8,9,27,-1,27,26,8,-1,9,3,28,-1,28,27,9,-1,3,1,19,-1,19,28,3,-1,10,12,30,-1,30,29,10,-1,12,11,31,-1,31,30,12,-1,11,18,32,-1,32,31,11,-1,18,17,33,-1,33,32,18,-1,17,14,34,-1,34,33,17,-1,14,16,35,-1,35,34,14,-1,16,15,36,-1,36,35,16,-1,42,39,40,-1,40,41,42,-1,13,10,29,-1,29,37,13,-1,0,13,39,-1,39,38,0,-1,13,37,40,-1,40,39,13,-1,37,36,41,-1,41,40,37,-1,36,15,42,-1,42,41,36,-1,15,4,43,-1,43,42,15,-1,4,25,44,-1,44,43,4,-1,25,24,45,-1,45,44,25,-1,24,0,38,-1,38,45,24,-1});
  }
}
protected class MFVec3f204 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0204f,0.0095f,-0.0866f,0.0153f,-0.0318f,-0.0922f,0.0183f,-0.0085f,-0.0927f,0.012f,-0.04f,-0.0891f,-0.0197f,-0.0416f,-0.0865f,-0.0091f,0.0181f,-0.0874f,0.0151f,0.0064f,-0.0902f,0.0025f,0.0151f,-0.0857f,-0.0089f,-0.042f,-0.0874f,0.0029f,-0.0418f,-0.0856f,-0.009f,0.0254f,-0.0949f,0.0124f,0.0206f,-0.1048f,0.001f,0.023f,-0.0981f,-0.0198f,0.0222f,-0.0978f,0.0139f,-0.0418f,-0.1049f,-0.0202f,-0.0426f,-0.1052f,-0.0036f,-0.0425f,-0.1038f,0.0171f,-0.0325f,-0.1055f,0.02f,-0.0089f,-0.1056f,0.0135f,-0.0307f,-0.0841f,0.0164f,-0.0137f,-0.0845f,0.0135f,-0.0035f,-0.0821f,0.0021f,0.0025f,-0.0778f,-0.0079f,0.0045f,-0.0796f,-0.0172f,-0.0009f,-0.0791f,-0.0166f,-0.0368f,-0.079f,-0.0082f,-0.037f,-0.0796f,0.0033f,-0.0369f,-0.0777f,0.0109f,-0.0357f,-0.081f,-0.01f,0.0213f,-0.1085f,-0.0013f,0.0192f,-0.1115f,0.0073f,0.0174f,-0.1179f,0.014f,-0.0083f,-0.1183f,0.0113f,-0.0305f,-0.1181f,0.0094f,-0.0362f,-0.1173f,-0.0048f,-0.0368f,-0.1165f,-0.0165f,-0.0368f,-0.1184f,-0.0161f,0.0196f,-0.1117f,-0.0291f,0.0059f,-0.0915f,-0.0287f,0.0115f,-0.0996f,-0.0258f,0.0163f,-0.1085f,-0.0261f,-0.0341f,-0.1145f,-0.029f,-0.0384f,-0.1048f,-0.0286f,-0.0376f,-0.09f,-0.0268f,-0.039f,-0.083f,-0.0273f,-0.0027f,-0.0831f});
  }
}
protected class MFVec2f205 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2314f,0.0879f,0.21f,0.1541f,0.2053f,0.1595f,0.2104f,0.1443f,0.2271f,0.0958f,0.2224f,0.1067f,0.2032f,0.149f,0.2132f,0.1285f,0.2197f,0.1123f,0.2163f,0.1174f,0.227f,0.1089f,0.2165f,0.148f,0.2217f,0.1285f,0.2407f,0.0951f,0.2178f,0.1526f,0.2363f,0.0929f,0.2213f,0.1179f,0.2171f,0.1588f,0.2129f,0.1643f,0.21f,0.1541f,0.2053f,0.1595f,0.2032f,0.149f,0.2132f,0.1285f,0.2224f,0.1067f,0.2314f,0.0879f,0.2271f,0.0958f,0.2197f,0.1123f,0.2163f,0.1174f,0.2104f,0.1443f,0.227f,0.1089f,0.2217f,0.1285f,0.2165f,0.148f,0.2129f,0.1643f,0.2171f,0.1588f,0.2178f,0.1526f,0.2213f,0.1179f,0.2363f,0.0929f,0.2407f,0.0951f,0.2314f,0.0879f,0.2407f,0.0951f,0.2407f,0.0951f,0.2363f,0.0929f,0.2363f,0.0929f,0.2271f,0.0958f,0.2271f,0.0958f,0.2314f,0.0879f});
  }
}
protected class MFFloat206 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat207 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32208 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,4,12,-1,1,7,6,-1,6,0,1,-1,10,1,0,-1,0,12,10,-1,1,10,11,-1,11,2,1,-1,8,5,2,-1,2,3,8,-1,11,13,2,-1,12,4,15,-1,9,4,0,-1,0,6,9,-1,1,2,5,-1,5,7,1,-1,3,2,13,-1,13,14,3,-1,22,23,24,-1,22,24,25,-1,28,22,25,-1,13,11,10,-1,10,12,15,-1,13,10,15,-1,14,13,15,-1,16,17,18,-1,18,19,16,-1,21,16,19,-1,19,20,21,-1,3,14,17,-1,17,16,3,-1,14,15,18,-1,18,17,14,-1,15,4,19,-1,19,18,15,-1,4,9,20,-1,20,19,4,-1,28,25,26,-1,26,27,28,-1,8,3,16,-1,16,21,8,-1,6,7,23,-1,23,22,6,-1,7,5,24,-1,24,23,7,-1,5,8,25,-1,25,24,5,-1,8,21,26,-1,26,25,8,-1,21,20,27,-1,27,26,21,-1,20,9,28,-1,28,27,20,-1,9,6,22,-1,22,28,9,-1});
  }
}
protected class MFInt32209 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,12,-1,2,7,6,-1,6,0,2,-1,10,2,0,-1,0,12,10,-1,2,10,11,-1,11,3,2,-1,8,5,3,-1,3,4,8,-1,11,13,3,-1,12,1,15,-1,9,1,0,-1,0,6,9,-1,2,3,5,-1,5,7,2,-1,4,3,13,-1,13,14,4,-1,22,23,24,-1,22,24,25,-1,28,22,25,-1,13,11,10,-1,10,12,15,-1,13,10,15,-1,14,13,15,-1,16,17,18,-1,18,19,16,-1,21,16,19,-1,19,20,21,-1,4,14,17,-1,17,16,4,-1,14,15,18,-1,18,17,14,-1,15,1,19,-1,19,18,15,-1,1,9,20,-1,20,19,1,-1,28,25,26,-1,26,27,28,-1,8,4,16,-1,16,21,8,-1,6,7,23,-1,23,22,6,-1,7,5,24,-1,24,23,7,-1,5,8,25,-1,25,24,5,-1,8,21,26,-1,26,25,8,-1,21,20,27,-1,27,26,21,-1,20,9,28,-1,28,27,20,-1,9,6,22,-1,22,28,9,-1});
  }
}
protected class MFVec3f210 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0002f,-0.0335f,-0.0923f,0.0058f,-0.0259f,-0.0917f,0.0068f,-0.0029f,-0.093f,-0.007f,0.012f,-0.0911f,-0.0069f,-0.0366f,-0.0913f,0.0103f,-0.0045f,-0.0776f,0.0066f,-0.0335f,-0.0769f,0.0115f,-0.0255f,-0.0785f,-0.0057f,0.0039f,-0.0752f,-0.0057f,-0.0368f,-0.0749f,0.0043f,-0.027f,-0.1058f,0.0073f,-0.0037f,-0.1062f,0.0011f,-0.0352f,-0.1026f,0.0041f,0.0112f,-0.1038f,-0.0085f,0.0199f,-0.0993f,-0.008f,-0.037f,-0.0991f,-0.0128f,0.0097f,-0.0921f,-0.0136f,0.0133f,-0.0958f,-0.0132f,-0.0341f,-0.0957f,-0.0125f,-0.0338f,-0.0908f,-0.0116f,-0.0339f,-0.0771f,-0.0115f,0.0022f,-0.0774f,0.0053f,-0.0307f,-0.0688f,0.0093f,-0.0249f,-0.0702f,0.0082f,-0.0083f,-0.0694f,-0.0058f,-0.0018f,-0.067f,-0.0091f,-0.0027f,-0.0686f,-0.0092f,-0.0315f,-0.0684f,-0.0054f,-0.0332f,-0.0667f});
  }
}
protected class MFVec2f211 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2027f,0.1355f,0.2132f,0.1171f,0.1958f,0.1447f,0.1899f,0.1499f,0.2047f,0.1286f,0.1825f,0.1473f,0.1858f,0.1369f,0.1864f,0.1452f,0.1953f,0.1244f,0.2059f,0.1148f,0.21f,0.1541f,0.2053f,0.1595f,0.2104f,0.1443f,0.2032f,0.149f,0.2132f,0.1285f,0.2163f,0.1174f,0.2047f,0.1286f,0.2132f,0.1285f,0.2163f,0.1174f,0.2132f,0.1171f,0.2059f,0.1148f,0.1953f,0.1244f,0.1858f,0.1369f,0.1864f,0.1452f,0.1825f,0.1473f,0.1953f,0.1244f,0.1953f,0.1244f,0.2059f,0.1148f,0.2059f,0.1148f});
  }
}
protected class MFFloat212 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat213 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32214 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,14,11,-1,5,0,2,-1,2,7,5,-1,1,2,9,-1,9,10,1,-1,15,23,20,-1,20,8,15,-1,3,21,19,-1,19,4,3,-1,13,18,10,-1,10,4,13,-1,12,16,6,-1,6,1,12,-1,6,7,2,-1,2,1,6,-1,5,17,14,-1,14,0,5,-1,10,9,3,-1,3,4,10,-1,9,2,0,-1,0,11,9,-1,10,18,12,-1,12,1,10,-1,8,3,9,-1,9,11,8,-1,8,11,14,-1,14,15,8,-1,21,3,8,-1,8,20,21,-1,13,4,19,-1,19,22,13,-1,34,35,36,-1,34,36,39,-1,34,39,33,-1,40,41,42,-1,46,40,42,-1,45,46,42,-1,31,32,29,-1,29,30,31,-1,32,24,29,-1,24,25,28,-1,28,29,24,-1,25,26,27,-1,27,28,25,-1,18,13,25,-1,25,24,18,-1,13,22,26,-1,26,25,13,-1,45,42,43,-1,43,44,45,-1,23,15,28,-1,28,27,23,-1,15,14,29,-1,29,28,15,-1,14,17,30,-1,30,29,14,-1,39,36,37,-1,37,38,39,-1,16,12,32,-1,32,31,16,-1,12,18,24,-1,24,32,12,-1,5,7,34,-1,34,33,5,-1,7,6,35,-1,35,34,7,-1,6,16,36,-1,36,35,6,-1,16,31,37,-1,37,36,16,-1,31,30,38,-1,38,37,31,-1,30,17,39,-1,39,38,30,-1,17,5,33,-1,33,39,17,-1,21,20,41,-1,41,40,21,-1,20,23,42,-1,42,41,20,-1,23,27,43,-1,43,42,23,-1,27,26,44,-1,44,43,27,-1,26,22,45,-1,45,44,26,-1,22,19,46,-1,46,45,22,-1,19,21,40,-1,40,46,19,-1});
  }
}
protected class MFInt32215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,14,11,-1,5,1,2,-1,2,7,5,-1,3,2,9,-1,9,10,3,-1,15,23,20,-1,20,8,15,-1,0,21,19,-1,19,4,0,-1,13,18,10,-1,10,4,13,-1,12,16,6,-1,6,3,12,-1,6,7,2,-1,2,3,6,-1,5,17,14,-1,14,1,5,-1,10,9,0,-1,0,4,10,-1,9,2,1,-1,1,11,9,-1,10,18,12,-1,12,3,10,-1,8,0,9,-1,9,11,8,-1,8,11,14,-1,14,15,8,-1,21,0,8,-1,8,20,21,-1,13,4,19,-1,19,22,13,-1,34,35,36,-1,34,36,39,-1,34,39,33,-1,40,41,42,-1,46,40,42,-1,45,46,42,-1,31,32,29,-1,29,30,31,-1,32,24,14,-1,24,25,28,-1,28,29,24,-1,25,26,27,-1,27,28,25,-1,18,13,25,-1,25,24,18,-1,13,22,26,-1,26,25,13,-1,45,42,43,-1,43,44,45,-1,23,15,28,-1,28,27,23,-1,15,14,29,-1,29,28,15,-1,14,17,30,-1,30,29,14,-1,39,36,37,-1,37,38,39,-1,16,12,32,-1,32,31,16,-1,12,18,24,-1,24,32,12,-1,5,7,34,-1,34,33,5,-1,7,6,35,-1,35,34,7,-1,6,16,36,-1,36,35,6,-1,16,31,37,-1,37,36,16,-1,31,30,38,-1,38,37,31,-1,30,17,39,-1,39,38,30,-1,17,5,33,-1,33,39,17,-1,21,20,41,-1,41,40,21,-1,20,23,42,-1,42,41,20,-1,23,27,43,-1,43,42,23,-1,27,26,44,-1,44,43,27,-1,26,22,45,-1,45,44,26,-1,22,19,46,-1,46,45,22,-1,19,21,40,-1,40,46,19,-1});
  }
}
protected class MFVec3f216 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0125f,-0.0299f,-0.0707f,0.0138f,-0.0033f,-0.0641f,0.0169f,-0.0206f,-0.0652f,0.0108f,-0.0165f,-0.0978f,0.0091f,0.0036f,-0.0949f,0.0116f,-0.0281f,-0.0529f,0.0118f,-0.0067f,-0.0522f,0.0138f,-0.0206f,-0.0506f,0.0063f,-0.0246f,-0.0962f,0.0158f,-0.0189f,-0.0781f,0.0127f,-0.0005f,-0.076f,0.0118f,-0.0295f,-0.0796f,-0.0087f,-0.0003f,-0.0652f,-0.0078f,0.0091f,-0.0918f,-0.0088f,-0.0299f,-0.0675f,-0.007f,-0.028f,-0.0943f,-0.0105f,-0.0048f,-0.0525f,-0.0105f,-0.0281f,-0.0534f,-0.008f,0.0044f,-0.0779f,0.0076f,0.0043f,-0.1035f,0.0039f,-0.0246f,-0.1028f,0.0087f,-0.0166f,-0.1043f,-0.0084f,0.0128f,-0.101f,-0.0085f,-0.0279f,-0.1007f,-0.014f,0.0003f,-0.0796f,-0.0139f,0.005f,-0.0935f,-0.0139f,0.0063f,-0.0968f,-0.0141f,-0.0236f,-0.0965f,-0.0132f,-0.0236f,-0.0943f,-0.0149f,-0.0255f,-0.0678f,-0.016f,-0.0242f,-0.0578f,-0.016f,-0.0079f,-0.0572f,-0.0147f,-0.0044f,-0.067f,0.0078f,-0.0256f,-0.0479f,0.0097f,-0.0199f,-0.0459f,0.008f,-0.0094f,-0.0473f,-0.0105f,-0.008f,-0.0476f,-0.0152f,-0.0103f,-0.0515f,-0.0152f,-0.0226f,-0.052f,-0.0106f,-0.0256f,-0.0483f,0.0002f,-0.0153f,-0.1094f,-0.0027f,-0.0201f,-0.1082f,-0.0112f,-0.0223f,-0.1076f,-0.0131f,-0.0207f,-0.1058f,-0.0129f,0.0039f,-0.106f,-0.0113f,0.0065f,-0.1083f,-0.0007f,0.001f,-0.1086f});
  }
}
protected class MFVec2f217 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.177f,0.1457f,0.1567f,0.1378f,0.1506f,0.1431f,0.1539f,0.1386f,0.1751f,0.1447f,0.1523f,0.1336f,0.1493f,0.1348f,0.1463f,0.1377f,0.1689f,0.1382f,0.1638f,0.1444f,0.1645f,0.1416f,0.1607f,0.138f,0.1731f,0.1071f,0.1859f,0.1202f,0.175f,0.1048f,0.1985f,0.1126f,0.1682f,0.1025f,0.1699f,0.1017f,0.1795f,0.1136f,0.1825f,0.1473f,0.1858f,0.1369f,0.1864f,0.1452f,0.1953f,0.1244f,0.2059f,0.1148f,0.1795f,0.1136f,0.1859f,0.1202f,0.1953f,0.1244f,0.2059f,0.1148f,0.1985f,0.1126f,0.175f,0.1048f,0.1699f,0.1017f,0.1682f,0.1025f,0.1731f,0.1071f,0.1523f,0.1336f,0.1463f,0.1377f,0.1493f,0.1348f,0.1682f,0.1025f,0.1682f,0.1025f,0.1699f,0.1017f,0.1699f,0.1017f,0.1864f,0.1452f,0.1858f,0.1369f,0.2059f,0.1148f,0.2059f,0.1148f,0.1953f,0.1244f,0.1953f,0.1244f,0.1825f,0.1473f});
  }
}
protected class MFFloat218 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat219 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32220 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,10,17,-1,17,16,9,-1,11,1,2,-1,2,8,11,-1,7,8,2,-1,2,3,7,-1,7,3,4,-1,4,13,7,-1,12,13,4,-1,4,5,12,-1,5,6,0,-1,0,12,5,-1,0,6,1,-1,1,11,0,-1,14,20,19,-1,19,15,14,-1,14,15,17,-1,17,10,14,-1,9,16,18,-1,18,21,9,-1,7,10,9,-1,9,8,7,-1,8,9,21,-1,21,11,8,-1,12,20,14,-1,14,13,12,-1,13,14,10,-1,10,7,13,-1,11,21,22,-1,0,24,23,-1,23,12,0,-1,11,22,24,-1,24,0,11,-1,23,20,12,-1,39,40,41,-1,41,42,37,-1,39,41,37,-1,38,39,37,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,28,29,25,-1,25,26,27,-1,28,25,27,-1,35,36,30,-1,30,31,35,-1,17,15,26,-1,26,25,17,-1,15,19,27,-1,27,26,15,-1,19,18,28,-1,28,27,19,-1,18,16,29,-1,29,28,18,-1,16,17,25,-1,25,29,16,-1,19,20,31,-1,31,30,19,-1,20,23,32,-1,32,31,20,-1,23,24,33,-1,33,32,23,-1,24,22,34,-1,34,33,24,-1,22,21,35,-1,35,34,22,-1,21,18,36,-1,36,35,21,-1,18,19,30,-1,30,36,18,-1,2,1,38,-1,38,37,2,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,4,41,-1,41,40,5,-1,4,3,42,-1,42,41,4,-1,3,2,37,-1,37,42,3,-1});
  }
}
protected class MFInt32221 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,29,-1,29,28,2,-1,11,5,4,-1,4,13,11,-1,10,13,4,-1,4,6,10,-1,10,6,7,-1,7,12,10,-1,14,12,7,-1,7,8,14,-1,8,9,3,-1,3,14,8,-1,3,9,5,-1,5,11,3,-1,0,33,31,-1,31,27,0,-1,0,27,29,-1,29,1,0,-1,2,28,30,-1,30,35,2,-1,15,18,17,-1,17,16,15,-1,16,17,34,-1,34,19,16,-1,20,32,22,-1,22,21,20,-1,21,22,24,-1,24,23,21,-1,19,34,36,-1,25,39,37,-1,37,20,25,-1,19,36,38,-1,38,26,19,-1,37,32,20,-1,54,55,56,-1,56,57,52,-1,54,56,52,-1,53,54,52,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,43,44,40,-1,40,41,42,-1,43,40,42,-1,50,51,45,-1,45,46,50,-1,29,27,41,-1,41,40,29,-1,27,31,42,-1,42,41,27,-1,31,30,43,-1,43,42,31,-1,30,28,44,-1,44,43,30,-1,28,29,40,-1,40,44,28,-1,31,33,46,-1,46,45,31,-1,32,37,47,-1,47,46,32,-1,37,39,48,-1,48,47,37,-1,38,36,49,-1,49,48,38,-1,36,34,50,-1,50,49,36,-1,35,30,51,-1,51,50,35,-1,30,31,45,-1,45,51,30,-1,4,5,53,-1,53,52,4,-1,5,9,54,-1,54,53,5,-1,9,8,55,-1,55,54,9,-1,8,7,56,-1,56,55,8,-1,7,6,57,-1,57,56,7,-1,6,4,52,-1,52,57,6,-1});
  }
}
protected class MFVec3f222 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0115f,-0.0081f,-0.0901f,-0.0116f,-0.0009f,-0.08f,0.0116f,-0.0006f,-0.0797f,0.0129f,-0.0113f,-0.0795f,0.0111f,-0.0211f,-0.0804f,-0.0118f,-0.0211f,-0.0803f,-0.0133f,-0.0116f,-0.0797f,0.0112f,-0.0107f,-0.09f,0.0099f,0.0018f,-0.0923f,0.0085f,0.0012f,-0.0965f,0.0104f,-0.0118f,-0.0955f,-0.0102f,0.0014f,-0.0916f,-0.0101f,-0.0189f,-0.0913f,0.0096f,-0.0189f,-0.0916f,0.008f,-0.0185f,-0.097f,0.0091f,-0.0193f,-0.1024f,0.0093f,0.0021f,-0.1016f,0.0113f,-0.0118f,-0.1f,-0.013f,0.004f,-0.102f,-0.013f,-0.0193f,-0.1028f,-0.0128f,-0.0185f,-0.0961f,-0.0129f,0.0016f,-0.0962f,-0.0129f,-0.0007f,-0.0917f,-0.0133f,-0.0147f,-0.0914f,-0.013f,-0.0074f,-0.0904f,0.0088f,-0.0114f,-0.1055f,0.0073f,-0.0163f,-0.1077f,-0.0099f,-0.0163f,-0.1079f,-0.0098f,0.0011f,-0.1072f,0.0072f,-0.0003f,-0.1072f,-0.0172f,-0.0145f,-0.1026f,-0.0171f,-0.0141f,-0.0988f,-0.0174f,-0.0119f,-0.096f,-0.0172f,-0.0077f,-0.0954f,-0.0172f,-0.0038f,-0.0962f,-0.0171f,-0.0025f,-0.0988f,-0.0172f,-0.001f,-0.1021f,0.0089f,-0.0037f,-0.0746f,-0.0091f,-0.004f,-0.0749f,-0.0103f,-0.0117f,-0.0745f,-0.0093f,-0.0183f,-0.075f,0.0086f,-0.0183f,-0.0751f,0.0099f,-0.0114f,-0.0743f});
  }
}
protected class MFVec2f223 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.148f,0.1294f,0.142f,0.1322f,0.1446f,0.131f,0.1613f,0.0957f,0.1341f,0.1263f,0.1554f,0.0919f,0.1317f,0.1272f,0.1363f,0.1268f,0.1571f,0.0927f,0.1559f,0.0889f,0.1392f,0.1292f,0.16f,0.0958f,0.1443f,0.128f,0.1415f,0.1284f,0.1616f,0.0962f,0.1346f,0.0953f,0.1273f,0.0961f,0.126f,0.0891f,0.1339f,0.0889f,0.1175f,0.0992f,0.228f,0.0809f,0.2186f,0.0857f,0.2172f,0.0848f,0.2097f,0.0859f,0.2098f,0.0901f,0.2285f,0.0738f,0.1152f,0.1058f,0.1523f,0.1336f,0.1493f,0.1348f,0.1463f,0.1377f,0.1682f,0.1025f,0.1699f,0.1017f,0.2293f,0.0837f,0.1648f,0.0986f,0.112f,0.093f,0.1632f,0.098f,0.113f,0.0993f,0.2302f,0.0796f,0.1153f,0.1053f,0.2293f,0.0736f,0.1463f,0.1377f,0.1523f,0.1336f,0.1699f,0.1017f,0.1682f,0.1025f,0.1493f,0.1348f,0.1699f,0.1017f,0.1648f,0.0986f,0.2302f,0.0796f,0.2293f,0.0736f,0.113f,0.0993f,0.112f,0.093f,0.1682f,0.1025f,0.1341f,0.1263f,0.1554f,0.0919f,0.1559f,0.0889f,0.1571f,0.0927f,0.1363f,0.1268f,0.1317f,0.1272f});
  }
}
protected class MFFloat224 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat225 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32226 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,2,5,-1,5,4,3,-1,1,0,5,-1,5,2,1,-1,1,7,6,-1,6,0,1,-1,8,7,1,-1,1,2,8,-1,3,9,8,-1,8,2,3,-1,10,9,3,-1,3,4,10,-1,11,10,4,-1,4,5,11,-1,0,6,11,-1,11,5,0,-1,7,13,12,-1,12,6,7,-1,14,13,7,-1,7,8,14,-1,9,15,14,-1,14,8,9,-1,16,15,9,-1,9,10,16,-1,17,16,10,-1,10,11,17,-1,6,12,17,-1,17,11,6,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,12,13,19,-1,19,18,12,-1,13,14,20,-1,20,19,13,-1,14,15,21,-1,21,20,14,-1,15,16,22,-1,22,21,15,-1,16,17,23,-1,23,22,16,-1,17,12,18,-1,18,23,17,-1});
  }
}
protected class MFInt32227 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,13,12,15,-1,15,14,13,-1,8,6,5,-1,5,3,8,-1,0,9,8,-1,8,3,0,-1,10,9,0,-1,0,1,10,-1,11,10,1,-1,1,2,11,-1,4,7,11,-1,11,2,4,-1,12,18,16,-1,16,15,12,-1,20,19,6,-1,6,8,20,-1,9,21,20,-1,20,8,9,-1,22,21,9,-1,9,10,22,-1,23,22,10,-1,10,11,23,-1,7,17,23,-1,23,11,7,-1,26,27,28,-1,28,29,24,-1,26,28,24,-1,25,26,24,-1,16,18,25,-1,25,24,16,-1,19,20,26,-1,26,25,19,-1,20,21,27,-1,27,26,20,-1,21,22,28,-1,28,27,21,-1,22,23,29,-1,29,28,22,-1,23,17,24,-1,24,29,23,-1});
  }
}
protected class MFVec3f228 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0079f,-0.0024f,-0.0851f,0.0078f,-0.0021f,-0.0846f,0.0076f,-0.0105f,-0.0814f,0.0075f,-0.0174f,-0.0857f,-0.0077f,-0.0174f,-0.0862f,-0.0081f,-0.0105f,-0.0818f,-0.0109f,-0.0007f,-0.0928f,0.0113f,-0.0003f,-0.0928f,0.0126f,-0.0096f,-0.0919f,0.0111f,-0.0185f,-0.0929f,-0.0108f,-0.0185f,-0.0926f,-0.0127f,-0.0124f,-0.0919f,-0.0116f,0.0013f,-0.1017f,0.0116f,0.0017f,-0.1014f,0.0129f,-0.009f,-0.1012f,0.0111f,-0.0188f,-0.1021f,-0.0119f,-0.0188f,-0.102f,-0.0133f,-0.0093f,-0.1014f,-0.009f,-0.0015f,-0.1072f,0.009f,-0.0013f,-0.1069f,0.0099f,-0.0088f,-0.1066f,0.0086f,-0.0157f,-0.1075f,-0.0092f,-0.0157f,-0.1074f,-0.0102f,-0.0092f,-0.1068f});
  }
}
protected class MFVec2f229 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1287f,0.113f,0.1423f,0.0921f,0.1396f,0.0889f,0.1257f,0.1107f,0.1415f,0.0903f,0.1274f,0.1123f,0.1297f,0.1214f,0.15f,0.0896f,0.1273f,0.1223f,0.1313f,0.1227f,0.1521f,0.0901f,0.1498f,0.0859f,0.0527f,0.151f,0.0282f,0.1325f,0.0446f,0.0894f,0.0746f,0.0899f,0.1016f,0.0977f,0.1554f,0.0919f,0.0779f,0.162f,0.1341f,0.1263f,0.1317f,0.1272f,0.1363f,0.1268f,0.1571f,0.0927f,0.1559f,0.0889f,0.1554f,0.0919f,0.0779f,0.162f,0.1317f,0.1272f,0.1363f,0.1268f,0.1571f,0.0927f,0.1559f,0.0889f});
  }
}
protected class MFFloat230 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat231 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32232 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,4,9,-1,9,8,1,-1,5,7,2,-1,2,0,5,-1,4,1,3,-1,3,6,4,-1,10,11,5,-1,5,0,10,-1,32,33,36,-1,36,37,32,-1,24,25,28,-1,28,29,24,-1,19,20,21,-1,19,21,22,-1,19,22,23,-1,19,23,18,-1,13,14,15,-1,13,15,16,-1,13,16,17,-1,13,17,12,-1,9,4,13,-1,13,12,9,-1,4,6,14,-1,14,13,4,-1,24,29,30,-1,30,31,24,-1,7,5,16,-1,16,15,7,-1,5,11,17,-1,17,16,5,-1,36,33,34,-1,34,35,36,-1,3,1,19,-1,19,18,3,-1,1,8,20,-1,20,19,1,-1,32,37,38,-1,38,39,32,-1,10,0,22,-1,22,21,10,-1,0,2,23,-1,23,22,0,-1,28,25,26,-1,26,27,28,-1,6,3,25,-1,25,24,6,-1,3,18,26,-1,26,25,3,-1,18,23,27,-1,27,26,18,-1,23,2,28,-1,28,27,23,-1,2,7,29,-1,29,28,2,-1,7,15,30,-1,30,29,7,-1,15,14,31,-1,31,30,15,-1,14,6,24,-1,24,31,14,-1,8,9,33,-1,33,32,8,-1,9,12,34,-1,34,33,9,-1,12,17,35,-1,35,34,12,-1,17,11,36,-1,36,35,17,-1,11,10,37,-1,37,36,11,-1,10,21,38,-1,38,37,10,-1,21,20,39,-1,39,38,21,-1,20,8,32,-1,32,39,20,-1});
  }
}
protected class MFInt32233 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,4,9,-1,9,8,0,-1,5,7,2,-1,2,1,5,-1,4,0,3,-1,3,6,4,-1,10,11,5,-1,5,1,10,-1,32,33,36,-1,36,37,32,-1,24,25,28,-1,28,29,24,-1,19,20,21,-1,19,21,22,-1,19,22,23,-1,19,23,18,-1,13,14,15,-1,13,15,16,-1,13,16,17,-1,13,17,12,-1,9,4,13,-1,13,12,9,-1,4,6,14,-1,14,13,4,-1,24,29,30,-1,30,31,24,-1,7,5,16,-1,16,15,7,-1,5,11,17,-1,17,16,5,-1,36,33,34,-1,34,35,36,-1,3,0,19,-1,19,18,3,-1,0,8,20,-1,20,19,0,-1,32,37,38,-1,38,39,32,-1,10,1,22,-1,22,21,10,-1,1,2,23,-1,23,22,1,-1,28,25,26,-1,26,27,28,-1,6,3,25,-1,25,24,6,-1,3,18,26,-1,26,25,3,-1,18,23,27,-1,27,26,18,-1,23,2,28,-1,28,27,23,-1,2,7,29,-1,29,28,2,-1,7,15,30,-1,30,29,7,-1,15,14,31,-1,31,30,15,-1,14,6,24,-1,24,31,14,-1,8,9,33,-1,33,32,8,-1,9,12,34,-1,34,33,9,-1,12,17,35,-1,35,34,12,-1,17,11,36,-1,36,35,17,-1,11,10,37,-1,37,36,11,-1,10,21,38,-1,38,37,10,-1,21,20,39,-1,39,38,21,-1,20,8,32,-1,32,39,20,-1});
  }
}
protected class MFVec3f234 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0056f,-0.0382f,-0.095f,-0.0061f,0.0155f,-0.0958f,-0.0056f,-0.0385f,-0.0846f,-0.0067f,0.0082f,-0.0843f,0.0071f,0.0106f,-0.0941f,0.0072f,-0.038f,-0.0944f,0.0084f,0.0025f,-0.0782f,0.0083f,-0.0382f,-0.0779f,-0.006f,0.0215f,-0.1039f,0.0056f,0.0185f,-0.1023f,-0.0058f,-0.0386f,-0.104f,0.006f,-0.0385f,-0.1021f,0.0109f,0.0059f,-0.1001f,0.0119f,0.0029f,-0.0962f,0.0131f,-0.0032f,-0.0815f,0.0131f,-0.0325f,-0.0812f,0.0122f,-0.0324f,-0.095f,0.0113f,-0.0326f,-0.1f,-0.0134f,0.0042f,-0.0867f,-0.0128f,0.0099f,-0.0972f,-0.0127f,0.0128f,-0.1017f,-0.0126f,-0.0332f,-0.1018f,-0.0124f,-0.0329f,-0.0951f,-0.0123f,-0.0331f,-0.087f,0.0056f,-0.0019f,-0.0712f,-0.0086f,0.0036f,-0.0775f,-0.0108f,0.001f,-0.0783f,-0.0099f,-0.0304f,-0.0785f,-0.0066f,-0.0341f,-0.0774f,0.0058f,-0.0338f,-0.0704f,0.0078f,-0.0303f,-0.0717f,0.0078f,-0.0059f,-0.072f,-0.0051f,0.0183f,-0.1102f,0.0045f,0.0158f,-0.1087f,0.0086f,0.005f,-0.1071f,0.009f,-0.0312f,-0.107f,0.0058f,-0.0355f,-0.1083f,-0.0049f,-0.0356f,-0.11f,-0.0094f,-0.0313f,-0.1086f,-0.0095f,0.0114f,-0.1085f});
  }
}
protected class MFVec2f235 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2179f,0.1044f,0.2186f,0.1086f,0.2128f,0.1035f,0.2098f,0.0996f,0.2047f,0.1286f,0.2132f,0.1171f,0.1953f,0.1244f,0.2059f,0.1148f,0.2224f,0.1067f,0.2132f,0.1285f,0.2197f,0.1123f,0.2163f,0.1174f,0.2132f,0.1285f,0.2047f,0.1286f,0.1953f,0.1244f,0.1953f,0.1244f,0.2132f,0.1171f,0.2163f,0.1174f,0.2098f,0.0996f,0.2179f,0.1044f,0.2224f,0.1067f,0.2224f,0.1067f,0.2186f,0.1086f,0.2128f,0.1035f,0.1953f,0.1244f,0.2098f,0.0996f,0.2098f,0.0996f,0.2128f,0.1035f,0.2098f,0.0996f,0.1953f,0.1244f,0.1953f,0.1244f,0.1953f,0.1244f,0.2224f,0.1067f,0.2132f,0.1285f,0.2132f,0.1285f,0.2163f,0.1174f,0.2132f,0.1285f,0.2224f,0.1067f,0.2224f,0.1067f,0.2224f,0.1067f});
  }
}
protected class MFFloat236 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat237 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32238 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,4,7,-1,7,15,12,-1,0,2,9,-1,9,8,0,-1,1,3,11,-1,11,10,1,-1,5,6,2,-1,2,0,5,-1,8,9,3,-1,3,1,8,-1,14,4,12,-1,12,13,14,-1,18,14,13,-1,13,17,18,-1,42,43,38,-1,38,39,42,-1,46,47,50,-1,50,51,46,-1,29,30,34,-1,34,35,29,-1,19,20,25,-1,25,26,19,-1,28,19,26,-1,26,27,28,-1,21,22,23,-1,23,24,21,-1,37,29,35,-1,35,36,37,-1,30,31,34,-1,20,21,24,-1,24,25,20,-1,31,32,33,-1,33,34,31,-1,3,9,20,-1,20,19,3,-1,9,2,21,-1,21,20,9,-1,2,6,22,-1,22,21,2,-1,42,39,40,-1,40,41,42,-1,7,4,24,-1,24,23,7,-1,4,16,25,-1,25,24,4,-1,16,14,26,-1,26,25,16,-1,14,18,27,-1,27,26,14,-1,50,47,48,-1,48,49,50,-1,11,3,19,-1,19,28,11,-1,0,8,30,-1,30,29,0,-1,8,1,31,-1,31,30,8,-1,1,10,32,-1,32,31,1,-1,46,51,52,-1,52,53,46,-1,17,13,34,-1,34,33,17,-1,13,12,35,-1,35,34,13,-1,12,15,36,-1,36,35,12,-1,38,43,44,-1,44,45,38,-1,5,0,29,-1,29,37,5,-1,15,7,39,-1,39,38,15,-1,7,23,40,-1,40,39,7,-1,23,22,41,-1,41,40,23,-1,22,6,42,-1,42,41,22,-1,6,5,43,-1,43,42,6,-1,5,37,44,-1,44,43,5,-1,37,36,45,-1,45,44,37,-1,36,15,38,-1,38,45,36,-1,10,11,47,-1,47,46,10,-1,11,28,48,-1,48,47,11,-1,28,27,49,-1,49,48,28,-1,27,18,50,-1,50,49,27,-1,18,17,51,-1,51,50,18,-1,17,33,52,-1,52,51,17,-1,33,32,53,-1,53,52,33,-1,32,10,46,-1,46,53,32,-1});
  }
}
protected class MFInt32239 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,10,-1,10,7,1,-1,2,3,12,-1,12,11,2,-1,5,6,16,-1,16,15,5,-1,8,9,3,-1,3,2,8,-1,11,12,6,-1,6,5,11,-1,4,0,1,-1,1,13,4,-1,17,4,13,-1,13,14,17,-1,45,46,41,-1,41,42,45,-1,49,50,53,-1,53,54,49,-1,32,33,37,-1,37,38,32,-1,22,23,28,-1,28,29,22,-1,31,22,29,-1,29,30,31,-1,24,25,26,-1,26,27,24,-1,40,32,38,-1,38,39,40,-1,33,34,21,-1,23,24,27,-1,27,28,23,-1,34,35,36,-1,36,37,34,-1,6,12,23,-1,23,22,6,-1,12,3,24,-1,24,23,12,-1,3,9,25,-1,25,24,3,-1,45,42,43,-1,43,44,45,-1,10,0,27,-1,27,26,10,-1,20,18,28,-1,28,27,20,-1,18,19,29,-1,29,28,18,-1,4,17,30,-1,30,29,4,-1,53,50,51,-1,51,52,53,-1,16,6,22,-1,22,31,16,-1,2,11,33,-1,33,32,2,-1,11,5,34,-1,34,33,11,-1,5,15,35,-1,35,34,5,-1,49,54,55,-1,55,56,49,-1,14,13,37,-1,37,36,14,-1,13,1,38,-1,38,37,13,-1,1,7,39,-1,39,38,1,-1,41,46,47,-1,47,48,41,-1,8,2,32,-1,32,40,8,-1,7,10,42,-1,42,41,7,-1,10,26,43,-1,43,42,10,-1,26,25,44,-1,44,43,26,-1,25,9,45,-1,45,44,25,-1,9,8,46,-1,46,45,9,-1,8,40,47,-1,47,46,8,-1,40,39,48,-1,48,47,40,-1,39,7,41,-1,41,48,39,-1,15,16,50,-1,50,49,15,-1,16,31,51,-1,51,50,16,-1,31,30,52,-1,52,51,31,-1,30,17,53,-1,53,52,30,-1,17,14,54,-1,54,53,17,-1,14,36,55,-1,55,54,14,-1,36,35,56,-1,56,55,36,-1,35,15,49,-1,49,56,35,-1});
  }
}
protected class MFVec3f240 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0086f,-0.0029f,-0.0634f,-0.0077f,0.0089f,-0.0897f,0.0068f,-0.0031f,-0.0621f,0.0078f,0.0063f,-0.0887f,0.0067f,-0.0328f,-0.0644f,-0.0089f,-0.0074f,-0.0511f,0.0051f,-0.0077f,-0.0494f,0.0051f,-0.031f,-0.0502f,-0.0079f,0.003f,-0.0767f,0.0076f,0.0016f,-0.0748f,-0.0079f,0.0156f,-0.1039f,0.0072f,0.0099f,-0.0979f,-0.0076f,-0.0328f,-0.0657f,-0.0066f,-0.0313f,-0.0914f,0.0085f,-0.0309f,-0.0911f,-0.0088f,-0.0309f,-0.0519f,0.0085f,-0.0309f,-0.0911f,-0.0068f,-0.0311f,-0.1042f,0.0071f,-0.0308f,-0.0975f,0.0132f,0.0025f,-0.0898f,0.0132f,-0.0022f,-0.0759f,0.0124f,-0.0069f,-0.0633f,0.011f,-0.0105f,-0.0533f,0.011f,-0.0274f,-0.0539f,0.0123f,-0.0287f,-0.0643f,0.014f,-0.0268f,-0.0907f,0.014f,-0.0268f,-0.0909f,0.013f,-0.0268f,-0.0934f,0.0132f,0.004f,-0.0936f,-0.0137f,-0.0057f,-0.0646f,-0.013f,0.0003f,-0.078f,-0.0129f,0.0062f,-0.0911f,-0.013f,0.0111f,-0.1013f,-0.0121f,-0.0285f,-0.1016f,-0.0119f,-0.0286f,-0.0914f,-0.0128f,-0.0301f,-0.0659f,-0.0139f,-0.0286f,-0.0548f,-0.0139f,-0.0095f,-0.0541f,-0.0086f,-0.028f,-0.0475f,0.0042f,-0.0281f,-0.0458f,0.0081f,-0.0257f,-0.0462f,0.0081f,-0.0128f,-0.0458f,0.0043f,-0.011f,-0.0452f,-0.0087f,-0.0107f,-0.0469f,-0.0115f,-0.0119f,-0.0481f,-0.0115f,-0.0267f,-0.0486f,-0.0052f,0.0121f,-0.1122f,0.008f,0.007f,-0.1061f,0.0127f,0.0024f,-0.1029f,0.0125f,-0.0249f,-0.1027f,0.0086f,-0.0275f,-0.1055f,-0.004f,-0.0278f,-0.112f,-0.007f,-0.0263f,-0.1105f,-0.0079f,0.0095f,-0.1102f});
  }
}
protected class MFVec2f241 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.175f,0.1048f,0.1833f,0.0898f,0.1856f,0.0872f,0.1731f,0.1071f,0.1985f,0.1126f,0.2017f,0.0948f,0.1859f,0.1202f,0.1801f,0.0847f,0.1811f,0.0824f,0.1682f,0.1025f,0.1699f,0.1017f,0.1937f,0.091f,0.1795f,0.1136f,0.2068f,0.0986f,0.2128f,0.1035f,0.2098f,0.0996f,0.1953f,0.1244f,0.2059f,0.1148f,0.1795f,0.1136f,0.1859f,0.1202f,0.1731f,0.1071f,0.2017f,0.0948f,0.1859f,0.1202f,0.1795f,0.1136f,0.1731f,0.1071f,0.1682f,0.1025f,0.1682f,0.1025f,0.1731f,0.1071f,0.1795f,0.1136f,0.1859f,0.1202f,0.1953f,0.1244f,0.1953f,0.1244f,0.1856f,0.0872f,0.1937f,0.091f,0.2017f,0.0948f,0.2098f,0.0996f,0.2098f,0.0996f,0.2017f,0.0948f,0.1856f,0.0872f,0.1811f,0.0824f,0.1811f,0.0824f,0.1811f,0.0824f,0.1682f,0.1025f,0.1682f,0.1025f,0.1682f,0.1025f,0.1682f,0.1025f,0.1811f,0.0824f,0.1811f,0.0824f,0.1811f,0.0824f,0.2098f,0.0996f,0.1953f,0.1244f,0.1953f,0.1244f,0.1953f,0.1244f,0.1953f,0.1244f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f});
  }
}
protected class MFFloat242 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat243 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32244 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,18,20,-1,20,6,8,-1,14,21,19,-1,19,11,14,-1,6,20,1,-1,19,15,11,-1,0,14,3,-1,3,2,0,-1,12,17,16,-1,16,8,12,-1,15,17,12,-1,12,11,15,-1,6,1,2,-1,2,3,6,-1,0,21,14,-1,16,18,8,-1,3,4,5,-1,5,6,3,-1,6,5,7,-1,7,8,6,-1,10,11,12,-1,12,9,10,-1,14,11,10,-1,10,13,14,-1,13,4,3,-1,3,14,13,-1,8,7,9,-1,9,12,8,-1,19,21,24,-1,24,23,19,-1,22,25,20,-1,20,18,22,-1,36,30,31,-1,35,36,31,-1,34,35,31,-1,13,10,9,-1,9,7,5,-1,13,9,5,-1,4,13,5,-1,29,26,27,-1,27,28,29,-1,37,41,42,-1,42,43,37,-1,31,32,33,-1,33,34,31,-1,39,40,41,-1,38,39,41,-1,37,38,41,-1,25,22,27,-1,27,26,25,-1,22,23,28,-1,28,27,22,-1,23,24,29,-1,29,28,23,-1,24,25,26,-1,26,29,24,-1,15,19,31,-1,31,30,15,-1,19,23,32,-1,32,31,19,-1,23,22,33,-1,33,32,23,-1,22,18,34,-1,34,33,22,-1,18,16,35,-1,35,34,18,-1,16,17,36,-1,36,35,16,-1,17,15,30,-1,30,36,17,-1,21,0,38,-1,38,37,21,-1,0,2,39,-1,39,38,0,-1,2,1,40,-1,40,39,2,-1,1,20,41,-1,41,40,1,-1,20,25,42,-1,42,41,20,-1,25,24,43,-1,43,42,25,-1,24,21,37,-1,37,43,24,-1});
  }
}
protected class MFInt32245 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,24,30,-1,30,0,1,-1,3,31,25,-1,25,2,3,-1,0,30,4,-1,25,26,2,-1,9,3,5,-1,5,10,9,-1,7,28,27,-1,27,1,7,-1,26,29,8,-1,8,2,26,-1,0,4,11,-1,11,6,0,-1,9,31,3,-1,27,24,1,-1,12,13,14,-1,14,15,12,-1,15,14,16,-1,16,17,15,-1,19,20,21,-1,21,18,19,-1,23,20,19,-1,19,22,23,-1,22,13,12,-1,12,23,22,-1,17,16,18,-1,18,21,17,-1,35,34,38,-1,38,37,35,-1,36,39,33,-1,33,32,36,-1,50,44,45,-1,49,50,45,-1,48,49,45,-1,22,19,18,-1,18,16,14,-1,22,18,14,-1,13,22,14,-1,43,40,41,-1,41,42,43,-1,51,55,56,-1,56,57,51,-1,45,46,47,-1,47,48,45,-1,53,54,55,-1,52,53,55,-1,51,52,55,-1,39,36,41,-1,41,40,39,-1,36,37,42,-1,42,41,36,-1,37,38,43,-1,43,42,37,-1,38,39,40,-1,40,43,38,-1,26,25,45,-1,45,44,26,-1,35,37,46,-1,46,45,35,-1,37,36,47,-1,47,46,37,-1,36,32,48,-1,48,47,36,-1,24,27,49,-1,49,48,24,-1,27,28,50,-1,50,49,27,-1,29,26,44,-1,44,50,29,-1,31,9,52,-1,52,51,31,-1,9,10,53,-1,53,52,9,-1,11,4,54,-1,54,53,11,-1,4,30,55,-1,55,54,4,-1,33,39,56,-1,56,55,33,-1,39,38,57,-1,57,56,39,-1,38,34,51,-1,51,57,38,-1});
  }
}
protected class MFVec3f246 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0075f,-0.0013f,-0.0959f,0.0071f,-0.0153f,-0.0956f,0.0074f,-0.008f,-0.0946f,0.0061f,-0.0094f,-0.0946f,0.0053f,-0.0127f,-0.0846f,0.0043f,-0.0209f,-0.085f,0.0052f,-0.0185f,-0.0958f,-0.0063f,-0.0207f,-0.0864f,-0.0054f,-0.0187f,-0.097f,-0.0076f,-0.0115f,-0.086f,-0.0064f,-0.0006f,-0.0863f,-0.0054f,0.0008f,-0.0972f,-0.0069f,-0.0103f,-0.0962f,0.0044f,-0.0003f,-0.085f,0.0049f,0.0007f,-0.096f,-0.0078f,-0.0012f,-0.0979f,-0.0078f,-0.0156f,-0.0978f,-0.0079f,-0.0085f,-0.0966f,-0.0068f,-0.0191f,-0.1024f,-0.007f,0.0009f,-0.1028f,0.0076f,-0.019f,-0.1003f,0.0075f,0.001f,-0.1004f,-0.0065f,-0.0198f,-0.1086f,-0.0066f,0.0037f,-0.1078f,0.0074f,0.0034f,-0.1062f,0.0074f,-0.0198f,-0.107f,0.0054f,-0.017f,-0.1128f,-0.0032f,-0.0169f,-0.1138f,-0.0032f,0.0012f,-0.1132f,0.0054f,0.001f,-0.1122f,-0.012f,-0.003f,-0.1022f,-0.0115f,-0.0013f,-0.106f,-0.0113f,-0.0003f,-0.1077f,-0.0113f,-0.0172f,-0.1083f,-0.0113f,-0.0168f,-0.1054f,-0.012f,-0.0143f,-0.1021f,-0.0121f,-0.0086f,-0.1011f,0.0123f,-0.0013f,-0.1028f,0.0123f,-0.003f,-0.0996f,0.0123f,-0.0081f,-0.0986f,0.012f,-0.0139f,-0.0994f,0.0124f,-0.0166f,-0.1028f,0.0122f,-0.017f,-0.1058f,0.0122f,-0.0003f,-0.1052f});
  }
}
protected class MFVec2f247 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2327f,0.0796f,0.2439f,0.0803f,0.2062f,0.05f,0.2147f,0.0491f,0.2302f,0.0796f,0.2205f,0.0532f,0.2301f,0.0734f,0.2486f,0.0743f,0.2013f,0.0552f,0.2187f,0.0481f,0.221f,0.0541f,0.2293f,0.0736f,0.1746f,0.075f,0.1709f,0.0678f,0.1706f,0.0686f,0.1745f,0.076f,0.1824f,0.0523f,0.1886f,0.0572f,0.183f,0.0511f,0.1834f,0.0508f,0.1882f,0.0556f,0.1885f,0.0566f,0.1716f,0.0676f,0.1748f,0.0736f,0.2444f,0.0847f,0.2027f,0.042f,0.2022f,0.0485f,0.2464f,0.0799f,0.2486f,0.0741f,0.2011f,0.0554f,0.2293f,0.0837f,0.2177f,0.0418f,0.1769f,0.0796f,0.1648f,0.0986f,0.1632f,0.098f,0.1766f,0.0777f,0.1801f,0.0847f,0.1811f,0.0824f,0.1682f,0.1025f,0.1699f,0.1017f,0.1699f,0.1017f,0.1801f,0.0847f,0.1811f,0.0824f,0.1682f,0.1025f,0.2022f,0.0485f,0.2027f,0.042f,0.1811f,0.0824f,0.1801f,0.0847f,0.1769f,0.0796f,0.2464f,0.0799f,0.2486f,0.0741f,0.1632f,0.098f,0.2187f,0.0481f,0.221f,0.0541f,0.2302f,0.0796f,0.2293f,0.0837f,0.1699f,0.1017f,0.1682f,0.1025f});
  }
}
protected class MFFloat248 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat249 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32250 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,7,6,-1,6,1,0,-1,2,8,7,-1,7,0,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,1,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1});
  }
}
protected class MFInt32251 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,8,-1,8,1,0,-1,2,10,9,-1,9,0,2,-1,11,10,2,-1,2,3,11,-1,4,13,11,-1,11,3,4,-1,14,12,6,-1,6,5,14,-1,8,15,7,-1,7,1,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,13,20,-1,20,19,11,-1,12,14,21,-1,21,20,12,-1,15,8,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,7,24,-1,24,23,1,-1,5,6,25,-1,25,24,5,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1});
  }
}
protected class MFVec3f252 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.007f,-0.0191f,-0.0918f,0.0076f,-0.0108f,-0.0915f,-0.007f,-0.0191f,-0.0933f,-0.008f,-0.0108f,-0.0933f,-0.0068f,-0.0042f,-0.0933f,0.0064f,-0.0036f,-0.0917f,0.0071f,-0.0104f,-0.1008f,0.006f,-0.0185f,-0.1012f,-0.0045f,-0.0184f,-0.1025f,-0.0058f,-0.0092f,-0.1022f,-0.0046f,0.0017f,-0.1025f,0.0062f,0.002f,-0.1012f,0.006f,-0.0103f,-0.106f,0.0052f,-0.0168f,-0.1063f,-0.0025f,-0.0167f,-0.1074f,-0.0035f,-0.0091f,-0.107f,-0.0025f,0.0001f,-0.1073f,0.0052f,0.0003f,-0.1064f,0.0035f,-0.0158f,-0.0888f,0.0039f,-0.0109f,-0.0885f,0.0032f,-0.0071f,-0.0887f,-0.0044f,-0.0074f,-0.0896f,-0.005f,-0.0109f,-0.0896f,-0.0044f,-0.0158f,-0.0896f});
  }
}
protected class MFVec2f253 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1653f,0.0654f,0.1636f,0.063f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1293f,0.0261f,0.0949f,0.0775f,0.1651f,0.0639f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1291f,0.0918f,0.1834f,0.0508f,0.1554f,0.0532f,0.1716f,0.0676f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1834f,0.0508f,0.1554f,0.0532f,0.1653f,0.0654f,0.1636f,0.063f,0.1651f,0.0639f,0.0949f,0.0775f,0.1792f,0.0409f,0.1795f,0.0453f});
  }
}
protected class MFFloat254 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat255 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32256 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,4,2,-1,2,1,5,-1,0,6,7,-1,7,1,0,-1,3,8,6,-1,6,0,3,-1,9,8,3,-1,3,2,9,-1,4,10,9,-1,9,2,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,1,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1});
  }
}
protected class MFInt32257 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,4,2,-1,2,1,5,-1,0,8,9,-1,9,1,0,-1,3,10,8,-1,8,0,3,-1,11,10,3,-1,3,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,6,-1,6,7,14,-1,9,15,5,-1,5,1,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1});
  }
}
protected class MFVec3f258 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0046f,-0.0145f,-0.0945f,0.0045f,-0.0092f,-0.0925f,-0.0067f,-0.0092f,-0.0938f,-0.0053f,-0.0145f,-0.0959f,-0.0061f,-0.0036f,-0.0952f,0.0043f,-0.0034f,-0.0937f,0.007f,-0.0163f,-0.1012f,0.0076f,-0.0079f,-0.1009f,-0.007f,-0.0163f,-0.1028f,-0.008f,-0.0079f,-0.1028f,-0.0068f,-0.0013f,-0.1027f,0.0064f,-0.0008f,-0.1011f,0.0056f,-0.008f,-0.1054f,0.0052f,-0.0138f,-0.1057f,-0.0043f,-0.0138f,-0.1067f,-0.005f,-0.008f,-0.1067f,-0.0042f,-0.0038f,-0.1067f,0.0048f,-0.0034f,-0.1056f});
  }
}
protected class MFVec2f259 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1643f,0.0579f,0.1638f,0.0538f,0.174f,0.0396f,0.1747f,0.0423f,0.1756f,0.0403f,0.1632f,0.0573f,0.066f,0.0493f,0.0915f,0.0082f,0.1653f,0.0654f,0.1636f,0.063f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.0949f,0.0775f,0.1293f,0.0261f,0.1651f,0.0639f,0.1636f,0.063f,0.1653f,0.0654f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1293f,0.0261f});
  }
}
protected class MFFloat260 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat261 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32262 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,0,6,-1,6,3,4,-1,4,3,8,-1,5,1,7,-1,7,2,5,-1,2,7,9,-1,4,8,9,-1,9,7,4,-1,20,21,24,-1,24,25,20,-1,12,13,10,-1,10,11,12,-1,18,19,14,-1,14,17,18,-1,15,16,17,-1,17,14,15,-1,0,4,11,-1,11,10,0,-1,4,7,12,-1,12,11,4,-1,7,1,13,-1,13,12,7,-1,24,21,22,-1,22,23,24,-1,3,6,15,-1,15,14,3,-1,20,25,26,-1,26,27,20,-1,5,2,17,-1,17,16,5,-1,2,9,18,-1,18,17,2,-1,9,8,19,-1,19,18,9,-1,8,3,14,-1,14,19,8,-1,6,0,21,-1,21,20,6,-1,0,10,22,-1,22,21,0,-1,10,13,23,-1,23,22,10,-1,13,1,24,-1,24,23,13,-1,1,5,25,-1,25,24,1,-1,5,16,26,-1,26,25,5,-1,16,15,27,-1,27,26,16,-1,15,6,20,-1,20,27,15,-1});
  }
}
protected class MFInt32263 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,0,6,-1,6,3,4,-1,4,3,8,-1,5,1,7,-1,7,2,5,-1,2,7,9,-1,4,8,10,-1,10,11,4,-1,22,23,26,-1,26,27,22,-1,14,15,12,-1,12,13,14,-1,20,21,16,-1,16,19,20,-1,17,18,19,-1,19,16,17,-1,0,4,13,-1,13,12,0,-1,4,11,14,-1,14,13,4,-1,7,1,15,-1,15,14,7,-1,26,23,24,-1,24,25,26,-1,3,6,17,-1,17,16,3,-1,22,27,28,-1,28,29,22,-1,5,2,19,-1,19,18,5,-1,2,9,20,-1,20,19,2,-1,10,8,21,-1,21,20,10,-1,8,3,16,-1,16,21,8,-1,6,0,23,-1,23,22,6,-1,0,12,24,-1,24,23,0,-1,12,15,25,-1,25,24,12,-1,15,1,26,-1,26,25,15,-1,1,5,27,-1,27,26,1,-1,5,18,28,-1,28,27,5,-1,18,17,29,-1,29,28,18,-1,17,6,22,-1,22,29,17,-1});
  }
}
protected class MFVec3f264 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0072f,0.0052f,-0.082f,-0.0056f,-0.0387f,-0.0822f,0.0059f,-0.0381f,-0.0934f,0.0055f,0.0156f,-0.0942f,-0.0057f,0.013f,-0.1016f,0.006f,-0.0384f,-0.083f,0.0049f,0.0083f,-0.0827f,-0.005f,-0.0381f,-0.1015f,0.0056f,0.0216f,-0.1023f,0.0058f,-0.0385f,-0.1024f,-0.0127f,0.0004f,-0.0852f,-0.0114f,0.0056f,-0.0991f,-0.0109f,-0.0357f,-0.099f,-0.0111f,-0.036f,-0.0854f,0.0106f,0.0137f,-0.0954f,0.01f,0.0071f,-0.085f,0.0111f,-0.0359f,-0.0853f,0.011f,-0.0357f,-0.0933f,0.0108f,-0.0359f,-0.0999f,0.0106f,0.017f,-0.0999f,0.005f,0.0019f,-0.0747f,-0.0066f,-0.0007f,-0.074f,-0.0105f,-0.0044f,-0.0761f,-0.0091f,-0.0338f,-0.0763f,-0.0052f,-0.0352f,-0.074f,0.0055f,-0.035f,-0.0749f,0.0089f,-0.0335f,-0.0764f,0.0079f,0.0013f,-0.0761f});
  }
}
protected class MFVec2f265 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2226f,0.0828f,0.2197f,0.0903f,0.2186f,0.1086f,0.2179f,0.1044f,0.2314f,0.0879f,0.2128f,0.1035f,0.2098f,0.0996f,0.2271f,0.0958f,0.2224f,0.1067f,0.2197f,0.1123f,0.2224f,0.1067f,0.2314f,0.0879f,0.2226f,0.0828f,0.2314f,0.0879f,0.2314f,0.0879f,0.2197f,0.0903f,0.2179f,0.1044f,0.2098f,0.0996f,0.2098f,0.0996f,0.2186f,0.1086f,0.2197f,0.1123f,0.2224f,0.1067f,0.2098f,0.0996f,0.2226f,0.0828f,0.2226f,0.0828f,0.2197f,0.0903f,0.2226f,0.0828f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f});
  }
}
protected class MFFloat266 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat267 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32268 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15,12,13,-1,13,3,15,-1,10,7,0,-1,0,2,10,-1,9,1,14,-1,14,6,9,-1,3,13,7,-1,7,10,3,-1,12,15,5,-1,5,16,12,-1,6,8,17,-1,17,9,6,-1,17,8,11,-1,11,4,17,-1,27,28,31,-1,34,35,32,-1,32,33,34,-1,28,29,30,-1,30,31,28,-1,35,27,31,-1,31,32,35,-1,23,24,20,-1,22,23,20,-1,20,21,22,-1,25,26,18,-1,18,19,25,-1,24,25,19,-1,19,20,24,-1,1,9,19,-1,19,18,1,-1,9,17,20,-1,20,19,9,-1,17,4,21,-1,21,20,17,-1,48,45,46,-1,46,47,48,-1,5,15,23,-1,23,22,5,-1,15,3,24,-1,24,23,15,-1,3,10,25,-1,25,24,3,-1,10,2,26,-1,26,25,10,-1,40,37,38,-1,38,39,40,-1,13,12,28,-1,28,27,13,-1,12,16,29,-1,29,28,12,-1,44,49,50,-1,50,51,44,-1,11,8,31,-1,31,30,11,-1,8,6,32,-1,32,31,8,-1,6,14,33,-1,33,32,6,-1,36,41,42,-1,42,43,36,-1,0,7,35,-1,35,34,0,-1,7,13,27,-1,27,35,7,-1,37,40,41,-1,41,36,37,-1,48,49,44,-1,44,45,48,-1,14,1,37,-1,37,36,14,-1,1,18,38,-1,38,37,1,-1,18,26,39,-1,39,38,18,-1,26,2,40,-1,40,39,26,-1,2,0,41,-1,41,40,2,-1,0,34,42,-1,42,41,0,-1,34,33,43,-1,43,42,34,-1,33,14,36,-1,36,43,33,-1,16,5,45,-1,45,44,16,-1,5,22,46,-1,46,45,5,-1,22,21,47,-1,47,46,22,-1,21,4,48,-1,48,47,21,-1,4,11,49,-1,49,48,4,-1,11,30,50,-1,50,49,11,-1,30,29,51,-1,51,50,30,-1,29,16,44,-1,44,51,29,-1});
  }
}
protected class MFInt32269 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {25,7,16,-1,16,3,25,-1,12,9,0,-1,0,2,12,-1,22,1,20,-1,20,18,22,-1,13,17,19,-1,19,23,13,-1,15,24,5,-1,5,26,15,-1,8,21,28,-1,28,11,8,-1,14,10,6,-1,6,4,14,-1,43,45,27,-1,54,55,51,-1,51,53,54,-1,46,47,48,-1,48,50,46,-1,56,44,49,-1,49,52,56,-1,36,38,28,-1,35,37,33,-1,33,34,35,-1,40,42,29,-1,29,30,40,-1,39,41,31,-1,31,32,39,-1,1,22,30,-1,30,29,1,-1,11,28,32,-1,32,31,11,-1,14,4,34,-1,34,33,14,-1,70,67,68,-1,68,69,70,-1,5,24,37,-1,37,35,5,-1,25,3,38,-1,38,36,25,-1,13,23,41,-1,41,39,13,-1,12,2,42,-1,42,40,12,-1,62,58,60,-1,60,61,62,-1,16,7,45,-1,45,43,16,-1,15,26,47,-1,47,46,15,-1,66,71,73,-1,73,74,66,-1,6,10,50,-1,50,48,6,-1,21,8,52,-1,52,49,21,-1,18,20,53,-1,53,51,18,-1,57,63,64,-1,64,65,57,-1,0,9,55,-1,55,54,0,-1,19,17,44,-1,44,56,19,-1,59,62,63,-1,63,57,59,-1,70,72,66,-1,66,67,70,-1,20,1,59,-1,59,57,20,-1,1,29,60,-1,60,58,1,-1,29,42,61,-1,61,60,29,-1,42,2,62,-1,62,61,42,-1,2,0,63,-1,63,62,2,-1,0,54,64,-1,64,63,0,-1,54,53,65,-1,65,64,54,-1,53,20,57,-1,57,65,53,-1,26,5,67,-1,67,66,26,-1,5,35,68,-1,68,67,5,-1,35,34,69,-1,69,68,35,-1,34,4,70,-1,70,69,34,-1,4,6,72,-1,72,70,4,-1,6,48,73,-1,73,71,6,-1,48,47,74,-1,74,73,48,-1,47,26,66,-1,66,74,47,-1});
  }
}
protected class MFVec3f270 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0081f,-0.0084f,-0.0526f,0.0056f,-0.0309f,-0.0502f,0.0055f,-0.0074f,-0.0494f,0.0065f,0.003f,-0.075f,0.0076f,-0.0311f,-0.1026f,0.0065f,0.0156f,-0.1023f,-0.0055f,-0.0328f,-0.0659f,-0.0069f,-0.0037f,-0.0639f,-0.0051f,-0.0318f,-0.0916f,0.0068f,-0.0328f,-0.064f,0.0058f,-0.0029f,-0.0618f,-0.004f,-0.0314f,-0.1018f,-0.006f,0.0072f,-0.0901f,-0.0062f,0.0017f,-0.077f,-0.0082f,-0.031f,-0.0536f,0.0067f,0.0089f,-0.0881f,-0.0056f,0.0125f,-0.1016f,0.0078f,-0.0313f,-0.0897f,0.0101f,-0.0289f,-0.0522f,0.0112f,-0.0304f,-0.064f,0.0121f,-0.029f,-0.0895f,0.012f,-0.0288f,-0.1002f,0.011f,0.0123f,-0.0999f,0.0111f,0.007f,-0.0889f,0.011f,0.0011f,-0.0758f,0.0103f,-0.0049f,-0.0624f,0.0101f,-0.0088f,-0.0515f,-0.0107f,-0.001f,-0.0799f,-0.0104f,0.0045f,-0.093f,-0.0103f,0.008f,-0.1006f,-0.0089f,-0.0288f,-0.1007f,-0.0098f,-0.0291f,-0.0933f,-0.0101f,-0.03f,-0.0679f,-0.0124f,-0.0286f,-0.058f,-0.0122f,-0.0104f,-0.0573f,-0.0113f,-0.0065f,-0.0668f,-0.0093f,-0.0282f,-0.0495f,0.0037f,-0.0282f,-0.0463f,0.0062f,-0.0273f,-0.0462f,0.0062f,-0.0111f,-0.0457f,0.0039f,-0.0106f,-0.0457f,-0.0091f,-0.0115f,-0.0487f,-0.0118f,-0.0126f,-0.0497f,-0.0119f,-0.027f,-0.0503f,-0.0043f,0.0105f,-0.1072f,0.0063f,0.0132f,-0.108f,0.0092f,0.011f,-0.1064f,0.0101f,-0.0273f,-0.1067f,0.0073f,-0.0288f,-0.1082f,-0.0033f,-0.0291f,-0.1073f,-0.0065f,-0.0273f,-0.1066f,-0.0079f,0.007f,-0.1064f});
  }
}
protected class MFVec2f271 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.195f,0.0629f,0.1801f,0.0847f,0.1811f,0.0824f,0.1937f,0.091f,0.2128f,0.1035f,0.2098f,0.0996f,0.2197f,0.0903f,0.2138f,0.0778f,0.1989f,0.0701f,0.1984f,0.068f,0.2129f,0.0844f,0.1833f,0.0898f,0.1856f,0.0872f,0.1937f,0.091f,0.2068f,0.0986f,0.2138f,0.0778f,0.2061f,0.0729f,0.2061f,0.0729f,0.1989f,0.0701f,0.1984f,0.068f,0.1952f,0.0651f,0.2129f,0.0844f,0.1833f,0.0898f,0.1856f,0.0872f,0.2017f,0.0948f,0.2017f,0.0948f,0.2226f,0.0828f,0.2138f,0.0778f,0.1937f,0.091f,0.1811f,0.0824f,0.1856f,0.0872f,0.1856f,0.0872f,0.1937f,0.091f,0.2017f,0.0948f,0.2098f,0.0996f,0.2098f,0.0996f,0.2017f,0.0948f,0.2017f,0.0948f,0.1937f,0.091f,0.1937f,0.091f,0.1856f,0.0872f,0.1856f,0.0872f,0.1811f,0.0824f,0.2061f,0.0729f,0.2061f,0.0729f,0.2138f,0.0778f,0.2138f,0.0778f,0.2226f,0.0828f,0.2226f,0.0828f,0.2138f,0.0778f,0.2138f,0.0778f,0.1984f,0.068f,0.1984f,0.068f,0.195f,0.0629f,0.195f,0.0629f,0.1984f,0.068f,0.1984f,0.068f,0.195f,0.0629f,0.1811f,0.0824f,0.1801f,0.0847f,0.1811f,0.0824f,0.1811f,0.0824f,0.1811f,0.0824f,0.195f,0.0629f,0.195f,0.0629f,0.195f,0.0629f,0.2226f,0.0828f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f,0.2226f,0.0828f,0.2197f,0.0903f,0.2226f,0.0828f,0.2226f,0.0828f});
  }
}
protected class MFFloat272 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat273 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32274 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,0,1,-1,1,7,13,-1,7,1,2,-1,2,9,7,-1,4,6,14,-1,14,3,4,-1,8,6,4,-1,4,5,8,-1,5,0,13,-1,13,8,5,-1,23,17,15,-1,15,19,23,-1,16,18,24,-1,24,20,16,-1,9,23,19,-1,19,7,9,-1,8,20,24,-1,24,6,8,-1,7,19,11,-1,24,21,6,-1,10,8,13,-1,13,12,10,-1,14,22,25,-1,25,9,14,-1,21,22,14,-1,14,6,21,-1,7,11,12,-1,12,13,7,-1,10,20,8,-1,25,23,9,-1,9,2,3,-1,3,14,9,-1,5,4,3,-1,3,2,1,-1,5,3,1,-1,0,5,1,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,41,42,43,-1,43,37,41,-1,28,29,26,-1,26,27,28,-1,35,36,30,-1,30,31,35,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,15,17,27,-1,27,26,15,-1,17,18,28,-1,28,27,17,-1,18,16,29,-1,29,28,18,-1,16,15,26,-1,26,29,16,-1,17,23,31,-1,31,30,17,-1,23,25,32,-1,32,31,23,-1,25,22,33,-1,33,32,25,-1,22,21,34,-1,34,33,22,-1,21,24,35,-1,35,34,21,-1,24,18,36,-1,36,35,24,-1,18,17,30,-1,30,36,18,-1,20,10,38,-1,38,37,20,-1,10,12,39,-1,39,38,10,-1,12,11,40,-1,40,39,12,-1,11,19,41,-1,41,40,11,-1,19,15,42,-1,42,41,19,-1,15,16,43,-1,43,42,15,-1,16,20,37,-1,37,43,16,-1});
  }
}
protected class MFInt32275 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {22,1,0,-1,0,7,22,-1,7,0,2,-1,2,9,7,-1,4,6,23,-1,23,3,4,-1,8,6,4,-1,4,5,8,-1,5,1,22,-1,22,8,5,-1,36,26,24,-1,24,29,36,-1,25,27,38,-1,38,31,25,-1,11,35,28,-1,28,10,11,-1,13,30,37,-1,37,12,13,-1,10,28,15,-1,37,32,12,-1,14,13,16,-1,16,20,14,-1,18,33,39,-1,39,11,18,-1,32,34,19,-1,19,12,32,-1,10,15,21,-1,21,17,10,-1,14,30,13,-1,39,35,11,-1,9,2,3,-1,3,23,9,-1,5,4,3,-1,3,2,0,-1,5,3,0,-1,1,5,0,-1,47,48,49,-1,46,47,49,-1,45,46,49,-1,55,56,57,-1,57,51,55,-1,42,43,40,-1,40,41,42,-1,49,50,44,-1,44,45,49,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,24,26,41,-1,41,40,24,-1,26,27,42,-1,42,41,26,-1,27,25,43,-1,43,42,27,-1,25,24,40,-1,40,43,25,-1,26,36,45,-1,45,44,26,-1,35,39,46,-1,46,45,35,-1,39,33,47,-1,47,46,39,-1,34,32,48,-1,48,47,34,-1,32,37,49,-1,49,48,32,-1,38,27,50,-1,50,49,38,-1,27,26,44,-1,44,50,27,-1,30,14,52,-1,52,51,30,-1,14,20,53,-1,53,52,14,-1,21,15,54,-1,54,53,21,-1,15,28,55,-1,55,54,15,-1,29,24,56,-1,56,55,29,-1,24,25,57,-1,57,56,24,-1,25,31,51,-1,51,57,25,-1});
  }
}
protected class MFVec3f276 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0034f,-0.0116f,-0.0853f,0.0023f,-0.0208f,-0.086f,-0.0068f,-0.0206f,-0.088f,-0.0083f,-0.0116f,-0.0882f,-0.0073f,-0.0022f,-0.0882f,0.0024f,-0.0019f,-0.0859f,-0.0054f,0.0001f,-0.0981f,0.0036f,-0.0192f,-0.0957f,0.0036f,0.0004f,-0.0959f,-0.005f,-0.0193f,-0.0981f,0.0062f,-0.0013f,-0.0955f,0.0062f,-0.0157f,-0.0954f,0.006f,-0.0086f,-0.0942f,0.0048f,-0.0101f,-0.0941f,-0.0069f,-0.0108f,-0.0968f,0.0074f,-0.0199f,-0.1062f,0.0074f,0.0037f,-0.1054f,-0.0063f,-0.0199f,-0.1096f,-0.0062f,0.0027f,-0.1086f,0.0071f,-0.0192f,-0.0999f,0.0069f,0.0008f,-0.1004f,-0.0076f,-0.0011f,-0.0987f,-0.0078f,-0.0088f,-0.0972f,-0.0069f,-0.0191f,-0.1036f,-0.0066f,0.0003f,-0.1041f,-0.0075f,-0.0183f,-0.0987f,0.0059f,-0.0169f,-0.112f,-0.0023f,-0.0169f,-0.114f,-0.0022f,0.0002f,-0.1133f,0.0059f,0.0008f,-0.1114f,-0.0108f,-0.0145f,-0.1083f,-0.0111f,-0.0142f,-0.1053f,-0.0114f,-0.0137f,-0.1028f,-0.0115f,-0.009f,-0.1021f,-0.0115f,-0.0052f,-0.1029f,-0.011f,-0.0045f,-0.1055f,-0.0108f,-0.0033f,-0.1078f,0.011f,-0.0012f,-0.1019f,0.0105f,-0.0029f,-0.098f,0.0104f,-0.0086f,-0.097f,0.0104f,-0.0143f,-0.098f,0.0112f,-0.017f,-0.1014f,0.0113f,-0.0174f,-0.1053f,0.0113f,0.0004f,-0.1047f});
  }
}
protected class MFVec2f277 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1706f,0.0686f,0.1709f,0.0678f,0.1824f,0.0523f,0.183f,0.0511f,0.1834f,0.0508f,0.1716f,0.0676f,0.1882f,0.0556f,0.1745f,0.076f,0.1748f,0.0736f,0.1886f,0.0572f,0.2327f,0.0796f,0.2439f,0.0803f,0.2076f,0.0485f,0.2162f,0.0476f,0.2201f,0.0466f,0.2302f,0.0796f,0.2219f,0.0517f,0.2301f,0.0734f,0.2486f,0.0743f,0.2027f,0.0537f,0.2224f,0.0526f,0.2293f,0.0736f,0.1746f,0.075f,0.1885f,0.0566f,0.1801f,0.0847f,0.1811f,0.0824f,0.1952f,0.0651f,0.195f,0.0629f,0.2293f,0.0837f,0.1769f,0.0796f,0.2191f,0.0403f,0.1766f,0.0777f,0.2037f,0.047f,0.2486f,0.0741f,0.2026f,0.0539f,0.2444f,0.0847f,0.1915f,0.0602f,0.2041f,0.0405f,0.1915f,0.0578f,0.2464f,0.0799f,0.1801f,0.0847f,0.1952f,0.0651f,0.195f,0.0629f,0.1811f,0.0824f,0.1952f,0.0651f,0.1915f,0.0602f,0.2464f,0.0799f,0.2486f,0.0741f,0.2037f,0.047f,0.2041f,0.0405f,0.195f,0.0629f,0.1766f,0.0777f,0.2201f,0.0466f,0.2224f,0.0526f,0.2302f,0.0796f,0.2293f,0.0837f,0.1801f,0.0847f,0.1811f,0.0824f});
  }
}
protected class MFFloat278 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat279 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32280 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,6,-1,6,0,1,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,0,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,1,0,19,-1,19,18,1,-1,0,5,20,-1,20,19,0,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,1,18,-1,18,23,2,-1});
  }
}
protected class MFInt32281 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,8,-1,8,1,0,-1,2,10,9,-1,9,0,2,-1,11,10,2,-1,2,3,11,-1,4,13,11,-1,11,3,4,-1,14,12,7,-1,7,6,14,-1,8,15,5,-1,5,1,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,13,20,-1,20,19,11,-1,12,14,21,-1,21,20,12,-1,15,8,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,5,24,-1,24,23,1,-1,6,7,25,-1,25,24,6,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1});
  }
}
protected class MFVec3f282 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0058f,-0.01f,-0.0911f,0.005f,-0.0184f,-0.0917f,-0.0082f,-0.0184f,-0.0944f,-0.0092f,-0.01f,-0.0945f,-0.0082f,-0.0034f,-0.0943f,0.0047f,-0.0029f,-0.0919f,0.0058f,-0.0084f,-0.1004f,0.0047f,-0.0177f,-0.1011f,-0.0044f,-0.0175f,-0.1031f,-0.0059f,-0.0084f,-0.1033f,-0.0049f,0.001f,-0.1032f,0.0048f,0.0013f,-0.101f,0.0049f,-0.0084f,-0.1046f,0.004f,-0.0155f,-0.1052f,-0.0016f,-0.0154f,-0.1064f,-0.0027f,-0.0084f,-0.1065f,-0.002f,-0.0011f,-0.1065f,0.0041f,-0.0009f,-0.1051f,0.0013f,-0.015f,-0.089f,0.0017f,-0.0101f,-0.0886f,0.0012f,-0.0064f,-0.0892f,-0.0061f,-0.0067f,-0.0904f,-0.0066f,-0.0101f,-0.0905f,-0.006f,-0.015f,-0.0905f});
  }
}
protected class MFVec2f283 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1653f,0.0654f,0.1636f,0.063f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1651f,0.0639f,0.1293f,0.0261f,0.0949f,0.0775f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1291f,0.0918f,0.1834f,0.0508f,0.1554f,0.0532f,0.1716f,0.0676f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1834f,0.0508f,0.1554f,0.0532f,0.1653f,0.0654f,0.1636f,0.063f,0.1651f,0.0639f,0.0949f,0.0775f,0.1792f,0.0409f,0.1795f,0.0453f});
  }
}
protected class MFFloat284 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat285 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32286 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,3,2,1,-1,5,4,3,-1,3,0,5,-1,1,7,6,-1,6,0,1,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,0,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1});
  }
}
protected class MFInt32287 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,9,8,-1,8,3,0,-1,1,10,9,-1,9,0,1,-1,11,10,1,-1,1,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,7,-1,7,6,14,-1,8,15,5,-1,5,3,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,8,16,-1,16,21,15,-1});
  }
}
protected class MFVec3f288 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0033f,-0.0092f,-0.0933f,0.0036f,-0.0145f,-0.0952f,-0.005f,-0.0145f,-0.0971f,-0.0064f,-0.0092f,-0.0953f,-0.0057f,-0.0036f,-0.0965f,0.0032f,-0.0034f,-0.0944f,0.0073f,-0.0079f,-0.1003f,0.0065f,-0.0163f,-0.1009f,-0.0067f,-0.0163f,-0.1036f,-0.0077f,-0.0079f,-0.1037f,-0.0066f,-0.0013f,-0.1036f,0.0063f,-0.0008f,-0.1011f,0.0057f,-0.008f,-0.105f,0.0052f,-0.0138f,-0.1055f,-0.0036f,-0.0138f,-0.1073f,-0.0043f,-0.008f,-0.1073f,-0.0036f,-0.0038f,-0.1072f,0.0051f,-0.0034f,-0.1056f});
  }
}
protected class MFVec2f289 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1643f,0.0579f,0.1747f,0.0423f,0.174f,0.0396f,0.1638f,0.0538f,0.1756f,0.0403f,0.1632f,0.0573f,0.0915f,0.0082f,0.066f,0.0493f,0.1636f,0.063f,0.1653f,0.0654f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.0949f,0.0775f,0.1293f,0.0261f,0.1651f,0.0639f,0.1636f,0.063f,0.1653f,0.0654f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1293f,0.0261f});
  }
}
protected class MFFloat290 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat291 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32292 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,3,2,1,-1,4,7,6,-1,6,5,4,-1,4,18,19,-1,19,7,4,-1,0,8,9,-1,9,3,0,-1,10,2,3,-1,3,11,10,-1,12,6,7,-1,7,13,12,-1,13,7,19,-1,19,20,13,-1,25,26,14,-1,14,9,25,-1,3,9,14,-1,14,11,3,-1,15,10,11,-1,11,16,15,-1,13,20,21,-1,21,17,13,-1,11,14,16,-1,4,5,23,-1,23,18,4,-1,14,38,37,-1,34,15,16,-1,16,35,34,-1,17,21,39,-1,39,36,17,-1,17,12,13,-1,35,16,14,-1,14,37,35,-1,5,6,30,-1,30,27,5,-1,18,23,22,-1,22,1,18,-1,2,19,18,-1,18,1,2,-1,10,20,19,-1,19,2,10,-1,15,21,20,-1,20,10,15,-1,34,39,21,-1,21,15,34,-1,22,8,0,-1,0,1,22,-1,25,9,8,-1,8,24,25,-1,14,26,33,-1,33,38,14,-1,23,5,27,-1,27,29,23,-1,22,23,29,-1,29,28,22,-1,8,22,28,-1,28,24,8,-1,30,6,12,-1,12,31,30,-1,32,31,12,-1,12,40,32,-1,40,12,17,-1,17,36,40,-1,47,48,49,-1,49,41,42,-1,42,43,44,-1,49,42,44,-1,47,49,44,-1,47,44,45,-1,46,47,45,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,50,51,55,-1,55,56,59,-1,59,50,55,-1,56,57,58,-1,58,59,56,-1,34,35,42,-1,42,41,34,-1,35,37,43,-1,43,42,35,-1,37,38,44,-1,44,43,37,-1,38,33,45,-1,45,44,38,-1,33,32,46,-1,46,45,33,-1,32,40,47,-1,47,46,32,-1,40,36,48,-1,48,47,40,-1,36,39,49,-1,49,48,36,-1,39,34,41,-1,41,49,39,-1,25,24,51,-1,51,50,25,-1,24,28,52,-1,52,51,24,-1,28,29,53,-1,53,52,28,-1,29,27,54,-1,54,53,29,-1,27,30,55,-1,55,54,27,-1,30,31,56,-1,56,55,30,-1,31,32,57,-1,57,56,31,-1,32,33,58,-1,58,57,32,-1,33,26,59,-1,59,58,33,-1,26,25,50,-1,50,59,26,-1});
  }
}
protected class MFInt32293 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,3,2,1,-1,4,7,6,-1,6,5,4,-1,4,18,19,-1,19,7,4,-1,0,8,9,-1,9,3,0,-1,10,2,3,-1,3,11,10,-1,12,6,7,-1,7,13,12,-1,13,7,19,-1,19,20,13,-1,25,26,14,-1,14,9,25,-1,3,9,14,-1,14,11,3,-1,15,10,11,-1,11,16,15,-1,13,20,21,-1,21,17,13,-1,11,14,16,-1,4,5,23,-1,23,18,4,-1,14,38,37,-1,34,15,16,-1,16,35,34,-1,17,21,39,-1,39,36,17,-1,17,12,13,-1,35,16,14,-1,14,37,35,-1,5,6,30,-1,30,27,5,-1,18,23,22,-1,22,1,18,-1,2,19,18,-1,18,1,2,-1,10,20,19,-1,19,2,10,-1,15,21,20,-1,20,10,15,-1,34,39,21,-1,21,15,34,-1,22,8,0,-1,0,1,22,-1,25,9,8,-1,8,24,25,-1,14,26,33,-1,33,38,14,-1,23,5,27,-1,27,29,23,-1,22,23,29,-1,29,28,22,-1,8,22,28,-1,28,24,8,-1,30,6,12,-1,12,31,30,-1,32,31,12,-1,12,40,32,-1,40,12,17,-1,17,36,40,-1,47,48,49,-1,49,41,42,-1,42,43,44,-1,49,42,44,-1,47,49,44,-1,47,44,45,-1,46,47,45,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,50,51,55,-1,55,56,59,-1,59,50,55,-1,56,57,58,-1,58,59,56,-1,34,35,42,-1,42,41,34,-1,35,37,43,-1,43,42,35,-1,37,38,44,-1,44,43,37,-1,38,33,45,-1,45,44,38,-1,33,32,46,-1,46,45,33,-1,32,40,47,-1,47,46,32,-1,40,36,48,-1,48,47,40,-1,36,39,49,-1,49,48,36,-1,39,34,41,-1,41,49,39,-1,25,24,51,-1,51,50,25,-1,24,28,52,-1,52,51,24,-1,28,29,53,-1,53,52,28,-1,29,27,54,-1,54,53,29,-1,27,30,55,-1,55,54,27,-1,30,31,56,-1,56,55,30,-1,31,32,57,-1,57,56,31,-1,32,33,58,-1,58,57,32,-1,33,26,59,-1,59,58,33,-1,26,25,50,-1,50,59,26,-1});
  }
}
protected class MFVec3f294 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0226f,-0.0647f,-0.1215f,-0.0079f,-0.0647f,-0.1321f,-0.0078f,-0.0552f,-0.1365f,-0.0251f,-0.0552f,-0.1248f,0.0189f,-0.0647f,-0.1223f,0.0272f,-0.0646f,-0.094f,0.0287f,-0.0552f,-0.0945f,0.0217f,-0.0552f,-0.1257f,-0.0282f,-0.0646f,-0.094f,-0.03f,-0.0552f,-0.0945f,-0.0078f,-0.0349f,-0.1392f,-0.0266f,-0.0341f,-0.1274f,0.0317f,-0.0309f,-0.0943f,0.0234f,-0.0351f,-0.1282f,-0.032f,-0.0333f,-0.0943f,-0.0068f,-0.019f,-0.1346f,-0.0249f,-0.0193f,-0.1227f,0.0232f,-0.0196f,-0.1237f,0.0046f,-0.0647f,-0.1323f,0.0049f,-0.0552f,-0.1366f,0.005f,-0.0351f,-0.1393f,0.0059f,-0.0191f,-0.1348f,-0.007f,-0.0646f,-0.094f,0.0094f,-0.0646f,-0.094f,-0.0294f,-0.0631f,-0.0766f,-0.0321f,-0.0551f,-0.0771f,-0.0316f,-0.0341f,-0.0773f,0.0247f,-0.0629f,-0.0741f,-0.0094f,-0.0636f,-0.0744f,0.0072f,-0.0636f,-0.073f,0.0279f,-0.0536f,-0.0747f,0.0308f,-0.0299f,-0.0748f,0.0232f,-0.0005f,-0.074f,-0.0201f,-0.0022f,-0.0734f,-0.0058f,-0.0044f,-0.1289f,-0.0232f,-0.0015f,-0.1172f,0.023f,-0.0015f,-0.1182f,-0.0264f,-0.0083f,-0.1013f,-0.026f,-0.0084f,-0.0896f,0.0067f,-0.0044f,-0.129f,0.03f,-0.0068f,-0.0951f,-0.0047f,0.008f,-0.1217f,-0.0191f,0.0109f,-0.112f,-0.0217f,0.0041f,-0.0987f,-0.0214f,0.0039f,-0.0884f,-0.017f,0.0099f,-0.0763f,0.019f,0.0114f,-0.0769f,0.0243f,0.0052f,-0.0929f,0.0183f,0.0106f,-0.1128f,0.0047f,0.0079f,-0.1218f,-0.0287f,-0.0535f,-0.0696f,-0.027f,-0.0582f,-0.0697f,-0.0095f,-0.0586f,-0.0676f,0.0069f,-0.0586f,-0.0662f,0.0219f,-0.058f,-0.0674f,0.0242f,-0.0519f,-0.0676f,0.0269f,-0.0313f,-0.0675f,0.0202f,-0.0076f,-0.067f,-0.0177f,-0.0089f,-0.0663f,-0.0283f,-0.0355f,-0.0699f});
  }
}
protected class MFVec2f295 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2845f,0.0964f,0.2768f,0.1211f,0.2792f,0.1228f,0.2886f,0.0939f,0.2493f,0.1586f,0.2252f,0.161f,0.2241f,0.1634f,0.2489f,0.1638f,0.2727f,0.0786f,0.2746f,0.076f,0.2809f,0.1238f,0.2914f,0.0926f,0.2206f,0.1691f,0.249f,0.1672f,0.2762f,0.0729f,0.2769f,0.1234f,0.2869f,0.0933f,0.2461f,0.1652f,0.2661f,0.1399f,0.2685f,0.1417f,0.27f,0.1429f,0.2661f,0.1424f,0.24f,0.098f,0.2266f,0.1229f,0.2628f,0.0703f,0.2665f,0.0671f,0.2664f,0.0668f,0.2178f,0.1526f,0.2363f,0.0929f,0.2213f,0.1179f,0.2171f,0.1588f,0.2129f,0.1643f,0.2165f,0.148f,0.2533f,0.0835f,0.273f,0.1232f,0.2824f,0.0941f,0.2433f,0.1632f,0.2759f,0.0832f,0.2685f,0.0797f,0.2623f,0.1418f,0.2231f,0.166f,0.273f,0.1232f,0.2824f,0.0941f,0.2759f,0.0832f,0.2685f,0.0797f,0.2533f,0.0835f,0.2165f,0.148f,0.2231f,0.166f,0.2433f,0.1632f,0.2623f,0.1418f,0.2665f,0.0671f,0.2628f,0.0703f,0.2363f,0.0929f,0.2213f,0.1179f,0.2178f,0.1526f,0.2171f,0.1588f,0.2129f,0.1643f,0.2165f,0.148f,0.2533f,0.0835f,0.2664f,0.0668f});
  }
}
protected class MFFloat296 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat297 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32298 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,17,16,-1,16,0,1,-1,3,8,5,-1,5,0,3,-1,6,7,2,-1,2,1,6,-1,2,4,10,-1,18,2,10,-1,4,9,13,-1,13,12,4,-1,11,10,4,-1,4,12,11,-1,6,1,0,-1,0,5,6,-1,9,4,2,-1,2,7,9,-1,8,3,14,-1,14,15,8,-1,3,0,16,-1,16,19,3,-1,14,3,19,-1,1,2,18,-1,18,17,1,-1,31,32,33,-1,33,26,27,-1,31,33,27,-1,30,31,27,-1,21,24,25,-1,25,20,21,-1,40,41,42,-1,42,34,35,-1,42,35,36,-1,40,42,36,-1,39,40,36,-1,22,23,24,-1,24,21,22,-1,11,12,21,-1,21,20,11,-1,12,13,22,-1,22,21,12,-1,39,36,37,-1,37,38,39,-1,15,14,24,-1,24,23,15,-1,14,19,25,-1,25,24,14,-1,30,27,28,-1,28,29,30,-1,10,11,27,-1,27,26,10,-1,11,20,28,-1,28,27,11,-1,20,25,29,-1,29,28,20,-1,25,19,30,-1,30,29,25,-1,19,16,31,-1,31,30,19,-1,16,17,32,-1,32,31,16,-1,17,18,33,-1,33,32,17,-1,18,10,26,-1,26,33,18,-1,5,8,35,-1,35,34,5,-1,8,15,36,-1,36,35,8,-1,15,23,37,-1,37,36,15,-1,23,22,38,-1,38,37,23,-1,22,13,39,-1,39,38,22,-1,13,9,40,-1,40,39,13,-1,9,7,41,-1,41,40,9,-1,7,6,42,-1,42,41,7,-1,6,5,34,-1,34,42,6,-1});
  }
}
protected class MFInt32299 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,17,16,-1,16,0,1,-1,2,8,5,-1,5,0,2,-1,6,7,3,-1,3,1,6,-1,3,4,10,-1,18,3,10,-1,4,9,13,-1,13,12,4,-1,11,10,4,-1,4,12,11,-1,6,1,0,-1,0,5,6,-1,9,4,3,-1,3,7,9,-1,8,2,14,-1,14,15,8,-1,2,0,16,-1,16,19,2,-1,14,2,19,-1,1,3,18,-1,18,17,1,-1,31,32,33,-1,33,26,27,-1,31,33,27,-1,30,31,27,-1,21,24,25,-1,25,20,21,-1,40,41,42,-1,42,34,35,-1,42,35,36,-1,40,42,36,-1,39,40,36,-1,22,23,24,-1,24,21,22,-1,11,12,21,-1,21,20,11,-1,12,13,22,-1,22,21,12,-1,39,36,37,-1,37,38,39,-1,15,14,24,-1,24,23,15,-1,14,19,25,-1,25,24,14,-1,30,27,28,-1,28,29,30,-1,10,11,27,-1,27,26,10,-1,11,20,28,-1,28,27,11,-1,20,25,29,-1,29,28,20,-1,25,19,30,-1,30,29,25,-1,19,16,31,-1,31,30,19,-1,16,17,32,-1,32,31,16,-1,17,18,33,-1,33,32,17,-1,18,10,26,-1,26,33,18,-1,5,8,35,-1,35,34,5,-1,8,15,36,-1,36,35,8,-1,15,23,37,-1,37,36,15,-1,23,22,38,-1,38,37,23,-1,22,13,39,-1,39,38,22,-1,13,9,40,-1,40,39,13,-1,9,7,41,-1,41,40,9,-1,7,6,42,-1,42,41,7,-1,6,5,34,-1,34,42,6,-1});
  }
}
protected class MFVec3f300 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.009f,-0.0388f,-0.0873f,-0.0126f,-0.0322f,-0.0914f,-0.0096f,-0.0121f,-0.0884f,0.0046f,-0.0399f,-0.0839f,0.0003f,0.0031f,-0.0852f,-0.0141f,-0.0398f,-0.0713f,-0.0178f,-0.0325f,-0.0731f,-0.0143f,-0.0143f,-0.0711f,-0.0014f,-0.0409f,-0.0677f,-0.0021f,-0.0039f,-0.0674f,0.0015f,0.0205f,-0.1014f,0.0125f,0.0238f,-0.095f,0.012f,0.0112f,-0.0838f,0.0104f,0.0034f,-0.0643f,0.0127f,-0.04f,-0.0837f,0.0121f,-0.0406f,-0.0645f,-0.0078f,-0.0404f,-0.1047f,-0.0105f,-0.0324f,-0.1051f,-0.0101f,-0.0114f,-0.1054f,0.0121f,-0.0409f,-0.1024f,0.0222f,0.0136f,-0.0914f,0.0217f,0.0076f,-0.0861f,0.0204f,0.0005f,-0.0684f,0.0219f,-0.0359f,-0.0686f,0.0223f,-0.0355f,-0.0835f,0.0218f,-0.0361f,-0.0971f,0.0083f,0.018f,-0.1119f,0.0155f,0.0201f,-0.107f,0.0224f,0.0128f,-0.1045f,0.0221f,-0.0327f,-0.1097f,0.0152f,-0.0361f,-0.1136f,-0.0013f,-0.0357f,-0.1148f,-0.0028f,-0.031f,-0.1151f,-0.0024f,-0.0114f,-0.1155f,-0.0127f,-0.0389f,-0.0615f,-0.0023f,-0.0398f,-0.0586f,0.0101f,-0.0395f,-0.0551f,0.0168f,-0.0333f,-0.0579f,0.0156f,-0.0029f,-0.0578f,0.0099f,-0.0048f,-0.0547f,-0.0009f,-0.011f,-0.0578f,-0.0117f,-0.0201f,-0.0611f,-0.0145f,-0.035f,-0.0628f});
  }
}
protected class MFVec2f301 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2528f,0.0622f,0.2585f,0.0581f,0.2383f,0.0796f,0.2566f,0.0607f,0.243f,0.0749f,0.2469f,0.052f,0.2512f,0.047f,0.2484f,0.051f,0.2292f,0.0691f,0.2342f,0.0682f,0.2533f,0.0835f,0.2407f,0.0951f,0.2314f,0.0879f,0.2226f,0.0828f,0.2271f,0.0958f,0.2197f,0.0903f,0.2628f,0.0703f,0.2665f,0.0671f,0.2664f,0.0668f,0.2363f,0.0929f,0.2407f,0.0951f,0.2314f,0.0879f,0.2226f,0.0828f,0.2197f,0.0903f,0.2271f,0.0958f,0.2363f,0.0929f,0.2533f,0.0835f,0.2407f,0.0951f,0.2407f,0.0951f,0.2363f,0.0929f,0.2363f,0.0929f,0.2628f,0.0703f,0.2665f,0.0671f,0.2664f,0.0668f,0.2469f,0.052f,0.2292f,0.0691f,0.2197f,0.0903f,0.2197f,0.0903f,0.2226f,0.0828f,0.2226f,0.0828f,0.2342f,0.0682f,0.2484f,0.051f,0.2512f,0.047f});
  }
}
protected class MFFloat302 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat303 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32304 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,13,17,-1,17,16,11,-1,10,11,16,-1,16,14,10,-1,5,1,3,-1,3,7,5,-1,0,2,6,-1,6,4,0,-1,14,15,12,-1,12,10,14,-1,7,3,0,-1,0,4,7,-1,8,1,5,-1,5,9,8,-1,40,41,36,-1,36,37,40,-1,48,49,44,-1,44,45,48,-1,27,28,31,-1,28,29,30,-1,30,31,28,-1,34,35,32,-1,32,33,34,-1,35,27,31,-1,31,32,35,-1,18,19,24,-1,26,18,24,-1,24,25,26,-1,20,21,22,-1,22,23,20,-1,19,20,23,-1,23,24,19,-1,5,7,19,-1,19,18,5,-1,7,4,20,-1,20,19,7,-1,4,6,21,-1,21,20,4,-1,40,37,38,-1,38,39,40,-1,15,14,23,-1,23,22,15,-1,14,16,24,-1,24,23,14,-1,16,17,25,-1,25,24,16,-1,44,49,50,-1,50,51,44,-1,9,5,18,-1,18,26,9,-1,3,1,28,-1,28,27,3,-1,1,8,29,-1,29,28,1,-1,48,45,46,-1,46,47,48,-1,13,11,31,-1,31,30,13,-1,11,10,32,-1,32,31,11,-1,10,12,33,-1,33,32,10,-1,36,41,42,-1,42,43,36,-1,2,0,35,-1,35,34,2,-1,0,3,27,-1,27,35,0,-1,12,15,37,-1,37,36,12,-1,15,22,38,-1,38,37,15,-1,22,21,39,-1,39,38,22,-1,21,6,40,-1,40,39,21,-1,6,2,41,-1,41,40,6,-1,2,34,42,-1,42,41,2,-1,34,33,43,-1,43,42,34,-1,33,12,36,-1,36,43,33,-1,17,13,45,-1,45,44,17,-1,13,30,46,-1,46,45,13,-1,30,29,47,-1,47,46,30,-1,29,8,48,-1,48,47,29,-1,8,9,49,-1,49,48,8,-1,9,26,50,-1,50,49,9,-1,26,25,51,-1,51,50,26,-1,25,17,44,-1,44,51,25,-1});
  }
}
protected class MFInt32305 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,13,17,-1,17,16,5,-1,2,5,16,-1,16,7,2,-1,9,1,6,-1,6,12,9,-1,0,4,11,-1,11,8,0,-1,7,10,3,-1,3,2,7,-1,12,6,0,-1,0,8,12,-1,14,1,9,-1,9,15,14,-1,42,43,38,-1,38,39,42,-1,50,51,46,-1,46,47,50,-1,29,30,18,-1,30,31,32,-1,32,33,30,-1,36,37,34,-1,34,35,36,-1,37,29,33,-1,33,34,37,-1,20,21,19,-1,28,20,26,-1,26,27,28,-1,22,23,24,-1,24,25,22,-1,21,22,25,-1,25,26,21,-1,9,12,21,-1,21,20,9,-1,12,8,22,-1,22,21,12,-1,8,11,23,-1,23,22,8,-1,42,39,40,-1,40,41,42,-1,10,7,25,-1,25,24,10,-1,7,16,26,-1,26,25,7,-1,16,17,27,-1,27,26,16,-1,46,51,52,-1,52,53,46,-1,15,9,20,-1,20,28,15,-1,6,1,30,-1,30,29,6,-1,1,14,31,-1,31,30,1,-1,50,47,48,-1,48,49,50,-1,13,5,33,-1,33,32,13,-1,5,2,34,-1,34,33,5,-1,2,3,35,-1,35,34,2,-1,38,43,44,-1,44,45,38,-1,4,0,37,-1,37,36,4,-1,0,6,29,-1,29,37,0,-1,3,10,39,-1,39,38,3,-1,10,24,40,-1,40,39,10,-1,24,23,41,-1,41,40,24,-1,23,11,42,-1,42,41,23,-1,11,4,43,-1,43,42,11,-1,4,36,44,-1,44,43,4,-1,36,35,45,-1,45,44,36,-1,35,3,38,-1,38,45,35,-1,17,13,47,-1,47,46,17,-1,13,32,48,-1,48,47,13,-1,32,31,49,-1,49,48,32,-1,31,14,50,-1,50,49,31,-1,14,15,51,-1,51,50,14,-1,15,28,52,-1,52,51,15,-1,28,27,53,-1,53,52,28,-1,27,17,46,-1,46,53,27,-1});
  }
}
protected class MFVec3f306 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0099f,-0.004f,-0.0657f,-0.0079f,0.0022f,-0.0924f,-0.0094f,-0.0083f,-0.0551f,-0.0092f,-0.001f,-0.079f,0.005f,-0.0022f,-0.063f,0.0059f,0.0088f,-0.0891f,0.0038f,-0.0068f,-0.0517f,0.0057f,0.0033f,-0.076f,-0.0062f,0.0069f,-0.1037f,0.0063f,0.0141f,-0.1007f,-0.0078f,-0.0312f,-0.0702f,-0.0069f,-0.0307f,-0.094f,-0.0102f,-0.0285f,-0.0561f,-0.0055f,-0.0302f,-0.1041f,0.0064f,-0.0312f,-0.065f,0.0037f,-0.0294f,-0.0526f,0.0068f,-0.0302f,-0.0907f,0.0079f,-0.0299f,-0.1008f,0.0116f,0.0052f,-0.0903f,0.0113f,-0.0003f,-0.0772f,0.0107f,-0.0057f,-0.0641f,0.01f,-0.0093f,-0.0553f,0.0098f,-0.0257f,-0.056f,0.0118f,-0.027f,-0.0648f,0.0121f,-0.0261f,-0.0901f,0.013f,-0.0258f,-0.0964f,0.0116f,0.008f,-0.0963f,-0.0142f,-0.0051f,-0.0822f,-0.0129f,-0.0022f,-0.0955f,-0.0117f,0.0007f,-0.103f,-0.0112f,-0.0269f,-0.1033f,-0.0122f,-0.0272f,-0.0961f,-0.013f,-0.0277f,-0.0732f,-0.0152f,-0.0256f,-0.0619f,-0.0143f,-0.011f,-0.0612f,-0.0149f,-0.0078f,-0.0695f,-0.0104f,-0.0254f,-0.0518f,0.0024f,-0.0263f,-0.0482f,0.0063f,-0.0241f,-0.0485f,0.0065f,-0.0118f,-0.0479f,0.0027f,-0.0104f,-0.0476f,-0.0096f,-0.0117f,-0.051f,-0.0126f,-0.0133f,-0.0538f,-0.0132f,-0.0239f,-0.0544f,0.009f,-0.0265f,-0.1089f,-0.0032f,-0.0268f,-0.1119f,-0.0064f,-0.0248f,-0.1118f,-0.0069f,-0.0006f,-0.1116f,-0.0027f,0.0042f,-0.1115f,0.0081f,0.0103f,-0.109f,0.011f,0.0066f,-0.1059f,0.0122f,-0.0239f,-0.106f});
  }
}
protected class MFVec2f307 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2117f,0.0481f,0.2254f,0.0615f,0.2142f,0.0508f,0.2102f,0.0461f,0.2083f,0.0443f,0.2202f,0.0585f,0.2186f,0.0548f,0.1989f,0.0701f,0.1984f,0.068f,0.2138f,0.0778f,0.1952f,0.0651f,0.195f,0.0629f,0.2061f,0.0729f,0.2292f,0.0691f,0.2342f,0.0682f,0.2226f,0.0828f,0.2129f,0.0844f,0.2197f,0.0903f,0.2254f,0.0615f,0.2061f,0.0729f,0.2138f,0.0778f,0.2061f,0.0729f,0.1984f,0.068f,0.195f,0.0629f,0.195f,0.0629f,0.1984f,0.068f,0.2061f,0.0729f,0.2226f,0.0828f,0.2226f,0.0828f,0.2186f,0.0548f,0.2254f,0.0615f,0.2342f,0.0682f,0.2342f,0.0682f,0.2254f,0.0615f,0.2117f,0.0481f,0.2083f,0.0443f,0.2083f,0.0443f,0.2117f,0.0481f,0.2083f,0.0443f,0.195f,0.0629f,0.195f,0.0629f,0.195f,0.0629f,0.195f,0.0629f,0.2083f,0.0443f,0.2083f,0.0443f,0.2083f,0.0443f,0.2226f,0.0828f,0.2342f,0.0682f,0.2342f,0.0682f,0.2342f,0.0682f,0.2342f,0.0682f,0.2226f,0.0828f,0.2226f,0.0828f,0.2226f,0.0828f});
  }
}
protected class MFFloat308 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat309 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32310 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,2,1,-1,1,10,13,-1,10,1,3,-1,3,8,10,-1,3,4,0,-1,0,8,3,-1,0,4,5,-1,5,9,0,-1,7,9,5,-1,5,6,7,-1,6,2,13,-1,13,7,6,-1,22,17,18,-1,18,14,22,-1,20,19,21,-1,21,15,20,-1,9,7,15,-1,15,21,9,-1,10,14,16,-1,8,22,14,-1,14,10,8,-1,21,23,9,-1,11,7,13,-1,13,12,11,-1,0,25,24,-1,24,8,0,-1,16,12,13,-1,13,10,16,-1,23,25,0,-1,0,9,23,-1,11,15,7,-1,24,22,8,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,6,5,4,-1,4,3,1,-1,6,4,1,-1,2,6,1,-1,37,38,39,-1,39,40,37,-1,28,29,26,-1,26,27,28,-1,35,36,30,-1,30,31,35,-1,40,41,42,-1,42,43,37,-1,40,42,37,-1,18,17,27,-1,27,26,18,-1,17,19,28,-1,28,27,17,-1,19,20,29,-1,29,28,19,-1,20,18,26,-1,26,29,20,-1,17,22,31,-1,31,30,17,-1,22,24,32,-1,32,31,22,-1,24,25,33,-1,33,32,24,-1,25,23,34,-1,34,33,25,-1,23,21,35,-1,35,34,23,-1,21,19,36,-1,36,35,21,-1,19,17,30,-1,30,36,19,-1,14,18,38,-1,38,37,14,-1,18,20,39,-1,39,38,18,-1,20,15,40,-1,40,39,20,-1,15,11,41,-1,41,40,15,-1,11,12,42,-1,42,41,11,-1,12,16,43,-1,43,42,12,-1,16,14,37,-1,37,43,16,-1});
  }
}
protected class MFInt32311 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {27,2,1,-1,1,10,27,-1,10,1,3,-1,3,11,10,-1,3,4,0,-1,0,11,3,-1,0,4,5,-1,5,12,0,-1,9,12,5,-1,5,6,9,-1,6,2,27,-1,27,9,6,-1,35,28,29,-1,29,7,35,-1,31,30,33,-1,33,8,31,-1,15,14,16,-1,16,32,15,-1,17,13,18,-1,19,34,13,-1,13,17,19,-1,32,36,15,-1,20,14,22,-1,22,21,20,-1,23,38,37,-1,37,19,23,-1,18,24,25,-1,25,17,18,-1,36,39,26,-1,26,15,36,-1,20,16,14,-1,37,34,19,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,6,5,4,-1,4,3,1,-1,6,4,1,-1,2,6,1,-1,51,52,53,-1,53,54,51,-1,42,43,40,-1,40,41,42,-1,49,50,44,-1,44,45,49,-1,54,55,56,-1,56,57,51,-1,54,56,51,-1,29,28,41,-1,41,40,29,-1,28,30,42,-1,42,41,28,-1,30,31,43,-1,43,42,30,-1,31,29,40,-1,40,43,31,-1,28,35,45,-1,45,44,28,-1,34,37,46,-1,46,45,34,-1,37,38,47,-1,47,46,37,-1,39,36,48,-1,48,47,39,-1,36,32,49,-1,49,48,36,-1,33,30,50,-1,50,49,33,-1,30,28,44,-1,44,50,30,-1,7,29,52,-1,52,51,7,-1,29,31,53,-1,53,52,29,-1,31,8,54,-1,54,53,31,-1,16,20,55,-1,55,54,16,-1,20,21,56,-1,56,55,20,-1,24,18,57,-1,57,56,24,-1,18,13,51,-1,51,57,18,-1});
  }
}
protected class MFVec3f312 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0076f,-0.0098f,-0.0976f,0.001f,-0.0199f,-0.0857f,0.0023f,-0.0109f,-0.0855f,-0.0083f,-0.0205f,-0.088f,-0.0094f,-0.0109f,-0.0884f,-0.0085f,-0.0014f,-0.0879f,0.0014f,-0.0004f,-0.0856f,0.0036f,0.0002f,-0.0948f,-0.0061f,-0.0182f,-0.0985f,-0.0063f,-0.0005f,-0.0985f,0.0036f,-0.018f,-0.0951f,0.0058f,-0.0004f,-0.0945f,0.0056f,-0.0081f,-0.093f,0.0043f,-0.01f,-0.0932f,0.0065f,-0.0184f,-0.0993f,0.0068f,0.001f,-0.0999f,0.0059f,-0.0176f,-0.0944f,-0.0068f,-0.0183f,-0.1088f,0.0071f,-0.0192f,-0.1053f,-0.0061f,0.0019f,-0.1078f,0.0072f,0.0034f,-0.1044f,-0.0071f,-0.0005f,-0.1047f,-0.0071f,-0.0171f,-0.1046f,-0.0081f,-0.0013f,-0.0995f,-0.0081f,-0.0179f,-0.0994f,-0.0084f,-0.0105f,-0.0984f,0.0059f,-0.0161f,-0.1114f,-0.0027f,-0.0156f,-0.1135f,-0.0022f,-0.0003f,-0.1128f,0.006f,0.0006f,-0.1106f,-0.0117f,-0.015f,-0.1089f,-0.0116f,-0.0146f,-0.1074f,-0.0129f,-0.0152f,-0.1038f,-0.0131f,-0.0104f,-0.1032f,-0.0128f,-0.0034f,-0.1041f,-0.0115f,-0.0027f,-0.1082f,-0.0111f,-0.0026f,-0.1083f,0.0113f,-0.016f,-0.1005f,0.0116f,-0.0163f,-0.1035f,0.0117f,-0.0007f,-0.1029f,0.0116f,-0.0014f,-0.1016f,0.0108f,-0.0025f,-0.0975f,0.0107f,-0.0082f,-0.0964f,0.0109f,-0.0154f,-0.0975f});
  }
}
protected class MFVec2f313 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2033f,0.0375f,0.1866f,0.0487f,0.186f,0.0472f,0.1969f,0.0343f,0.1963f,0.0328f,0.1973f,0.0341f,0.1873f,0.048f,0.1915f,0.0602f,0.1915f,0.0578f,0.1897f,0.0535f,0.1888f,0.0569f,0.2031f,0.037f,0.2012f,0.0381f,0.2444f,0.0847f,0.2208f,0.06f,0.2111f,0.0557f,0.2254f,0.054f,0.2483f,0.0809f,0.2464f,0.0799f,0.2587f,0.0865f,0.225f,0.0604f,0.2239f,0.0673f,0.2238f,0.0671f,0.267f,0.0845f,0.2486f,0.0741f,0.2486f,0.074f,0.2049f,0.059f,0.1896f,0.055f,0.2102f,0.0461f,0.1952f,0.0651f,0.2083f,0.0443f,0.195f,0.0629f,0.2109f,0.0476f,0.2048f,0.0404f,0.2576f,0.0911f,0.2063f,0.0414f,0.2083f,0.0537f,0.2612f,0.0869f,0.2671f,0.0842f,0.2047f,0.0593f,0.1952f,0.0651f,0.2102f,0.0461f,0.2083f,0.0443f,0.195f,0.0629f,0.2102f,0.0461f,0.2063f,0.0414f,0.2612f,0.0869f,0.2671f,0.0842f,0.2083f,0.0537f,0.2109f,0.0476f,0.2083f,0.0443f,0.2444f,0.0847f,0.1952f,0.0651f,0.195f,0.0629f,0.1915f,0.0578f,0.225f,0.0604f,0.2239f,0.0673f,0.2464f,0.0799f});
  }
}
protected class MFFloat314 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat315 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32316 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,6,7,-1,7,1,0,-1,2,8,6,-1,6,0,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,1,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1});
  }
}
protected class MFInt32317 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,8,9,-1,9,1,0,-1,2,10,8,-1,8,0,2,-1,11,10,2,-1,2,3,11,-1,4,12,11,-1,11,3,4,-1,14,13,7,-1,7,6,14,-1,9,15,5,-1,5,1,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,5,24,-1,24,23,1,-1,6,7,25,-1,25,24,6,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1});
  }
}
protected class MFVec3f318 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0048f,-0.0188f,-0.0932f,0.0059f,-0.0104f,-0.0926f,-0.0066f,-0.0188f,-0.0957f,-0.0078f,-0.0104f,-0.0956f,-0.007f,-0.0047f,-0.0961f,0.0049f,-0.0041f,-0.093f,0.0053f,-0.0178f,-0.1009f,0.0066f,-0.0087f,-0.1007f,-0.004f,-0.0184f,-0.1032f,-0.0051f,-0.0087f,-0.1035f,-0.0042f,0.0007f,-0.1031f,0.0057f,0.0017f,-0.1008f,0.0054f,-0.0086f,-0.1057f,0.0044f,-0.0156f,-0.1059f,-0.0009f,-0.0159f,-0.1072f,-0.0017f,-0.0087f,-0.1075f,-0.0011f,-0.0014f,-0.1071f,0.0048f,-0.0008f,-0.1058f,0.0012f,-0.0154f,-0.0905f,0.0018f,-0.0104f,-0.0901f,0.0014f,-0.0076f,-0.0904f,-0.0049f,-0.0079f,-0.0914f,-0.0052f,-0.0103f,-0.0916f,-0.0045f,-0.0154f,-0.0918f});
  }
}
protected class MFVec2f319 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1822f,0.0458f,0.1809f,0.0434f,0.1953f,0.0282f,0.1948f,0.024f,0.1933f,0.0293f,0.1816f,0.0411f,0.1287f,0.0243f,0.0943f,0.0785f,0.1866f,0.0487f,0.186f,0.0472f,0.1969f,0.0343f,0.1963f,0.0328f,0.1973f,0.0341f,0.1322f,0.09f,0.157f,0.0552f,0.1873f,0.048f,0.186f,0.0472f,0.1866f,0.0487f,0.1969f,0.0343f,0.1963f,0.0328f,0.1973f,0.0341f,0.157f,0.0552f,0.1822f,0.0458f,0.1809f,0.0434f,0.1816f,0.0411f,0.0943f,0.0785f,0.1948f,0.024f,0.1953f,0.0282f});
  }
}
protected class MFFloat320 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat321 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32322 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,6,7,-1,7,3,0,-1,1,8,6,-1,6,0,1,-1,9,8,1,-1,1,2,9,-1,4,10,9,-1,9,2,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,3,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1});
  }
}
protected class MFInt32323 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,8,9,-1,9,3,0,-1,1,10,8,-1,8,0,1,-1,11,10,1,-1,1,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,7,-1,7,6,14,-1,9,15,5,-1,5,3,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1});
  }
}
protected class MFVec3f324 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0033f,-0.014f,-0.0961f,-0.0038f,-0.014f,-0.0977f,-0.0045f,-0.0082f,-0.0958f,0.0036f,-0.0082f,-0.0943f,-0.0038f,-0.0043f,-0.0973f,0.0031f,-0.004f,-0.0957f,0.0063f,-0.0159f,-0.1005f,0.0074f,-0.0075f,-0.1f,-0.0051f,-0.0159f,-0.1031f,-0.0063f,-0.0075f,-0.103f,-0.0054f,-0.0018f,-0.1035f,0.0064f,-0.0012f,-0.1004f,0.0059f,-0.0076f,-0.1047f,0.0051f,-0.0134f,-0.1051f,-0.002f,-0.0134f,-0.1067f,-0.0029f,-0.0075f,-0.1065f,-0.0023f,-0.0042f,-0.107f,0.0053f,-0.0039f,-0.105f});
  }
}
protected class MFVec2f325 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1831f,0.0355f,0.1904f,0.0263f,0.1901f,0.0243f,0.1819f,0.0351f,0.1913f,0.0249f,0.182f,0.0368f,0.088f,0.0133f,0.0677f,0.0461f,0.1822f,0.0458f,0.1809f,0.0434f,0.1953f,0.0282f,0.1948f,0.024f,0.1933f,0.0293f,0.0943f,0.0785f,0.1287f,0.0243f,0.1816f,0.0411f,0.1809f,0.0434f,0.1822f,0.0458f,0.1953f,0.0282f,0.1948f,0.024f,0.1933f,0.0293f,0.1287f,0.0243f});
  }
}
protected class MFFloat326 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat327 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32328 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,10,-1,2,12,17,-1,17,9,2,-1,6,0,11,-1,11,14,6,-1,2,1,7,-1,7,8,2,-1,3,4,19,-1,19,18,3,-1,13,22,20,-1,20,5,13,-1,5,4,10,-1,10,9,5,-1,6,7,1,-1,1,0,6,-1,8,15,12,-1,12,2,8,-1,9,17,13,-1,13,5,9,-1,0,3,16,-1,16,11,0,-1,9,10,1,-1,1,2,9,-1,3,0,10,-1,10,4,3,-1,16,3,18,-1,18,21,16,-1,19,4,5,-1,5,20,19,-1,33,34,35,-1,33,35,36,-1,32,33,36,-1,27,24,25,-1,25,26,27,-1,39,40,41,-1,45,39,41,-1,44,45,41,-1,28,29,23,-1,28,23,24,-1,24,27,28,-1,29,30,31,-1,31,23,29,-1,11,16,24,-1,24,23,11,-1,16,21,25,-1,25,24,16,-1,32,36,37,-1,37,38,32,-1,22,13,27,-1,27,26,22,-1,13,17,28,-1,28,27,13,-1,17,12,29,-1,29,28,17,-1,12,15,30,-1,30,29,12,-1,44,41,42,-1,42,43,44,-1,14,11,23,-1,23,31,14,-1,21,18,33,-1,33,32,21,-1,18,19,34,-1,34,33,18,-1,19,20,35,-1,35,34,19,-1,20,22,36,-1,36,35,20,-1,22,26,37,-1,37,36,22,-1,26,25,38,-1,38,37,26,-1,25,21,32,-1,32,38,25,-1,7,6,40,-1,40,39,7,-1,6,14,41,-1,41,40,6,-1,14,31,42,-1,42,41,14,-1,31,30,43,-1,43,42,31,-1,30,15,44,-1,44,43,30,-1,15,8,45,-1,45,44,15,-1,8,7,39,-1,39,45,8,-1});
  }
}
protected class MFInt32329 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,10,-1,2,12,17,-1,17,9,2,-1,6,0,11,-1,11,14,6,-1,2,1,7,-1,7,8,2,-1,3,4,19,-1,19,18,3,-1,13,22,20,-1,20,5,13,-1,5,4,10,-1,10,9,5,-1,6,7,1,-1,1,0,6,-1,8,15,12,-1,12,2,8,-1,9,17,13,-1,13,5,9,-1,0,3,16,-1,16,11,0,-1,9,10,1,-1,1,2,9,-1,3,0,10,-1,10,4,3,-1,16,3,18,-1,18,21,16,-1,19,4,5,-1,5,20,19,-1,33,34,35,-1,33,35,36,-1,32,33,36,-1,27,24,25,-1,25,26,27,-1,39,40,41,-1,45,39,41,-1,44,45,41,-1,28,29,11,-1,28,23,24,-1,24,27,28,-1,29,30,31,-1,31,23,29,-1,11,16,24,-1,24,23,11,-1,16,21,25,-1,25,24,16,-1,32,36,37,-1,37,38,32,-1,22,13,27,-1,27,26,22,-1,13,17,28,-1,28,27,13,-1,17,12,29,-1,29,28,17,-1,12,15,30,-1,30,29,12,-1,44,41,42,-1,42,43,44,-1,14,11,23,-1,23,31,14,-1,21,18,33,-1,33,32,21,-1,18,19,34,-1,34,33,18,-1,19,20,35,-1,35,34,19,-1,20,22,36,-1,36,35,20,-1,22,26,37,-1,37,36,22,-1,26,25,38,-1,38,37,26,-1,25,21,32,-1,32,38,25,-1,7,6,40,-1,40,39,7,-1,6,14,41,-1,41,40,6,-1,14,31,42,-1,42,41,14,-1,31,30,43,-1,43,42,31,-1,30,15,44,-1,44,43,30,-1,15,8,45,-1,45,44,15,-1,8,7,39,-1,39,45,8,-1});
  }
}
protected class MFVec3f330 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0076f,-0.0276f,-0.0761f,-0.0135f,-0.0184f,-0.0694f,-0.0104f,-0.0041f,-0.0669f,-0.0073f,-0.0261f,-0.0934f,-0.0112f,-0.0184f,-0.0929f,-0.0074f,-0.0014f,-0.092f,-0.0083f,-0.0256f,-0.0567f,-0.012f,-0.0184f,-0.0576f,-0.0099f,-0.0071f,-0.0567f,-0.0091f,-0.0028f,-0.0783f,-0.0124f,-0.0184f,-0.0812f,0.0066f,-0.0276f,-0.0664f,0.0045f,-0.0004f,-0.062f,0.0065f,0.0058f,-0.0887f,0.0042f,-0.0249f,-0.0524f,0.0049f,-0.0046f,-0.0514f,0.0075f,-0.0271f,-0.0903f,0.0051f,0.0026f,-0.0753f,-0.0039f,-0.0255f,-0.1039f,-0.0076f,-0.0182f,-0.1057f,-0.0041f,0f,-0.1038f,0.0088f,-0.0266f,-0.1004f,0.0081f,0.0105f,-0.1001f,0.0119f,-0.0232f,-0.0663f,0.0127f,-0.0227f,-0.0897f,0.0136f,-0.0224f,-0.0957f,0.0131f,0.0044f,-0.0955f,0.0122f,0.002f,-0.0895f,0.0108f,-0.0013f,-0.0758f,0.0102f,-0.0042f,-0.0628f,0.0107f,-0.0072f,-0.0553f,0.0099f,-0.0212f,-0.0559f,0.0115f,-0.0239f,-0.1073f,0.0006f,-0.023f,-0.1099f,-0.0019f,-0.0177f,-0.1114f,0.0011f,-0.0012f,-0.1096f,0.0115f,0.0074f,-0.1071f,0.0144f,0.0034f,-0.1037f,0.0148f,-0.0209f,-0.1039f,-0.0088f,-0.019f,-0.0535f,-0.0064f,-0.0233f,-0.0529f,0.004f,-0.0228f,-0.0487f,0.0081f,-0.0204f,-0.0511f,0.0088f,-0.011f,-0.0506f,0.0051f,-0.0095f,-0.0479f,-0.0072f,-0.0114f,-0.0528f});
  }
}
protected class MFVec2f331 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2299f,0.0317f,0.2316f,0.0247f,0.2265f,0.0269f,0.241f,0.0419f,0.244f,0.0359f,0.2401f,0.0413f,0.2245f,0.0286f,0.226f,0.0221f,0.2232f,0.0245f,0.2333f,0.0341f,0.2378f,0.0303f,0.2142f,0.0508f,0.2117f,0.0481f,0.2254f,0.0615f,0.2102f,0.0461f,0.2083f,0.0443f,0.2202f,0.0585f,0.2186f,0.0548f,0.2469f,0.052f,0.2512f,0.047f,0.2484f,0.051f,0.2292f,0.0691f,0.2342f,0.0682f,0.2142f,0.0508f,0.2202f,0.0585f,0.2292f,0.0691f,0.2342f,0.0682f,0.2254f,0.0615f,0.2186f,0.0548f,0.2117f,0.0481f,0.2083f,0.0443f,0.2102f,0.0461f,0.2292f,0.0691f,0.2469f,0.052f,0.2512f,0.047f,0.2484f,0.051f,0.2342f,0.0682f,0.2342f,0.0682f,0.2292f,0.0691f,0.226f,0.0221f,0.2245f,0.0286f,0.2102f,0.0461f,0.2102f,0.0461f,0.2083f,0.0443f,0.2083f,0.0443f,0.2232f,0.0245f});
  }
}
protected class MFFloat332 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat333 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32334 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,11,-1,11,10,2,-1,0,5,14,-1,14,12,0,-1,2,10,13,-1,13,6,2,-1,0,12,11,-1,11,3,0,-1,15,5,0,-1,0,16,15,-1,17,3,2,-1,2,1,17,-1,16,0,3,-1,3,17,16,-1,2,6,4,-1,4,1,2,-1,6,8,4,-1,7,15,18,-1,18,9,7,-1,8,9,18,-1,18,4,8,-1,7,5,15,-1,1,19,20,-1,20,17,1,-1,17,20,21,-1,21,16,17,-1,16,21,22,-1,22,15,16,-1,22,23,18,-1,18,15,22,-1,23,24,4,-1,4,18,23,-1,24,19,1,-1,1,4,24,-1,25,26,27,-1,25,27,28,-1,29,25,28,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,19,24,20,-1,30,31,32,-1,32,33,30,-1,33,34,35,-1,35,36,30,-1,33,35,30,-1,10,11,26,-1,26,25,10,-1,11,12,27,-1,27,26,11,-1,12,14,28,-1,28,27,12,-1,14,13,29,-1,29,28,14,-1,13,10,25,-1,25,29,13,-1,6,13,31,-1,31,30,6,-1,13,14,32,-1,32,31,13,-1,14,5,33,-1,33,32,14,-1,5,7,34,-1,34,33,5,-1,7,9,35,-1,35,34,7,-1,9,8,36,-1,36,35,9,-1,8,6,30,-1,30,36,8,-1});
  }
}
protected class MFInt32335 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,24,-1,24,23,0,-1,3,2,27,-1,27,25,3,-1,0,23,26,-1,26,4,0,-1,3,25,24,-1,24,1,3,-1,5,8,7,-1,7,6,5,-1,9,12,11,-1,11,10,9,-1,6,7,14,-1,14,13,6,-1,11,15,17,-1,17,10,11,-1,15,18,17,-1,16,5,20,-1,20,19,16,-1,18,21,22,-1,22,17,18,-1,16,8,5,-1,31,34,35,-1,35,30,31,-1,30,35,36,-1,36,29,30,-1,29,36,37,-1,37,28,29,-1,37,38,33,-1,33,28,37,-1,38,39,32,-1,32,33,38,-1,39,34,31,-1,31,32,39,-1,40,41,42,-1,40,42,43,-1,44,40,43,-1,39,38,37,-1,37,36,35,-1,39,37,35,-1,34,39,35,-1,45,46,47,-1,47,48,45,-1,48,49,50,-1,50,51,45,-1,48,50,45,-1,23,24,41,-1,41,40,23,-1,24,25,42,-1,42,41,24,-1,25,27,43,-1,43,42,25,-1,27,26,44,-1,44,43,27,-1,26,23,40,-1,40,44,26,-1,4,26,46,-1,46,45,4,-1,26,27,47,-1,47,46,26,-1,27,2,48,-1,48,47,27,-1,8,16,49,-1,49,48,8,-1,16,19,50,-1,50,49,16,-1,21,18,51,-1,51,50,21,-1,18,15,45,-1,45,51,18,-1});
  }
}
protected class MFVec3f336 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0063f,-0.0025f,-0.1035f,-0.0052f,-0.0194f,-0.098f,-0.0052f,-0.0177f,-0.1041f,-0.0078f,-0.0111f,-0.1037f,0.0039f,-0.0171f,-0.0955f,0.0071f,0.0002f,-0.1001f,0.0071f,-0.0164f,-0.1f,0.0061f,-0.0006f,-0.0949f,0.0061f,-0.0172f,-0.0948f,0.0058f,-0.0098f,-0.0938f,-0.0051f,-0.0183f,-0.1085f,-0.0087f,-0.0111f,-0.1095f,-0.0066f,0.0001f,-0.1085f,0.0074f,-0.0176f,-0.1042f,0.0081f,0.0026f,-0.1032f,0.004f,-0.0004f,-0.0954f,-0.0059f,-0.0021f,-0.0981f,-0.0072f,-0.0106f,-0.0974f,0.0047f,-0.0096f,-0.0939f,-0.0059f,-0.0198f,-0.0952f,-0.0078f,-0.0115f,-0.095f,-0.0066f,-0.0036f,-0.0952f,0.0037f,-0.0022f,-0.0929f,0.0043f,-0.0108f,-0.0918f,0.0031f,-0.018f,-0.093f,-0.0018f,-0.0152f,-0.113f,-0.0042f,-0.0105f,-0.1136f,-0.0027f,-0.0022f,-0.1129f,0.0067f,-0.0006f,-0.1097f,0.0062f,-0.0147f,-0.1104f,0.011f,-0.0141f,-0.1008f,0.0109f,-0.0148f,-0.1033f,0.0115f,-0.0012f,-0.1026f,0.0111f,-0.0022f,-0.1012f,0.0104f,-0.0028f,-0.0971f,0.01f,-0.0096f,-0.0962f,0.0102f,-0.0147f,-0.0969f});
  }
}
protected class MFVec2f337 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2192f,0.0256f,0.2205f,0.0195f,0.2048f,0.0404f,0.2199f,0.022f,0.2063f,0.0414f,0.2047f,0.0523f,0.1956f,0.0462f,0.1979f,0.0386f,0.2109f,0.0476f,0.277f,0.1031f,0.2673f,0.0987f,0.263f,0.1f,0.2744f,0.109f,0.1892f,0.0439f,0.1911f,0.0375f,0.2576f,0.0911f,0.2083f,0.0537f,0.263f,0.0893f,0.2612f,0.0869f,0.2047f,0.0593f,0.2048f,0.0593f,0.2671f,0.0842f,0.2673f,0.0839f,0.2245f,0.0286f,0.226f,0.0221f,0.2232f,0.0245f,0.2102f,0.0461f,0.2083f,0.0443f,0.2039f,0.0358f,0.2152f,0.0224f,0.2154f,0.0203f,0.2126f,0.0258f,0.2034f,0.0366f,0.2033f,0.0375f,0.2114f,0.0219f,0.2132f,0.0168f,0.2123f,0.0196f,0.1999f,0.0356f,0.201f,0.0349f,0.2011f,0.0354f,0.2245f,0.0286f,0.226f,0.0221f,0.2232f,0.0245f,0.2083f,0.0443f,0.2102f,0.0461f,0.2576f,0.0911f,0.2102f,0.0461f,0.2083f,0.0443f,0.2048f,0.0404f,0.2083f,0.0537f,0.2047f,0.0593f,0.2612f,0.0869f});
  }
}
protected class MFFloat338 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat339 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32340 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,0,1,-1,1,7,6,-1,7,1,2,-1,2,8,7,-1,8,2,3,-1,3,9,8,-1,3,4,10,-1,10,9,3,-1,4,5,11,-1,11,10,4,-1,5,0,6,-1,6,11,5,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,1,0,19,-1,19,18,1,-1,0,5,20,-1,20,19,0,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,1,18,-1,18,23,2,-1});
  }
}
protected class MFInt32341 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,1,0,-1,0,7,6,-1,7,0,2,-1,2,8,7,-1,8,2,3,-1,3,9,8,-1,3,4,10,-1,10,9,3,-1,4,5,11,-1,11,10,4,-1,5,1,6,-1,6,11,5,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1});
  }
}
protected class MFVec3f342 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0056f,-0.0177f,-0.0956f,-0.0072f,-0.0115f,-0.0958f,-0.0063f,-0.0047f,-0.0956f,0.005f,-0.004f,-0.0934f,0.0058f,-0.0116f,-0.0929f,0.0041f,-0.0176f,-0.0937f,-0.0036f,-0.0169f,-0.1028f,-0.0055f,-0.0087f,-0.1026f,-0.0043f,-0.0008f,-0.1028f,0.006f,0.0006f,-0.1005f,0.0067f,-0.008f,-0.0994f,0.0055f,-0.0152f,-0.1006f,-0.0011f,-0.0143f,-0.1056f,-0.0024f,-0.0086f,-0.1053f,-0.0015f,-0.0028f,-0.1056f,0.0048f,-0.002f,-0.1043f,0.0052f,-0.0079f,-0.1033f,0.0044f,-0.0132f,-0.1043f,-0.0045f,-0.0113f,-0.0918f,-0.0038f,-0.0143f,-0.0917f,0.001f,-0.0143f,-0.0909f,0.0018f,-0.0113f,-0.0903f,0.0014f,-0.0076f,-0.0907f,-0.0041f,-0.0079f,-0.0917f});
  }
}
protected class MFVec2f343 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2109f,0.0133f,0.2102f,0.0181f,0.2093f,0.0169f,0.1959f,0.0354f,0.1986f,0.0324f,0.1989f,0.0342f,0.2114f,0.0219f,0.2132f,0.0168f,0.2123f,0.0196f,0.1999f,0.0356f,0.201f,0.0349f,0.2011f,0.0354f,0.2114f,0.0219f,0.2132f,0.0168f,0.2123f,0.0196f,0.1999f,0.0356f,0.201f,0.0349f,0.2011f,0.0354f,0.2109f,0.0133f,0.2102f,0.0181f,0.1989f,0.0342f,0.1986f,0.0324f,0.1959f,0.0354f,0.2093f,0.0169f});
  }
}
protected class MFFloat344 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat345 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32346 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,4,-1,4,3,2,-1,0,5,4,-1,4,1,0,-1,7,6,0,-1,0,1,7,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,10,9,3,-1,3,4,10,-1,5,11,10,-1,10,4,5,-1,0,6,11,-1,11,5,0,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1});
  }
}
protected class MFInt32347 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,3,2,1,-1,5,4,3,-1,3,0,5,-1,9,8,5,-1,5,0,9,-1,1,10,9,-1,9,0,1,-1,12,11,7,-1,7,6,12,-1,14,13,2,-1,2,3,14,-1,4,15,14,-1,14,3,4,-1,5,8,15,-1,15,4,5,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,11,12,19,-1,19,18,11,-1,13,14,20,-1,20,19,13,-1,14,15,21,-1,21,20,14,-1,15,8,16,-1,16,21,15,-1});
  }
}
protected class MFVec3f348 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.003f,-0.0153f,-0.0974f,-0.0051f,-0.0095f,-0.0954f,-0.004f,-0.0044f,-0.0966f,0.0025f,-0.004f,-0.0952f,0.0024f,-0.0093f,-0.0939f,0.0026f,-0.0153f,-0.0963f,-0.0047f,-0.0154f,-0.1033f,-0.0063f,-0.0092f,-0.1036f,-0.0054f,-0.0024f,-0.1033f,0.0059f,-0.0017f,-0.1011f,0.0068f,-0.0093f,-0.1006f,0.005f,-0.0153f,-0.1014f,-0.0019f,-0.0129f,-0.107f,-0.0029f,-0.0091f,-0.1072f,-0.0023f,-0.0047f,-0.107f,0.0046f,-0.0043f,-0.1057f,0.0051f,-0.0091f,-0.1053f,0.004f,-0.0128f,-0.1059f});
  }
}
protected class MFVec2f349 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2048f,0.0135f,0.2053f,0.0142f,0.1964f,0.026f,0.1976f,0.0232f,0.1977f,0.0271f,0.2052f,0.017f,0.0639f,0.0523f,0.0903f,0.0107f,0.2102f,0.0181f,0.2109f,0.0133f,0.2093f,0.0169f,0.1317f,0.0215f,0.0951f,0.0836f,0.1959f,0.0354f,0.1986f,0.0324f,0.1989f,0.0342f,0.2102f,0.0181f,0.2109f,0.0133f,0.2093f,0.0169f,0.0951f,0.0836f,0.1986f,0.0324f,0.1989f,0.0342f});
  }
}
protected class MFFloat350 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat351 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32352 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,10,11,-1,11,5,0,-1,1,0,5,-1,5,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,1,6,-1,6,9,4,-1,2,7,26,-1,26,27,2,-1,8,5,11,-1,11,7,8,-1,9,6,5,-1,5,8,9,-1,11,10,13,-1,13,12,11,-1,7,11,12,-1,12,26,7,-1,16,15,14,-1,14,17,16,-1,19,18,15,-1,15,16,19,-1,22,21,20,-1,20,23,22,-1,23,20,24,-1,24,25,23,-1,25,24,18,-1,18,19,25,-1,22,27,26,-1,26,21,22,-1,20,21,14,-1,14,15,20,-1,24,20,15,-1,15,18,24,-1,14,12,13,-1,13,17,14,-1,21,26,12,-1,12,14,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,10,0,29,-1,29,28,10,-1,0,1,30,-1,30,29,0,-1,1,4,31,-1,31,30,1,-1,4,3,32,-1,32,31,4,-1,3,2,33,-1,33,32,3,-1,2,27,34,-1,34,33,2,-1,27,22,35,-1,35,34,27,-1,22,23,36,-1,36,35,22,-1,23,25,37,-1,37,36,23,-1,25,19,38,-1,38,37,25,-1,19,16,39,-1,39,38,19,-1,16,17,40,-1,40,39,16,-1,17,13,41,-1,41,40,17,-1,13,10,28,-1,28,41,13,-1});
  }
}
protected class MFInt32353 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,4,3,9,-1,9,10,4,-1,3,5,11,-1,11,9,3,-1,5,2,8,-1,8,11,5,-1,12,13,15,-1,15,14,12,-1,9,7,6,-1,6,10,9,-1,11,8,7,-1,7,9,11,-1,6,0,17,-1,17,18,6,-1,10,6,18,-1,18,16,10,-1,21,20,19,-1,19,22,21,-1,24,23,20,-1,20,21,24,-1,27,26,25,-1,25,28,27,-1,28,25,29,-1,29,30,28,-1,30,29,23,-1,23,24,30,-1,31,34,33,-1,33,32,31,-1,25,26,19,-1,19,20,25,-1,29,25,20,-1,20,23,29,-1,19,35,36,-1,36,22,19,-1,26,37,35,-1,35,19,26,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,43,46,50,-1,39,43,50,-1,39,50,51,-1,39,51,38,-1,0,1,39,-1,39,38,0,-1,1,2,40,-1,40,39,1,-1,2,5,41,-1,41,40,2,-1,5,3,42,-1,42,41,5,-1,3,4,43,-1,43,42,3,-1,12,14,44,-1,44,43,12,-1,34,31,45,-1,45,44,34,-1,27,28,46,-1,46,45,27,-1,28,30,47,-1,47,46,28,-1,30,24,48,-1,48,47,30,-1,24,21,49,-1,49,48,24,-1,21,22,50,-1,50,49,21,-1,22,36,51,-1,51,50,22,-1,17,0,38,-1,38,51,17,-1});
  }
}
protected class MFVec3f354 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0938f,0.0165f,-0.0184f,0.1294f,0.0173f,-0.0624f,0.034f,0.013f,-0.19f,0.0887f,0.0132f,-0.1643f,0.1193f,0.0156f,-0.1239f,0.0851f,-0.0077f,-0.0351f,0.1161f,-0.007f,-0.0694f,0.0357f,-0.0104f,-0.1675f,0.0808f,-0.0099f,-0.1488f,0.1087f,-0.0088f,-0.1173f,0.0366f,0.0158f,-0.0046f,0.0357f,-0.0085f,-0.0253f,-0.0002f,-0.0085f,-0.0253f,-0.0002f,0.0158f,-0.0046f,-0.0361f,-0.0085f,-0.0253f,-0.0854f,-0.0077f,-0.0351f,-0.0942f,0.0165f,-0.0184f,-0.037f,0.0158f,-0.0046f,-0.1164f,-0.007f,-0.0694f,-0.1298f,0.0173f,-0.0624f,-0.0812f,-0.0099f,-0.1488f,-0.036f,-0.0104f,-0.1675f,-0.0344f,0.013f,-0.19f,-0.0891f,0.0132f,-0.1643f,-0.1091f,-0.0088f,-0.1173f,-0.1196f,0.0156f,-0.1239f,-0.0002f,-0.0104f,-0.1675f,-0.0002f,0.013f,-0.19f,0.036f,0.0246f,-0.0097f,0.091f,0.0246f,-0.0229f,0.1241f,0.0246f,-0.0638f,0.1145f,0.0246f,-0.1219f,0.0855f,0.0246f,-0.1588f,0.0329f,0.0246f,-0.1835f,-0.0002f,0.0246f,-0.1835f,-0.0333f,0.0246f,-0.1835f,-0.0858f,0.0246f,-0.1588f,-0.1149f,0.0246f,-0.1219f,-0.1245f,0.0246f,-0.0638f,-0.0914f,0.0246f,-0.0229f,-0.0364f,0.0246f,-0.0097f,-0.0002f,0.0246f,-0.0097f});
  }
}
protected class MFVec2f355 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.019f,0.2349f,0.1011f,0.241f,0.1445f,0.2419f,0.2369f,0.2375f,0.3561f,0.2404f,0.1927f,0.24f,0.0206f,0.2122f,0.1067f,0.2154f,0.1463f,0.2162f,0.227f,0.2131f,0.3536f,0.2151f,0.1879f,0.2143f,0.3553f,0.2398f,0.3555f,0.2151f,0.3557f,0.2401f,0.3545f,0.2151f,0.3536f,0.2151f,0.019f,0.2349f,0.0206f,0.2122f,0.0206f,0.2122f,0.1067f,0.2154f,0.1011f,0.241f,0.019f,0.2349f,0.1463f,0.2162f,0.1445f,0.2419f,0.227f,0.2131f,0.3536f,0.2151f,0.3561f,0.2404f,0.2369f,0.2375f,0.1879f,0.2143f,0.1927f,0.24f,0.3553f,0.2398f,0.3555f,0.2151f,0.3545f,0.2151f,0.3557f,0.2401f,0.0206f,0.2122f,0.019f,0.2349f,0.3536f,0.2151f,0.019f,0.2349f,0.1011f,0.241f,0.1445f,0.2419f,0.1927f,0.24f,0.2369f,0.2375f,0.3561f,0.2404f,0.3557f,0.2401f,0.3553f,0.2398f,0.2369f,0.2375f,0.1927f,0.24f,0.1445f,0.2419f,0.1011f,0.241f,0.019f,0.2349f,0.019f,0.2349f});
  }
}
protected class MFFloat356 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat357 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32358 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,6,0,-1,0,3,11,-1,7,1,0,-1,0,6,7,-1,9,8,2,-1,2,4,9,-1,10,9,4,-1,4,5,10,-1,10,5,1,-1,1,7,10,-1,25,11,3,-1,3,26,25,-1,2,8,12,-1,12,27,2,-1,13,16,15,-1,15,14,13,-1,17,14,15,-1,15,18,17,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,23,17,18,-1,18,24,23,-1,25,26,16,-1,16,13,25,-1,21,27,12,-1,12,20,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,2,33,-1,33,32,4,-1,2,27,34,-1,34,33,2,-1,27,21,35,-1,35,34,27,-1,21,22,36,-1,36,35,21,-1,22,24,37,-1,37,36,22,-1,24,18,38,-1,38,37,24,-1,18,15,39,-1,39,38,18,-1,15,16,40,-1,40,39,15,-1,16,26,41,-1,41,40,16,-1,26,3,28,-1,28,41,26,-1,6,11,43,-1,43,42,6,-1,11,25,44,-1,44,43,11,-1,25,13,45,-1,45,44,25,-1,13,14,46,-1,46,45,13,-1,14,17,47,-1,47,46,14,-1,17,23,48,-1,48,47,17,-1,23,19,49,-1,49,48,23,-1,19,20,50,-1,50,49,19,-1,20,12,51,-1,51,50,20,-1,12,8,52,-1,52,51,12,-1,8,9,53,-1,53,52,8,-1,9,10,54,-1,54,53,9,-1,10,7,55,-1,55,54,10,-1,7,6,42,-1,42,55,7,-1});
  }
}
protected class MFInt32359 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15,9,0,-1,0,4,15,-1,10,1,0,-1,0,9,10,-1,13,12,2,-1,2,5,13,-1,14,13,5,-1,5,6,14,-1,14,6,1,-1,1,10,14,-1,17,15,4,-1,4,7,17,-1,3,11,16,-1,16,8,3,-1,18,21,20,-1,20,19,18,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,29,27,-1,27,24,28,-1,28,22,23,-1,23,29,28,-1,30,31,21,-1,21,18,30,-1,32,35,34,-1,34,33,32,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,2,41,-1,41,40,5,-1,3,8,42,-1,42,41,3,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,7,4,36,-1,36,49,7,-1,9,15,51,-1,51,50,9,-1,15,17,52,-1,52,51,15,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,16,11,60,-1,60,59,16,-1,12,13,61,-1,61,60,12,-1,13,14,62,-1,62,61,13,-1,14,10,63,-1,63,62,14,-1,10,9,50,-1,50,63,10,-1});
  }
}
protected class MFVec3f360 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0904f,0.0082f,-0.0262f,0.1248f,0.0086f,-0.0655f,0.0323f,0.0065f,-0.18f,0.034f,0.0079f,-0.0137f,0.086f,0.0066f,-0.1562f,0.1156f,0.0078f,-0.1208f,0.0938f,-0.0078f,-0.0184f,0.1294f,-0.007f,-0.0624f,0.034f,-0.0113f,-0.19f,0.0887f,-0.0111f,-0.1643f,0.1193f,-0.0088f,-0.1239f,0.0366f,-0.0085f,-0.0046f,-0.0002f,-0.0113f,-0.19f,-0.037f,-0.0085f,-0.0046f,-0.0942f,-0.0078f,-0.0184f,-0.0908f,0.0082f,-0.0262f,-0.0344f,0.0079f,-0.0137f,-0.1298f,-0.007f,-0.0624f,-0.1252f,0.0086f,-0.0655f,-0.0891f,-0.0111f,-0.1643f,-0.0344f,-0.0113f,-0.19f,-0.0326f,0.0065f,-0.18f,-0.0864f,0.0066f,-0.1562f,-0.1196f,-0.0088f,-0.1239f,-0.116f,0.0078f,-0.1208f,-0.0002f,-0.0085f,-0.0046f,-0.0002f,0.0079f,-0.0137f,-0.0002f,0.0065f,-0.18f,0.0334f,0.0153f,-0.0192f,0.0875f,0.0153f,-0.0311f,0.119f,0.0153f,-0.0672f,0.1105f,0.0153f,-0.1185f,0.0826f,0.0153f,-0.1517f,0.0311f,0.0153f,-0.1746f,-0.0002f,0.0153f,-0.1746f,-0.0315f,0.0153f,-0.1746f,-0.083f,0.0153f,-0.1517f,-0.1108f,0.0153f,-0.1185f,-0.1194f,0.0153f,-0.0672f,-0.0878f,0.0153f,-0.0311f,-0.0338f,0.0153f,-0.0192f,-0.0002f,0.0153f,-0.0192f,0.0866f,-0.0189f,-0.0265f,0.0343f,-0.0189f,-0.014f,-0.0002f,-0.0189f,-0.014f,-0.0347f,-0.0189f,-0.014f,-0.087f,-0.0189f,-0.0265f,-0.1183f,-0.0189f,-0.0653f,-0.1092f,-0.0189f,-0.1205f,-0.0816f,-0.0189f,-0.157f,-0.0316f,-0.0189f,-0.1804f,-0.0002f,-0.0189f,-0.1804f,0.0313f,-0.0189f,-0.1804f,0.0812f,-0.0189f,-0.157f,0.1089f,-0.0189f,-0.1205f,0.118f,-0.0189f,-0.0653f});
  }
}
protected class MFVec2f361 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1026f,0.2616f,0.1481f,0.2604f,0.3503f,0.2575f,0.3578f,0.2568f,0.0179f,0.2574f,0.2289f,0.2559f,0.1884f,0.2584f,0.0186f,0.2582f,0.3542f,0.2515f,0.1011f,0.241f,0.1445f,0.2419f,0.3553f,0.2398f,0.3561f,0.2404f,0.2369f,0.2375f,0.1927f,0.24f,0.019f,0.2349f,0.3557f,0.2401f,0.019f,0.2349f,0.019f,0.2349f,0.1011f,0.241f,0.1026f,0.2616f,0.0179f,0.2574f,0.1445f,0.2419f,0.1481f,0.2604f,0.2369f,0.2375f,0.3561f,0.2404f,0.3503f,0.2575f,0.2289f,0.2559f,0.1927f,0.24f,0.1884f,0.2584f,0.019f,0.2349f,0.0186f,0.2582f,0.3578f,0.2568f,0.3553f,0.2398f,0.3557f,0.2401f,0.3542f,0.2515f,0.0179f,0.2574f,0.1026f,0.2616f,0.1481f,0.2604f,0.1884f,0.2584f,0.2289f,0.2559f,0.3503f,0.2575f,0.3542f,0.2515f,0.3578f,0.2568f,0.2289f,0.2559f,0.1884f,0.2584f,0.1481f,0.2604f,0.1026f,0.2616f,0.0179f,0.2574f,0.0186f,0.2582f,0.1011f,0.241f,0.019f,0.2349f,0.019f,0.2349f,0.019f,0.2349f,0.1011f,0.241f,0.1445f,0.2419f,0.1927f,0.24f,0.2369f,0.2375f,0.3561f,0.2404f,0.3557f,0.2401f,0.3553f,0.2398f,0.2369f,0.2375f,0.1927f,0.24f,0.1445f,0.2419f});
  }
}
protected class MFFloat362 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat363 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32364 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,8,15,-1,15,16,1,-1,0,4,9,-1,9,6,0,-1,7,5,0,-1,0,6,7,-1,1,2,10,-1,10,8,1,-1,2,3,11,-1,11,10,2,-1,11,3,5,-1,5,7,11,-1,4,27,12,-1,12,9,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,17,18,-1,18,22,21,-1,13,14,24,-1,24,23,13,-1,23,24,26,-1,26,25,23,-1,26,21,22,-1,22,25,26,-1,19,20,12,-1,12,27,19,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,4,0,29,-1,29,28,4,-1,0,5,30,-1,30,29,0,-1,5,3,31,-1,31,30,5,-1,3,2,32,-1,32,31,3,-1,2,1,33,-1,33,32,2,-1,1,16,34,-1,34,33,1,-1,16,13,35,-1,35,34,16,-1,13,23,36,-1,36,35,13,-1,23,25,37,-1,37,36,23,-1,25,22,38,-1,38,37,25,-1,22,18,39,-1,39,38,22,-1,18,19,40,-1,40,39,18,-1,19,27,41,-1,41,40,19,-1,27,4,28,-1,28,41,27,-1,6,9,43,-1,43,42,6,-1,9,12,44,-1,44,43,9,-1,12,20,45,-1,45,44,12,-1,20,17,46,-1,46,45,20,-1,17,21,47,-1,47,46,17,-1,21,26,48,-1,48,47,21,-1,26,24,49,-1,49,48,26,-1,24,14,50,-1,50,49,24,-1,14,15,51,-1,51,50,14,-1,15,8,52,-1,52,51,15,-1,8,10,53,-1,53,52,8,-1,10,11,54,-1,54,53,10,-1,11,7,55,-1,55,54,11,-1,7,6,42,-1,42,55,7,-1});
  }
}
protected class MFInt32365 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,11,17,-1,17,7,4,-1,0,1,13,-1,13,9,0,-1,10,2,0,-1,0,9,10,-1,3,5,14,-1,14,12,3,-1,5,6,15,-1,15,14,5,-1,15,6,2,-1,2,10,15,-1,1,8,16,-1,16,13,1,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,1,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,16,52,-1,52,51,13,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,17,11,60,-1,60,59,17,-1,12,14,61,-1,61,60,12,-1,14,15,62,-1,62,61,14,-1,15,10,63,-1,63,62,15,-1,10,9,50,-1,50,63,10,-1});
  }
}
protected class MFVec3f366 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.087f,0.0079f,-0.0339f,0.0306f,0.0079f,-0.17f,0.0833f,0.0079f,-0.148f,0.112f,0.0079f,-0.1178f,0.0314f,0.0079f,-0.0227f,0.1203f,0.0079f,-0.0687f,0.0904f,-0.0081f,-0.0262f,0.1248f,-0.0077f,-0.0655f,0.0323f,-0.0099f,-0.18f,0.034f,-0.0085f,-0.0137f,0.086f,-0.0098f,-0.1562f,0.1156f,-0.0086f,-0.1208f,-0.0002f,-0.0085f,-0.0137f,-0.0309f,0.0079f,-0.17f,-0.0326f,-0.0099f,-0.18f,-0.0002f,-0.0099f,-0.18f,-0.0002f,0.0079f,-0.17f,-0.0908f,-0.0081f,-0.0262f,-0.0873f,0.0079f,-0.0339f,-0.0318f,0.0079f,-0.0227f,-0.0344f,-0.0085f,-0.0137f,-0.1252f,-0.0077f,-0.0655f,-0.1206f,0.0079f,-0.0687f,-0.0837f,0.0079f,-0.148f,-0.0864f,-0.0098f,-0.1562f,-0.1124f,0.0079f,-0.1178f,-0.116f,-0.0086f,-0.1208f,-0.0002f,0.0079f,-0.0227f,0.0306f,0.0165f,-0.0279f,0.0837f,0.0165f,-0.0386f,0.1141f,0.0165f,-0.0704f,0.1065f,0.0165f,-0.1154f,0.0797f,0.0165f,-0.1437f,0.0293f,0.0165f,-0.1647f,-0.0002f,0.0165f,-0.1647f,-0.0297f,0.0165f,-0.1647f,-0.0801f,0.0165f,-0.1437f,-0.1069f,0.0165f,-0.1154f,-0.1144f,0.0165f,-0.0704f,-0.084f,0.0165f,-0.0386f,-0.0309f,0.0165f,-0.0279f,-0.0002f,0.0165f,-0.0279f,0.0869f,-0.0162f,-0.0309f,0.0331f,-0.0162f,-0.019f,-0.0002f,-0.0162f,-0.019f,-0.0334f,-0.0162f,-0.019f,-0.0873f,-0.0162f,-0.0309f,-0.119f,-0.0162f,-0.0672f,-0.1104f,-0.0162f,-0.1186f,-0.0826f,-0.0162f,-0.1519f,-0.0313f,-0.0162f,-0.1746f,-0.0002f,-0.0162f,-0.1746f,0.031f,-0.0162f,-0.1746f,0.0822f,-0.0162f,-0.1519f,0.1101f,-0.0162f,-0.1186f,0.1186f,-0.0162f,-0.0672f});
  }
}
protected class MFVec2f367 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1041f,0.2822f,0.0168f,0.2798f,0.1518f,0.2789f,0.3444f,0.2746f,0.3604f,0.2737f,0.221f,0.2742f,0.1842f,0.2768f,0.3527f,0.263f,0.0181f,0.2816f,0.1026f,0.2616f,0.1481f,0.2604f,0.3578f,0.2568f,0.3503f,0.2575f,0.0179f,0.2574f,0.2289f,0.2559f,0.1884f,0.2584f,0.0186f,0.2582f,0.3542f,0.2515f,0.3604f,0.2737f,0.3578f,0.2568f,0.3542f,0.2515f,0.3527f,0.263f,0.1026f,0.2616f,0.1041f,0.2822f,0.0168f,0.2798f,0.0179f,0.2574f,0.1481f,0.2604f,0.1518f,0.2789f,0.3503f,0.2575f,0.3444f,0.2746f,0.221f,0.2742f,0.2289f,0.2559f,0.1842f,0.2768f,0.1884f,0.2584f,0.0181f,0.2816f,0.0186f,0.2582f,0.0168f,0.2798f,0.1041f,0.2822f,0.1518f,0.2789f,0.1842f,0.2768f,0.221f,0.2742f,0.3444f,0.2746f,0.3527f,0.263f,0.3604f,0.2737f,0.221f,0.2742f,0.1842f,0.2768f,0.1518f,0.2789f,0.1041f,0.2822f,0.0168f,0.2798f,0.0181f,0.2816f,0.1026f,0.2616f,0.0179f,0.2574f,0.0186f,0.2582f,0.0179f,0.2574f,0.1026f,0.2616f,0.1481f,0.2604f,0.1884f,0.2584f,0.2289f,0.2559f,0.3503f,0.2575f,0.3542f,0.2515f,0.3578f,0.2568f,0.2289f,0.2559f,0.1884f,0.2584f,0.1481f,0.2604f});
  }
}
protected class MFFloat368 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat369 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32370 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,7,14,-1,14,15,3,-1,0,5,10,-1,10,6,0,-1,11,2,0,-1,0,6,11,-1,3,4,8,-1,8,7,3,-1,4,1,9,-1,9,8,4,-1,9,1,2,-1,2,11,9,-1,5,26,27,-1,27,10,5,-1,12,15,14,-1,14,13,12,-1,17,16,19,-1,19,18,17,-1,20,16,17,-1,17,21,20,-1,12,13,23,-1,23,22,12,-1,22,23,25,-1,25,24,22,-1,25,20,21,-1,21,24,25,-1,18,19,27,-1,27,26,18,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,5,0,29,-1,29,28,5,-1,0,2,30,-1,30,29,0,-1,2,1,31,-1,31,30,2,-1,1,4,32,-1,32,31,1,-1,4,3,33,-1,33,32,4,-1,3,15,34,-1,34,33,3,-1,15,12,35,-1,35,34,15,-1,12,22,36,-1,36,35,12,-1,22,24,37,-1,37,36,22,-1,24,21,38,-1,38,37,24,-1,21,17,39,-1,39,38,21,-1,17,18,40,-1,40,39,17,-1,18,26,41,-1,41,40,18,-1,26,5,28,-1,28,41,26,-1,6,10,43,-1,43,42,6,-1,10,27,44,-1,44,43,10,-1,27,19,45,-1,45,44,27,-1,19,16,46,-1,46,45,19,-1,16,20,47,-1,47,46,16,-1,20,25,48,-1,48,47,20,-1,25,23,49,-1,49,48,25,-1,23,13,50,-1,50,49,23,-1,13,14,51,-1,51,50,13,-1,14,7,52,-1,52,51,14,-1,7,8,53,-1,53,52,7,-1,8,9,54,-1,54,53,8,-1,9,11,55,-1,55,54,9,-1,11,6,42,-1,42,55,11,-1});
  }
}
protected class MFInt32371 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,10,16,-1,16,7,6,-1,1,0,14,-1,14,9,1,-1,15,2,1,-1,1,9,15,-1,4,3,12,-1,12,11,4,-1,3,5,13,-1,13,12,3,-1,13,5,2,-1,2,15,13,-1,0,8,17,-1,17,14,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,0,1,37,-1,37,36,0,-1,1,2,38,-1,38,37,1,-1,2,5,39,-1,39,38,2,-1,5,3,40,-1,40,39,5,-1,3,4,41,-1,41,40,3,-1,6,7,42,-1,42,41,6,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,0,36,-1,36,49,8,-1,9,14,51,-1,51,50,9,-1,14,17,52,-1,52,51,14,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,16,10,60,-1,60,59,16,-1,11,12,61,-1,61,60,11,-1,12,13,62,-1,62,61,12,-1,13,15,63,-1,63,62,13,-1,15,9,50,-1,50,63,15,-1});
  }
}
protected class MFVec3f372 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0833f,0.0089f,-0.0423f,0.1082f,0.0089f,-0.1145f,0.1152f,0.0089f,-0.0722f,0.0289f,0.0089f,-0.1603f,0.0807f,0.0089f,-0.14f,0.0286f,0.0089f,-0.0323f,0.087f,-0.0084f,-0.0339f,0.0306f,-0.0084f,-0.17f,0.0833f,-0.0084f,-0.148f,0.112f,-0.0084f,-0.1178f,0.0314f,-0.0084f,-0.0227f,0.1203f,-0.0084f,-0.0687f,-0.0293f,0.0089f,-0.1603f,-0.0309f,-0.0084f,-0.17f,-0.0002f,-0.0084f,-0.17f,-0.0002f,0.0089f,-0.1603f,-0.0873f,-0.0084f,-0.0339f,-0.0837f,0.0089f,-0.0423f,-0.029f,0.0089f,-0.0323f,-0.0318f,-0.0084f,-0.0227f,-0.1206f,-0.0084f,-0.0687f,-0.1156f,0.0089f,-0.0722f,-0.081f,0.0089f,-0.14f,-0.0837f,-0.0084f,-0.148f,-0.1086f,0.0089f,-0.1145f,-0.1124f,-0.0084f,-0.1178f,-0.0002f,0.0089f,-0.0323f,-0.0002f,-0.0084f,-0.0227f,0.0282f,0.0191f,-0.0373f,0.081f,0.0191f,-0.0469f,0.1099f,0.0191f,-0.074f,0.1036f,0.0191f,-0.112f,0.078f,0.0191f,-0.1358f,0.028f,0.0191f,-0.1553f,-0.0002f,0.0191f,-0.1553f,-0.0283f,0.0191f,-0.1553f,-0.0783f,0.0191f,-0.1358f,-0.104f,0.0191f,-0.112f,-0.1102f,0.0191f,-0.074f,-0.0813f,0.0191f,-0.0469f,-0.0286f,0.0191f,-0.0373f,-0.0002f,0.0191f,-0.0373f,0.0865f,-0.017f,-0.0371f,0.0317f,-0.017f,-0.0261f,-0.0002f,-0.017f,-0.0261f,-0.032f,-0.017f,-0.0261f,-0.0869f,-0.017f,-0.0371f,-0.1181f,-0.017f,-0.0697f,-0.1103f,-0.017f,-0.116f,-0.0827f,-0.017f,-0.1451f,-0.0306f,-0.017f,-0.1668f,-0.0002f,-0.017f,-0.1668f,0.0303f,-0.017f,-0.1668f,0.0824f,-0.017f,-0.1451f,0.11f,-0.017f,-0.116f,0.1177f,-0.017f,-0.0697f});
  }
}
protected class MFVec2f373 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0177f,0.3051f,0.0982f,0.302f,0.1487f,0.2975f,0.2175f,0.2944f,0.3621f,0.2922f,0.1849f,0.2961f,0.3633f,0.2922f,0.3627f,0.2922f,0.0177f,0.3051f,0.1055f,0.2814f,0.3697f,0.2711f,0.3605f,0.2757f,0.2204f,0.275f,0.1853f,0.2768f,0.024f,0.2813f,0.1448f,0.2785f,0.3603f,0.2745f,0.0155f,0.2778f,0.3633f,0.2922f,0.3697f,0.2711f,0.3603f,0.2745f,0.3627f,0.2922f,0.1055f,0.2814f,0.0982f,0.302f,0.0177f,0.3051f,0.024f,0.2813f,0.1448f,0.2785f,0.1487f,0.2975f,0.3605f,0.2757f,0.3621f,0.2922f,0.2175f,0.2944f,0.2204f,0.275f,0.1849f,0.2961f,0.1853f,0.2768f,0.0177f,0.3051f,0.0155f,0.2778f,0.0177f,0.3051f,0.0982f,0.302f,0.1487f,0.2975f,0.1849f,0.2961f,0.2175f,0.2944f,0.3621f,0.2922f,0.3627f,0.2922f,0.3633f,0.2922f,0.2175f,0.2944f,0.1849f,0.2961f,0.1487f,0.2975f,0.0982f,0.302f,0.0177f,0.3051f,0.0177f,0.3051f,0.1055f,0.2814f,0.024f,0.2813f,0.0155f,0.2778f,0.024f,0.2813f,0.1055f,0.2814f,0.1448f,0.2785f,0.1853f,0.2768f,0.2204f,0.275f,0.3605f,0.2757f,0.3603f,0.2745f,0.3697f,0.2711f,0.2204f,0.275f,0.1853f,0.2768f,0.1448f,0.2785f});
  }
}
protected class MFFloat374 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat375 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32376 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,0,1,-1,1,14,7,-1,11,2,0,-1,0,7,11,-1,13,12,3,-1,3,4,13,-1,8,5,2,-1,2,11,8,-1,14,1,6,-1,6,9,14,-1,8,13,4,-1,4,5,8,-1,12,10,27,-1,27,3,12,-1,16,15,18,-1,18,17,16,-1,19,16,17,-1,17,20,19,-1,21,24,23,-1,23,22,21,-1,25,19,20,-1,20,26,25,-1,15,9,6,-1,6,18,15,-1,25,26,24,-1,24,21,25,-1,22,23,27,-1,27,10,22,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,1,0,29,-1,29,28,1,-1,0,2,30,-1,30,29,0,-1,2,5,31,-1,31,30,2,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,27,34,-1,34,33,3,-1,27,23,35,-1,35,34,27,-1,23,24,36,-1,36,35,23,-1,24,26,37,-1,37,36,24,-1,26,20,38,-1,38,37,26,-1,20,17,39,-1,39,38,20,-1,17,18,40,-1,40,39,17,-1,18,6,41,-1,41,40,18,-1,6,1,28,-1,28,41,6,-1,7,14,43,-1,43,42,7,-1,14,9,44,-1,44,43,14,-1,9,15,45,-1,45,44,9,-1,15,16,46,-1,46,45,15,-1,16,19,47,-1,47,46,16,-1,19,25,48,-1,48,47,19,-1,25,21,49,-1,49,48,25,-1,21,22,50,-1,50,49,21,-1,22,10,51,-1,51,50,22,-1,10,12,52,-1,52,51,10,-1,12,13,53,-1,53,52,12,-1,13,8,54,-1,54,53,13,-1,8,11,55,-1,55,54,8,-1,11,7,42,-1,42,55,11,-1});
  }
}
protected class MFInt32377 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,1,-1,1,17,9,-1,13,2,0,-1,0,9,13,-1,16,15,3,-1,3,5,16,-1,10,6,2,-1,2,13,10,-1,17,1,8,-1,8,11,17,-1,10,16,5,-1,5,6,10,-1,14,12,7,-1,7,4,14,-1,19,18,21,-1,21,20,19,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,22,23,-1,23,29,28,-1,18,30,31,-1,31,21,18,-1,28,29,27,-1,27,24,28,-1,33,32,35,-1,35,34,33,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,8,1,36,-1,36,49,8,-1,9,17,51,-1,51,50,9,-1,17,11,52,-1,52,51,17,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,12,14,60,-1,60,59,12,-1,15,16,61,-1,61,60,15,-1,16,10,62,-1,62,61,16,-1,10,13,63,-1,63,62,10,-1,13,9,50,-1,50,63,13,-1});
  }
}
protected class MFVec3f378 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0831f,0.0152f,-0.0436f,0.0288f,0.0152f,-0.0335f,0.1147f,0.0152f,-0.0728f,0.0305f,0.0152f,-0.1588f,0.0805f,0.0152f,-0.1398f,0.1079f,0.0152f,-0.1137f,-0.0002f,0.0152f,-0.0335f,0.0833f,-0.0083f,-0.0423f,0.1082f,-0.0083f,-0.1145f,-0.0002f,-0.0083f,-0.0323f,-0.0002f,-0.0083f,-0.1603f,0.1152f,-0.0083f,-0.0722f,0.0289f,-0.0083f,-0.1603f,0.0807f,-0.0083f,-0.14f,0.0286f,-0.0083f,-0.0323f,-0.029f,-0.0083f,-0.0323f,-0.0837f,-0.0083f,-0.0423f,-0.0835f,0.0152f,-0.0436f,-0.0291f,0.0152f,-0.0335f,-0.1156f,-0.0083f,-0.0722f,-0.115f,0.0152f,-0.0728f,-0.081f,-0.0083f,-0.14f,-0.0293f,-0.0083f,-0.1603f,-0.0308f,0.0152f,-0.1588f,-0.0809f,0.0152f,-0.1398f,-0.1086f,-0.0083f,-0.1145f,-0.1083f,0.0152f,-0.1137f,-0.0002f,0.0152f,-0.1588f,0.0283f,0.0252f,-0.0384f,0.0808f,0.0252f,-0.0483f,0.1093f,0.0252f,-0.0746f,0.1033f,0.0252f,-0.1113f,0.0779f,0.0252f,-0.1355f,0.0296f,0.0252f,-0.1538f,-0.0002f,0.0252f,-0.1538f,-0.0299f,0.0252f,-0.1538f,-0.0782f,0.0252f,-0.1355f,-0.1037f,0.0252f,-0.1113f,-0.1097f,0.0252f,-0.0746f,-0.0812f,0.0252f,-0.0483f,-0.0287f,0.0252f,-0.0384f,-0.0002f,0.0252f,-0.0384f,0.081f,-0.0168f,-0.0469f,0.0282f,-0.0168f,-0.0373f,-0.0002f,-0.0168f,-0.0373f,-0.0286f,-0.0168f,-0.0373f,-0.0813f,-0.0168f,-0.0469f,-0.1102f,-0.0168f,-0.074f,-0.104f,-0.0168f,-0.112f,-0.0783f,-0.0168f,-0.1358f,-0.0283f,-0.0168f,-0.1553f,-0.0002f,-0.0168f,-0.1553f,0.028f,-0.0168f,-0.1553f,0.078f,-0.0168f,-0.1358f,0.1036f,-0.0168f,-0.112f,0.1099f,-0.0168f,-0.074f});
  }
}
protected class MFVec2f379 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0943f,0.3233f,0.0192f,0.3251f,0.1489f,0.3212f,0.3615f,0.3195f,0.3631f,0.318f,0.2175f,0.3185f,0.1844f,0.32f,0.3623f,0.3188f,0.0192f,0.3251f,0.0982f,0.302f,0.1849f,0.2961f,0.0177f,0.3051f,0.3627f,0.2922f,0.1487f,0.2975f,0.3633f,0.2922f,0.3621f,0.2922f,0.2175f,0.2944f,0.0177f,0.3051f,0.0177f,0.3051f,0.0982f,0.302f,0.0943f,0.3233f,0.0192f,0.3251f,0.1487f,0.2975f,0.1489f,0.3212f,0.2175f,0.2944f,0.3621f,0.2922f,0.3615f,0.3195f,0.2175f,0.3185f,0.1849f,0.2961f,0.1844f,0.32f,0.0177f,0.3051f,0.0192f,0.3251f,0.3631f,0.318f,0.3633f,0.2922f,0.3627f,0.2922f,0.3623f,0.3188f,0.0192f,0.3251f,0.0943f,0.3233f,0.1489f,0.3212f,0.1844f,0.32f,0.2175f,0.3185f,0.3615f,0.3195f,0.3623f,0.3188f,0.3631f,0.318f,0.2175f,0.3185f,0.1844f,0.32f,0.1489f,0.3212f,0.0943f,0.3233f,0.0192f,0.3251f,0.0192f,0.3251f,0.0982f,0.302f,0.0177f,0.3051f,0.0177f,0.3051f,0.0177f,0.3051f,0.0982f,0.302f,0.1487f,0.2975f,0.1849f,0.2961f,0.2175f,0.2944f,0.3621f,0.2922f,0.3627f,0.2922f,0.3633f,0.2922f,0.2175f,0.2944f,0.1849f,0.2961f,0.1487f,0.2975f});
  }
}
protected class MFFloat380 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat381 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32382 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,5,11,-1,11,10,4,-1,17,3,9,-1,9,20,17,-1,6,0,2,-1,2,7,6,-1,8,1,0,-1,0,6,8,-1,3,4,10,-1,10,9,3,-1,5,1,8,-1,8,11,5,-1,2,27,12,-1,12,7,2,-1,13,16,15,-1,15,14,13,-1,17,20,19,-1,19,18,17,-1,21,24,23,-1,23,22,21,-1,25,21,22,-1,22,26,25,-1,18,19,16,-1,16,13,18,-1,14,15,25,-1,25,26,14,-1,23,24,12,-1,12,27,23,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,2,0,29,-1,29,28,2,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,17,34,-1,34,33,3,-1,17,18,35,-1,35,34,17,-1,18,13,36,-1,36,35,18,-1,13,14,37,-1,37,36,13,-1,14,26,38,-1,38,37,14,-1,26,22,39,-1,39,38,26,-1,22,23,40,-1,40,39,22,-1,23,27,41,-1,41,40,23,-1,27,2,28,-1,28,41,27,-1,6,7,43,-1,43,42,6,-1,7,12,44,-1,44,43,7,-1,12,24,45,-1,45,44,12,-1,24,21,46,-1,46,45,24,-1,21,25,47,-1,47,46,21,-1,25,15,48,-1,48,47,25,-1,15,16,49,-1,49,48,15,-1,16,19,50,-1,50,49,16,-1,19,20,51,-1,51,50,19,-1,20,9,52,-1,52,51,20,-1,9,10,53,-1,53,52,9,-1,10,11,54,-1,54,53,10,-1,11,8,55,-1,55,54,11,-1,8,6,42,-1,42,55,8,-1});
  }
}
protected class MFInt32383 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,15,-1,15,14,5,-1,7,4,12,-1,12,16,7,-1,9,0,2,-1,2,10,9,-1,11,1,0,-1,0,9,11,-1,3,5,14,-1,14,13,3,-1,6,1,11,-1,11,15,6,-1,2,8,17,-1,17,10,2,-1,18,21,20,-1,20,19,18,-1,22,25,24,-1,24,23,22,-1,26,29,28,-1,28,27,26,-1,30,26,27,-1,27,31,30,-1,33,32,21,-1,21,18,33,-1,19,20,30,-1,30,31,19,-1,28,29,35,-1,35,34,28,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,2,0,37,-1,37,36,2,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,22,23,43,-1,43,42,22,-1,33,18,44,-1,44,43,33,-1,18,19,45,-1,45,44,18,-1,19,31,46,-1,46,45,19,-1,31,27,47,-1,47,46,31,-1,27,28,48,-1,48,47,27,-1,28,34,49,-1,49,48,28,-1,8,2,36,-1,36,49,8,-1,9,10,51,-1,51,50,9,-1,10,17,52,-1,52,51,10,-1,35,29,53,-1,53,52,35,-1,29,26,54,-1,54,53,29,-1,26,30,55,-1,55,54,26,-1,30,20,56,-1,56,55,30,-1,20,21,57,-1,57,56,20,-1,21,32,58,-1,58,57,21,-1,24,25,59,-1,59,58,24,-1,16,12,60,-1,60,59,16,-1,13,14,61,-1,61,60,13,-1,14,15,62,-1,62,61,14,-1,15,11,63,-1,63,62,15,-1,11,9,50,-1,50,63,11,-1});
  }
}
protected class MFVec3f384 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.083f,0.0152f,-0.045f,0.1141f,0.0152f,-0.0734f,0.0289f,0.0152f,-0.0346f,0.0321f,0.0152f,-0.1573f,0.0805f,0.0152f,-0.1396f,0.1077f,0.0152f,-0.1129f,0.0831f,-0.0083f,-0.0436f,0.0288f,-0.0083f,-0.0335f,0.1147f,-0.0083f,-0.0728f,0.0305f,-0.0083f,-0.1588f,0.0805f,-0.0083f,-0.1398f,0.1079f,-0.0083f,-0.1137f,-0.0002f,-0.0083f,-0.0335f,-0.0808f,0.0152f,-0.1396f,-0.108f,0.0152f,-0.1129f,-0.1083f,-0.0083f,-0.1137f,-0.0809f,-0.0083f,-0.1398f,-0.0002f,0.0152f,-0.1573f,-0.0324f,0.0152f,-0.1573f,-0.0308f,-0.0083f,-0.1588f,-0.0002f,-0.0083f,-0.1588f,-0.0835f,-0.0083f,-0.0436f,-0.0833f,0.0152f,-0.045f,-0.0292f,0.0152f,-0.0346f,-0.0291f,-0.0083f,-0.0335f,-0.115f,-0.0083f,-0.0728f,-0.1145f,0.0152f,-0.0734f,-0.0002f,0.0152f,-0.0346f,0.0285f,0.0241f,-0.0384f,0.0812f,0.0241f,-0.0484f,0.1102f,0.0241f,-0.0748f,0.1042f,0.0241f,-0.1111f,0.0784f,0.0241f,-0.1364f,0.0314f,0.0241f,-0.1536f,-0.0002f,0.0241f,-0.1536f,-0.0318f,0.0241f,-0.1536f,-0.0788f,0.0241f,-0.1364f,-0.1046f,0.0241f,-0.1111f,-0.1105f,0.0241f,-0.0748f,-0.0816f,0.0241f,-0.0484f,-0.0289f,0.0241f,-0.0384f,-0.0002f,0.0241f,-0.0384f,0.0814f,-0.0191f,-0.0471f,0.0284f,-0.0191f,-0.0372f,-0.0002f,-0.0191f,-0.0372f,-0.0288f,-0.0191f,-0.0372f,-0.0817f,-0.0191f,-0.0471f,-0.111f,-0.0191f,-0.0741f,-0.1048f,-0.0191f,-0.1119f,-0.0789f,-0.0191f,-0.1366f,-0.0302f,-0.0191f,-0.1551f,-0.0002f,-0.0191f,-0.1551f,0.0298f,-0.0191f,-0.1551f,0.0785f,-0.0191f,-0.1366f,0.1045f,-0.0191f,-0.1119f,0.1107f,-0.0191f,-0.0741f});
  }
}
protected class MFVec2f385 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0903f,0.3446f,0.1491f,0.3449f,0.0206f,0.3452f,0.3608f,0.3469f,0.3629f,0.3439f,0.2175f,0.3427f,0.1838f,0.3438f,0.3619f,0.3454f,0.0206f,0.3452f,0.0943f,0.3233f,0.0192f,0.3251f,0.1489f,0.3212f,0.3631f,0.318f,0.3615f,0.3195f,0.2175f,0.3185f,0.1844f,0.32f,0.3623f,0.3188f,0.0192f,0.3251f,0.2175f,0.3427f,0.1838f,0.3438f,0.1844f,0.32f,0.2175f,0.3185f,0.3619f,0.3454f,0.3629f,0.3439f,0.3631f,0.318f,0.3623f,0.3188f,0.0943f,0.3233f,0.0903f,0.3446f,0.0206f,0.3452f,0.0192f,0.3251f,0.1489f,0.3212f,0.1491f,0.3449f,0.3615f,0.3195f,0.3608f,0.3469f,0.0206f,0.3452f,0.0192f,0.3251f,0.0206f,0.3452f,0.0903f,0.3446f,0.1491f,0.3449f,0.1838f,0.3438f,0.2175f,0.3427f,0.3608f,0.3469f,0.3619f,0.3454f,0.3629f,0.3439f,0.2175f,0.3427f,0.1838f,0.3438f,0.1491f,0.3449f,0.0903f,0.3446f,0.0206f,0.3452f,0.0206f,0.3452f,0.0943f,0.3233f,0.0192f,0.3251f,0.0192f,0.3251f,0.0192f,0.3251f,0.0943f,0.3233f,0.1489f,0.3212f,0.1844f,0.32f,0.2175f,0.3185f,0.3615f,0.3195f,0.3623f,0.3188f,0.3631f,0.318f,0.2175f,0.3185f,0.1844f,0.32f,0.1489f,0.3212f});
  }
}
protected class MFFloat386 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat387 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32388 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,10,-1,10,12,4,-1,5,4,12,-1,12,13,5,-1,5,13,9,-1,9,1,5,-1,6,11,14,-1,14,7,6,-1,7,2,0,-1,0,6,7,-1,11,6,0,-1,0,8,11,-1,3,28,29,-1,29,10,3,-1,8,0,1,-1,1,9,8,-1,15,18,17,-1,17,16,15,-1,19,20,18,-1,18,15,19,-1,19,21,22,-1,22,20,19,-1,23,7,14,-1,14,24,23,-1,7,23,25,-1,25,26,7,-1,24,27,25,-1,25,23,24,-1,16,17,29,-1,29,28,16,-1,27,22,21,-1,21,25,27,-1,32,33,34,-1,31,32,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,34,38,42,-1,31,34,42,-1,31,42,43,-1,31,43,30,-1,45,46,47,-1,47,48,49,-1,49,50,51,-1,47,49,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,47,51,55,-1,55,56,57,-1,47,55,57,-1,45,47,57,-1,45,57,44,-1,0,2,31,-1,31,30,0,-1,2,7,32,-1,32,31,2,-1,7,26,33,-1,33,32,7,-1,26,25,34,-1,34,33,26,-1,25,21,35,-1,35,34,25,-1,21,19,36,-1,36,35,21,-1,19,15,37,-1,37,36,19,-1,15,16,38,-1,38,37,15,-1,16,28,39,-1,39,38,16,-1,28,3,40,-1,40,39,28,-1,3,4,41,-1,41,40,3,-1,4,5,42,-1,42,41,4,-1,5,1,43,-1,43,42,5,-1,1,0,30,-1,30,43,1,-1,12,10,45,-1,45,44,12,-1,10,29,46,-1,46,45,10,-1,29,17,47,-1,47,46,29,-1,17,18,48,-1,48,47,17,-1,18,20,49,-1,49,48,18,-1,20,22,50,-1,50,49,20,-1,22,27,51,-1,51,50,22,-1,27,24,52,-1,52,51,27,-1,24,14,53,-1,53,52,24,-1,14,11,54,-1,54,53,14,-1,11,8,55,-1,55,54,11,-1,8,9,56,-1,56,55,8,-1,9,13,57,-1,57,56,9,-1,13,12,44,-1,44,57,13,-1});
  }
}
protected class MFInt32389 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,5,14,-1,14,16,6,-1,7,6,16,-1,16,17,7,-1,7,17,12,-1,12,3,7,-1,8,15,18,-1,18,10,8,-1,10,0,1,-1,1,8,10,-1,15,8,2,-1,2,11,15,-1,4,9,19,-1,19,13,4,-1,11,2,3,-1,3,12,11,-1,20,23,22,-1,22,21,20,-1,24,25,23,-1,23,20,24,-1,24,26,27,-1,27,25,24,-1,29,28,31,-1,31,30,29,-1,28,29,32,-1,32,33,28,-1,30,35,34,-1,34,29,30,-1,37,36,39,-1,39,38,37,-1,35,27,26,-1,26,34,35,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,44,48,52,-1,41,44,52,-1,41,52,53,-1,41,53,40,-1,55,56,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,61,62,63,-1,63,64,65,-1,61,63,65,-1,57,61,65,-1,65,66,67,-1,57,65,67,-1,55,57,67,-1,55,67,54,-1,1,0,41,-1,41,40,1,-1,0,10,42,-1,42,41,0,-1,28,33,43,-1,43,42,28,-1,33,32,44,-1,44,43,33,-1,34,26,45,-1,45,44,34,-1,26,24,46,-1,46,45,26,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,37,38,49,-1,49,48,37,-1,9,4,50,-1,50,49,9,-1,5,6,51,-1,51,50,5,-1,6,7,52,-1,52,51,6,-1,7,3,53,-1,53,52,7,-1,3,2,40,-1,40,53,3,-1,16,14,55,-1,55,54,16,-1,13,19,56,-1,56,55,13,-1,39,36,57,-1,57,56,39,-1,22,23,58,-1,58,57,22,-1,23,25,59,-1,59,58,23,-1,25,27,60,-1,60,59,25,-1,27,35,61,-1,61,60,27,-1,35,30,62,-1,62,61,35,-1,30,31,63,-1,63,62,30,-1,18,15,64,-1,64,63,18,-1,15,11,65,-1,65,64,15,-1,11,12,66,-1,66,65,11,-1,12,17,67,-1,67,66,12,-1,17,16,54,-1,54,67,17,-1});
  }
}
protected class MFVec3f390 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.083f,-0.0083f,-0.045f,0.1141f,-0.0083f,-0.0734f,0.0289f,-0.0083f,-0.0346f,0.0321f,-0.0083f,-0.1573f,0.0805f,-0.0083f,-0.1396f,0.1077f,-0.0083f,-0.1129f,0.0289f,-0.0083f,-0.0346f,-0.0002f,-0.0083f,-0.0346f,0.0867f,0.0089f,-0.0358f,0.1204f,0.0089f,-0.0732f,0.0355f,0.0089f,-0.1581f,0.0304f,0.0089f,-0.0301f,0.0842f,0.0089f,-0.1418f,0.1116f,0.0089f,-0.1155f,-0.0002f,0.0089f,-0.0301f,-0.0808f,-0.0083f,-0.1396f,-0.0324f,-0.0083f,-0.1573f,-0.0359f,0.0089f,-0.1581f,-0.0846f,0.0089f,-0.1418f,-0.108f,-0.0083f,-0.1129f,-0.112f,0.0089f,-0.1155f,-0.1145f,-0.0083f,-0.0734f,-0.1208f,0.0089f,-0.0732f,-0.0292f,-0.0083f,-0.0346f,-0.0308f,0.0089f,-0.0301f,-0.0833f,-0.0083f,-0.045f,-0.0292f,-0.0083f,-0.0346f,-0.087f,0.0089f,-0.0358f,-0.0002f,-0.0083f,-0.1573f,-0.0002f,0.0089f,-0.1583f,0.0808f,-0.0193f,-0.0493f,0.0284f,-0.0193f,-0.0393f,-0.0002f,-0.0193f,-0.0393f,-0.0288f,-0.0193f,-0.0393f,-0.0812f,-0.0193f,-0.0493f,-0.1096f,-0.0193f,-0.0751f,-0.1037f,-0.0193f,-0.1107f,-0.0783f,-0.0193f,-0.1356f,-0.0316f,-0.0193f,-0.1527f,-0.0002f,-0.0193f,-0.1527f,0.0313f,-0.0193f,-0.1527f,0.0779f,-0.0193f,-0.1356f,0.1034f,-0.0193f,-0.1107f,0.1092f,-0.0193f,-0.0751f,0.0818f,0.0162f,-0.1378f,0.0348f,0.0162f,-0.1535f,-0.0002f,0.0162f,-0.1537f,-0.0352f,0.0162f,-0.1535f,-0.0821f,0.0162f,-0.1378f,-0.1078f,0.0162f,-0.1131f,-0.1158f,0.0162f,-0.0745f,-0.0848f,0.0162f,-0.0402f,-0.0306f,0.0162f,-0.0347f,-0.0002f,0.0162f,-0.0347f,0.0302f,0.0162f,-0.0347f,0.0844f,0.0162f,-0.0402f,0.1155f,0.0162f,-0.0745f,0.1074f,0.0162f,-0.1131f});
  }
}
protected class MFVec2f391 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0206f,0.3452f,0.0903f,0.3446f,0.0903f,0.3446f,0.1491f,0.3449f,0.3629f,0.3439f,0.3608f,0.3469f,0.2175f,0.3427f,0.1838f,0.3438f,0.0206f,0.3452f,0.3619f,0.3454f,0.0206f,0.3452f,0.089f,0.3604f,0.1508f,0.3559f,0.3623f,0.3532f,0.3588f,0.3561f,0.0232f,0.3561f,0.2188f,0.3538f,0.1874f,0.3541f,0.0232f,0.3546f,0.3608f,0.3537f,0.2175f,0.3427f,0.3608f,0.3469f,0.3588f,0.3561f,0.2188f,0.3538f,0.1838f,0.3438f,0.1874f,0.3541f,0.1491f,0.3449f,0.1508f,0.3559f,0.0206f,0.3452f,0.0206f,0.3452f,0.0232f,0.3561f,0.0232f,0.3546f,0.0903f,0.3446f,0.0206f,0.3452f,0.0903f,0.3446f,0.089f,0.3604f,0.3623f,0.3532f,0.3629f,0.3439f,0.3619f,0.3454f,0.3608f,0.3537f,0.0903f,0.3446f,0.0206f,0.3452f,0.0206f,0.3452f,0.0206f,0.3452f,0.0903f,0.3446f,0.1491f,0.3449f,0.1838f,0.3438f,0.2175f,0.3427f,0.3608f,0.3469f,0.3619f,0.3454f,0.3629f,0.3439f,0.2175f,0.3427f,0.1838f,0.3438f,0.1491f,0.3449f,0.2188f,0.3538f,0.3588f,0.3561f,0.3608f,0.3537f,0.3623f,0.3532f,0.2188f,0.3538f,0.1874f,0.3541f,0.1508f,0.3559f,0.089f,0.3604f,0.0232f,0.3561f,0.0232f,0.3546f,0.0232f,0.3561f,0.089f,0.3604f,0.1508f,0.3559f,0.1874f,0.3541f});
  }
}
protected class MFFloat392 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat393 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32394 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,7,4,-1,4,2,11,-1,7,8,5,-1,5,4,7,-1,8,10,1,-1,1,5,8,-1,3,6,12,-1,12,23,3,-1,6,3,0,-1,0,9,6,-1,2,26,27,-1,27,11,2,-1,0,1,10,-1,10,9,0,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,17,18,20,-1,20,19,17,-1,21,23,12,-1,12,22,21,-1,22,25,24,-1,24,21,22,-1,13,14,27,-1,27,26,13,-1,24,25,19,-1,19,20,24,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,2,4,29,-1,29,28,2,-1,4,5,30,-1,30,29,4,-1,5,1,31,-1,31,30,5,-1,1,0,32,-1,32,31,1,-1,0,3,33,-1,33,32,0,-1,3,23,34,-1,34,33,3,-1,23,21,35,-1,35,34,23,-1,21,24,36,-1,36,35,21,-1,24,20,37,-1,37,36,24,-1,20,18,38,-1,38,37,20,-1,18,16,39,-1,39,38,18,-1,16,13,40,-1,40,39,16,-1,13,26,41,-1,41,40,13,-1,26,2,28,-1,28,41,26,-1,6,9,43,-1,43,42,6,-1,9,10,44,-1,44,43,9,-1,10,8,45,-1,45,44,10,-1,8,7,46,-1,46,45,8,-1,7,11,47,-1,47,46,7,-1,11,27,48,-1,48,47,11,-1,27,14,49,-1,49,48,27,-1,14,15,50,-1,50,49,14,-1,15,17,51,-1,51,50,15,-1,17,19,52,-1,52,51,17,-1,19,25,53,-1,53,52,19,-1,25,22,54,-1,54,53,25,-1,22,12,55,-1,55,54,22,-1,12,6,42,-1,42,55,12,-1});
  }
}
protected class MFInt32395 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15,10,5,-1,5,2,15,-1,10,11,6,-1,6,5,10,-1,11,14,1,-1,1,6,11,-1,4,9,17,-1,17,7,4,-1,9,4,0,-1,0,13,9,-1,3,8,12,-1,12,16,3,-1,0,1,14,-1,14,13,0,-1,19,18,21,-1,21,20,19,-1,20,21,23,-1,23,22,20,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,27,31,30,-1,30,26,27,-1,33,32,35,-1,35,34,33,-1,30,31,24,-1,24,25,30,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,2,5,37,-1,37,36,2,-1,5,6,38,-1,38,37,5,-1,6,1,39,-1,39,38,6,-1,1,0,40,-1,40,39,1,-1,0,4,41,-1,41,40,0,-1,4,7,42,-1,42,41,4,-1,29,26,43,-1,43,42,29,-1,26,30,44,-1,44,43,26,-1,30,25,45,-1,45,44,30,-1,25,23,46,-1,46,45,25,-1,23,21,47,-1,47,46,23,-1,21,18,48,-1,48,47,21,-1,33,34,49,-1,49,48,33,-1,8,3,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,14,52,-1,52,51,13,-1,14,11,53,-1,53,52,14,-1,11,10,54,-1,54,53,11,-1,10,15,55,-1,55,54,10,-1,16,12,56,-1,56,55,16,-1,35,32,57,-1,57,56,35,-1,19,20,58,-1,58,57,19,-1,20,22,59,-1,59,58,20,-1,22,24,60,-1,60,59,22,-1,24,31,61,-1,61,60,24,-1,31,27,62,-1,62,61,31,-1,27,28,63,-1,63,62,27,-1,17,9,50,-1,50,63,17,-1});
  }
}
protected class MFVec3f396 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0867f,-0.0083f,-0.0358f,0.1204f,-0.0083f,-0.0732f,0.0355f,-0.0083f,-0.1581f,0.0304f,-0.0083f,-0.0301f,0.0842f,-0.0083f,-0.1418f,0.1116f,-0.0083f,-0.1155f,0.0317f,0.0062f,-0.0262f,0.0874f,0.0062f,-0.1437f,0.115f,0.0062f,-0.1176f,0.0895f,0.0062f,-0.0286f,0.1258f,0.0062f,-0.073f,0.0385f,0.0062f,-0.1588f,-0.0002f,0.0062f,-0.0262f,-0.0359f,-0.0083f,-0.1581f,-0.0388f,0.0062f,-0.1588f,-0.0877f,0.0062f,-0.1437f,-0.0846f,-0.0083f,-0.1418f,-0.1154f,0.0062f,-0.1176f,-0.112f,-0.0083f,-0.1155f,-0.1262f,0.0062f,-0.073f,-0.1208f,-0.0083f,-0.0732f,-0.0308f,-0.0083f,-0.0301f,-0.0321f,0.0062f,-0.0262f,-0.0002f,-0.0083f,-0.0301f,-0.087f,-0.0083f,-0.0358f,-0.0899f,0.0062f,-0.0286f,-0.0002f,-0.0083f,-0.1583f,-0.0002f,0.0062f,-0.1591f,0.0349f,-0.0153f,-0.154f,0.0821f,-0.0153f,-0.1382f,0.1079f,-0.0153f,-0.1134f,0.116f,-0.0153f,-0.0744f,0.0847f,-0.0153f,-0.0397f,0.0302f,-0.0153f,-0.0342f,-0.0002f,-0.0153f,-0.0342f,-0.0306f,-0.0153f,-0.0342f,-0.085f,-0.0153f,-0.0397f,-0.1164f,-0.0153f,-0.0744f,-0.1082f,-0.0153f,-0.1134f,-0.0824f,-0.0153f,-0.1382f,-0.0352f,-0.0153f,-0.154f,-0.0002f,-0.0153f,-0.1542f,0.0317f,0.0125f,-0.0303f,0.0875f,0.0125f,-0.0326f,0.1214f,0.0125f,-0.074f,0.1113f,0.0125f,-0.1155f,0.0853f,0.0125f,-0.1401f,0.0378f,0.0125f,-0.1547f,-0.0002f,0.0125f,-0.155f,-0.0382f,0.0125f,-0.1547f,-0.0856f,0.0125f,-0.1401f,-0.1117f,0.0125f,-0.1155f,-0.1217f,0.0125f,-0.074f,-0.0879f,0.0125f,-0.0326f,-0.032f,0.0125f,-0.0303f,-0.0002f,0.0125f,-0.0303f});
  }
}
protected class MFVec2f397 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.089f,0.3604f,0.1508f,0.3559f,0.3588f,0.3561f,0.3623f,0.3532f,0.0232f,0.3561f,0.2188f,0.3538f,0.1874f,0.3541f,0.0232f,0.3546f,0.3608f,0.3537f,0.0245f,0.3617f,0.2207f,0.3633f,0.1922f,0.3628f,0.3616f,0.3609f,0.0859f,0.3657f,0.1489f,0.3665f,0.3589f,0.3648f,0.3617f,0.3609f,0.0254f,0.3626f,0.3588f,0.3561f,0.3589f,0.3648f,0.2207f,0.3633f,0.2188f,0.3538f,0.1922f,0.3628f,0.1874f,0.3541f,0.1489f,0.3665f,0.1508f,0.3559f,0.0232f,0.3561f,0.0245f,0.3617f,0.0254f,0.3626f,0.0232f,0.3546f,0.089f,0.3604f,0.0859f,0.3657f,0.3617f,0.3609f,0.3623f,0.3532f,0.3608f,0.3537f,0.3616f,0.3609f,0.3623f,0.3532f,0.2188f,0.3538f,0.1874f,0.3541f,0.1508f,0.3559f,0.089f,0.3604f,0.0232f,0.3561f,0.0232f,0.3546f,0.0232f,0.3561f,0.089f,0.3604f,0.1508f,0.3559f,0.1874f,0.3541f,0.2188f,0.3538f,0.3588f,0.3561f,0.3608f,0.3537f,0.0245f,0.3617f,0.0859f,0.3657f,0.1489f,0.3665f,0.1922f,0.3628f,0.2207f,0.3633f,0.3589f,0.3648f,0.3616f,0.3609f,0.3617f,0.3609f,0.2207f,0.3633f,0.1922f,0.3628f,0.1489f,0.3665f,0.0859f,0.3657f,0.0245f,0.3617f,0.0254f,0.3626f});
  }
}
protected class MFFloat398 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat399 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32400 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,0,3,-1,3,10,7,-1,5,20,21,-1,21,12,5,-1,3,4,11,-1,11,10,3,-1,12,8,1,-1,1,5,12,-1,8,9,2,-1,2,1,8,-1,9,11,4,-1,4,2,9,-1,0,7,13,-1,13,6,0,-1,14,17,16,-1,16,15,14,-1,19,18,21,-1,21,20,19,-1,16,17,23,-1,23,22,16,-1,18,19,25,-1,25,24,18,-1,24,25,27,-1,27,26,24,-1,26,27,22,-1,22,23,26,-1,15,6,13,-1,13,14,15,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,47,48,49,-1,47,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,47,50,54,-1,43,47,54,-1,43,54,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,6,30,-1,30,29,0,-1,6,15,31,-1,31,30,6,-1,15,16,32,-1,32,31,15,-1,16,22,33,-1,33,32,16,-1,22,27,34,-1,34,33,22,-1,27,25,35,-1,35,34,27,-1,25,19,36,-1,36,35,25,-1,19,20,37,-1,37,36,19,-1,20,5,38,-1,38,37,20,-1,5,1,39,-1,39,38,5,-1,1,2,40,-1,40,39,1,-1,2,4,41,-1,41,40,2,-1,4,3,28,-1,28,41,4,-1,8,12,43,-1,43,42,8,-1,12,21,44,-1,44,43,12,-1,21,18,45,-1,45,44,21,-1,18,24,46,-1,46,45,18,-1,24,26,47,-1,47,46,24,-1,26,23,48,-1,48,47,26,-1,23,17,49,-1,49,48,23,-1,17,14,50,-1,50,49,17,-1,14,13,51,-1,51,50,14,-1,13,7,52,-1,52,51,13,-1,7,10,53,-1,53,52,7,-1,10,11,54,-1,54,53,10,-1,11,9,55,-1,55,54,11,-1,9,8,42,-1,42,55,9,-1});
  }
}
protected class MFInt32401 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,4,-1,4,12,9,-1,7,3,17,-1,17,15,7,-1,4,5,13,-1,13,12,4,-1,14,10,1,-1,1,6,14,-1,10,11,2,-1,2,1,10,-1,11,13,5,-1,5,2,11,-1,0,9,16,-1,16,8,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,55,56,57,-1,55,57,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,55,58,62,-1,51,55,62,-1,51,62,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,8,38,-1,38,37,0,-1,35,19,39,-1,39,38,35,-1,19,20,40,-1,40,39,19,-1,20,26,41,-1,41,40,20,-1,26,33,42,-1,42,41,26,-1,33,31,43,-1,43,42,33,-1,31,28,44,-1,44,43,31,-1,23,24,45,-1,45,44,23,-1,3,7,46,-1,46,45,3,-1,6,1,47,-1,47,46,6,-1,1,2,48,-1,48,47,1,-1,2,5,49,-1,49,48,2,-1,5,4,36,-1,36,49,5,-1,10,14,51,-1,51,50,10,-1,15,17,52,-1,52,51,15,-1,25,22,53,-1,53,52,25,-1,29,30,54,-1,54,53,29,-1,30,32,55,-1,55,54,30,-1,32,27,56,-1,56,55,32,-1,27,21,57,-1,57,56,27,-1,21,18,58,-1,58,57,21,-1,18,34,59,-1,59,58,18,-1,16,9,60,-1,60,59,16,-1,9,12,61,-1,61,60,9,-1,12,13,62,-1,62,61,12,-1,13,11,63,-1,63,62,13,-1,11,10,50,-1,50,63,11,-1});
  }
}
protected class MFVec3f402 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0317f,-0.0084f,-0.0262f,0.0874f,-0.0084f,-0.1437f,0.115f,-0.0084f,-0.1176f,0.0895f,-0.0084f,-0.0286f,0.1258f,-0.0084f,-0.073f,0.0385f,-0.0084f,-0.1588f,-0.0002f,-0.0084f,-0.0262f,0.033f,0.0061f,-0.0224f,0.0906f,0.0061f,-0.1456f,0.1184f,0.0061f,-0.1198f,0.0924f,0.0061f,-0.0213f,0.1312f,0.0061f,-0.0727f,0.0413f,0.0061f,-0.1594f,-0.0002f,0.0061f,-0.0224f,-0.0334f,0.0061f,-0.0224f,-0.0321f,-0.0084f,-0.0262f,-0.0899f,-0.0084f,-0.0286f,-0.0928f,0.0061f,-0.0213f,-0.0417f,0.0061f,-0.1594f,-0.0388f,-0.0084f,-0.1588f,-0.0002f,-0.0084f,-0.1591f,-0.0002f,0.0061f,-0.1599f,-0.1262f,-0.0084f,-0.073f,-0.1316f,0.0061f,-0.0727f,-0.0909f,0.0061f,-0.1456f,-0.0877f,-0.0084f,-0.1437f,-0.1188f,0.0061f,-0.1198f,-0.1154f,-0.0084f,-0.1176f,0.0875f,-0.0149f,-0.0327f,0.0317f,-0.0149f,-0.0305f,-0.0002f,-0.0149f,-0.0305f,-0.032f,-0.0149f,-0.0305f,-0.0878f,-0.0149f,-0.0327f,-0.1216f,-0.0149f,-0.074f,-0.1116f,-0.0149f,-0.1154f,-0.0855f,-0.0149f,-0.1399f,-0.0382f,-0.0149f,-0.1545f,-0.0002f,-0.0149f,-0.1548f,0.0378f,-0.0149f,-0.1545f,0.0852f,-0.0149f,-0.1399f,0.1112f,-0.0149f,-0.1154f,0.1212f,-0.0149f,-0.074f,0.0884f,0.0134f,-0.1418f,0.0407f,0.0134f,-0.1552f,-0.0002f,0.0134f,-0.1557f,-0.0411f,0.0134f,-0.1552f,-0.0888f,0.0134f,-0.1418f,-0.115f,0.0134f,-0.1175f,-0.1269f,0.0134f,-0.0736f,-0.0907f,0.0134f,-0.0256f,-0.0334f,0.0134f,-0.0266f,-0.0002f,0.0134f,-0.0266f,0.0331f,0.0134f,-0.0266f,0.0903f,0.0134f,-0.0256f,0.1266f,0.0134f,-0.0736f,0.1146f,0.0134f,-0.1175f});
  }
}
protected class MFVec2f403 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0245f,0.3617f,0.2207f,0.3633f,0.1922f,0.3628f,0.3616f,0.3609f,0.0859f,0.3657f,0.1489f,0.3665f,0.3589f,0.3648f,0.3617f,0.3609f,0.0254f,0.3626f,0.0258f,0.3672f,0.2227f,0.3728f,0.1969f,0.3716f,0.0826f,0.3711f,0.1469f,0.377f,0.3589f,0.3735f,0.3612f,0.3687f,0.0276f,0.3706f,0.3625f,0.3682f,0.0258f,0.3672f,0.0245f,0.3617f,0.0859f,0.3657f,0.0826f,0.3711f,0.3612f,0.3687f,0.3617f,0.3609f,0.3616f,0.3609f,0.3625f,0.3682f,0.1489f,0.3665f,0.1469f,0.377f,0.3589f,0.3648f,0.3589f,0.3735f,0.2227f,0.3728f,0.2207f,0.3633f,0.1969f,0.3716f,0.1922f,0.3628f,0.0276f,0.3706f,0.0254f,0.3626f,0.0859f,0.3657f,0.0245f,0.3617f,0.0254f,0.3626f,0.0245f,0.3617f,0.0859f,0.3657f,0.1489f,0.3665f,0.1922f,0.3628f,0.2207f,0.3633f,0.3589f,0.3648f,0.3616f,0.3609f,0.3617f,0.3609f,0.2207f,0.3633f,0.1922f,0.3628f,0.1489f,0.3665f,0.2227f,0.3728f,0.3589f,0.3735f,0.3625f,0.3682f,0.3612f,0.3687f,0.2227f,0.3728f,0.1969f,0.3716f,0.1469f,0.377f,0.0826f,0.3711f,0.0258f,0.3672f,0.0276f,0.3706f,0.0258f,0.3672f,0.0826f,0.3711f,0.1469f,0.377f,0.1969f,0.3716f});
  }
}
protected class MFFloat404 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat405 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32406 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,0,9,-1,9,3,4,-1,11,19,20,-1,20,6,11,-1,9,10,5,-1,5,3,9,-1,6,7,1,-1,1,11,6,-1,7,8,2,-1,2,1,7,-1,8,5,10,-1,10,2,8,-1,0,4,12,-1,12,27,0,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,15,16,22,-1,22,21,15,-1,17,18,24,-1,24,23,17,-1,23,24,26,-1,26,25,23,-1,25,26,21,-1,21,22,25,-1,14,27,12,-1,12,13,14,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,43,44,45,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,49,50,51,-1,51,52,53,-1,49,51,53,-1,45,49,53,-1,53,54,55,-1,45,53,55,-1,43,45,55,-1,43,55,42,-1,11,1,29,-1,29,28,11,-1,1,2,30,-1,30,29,1,-1,2,10,31,-1,31,30,2,-1,10,9,32,-1,32,31,10,-1,9,0,33,-1,33,32,9,-1,0,27,34,-1,34,33,0,-1,27,14,35,-1,35,34,27,-1,14,15,36,-1,36,35,14,-1,15,21,37,-1,37,36,15,-1,21,26,38,-1,38,37,21,-1,26,24,39,-1,39,38,26,-1,24,18,40,-1,40,39,24,-1,18,19,41,-1,41,40,18,-1,19,11,28,-1,28,41,19,-1,12,4,43,-1,43,42,12,-1,4,3,44,-1,44,43,4,-1,3,5,45,-1,45,44,3,-1,5,8,46,-1,46,45,5,-1,8,7,47,-1,47,46,8,-1,7,6,48,-1,48,47,7,-1,6,20,49,-1,49,48,6,-1,20,17,50,-1,50,49,20,-1,17,23,51,-1,51,50,17,-1,23,25,52,-1,52,51,23,-1,25,22,53,-1,53,52,25,-1,22,16,54,-1,54,53,22,-1,16,13,55,-1,55,54,16,-1,13,12,42,-1,42,55,13,-1});
  }
}
protected class MFInt32407 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,14,9,-1,9,0,1,-1,11,13,8,-1,8,5,11,-1,9,10,3,-1,3,0,9,-1,4,6,16,-1,16,12,4,-1,6,7,17,-1,17,16,6,-1,7,3,10,-1,10,17,7,-1,14,1,2,-1,2,15,14,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,51,52,53,-1,53,54,55,-1,55,56,57,-1,53,55,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,53,57,61,-1,61,62,63,-1,53,61,63,-1,51,53,63,-1,51,63,50,-1,12,16,37,-1,37,36,12,-1,16,17,38,-1,38,37,16,-1,17,10,39,-1,39,38,17,-1,10,9,40,-1,40,39,10,-1,9,14,41,-1,41,40,9,-1,14,15,42,-1,42,41,14,-1,35,19,43,-1,43,42,35,-1,19,20,44,-1,44,43,19,-1,20,26,45,-1,45,44,20,-1,26,33,46,-1,46,45,26,-1,33,31,47,-1,47,46,33,-1,31,28,48,-1,48,47,31,-1,23,24,49,-1,49,48,23,-1,13,11,36,-1,36,49,13,-1,2,1,51,-1,51,50,2,-1,1,0,52,-1,52,51,1,-1,0,3,53,-1,53,52,0,-1,3,7,54,-1,54,53,3,-1,7,6,55,-1,55,54,7,-1,6,4,56,-1,56,55,6,-1,5,8,57,-1,57,56,5,-1,25,22,58,-1,58,57,25,-1,29,30,59,-1,59,58,29,-1,30,32,60,-1,60,59,30,-1,32,27,61,-1,61,60,32,-1,27,21,62,-1,62,61,27,-1,21,18,63,-1,63,62,21,-1,18,34,50,-1,50,63,18,-1});
  }
}
protected class MFVec3f408 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.033f,-0.0086f,-0.0224f,0.0906f,-0.0086f,-0.1456f,0.1184f,-0.0086f,-0.1198f,0.0951f,0.007f,-0.0142f,0.0344f,0.007f,-0.0183f,0.1374f,0.0077f,-0.0725f,0.0445f,0.0077f,-0.1602f,0.094f,0.0077f,-0.1477f,0.1223f,0.0077f,-0.1221f,0.0924f,-0.0086f,-0.0213f,0.1312f,-0.0086f,-0.0727f,0.0413f,-0.0086f,-0.1594f,-0.0002f,0.007f,-0.0183f,-0.0348f,0.007f,-0.0183f,-0.0334f,-0.0086f,-0.0224f,-0.0928f,-0.0086f,-0.0213f,-0.0954f,0.007f,-0.0142f,-0.0449f,0.0077f,-0.1602f,-0.0417f,-0.0086f,-0.1594f,-0.0002f,-0.0086f,-0.1599f,-0.0002f,0.0077f,-0.1609f,-0.1316f,-0.0086f,-0.0727f,-0.1377f,0.0077f,-0.0725f,-0.0944f,0.0077f,-0.1477f,-0.0909f,-0.0086f,-0.1456f,-0.1226f,0.0077f,-0.1221f,-0.1188f,-0.0086f,-0.1198f,-0.0002f,-0.0086f,-0.0224f,0.0408f,-0.0153f,-0.1554f,0.0885f,-0.0153f,-0.142f,0.1149f,-0.0153f,-0.1176f,0.1269f,-0.0153f,-0.0736f,0.0904f,-0.0153f,-0.0253f,0.0331f,-0.0153f,-0.0264f,-0.0002f,-0.0153f,-0.0264f,-0.0334f,-0.0153f,-0.0264f,-0.0908f,-0.0153f,-0.0253f,-0.1272f,-0.0153f,-0.0736f,-0.1152f,-0.0153f,-0.1176f,-0.0889f,-0.0153f,-0.142f,-0.0411f,-0.0153f,-0.1554f,-0.0002f,-0.0153f,-0.1559f,-0.0002f,0.0147f,-0.0223f,0.0346f,0.0147f,-0.0224f,0.0931f,0.0147f,-0.0183f,0.133f,0.0147f,-0.0732f,0.1188f,0.0147f,-0.1199f,0.0921f,0.0147f,-0.1441f,0.044f,0.0147f,-0.1562f,-0.0002f,0.0147f,-0.1569f,-0.0443f,0.0147f,-0.1562f,-0.0925f,0.0147f,-0.1441f,-0.1191f,0.0147f,-0.1199f,-0.1333f,0.0147f,-0.0732f,-0.0935f,0.0147f,-0.0183f,-0.0349f,0.0147f,-0.0224f});
  }
}
protected class MFVec2f409 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0908f,0.3999f,0.0325f,0.3879f,0.0306f,0.3835f,0.1568f,0.3845f,0.3535f,0.3812f,0.3589f,0.3783f,0.2214f,0.3832f,0.1952f,0.3809f,0.3561f,0.3769f,0.0802f,0.3883f,0.1575f,0.3746f,0.3637f,0.3704f,0.356f,0.3713f,0.3581f,0.3683f,0.0256f,0.3731f,0.0261f,0.363f,0.2218f,0.3729f,0.1941f,0.3712f,0.0325f,0.3879f,0.0256f,0.3731f,0.0802f,0.3883f,0.0908f,0.3999f,0.3589f,0.3783f,0.3637f,0.3704f,0.3581f,0.3683f,0.3561f,0.3769f,0.1575f,0.3746f,0.1568f,0.3845f,0.356f,0.3713f,0.3535f,0.3812f,0.2214f,0.3832f,0.2218f,0.3729f,0.1952f,0.3809f,0.1941f,0.3712f,0.0306f,0.3835f,0.0261f,0.363f,0.3637f,0.3704f,0.2218f,0.3729f,0.1941f,0.3712f,0.1575f,0.3746f,0.0802f,0.3883f,0.0256f,0.3731f,0.0261f,0.363f,0.0256f,0.3731f,0.0802f,0.3883f,0.1575f,0.3746f,0.1941f,0.3712f,0.2218f,0.3729f,0.356f,0.3713f,0.3581f,0.3683f,0.0306f,0.3835f,0.0325f,0.3879f,0.0908f,0.3999f,0.1568f,0.3845f,0.1952f,0.3809f,0.2214f,0.3832f,0.3535f,0.3812f,0.3561f,0.3769f,0.3589f,0.3783f,0.2214f,0.3832f,0.1952f,0.3809f,0.1568f,0.3845f,0.0908f,0.3999f,0.0325f,0.3879f});
  }
}
protected class MFFloat410 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat411 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32412 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,6,-1,6,8,0,-1,9,18,19,-1,19,1,9,-1,7,5,22,-1,22,23,7,-1,1,3,10,-1,10,9,1,-1,3,4,11,-1,11,10,3,-1,4,0,8,-1,8,11,4,-1,5,7,6,-1,6,2,5,-1,13,12,15,-1,15,14,13,-1,17,16,19,-1,19,18,17,-1,20,23,22,-1,22,21,20,-1,16,17,25,-1,25,24,16,-1,24,25,27,-1,27,26,24,-1,26,27,12,-1,12,13,26,-1,21,14,15,-1,15,20,21,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,54,55,42,-1,46,54,42,-1,44,46,42,-1,43,44,42,-1,1,19,29,-1,29,28,1,-1,19,16,30,-1,30,29,19,-1,16,24,31,-1,31,30,16,-1,24,26,32,-1,32,31,24,-1,26,13,33,-1,33,32,26,-1,13,14,34,-1,34,33,13,-1,14,21,35,-1,35,34,14,-1,21,22,36,-1,36,35,21,-1,22,5,37,-1,37,36,22,-1,5,2,38,-1,38,37,5,-1,2,0,39,-1,39,38,2,-1,0,4,40,-1,40,39,0,-1,4,3,41,-1,41,40,4,-1,3,1,28,-1,28,41,3,-1,7,23,43,-1,43,42,7,-1,23,20,44,-1,44,43,23,-1,20,15,45,-1,45,44,20,-1,15,12,46,-1,46,45,15,-1,12,27,47,-1,47,46,12,-1,27,25,48,-1,48,47,27,-1,25,17,49,-1,49,48,25,-1,17,18,50,-1,50,49,17,-1,18,9,51,-1,51,50,18,-1,9,10,52,-1,52,51,9,-1,10,11,53,-1,53,52,10,-1,11,8,54,-1,54,53,11,-1,8,6,55,-1,55,54,8,-1,6,7,42,-1,42,55,6,-1});
  }
}
protected class MFInt32413 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,8,9,-1,9,11,3,-1,13,16,6,-1,6,5,13,-1,10,0,7,-1,7,17,10,-1,2,1,14,-1,14,12,2,-1,1,4,15,-1,15,14,1,-1,4,3,11,-1,11,15,4,-1,0,10,9,-1,9,8,0,-1,19,18,21,-1,21,20,19,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,31,30,33,-1,33,32,31,-1,32,33,35,-1,35,34,32,-1,34,35,18,-1,18,19,34,-1,27,20,21,-1,21,26,27,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,62,63,50,-1,54,62,50,-1,52,54,50,-1,51,52,50,-1,5,6,37,-1,37,36,5,-1,25,22,38,-1,38,37,25,-1,31,32,39,-1,39,38,31,-1,32,34,40,-1,40,39,32,-1,34,19,41,-1,41,40,34,-1,19,20,42,-1,42,41,19,-1,20,27,43,-1,43,42,20,-1,27,28,44,-1,44,43,27,-1,7,0,45,-1,45,44,7,-1,0,8,46,-1,46,45,0,-1,8,3,47,-1,47,46,8,-1,3,4,48,-1,48,47,3,-1,4,1,49,-1,49,48,4,-1,1,2,36,-1,36,49,1,-1,10,17,51,-1,51,50,10,-1,29,26,52,-1,52,51,29,-1,26,21,53,-1,53,52,26,-1,21,18,54,-1,54,53,21,-1,18,35,55,-1,55,54,18,-1,35,33,56,-1,56,55,35,-1,33,30,57,-1,57,56,33,-1,23,24,58,-1,58,57,23,-1,16,13,59,-1,59,58,16,-1,12,14,60,-1,60,59,12,-1,14,15,61,-1,61,60,14,-1,15,11,62,-1,62,61,15,-1,11,9,63,-1,63,62,11,-1,9,10,50,-1,50,63,9,-1});
  }
}
protected class MFVec3f414 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1412f,0.0045f,-0.0722f,0.0462f,0.0045f,-0.1608f,0.0921f,0.0045f,-0.018f,0.0963f,0.0045f,-0.1492f,0.1252f,0.0045f,-0.1233f,0.0355f,0.0045f,-0.0159f,0.0951f,-0.0086f,-0.0142f,0.0344f,-0.0086f,-0.0183f,0.1374f,-0.0079f,-0.0725f,0.0445f,-0.0079f,-0.1602f,0.094f,-0.0079f,-0.1477f,0.1223f,-0.0079f,-0.1221f,-0.1377f,-0.0079f,-0.0725f,-0.1416f,0.0045f,-0.0722f,-0.0925f,0.0045f,-0.018f,-0.0954f,-0.0086f,-0.0142f,-0.0466f,0.0045f,-0.1608f,-0.0449f,-0.0079f,-0.1602f,-0.0002f,-0.0079f,-0.1609f,-0.0002f,0.0045f,-0.1618f,-0.0348f,-0.0086f,-0.0183f,-0.0358f,0.0045f,-0.0159f,-0.0002f,0.0045f,-0.0158f,-0.0002f,-0.0086f,-0.0183f,-0.0967f,0.0045f,-0.1492f,-0.0944f,-0.0079f,-0.1477f,-0.1255f,0.0045f,-0.1233f,-0.1226f,-0.0079f,-0.1221f,0.0456f,0.0123f,-0.156f,-0.0002f,0.0123f,-0.1571f,-0.046f,0.0123f,-0.156f,-0.0944f,0.0123f,-0.1449f,-0.1214f,0.0123f,-0.1206f,-0.1362f,0.0123f,-0.0734f,-0.0903f,0.0123f,-0.0227f,-0.0358f,0.0123f,-0.0207f,-0.0002f,0.0123f,-0.0206f,0.0354f,0.0123f,-0.0207f,0.0899f,0.0123f,-0.0227f,0.1359f,0.0123f,-0.0734f,0.121f,0.0123f,-0.1206f,0.0941f,0.0123f,-0.1449f,0.0341f,-0.0169f,-0.0249f,-0.0002f,-0.0169f,-0.0249f,-0.0345f,-0.0169f,-0.0249f,-0.0918f,-0.0169f,-0.021f,-0.1306f,-0.0169f,-0.0738f,-0.1168f,-0.0169f,-0.1187f,-0.0908f,-0.0169f,-0.1419f,-0.0436f,-0.0169f,-0.1537f,-0.0002f,-0.0169f,-0.1543f,0.0433f,-0.0169f,-0.1537f,0.0905f,-0.0169f,-0.1419f,0.1164f,-0.0169f,-0.1187f,0.1303f,-0.0169f,-0.0738f,0.0915f,-0.0169f,-0.021f});
  }
}
protected class MFVec2f415 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0437f,0.4075f,0.2185f,0.3912f,0.3484f,0.3944f,0.1518f,0.3905f,0.1902f,0.3894f,0.3503f,0.3879f,0.3505f,0.3886f,0.0427f,0.408f,0.0961f,0.4138f,0.0908f,0.3999f,0.0325f,0.3879f,0.1568f,0.3845f,0.3535f,0.3812f,0.3589f,0.3783f,0.2214f,0.3832f,0.1952f,0.3809f,0.3561f,0.3769f,0.0306f,0.3835f,0.1568f,0.3845f,0.1518f,0.3905f,0.0961f,0.4138f,0.0908f,0.3999f,0.3503f,0.3879f,0.3589f,0.3783f,0.3561f,0.3769f,0.3505f,0.3886f,0.0325f,0.3879f,0.0437f,0.4075f,0.0427f,0.408f,0.0306f,0.3835f,0.3535f,0.3812f,0.3484f,0.3944f,0.2185f,0.3912f,0.2214f,0.3832f,0.1902f,0.3894f,0.1952f,0.3809f,0.3484f,0.3944f,0.3505f,0.3886f,0.3503f,0.3879f,0.2185f,0.3912f,0.1902f,0.3894f,0.1518f,0.3905f,0.0961f,0.4138f,0.0437f,0.4075f,0.0427f,0.408f,0.0437f,0.4075f,0.0961f,0.4138f,0.1518f,0.3905f,0.1902f,0.3894f,0.2185f,0.3912f,0.0325f,0.3879f,0.0306f,0.3835f,0.0325f,0.3879f,0.0908f,0.3999f,0.1568f,0.3845f,0.1952f,0.3809f,0.2214f,0.3832f,0.3535f,0.3812f,0.3561f,0.3769f,0.3589f,0.3783f,0.2214f,0.3832f,0.1952f,0.3809f,0.1568f,0.3845f,0.0908f,0.3999f});
  }
}
protected class MFFloat416 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat417 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32418 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,9,5,-1,5,3,12,-1,2,1,6,-1,6,11,2,-1,0,7,23,-1,23,24,0,-1,25,8,12,-1,12,3,25,-1,9,6,1,-1,1,5,9,-1,11,10,4,-1,4,2,11,-1,4,10,7,-1,7,0,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,24,23,-1,23,22,21,-1,25,16,13,-1,13,8,25,-1,14,15,19,-1,19,20,14,-1,17,18,27,-1,27,26,17,-1,27,21,22,-1,22,26,27,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,5,29,-1,29,28,3,-1,5,1,30,-1,30,29,5,-1,1,2,31,-1,31,30,1,-1,2,4,32,-1,32,31,2,-1,4,0,33,-1,33,32,4,-1,0,24,34,-1,34,33,0,-1,24,21,35,-1,35,34,24,-1,21,27,36,-1,36,35,21,-1,27,18,37,-1,37,36,27,-1,18,19,38,-1,38,37,18,-1,19,15,39,-1,39,38,19,-1,15,16,40,-1,40,39,15,-1,16,25,41,-1,41,40,16,-1,25,3,28,-1,28,41,25,-1,23,7,43,-1,43,42,23,-1,7,10,44,-1,44,43,7,-1,10,11,45,-1,45,44,10,-1,11,6,46,-1,46,45,11,-1,6,9,47,-1,47,46,6,-1,9,12,48,-1,48,47,9,-1,12,8,49,-1,49,48,12,-1,8,13,50,-1,50,49,8,-1,13,14,51,-1,51,50,13,-1,14,20,52,-1,52,51,14,-1,20,17,53,-1,53,52,20,-1,17,26,54,-1,54,53,17,-1,26,22,55,-1,55,54,26,-1,22,23,42,-1,42,55,22,-1});
  }
}
protected class MFInt32419 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {17,13,8,-1,8,4,17,-1,3,2,9,-1,9,16,3,-1,1,10,14,-1,14,5,1,-1,6,12,17,-1,17,4,6,-1,13,9,2,-1,2,8,13,-1,16,15,7,-1,7,3,16,-1,7,15,11,-1,11,0,7,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,30,21,18,-1,18,31,30,-1,19,20,24,-1,24,25,19,-1,22,23,33,-1,33,32,22,-1,33,35,34,-1,34,32,33,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,4,8,37,-1,37,36,4,-1,8,2,38,-1,38,37,8,-1,2,3,39,-1,39,38,2,-1,3,7,40,-1,40,39,3,-1,7,0,41,-1,41,40,7,-1,1,5,42,-1,42,41,1,-1,29,26,43,-1,43,42,29,-1,35,33,44,-1,44,43,35,-1,33,23,45,-1,45,44,33,-1,23,24,46,-1,46,45,23,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,21,30,49,-1,49,48,21,-1,6,4,36,-1,36,49,6,-1,14,10,51,-1,51,50,14,-1,11,15,52,-1,52,51,11,-1,15,16,53,-1,53,52,15,-1,16,9,54,-1,54,53,16,-1,9,13,55,-1,55,54,9,-1,13,17,56,-1,56,55,13,-1,17,12,57,-1,57,56,17,-1,31,18,58,-1,58,57,31,-1,18,19,59,-1,59,58,18,-1,19,25,60,-1,60,59,19,-1,25,22,61,-1,61,60,25,-1,22,32,62,-1,62,61,22,-1,32,34,63,-1,63,62,32,-1,27,28,50,-1,50,63,27,-1});
  }
}
protected class MFVec3f420 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0434f,0.007f,-0.1614f,0.1391f,0.007f,-0.071f,0.1289f,0.007f,-0.119f,0.0362f,0.007f,-0.018f,0.096f,0.007f,-0.1507f,0.0886f,0.007f,-0.0225f,0.1412f,-0.0085f,-0.0722f,0.0462f,-0.0085f,-0.1608f,-0.0002f,-0.0085f,-0.0158f,0.0921f,-0.0085f,-0.018f,0.0963f,-0.0085f,-0.1492f,0.1252f,-0.0085f,-0.1233f,0.0355f,-0.0085f,-0.0159f,-0.0358f,-0.0085f,-0.0159f,-0.0925f,-0.0085f,-0.018f,-0.0889f,0.007f,-0.0225f,-0.0365f,0.007f,-0.018f,-0.1255f,-0.0085f,-0.1233f,-0.1293f,0.007f,-0.119f,-0.1395f,0.007f,-0.071f,-0.1416f,-0.0085f,-0.0722f,-0.0438f,0.007f,-0.1614f,-0.0466f,-0.0085f,-0.1608f,-0.0002f,-0.0085f,-0.1618f,-0.0002f,0.007f,-0.1634f,-0.0002f,0.007f,-0.0174f,-0.0967f,-0.0085f,-0.1492f,-0.0963f,0.007f,-0.1507f,0.0359f,0.0147f,-0.0234f,0.0862f,0.0147f,-0.0277f,0.1332f,0.0147f,-0.0728f,0.124f,0.0147f,-0.1163f,0.0934f,0.0147f,-0.1457f,0.0427f,0.0147f,-0.156f,-0.0002f,0.0147f,-0.158f,-0.0431f,0.0147f,-0.156f,-0.0937f,0.0147f,-0.1457f,-0.1243f,0.0147f,-0.1163f,-0.1336f,0.0147f,-0.0728f,-0.0866f,0.0147f,-0.0277f,-0.0362f,0.0147f,-0.0234f,-0.0002f,0.0147f,-0.0228f,-0.0002f,-0.0138f,-0.1564f,0.0455f,-0.0138f,-0.1554f,0.0938f,-0.0138f,-0.1443f,0.1205f,-0.0138f,-0.1203f,0.1352f,-0.0138f,-0.0735f,0.0896f,-0.0138f,-0.0233f,0.0354f,-0.0138f,-0.0213f,-0.0002f,-0.0138f,-0.0212f,-0.0358f,-0.0138f,-0.0213f,-0.09f,-0.0138f,-0.0233f,-0.1355f,-0.0138f,-0.0735f,-0.1208f,-0.0138f,-0.1203f,-0.0941f,-0.0138f,-0.1443f,-0.0459f,-0.0138f,-0.1554f});
  }
}
protected class MFVec2f421 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3061f,0.4256f,0.3364f,0.4029f,0.1528f,0.4078f,0.1843f,0.4071f,0.055f,0.4216f,0.3325f,0.4068f,0.0482f,0.4185f,0.221f,0.4256f,0.1008f,0.4259f,0.1518f,0.3905f,0.3506f,0.3865f,0.3484f,0.3944f,0.0427f,0.408f,0.0961f,0.4138f,0.3437f,0.3934f,0.2185f,0.3912f,0.1902f,0.3894f,0.0437f,0.4075f,0.0437f,0.4075f,0.0961f,0.4138f,0.1008f,0.4259f,0.055f,0.4216f,0.1902f,0.3894f,0.1843f,0.4071f,0.1528f,0.4078f,0.1518f,0.3905f,0.3364f,0.4029f,0.3506f,0.3865f,0.3437f,0.3934f,0.3325f,0.4068f,0.0482f,0.4185f,0.0427f,0.408f,0.2185f,0.3912f,0.221f,0.4256f,0.3484f,0.3944f,0.3061f,0.4256f,0.055f,0.4216f,0.1008f,0.4259f,0.1528f,0.4078f,0.1843f,0.4071f,0.221f,0.4256f,0.3061f,0.4256f,0.3325f,0.4068f,0.3364f,0.4029f,0.221f,0.4256f,0.1843f,0.4071f,0.1528f,0.4078f,0.1008f,0.4259f,0.055f,0.4216f,0.0482f,0.4185f,0.3437f,0.3934f,0.3506f,0.3865f,0.2185f,0.3912f,0.1902f,0.3894f,0.1518f,0.3905f,0.0961f,0.4138f,0.0437f,0.4075f,0.0427f,0.408f,0.0437f,0.4075f,0.0961f,0.4138f,0.1518f,0.3905f,0.1902f,0.3894f,0.2185f,0.3912f,0.3484f,0.3944f});
  }
}
protected class MFFloat422 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat423 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32424 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,6,16,-1,16,13,0,-1,17,10,9,-1,9,3,17,-1,12,7,5,-1,5,2,12,-1,8,11,4,-1,4,1,8,-1,4,11,6,-1,6,0,4,-1,2,3,9,-1,9,12,2,-1,1,5,7,-1,7,8,1,-1,14,13,16,-1,16,15,14,-1,17,19,18,-1,18,10,17,-1,21,20,23,-1,23,22,21,-1,25,24,27,-1,27,26,25,-1,27,14,15,-1,15,26,27,-1,20,21,18,-1,18,19,20,-1,24,25,22,-1,22,23,24,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,2,29,-1,29,28,3,-1,2,5,30,-1,30,29,2,-1,5,1,31,-1,31,30,5,-1,1,4,32,-1,32,31,1,-1,4,0,33,-1,33,32,4,-1,0,13,34,-1,34,33,0,-1,13,14,35,-1,35,34,13,-1,14,27,36,-1,36,35,14,-1,27,24,37,-1,37,36,27,-1,24,23,38,-1,38,37,24,-1,23,20,39,-1,39,38,23,-1,20,19,40,-1,40,39,20,-1,19,17,41,-1,41,40,19,-1,17,3,28,-1,28,41,17,-1,12,9,43,-1,43,42,12,-1,9,10,44,-1,44,43,9,-1,10,18,45,-1,45,44,10,-1,18,21,46,-1,46,45,18,-1,21,22,47,-1,47,46,21,-1,22,25,48,-1,48,47,22,-1,25,26,49,-1,49,48,25,-1,26,15,50,-1,50,49,26,-1,15,16,51,-1,51,50,15,-1,16,6,52,-1,52,51,16,-1,6,11,53,-1,53,52,6,-1,11,8,54,-1,54,53,11,-1,8,7,55,-1,55,54,8,-1,7,12,42,-1,42,55,7,-1});
  }
}
protected class MFInt32425 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,10,14,-1,14,2,5,-1,8,15,13,-1,13,7,8,-1,17,11,3,-1,3,6,17,-1,12,16,0,-1,0,4,12,-1,0,16,9,-1,9,1,0,-1,6,7,13,-1,13,17,6,-1,4,3,11,-1,11,12,4,-1,19,18,21,-1,21,20,19,-1,22,25,24,-1,24,23,22,-1,27,26,29,-1,29,28,27,-1,31,30,33,-1,33,32,31,-1,33,35,34,-1,34,32,33,-1,26,27,24,-1,24,25,26,-1,30,31,28,-1,28,29,30,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,7,6,37,-1,37,36,7,-1,6,3,38,-1,38,37,6,-1,3,4,39,-1,39,38,3,-1,4,0,40,-1,40,39,4,-1,0,1,41,-1,41,40,0,-1,5,2,42,-1,42,41,5,-1,18,19,43,-1,43,42,18,-1,35,33,44,-1,44,43,35,-1,33,30,45,-1,45,44,33,-1,30,29,46,-1,46,45,30,-1,29,26,47,-1,47,46,29,-1,26,25,48,-1,48,47,26,-1,25,22,49,-1,49,48,25,-1,8,7,36,-1,36,49,8,-1,17,13,51,-1,51,50,17,-1,13,15,52,-1,52,51,13,-1,23,24,53,-1,53,52,23,-1,24,27,54,-1,54,53,24,-1,27,28,55,-1,55,54,27,-1,28,31,56,-1,56,55,28,-1,31,32,57,-1,57,56,31,-1,32,34,58,-1,58,57,32,-1,20,21,59,-1,59,58,20,-1,14,10,60,-1,60,59,14,-1,9,16,61,-1,61,60,9,-1,16,12,62,-1,62,61,16,-1,12,11,63,-1,63,62,12,-1,11,17,50,-1,50,63,11,-1});
  }
}
protected class MFVec3f426 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0406f,0.0069f,-0.162f,0.1326f,0.0069f,-0.1147f,0.085f,0.0069f,-0.0269f,0.0369f,0.0069f,-0.02f,0.0956f,0.0069f,-0.1521f,0.137f,0.0069f,-0.0697f,0.0434f,-0.0086f,-0.1614f,0.1391f,-0.0086f,-0.071f,0.1289f,-0.0086f,-0.119f,0.0362f,-0.0086f,-0.018f,-0.0002f,-0.0086f,-0.0174f,0.096f,-0.0086f,-0.1507f,0.0886f,-0.0086f,-0.0225f,-0.0002f,0.0069f,-0.165f,-0.0409f,0.0069f,-0.162f,-0.0438f,-0.0086f,-0.1614f,-0.0002f,-0.0086f,-0.1634f,-0.0002f,0.0069f,-0.0189f,-0.0365f,-0.0086f,-0.018f,-0.0372f,0.0069f,-0.02f,-0.0854f,0.0069f,-0.0269f,-0.0889f,-0.0086f,-0.0225f,-0.1395f,-0.0086f,-0.071f,-0.1374f,0.0069f,-0.0697f,-0.133f,0.0069f,-0.1147f,-0.1293f,-0.0086f,-0.119f,-0.0963f,-0.0086f,-0.1507f,-0.0959f,0.0069f,-0.1521f,0.0363f,0.0151f,-0.0264f,0.0824f,0.0151f,-0.033f,0.1304f,0.0151f,-0.0725f,0.1265f,0.0151f,-0.1119f,0.0925f,0.0151f,-0.1462f,0.0398f,0.0151f,-0.1556f,-0.0002f,0.0151f,-0.1586f,-0.0401f,0.0151f,-0.1556f,-0.0928f,0.0151f,-0.1462f,-0.1269f,0.0151f,-0.1119f,-0.1307f,0.0151f,-0.0725f,-0.0828f,0.0151f,-0.033f,-0.0367f,0.0151f,-0.0264f,-0.0002f,0.0151f,-0.0253f,0.0858f,-0.0161f,-0.0286f,0.0358f,-0.0161f,-0.0243f,-0.0002f,-0.0161f,-0.0237f,-0.0362f,-0.0161f,-0.0243f,-0.0862f,-0.0161f,-0.0286f,-0.1325f,-0.0161f,-0.0731f,-0.1235f,-0.0161f,-0.1158f,-0.0932f,-0.0161f,-0.1448f,-0.043f,-0.0161f,-0.155f,-0.0002f,-0.0161f,-0.157f,0.0426f,-0.0161f,-0.155f,0.0929f,-0.0161f,-0.1448f,0.1231f,-0.0161f,-0.1158f,0.1322f,-0.0161f,-0.0731f});
  }
}
protected class MFVec2f427 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2236f,0.46f,0.2638f,0.4568f,0.3214f,0.4203f,0.1538f,0.4251f,0.1784f,0.4249f,0.3223f,0.4192f,0.1055f,0.438f,0.0663f,0.4356f,0.0537f,0.4289f,0.3061f,0.4256f,0.3364f,0.4029f,0.1528f,0.4078f,0.1843f,0.4071f,0.055f,0.4216f,0.3325f,0.4068f,0.0482f,0.4185f,0.221f,0.4256f,0.1008f,0.4259f,0.3214f,0.4203f,0.3223f,0.4192f,0.3364f,0.4029f,0.3325f,0.4068f,0.0537f,0.4289f,0.0482f,0.4185f,0.055f,0.4216f,0.0663f,0.4356f,0.1055f,0.438f,0.1008f,0.4259f,0.1528f,0.4078f,0.1538f,0.4251f,0.1784f,0.4249f,0.1843f,0.4071f,0.221f,0.4256f,0.2236f,0.46f,0.3061f,0.4256f,0.2638f,0.4568f,0.0663f,0.4356f,0.1055f,0.438f,0.1538f,0.4251f,0.1784f,0.4249f,0.2236f,0.46f,0.2638f,0.4568f,0.3214f,0.4203f,0.3223f,0.4192f,0.2236f,0.46f,0.1784f,0.4249f,0.1538f,0.4251f,0.1055f,0.438f,0.0663f,0.4356f,0.0537f,0.4289f,0.1008f,0.4259f,0.055f,0.4216f,0.0482f,0.4185f,0.055f,0.4216f,0.1008f,0.4259f,0.1528f,0.4078f,0.1843f,0.4071f,0.221f,0.4256f,0.3061f,0.4256f,0.3325f,0.4068f,0.3364f,0.4029f,0.221f,0.4256f,0.1843f,0.4071f,0.1528f,0.4078f});
  }
}
protected class MFFloat428 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat429 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32430 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,9,-1,9,12,2,-1,3,0,10,-1,10,9,3,-1,7,20,21,-1,21,4,7,-1,11,7,4,-1,4,5,11,-1,25,26,10,-1,10,0,25,-1,6,11,5,-1,11,6,1,-1,1,8,11,-1,2,12,8,-1,8,1,2,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,25,17,18,-1,18,26,25,-1,27,24,23,-1,23,29,28,-1,28,27,23,-1,14,28,29,-1,29,13,14,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,31,34,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,31,38,42,-1,42,43,44,-1,31,42,44,-1,31,44,45,-1,31,45,30,-1,48,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,46,-1,54,58,46,-1,50,54,46,-1,48,50,46,-1,47,48,46,-1,3,2,31,-1,31,30,3,-1,2,1,32,-1,32,31,2,-1,1,6,33,-1,33,32,1,-1,6,5,34,-1,34,33,6,-1,5,4,35,-1,35,34,5,-1,4,21,36,-1,36,35,4,-1,21,22,37,-1,37,36,21,-1,22,24,38,-1,38,37,22,-1,24,27,39,-1,39,38,24,-1,27,28,40,-1,40,39,27,-1,28,14,41,-1,41,40,28,-1,14,15,42,-1,42,41,14,-1,15,17,43,-1,43,42,15,-1,17,25,44,-1,44,43,17,-1,25,0,45,-1,45,44,25,-1,0,3,30,-1,30,45,0,-1,9,10,47,-1,47,46,9,-1,10,26,48,-1,48,47,10,-1,26,18,49,-1,49,48,26,-1,18,16,50,-1,50,49,18,-1,16,13,51,-1,51,50,16,-1,13,29,52,-1,52,51,13,-1,29,23,53,-1,53,52,29,-1,23,19,54,-1,54,53,23,-1,19,20,55,-1,55,54,19,-1,20,7,56,-1,56,55,20,-1,7,11,57,-1,57,56,7,-1,11,8,58,-1,58,57,11,-1,8,12,59,-1,59,58,8,-1,12,9,46,-1,46,59,12,-1});
  }
}
protected class MFInt32431 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,14,-1,14,18,3,-1,4,1,15,-1,15,14,4,-1,10,17,7,-1,7,6,10,-1,16,11,5,-1,5,8,16,-1,0,19,15,-1,15,1,0,-1,9,16,8,-1,16,9,2,-1,2,12,16,-1,3,18,13,-1,13,2,3,-1,21,20,23,-1,23,22,21,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,30,33,32,-1,32,31,30,-1,34,24,25,-1,25,35,34,-1,36,33,30,-1,30,38,37,-1,37,36,30,-1,21,37,39,-1,39,20,21,-1,41,42,43,-1,41,43,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,41,48,52,-1,52,53,54,-1,41,52,54,-1,41,54,55,-1,41,55,40,-1,58,59,60,-1,60,61,62,-1,62,63,64,-1,60,62,64,-1,64,65,66,-1,66,67,68,-1,64,66,68,-1,68,69,56,-1,64,68,56,-1,60,64,56,-1,58,60,56,-1,57,58,56,-1,4,3,41,-1,41,40,4,-1,3,2,42,-1,42,41,3,-1,2,9,43,-1,43,42,2,-1,9,8,44,-1,44,43,9,-1,8,5,45,-1,45,44,8,-1,6,7,46,-1,46,45,6,-1,28,29,47,-1,47,46,28,-1,32,33,48,-1,48,47,32,-1,33,36,49,-1,49,48,33,-1,36,37,50,-1,50,49,36,-1,37,21,51,-1,51,50,37,-1,21,22,52,-1,52,51,21,-1,22,24,53,-1,53,52,22,-1,24,34,54,-1,54,53,24,-1,0,1,55,-1,55,54,0,-1,1,4,40,-1,40,55,1,-1,14,15,57,-1,57,56,14,-1,15,19,58,-1,58,57,15,-1,35,25,59,-1,59,58,35,-1,25,23,60,-1,60,59,25,-1,23,20,61,-1,61,60,23,-1,20,39,62,-1,62,61,20,-1,38,30,63,-1,63,62,38,-1,30,31,64,-1,64,63,30,-1,26,27,65,-1,65,64,26,-1,17,10,66,-1,66,65,17,-1,11,16,67,-1,67,66,11,-1,16,12,68,-1,68,67,16,-1,13,18,69,-1,69,68,13,-1,18,14,56,-1,56,69,18,-1});
  }
}
protected class MFVec3f432 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0376f,0.0099f,-0.0225f,0.1298f,0.0105f,-0.1222f,0.1309f,0.0092f,-0.0677f,0.0805f,0.0117f,-0.0327f,0.0406f,0.0105f,-0.1582f,0.0962f,0.0105f,-0.1493f,0.1037f,0.0105f,-0.1485f,0.0406f,-0.0083f,-0.162f,0.1326f,-0.0083f,-0.1147f,0.085f,-0.0083f,-0.0269f,0.0369f,-0.0083f,-0.02f,0.0956f,-0.0083f,-0.1521f,0.137f,-0.0083f,-0.0697f,-0.1374f,-0.0083f,-0.0697f,-0.1312f,0.0092f,-0.0677f,-0.0808f,0.0117f,-0.0327f,-0.0854f,-0.0083f,-0.0269f,-0.038f,0.0099f,-0.0225f,-0.0372f,-0.0083f,-0.02f,-0.0409f,-0.0083f,-0.162f,-0.0002f,-0.0083f,-0.165f,-0.0002f,0.0105f,-0.1613f,-0.0409f,0.0105f,-0.1582f,-0.0959f,-0.0083f,-0.1521f,-0.0966f,0.0105f,-0.1493f,-0.0002f,0.0099f,-0.0205f,-0.0002f,-0.0083f,-0.0189f,-0.1041f,0.0105f,-0.1485f,-0.1301f,0.0105f,-0.1222f,-0.133f,-0.0083f,-0.1147f,0.0777f,0.0224f,-0.039f,0.1241f,0.0224f,-0.0711f,0.1231f,0.0224f,-0.1194f,0.1006f,0.0224f,-0.1421f,0.0953f,0.0224f,-0.1426f,0.0398f,0.0224f,-0.1516f,-0.0002f,0.0224f,-0.1545f,-0.0401f,0.0224f,-0.1516f,-0.0957f,0.0224f,-0.1426f,-0.101f,0.0224f,-0.1421f,-0.1235f,0.0224f,-0.1194f,-0.1244f,0.0224f,-0.0711f,-0.0781f,0.0224f,-0.039f,-0.037f,0.0224f,-0.0292f,-0.0002f,0.0224f,-0.0272f,0.0367f,0.0224f,-0.0292f,0.0822f,-0.0158f,-0.0333f,0.0363f,-0.0158f,-0.0268f,-0.0002f,-0.0158f,-0.0256f,-0.0366f,-0.0158f,-0.0268f,-0.0826f,-0.0158f,-0.0333f,-0.1304f,-0.0158f,-0.0727f,-0.1265f,-0.0158f,-0.1117f,-0.0927f,-0.0158f,-0.1459f,-0.0401f,-0.0158f,-0.1553f,-0.0002f,-0.0158f,-0.1582f,0.0397f,-0.0158f,-0.1553f,0.0923f,-0.0158f,-0.1459f,0.1262f,-0.0158f,-0.1117f,0.13f,-0.0158f,-0.0727f});
  }
}
protected class MFVec2f433 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0639f,0.4488f,0.0777f,0.4495f,0.1846f,0.4438f,0.1504f,0.4433f,0.1107f,0.4532f,0.2633f,0.457f,0.3222f,0.4193f,0.3214f,0.4203f,0.2198f,0.4731f,0.2144f,0.4674f,0.3223f,0.4192f,0.2638f,0.4568f,0.1784f,0.4249f,0.1784f,0.4249f,0.1055f,0.438f,0.0663f,0.4356f,0.2236f,0.46f,0.3214f,0.4203f,0.1538f,0.4251f,0.0537f,0.4289f,0.1538f,0.4251f,0.1504f,0.4433f,0.1107f,0.4532f,0.1055f,0.438f,0.0777f,0.4495f,0.0663f,0.4356f,0.3223f,0.4192f,0.3214f,0.4203f,0.3214f,0.4203f,0.3222f,0.4193f,0.2236f,0.46f,0.2638f,0.4568f,0.2633f,0.457f,0.2198f,0.4731f,0.0639f,0.4488f,0.0537f,0.4289f,0.2144f,0.4674f,0.1846f,0.4438f,0.1784f,0.4249f,0.1784f,0.4249f,0.1107f,0.4532f,0.1504f,0.4433f,0.1846f,0.4438f,0.2144f,0.4674f,0.2198f,0.4731f,0.2633f,0.457f,0.3214f,0.4203f,0.3222f,0.4193f,0.2198f,0.4731f,0.2144f,0.4674f,0.1846f,0.4438f,0.1504f,0.4433f,0.1107f,0.4532f,0.0777f,0.4495f,0.0639f,0.4488f,0.0777f,0.4495f,0.1055f,0.438f,0.0663f,0.4356f,0.0537f,0.4289f,0.0663f,0.4356f,0.1055f,0.438f,0.1538f,0.4251f,0.1784f,0.4249f,0.2236f,0.46f,0.2638f,0.4568f,0.3214f,0.4203f,0.3223f,0.4192f,0.2236f,0.46f,0.1784f,0.4249f,0.1538f,0.4251f});
  }
}
protected class MFFloat434 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat435 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32436 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {16,15,0,-1,0,7,16,-1,0,15,8,-1,1,5,11,-1,11,10,1,-1,18,6,12,-1,12,17,18,-1,14,13,2,-1,2,3,14,-1,9,14,3,-1,3,4,9,-1,11,5,0,-1,0,8,11,-1,13,12,6,-1,6,2,13,-1,49,16,7,-1,7,0,5,-1,1,10,9,-1,9,4,1,-1,3,2,20,-1,20,19,3,-1,2,6,21,-1,21,20,2,-1,6,18,53,-1,53,21,6,-1,7,5,23,-1,23,22,7,-1,5,1,24,-1,24,23,5,-1,1,4,25,-1,25,24,1,-1,4,3,19,-1,19,25,4,-1,10,11,27,-1,27,26,10,-1,11,8,28,-1,28,27,11,-1,8,15,29,-1,29,28,8,-1,17,12,30,-1,30,62,17,-1,12,13,31,-1,31,30,12,-1,13,14,32,-1,32,31,13,-1,14,9,33,-1,33,32,14,-1,9,10,26,-1,26,33,9,-1,16,35,34,-1,34,15,16,-1,34,36,15,-1,38,37,40,-1,40,39,38,-1,18,17,42,-1,42,41,18,-1,44,43,46,-1,46,45,44,-1,48,47,43,-1,43,44,48,-1,40,36,34,-1,34,39,40,-1,45,46,41,-1,41,42,45,-1,49,35,16,-1,35,39,34,-1,38,47,48,-1,48,37,38,-1,43,51,50,-1,50,46,43,-1,46,50,52,-1,52,41,46,-1,41,52,53,-1,53,18,41,-1,35,55,54,-1,54,39,35,-1,39,54,56,-1,56,38,39,-1,38,56,57,-1,57,47,38,-1,47,57,51,-1,51,43,47,-1,37,59,58,-1,58,40,37,-1,40,58,60,-1,60,36,40,-1,36,60,29,-1,29,15,36,-1,17,62,61,-1,61,42,17,-1,42,61,63,-1,63,45,42,-1,45,63,64,-1,64,44,45,-1,44,64,65,-1,65,48,44,-1,48,65,59,-1,59,37,48,-1,27,28,29,-1,29,60,58,-1,58,59,65,-1,29,58,65,-1,65,64,63,-1,63,61,62,-1,65,63,62,-1,62,30,31,-1,31,32,33,-1,62,31,33,-1,65,62,33,-1,29,65,33,-1,27,29,33,-1,27,33,26,-1});
  }
}
protected class MFInt32437 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,12,1,-1,1,0,2,-1,1,12,13,-1,4,8,16,-1,16,15,4,-1,11,10,17,-1,17,19,11,-1,21,20,5,-1,5,6,21,-1,14,21,6,-1,6,7,14,-1,16,8,1,-1,1,13,16,-1,20,18,9,-1,9,5,20,-1,3,2,0,-1,0,1,8,-1,4,15,14,-1,14,7,4,-1,6,5,23,-1,23,22,6,-1,5,9,24,-1,24,23,5,-1,10,11,25,-1,25,24,10,-1,0,8,27,-1,27,26,0,-1,8,4,28,-1,28,27,8,-1,4,7,29,-1,29,28,4,-1,7,6,22,-1,22,29,7,-1,15,16,31,-1,31,30,15,-1,16,13,32,-1,32,31,16,-1,13,12,33,-1,33,32,13,-1,19,17,35,-1,35,34,19,-1,18,20,36,-1,36,35,18,-1,20,21,37,-1,37,36,20,-1,21,14,38,-1,38,37,21,-1,14,15,30,-1,30,38,14,-1,42,41,40,-1,40,39,42,-1,40,43,39,-1,45,44,47,-1,47,46,45,-1,49,48,51,-1,51,50,49,-1,53,52,55,-1,55,54,53,-1,57,56,52,-1,52,53,57,-1,47,43,40,-1,40,46,47,-1,54,55,59,-1,59,58,54,-1,60,41,42,-1,41,46,40,-1,45,56,57,-1,57,44,45,-1,52,62,61,-1,61,55,52,-1,55,61,63,-1,63,59,55,-1,50,63,64,-1,64,49,50,-1,41,66,65,-1,65,46,41,-1,46,65,67,-1,67,45,46,-1,45,67,68,-1,68,56,45,-1,56,68,62,-1,62,52,56,-1,44,70,69,-1,69,47,44,-1,47,69,71,-1,71,43,47,-1,43,71,72,-1,72,39,43,-1,48,74,73,-1,73,51,48,-1,58,73,75,-1,75,54,58,-1,54,75,76,-1,76,53,54,-1,53,76,77,-1,77,57,53,-1,57,77,70,-1,70,44,57,-1,31,32,33,-1,33,71,69,-1,69,70,77,-1,33,69,77,-1,77,76,75,-1,75,73,74,-1,77,75,74,-1,74,35,36,-1,36,37,38,-1,74,36,38,-1,77,74,38,-1,33,77,38,-1,31,33,38,-1,31,38,30,-1});
  }
}
protected class MFVec3f438 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0384f,0.0082f,-0.0247f,0.1208f,0.0194f,-0.0643f,0.0971f,0.0194f,-0.1452f,0.1155f,0.0194f,-0.1433f,0.1256f,0.0194f,-0.1331f,0.0745f,0.0194f,-0.0403f,0.0406f,0.0194f,-0.1529f,0.0357f,0.0154f,-0.0097f,0.0376f,-0.0085f,-0.0225f,0.1298f,-0.0079f,-0.1222f,0.1309f,-0.0093f,-0.0677f,0.0805f,-0.0067f,-0.0327f,0.0406f,-0.0079f,-0.1582f,0.0962f,-0.0079f,-0.1493f,0.1037f,-0.0079f,-0.1485f,-0.0002f,-0.0085f,-0.0205f,-0.0002f,0.0002f,-0.0092f,-0.0002f,-0.0079f,-0.1613f,-0.0002f,0.0194f,-0.1559f,0.1127f,0.029f,-0.1375f,0.0964f,0.029f,-0.1393f,0.0399f,0.029f,-0.1469f,0.034f,0.029f,-0.0161f,0.0713f,0.029f,-0.0454f,0.115f,0.029f,-0.068f,0.1194f,0.029f,-0.1308f,0.1274f,-0.0185f,-0.0702f,0.0796f,-0.0185f,-0.0371f,0.0375f,-0.0185f,-0.027f,-0.0002f,-0.0185f,-0.0251f,0.0407f,-0.0185f,-0.1534f,0.0974f,-0.0185f,-0.1443f,0.103f,-0.0185f,-0.1437f,0.1263f,-0.0185f,-0.1201f,-0.0387f,0.0082f,-0.0247f,-0.036f,0.0154f,-0.0097f,-0.038f,-0.0085f,-0.0225f,-0.1312f,-0.0093f,-0.0677f,-0.1212f,0.0194f,-0.0643f,-0.0749f,0.0194f,-0.0403f,-0.0808f,-0.0067f,-0.0327f,-0.0409f,0.0194f,-0.1529f,-0.0409f,-0.0079f,-0.1582f,-0.1159f,0.0194f,-0.1433f,-0.1041f,-0.0079f,-0.1485f,-0.0966f,-0.0079f,-0.1493f,-0.0975f,0.0194f,-0.1452f,-0.1259f,0.0194f,-0.1331f,-0.1301f,-0.0079f,-0.1222f,-0.0002f,0.0173f,-0.0159f,-0.0967f,0.029f,-0.1393f,-0.1131f,0.029f,-0.1375f,-0.0403f,0.029f,-0.1469f,-0.0002f,0.029f,-0.1499f,-0.0716f,0.029f,-0.0454f,-0.0344f,0.029f,-0.0161f,-0.1154f,0.029f,-0.068f,-0.1197f,0.029f,-0.1308f,-0.0799f,-0.0185f,-0.0371f,-0.1277f,-0.0185f,-0.0702f,-0.0379f,-0.0185f,-0.027f,-0.0411f,-0.0185f,-0.1534f,-0.0002f,-0.0185f,-0.1564f,-0.0977f,-0.0185f,-0.1443f,-0.1034f,-0.0185f,-0.1437f,-0.1267f,-0.0185f,-0.1201f});
  }
}
protected class MFVec2f439 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0763f,0.4945f,0.0877f,0.4617f,0.0525f,0.4715f,0.0399f,0.5407f,0.1491f,0.4682f,0.2169f,0.492f,0.2035f,0.4795f,0.1915f,0.4696f,0.1178f,0.4708f,0.2635f,0.4569f,0.3223f,0.4193f,0.3214f,0.4203f,0.0639f,0.4488f,0.0777f,0.4495f,0.1846f,0.4438f,0.1504f,0.4433f,0.1107f,0.4532f,0.3222f,0.4193f,0.2633f,0.457f,0.3214f,0.4203f,0.2198f,0.4731f,0.2144f,0.4674f,0.2035f,0.4795f,0.2169f,0.492f,0.2635f,0.4569f,0.3214f,0.4203f,0.0763f,0.4945f,0.1178f,0.4708f,0.1491f,0.4682f,0.1915f,0.4696f,0.1504f,0.4433f,0.1107f,0.4532f,0.0777f,0.4495f,0.0639f,0.4488f,0.3214f,0.4203f,0.3222f,0.4193f,0.2198f,0.4731f,0.2144f,0.4674f,0.1846f,0.4438f,0.0639f,0.4488f,0.0877f,0.4617f,0.0763f,0.4945f,0.0525f,0.4715f,0.0777f,0.4495f,0.1504f,0.4433f,0.1491f,0.4682f,0.1178f,0.4708f,0.1107f,0.4532f,0.3214f,0.4203f,0.3214f,0.4203f,0.3223f,0.4193f,0.3222f,0.4193f,0.2035f,0.4795f,0.2144f,0.4674f,0.2198f,0.4731f,0.2169f,0.492f,0.1915f,0.4696f,0.1846f,0.4438f,0.2633f,0.457f,0.2635f,0.4569f,0.0399f,0.5407f,0.2169f,0.492f,0.2035f,0.4795f,0.2635f,0.4569f,0.3214f,0.4203f,0.1178f,0.4708f,0.0763f,0.4945f,0.1491f,0.4682f,0.1915f,0.4696f,0.1107f,0.4532f,0.1504f,0.4433f,0.0777f,0.4495f,0.0639f,0.4488f,0.3222f,0.4193f,0.3214f,0.4203f,0.2198f,0.4731f,0.2144f,0.4674f,0.1846f,0.4438f});
  }
}
protected class MFFloat440 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat441 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32442 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,5,12,-1,7,2,19,-1,19,0,7,-1,0,11,7,-1,2,7,5,-1,5,1,2,-1,17,0,19,-1,0,17,6,-1,6,11,0,-1,20,2,1,-1,1,4,20,-1,2,20,19,-1,10,9,15,-1,15,14,10,-1,9,16,15,-1,8,10,14,-1,14,18,8,-1,13,6,17,-1,3,8,18,-1,18,21,3,-1,51,4,1,-1,1,12,51,-1,6,13,16,-1,16,9,6,-1,6,9,23,-1,23,22,6,-1,9,10,24,-1,24,23,9,-1,10,8,25,-1,25,24,10,-1,8,3,56,-1,56,25,8,-1,14,15,27,-1,27,26,14,-1,15,16,28,-1,28,27,15,-1,16,13,29,-1,29,28,16,-1,13,17,30,-1,30,29,13,-1,17,19,31,-1,31,30,17,-1,19,20,63,-1,63,31,19,-1,21,18,32,-1,32,65,21,-1,18,14,26,-1,26,32,18,-1,33,35,34,-1,38,37,36,-1,36,39,38,-1,37,38,40,-1,39,33,34,-1,34,38,39,-1,41,36,37,-1,37,40,42,-1,42,41,37,-1,20,4,33,-1,33,39,20,-1,39,36,20,-1,43,46,45,-1,45,44,43,-1,44,45,47,-1,49,48,46,-1,46,43,49,-1,50,41,42,-1,3,21,48,-1,48,49,3,-1,51,35,33,-1,33,4,51,-1,42,44,47,-1,47,50,42,-1,42,53,52,-1,52,44,42,-1,44,52,54,-1,54,43,44,-1,43,54,55,-1,55,49,43,-1,49,55,56,-1,56,3,49,-1,46,58,57,-1,57,45,46,-1,45,57,59,-1,59,47,45,-1,47,59,60,-1,60,50,47,-1,50,60,61,-1,61,41,50,-1,41,61,62,-1,62,36,41,-1,36,62,63,-1,63,20,36,-1,21,65,64,-1,64,48,21,-1,48,64,58,-1,58,46,48,-1,28,29,30,-1,31,63,62,-1,30,31,62,-1,62,61,60,-1,60,59,57,-1,62,60,57,-1,62,57,58,-1,58,64,65,-1,65,32,26,-1,58,65,26,-1,62,58,26,-1,30,62,26,-1,28,30,26,-1,27,28,26,-1});
  }
}
protected class MFInt32443 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,16,-1,4,5,26,-1,26,3,4,-1,3,15,4,-1,5,4,6,-1,6,7,5,-1,22,3,26,-1,3,22,8,-1,8,15,3,-1,27,5,7,-1,7,10,27,-1,5,27,26,-1,14,9,20,-1,20,19,14,-1,9,21,20,-1,13,14,19,-1,19,23,13,-1,18,8,22,-1,11,12,24,-1,24,25,11,-1,17,2,0,-1,0,16,17,-1,8,18,21,-1,21,9,8,-1,8,9,29,-1,29,28,8,-1,9,14,30,-1,30,29,9,-1,14,13,31,-1,31,30,14,-1,12,11,32,-1,32,31,12,-1,19,20,34,-1,34,33,19,-1,20,21,35,-1,35,34,20,-1,21,18,36,-1,36,35,21,-1,18,22,37,-1,37,36,18,-1,22,26,38,-1,38,37,22,-1,26,27,39,-1,39,38,26,-1,25,24,41,-1,41,40,25,-1,23,19,33,-1,33,41,23,-1,42,44,43,-1,47,46,45,-1,45,48,47,-1,46,47,49,-1,48,51,50,-1,50,47,48,-1,52,45,46,-1,46,49,53,-1,53,52,46,-1,55,54,51,-1,51,48,55,-1,48,45,55,-1,56,59,58,-1,58,57,56,-1,57,58,60,-1,62,61,59,-1,59,56,62,-1,63,52,53,-1,65,64,67,-1,67,66,65,-1,68,44,42,-1,42,69,68,-1,53,57,60,-1,60,63,53,-1,53,71,70,-1,70,57,53,-1,57,70,72,-1,72,56,57,-1,56,72,73,-1,73,62,56,-1,66,73,74,-1,74,65,66,-1,59,76,75,-1,75,58,59,-1,58,75,77,-1,77,60,58,-1,60,77,78,-1,78,63,60,-1,63,78,79,-1,79,52,63,-1,52,79,80,-1,80,45,52,-1,45,80,81,-1,81,55,45,-1,64,83,82,-1,82,67,64,-1,61,82,76,-1,76,59,61,-1,35,36,37,-1,38,39,80,-1,37,38,80,-1,80,79,78,-1,78,77,75,-1,80,78,75,-1,80,75,76,-1,76,82,83,-1,83,41,33,-1,76,83,33,-1,80,76,33,-1,37,80,33,-1,35,37,33,-1,34,35,33,-1});
  }
}
protected class MFVec3f444 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0703f,0.0023f,-0.0195f,0.0307f,0.0034f,-0.0247f,0.0309f,0.0034f,-0.0142f,-0.0002f,0.0118f,-0.1525f,-0.0002f,-0.0087f,-0.0195f,0.0458f,0.0154f,-0.0324f,0.1143f,0.0133f,-0.062f,0.0503f,0.019f,-0.0213f,0.0406f,0.0118f,-0.1495f,0.1229f,0.0118f,-0.1399f,0.0977f,0.0118f,-0.1427f,0.0854f,0.0176f,-0.0406f,0.0264f,0.0154f,-0.0397f,0.1208f,-0.0054f,-0.0643f,0.0971f,-0.0054f,-0.1452f,0.1155f,-0.0054f,-0.1433f,0.1256f,-0.0054f,-0.1331f,0.0745f,-0.0054f,-0.0403f,0.0406f,-0.0054f,-0.1529f,0.0357f,-0.0094f,-0.0097f,-0.0002f,-0.0074f,-0.0159f,-0.0002f,-0.0054f,-0.1559f,0.1097f,0.0212f,-0.0734f,0.1117f,0.02f,-0.1334f,0.0971f,0.02f,-0.1388f,0.0401f,0.02f,-0.1449f,0.0965f,-0.0187f,-0.1405f,0.1133f,-0.0187f,-0.1387f,0.1206f,-0.0187f,-0.1313f,0.1162f,-0.0187f,-0.0673f,0.0719f,-0.0187f,-0.0444f,0.0344f,-0.0187f,-0.0354f,0.0401f,-0.0187f,-0.1481f,-0.0311f,0.0034f,-0.0247f,-0.0461f,0.0154f,-0.0324f,-0.0268f,0.0154f,-0.0397f,-0.036f,-0.0094f,-0.0097f,-0.0706f,0.0023f,-0.0195f,-0.0507f,0.019f,-0.0213f,-0.0312f,0.0034f,-0.0142f,-0.0858f,0.0176f,-0.0406f,-0.0749f,-0.0054f,-0.0403f,-0.1146f,0.0133f,-0.062f,-0.098f,0.0118f,-0.1427f,-0.1233f,0.0118f,-0.1399f,-0.1159f,-0.0054f,-0.1433f,-0.0975f,-0.0054f,-0.1452f,-0.1259f,-0.0054f,-0.1331f,-0.0409f,-0.0054f,-0.1529f,-0.0409f,0.0118f,-0.1495f,-0.1212f,-0.0054f,-0.0643f,-0.0002f,0.0154f,-0.0435f,-0.112f,0.02f,-0.1334f,-0.1101f,0.0212f,-0.0734f,-0.0975f,0.02f,-0.1388f,-0.0405f,0.02f,-0.1449f,-0.0002f,0.02f,-0.1476f,-0.1136f,-0.0187f,-0.1387f,-0.0969f,-0.0187f,-0.1405f,-0.121f,-0.0187f,-0.1313f,-0.1166f,-0.0187f,-0.0673f,-0.0723f,-0.0187f,-0.0444f,-0.0347f,-0.0187f,-0.0354f,-0.0002f,-0.0187f,-0.0208f,-0.0404f,-0.0187f,-0.1481f,-0.0002f,-0.0187f,-0.1511f});
  }
}
protected class MFVec2f445 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4473f,0.6921f,0.4449f,0.6914f,0.4513f,0.6918f,0.1025f,0.5076f,0.0865f,0.5614f,0.0652f,0.5465f,0.0786f,0.5849f,0.0516f,0.5759f,0.1474f,0.4856f,0.1963f,0.4863f,0.0346f,0.5664f,0.3214f,0.4203f,0.3223f,0.4192f,0.2638f,0.4568f,0.2146f,0.5039f,0.1227f,0.5144f,0.4468f,0.6898f,0.4495f,0.6881f,0.1491f,0.4682f,0.2169f,0.492f,0.2035f,0.4795f,0.1915f,0.4696f,0.1178f,0.4708f,0.2635f,0.4569f,0.3223f,0.4193f,0.3214f,0.4203f,0.0763f,0.4945f,0.0399f,0.5407f,0.1474f,0.4856f,0.1963f,0.4863f,0.2146f,0.5039f,0.2638f,0.4568f,0.3214f,0.4203f,0.2169f,0.492f,0.2035f,0.4795f,0.1915f,0.4696f,0.1491f,0.4682f,0.1178f,0.4708f,0.0763f,0.4945f,0.0399f,0.5407f,0.3214f,0.4203f,0.3223f,0.4193f,0.4473f,0.6921f,0.4449f,0.6914f,0.4468f,0.6898f,0.0763f,0.4945f,0.1025f,0.5076f,0.0865f,0.5614f,0.0652f,0.5465f,0.1227f,0.5144f,0.0786f,0.5849f,0.0516f,0.5759f,0.1178f,0.4708f,0.1474f,0.4856f,0.0346f,0.5664f,0.0399f,0.5407f,0.2146f,0.5039f,0.1963f,0.4863f,0.2035f,0.4795f,0.2169f,0.492f,0.1915f,0.4696f,0.2635f,0.4569f,0.2638f,0.4568f,0.1491f,0.4682f,0.3214f,0.4203f,0.3214f,0.4203f,0.3223f,0.4192f,0.3223f,0.4193f,0.4495f,0.6881f,0.4513f,0.6918f,0.1963f,0.4863f,0.1474f,0.4856f,0.2146f,0.5039f,0.2638f,0.4568f,0.3214f,0.4203f,0.2035f,0.4795f,0.2169f,0.492f,0.1915f,0.4696f,0.1491f,0.4682f,0.1178f,0.4708f,0.0763f,0.4945f,0.0399f,0.5407f,0.3223f,0.4193f,0.3214f,0.4203f});
  }
}
protected class MFFloat446 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat447 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32448 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,5,3,-1,3,2,1,-1,5,6,3,-1,7,27,3,-1,3,6,7,-1,0,1,2,-1,43,11,10,-1,10,4,43,-1,5,1,12,-1,1,0,12,-1,35,26,12,-1,43,4,12,-1,4,5,12,-1,72,28,9,-1,9,28,27,-1,27,7,9,-1,5,4,10,-1,10,6,5,-1,29,72,8,-1,26,35,14,-1,14,49,26,-1,35,0,15,-1,15,14,35,-1,17,16,18,-1,18,19,17,-1,16,27,28,-1,28,18,16,-1,13,2,16,-1,27,16,2,-1,2,3,27,-1,19,18,29,-1,29,8,19,-1,18,28,72,-1,72,29,18,-1,0,13,15,-1,21,20,23,-1,23,61,21,-1,20,22,24,-1,24,23,20,-1,22,17,19,-1,19,24,22,-1,20,21,49,-1,49,14,20,-1,22,20,14,-1,14,15,22,-1,15,17,22,-1,61,23,30,-1,30,25,61,-1,23,24,33,-1,33,30,23,-1,24,19,8,-1,8,33,24,-1,0,2,13,-1,15,13,17,-1,16,17,13,-1,68,69,32,-1,32,31,68,-1,30,33,32,-1,33,8,34,-1,33,34,31,-1,31,32,33,-1,32,69,25,-1,25,30,32,-1,12,0,35,-1,37,36,58,-1,58,38,37,-1,38,58,39,-1,40,39,58,-1,58,41,40,-1,51,36,37,-1,43,42,44,-1,44,11,43,-1,38,12,37,-1,37,12,51,-1,45,12,26,-1,43,12,42,-1,42,12,38,-1,73,47,56,-1,47,40,41,-1,41,56,47,-1,38,39,44,-1,44,42,38,-1,46,59,73,-1,26,49,48,-1,48,45,26,-1,45,48,50,-1,50,51,45,-1,54,53,52,-1,52,55,54,-1,55,52,56,-1,56,41,55,-1,57,55,36,-1,41,58,36,-1,36,55,41,-1,53,59,46,-1,46,52,53,-1,52,46,73,-1,73,56,52,-1,51,50,57,-1,21,61,60,-1,60,62,21,-1,62,60,63,-1,63,64,62,-1,64,63,53,-1,53,54,64,-1,62,48,49,-1,49,21,62,-1,64,50,48,-1,48,62,64,-1,50,64,54,-1,61,25,65,-1,65,60,61,-1,60,65,66,-1,66,63,60,-1,63,66,59,-1,59,53,63,-1,51,57,36,-1,50,54,57,-1,55,57,54,-1,68,67,70,-1,70,69,68,-1,65,70,66,-1,66,71,59,-1,66,70,67,-1,67,71,66,-1,70,65,25,-1,25,69,70,-1,12,45,51,-1,81,82,83,-1,81,83,84,-1,81,84,85,-1,85,86,87,-1,81,85,87,-1,88,89,90,-1,88,90,91,-1,87,88,91,-1,91,74,75,-1,91,75,76,-1,87,91,76,-1,87,76,77,-1,81,87,77,-1,81,77,78,-1,81,78,79,-1,81,79,80,-1,7,6,75,-1,75,74,7,-1,6,10,76,-1,76,75,6,-1,10,11,77,-1,77,76,10,-1,11,44,78,-1,78,77,11,-1,44,39,79,-1,79,78,44,-1,39,40,80,-1,80,79,39,-1,40,47,81,-1,81,80,40,-1,47,73,82,-1,82,81,47,-1,73,59,83,-1,83,82,73,-1,59,71,84,-1,84,83,59,-1,71,67,85,-1,85,84,71,-1,67,68,86,-1,86,85,67,-1,68,31,87,-1,87,86,68,-1,31,34,88,-1,88,87,31,-1,34,8,89,-1,89,88,34,-1,8,72,90,-1,90,89,8,-1,72,9,91,-1,91,90,72,-1,9,7,74,-1,74,91,9,-1});
  }
}
protected class MFInt32449 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,15,0,-1,0,16,14,-1,15,19,0,-1,21,10,11,-1,11,18,21,-1,5,2,1,-1,6,25,24,-1,24,4,6,-1,3,2,13,-1,2,5,13,-1,66,7,13,-1,6,4,17,-1,4,15,17,-1,20,9,23,-1,23,9,10,-1,10,21,23,-1,15,4,24,-1,24,19,15,-1,12,20,22,-1,48,47,26,-1,26,27,48,-1,47,49,28,-1,28,26,47,-1,31,32,29,-1,29,30,31,-1,32,53,54,-1,54,29,32,-1,33,50,32,-1,53,32,50,-1,50,51,53,-1,30,29,55,-1,55,56,30,-1,29,54,52,-1,52,55,29,-1,49,33,28,-1,36,41,40,-1,40,35,36,-1,37,39,38,-1,38,34,37,-1,39,31,30,-1,30,38,39,-1,42,36,43,-1,43,45,42,-1,39,37,26,-1,26,28,39,-1,28,31,39,-1,35,44,57,-1,57,46,35,-1,34,38,65,-1,65,58,34,-1,38,30,56,-1,56,65,38,-1,49,50,33,-1,28,33,31,-1,32,31,33,-1,62,63,64,-1,64,61,62,-1,57,65,64,-1,65,56,60,-1,65,60,61,-1,61,64,65,-1,64,63,59,-1,59,57,64,-1,13,8,66,-1,69,68,67,-1,67,70,69,-1,70,67,71,-1,74,73,72,-1,72,75,74,-1,76,78,77,-1,80,79,82,-1,82,81,80,-1,83,84,77,-1,77,84,76,-1,85,84,86,-1,80,87,79,-1,79,87,70,-1,132,90,89,-1,90,74,75,-1,75,89,90,-1,70,71,82,-1,82,79,70,-1,88,91,132,-1,94,93,92,-1,92,95,94,-1,95,92,96,-1,96,97,95,-1,100,99,98,-1,98,101,100,-1,101,98,102,-1,102,103,101,-1,104,101,105,-1,103,106,105,-1,105,101,103,-1,99,108,107,-1,107,98,99,-1,98,107,109,-1,109,102,98,-1,97,96,104,-1,112,111,110,-1,110,113,112,-1,116,115,114,-1,114,117,116,-1,117,114,99,-1,99,100,117,-1,120,119,118,-1,118,112,120,-1,117,96,92,-1,92,116,117,-1,96,117,100,-1,111,122,121,-1,121,123,111,-1,115,125,124,-1,124,114,115,-1,114,124,108,-1,108,99,114,-1,97,104,105,-1,96,100,104,-1,101,104,100,-1,127,126,129,-1,129,128,127,-1,121,129,124,-1,124,130,108,-1,124,129,126,-1,126,130,124,-1,129,121,131,-1,131,128,129,-1,84,85,133,-1,141,142,143,-1,141,143,144,-1,141,144,145,-1,145,146,147,-1,141,145,147,-1,148,149,150,-1,148,150,151,-1,147,148,151,-1,151,134,135,-1,151,135,136,-1,147,151,136,-1,147,136,137,-1,141,147,137,-1,141,137,138,-1,141,138,139,-1,141,139,140,-1,21,18,135,-1,135,134,21,-1,19,24,136,-1,136,135,19,-1,24,25,137,-1,137,136,24,-1,81,82,138,-1,138,137,81,-1,82,71,139,-1,139,138,82,-1,73,74,140,-1,140,139,73,-1,74,90,141,-1,141,140,74,-1,90,132,142,-1,142,141,90,-1,132,91,143,-1,143,142,132,-1,108,130,144,-1,144,143,108,-1,130,126,145,-1,145,144,130,-1,126,127,146,-1,146,145,126,-1,62,61,147,-1,147,146,62,-1,61,60,148,-1,148,147,61,-1,60,56,149,-1,149,148,60,-1,22,20,150,-1,150,149,22,-1,20,23,151,-1,151,150,20,-1,23,21,134,-1,134,151,23,-1});
  }
}
protected class MFVec3f450 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0329f,0.0299f,-0.1278f,0.0452f,0.0294f,-0.1009f,0.0654f,0.0194f,-0.0998f,0.0715f,-0.0001f,-0.0726f,0.0174f,0.0168f,-0.0711f,0.0352f,0.0227f,-0.0823f,0.0458f,-0.0085f,-0.0324f,0.0503f,-0.005f,-0.0213f,0.1229f,-0.0121f,-0.1399f,0.0854f,-0.0063f,-0.0406f,0.0264f,-0.0085f,-0.0397f,-0.0002f,-0.0085f,-0.0435f,-0.0002f,0.0214f,-0.1031f,0.0583f,0.0396f,-0.1389f,0.0215f,0.0402f,-0.1782f,0.0456f,0.0408f,-0.1706f,0.0772f,0.0382f,-0.099f,0.0888f,0.0188f,-0.1574f,0.114f,0.0263f,-0.099f,0.1046f,-0.0024f,-0.1473f,0.023f,-0.024f,-0.2069f,-0.0002f,-0.0238f,-0.2099f,0.0536f,-0.0153f,-0.1953f,0.0376f,-0.0992f,-0.1781f,0.0925f,-0.0651f,-0.1755f,-0.0002f,-0.088f,-0.165f,-0.0002f,0.0256f,-0.1381f,0.0669f,0.0144f,-0.0582f,0.0993f,0.0076f,-0.0599f,0.1259f,0.0029f,-0.1031f,0.0406f,-0.0847f,-0.162f,0.0406f,-0.0121f,-0.1495f,0.0411f,-0.0631f,-0.1532f,0.0952f,-0.0631f,-0.1532f,0.0949f,-0.0121f,-0.1399f,0.0154f,0.0251f,-0.1357f,-0.0657f,0.0194f,-0.0998f,-0.0455f,0.0294f,-0.1009f,-0.0356f,0.0227f,-0.0823f,-0.0461f,-0.0085f,-0.0324f,-0.0507f,-0.005f,-0.0213f,-0.0673f,0.0144f,-0.0582f,-0.0177f,0.0168f,-0.0711f,-0.0002f,0.0166f,-0.0684f,-0.0268f,-0.0085f,-0.0397f,-0.0158f,0.0251f,-0.1357f,-0.1262f,0.0029f,-0.1031f,-0.0858f,-0.0063f,-0.0406f,-0.0218f,0.0402f,-0.1782f,-0.0002f,0.0397f,-0.1819f,-0.046f,0.0408f,-0.1706f,-0.0333f,0.0299f,-0.1278f,-0.1143f,0.0263f,-0.099f,-0.1049f,-0.0024f,-0.1473f,-0.0891f,0.0188f,-0.1574f,-0.0776f,0.0382f,-0.099f,-0.0996f,0.0076f,-0.0599f,-0.0587f,0.0396f,-0.1389f,-0.0719f,-0.0001f,-0.0726f,-0.1233f,-0.0121f,-0.1399f,-0.0379f,-0.0992f,-0.1781f,-0.0002f,-0.1064f,-0.1808f,-0.0234f,-0.024f,-0.2069f,-0.0929f,-0.0651f,-0.1755f,-0.054f,-0.0153f,-0.1953f,-0.0409f,-0.0847f,-0.162f,-0.0956f,-0.0631f,-0.1532f,-0.0409f,-0.0121f,-0.1495f,-0.0002f,-0.0121f,-0.1525f,-0.0002f,-0.0631f,-0.1532f,-0.0414f,-0.0631f,-0.1532f,-0.0952f,-0.0121f,-0.1399f,0.1143f,-0.0106f,-0.062f,-0.1146f,-0.0106f,-0.062f,0.0524f,-0.0185f,-0.0243f,0.0489f,-0.0185f,-0.0303f,0.0274f,-0.0185f,-0.0403f,-0.0002f,-0.0185f,-0.0443f,-0.0278f,-0.0185f,-0.0403f,-0.0493f,-0.0185f,-0.0303f,-0.0528f,-0.0185f,-0.0243f,-0.0836f,-0.0185f,-0.0422f,-0.1107f,-0.0185f,-0.0629f,-0.1187f,-0.0185f,-0.1359f,-0.0949f,-0.0185f,-0.1359f,-0.0404f,-0.0185f,-0.1454f,-0.0002f,-0.0185f,-0.1484f,0.0401f,-0.0185f,-0.1454f,0.0945f,-0.0185f,-0.1359f,0.1183f,-0.0185f,-0.1359f,0.1104f,-0.0185f,-0.0629f,0.0832f,-0.0185f,-0.0422f});
  }
}
protected class MFVec2f451 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4416f,0.6747f,0.4535f,0.6485f,0.4483f,0.6438f,0.4499f,0.6371f,0.4594f,0.6763f,0.4399f,0.6472f,0.4645f,0.6783f,0.4385f,0.6236f,0.4279f,0.6258f,0.1412f,0.5207f,0.1108f,0.5655f,0.1073f,0.5839f,0.1708f,0.4854f,0.4376f,0.6345f,0.4528f,0.6648f,0.4548f,0.6714f,0.4459f,0.6652f,0.4669f,0.6678f,0.0786f,0.5849f,0.4476f,0.6884f,0.1474f,0.4856f,0.0865f,0.5614f,0.1963f,0.4863f,0.1227f,0.5144f,0.4539f,0.6879f,0.4621f,0.6889f,0.2661f,0.5914f,0.3505f,0.5919f,0.241f,0.592f,0.1724f,0.5255f,0.2089f,0.5196f,0.2133f,0.556f,0.1645f,0.5709f,0.2067f,0.5908f,0.2708f,0.4736f,0.347f,0.4317f,0.3616f,0.5328f,0.2733f,0.5359f,0.238f,0.493f,0.249f,0.5451f,0.3477f,0.431f,0.3623f,0.5333f,0.3623f,0.5333f,0.3505f,0.5919f,0.3477f,0.431f,0.3511f,0.5932f,0.3206f,0.4193f,0.2505f,0.5754f,0.3554f,0.5911f,0.2112f,0.5805f,0.1632f,0.5887f,0.1073f,0.5839f,0.1474f,0.4856f,0.1108f,0.5655f,0.1412f,0.5207f,0.1708f,0.4854f,0.1963f,0.4863f,0.3223f,0.4192f,0.2638f,0.4568f,0.3206f,0.4193f,0.1963f,0.4863f,0.1963f,0.4863f,0.1963f,0.4863f,0.2252f,0.4828f,0.2252f,0.4828f,0.2252f,0.4828f,0.4337f,0.6239f,0.4689f,0.6806f,0.4689f,0.6702f,0.4627f,0.667f,0.4583f,0.6722f,0.4578f,0.6906f,0.1073f,0.5839f,0.0786f,0.5849f,0.0865f,0.5614f,0.1108f,0.5655f,0.4514f,0.6379f,0.4463f,0.6454f,0.4498f,0.6514f,0.4521f,0.6748f,0.4466f,0.6744f,0.4444f,0.685f,0.4523f,0.6875f,0.4395f,0.6457f,0.4393f,0.633f,0.4295f,0.6275f,0.4284f,0.6322f,0.4488f,0.6639f,0.1708f,0.4854f,0.1412f,0.5207f,0.1227f,0.5144f,0.1963f,0.4863f,0.2661f,0.5914f,0.3505f,0.5919f,0.3554f,0.5911f,0.2505f,0.5754f,0.241f,0.592f,0.2112f,0.5805f,0.1724f,0.5255f,0.2089f,0.5196f,0.2133f,0.556f,0.1645f,0.5709f,0.1412f,0.5207f,0.1108f,0.5655f,0.2067f,0.5908f,0.1632f,0.5887f,0.1073f,0.5839f,0.1708f,0.4854f,0.1963f,0.4863f,0.1474f,0.4856f,0.3477f,0.431f,0.347f,0.4317f,0.3616f,0.5328f,0.3623f,0.5333f,0.238f,0.493f,0.2708f,0.4736f,0.2733f,0.5359f,0.249f,0.5451f,0.3505f,0.5919f,0.3511f,0.5932f,0.3623f,0.5333f,0.3223f,0.4192f,0.3206f,0.4193f,0.3477f,0.431f,0.2252f,0.4828f,0.2638f,0.4568f,0.1963f,0.4863f,0.1963f,0.4863f,0.2252f,0.4828f,0.2252f,0.4828f,0.1963f,0.4863f,0.3206f,0.4193f,0.1474f,0.4856f,0.4323f,0.622f,0.0865f,0.5614f,0.0786f,0.5849f,0.4539f,0.6879f,0.4621f,0.6889f,0.4523f,0.6875f,0.4578f,0.6906f,0.0865f,0.5614f,0.1227f,0.5144f,0.1474f,0.4856f,0.1474f,0.4856f,0.1227f,0.5144f,0.1963f,0.4863f,0.1963f,0.4863f,0.1963f,0.4863f,0.1963f,0.4863f,0.1999f,0.4849f,0.1421f,0.507f,0.1227f,0.5144f});
  }
}
protected class MFFloat452 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat453 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32454 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1});
  }
}
protected class MFInt32455 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1});
  }
}
protected class MFVec3f456 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0119f,-0.0062f,-0.1272f,-0.0002f,-0.0048f,-0.1288f,0.0254f,-0.0046f,-0.121f,0.035f,-0.0052f,-0.1002f,0.0272f,-0.0091f,-0.0858f,-0.0002f,-0.0166f,-0.075f,0.0134f,-0.0163f,-0.0771f,-0.0123f,-0.0062f,-0.1272f,-0.0258f,-0.0046f,-0.121f,-0.0353f,-0.0052f,-0.1002f,-0.0276f,-0.0091f,-0.0858f,-0.0138f,-0.0163f,-0.0771f,-0.0002f,-0.0246f,-0.125f,0.0109f,-0.0248f,-0.1236f,0.0223f,-0.0255f,-0.1184f,0.03f,-0.028f,-0.1016f,0.024f,-0.0297f,-0.0905f,0.0118f,-0.0307f,-0.0832f,-0.0002f,-0.031f,-0.0813f,-0.0122f,-0.0307f,-0.0832f,-0.0244f,-0.0297f,-0.0905f,-0.0304f,-0.028f,-0.1016f,-0.0227f,-0.0255f,-0.1184f,-0.0113f,-0.0248f,-0.1236f,0.0119f,0.0035f,-0.1272f,0.0254f,0.0035f,-0.121f,0.035f,0.0035f,-0.1002f,0.0272f,0.0035f,-0.0858f,-0.0002f,0.0035f,-0.075f,-0.0138f,0.0035f,-0.0771f,-0.0258f,0.0035f,-0.121f,-0.0353f,0.0035f,-0.1002f,-0.0002f,0.0035f,-0.1288f,0.0134f,0.0035f,-0.0771f,-0.0123f,0.0035f,-0.1272f,-0.0276f,0.0035f,-0.0858f,0.011f,0.0079f,-0.1229f,-0.0002f,0.0079f,-0.1244f,-0.0113f,0.0079f,-0.1229f,-0.0229f,0.0079f,-0.1177f,-0.0308f,0.0079f,-0.1003f,-0.0247f,0.0079f,-0.089f,-0.0125f,0.0079f,-0.0813f,-0.0002f,0.0079f,-0.0794f,0.0121f,0.0079f,-0.0813f,0.0244f,0.0079f,-0.089f,0.0304f,0.0079f,-0.1003f,0.0225f,0.0079f,-0.1177f});
  }
}
protected class MFVec2f457 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6285f,0.3906f,0.6293f,0.4094f,0.632f,0.4164f,0.6316f,0.4107f,0.6267f,0.3906f,0.6224f,0.4006f,0.6225f,0.3818f,0.6285f,0.3719f,0.632f,0.3649f,0.6316f,0.3706f,0.6267f,0.3807f,0.6225f,0.3906f,0.6293f,0.3995f,0.6285f,0.4094f,0.632f,0.4164f,0.6316f,0.4107f,0.6267f,0.4006f,0.6225f,0.3906f,0.6224f,0.3807f,0.6225f,0.3706f,0.6267f,0.3649f,0.6316f,0.3719f,0.632f,0.3818f,0.6285f,0.3995f,0.6534f,0.4094f,0.6549f,0.4164f,0.6547f,0.4107f,0.6527f,0.3906f,0.6475f,0.3807f,0.6518f,0.3719f,0.6549f,0.3649f,0.6547f,0.3906f,0.6538f,0.4006f,0.6518f,0.3818f,0.6534f,0.3706f,0.6527f,0.3995f,0.6534f,0.3906f,0.6538f,0.3818f,0.6534f,0.3719f,0.6549f,0.3649f,0.6547f,0.3706f,0.6527f,0.3807f,0.6518f,0.3906f,0.6475f,0.4006f,0.6518f,0.4107f,0.6527f,0.4164f,0.6547f,0.4094f,0.6549f});
  }
}
protected class MFFloat458 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat459 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32460 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFInt32461 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFVec3f462 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0119f,0.004f,-0.1272f,0.0254f,0.004f,-0.121f,0.035f,0.004f,-0.1002f,0.0272f,0.004f,-0.0858f,-0.0002f,0.004f,-0.075f,-0.0138f,0.004f,-0.0771f,-0.0258f,0.004f,-0.121f,-0.0353f,0.004f,-0.1002f,-0.0002f,0.004f,-0.1288f,0.0134f,0.004f,-0.0771f,-0.0123f,0.004f,-0.1272f,-0.0276f,0.004f,-0.0858f,0.0119f,-0.0085f,-0.1272f,0.0254f,-0.0085f,-0.121f,0.035f,-0.0085f,-0.1002f,0.0272f,-0.0085f,-0.0858f,-0.0002f,-0.0085f,-0.075f,-0.0138f,-0.0085f,-0.0771f,-0.0258f,-0.0085f,-0.121f,-0.0353f,-0.0085f,-0.1002f,-0.0002f,-0.0085f,-0.1288f,0.0134f,-0.0085f,-0.0771f,-0.0123f,-0.0085f,-0.1272f,-0.0276f,-0.0085f,-0.0858f,0.011f,0.0084f,-0.1229f,-0.0002f,0.0084f,-0.1244f,-0.0113f,0.0084f,-0.1229f,-0.0229f,0.0084f,-0.1177f,-0.0308f,0.0084f,-0.1003f,-0.0247f,0.0084f,-0.089f,-0.0125f,0.0084f,-0.0813f,-0.0002f,0.0084f,-0.0794f,0.0121f,0.0084f,-0.0813f,0.0244f,0.0084f,-0.089f,0.0304f,0.0084f,-0.1003f,0.0225f,0.0084f,-0.1177f,-0.0002f,-0.0139f,-0.1244f,0.011f,-0.0139f,-0.1229f,0.0225f,-0.0139f,-0.1177f,0.0304f,-0.0139f,-0.1003f,0.0244f,-0.0139f,-0.089f,0.0121f,-0.0139f,-0.0813f,-0.0002f,-0.0139f,-0.0794f,-0.0125f,-0.0139f,-0.0813f,-0.0247f,-0.0139f,-0.089f,-0.0308f,-0.0139f,-0.1003f,-0.0229f,-0.0139f,-0.1177f,-0.0113f,-0.0139f,-0.1229f});
  }
}
protected class MFVec2f463 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6565f,0.4094f,0.6578f,0.4164f,0.6576f,0.4107f,0.6559f,0.3906f,0.6507f,0.3807f,0.6555f,0.3719f,0.6578f,0.3649f,0.6576f,0.3906f,0.6568f,0.4006f,0.6555f,0.3818f,0.6565f,0.3706f,0.6559f,0.3995f,0.6534f,0.4094f,0.6549f,0.4164f,0.6547f,0.4107f,0.6527f,0.3906f,0.6475f,0.3807f,0.6518f,0.3719f,0.6549f,0.3649f,0.6547f,0.3906f,0.6538f,0.4006f,0.6518f,0.3818f,0.6534f,0.3706f,0.6527f,0.3995f,0.6565f,0.3906f,0.6568f,0.3818f,0.6565f,0.3719f,0.6578f,0.3649f,0.6576f,0.3706f,0.6559f,0.3807f,0.6555f,0.3906f,0.6507f,0.4006f,0.6555f,0.4107f,0.6559f,0.4164f,0.6576f,0.4094f,0.6578f,0.3906f,0.6538f,0.3995f,0.6534f,0.4094f,0.6549f,0.4164f,0.6547f,0.4107f,0.6527f,0.4006f,0.6518f,0.3906f,0.6475f,0.3807f,0.6518f,0.3706f,0.6527f,0.3649f,0.6547f,0.3719f,0.6549f,0.3818f,0.6534f});
  }
}
protected class MFFloat464 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat465 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32466 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFInt32467 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFVec3f468 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0119f,0.0037f,-0.1272f,0.0254f,0.0037f,-0.121f,0.035f,0.0037f,-0.1002f,0.0272f,0.0037f,-0.0858f,-0.0002f,0.0037f,-0.075f,-0.0138f,0.0037f,-0.0771f,-0.0258f,0.0037f,-0.121f,-0.0353f,0.0037f,-0.1002f,-0.0002f,0.0037f,-0.1288f,0.0134f,0.0037f,-0.0771f,-0.0123f,0.0037f,-0.1272f,-0.0276f,0.0037f,-0.0858f,0.0119f,-0.0085f,-0.1272f,0.0254f,-0.0085f,-0.121f,0.035f,-0.0085f,-0.1002f,0.0272f,-0.0085f,-0.0858f,-0.0002f,-0.0085f,-0.075f,-0.0138f,-0.0085f,-0.0771f,-0.0258f,-0.0085f,-0.121f,-0.0353f,-0.0085f,-0.1002f,-0.0002f,-0.0085f,-0.1288f,0.0134f,-0.0085f,-0.0771f,-0.0123f,-0.0085f,-0.1272f,-0.0276f,-0.0085f,-0.0858f,0.011f,0.0082f,-0.1229f,-0.0002f,0.0082f,-0.1244f,-0.0113f,0.0082f,-0.1229f,-0.0229f,0.0082f,-0.1177f,-0.0308f,0.0082f,-0.1003f,-0.0247f,0.0082f,-0.089f,-0.0125f,0.0082f,-0.0813f,-0.0002f,0.0082f,-0.0794f,0.0121f,0.0082f,-0.0813f,0.0244f,0.0082f,-0.089f,0.0304f,0.0082f,-0.1003f,0.0225f,0.0082f,-0.1177f,-0.0002f,-0.0137f,-0.1244f,0.011f,-0.0137f,-0.1229f,0.0225f,-0.0137f,-0.1177f,0.0304f,-0.0137f,-0.1003f,0.0244f,-0.0137f,-0.089f,0.0121f,-0.0137f,-0.0813f,-0.0002f,-0.0137f,-0.0794f,-0.0125f,-0.0137f,-0.0813f,-0.0247f,-0.0137f,-0.089f,-0.0308f,-0.0137f,-0.1003f,-0.0229f,-0.0137f,-0.1177f,-0.0113f,-0.0137f,-0.1229f});
  }
}
protected class MFVec2f469 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6596f,0.4094f,0.6606f,0.4164f,0.6605f,0.4107f,0.6591f,0.3906f,0.6538f,0.3807f,0.6592f,0.3719f,0.6606f,0.3649f,0.6605f,0.3906f,0.6599f,0.4006f,0.6592f,0.3818f,0.6596f,0.3706f,0.6591f,0.3995f,0.6565f,0.4094f,0.6578f,0.4164f,0.6576f,0.4107f,0.6559f,0.3906f,0.6507f,0.3807f,0.6555f,0.3719f,0.6578f,0.3649f,0.6576f,0.3906f,0.6568f,0.4006f,0.6555f,0.3818f,0.6565f,0.3706f,0.6559f,0.3995f,0.6596f,0.3906f,0.6599f,0.3818f,0.6596f,0.3719f,0.6606f,0.3649f,0.6605f,0.3706f,0.6591f,0.3807f,0.6592f,0.3906f,0.6538f,0.4006f,0.6592f,0.4107f,0.6591f,0.4164f,0.6605f,0.4094f,0.6606f,0.3906f,0.6568f,0.3995f,0.6565f,0.4094f,0.6578f,0.4164f,0.6576f,0.4107f,0.6559f,0.4006f,0.6555f,0.3906f,0.6507f,0.3807f,0.6555f,0.3706f,0.6559f,0.3649f,0.6576f,0.3719f,0.6578f,0.3818f,0.6565f});
  }
}
protected class MFFloat470 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat471 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32472 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFInt32473 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFVec3f474 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0119f,0.0044f,-0.1272f,0.0254f,0.0044f,-0.121f,0.035f,0.0044f,-0.1002f,0.0272f,0.0044f,-0.0858f,-0.0002f,0.0044f,-0.075f,-0.0138f,0.0044f,-0.0771f,-0.0258f,0.0044f,-0.121f,-0.0353f,0.0044f,-0.1002f,-0.0002f,0.0044f,-0.1288f,0.0134f,0.0044f,-0.0771f,-0.0123f,0.0044f,-0.1272f,-0.0276f,0.0044f,-0.0858f,0.0119f,-0.0085f,-0.1272f,0.0254f,-0.0085f,-0.121f,0.035f,-0.0085f,-0.1002f,0.0272f,-0.0085f,-0.0858f,-0.0002f,-0.0085f,-0.075f,-0.0138f,-0.0085f,-0.0771f,-0.0258f,-0.0085f,-0.121f,-0.0353f,-0.0085f,-0.1002f,-0.0002f,-0.0085f,-0.1288f,0.0134f,-0.0085f,-0.0771f,-0.0123f,-0.0085f,-0.1272f,-0.0276f,-0.0085f,-0.0858f,0.011f,0.0089f,-0.1229f,-0.0002f,0.0089f,-0.1244f,-0.0113f,0.0089f,-0.1229f,-0.0229f,0.0089f,-0.1177f,-0.0308f,0.0089f,-0.1003f,-0.0247f,0.0089f,-0.089f,-0.0125f,0.0089f,-0.0813f,-0.0002f,0.0089f,-0.0794f,0.0121f,0.0089f,-0.0813f,0.0244f,0.0089f,-0.089f,0.0304f,0.0089f,-0.1003f,0.0225f,0.0089f,-0.1177f,-0.0002f,-0.0139f,-0.1244f,0.011f,-0.0139f,-0.1229f,0.0225f,-0.0139f,-0.1177f,0.0304f,-0.0139f,-0.1003f,0.0244f,-0.0139f,-0.089f,0.0121f,-0.0139f,-0.0813f,-0.0002f,-0.0139f,-0.0794f,-0.0125f,-0.0139f,-0.0813f,-0.0247f,-0.0139f,-0.089f,-0.0308f,-0.0139f,-0.1003f,-0.0229f,-0.0139f,-0.1177f,-0.0113f,-0.0139f,-0.1229f});
  }
}
protected class MFVec2f475 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6628f,0.4094f,0.6635f,0.4164f,0.6634f,0.4107f,0.6624f,0.3906f,0.657f,0.3807f,0.6628f,0.3719f,0.6635f,0.3649f,0.6634f,0.3906f,0.6629f,0.4006f,0.6628f,0.3818f,0.6628f,0.3706f,0.6624f,0.3995f,0.6596f,0.4094f,0.6606f,0.4164f,0.6605f,0.4107f,0.6591f,0.3906f,0.6538f,0.3807f,0.6592f,0.3719f,0.6606f,0.3649f,0.6605f,0.3906f,0.6599f,0.4006f,0.6592f,0.3818f,0.6596f,0.3706f,0.6591f,0.3995f,0.6628f,0.3906f,0.6629f,0.3818f,0.6628f,0.3719f,0.6635f,0.3649f,0.6634f,0.3706f,0.6624f,0.3807f,0.6628f,0.3906f,0.657f,0.4006f,0.6628f,0.4107f,0.6624f,0.4164f,0.6634f,0.4094f,0.6635f,0.3906f,0.6599f,0.3995f,0.6596f,0.4094f,0.6606f,0.4164f,0.6605f,0.4107f,0.6591f,0.4006f,0.6592f,0.3906f,0.6538f,0.3807f,0.6592f,0.3706f,0.6591f,0.3649f,0.6605f,0.3719f,0.6606f,0.3818f,0.6596f});
  }
}
protected class MFFloat476 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat477 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32478 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFInt32479 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFVec3f480 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0119f,0.003f,-0.1272f,0.0254f,0.003f,-0.121f,0.035f,0.003f,-0.1002f,0.0272f,0.003f,-0.0858f,-0.0002f,0.003f,-0.075f,-0.0138f,0.003f,-0.0771f,-0.0258f,0.003f,-0.121f,-0.0353f,0.003f,-0.1002f,-0.0002f,0.003f,-0.1288f,0.0134f,0.003f,-0.0771f,-0.0123f,0.003f,-0.1272f,-0.0276f,0.003f,-0.0858f,0.0119f,-0.0085f,-0.1272f,0.0254f,-0.0085f,-0.121f,0.035f,-0.0085f,-0.1002f,0.0272f,-0.0085f,-0.0858f,-0.0002f,-0.0085f,-0.075f,-0.0138f,-0.0085f,-0.0771f,-0.0258f,-0.0085f,-0.121f,-0.0353f,-0.0085f,-0.1002f,-0.0002f,-0.0085f,-0.1288f,0.0134f,-0.0085f,-0.0771f,-0.0123f,-0.0085f,-0.1272f,-0.0276f,-0.0085f,-0.0858f,0.011f,0.0075f,-0.1229f,-0.0002f,0.0075f,-0.1244f,-0.0113f,0.0075f,-0.1229f,-0.0229f,0.0075f,-0.1177f,-0.0308f,0.0075f,-0.1003f,-0.0247f,0.0075f,-0.089f,-0.0125f,0.0075f,-0.0813f,-0.0002f,0.0075f,-0.0794f,0.0121f,0.0075f,-0.0813f,0.0244f,0.0075f,-0.089f,0.0304f,0.0075f,-0.1003f,0.0225f,0.0075f,-0.1177f,-0.0002f,-0.014f,-0.1244f,0.011f,-0.014f,-0.1229f,0.0225f,-0.014f,-0.1177f,0.0304f,-0.014f,-0.1003f,0.0244f,-0.014f,-0.089f,0.0121f,-0.014f,-0.0813f,-0.0002f,-0.014f,-0.0794f,-0.0125f,-0.014f,-0.0813f,-0.0247f,-0.014f,-0.089f,-0.0308f,-0.014f,-0.1003f,-0.0229f,-0.014f,-0.1177f,-0.0113f,-0.014f,-0.1229f});
  }
}
protected class MFVec2f481 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6659f,0.4094f,0.6664f,0.4164f,0.6663f,0.4107f,0.6656f,0.3906f,0.6601f,0.3807f,0.6665f,0.3719f,0.6664f,0.3649f,0.6663f,0.3906f,0.666f,0.4006f,0.6665f,0.3818f,0.6659f,0.3706f,0.6656f,0.3995f,0.6628f,0.4094f,0.6635f,0.4164f,0.6634f,0.4107f,0.6624f,0.3906f,0.657f,0.3807f,0.6628f,0.3719f,0.6635f,0.3649f,0.6634f,0.3906f,0.6629f,0.4006f,0.6628f,0.3818f,0.6628f,0.3706f,0.6624f,0.3995f,0.6659f,0.3906f,0.666f,0.3818f,0.6659f,0.3719f,0.6664f,0.3649f,0.6663f,0.3706f,0.6656f,0.3807f,0.6665f,0.3906f,0.6601f,0.4006f,0.6665f,0.4107f,0.6656f,0.4164f,0.6663f,0.4094f,0.6664f,0.3906f,0.6629f,0.3995f,0.6628f,0.4094f,0.6635f,0.4164f,0.6634f,0.4107f,0.6624f,0.4006f,0.6628f,0.3906f,0.657f,0.3807f,0.6628f,0.3706f,0.6624f,0.3649f,0.6634f,0.3719f,0.6635f,0.3818f,0.6628f});
  }
}
protected class MFFloat482 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat483 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32484 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1});
  }
}
protected class MFInt32485 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1});
  }
}
protected class MFVec3f486 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0119f,0.0032f,-0.1272f,-0.0002f,0.0032f,-0.1288f,0.0254f,0.0032f,-0.121f,0.035f,0.0032f,-0.1002f,0.0272f,0.0032f,-0.0858f,0.0134f,0.0032f,-0.0771f,-0.0002f,0.0032f,-0.075f,-0.0123f,0.0032f,-0.1272f,-0.0258f,0.0032f,-0.121f,-0.0353f,0.0032f,-0.1002f,-0.0276f,0.0032f,-0.0858f,-0.0138f,0.0032f,-0.0771f,0.0106f,0.0085f,-0.1227f,-0.0002f,0.0085f,-0.1241f,-0.011f,0.0085f,-0.1227f,-0.0223f,0.0085f,-0.1175f,-0.0302f,0.0085f,-0.1004f,-0.0241f,0.0085f,-0.089f,-0.0121f,0.0085f,-0.0815f,-0.0002f,0.0085f,-0.0797f,0.0118f,0.0085f,-0.0815f,0.0238f,0.0085f,-0.089f,0.0298f,0.0085f,-0.1004f,0.022f,0.0085f,-0.1175f,0.0119f,-0.0085f,-0.1272f,0.0254f,-0.0085f,-0.121f,0.035f,-0.0085f,-0.1002f,0.0272f,-0.0085f,-0.0858f,-0.0002f,-0.0085f,-0.075f,-0.0138f,-0.0085f,-0.0771f,-0.0258f,-0.0085f,-0.121f,-0.0353f,-0.0085f,-0.1002f,-0.0002f,-0.0085f,-0.1288f,0.0134f,-0.0085f,-0.0771f,-0.0123f,-0.0085f,-0.1272f,-0.0276f,-0.0085f,-0.0858f,-0.0002f,-0.0134f,-0.1244f,0.011f,-0.0134f,-0.1229f,0.0225f,-0.0134f,-0.1177f,0.0304f,-0.0134f,-0.1003f,0.0244f,-0.0134f,-0.089f,0.0121f,-0.0134f,-0.0813f,-0.0002f,-0.0134f,-0.0794f,-0.0125f,-0.0134f,-0.0813f,-0.0247f,-0.0134f,-0.089f,-0.0308f,-0.0134f,-0.1003f,-0.0229f,-0.0134f,-0.1177f,-0.0113f,-0.0134f,-0.1229f});
  }
}
protected class MFVec2f487 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6721f,0.3906f,0.6721f,0.4094f,0.6721f,0.4164f,0.6721f,0.4107f,0.6721f,0.4006f,0.6738f,0.3906f,0.6664f,0.3818f,0.6721f,0.3719f,0.6721f,0.3649f,0.6721f,0.3706f,0.6721f,0.3807f,0.6738f,0.3995f,0.6721f,0.3906f,0.6721f,0.3818f,0.6721f,0.3719f,0.6721f,0.3649f,0.6721f,0.3706f,0.6721f,0.3807f,0.6738f,0.3906f,0.6664f,0.4006f,0.6738f,0.4107f,0.6721f,0.4164f,0.6721f,0.4094f,0.6721f,0.3995f,0.669f,0.4094f,0.6692f,0.4164f,0.6692f,0.4107f,0.6689f,0.3906f,0.6632f,0.3807f,0.6702f,0.3719f,0.6692f,0.3649f,0.6692f,0.3906f,0.669f,0.4006f,0.6702f,0.3818f,0.669f,0.3706f,0.6689f,0.3906f,0.669f,0.3995f,0.669f,0.4094f,0.6692f,0.4164f,0.6692f,0.4107f,0.6689f,0.4006f,0.6702f,0.3906f,0.6632f,0.3807f,0.6702f,0.3706f,0.6689f,0.3649f,0.6692f,0.3719f,0.6692f,0.3818f,0.669f});
  }
}
protected class MFFloat488 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat489 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32490 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFInt32491 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFVec3f492 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0119f,0.0043f,-0.1272f,0.0254f,0.0043f,-0.121f,0.035f,0.0043f,-0.1002f,0.0272f,0.0043f,-0.0858f,-0.0002f,0.0043f,-0.075f,-0.0138f,0.0043f,-0.0771f,-0.0258f,0.0043f,-0.121f,-0.0353f,0.0043f,-0.1002f,-0.0002f,0.0043f,-0.1288f,0.0134f,0.0043f,-0.0771f,-0.0123f,0.0043f,-0.1272f,-0.0276f,0.0043f,-0.0858f,0.0119f,-0.0085f,-0.1272f,0.0254f,-0.0085f,-0.121f,0.035f,-0.0085f,-0.1002f,0.0272f,-0.0085f,-0.0858f,-0.0002f,-0.0085f,-0.075f,-0.0138f,-0.0085f,-0.0771f,-0.0258f,-0.0085f,-0.121f,-0.0353f,-0.0085f,-0.1002f,-0.0002f,-0.0085f,-0.1288f,0.0134f,-0.0085f,-0.0771f,-0.0123f,-0.0085f,-0.1272f,-0.0276f,-0.0085f,-0.0858f,0.011f,0.0088f,-0.1229f,-0.0002f,0.0088f,-0.1244f,-0.0113f,0.0088f,-0.1229f,-0.0229f,0.0088f,-0.1177f,-0.0308f,0.0088f,-0.1003f,-0.0247f,0.0088f,-0.089f,-0.0125f,0.0088f,-0.0813f,-0.0002f,0.0088f,-0.0794f,0.0121f,0.0088f,-0.0813f,0.0244f,0.0088f,-0.089f,0.0304f,0.0088f,-0.1003f,0.0225f,0.0088f,-0.1177f,-0.0002f,-0.0132f,-0.1244f,0.011f,-0.0132f,-0.1229f,0.0225f,-0.0132f,-0.1177f,0.0304f,-0.0132f,-0.1003f,0.0244f,-0.0132f,-0.089f,0.0121f,-0.0132f,-0.0813f,-0.0002f,-0.0132f,-0.0794f,-0.0125f,-0.0132f,-0.0813f,-0.0247f,-0.0132f,-0.089f,-0.0308f,-0.0132f,-0.1003f,-0.0229f,-0.0132f,-0.1177f,-0.0113f,-0.0132f,-0.1229f});
  }
}
protected class MFVec2f493 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.669f,0.4094f,0.6692f,0.4164f,0.6692f,0.4107f,0.6689f,0.3906f,0.6632f,0.3807f,0.6702f,0.3719f,0.6692f,0.3649f,0.6692f,0.3906f,0.669f,0.4006f,0.6702f,0.3818f,0.669f,0.3706f,0.6689f,0.3995f,0.6659f,0.4094f,0.6664f,0.4164f,0.6663f,0.4107f,0.6656f,0.3906f,0.6601f,0.3807f,0.6665f,0.3719f,0.6664f,0.3649f,0.6663f,0.3906f,0.666f,0.4006f,0.6665f,0.3818f,0.6659f,0.3706f,0.6656f,0.3995f,0.669f,0.3906f,0.669f,0.3818f,0.669f,0.3719f,0.6692f,0.3649f,0.6692f,0.3706f,0.6689f,0.3807f,0.6702f,0.3906f,0.6632f,0.4006f,0.6702f,0.4107f,0.6689f,0.4164f,0.6692f,0.4094f,0.6692f,0.3906f,0.666f,0.3995f,0.6659f,0.4094f,0.6664f,0.4164f,0.6663f,0.4107f,0.6656f,0.4006f,0.6665f,0.3906f,0.6601f,0.3807f,0.6665f,0.3706f,0.6656f,0.3649f,0.6663f,0.3719f,0.6664f,0.3818f,0.6659f});
  }
}
protected class MFFloat494 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat495 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32496 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {51,38,41,-1,41,43,51,-1,43,52,171,-1,171,151,43,-1,49,42,41,-1,41,38,49,-1,44,186,171,-1,171,52,44,-1,78,76,51,-1,51,43,78,-1,189,78,43,-1,43,151,189,-1,9,172,13,-1,13,10,9,-1,73,193,9,-1,9,10,73,-1,11,50,27,-1,16,13,172,-1,13,67,14,-1,68,15,14,-1,7,6,67,-1,13,16,67,-1,7,67,16,-1,16,172,173,-1,7,16,136,-1,7,136,130,-1,131,132,173,-1,68,19,18,-1,18,15,68,-1,20,32,18,-1,17,8,32,-1,15,66,13,-1,13,14,15,-1,32,23,24,-1,24,17,32,-1,21,24,23,-1,21,22,24,-1,24,22,17,-1,27,25,11,-1,25,31,11,-1,22,28,17,-1,27,30,29,-1,12,26,29,-1,26,27,29,-1,27,28,30,-1,30,28,22,-1,6,14,67,-1,1,34,31,-1,34,36,35,-1,34,35,31,-1,34,1,36,-1,49,37,1,-1,1,40,49,-1,39,37,49,-1,49,38,39,-1,37,39,1,-1,42,49,40,-1,40,0,42,-1,44,52,0,-1,186,44,0,-1,0,149,186,-1,51,76,45,-1,45,76,77,-1,53,45,77,-1,1,39,45,-1,45,53,1,-1,45,39,38,-1,38,51,45,-1,53,77,46,-1,77,74,33,-1,33,46,77,-1,1,53,46,-1,46,36,1,-1,46,33,35,-1,35,36,46,-1,74,50,33,-1,8,17,47,-1,11,31,50,-1,35,33,50,-1,31,35,50,-1,50,74,75,-1,47,75,8,-1,27,50,28,-1,28,50,47,-1,28,47,17,-1,75,73,48,-1,48,73,10,-1,66,48,10,-1,10,13,66,-1,75,66,8,-1,66,75,48,-1,8,66,18,-1,18,32,8,-1,15,18,66,-1,47,50,75,-1,41,52,43,-1,42,0,41,-1,0,52,41,-1,0,54,149,-1,244,245,54,-1,0,56,54,-1,0,40,55,-1,55,57,0,-1,3,57,55,-1,0,57,56,-1,3,62,5,-1,5,62,58,-1,3,64,62,-1,2,61,62,-1,62,64,2,-1,3,60,64,-1,55,40,59,-1,64,60,59,-1,64,59,135,-1,149,54,245,-1,5,57,3,-1,54,5,244,-1,152,63,61,-1,153,63,152,-1,63,5,58,-1,153,244,63,-1,244,5,63,-1,58,61,63,-1,58,62,61,-1,56,5,54,-1,56,57,5,-1,60,3,55,-1,60,55,59,-1,1,133,135,-1,59,40,1,-1,59,1,135,-1,65,135,133,-1,2,65,133,-1,2,64,65,-1,64,135,65,-1,73,75,69,-1,263,193,73,-1,73,69,263,-1,69,75,74,-1,74,71,69,-1,71,74,77,-1,77,72,71,-1,69,71,266,-1,266,263,69,-1,72,70,266,-1,266,71,72,-1,78,72,77,-1,77,76,78,-1,189,70,72,-1,72,78,189,-1,138,123,113,-1,79,122,123,-1,122,79,80,-1,137,124,81,-1,137,81,82,-1,137,82,83,-1,83,79,137,-1,79,83,80,-1,84,116,122,-1,124,84,122,-1,84,119,116,-1,123,122,113,-1,113,122,109,-1,115,138,113,-1,113,114,115,-1,117,286,158,-1,158,112,117,-1,122,116,109,-1,79,123,133,-1,133,123,138,-1,133,137,79,-1,129,138,115,-1,110,117,112,-1,111,117,110,-1,2,133,138,-1,109,85,113,-1,86,113,85,-1,107,294,160,-1,160,126,107,-1,107,126,125,-1,125,108,107,-1,125,127,87,-1,87,108,125,-1,108,87,103,-1,103,104,108,-1,114,301,154,-1,154,115,114,-1,302,114,86,-1,86,159,302,-1,114,113,86,-1,116,105,109,-1,109,105,87,-1,85,88,86,-1,109,87,85,-1,104,174,305,-1,305,108,104,-1,305,175,108,-1,105,103,87,-1,307,91,170,-1,170,150,307,-1,174,104,95,-1,95,162,174,-1,311,150,170,-1,170,177,311,-1,116,90,105,-1,89,90,116,-1,94,168,167,-1,167,93,94,-1,105,90,96,-1,97,95,104,-1});
  }
}
protected class MFInt32497 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {104,103,97,-1,120,121,95,-1,95,97,120,-1,105,96,97,-1,97,103,105,-1,120,97,96,-1,96,98,120,-1,121,100,95,-1,163,91,162,-1,93,170,99,-1,98,96,90,-1,90,101,98,-1,99,163,100,-1,110,112,92,-1,101,90,89,-1,89,106,101,-1,92,112,165,-1,165,177,170,-1,175,294,107,-1,107,108,175,-1,119,89,116,-1,118,111,119,-1,118,117,111,-1,152,138,129,-1,2,138,61,-1,61,138,152,-1,87,127,88,-1,88,85,87,-1,124,119,84,-1,119,111,164,-1,111,166,164,-1,111,110,166,-1,92,166,110,-1,133,4,137,-1,133,134,4,-1,160,176,128,-1,128,126,160,-1,126,128,127,-1,127,125,126,-1,80,81,124,-1,124,122,80,-1,82,81,80,-1,80,83,82,-1,129,115,154,-1,154,152,129,-1,94,140,139,-1,139,102,94,-1,93,141,140,-1,140,94,93,-1,99,142,141,-1,141,93,99,-1,100,143,142,-1,142,99,100,-1,121,144,143,-1,143,100,121,-1,120,145,144,-1,144,121,120,-1,98,146,145,-1,145,120,98,-1,101,147,146,-1,146,98,101,-1,106,148,147,-1,147,101,106,-1,106,102,139,-1,139,148,106,-1,114,302,301,-1,88,127,155,-1,155,157,88,-1,127,161,156,-1,156,155,127,-1,352,353,156,-1,156,161,352,-1,156,353,354,-1,155,156,354,-1,155,354,157,-1,127,128,161,-1,161,128,176,-1,176,352,161,-1,168,94,102,-1,102,169,168,-1,170,93,167,-1,169,102,106,-1,106,164,169,-1,170,91,99,-1,99,91,163,-1,100,163,162,-1,162,95,100,-1,91,307,174,-1,174,162,91,-1,164,106,89,-1,164,89,119,-1,165,170,167,-1,92,165,167,-1,167,168,92,-1,166,92,168,-1,168,169,166,-1,164,166,169,-1,165,112,177,-1,177,112,158,-1,158,311,177,-1,180,179,178,-1,178,181,180,-1,179,151,171,-1,171,182,179,-1,183,181,178,-1,178,184,183,-1,185,182,171,-1,171,186,185,-1,187,179,180,-1,180,188,187,-1,189,151,179,-1,179,187,189,-1,9,191,190,-1,190,172,9,-1,192,191,9,-1,9,193,192,-1,194,196,195,-1,197,172,190,-1,190,199,198,-1,200,199,201,-1,202,198,203,-1,190,198,197,-1,202,197,198,-1,197,173,172,-1,202,204,197,-1,202,205,204,-1,206,173,207,-1,200,201,208,-1,208,209,200,-1,210,208,211,-1,212,211,213,-1,201,199,190,-1,190,214,201,-1,211,212,215,-1,215,216,211,-1,217,216,215,-1,217,215,218,-1,215,212,218,-1,196,194,219,-1,219,194,220,-1,218,212,221,-1,196,223,222,-1,224,223,225,-1,225,223,196,-1,196,222,221,-1,222,218,221,-1,203,198,199,-1,226,220,227,-1,227,229,228,-1,227,220,229,-1,227,228,226,-1,183,230,226,-1,226,231,183,-1,232,181,183,-1,183,231,232,-1,231,226,232,-1,184,233,230,-1,230,183,184,-1,185,233,182,-1,186,149,233,-1,233,185,186,-1,180,234,188,-1,234,235,188,-1,236,235,234,-1,226,236,234,-1,234,232,226,-1,234,180,181,-1,181,232,234,-1,236,237,235,-1,235,237,238,-1,238,239,235,-1,226,228,237,-1,237,236,226,-1,237,228,229,-1,229,238,237,-1,239,238,195,-1,213,240,212,-1,194,195,220,-1,229,195,238,-1,220,195,229,-1,195,241,239,-1,240,213,241,-1,196,221,195,-1,221,240,195,-1,221,212,240,-1,241,242,192,-1,242,191,192,-1,214,190,191,-1,191,242,214,-1,241,213,214,-1,214,242,241,-1,213,211,208,-1,208,214,213,-1,201,214,208,-1,240,241,195,-1,178,179,182,-1,184,178,233,-1,233,178,182,-1,233,149,243,-1,244,243,245,-1,233,243,246,-1,233,248,247,-1,247,230,233,-1,249,247,248,-1,233,246,248,-1,249,251,250,-1,251,252,250,-1,249,250,253,-1,254,253,250,-1,250,255,254,-1});
  }
}
protected class MFInt32498 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {249,253,256,-1,247,257,230,-1,253,257,256,-1,253,258,257,-1,149,245,243,-1,251,249,248,-1,243,244,251,-1,152,255,259,-1,153,152,259,-1,259,252,251,-1,153,259,244,-1,244,259,251,-1,252,259,255,-1,252,255,250,-1,246,243,251,-1,246,251,248,-1,256,247,249,-1,256,257,247,-1,226,258,260,-1,257,226,230,-1,257,258,226,-1,261,260,258,-1,254,260,261,-1,254,261,253,-1,253,261,258,-1,192,262,241,-1,263,262,192,-1,192,193,263,-1,262,264,239,-1,239,241,262,-1,264,265,235,-1,235,239,264,-1,262,263,266,-1,266,264,262,-1,265,264,266,-1,266,70,265,-1,187,188,235,-1,235,265,187,-1,189,187,265,-1,265,70,189,-1,267,269,268,-1,270,268,271,-1,271,272,270,-1,273,275,274,-1,273,276,275,-1,273,270,277,-1,277,276,273,-1,270,272,277,-1,278,271,279,-1,274,271,278,-1,278,279,280,-1,268,269,271,-1,269,281,271,-1,283,282,269,-1,269,267,283,-1,285,284,158,-1,158,286,285,-1,271,281,279,-1,270,260,268,-1,260,267,268,-1,260,270,273,-1,287,283,267,-1,288,284,285,-1,289,288,285,-1,254,267,260,-1,281,269,290,-1,291,290,269,-1,293,292,160,-1,160,294,293,-1,293,296,295,-1,295,292,293,-1,295,296,297,-1,297,298,295,-1,296,300,299,-1,299,297,296,-1,282,283,154,-1,154,301,282,-1,302,159,291,-1,291,282,302,-1,282,291,269,-1,279,281,303,-1,281,297,303,-1,290,291,304,-1,281,290,297,-1,300,296,305,-1,305,174,300,-1,305,296,175,-1,303,297,299,-1,307,150,306,-1,306,308,307,-1,174,310,309,-1,309,300,174,-1,311,312,306,-1,306,150,311,-1,279,303,313,-1,314,279,313,-1,315,318,317,-1,317,316,315,-1,303,319,313,-1,320,299,300,-1,300,309,320,-1,321,320,309,-1,309,322,321,-1,303,299,320,-1,320,319,303,-1,321,323,319,-1,319,320,321,-1,322,309,324,-1,325,310,308,-1,318,326,306,-1,323,327,313,-1,313,319,323,-1,326,324,325,-1,288,328,284,-1,327,329,314,-1,314,313,327,-1,328,330,284,-1,330,306,312,-1,175,293,294,-1,293,175,296,-1,280,279,314,-1,331,280,289,-1,331,289,285,-1,152,287,267,-1,254,255,267,-1,255,152,267,-1,297,290,304,-1,304,298,297,-1,274,278,280,-1,280,332,289,-1,289,332,333,-1,289,333,288,-1,328,288,333,-1,260,273,334,-1,260,334,335,-1,160,292,336,-1,336,176,160,-1,292,295,298,-1,298,336,292,-1,272,271,274,-1,274,275,272,-1,276,277,272,-1,272,275,276,-1,287,152,154,-1,154,283,287,-1,315,337,339,-1,339,338,315,-1,318,315,338,-1,338,340,318,-1,326,318,340,-1,340,341,326,-1,324,326,341,-1,341,342,324,-1,322,324,342,-1,342,343,322,-1,321,322,343,-1,343,344,321,-1,323,321,344,-1,344,345,323,-1,327,323,345,-1,345,346,327,-1,329,327,346,-1,346,347,329,-1,329,347,339,-1,339,337,329,-1,282,301,302,-1,304,349,348,-1,348,298,304,-1,298,348,351,-1,351,350,298,-1,352,350,351,-1,351,353,352,-1,348,349,354,-1,354,353,351,-1,348,354,351,-1,298,350,336,-1,350,352,176,-1,176,336,350,-1,316,355,337,-1,337,315,316,-1,306,317,318,-1,355,332,329,-1,329,337,355,-1,306,326,308,-1,326,325,308,-1,324,309,310,-1,310,325,324,-1,308,310,174,-1,174,307,308,-1,332,314,329,-1,332,280,314,-1,330,317,306,-1,328,316,317,-1,317,330,328,-1,333,355,316,-1,316,328,333,-1,332,355,333,-1,330,312,284,-1,312,311,158,-1,158,284,312,-1});
  }
}
protected class MFInt32499 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,18,69,117,-1,118,19,18,-1,18,117,118,-1,117,69,67,-1,67,119,117,-1,119,67,63,-1,63,120,119,-1,117,119,121,-1,121,118,117,-1,120,122,121,-1,121,119,120,-1,11,120,63,-1,63,12,11,-1,13,122,120,-1,120,11,13,-1,125,124,123,-1,127,126,124,-1,126,127,128,-1,131,130,129,-1,131,129,132,-1,131,132,133,-1,133,127,131,-1,127,133,128,-1,135,134,126,-1,130,135,126,-1,135,136,134,-1,124,126,123,-1,123,126,137,-1,138,125,123,-1,123,139,138,-1,140,143,142,-1,142,141,140,-1,126,134,137,-1,127,124,144,-1,144,124,125,-1,144,131,127,-1,145,125,138,-1,146,140,141,-1,147,140,146,-1,148,144,125,-1,137,149,123,-1,150,123,149,-1,153,156,155,-1,155,154,153,-1,153,154,158,-1,158,157,153,-1,158,160,159,-1,159,157,158,-1,157,159,162,-1,162,161,157,-1,139,215,164,-1,164,138,139,-1,163,139,150,-1,150,165,163,-1,139,123,150,-1,168,167,166,-1,166,167,159,-1,169,151,152,-1,166,159,169,-1,161,172,170,-1,170,157,161,-1,170,171,157,-1,167,162,159,-1,173,176,236,-1,236,174,173,-1,172,161,177,-1,177,233,172,-1,241,174,236,-1,236,240,241,-1,168,180,167,-1,181,180,168,-1,183,238,237,-1,237,231,183,-1,167,180,186,-1,187,177,161,-1});
  }
}
protected class MFInt32500 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {161,162,187,-1,188,189,177,-1,177,187,188,-1,167,186,187,-1,187,162,167,-1,188,187,186,-1,186,190,188,-1,189,192,177,-1,234,176,233,-1,231,175,191,-1,190,186,180,-1,180,193,190,-1,191,234,192,-1,146,141,195,-1,193,180,181,-1,181,194,193,-1,195,141,196,-1,196,240,236,-1,171,156,153,-1,153,157,171,-1,197,181,168,-1,198,147,242,-1,198,140,147,-1,199,125,145,-1,148,125,200,-1,200,125,199,-1,159,160,151,-1,151,169,159,-1,130,136,135,-1,242,147,184,-1,147,201,184,-1,147,146,201,-1,195,201,146,-1,144,202,131,-1,144,148,202,-1,155,204,203,-1,203,154,155,-1,154,203,160,-1,160,158,154,-1,205,208,207,-1,207,206,205,-1,209,208,205,-1,205,210,209,-1,213,214,211,-1,211,212,213,-1,191,191,192,-1,192,192,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,192,192,191,-1,191,191,192,-1,189,189,192,-1,192,192,189,-1,188,188,189,-1,189,189,188,-1,190,190,188,-1,188,188,190,-1,193,193,190,-1,190,190,193,-1,194,194,193,-1,193,193,194,-1,194,232,232,-1,232,194,194,-1,139,163,215,-1,222,223,217,-1,217,216,222,-1,223,229,218,-1,218,217,223,-1,228,219,218,-1,218,229,228,-1,218,219,221,-1,217,218,221,-1,217,221,220,-1,224,225,226,-1,226,225,227,-1,227,230,226,-1,238,183,232,-1,232,239,238,-1,175,231,237,-1,239,232,194,-1,194,178,239,-1,175,176,191,-1,191,176,234,-1,192,234,233,-1,233,177,192,-1,176,173,172,-1,172,233,176,-1,178,194,181,-1,184,235,242,-1,196,236,179,-1,195,196,179,-1,179,182,195,-1,201,195,182,-1,182,185,201,-1,184,201,185,-1,196,141,240,-1,240,141,142,-1,142,241,240,-1,245,244,243,-1,243,246,245,-1,244,248,247,-1,247,249,244,-1,250,246,243,-1,243,251,250,-1,252,249,247,-1,247,253,252,-1,254,244,245,-1,245,255,254,-1,256,248,244,-1,244,254,256,-1,259,258,257,-1,257,260,259,-1,261,258,259,-1,259,262,261,-1,263,265,264,-1,266,260,257,-1,257,268,267,-1,269,268,270,-1,271,267,272,-1,257,267,266,-1,271,266,267,-1,273,274,260,-1,271,275,266,-1,276,273,275,-1,276,274,273,-1,269,270,277,-1,277,278,269,-1,279,277,280,-1,281,280,282,-1,270,268,257,-1,257,283,270,-1,280,281,284,-1,284,285,280,-1,286,285,284,-1,286,284,287,-1,284,281,287,-1,265,263,288,-1,288,263,289,-1,287,281,290,-1,265,292,291,-1,293,292,294,-1,294,292,265,-1,265,291,290,-1,291,287,290,-1,272,267,268,-1,295,289,296,-1,296,298,297,-1,296,289,298,-1,296,297,295,-1,250,299,295,-1,295,300,250,-1,302,301,250,-1,250,300,302,-1,300,295,302,-1,251,303,299,-1,299,250,251,-1,252,303,249,-1,253,304,303,-1,303,252,253,-1,245,305,255,-1,305,306,255,-1,307,306,305,-1,295,307,305,-1,305,302,295,-1,305,245,301,-1,301,302,305,-1,307,308,306,-1,306,308,309,-1,309,310,306,-1,295,297,308,-1,308,307,295,-1,308,297,298,-1,298,309,308,-1,310,309,264,-1,282,311,281,-1,263,264,289,-1,298,264,309,-1,289,264,298,-1,264,312,310,-1,311,282,312,-1,265,290,264,-1,290,311,264,-1,290,281,311,-1,312,313,261,-1,313,258,261,-1,283,257,258,-1,258,313,283,-1,312,282,314,-1,314,313,312,-1,282,280,277,-1,277,314,282,-1,270,314,277,-1,311,312,264,-1,243,244,249,-1,251,243,303,-1,303,243,249,-1,315,317,316,-1,318,320,319,-1,315,316,321,-1,315,323,322,-1,322,324,315,-1,325,322,323,-1,315,321,323,-1,325,327,326,-1,327,328,326,-1,325,326,329,-1,332,331,330,-1,330,333,332,-1});
  }
}
protected class MFInt32501 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {334,331,335,-1,322,336,324,-1,331,337,335,-1,329,338,336,-1,317,339,316,-1,327,325,323,-1,316,340,327,-1,341,343,342,-1,344,346,345,-1,342,328,327,-1,347,342,340,-1,340,342,327,-1,348,345,333,-1,348,333,330,-1,349,320,350,-1,349,350,351,-1,352,322,325,-1,352,336,322,-1,353,355,354,-1,336,356,324,-1,336,338,356,-1,357,354,355,-1,358,354,357,-1,332,359,329,-1,329,359,338,-1,261,360,312,-1,361,360,261,-1,261,262,361,-1,360,362,310,-1,310,312,360,-1,362,363,306,-1,306,310,362,-1,360,361,364,-1,364,362,360,-1,363,362,364,-1,364,365,363,-1,254,255,306,-1,306,363,254,-1,256,254,363,-1,363,365,256,-1,366,368,367,-1,369,367,370,-1,370,371,369,-1,372,374,373,-1,372,375,374,-1,372,369,376,-1,376,375,372,-1,369,371,376,-1,377,370,378,-1,373,370,377,-1,377,378,379,-1,367,368,370,-1,368,380,370,-1,382,381,368,-1,368,366,382,-1,385,384,383,-1,383,386,385,-1,370,380,378,-1,369,387,367,-1,387,366,367,-1,387,369,372,-1,388,382,366,-1,389,384,385,-1,390,389,385,-1,391,366,387,-1,380,368,392,-1,393,392,368,-1,396,395,394,-1,394,397,396,-1,396,399,398,-1,398,395,396,-1,398,399,400,-1,400,401,398,-1,399,403,402,-1,402,400,399,-1,381,382,405,-1,405,404,381,-1,406,407,393,-1,393,381,406,-1,381,393,368,-1,408,410,409,-1,410,400,409,-1,411,413,412,-1,410,411,400,-1,403,399,414,-1,414,415,403,-1,414,399,416,-1,409,400,402,-1,419,418,417,-1,417,420,419,-1,415,422,421,-1,421,403,415,-1,423,424,417,-1,417,418,423,-1,408,409,425,-1,426,408,425,-1,427,430,429,-1,429,428,427,-1,409,431,425,-1,432,402,403,-1,403,421,432,-1,433,432,421,-1,421,434,433,-1,409,402,432,-1,432,431,409,-1,433,435,431,-1,431,432,433,-1,434,421,436,-1,437,422,420,-1,430,439,438,-1,435,440,425,-1,425,431,435,-1,439,436,437,-1,389,441,384,-1,440,442,426,-1,426,425,440,-1,441,443,384,-1,443,417,424,-1,416,396,397,-1,396,416,399,-1,444,408,426,-1,445,446,390,-1,445,390,385,-1,447,388,366,-1,391,448,366,-1,448,447,366,-1,400,411,412,-1,412,401,400,-1,373,377,379,-1,446,449,390,-1,390,449,450,-1,390,450,389,-1,441,389,450,-1,387,372,451,-1,387,451,391,-1,394,395,452,-1,452,453,394,-1,395,398,401,-1,401,452,395,-1,456,455,454,-1,454,457,456,-1,459,458,456,-1,456,457,459,-1,462,461,460,-1,460,463,462,-1,439,436,436,-1,436,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,436,439,439,-1,439,436,436,-1,434,436,436,-1,436,434,434,-1,433,434,434,-1,434,433,433,-1,435,433,433,-1,433,435,435,-1,440,435,435,-1,435,440,440,-1,442,440,440,-1,440,442,442,-1,442,442,464,-1,464,464,442,-1,381,404,406,-1,465,468,467,-1,467,466,465,-1,466,467,470,-1,470,469,466,-1,471,469,470,-1,470,472,471,-1,467,474,473,-1,473,472,470,-1,467,473,470,-1,475,477,476,-1,477,479,478,-1,478,476,477,-1,428,480,464,-1,464,427,428,-1,438,429,430,-1,480,481,442,-1,442,464,480,-1,438,439,420,-1,439,437,420,-1,436,421,422,-1,422,437,436,-1,420,422,415,-1,415,419,420,-1,481,426,442,-1,449,446,482,-1,443,483,417,-1,441,484,483,-1,483,443,441,-1,450,485,484,-1,484,441,450,-1,449,485,450,-1,443,424,384,-1,424,423,383,-1,383,384,424,-1});
  }
}
protected class MFVec3f502 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0582f,0.0602f,-0.2619f,0.1308f,0.0795f,-0.1523f,0.0833f,0.019f,-0.1534f,0.0732f,0.0241f,-0.1975f,0.1271f,0.0499f,-0.1465f,0.0408f,0.0204f,-0.2181f,0.0537f,0.1028f,0.0409f,0.0173f,0.102f,0.053f,0.099f,0.1985f,-0.0192f,-0.0002f,0.2446f,0.0252f,0.0499f,0.2365f,0.0175f,0.134f,0.0908f,-0.0757f,0.0907f,0.0103f,-0.0226f,0.0442f,0.2075f,0.0412f,0.0569f,0.149f,0.0413f,0.0829f,0.141f,0.0171f,0.0099f,0.1566f,0.0638f,0.1088f,0.1307f,-0.0247f,0.0873f,0.1398f,0.0095f,0.0826f,0.1083f,0.0106f,0.0859f,0.104f,0.0031f,0.0737f,0.0471f,-0.0009f,0.102f,0.0842f,-0.0232f,0.0866f,0.0783f,-0.0037f,0.1028f,0.0768f,-0.0117f,0.1138f,0.0181f,-0.0738f,0.1092f,0.0304f,-0.0486f,0.1181f,0.0521f,-0.0563f,0.1247f,0.1159f,-0.0408f,0.1159f,0.0372f,-0.0406f,0.1223f,0.0787f,-0.0369f,0.1373f,0.0902f,-0.096f,0.0912f,0.1235f,-0.0069f,0.135f,0.1682f,-0.1146f,0.1578f,0.0288f,-0.1225f,0.1476f,0.1007f,-0.1183f,0.1422f,0.097f,-0.1368f,0.14f,0.0101f,-0.1793f,0.1118f,0.1121f,-0.2295f,0.1422f,0.0962f,-0.1683f,0.0947f,0.0685f,-0.2173f,0.0791f,0.1223f,-0.2631f,0.0769f,0.0333f,-0.2656f,0.0556f,0.1697f,-0.2539f,0.0432f,0.036f,-0.3019f,0.1255f,0.1645f,-0.1644f,0.1315f,0.1643f,-0.1417f,0.1164f,0.1821f,-0.0545f,0.0682f,0.2342f,-0.0019f,0.1151f,0.0597f,-0.2212f,0.1273f,0.1728f,-0.0822f,0.106f,0.1697f,-0.2202f,0.0556f,0.1224f,-0.2702f,0.1257f,0.1631f,-0.1501f,0.0262f,0.0327f,-0.2394f,0.0893f,0.0437f,-0.2063f,0.0655f,-0.0295f,-0.2664f,0.0746f,0.0382f,-0.2227f,0.0441f,-0.0437f,-0.2147f,0.1059f,0.0464f,-0.1801f,0.0993f,-0.0151f,-0.2026f,0.0316f,0.0039f,-0.1803f,0.051f,0.0113f,-0.1865f,0.021f,0.0074f,-0.204f,0.0857f,0.0303f,-0.1725f,0.1048f,0.0334f,-0.1342f,0.0821f,0.1982f,0.0097f,0.0349f,0.1549f,0.0558f,0.0626f,0.1049f,0.0335f,0.0556f,0.2749f,-0.0526f,-0.0002f,0.2788f,-0.171f,0.0556f,0.2842f,-0.1152f,0.0556f,0.272f,-0.171f,0.0556f,0.2569f,-0.0194f,0.1064f,0.2419f,-0.1152f,0.1029f,0.2297f,-0.0593f,0.1073f,0.2016f,-0.1976f,0.1045f,0.2376f,-0.1625f,0.0556f,0.2295f,-0.234f,0.1132f,0.0384f,-0.096f,0.1202f,0.0425f,-0.0961f,0.1253f,0.1038f,-0.0909f,0.1294f,0.0885f,-0.1169f,0.1274f,0.0616f,-0.1174f,0.1037f,0.0796f,-0.0573f,0.0562f,-0.0038f,-0.0239f,0.028f,-0.0244f,-0.0174f,0.0489f,0.0205f,0.0039f,0.0242f,-0.0132f,0.0001f,0.09f,0.0865f,-0.0243f,0.0863f,0.0699f,-0.0237f,0.0057f,0.0803f,0.0291f,0.0458f,0.1061f,0.0287f,0.0358f,0.0865f,0.0203f,0.0488f,0.0909f,0.0172f,0.0237f,0.0554f,0.016f,0.0751f,0.0546f,-0.0122f,0.0594f,0.0533f,-0.0011f,0.0692f,0.072f,-0.0072f,0.0233f,0.0788f,0.0208f,0.0303f,0.0734f,0.016f,0.0724f,0.0748f,-0.0094f,0.0679f,0.0942f,0.0035f,0.0554f,0.037f,0.0044f,0.0205f,0.0444f,0.0192f,0.0789f,0.0409f,-0.0202f,0.0827f,0.0865f,-0.0143f,0.0031f,0.0171f,0.0324f,0.0102f,0.0239f,0.023f,0.0773f,0.0189f,-0.0299f,0.0442f,0.1419f,0.0279f,0.0797f,0.137f,0.003f,0.0251f,0.1409f,0.0382f,0.0628f,-0.0019f,-0.0573f,0.0322f,-0.0261f,-0.0362f,0.047f,-0.01f,-0.0931f,0.0975f,0.0588f,-0.046f,0.0442f,0.2205f,0.0173f,0.086f,0.1733f,-0.0101f,0.1068f,0.1156f,-0.0351f,0.0627f,0.0717f,-0.0007f,0.0411f,0.0721f,0.0109f,0.0915f,0.0322f,-0.0684f,0.0915f,0.026f,-0.1075f,0.1078f,0.0908f,-0.0757f,0.009f,0.0088f,0.0271f,0.0049f,0.0094f,0.0296f,0.0265f,0.0027f,0.0083f,0.0049f,0.0047f,0.0229f,0.0469f,-0.0107f,-0.1385f,0.0099f,0.1566f,0.0638f,0.0173f,0.102f,0.053f,0.0099f,0.1566f,0.0638f,0.1063f,0.0431f,-0.1126f,0.0833f,0.019f,-0.1534f,0.1271f,0.0499f,-0.1465f,0.0114f,0.1421f,0.0583f,0.1135f,0.0902f,-0.096f,0.0799f,0.0158f,-0.1368f,0.0468f,0.0912f,-0.0187f,0.0363f,0.0894f,-0.0091f,0.0298f,0.086f,-0.007f,0.0239f,0.0799f,-0.0064f,0.028f,0.0755f,-0.009f,0.0339f,0.0745f,-0.0121f,0.0456f,0.0737f,-0.0196f,0.0494f,0.0735f,-0.0241f,0.051f,0.0755f,-0.0259f,0.056f,0.0841f,-0.0303f,-0.0002f,0.053f,-0.2718f,-0.0002f,0.0858f,0.0367f,-0.0002f,0.1697f,-0.2672f,-0.0002f,-0.0055f,-0.1827f,-0.0002f,-0.0298f,-0.249f,-0.0002f,-0.0228f,-0.0674f,0.0129f,0.0008f,-0.0161f,0.0027f,0.001f,-0.0116f,0.0123f,-0.0135f,-0.022f,-0.0002f,0.1394f,0.045f,-0.0002f,-0.0378f,-0.0055f,-0.0002f,0.0094f,0.0296f,0.0046f,0.0043f,0.0188f,0.0132f,0.07f,0.0237f,0.0206f,0.0761f,0.0212f,0.0863f,0.1065f,-0.0098f,0.0248f,0.0991f,0.0351f,0.0732f,0.1098f,0.0065f,0.0297f,0.0932f,0.0299f,0.0468f,0.0985f,0.0241f,0.0712f,0.1028f,0.0058f,0.0144f,0.0873f,0.0356f,-0.0002f,0.1156f,-0.2811f,-0.0002f,0.2106f,0.0524f,-0.0002f,0.1613f,0.0647f,-0.0002f,0.0589f,0.0302f,-0.0002f,0.0309f,0.0514f,-0.0002f,0.0047f,0.0229f,0.0165f,0.0982f,0.0362f,-0.0794f,0.1223f,-0.2631f,-0.056f,0.1697f,-0.2539f,-0.1064f,0.1697f,-0.2202f,-0.1122f,0.1121f,-0.2295f,-0.056f,0.1224f,-0.2702f,-0.1154f,0.0597f,-0.2212f,-0.0772f,0.0333f,-0.2656f,-0.0435f,0.036f,-0.3019f,-0.0002f,0.0759f,-0.2921f,-0.056f,0.2295f,-0.234f,-0.1076f,0.2016f,-0.1976f,-0.0002f,0.2369f,-0.2383f,-0.0445f,0.2075f,0.0412f,-0.0502f,0.2365f,0.0175f,-0.056f,0.2569f,-0.0194f,-0.0002f,0.2657f,-0.0103f,-0.1343f,0.0908f,-0.0757f,-0.1276f,0.1728f,-0.0822f,-0.1184f,0.0521f,-0.0563f,-0.0102f,0.1566f,0.0638f,-0.0353f,0.1549f,0.0558f,-0.0573f,0.149f,0.0413f,-0.063f,0.1049f,0.0335f,-0.0833f,0.141f,0.0171f,-0.0176f,0.102f,0.053f,-0.0541f,0.1028f,0.0409f,-0.0117f,0.1421f,0.0583f,-0.0102f,0.1566f,0.0638f,-0.0176f,0.102f,0.053f,-0.0102f,0.1566f,0.0638f,-0.0876f,0.1398f,0.0095f,-0.083f,0.1083f,0.0106f,-0.0863f,0.104f,0.0031f,-0.0916f,0.1235f,-0.0069f,-0.1091f,0.1307f,-0.0247f,-0.0994f,0.1985f,-0.0192f,-0.0825f,0.1982f,0.0097f,-0.1031f,0.0768f,-0.0117f,-0.087f,0.0783f,-0.0037f,-0.0741f,0.0471f,-0.0009f,-0.1024f,0.0842f,-0.0232f,-0.1141f,0.0181f,-0.0738f,-0.1377f,0.0902f,-0.096f,-0.125f,0.1159f,-0.0408f,-0.1226f,0.0787f,-0.0369f,-0.1163f,0.0372f,-0.0406f,-0.0911f,0.0103f,-0.0226f,-0.1096f,0.0304f,-0.0486f,-0.1311f,0.0795f,-0.1523f,-0.1582f,0.0288f,-0.1225f,-0.1425f,0.097f,-0.1368f,-0.148f,0.1007f,-0.1183f,-0.095f,0.0685f,-0.2173f,-0.1404f,0.0101f,-0.1793f,-0.1425f,0.0962f,-0.1683f,-0.0586f,0.0602f,-0.2619f,-0.1258f,0.1645f,-0.1644f,-0.1048f,0.2376f,-0.1625f,-0.1261f,0.1631f,-0.1501f,-0.1319f,0.1643f,-0.1417f,-0.1353f,0.1682f,-0.1146f,-0.1068f,0.2419f,-0.1152f,-0.1168f,0.1821f,-0.0545f,-0.1033f,0.2297f,-0.0593f,-0.0685f,0.2342f,-0.0019f,-0.0266f,0.0327f,-0.2394f,-0.0002f,0.0147f,-0.2376f,-0.0002f,-0.0058f,-0.2882f,-0.0658f,-0.0295f,-0.2664f,-0.0897f,0.0437f,-0.2063f,-0.0749f,0.0382f,-0.2227f,-0.0736f,0.0241f,-0.1975f,-0.0514f,0.0113f,-0.1865f,-0.0411f,0.0204f,-0.2181f,-0.0445f,-0.0437f,-0.2147f,-0.0861f,0.0303f,-0.1725f,-0.0837f,0.019f,-0.1534f,-0.0319f,0.0039f,-0.1803f,-0.0996f,-0.0151f,-0.2026f,-0.1062f,0.0464f,-0.1801f,-0.1275f,0.0499f,-0.1465f,-0.0213f,0.0074f,-0.204f,-0.1067f,0.0431f,-0.1126f,-0.1051f,0.0334f,-0.1342f,-0.056f,0.2749f,-0.0526f,-0.0002f,0.2815f,-0.0526f,-0.056f,0.2842f,-0.1152f,-0.056f,0.272f,-0.171f,-0.0002f,0.2907f,-0.1152f,-0.0803f,0.0158f,-0.1368f,-0.0918f,0.026f,-0.1075f,-0.0632f,-0.0019f,-0.0573f,-0.1135f,0.0384f,-0.096f,-0.0918f,0.0322f,-0.0684f,-0.1206f,0.0425f,-0.0961f,-0.1139f,0.0902f,-0.096f,-0.1081f,0.0908f,-0.0757f,-0.1256f,0.1038f,-0.0909f,-0.1298f,0.0885f,-0.1169f,-0.1278f,0.0616f,-0.1174f,-0.1041f,0.0796f,-0.0573f,-0.0979f,0.0588f,-0.046f});
  }
}
protected class MFVec3f503 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1071f,0.1156f,-0.0351f,-0.0776f,0.0189f,-0.0299f,-0.0325f,-0.0261f,-0.0362f,-0.0474f,-0.01f,-0.0931f,-0.0255f,0.1409f,0.0382f,-0.0445f,0.2205f,0.0173f,-0.0002f,0.2128f,0.0286f,-0.0472f,-0.0107f,-0.1385f,-0.0445f,0.1419f,0.0279f,-0.0801f,0.137f,0.003f,-0.0566f,-0.0038f,-0.0239f,-0.0284f,-0.0244f,-0.0174f,-0.0052f,0.0094f,0.0296f,-0.0035f,0.0171f,0.0324f,-0.0002f,0.0171f,0.0324f,-0.0094f,0.0088f,0.0271f,-0.0105f,0.0239f,0.023f,-0.0493f,0.0205f,0.0039f,-0.0268f,0.0027f,0.0083f,-0.0558f,0.037f,0.0044f,-0.0209f,0.0444f,0.0192f,-0.0002f,-0.0325f,-0.0342f,-0.0002f,-0.0362f,-0.0214f,-0.0793f,0.0409f,-0.0202f,-0.0245f,-0.0132f,0.0001f,-0.0002f,0.0411f,0.0432f,-0.0147f,0.0873f,0.0356f,-0.0002f,0.0803f,0.0291f,-0.0061f,0.0803f,0.0291f,-0.0241f,0.0554f,0.016f,-0.0135f,0.07f,0.0237f,-0.0002f,0.0979f,0.0386f,-0.0169f,0.0982f,0.0362f,-0.0866f,0.0699f,-0.0237f,-0.0903f,0.0865f,-0.0243f,-0.0491f,0.0909f,0.0172f,-0.0472f,0.0985f,0.0241f,-0.03f,0.0932f,0.0299f,-0.0362f,0.0865f,0.0203f,-0.0754f,0.0546f,-0.0122f,-0.0597f,0.0533f,-0.0011f,-0.0631f,0.0717f,-0.0007f,-0.0415f,0.0721f,0.0109f,-0.0695f,0.072f,-0.0072f,-0.0307f,0.0734f,0.016f,-0.021f,0.0761f,0.0212f,-0.0237f,0.0788f,0.0208f,-0.0728f,0.0748f,-0.0094f,-0.0461f,0.1061f,0.0287f,-0.0831f,0.0865f,-0.0143f,-0.0252f,0.0991f,0.0351f,-0.0863f,0.1733f,-0.0101f,-0.0866f,0.1065f,-0.0098f,-0.0736f,0.1098f,0.0065f,-0.1275f,0.0499f,-0.1465f,-0.0837f,0.019f,-0.1534f,-0.0052f,0.0047f,0.0229f,-0.0683f,0.0942f,0.0035f,-0.0367f,0.0894f,-0.0091f,-0.0472f,0.0912f,-0.0187f,-0.0301f,0.086f,-0.007f,-0.0243f,0.0799f,-0.0064f,-0.0284f,0.0755f,-0.009f,-0.0342f,0.0745f,-0.0121f,-0.046f,0.0737f,-0.0196f,-0.0497f,0.0735f,-0.0241f,-0.0514f,0.0755f,-0.0259f,-0.0564f,0.0841f,-0.0303f,-0.0132f,0.0008f,-0.0161f,-0.0127f,-0.0135f,-0.022f,-0.005f,0.0043f,0.0188f,-0.0031f,0.001f,-0.0116f,-0.0002f,0.0043f,0.0189f,-0.0002f,0.0011f,-0.0117f,-0.0002f,-0.0144f,-0.0279f,-0.0715f,0.1028f,0.0058f});
  }
}
protected class MFVec2f504 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9175f,0.8974f,0.9509f,0.8981f,0.9421f,0.8701f,0.924f,0.8702f,0.9824f,0.8971f,0.9824f,0.8682f,0.9541f,0.8718f,0.9147f,0.8129f,0.9437f,0.8153f,0.9638f,0.8095f,0.9824f,0.809f,0.9461f,0.923f,0.9071f,0.9135f,0.9824f,0.9287f,0.7343f,0.9169f,0.7616f,0.9147f,0.7553f,0.8982f,0.7343f,0.8968f,0.7739f,0.9327f,0.7343f,0.9365f,0.8187f,0.8433f,0.8348f,0.9045f,0.8324f,0.8647f,0.74f,0.8745f,0.761f,0.8768f,0.7497f,0.8755f,0.777f,0.8787f,0.7647f,0.8593f,0.7596f,0.8565f,0.7438f,0.8546f,0.7343f,0.8756f,0.7372f,0.8736f,0.7394f,0.8706f,0.7405f,0.8536f,0.7808f,0.8802f,0.7786f,0.8666f,0.7875f,0.8787f,0.7821f,0.8667f,0.7952f,0.9076f,0.8011f,0.8823f,0.7745f,0.9003f,0.7939f,0.8518f,0.7845f,0.8549f,0.7731f,0.8049f,0.7979f,0.8609f,0.8185f,0.8054f,0.8439f,0.8655f,0.8131f,0.8741f,0.786f,0.7876f,0.8107f,0.8538f,0.8058f,0.8252f,0.8096f,0.8166f,0.8589f,0.7975f,0.8767f,0.8622f,0.8568f,0.8668f,0.8669f,0.8674f,0.9208f,0.8549f,0.8792f,0.7991f,0.8835f,0.8633f,0.9139f,0.8636f,0.9513f,0.84f,0.9824f,0.8358f,0.8845f,0.9021f,0.888f,0.931f,0.8761f,0.9036f,0.8705f,0.9018f,0.8544f,0.902f,0.8538f,0.9345f,0.8173f,0.9068f,0.8156f,0.9257f,0.7753f,0.9186f,0.7832f,0.9041f,0.7338f,0.8385f,0.7279f,0.8339f,0.7208f,0.8401f,0.7397f,0.7767f,0.7338f,0.7681f,0.7338f,0.7727f,0.7192f,0.8201f,0.7171f,0.8352f,0.7139f,0.8364f,0.7127f,0.8419f,0.7175f,0.832f,0.7247f,0.8312f,0.7224f,0.8292f,0.7239f,0.8169f,0.7146f,0.8334f,0.7152f,0.8309f,0.753f,0.7762f,0.7452f,0.772f,0.7409f,0.7703f,0.756f,0.7661f,0.7502f,0.7748f,0.7102f,0.837f,0.7574f,0.7798f,0.7054f,0.8378f,0.7338f,0.8253f,0.7338f,0.8299f,0.7267f,0.8275f,0.7291f,0.8283f,0.7338f,0.8254f,0.7338f,0.7682f,0.7385f,0.7711f,0.7338f,0.7628f,0.7338f,0.82f,0.7437f,0.7597f,0.7429f,0.774f,0.7484f,0.7629f,0.7505f,0.778f,0.7116f,0.8233f,0.7622f,0.7806f,0.7576f,0.779f,0.763f,0.7872f,0.7046f,0.8444f,0.7572f,0.7769f,0.7524f,0.7737f,0.7104f,0.8341f,0.7881f,0.9479f,0.7343f,0.9577f,0.8497f,0.9637f,0.9158f,0.9539f,0.7343f,0.9872f,0.9824f,0.9663f,0.4263f,0.6263f,0.4421f,0.6351f,0.4514f,0.6319f,0.4298f,0.637f,0.4385f,0.639f,0.4385f,0.6403f,0.4369f,0.6596f,0.4321f,0.6555f,0.4385f,0.6553f,0.4451f,0.6548f,0.4452f,0.6463f,0.4227f,0.6454f,0.4263f,0.652f,0.4193f,0.6633f,0.4176f,0.6328f,0.4376f,0.6237f,0.4196f,0.6187f,0.3384f,0.9887f,0.2934f,0.905f,0.2441f,0.9417f,0.2441f,0.9723f,0.4437f,0.6405f,0.4519f,0.6235f,0.3367f,0.9059f,0.4034f,0.9073f,0.4566f,0.6329f,0.4157f,0.6257f,0.4137f,0.6192f,0.2959f,0.626f,0.3051f,0.6166f,0.2511f,0.6816f,0.2548f,0.6653f,0.2441f,0.6653f,0.2441f,0.6816f,0.2661f,0.696f,0.2636f,0.664f,0.3484f,0.6888f,0.3007f,0.651f,0.2881f,0.7397f,0.3623f,0.7239f,0.4151f,0.6155f,0.4295f,0.6197f,0.4116f,0.6201f,0.4088f,0.6855f,0.4123f,0.7323f,0.4518f,0.7703f,0.364f,0.6372f,0.2441f,0.7326f,0.2441f,0.7109f,0.2441f,0.7705f,0.2441f,0.816f,0.2466f,0.8272f,0.2826f,0.8198f,0.263f,0.8101f,0.3011f,0.7644f,0.4294f,0.848f,0.295f,0.8569f,0.4229f,0.7906f,0.445f,0.8342f,0.3273f,0.8725f,0.3401f,0.8443f,0.4194f,0.891f,0.3844f,0.8819f,0.3962f,0.7639f,0.3654f,0.758f,0.3664f,0.7923f,0.3312f,0.7931f,0.3858f,0.7947f,0.2864f,0.8094f,0.3065f,0.7969f,0.4051f,0.8004f,0.4267f,0.8291f,0.3243f,0.8795f,0.293f,0.8645f,0.4715f,0.8911f,0.431f,0.9594f,0.4658f,0.6252f,0.465f,0.6281f,0.3862f,0.8876f,0.4544f,0.6426f,0.2548f,0.6553f,0.2441f,0.6553f,0.4156f,0.6279f,0.3783f,0.625f,0.3984f,0.649f,0.4325f,0.6718f,0.4443f,0.6446f,0.428f,0.6022f,0.4445f,0.6357f,0.4021f,0.656f,0.4052f,0.6271f,0.4253f,0.6199f,0.4215f,0.6174f,0.6418f,0.6585f,0.6441f,0.671f,0.6214f,0.6731f,0.616f,0.6731f,0.6418f,0.6585f,0.623f,0.6494f,0.6418f,0.6585f,0.6441f,0.671f,0.3003f,0.6509f,0.2548f,0.6558f,0.2549f,0.6531f,0.2441f,0.6558f,0.616f,0.6731f,0.6214f,0.6731f,0.2441f,0.6529f,0.314f,0.8296f,0.3898f,0.85f,0.2746f,0.7881f,0.2889f,0.7981f,0.4442f,0.8857f,0.2745f,0.8415f,0.3079f,0.8417f,0.3393f,0.8544f,0.3891f,0.8542f,0.2699f,0.8521f,0.246f,0.853f,0.4715f,0.8911f,0.9421f,0.8701f,0.9509f,0.8981f,0.9175f,0.8974f,0.924f,0.8702f,0.9824f,0.8682f,0.9824f,0.8971f,0.9541f,0.8718f,0.9147f,0.8129f,0.9437f,0.8153f,0.9638f,0.8095f,0.9824f,0.809f,0.9461f,0.923f,0.9071f,0.9135f,0.9824f,0.9287f,0.7553f,0.8982f,0.7616f,0.9147f,0.7343f,0.9169f,0.7343f,0.8968f,0.7739f,0.9327f,0.7343f,0.9365f,0.8324f,0.8647f,0.8348f,0.9045f,0.8187f,0.8433f,0.74f,0.8745f,0.7497f,0.8755f,0.761f,0.8768f,0.7647f,0.8593f,0.777f,0.8787f,0.7438f,0.8546f,0.7596f,0.8565f,0.7372f,0.8736f,0.7343f,0.8756f,0.7394f,0.8706f,0.7405f,0.8536f,0.7808f,0.8802f,0.7786f,0.8666f,0.7821f,0.8667f,0.7875f,0.8787f,0.8011f,0.8823f,0.7952f,0.9076f,0.7745f,0.9003f,0.7939f,0.8518f,0.7845f,0.8549f,0.7731f,0.8049f,0.7979f,0.8609f,0.8185f,0.8054f,0.8439f,0.8655f,0.8131f,0.8741f,0.8107f,0.8538f,0.8058f,0.8252f,0.786f,0.7876f,0.8096f,0.8166f,0.8767f,0.8622f,0.8589f,0.7975f,0.8669f,0.8674f,0.8568f,0.8668f,0.9208f,0.8549f,0.8792f,0.7991f,0.9139f,0.8636f,0.8835f,0.8633f,0.9513f,0.84f,0.9824f,0.8358f,0.8845f,0.9021f,0.888f,0.931f,0.8761f,0.9036f,0.8705f,0.9018f,0.8544f,0.902f,0.8538f,0.9345f,0.8173f,0.9068f,0.8156f,0.9257f,0.7753f,0.9186f,0.7832f,0.9041f,0.7208f,0.8401f,0.7279f,0.8339f,0.7338f,0.8385f,0.7338f,0.7727f,0.7338f,0.7681f,0.7397f,0.7767f,0.7192f,0.8201f,0.7139f,0.8364f,0.7171f,0.8352f,0.7127f,0.8419f,0.7175f,0.832f,0.7224f,0.8292f,0.7247f,0.8312f,0.7239f,0.8169f,0.7146f,0.8334f,0.7452f,0.772f,0.753f,0.7762f,0.7152f,0.8309f,0.7409f,0.7703f,0.7502f,0.7748f,0.756f,0.7661f,0.7102f,0.837f,0.7574f,0.7798f,0.7054f,0.8378f,0.7338f,0.8253f,0.7338f,0.8299f,0.7338f,0.8254f,0.7291f,0.8283f,0.7267f,0.8275f,0.7338f,0.7628f,0.7385f,0.7711f,0.7338f,0.7682f,0.7338f,0.82f,0.7437f,0.7597f,0.7484f,0.7629f,0.7429f,0.774f,0.7505f,0.778f,0.7116f,0.8233f,0.763f,0.7872f,0.7576f,0.779f,0.7622f,0.7806f,0.7046f,0.8444f,0.7572f,0.7769f,0.7524f,0.7737f,0.7104f,0.8341f,0.7881f,0.9479f,0.7343f,0.9577f,0.8497f,0.9637f,0.9158f,0.9539f,0.7343f,0.9872f,0.9824f,0.9663f,0.4514f,0.6319f,0.4421f,0.6351f,0.4263f,0.6263f,0.4385f,0.639f,0.4298f,0.637f,0.4385f,0.6403f,0.4385f,0.6553f,0.4321f,0.6555f,0.4369f,0.6596f,0.4451f,0.6548f,0.4452f,0.6463f,0.4263f,0.652f,0.4227f,0.6454f,0.4193f,0.6633f,0.4176f,0.6328f,0.4196f,0.6187f,0.4376f,0.6237f,0.2441f,0.9417f,0.2934f,0.905f,0.3384f,0.9887f,0.2441f,0.9723f,0.4437f,0.6405f,0.4519f,0.6235f,0.3367f,0.9059f,0.4034f,0.9073f,0.4566f,0.6329f,0.4157f,0.6257f,0.4137f,0.6192f,0.2441f,0.6653f,0.2548f,0.6653f,0.2511f,0.6816f,0.2441f,0.6816f,0.2636f,0.664f,0.2661f,0.696f,0.3484f,0.6888f,0.3007f,0.651f,0.3623f,0.7239f,0.2881f,0.7397f,0.4215f,0.6174f,0.4295f,0.6197f,0.4151f,0.6155f,0.4116f,0.6201f,0.4518f,0.7703f,0.4123f,0.7323f,0.4088f,0.6855f,0.364f,0.6372f,0.2959f,0.626f,0.3051f,0.6166f,0.2441f,0.7326f,0.2441f,0.7705f,0.2441f,0.7109f,0.2745f,0.8415f,0.2466f,0.8272f,0.2441f,0.816f});
  }
}
protected class MFVec2f505 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.263f,0.8101f,0.3011f,0.7644f,0.2746f,0.7881f,0.246f,0.853f,0.2699f,0.8521f,0.4229f,0.7906f,0.445f,0.8342f,0.3401f,0.8443f,0.3393f,0.8544f,0.3079f,0.8417f,0.314f,0.8296f,0.3962f,0.7639f,0.3654f,0.758f,0.3664f,0.7923f,0.3312f,0.7931f,0.3858f,0.7947f,0.3065f,0.7969f,0.2889f,0.7981f,0.2826f,0.8198f,0.2864f,0.8094f,0.4051f,0.8004f,0.3243f,0.8795f,0.4267f,0.8291f,0.293f,0.8645f,0.4715f,0.8911f,0.431f,0.9594f,0.4715f,0.8911f,0.4658f,0.6252f,0.465f,0.6281f,0.4194f,0.891f,0.3862f,0.8876f,0.4544f,0.6426f,0.2548f,0.6553f,0.2441f,0.6553f,0.3984f,0.649f,0.3783f,0.625f,0.4156f,0.6279f,0.4325f,0.6718f,0.428f,0.6022f,0.4443f,0.6446f,0.4445f,0.6357f,0.4021f,0.656f,0.4052f,0.6271f,0.4253f,0.6199f,0.3898f,0.85f,0.6418f,0.6585f,0.6441f,0.671f,0.6441f,0.671f,0.6418f,0.6585f,0.6214f,0.6731f,0.6214f,0.6731f,0.616f,0.6731f,0.616f,0.6731f,0.623f,0.6494f,0.6418f,0.6585f,0.3003f,0.6509f,0.2548f,0.6558f,0.2549f,0.6531f,0.2441f,0.6558f,0.2441f,0.6529f,0.3891f,0.8542f,0.4294f,0.848f,0.4442f,0.8857f,0.295f,0.8569f,0.3273f,0.8725f,0.3844f,0.8819f});
  }
}
protected class MFFloat506 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat507 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32508 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,25,-1,25,24,0,-1,2,26,25,-1,25,1,2,-1,2,3,8,-1,8,26,2,-1,10,27,9,-1,9,4,10,-1,10,0,24,-1,24,27,10,-1,1,0,12,-1,12,13,1,-1,2,1,13,-1,13,14,2,-1,3,2,14,-1,14,15,3,-1,10,4,16,-1,16,22,10,-1,5,6,18,-1,18,17,5,-1,6,7,19,-1,19,18,6,-1,7,8,20,-1,20,19,7,-1,9,11,23,-1,23,21,9,-1,8,3,15,-1,15,20,8,-1,4,9,21,-1,21,16,4,-1,0,10,22,-1,22,12,0,-1,11,5,17,-1,17,23,11,-1,6,5,24,-1,24,25,6,-1,7,6,25,-1,25,26,7,-1,5,11,27,-1,27,24,5,-1,27,11,9,-1,8,7,26,-1});
  }
}
protected class MFInt32509 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,4,6,7,-1,7,5,4,-1,9,10,11,-1,11,8,9,-1,9,0,3,-1,3,10,9,-1,1,0,12,-1,12,13,1,-1,4,1,13,-1,13,14,4,-1,6,4,14,-1,14,15,6,-1,9,8,16,-1,16,17,9,-1,18,19,20,-1,20,21,18,-1,19,22,23,-1,23,20,19,-1,22,7,24,-1,24,23,22,-1,11,25,26,-1,26,27,11,-1,7,6,15,-1,15,24,7,-1,8,11,27,-1,27,16,8,-1,0,9,17,-1,17,12,0,-1,25,18,21,-1,21,26,25,-1,19,18,3,-1,3,2,19,-1,22,19,2,-1,2,5,22,-1,18,25,10,-1,10,3,18,-1,10,25,11,-1,7,22,5,-1});
  }
}
protected class MFVec3f510 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0174f,0.0127f,-0.0474f,-0.0022f,0.0189f,-0.0336f,-0.0158f,0.016f,-0.0283f,-0.0272f,0.0075f,-0.0253f,0.0322f,-0.0034f,-0.0596f,0.0125f,-0.0123f,-0.0391f,-0.0009f,-0.0082f,-0.0311f,-0.0127f,-0.0033f,-0.0272f,-0.0207f,0.0012f,-0.026f,0.0277f,-0.0075f,-0.0551f,0.0251f,0.005f,-0.0535f,0.0189f,-0.0126f,-0.046f,0.0146f,0.0104f,-0.0511f,-0.004f,0.0135f,-0.0392f,-0.016f,0.0113f,-0.0342f,-0.0275f,0.0061f,-0.0279f,0.0309f,-0.0039f,-0.0604f,0.0118f,-0.0134f,-0.0405f,-0.0016f,-0.0098f,-0.0339f,-0.0135f,-0.0045f,-0.0293f,-0.0212f,-0.0001f,-0.0282f,0.0274f,-0.0083f,-0.0569f,0.0226f,0.0033f,-0.0557f,0.0179f,-0.0132f,-0.0469f,0.0157f,-0.0012f,-0.0434f,-0.0015f,0.0055f,-0.0311f,-0.0136f,0.0049f,-0.0274f,0.0221f,-0.0043f,-0.0493f});
  }
}
protected class MFVec2f511 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3562f,0.7836f,0.3424f,0.7815f,0.3432f,0.7614f,0.3553f,0.7628f,0.3328f,0.7723f,0.3344f,0.7557f,0.3248f,0.7567f,0.3294f,0.7475f,0.3666f,0.7703f,0.3614f,0.7771f,0.3598f,0.7618f,0.364f,0.76f,0.3542f,0.784f,0.3411f,0.7782f,0.3327f,0.7703f,0.3246f,0.7567f,0.3657f,0.7703f,0.3598f,0.7771f,0.3534f,0.7431f,0.3436f,0.742f,0.3428f,0.7423f,0.3522f,0.7429f,0.335f,0.743f,0.3345f,0.743f,0.3291f,0.7475f,0.3576f,0.7438f,0.3566f,0.7438f,0.3632f,0.7603f});
  }
}
protected class MFFloat512 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat513 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32514 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,24,25,-1,25,1,0,-1,2,1,25,-1,25,26,2,-1,2,26,8,-1,8,3,2,-1,10,4,9,-1,9,27,10,-1,10,27,24,-1,24,0,10,-1,1,13,12,-1,12,0,1,-1,2,14,13,-1,13,1,2,-1,3,15,14,-1,14,2,3,-1,10,22,16,-1,16,4,10,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,9,21,23,-1,23,11,9,-1,8,20,15,-1,15,3,8,-1,4,16,21,-1,21,9,4,-1,0,12,22,-1,22,10,0,-1,11,23,17,-1,17,5,11,-1,6,25,24,-1,24,5,6,-1,7,26,25,-1,25,6,7,-1,5,24,27,-1,27,11,5,-1,27,9,11,-1,8,26,7,-1});
  }
}
protected class MFInt32515 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,4,1,2,-1,2,5,4,-1,4,5,7,-1,7,6,4,-1,9,8,11,-1,11,10,9,-1,9,10,3,-1,3,0,9,-1,1,13,12,-1,12,0,1,-1,4,14,13,-1,13,1,4,-1,6,15,14,-1,14,4,6,-1,9,17,16,-1,16,8,9,-1,18,21,20,-1,20,19,18,-1,19,20,23,-1,23,22,19,-1,22,23,24,-1,24,7,22,-1,11,27,26,-1,26,25,11,-1,7,24,15,-1,15,6,7,-1,8,16,27,-1,27,11,8,-1,0,12,17,-1,17,9,0,-1,25,26,21,-1,21,18,25,-1,19,2,3,-1,3,18,19,-1,22,5,2,-1,2,19,22,-1,18,3,10,-1,10,25,18,-1,10,11,25,-1,7,5,22,-1});
  }
}
protected class MFVec3f516 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0178f,0.0127f,-0.0474f,0.0019f,0.0189f,-0.0336f,0.0154f,0.016f,-0.0283f,0.0268f,0.0075f,-0.0253f,-0.0326f,-0.0034f,-0.0596f,-0.0129f,-0.0123f,-0.0391f,0.0005f,-0.0082f,-0.0311f,0.0123f,-0.0033f,-0.0272f,0.0203f,0.0012f,-0.026f,-0.028f,-0.0075f,-0.0551f,-0.0255f,0.005f,-0.0535f,-0.0193f,-0.0126f,-0.046f,-0.015f,0.0104f,-0.0511f,0.0037f,0.0135f,-0.0392f,0.0157f,0.0113f,-0.0342f,0.0271f,0.0061f,-0.0279f,-0.0313f,-0.0039f,-0.0604f,-0.0121f,-0.0134f,-0.0405f,0.0012f,-0.0098f,-0.0339f,0.0131f,-0.0045f,-0.0293f,0.0208f,-0.0001f,-0.0282f,-0.0278f,-0.0083f,-0.0569f,-0.0229f,0.0033f,-0.0557f,-0.0183f,-0.0132f,-0.0469f,-0.016f,-0.0012f,-0.0434f,0.0011f,0.0055f,-0.0311f,0.0132f,0.0049f,-0.0274f,-0.0225f,-0.0043f,-0.0493f});
  }
}
protected class MFVec2f517 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3562f,0.7836f,0.3424f,0.7815f,0.3432f,0.7614f,0.3553f,0.7628f,0.3328f,0.7723f,0.3344f,0.7557f,0.3248f,0.7567f,0.3294f,0.7475f,0.3666f,0.7703f,0.3614f,0.7771f,0.3598f,0.7618f,0.364f,0.76f,0.3542f,0.784f,0.3411f,0.7782f,0.3327f,0.7703f,0.3246f,0.7567f,0.3657f,0.7703f,0.3598f,0.7771f,0.3534f,0.7431f,0.3436f,0.742f,0.3428f,0.7423f,0.3522f,0.7429f,0.335f,0.743f,0.3345f,0.743f,0.3291f,0.7475f,0.3576f,0.7438f,0.3566f,0.7438f,0.3632f,0.7603f});
  }
}
protected class MFFloat518 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat519 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32520 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,6,16,-1,16,11,1,-1,0,1,11,-1,11,10,0,-1,8,9,19,-1,19,18,8,-1,2,8,18,-1,18,12,2,-1,3,0,10,-1,10,13,3,-1,9,4,14,-1,14,19,9,-1,5,2,12,-1,12,15,5,-1,4,3,13,-1,13,14,4,-1,6,7,17,-1,17,16,6,-1,7,5,15,-1,15,17,7,-1,11,16,21,-1,21,20,11,-1,16,17,22,-1,22,21,16,-1,17,15,23,-1,23,22,17,-1,15,12,24,-1,24,23,15,-1,12,18,25,-1,25,24,12,-1,18,19,26,-1,26,25,18,-1,19,14,27,-1,27,26,19,-1,14,13,28,-1,28,27,14,-1,13,10,29,-1,29,28,13,-1,10,11,20,-1,20,29,10,-1,6,1,30,-1,1,0,30,-1,0,3,30,-1,3,4,30,-1,4,9,30,-1,9,8,30,-1,8,2,30,-1,2,5,30,-1,5,7,30,-1,7,6,30,-1});
  }
}
protected class MFInt32521 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,9,13,-1,13,14,4,-1,3,4,14,-1,14,15,3,-1,11,12,16,-1,16,17,11,-1,5,11,17,-1,17,18,5,-1,6,3,15,-1,15,6,6,-1,12,7,19,-1,19,16,12,-1,8,5,18,-1,18,20,8,-1,7,6,21,-1,21,19,7,-1,9,10,22,-1,22,13,9,-1,10,8,20,-1,20,22,10,-1,14,13,24,-1,24,23,14,-1,13,22,25,-1,25,24,13,-1,22,20,26,-1,26,25,22,-1,20,18,27,-1,27,26,20,-1,18,17,28,-1,28,27,18,-1,17,16,29,-1,29,28,17,-1,16,19,30,-1,30,29,16,-1,19,21,31,-1,31,30,19,-1,6,15,32,-1,32,31,6,-1,15,14,23,-1,23,32,15,-1,36,1,40,-1,1,0,40,-1,0,33,40,-1,33,34,40,-1,34,39,40,-1,39,38,40,-1,38,2,40,-1,2,35,40,-1,35,37,40,-1,37,36,40,-1});
  }
}
protected class MFVec3f522 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.013f,-0.0056f,-0.0789f,0f,-0.0012f,-0.0818f,0.0206f,-0.0201f,-0.1061f,-0.0255f,-0.0133f,-0.0785f,-0.0185f,-0.0187f,-0.0832f,0.0239f,-0.0173f,-0.1081f,0.0193f,0.0021f,-0.0953f,0.0343f,-0.0056f,-0.113f,0.0141f,-0.0204f,-0.0996f,-0.0076f,-0.02f,-0.0882f,-0.0206f,-0.0017f,-0.087f,-0.0065f,0.005f,-0.0917f,0.0179f,-0.0251f,-0.1154f,-0.0348f,-0.013f,-0.0861f,-0.0267f,-0.0236f,-0.0913f,0.0218f,-0.0203f,-0.1178f,0.0171f,0.0086f,-0.1047f,0.0322f,-0.0036f,-0.1223f,0.0106f,-0.0257f,-0.1087f,-0.0143f,-0.0254f,-0.0967f,-0.0096f,0.0018f,-0.1007f,0.012f,0.0046f,-0.1118f,0.0239f,-0.004f,-0.1253f,0.0176f,-0.0147f,-0.1218f,0.0136f,-0.0179f,-0.1195f,0.0076f,-0.0184f,-0.1139f,-0.0173f,-0.0177f,-0.1028f,-0.0281f,-0.016f,-0.0988f,-0.032f,-0.0121f,-0.0979f,-0.0221f,-0.0039f,-0.0972f,0.0064f,-0.0106f,-0.0891f});
  }
}
protected class MFVec2f523 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3217f,0.8278f,0.3482f,0.8386f,0.3916f,0.7984f,0.3206f,0.8292f,0.3482f,0.8386f,0.3916f,0.7984f,0.2977f,0.8092f,0.309f,0.8013f,0.3985f,0.8044f,0.3868f,0.8428f,0.4182f,0.8265f,0.3778f,0.7978f,0.3319f,0.7987f,0.3868f,0.8428f,0.3482f,0.8386f,0.3206f,0.8292f,0.3319f,0.7987f,0.3778f,0.7978f,0.3916f,0.7984f,0.309f,0.8013f,0.3985f,0.8029f,0.2977f,0.8092f,0.4182f,0.8263f,0.3482f,0.8386f,0.3868f,0.8428f,0.4182f,0.8265f,0.3985f,0.8044f,0.3916f,0.7984f,0.3778f,0.7978f,0.3319f,0.7987f,0.309f,0.8013f,0.2977f,0.8092f,0.3206f,0.8292f,0.2978f,0.8092f,0.309f,0.8013f,0.3985f,0.8044f,0.3868f,0.8428f,0.4182f,0.8265f,0.3778f,0.7978f,0.3319f,0.7986f,0.3567f,0.819f});
  }
}
protected class MFFloat524 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat525 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32526 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,11,16,-1,16,6,1,-1,0,10,11,-1,11,1,0,-1,8,18,19,-1,19,9,8,-1,2,12,18,-1,18,8,2,-1,3,13,10,-1,10,0,3,-1,9,19,14,-1,14,4,9,-1,5,15,12,-1,12,2,5,-1,4,14,13,-1,13,3,4,-1,6,16,17,-1,17,7,6,-1,7,17,15,-1,15,5,7,-1,11,20,21,-1,21,16,11,-1,16,21,22,-1,22,17,16,-1,17,22,23,-1,23,15,17,-1,15,23,24,-1,24,12,15,-1,12,24,25,-1,25,18,12,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,14,19,-1,14,27,28,-1,28,13,14,-1,13,28,29,-1,29,10,13,-1,10,29,20,-1,20,11,10,-1,6,30,1,-1,1,30,0,-1,0,30,3,-1,3,30,4,-1,4,30,9,-1,9,30,8,-1,8,30,2,-1,2,30,5,-1,5,30,7,-1,7,30,6,-1});
  }
}
protected class MFInt32527 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,14,13,-1,13,9,4,-1,3,15,14,-1,14,4,3,-1,11,17,16,-1,16,12,11,-1,5,18,17,-1,17,11,5,-1,6,6,15,-1,15,3,6,-1,12,16,19,-1,19,7,12,-1,8,20,18,-1,18,5,8,-1,7,19,21,-1,21,6,7,-1,9,13,22,-1,22,10,9,-1,10,22,20,-1,20,8,10,-1,14,23,24,-1,24,13,14,-1,13,24,25,-1,25,22,13,-1,22,25,26,-1,26,20,22,-1,20,26,27,-1,27,18,20,-1,18,27,28,-1,28,17,18,-1,17,28,29,-1,29,16,17,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,21,19,-1,6,31,32,-1,32,15,6,-1,15,32,23,-1,23,14,15,-1,36,40,1,-1,1,40,0,-1,0,40,33,-1,33,40,34,-1,34,40,39,-1,39,40,38,-1,38,40,2,-1,2,40,35,-1,35,40,37,-1,37,40,36,-1});
  }
}
protected class MFVec3f528 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0127f,-0.0056f,-0.0789f,-0.0003f,-0.0012f,-0.0818f,-0.021f,-0.0201f,-0.1061f,0.0252f,-0.0133f,-0.0785f,0.0181f,-0.0187f,-0.0832f,-0.0243f,-0.0173f,-0.1081f,-0.0197f,0.0021f,-0.0953f,-0.0346f,-0.0056f,-0.113f,-0.0145f,-0.0204f,-0.0996f,0.0073f,-0.02f,-0.0882f,0.0202f,-0.0017f,-0.087f,0.0062f,0.005f,-0.0917f,-0.0183f,-0.0251f,-0.1154f,0.0344f,-0.013f,-0.0861f,0.0263f,-0.0236f,-0.0913f,-0.0222f,-0.0203f,-0.1178f,-0.0175f,0.0086f,-0.1047f,-0.0326f,-0.0036f,-0.1223f,-0.0109f,-0.0257f,-0.1087f,0.0139f,-0.0254f,-0.0967f,0.0092f,0.0018f,-0.1007f,-0.0123f,0.0046f,-0.1118f,-0.0243f,-0.004f,-0.1253f,-0.0179f,-0.0147f,-0.1218f,-0.014f,-0.0179f,-0.1195f,-0.0079f,-0.0184f,-0.1139f,0.017f,-0.0177f,-0.1028f,0.0277f,-0.016f,-0.0988f,0.0316f,-0.0121f,-0.0979f,0.0217f,-0.0039f,-0.0972f,-0.0067f,-0.0106f,-0.0891f});
  }
}
protected class MFVec2f529 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3217f,0.8278f,0.3482f,0.8386f,0.3916f,0.7984f,0.3206f,0.8292f,0.3482f,0.8386f,0.3916f,0.7984f,0.2977f,0.8092f,0.309f,0.8013f,0.3985f,0.8044f,0.3868f,0.8428f,0.4182f,0.8265f,0.3778f,0.7978f,0.3319f,0.7987f,0.3868f,0.8428f,0.3482f,0.8386f,0.3206f,0.8292f,0.3319f,0.7987f,0.3778f,0.7978f,0.3916f,0.7984f,0.309f,0.8013f,0.3985f,0.8029f,0.2977f,0.8092f,0.4182f,0.8263f,0.3482f,0.8386f,0.3868f,0.8428f,0.4182f,0.8265f,0.3985f,0.8044f,0.3916f,0.7984f,0.3778f,0.7978f,0.3319f,0.7987f,0.309f,0.8013f,0.2977f,0.8092f,0.3206f,0.8292f,0.2978f,0.8092f,0.309f,0.8013f,0.3985f,0.8044f,0.3868f,0.8428f,0.4182f,0.8265f,0.3778f,0.7978f,0.3319f,0.7986f,0.3567f,0.819f});
  }
}
protected class MFFloat530 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat531 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32532 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,20,21,-1,21,7,2,-1,4,3,8,-1,8,10,4,-1,3,2,7,-1,7,8,3,-1,2,1,5,-1,5,20,2,-1,4,6,3,-1,3,6,1,-1,1,2,3,-1,5,1,12,-1,12,14,5,-1,0,5,14,-1,14,11,0,-1,6,4,13,-1,13,15,6,-1,1,6,15,-1,15,12,1,-1,8,7,16,-1,16,17,8,-1,21,22,16,-1,16,7,21,-1,9,0,11,-1,11,18,9,-1,4,10,19,-1,19,13,4,-1,10,8,17,-1,17,19,10,-1,20,0,9,-1,9,21,20,-1,5,0,20,-1,21,9,18,-1,18,22,21,-1});
  }
}
protected class MFInt32533 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,20,21,-1,21,7,0,-1,3,1,8,-1,8,10,3,-1,1,0,7,-1,7,8,1,-1,0,4,5,-1,5,20,0,-1,3,6,1,-1,1,6,4,-1,4,0,1,-1,5,4,11,-1,11,12,5,-1,2,5,12,-1,12,14,2,-1,6,3,15,-1,15,16,6,-1,4,6,16,-1,16,11,4,-1,8,7,13,-1,13,17,8,-1,21,22,13,-1,13,7,21,-1,9,2,14,-1,14,18,9,-1,3,10,19,-1,19,15,3,-1,10,8,17,-1,17,19,10,-1,20,2,9,-1,9,21,20,-1,5,2,20,-1,21,9,18,-1,18,22,21,-1});
  }
}
protected class MFVec3f534 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0074f,-0.0137f,-0.086f,0.0242f,0.0049f,-0.0933f,0.0245f,0.0009f,-0.0946f,0.0511f,0.0056f,-0.1152f,0.0648f,0.0063f,-0.1316f,0.0032f,-0.0021f,-0.0869f,0.0516f,0.0087f,-0.1155f,0.025f,-0.0028f,-0.0973f,0.0495f,0.0016f,-0.1163f,-0.0059f,-0.0152f,-0.0887f,0.0644f,0.0042f,-0.1321f,-0.0064f,-0.0134f,-0.0918f,0.0241f,0.0044f,-0.098f,0.063f,0.0062f,-0.1331f,0.0038f,-0.0025f,-0.0921f,0.0509f,0.0081f,-0.1183f,0.0248f,-0.0031f,-0.1017f,0.0486f,0.0012f,-0.1191f,-0.0048f,-0.015f,-0.0942f,0.0624f,0.0037f,-0.1335f,0.0061f,-0.0058f,-0.0893f,0.0083f,-0.0086f,-0.0924f,0.0074f,-0.0095f,-0.0973f});
  }
}
protected class MFVec2f535 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.344f,0.8611f,0.3991f,0.8726f,0.2757f,0.8301f,0.4299f,0.8749f,0.3424f,0.8703f,0.297f,0.8558f,0.4f,0.8788f,0.3445f,0.8554f,0.397f,0.8649f,0.2794f,0.8281f,0.4294f,0.8703f,0.3456f,0.8724f,0.3008f,0.857f,0.3469f,0.8565f,0.2795f,0.829f,0.4293f,0.8745f,0.3996f,0.8793f,0.3963f,0.8659f,0.2847f,0.831f,0.4284f,0.8697f,0.3046f,0.8466f,0.3082f,0.8407f,0.3105f,0.8417f});
  }
}
protected class MFFloat536 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat537 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32538 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,7,21,-1,21,20,2,-1,4,10,8,-1,8,3,4,-1,3,8,7,-1,7,2,3,-1,2,20,5,-1,5,1,2,-1,4,3,6,-1,3,2,1,-1,1,6,3,-1,5,14,12,-1,12,1,5,-1,0,11,14,-1,14,5,0,-1,6,15,13,-1,13,4,6,-1,1,12,15,-1,15,6,1,-1,8,17,16,-1,16,7,8,-1,21,7,16,-1,16,22,21,-1,9,18,11,-1,11,0,9,-1,4,13,19,-1,19,10,4,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,0,20,-1,5,20,0,-1,21,22,18,-1,18,9,21,-1});
  }
}
protected class MFInt32539 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,7,21,-1,21,20,0,-1,3,10,8,-1,8,1,3,-1,1,8,7,-1,7,0,1,-1,0,20,5,-1,5,4,0,-1,3,1,6,-1,1,0,4,-1,4,6,1,-1,5,12,11,-1,11,4,5,-1,2,14,12,-1,12,5,2,-1,6,16,15,-1,15,3,6,-1,4,11,16,-1,16,6,4,-1,8,17,13,-1,13,7,8,-1,21,7,13,-1,13,22,21,-1,9,18,14,-1,14,2,9,-1,3,15,19,-1,19,10,3,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,2,20,-1,5,20,2,-1,21,22,18,-1,18,9,21,-1});
  }
}
protected class MFVec3f540 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0071f,-0.0137f,-0.086f,-0.0245f,0.0049f,-0.0933f,-0.0248f,0.0009f,-0.0946f,-0.0514f,0.0056f,-0.1152f,-0.0652f,0.0063f,-0.1316f,-0.0035f,-0.0021f,-0.0869f,-0.052f,0.0087f,-0.1155f,-0.0253f,-0.0028f,-0.0973f,-0.0499f,0.0016f,-0.1163f,0.0055f,-0.0152f,-0.0887f,-0.0648f,0.0042f,-0.1321f,0.0061f,-0.0134f,-0.0918f,-0.0245f,0.0044f,-0.098f,-0.0633f,0.0062f,-0.1331f,-0.0041f,-0.0025f,-0.0921f,-0.0512f,0.0081f,-0.1183f,-0.0252f,-0.0031f,-0.1017f,-0.049f,0.0012f,-0.1191f,0.0044f,-0.015f,-0.0942f,-0.0627f,0.0037f,-0.1335f,-0.0064f,-0.0058f,-0.0893f,-0.0087f,-0.0086f,-0.0924f,-0.0078f,-0.0095f,-0.0973f});
  }
}
protected class MFVec2f541 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.344f,0.8611f,0.3991f,0.8726f,0.2757f,0.8301f,0.4299f,0.8749f,0.3424f,0.8703f,0.297f,0.8558f,0.4f,0.8788f,0.3445f,0.8554f,0.397f,0.8649f,0.2794f,0.8281f,0.4294f,0.8703f,0.3456f,0.8724f,0.3008f,0.857f,0.3469f,0.8565f,0.2795f,0.829f,0.4293f,0.8745f,0.3996f,0.8793f,0.3963f,0.8659f,0.2847f,0.831f,0.4284f,0.8697f,0.3046f,0.8466f,0.3082f,0.8407f,0.3105f,0.8417f});
  }
}
protected class MFFloat542 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat543 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32544 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,12,-1,13,3,15,-1,3,13,4,-1,4,13,12,-1,4,12,2,-1,1,0,18,-1,18,9,1,-1,4,2,10,-1,10,6,8,-1,4,10,8,-1,3,7,24,-1,24,15,3,-1,4,8,7,-1,7,3,4,-1,5,26,24,-1,24,7,5,-1,8,6,5,-1,5,7,8,-1,0,1,2,-1,2,1,9,-1,9,10,2,-1,0,12,11,-1,13,15,14,-1,14,16,13,-1,16,12,13,-1,16,11,12,-1,17,19,18,-1,18,0,17,-1,22,21,20,-1,16,22,20,-1,16,20,11,-1,14,15,24,-1,24,23,14,-1,16,14,23,-1,23,22,16,-1,25,23,24,-1,24,26,25,-1,22,23,25,-1,25,21,22,-1,0,11,17,-1,11,20,19,-1,19,17,11,-1});
  }
}
protected class MFInt32545 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,4,5,6,-1,5,4,7,-1,7,4,3,-1,7,3,2,-1,1,0,0,-1,0,8,1,-1,7,2,2,-1,2,9,16,-1,7,2,16,-1,5,13,14,-1,14,6,5,-1,7,15,13,-1,13,5,7,-1,11,12,17,-1,17,10,11,-1,18,19,11,-1,11,10,18,-1,0,20,2,-1,2,20,21,-1,21,2,2,-1,0,22,2,-1,23,25,24,-1,24,26,23,-1,26,22,23,-1,26,2,22,-1,27,28,0,-1,0,0,27,-1,30,29,2,-1,26,30,2,-1,26,2,2,-1,24,25,32,-1,32,31,24,-1,26,24,31,-1,31,33,26,-1,35,34,37,-1,37,36,35,-1,38,34,35,-1,35,39,38,-1,0,2,40,-1,2,2,41,-1,41,40,2,-1});
  }
}
protected class MFVec3f546 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0002f,-0.0382f,-0.0363f,0.028f,-0.0248f,-0.0483f,0.0242f,-0.0136f,-0.0307f,0.0049f,0.0043f,-0.0117f,0.0265f,0.0023f,-0.0224f,0.0049f,0.0148f,-0.0707f,0.024f,0.0171f,-0.0718f,0.0049f,0.0057f,-0.0235f,0.0243f,0.006f,-0.0311f,0.0432f,-0.0055f,-0.086f,0.0446f,0.0076f,-0.0799f,-0.0245f,-0.0136f,-0.0307f,-0.0002f,-0.0137f,-0.0212f,-0.0002f,-0.0053f,-0.0116f,-0.0052f,0.0043f,-0.0117f,-0.0002f,0.0043f,-0.0117f,-0.0268f,0.0023f,-0.0224f,-0.0284f,-0.0248f,-0.0483f,-0.0002f,-0.0151f,-0.0814f,-0.0436f,-0.0055f,-0.086f,-0.045f,0.0076f,-0.0799f,-0.0243f,0.0171f,-0.0718f,-0.0247f,0.006f,-0.0311f,-0.0052f,0.0057f,-0.0235f,-0.0002f,0.0057f,-0.0235f,-0.0052f,0.0148f,-0.0707f,-0.0002f,0.0125f,-0.0698f});
  }
}
protected class MFVec2f547 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2448f,0.6067f,0.3051f,0.6166f,0.2959f,0.6259f,0.2442f,0.6234f,0.2438f,0.6465f,0.2546f,0.6556f,0.2439f,0.6556f,0.3007f,0.651f,0.3051f,0.6166f,0.3007f,0.651f,0.6104f,0.6278f,0.6104f,0.661f,0.6021f,0.661f,0.2546f,0.6556f,0.2439f,0.6556f,0.3007f,0.651f,0.3007f,0.651f,0.6021f,0.6278f,0.6425f,0.6334f,0.6294f,0.6619f,0.3051f,0.6166f,0.3051f,0.6166f,0.2442f,0.6234f,0.2438f,0.6465f,0.2546f,0.6556f,0.2439f,0.6556f,0.3007f,0.651f,0.3051f,0.6166f,0.3051f,0.6166f,0.3007f,0.651f,0.3007f,0.651f,0.2546f,0.6556f,0.2439f,0.6556f,0.3007f,0.651f,0.6104f,0.6278f,0.6104f,0.661f,0.6021f,0.661f,0.6021f,0.6278f,0.6425f,0.6334f,0.6294f,0.6619f,0.3051f,0.6166f,0.3051f,0.6166f});
  }
}
protected class MFFloat548 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat549 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32550 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1});
  }
}
protected class MFInt32551 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1});
  }
}
protected class MFVec3f552 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1121f,-0.0062f,-0.1213f,0.114f,0.0027f,-0.1008f,0.1057f,-0.0047f,-0.0749f,0.104f,-0.0495f,-0.077f,0.103f,-0.0456f,-0.1047f,0.0758f,0.0002f,-0.062f,0.0874f,0.0137f,-0.1031f,0.0942f,-0.0646f,-0.1147f,0.0985f,-0.0646f,-0.0697f,0.0844f,-0.0013f,-0.1399f,-0.003f,0.0056f,-0.1061f,-0.003f,-0.0018f,-0.1231f,-0.003f,-0.0405f,-0.1077f,-0.003f,-0.0399f,-0.0878f,-0.003f,-0.0027f,-0.0835f});
  }
}
protected class MFVec2f553 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1911f,0.4797f,0.171f,0.4832f,0.1497f,0.4806f,0.1519f,0.4334f,0.1831f,0.4416f,0.1474f,0.4856f,0.1708f,0.4854f,0.1784f,0.4249f,0.1538f,0.4251f,0.1963f,0.4863f,0.19f,0.5091f,0.1847f,0.499f,0.172f,0.4382f,0.1568f,0.4457f,0.1409f,0.4926f});
  }
}
protected class MFFloat554 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat555 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32556 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,9,6,-1,6,2,3,-1,7,5,1,-1,1,8,7,-1,6,8,0,-1,0,2,6,-1,0,8,1,-1,9,7,8,-1,8,6,9,-1,4,5,11,-1,11,10,4,-1,5,7,12,-1,12,11,5,-1,7,9,13,-1,13,12,7,-1,9,3,14,-1,14,13,9,-1,3,4,10,-1,10,14,3,-1,10,11,15,-1,11,12,15,-1,12,13,15,-1,13,14,15,-1,14,10,15,-1});
  }
}
protected class MFInt32557 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,8,6,-1,6,2,3,-1,9,5,1,-1,1,7,9,-1,6,7,0,-1,0,2,6,-1,0,7,1,-1,12,13,11,-1,11,10,12,-1,4,5,15,-1,15,14,4,-1,5,9,16,-1,16,15,5,-1,13,12,17,-1,17,16,13,-1,8,3,18,-1,18,17,8,-1,3,4,14,-1,14,18,3,-1,14,15,19,-1,15,16,19,-1,16,17,19,-1,17,18,19,-1,18,14,19,-1});
  }
}
protected class MFVec3f558 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0434f,0.0244f,-0.104f,0.0339f,0.006f,-0.1409f,0.0343f,0.0074f,-0.0655f,-0.0087f,0.0171f,-0.0629f,0.0029f,0.0306f,-0.104f,0f,0.0156f,-0.1408f,0.0186f,-0.0439f,-0.0706f,0.0097f,-0.0477f,-0.1156f,0.0184f,-0.0441f,-0.1156f,0.0141f,-0.0477f,-0.0706f,-0.028f,0.0231f,-0.1035f,-0.035f,0.0106f,-0.1276f,-0.0171f,-0.0446f,-0.1126f,-0.0171f,-0.0445f,-0.0758f,-0.0342f,0.0147f,-0.0727f,-0.036f,-0.009f,-0.0988f});
  }
}
protected class MFVec2f559 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1715f,0.4655f,0.1797f,0.4646f,0.1569f,0.4642f,0.1474f,0.4856f,0.1708f,0.4854f,0.1963f,0.4863f,0.1544f,0.4288f,0.1782f,0.4286f,0.1538f,0.4251f,0.1784f,0.4249f,0.1544f,0.4288f,0.1782f,0.4286f,0.1538f,0.4251f,0.1784f,0.4249f,0.1703f,0.4865f,0.1895f,0.487f,0.1761f,0.4271f,0.1552f,0.4287f,0.1491f,0.4835f,0.1671f,0.4618f});
  }
}
protected class MFFloat560 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat561 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32562 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,40,-1,40,41,26,-1,27,26,41,-1,41,42,27,-1,28,27,42,-1,42,43,28,-1,29,28,43,-1,43,44,29,-1,25,29,44,-1,44,40,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1});
  }
}
protected class MFInt32563 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,0,1,-1,3,2,1,-1,55,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,49,35,36,-1,48,49,36,-1,37,48,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,38,39,56,-1,56,57,38,-1,40,50,58,-1,58,59,40,-1,41,40,59,-1,59,60,41,-1,42,41,60,-1,60,61,42,-1,39,42,61,-1,61,56,39,-1,43,44,39,-1,39,38,43,-1,45,52,51,-1,51,40,45,-1,46,45,40,-1,40,41,46,-1,47,46,41,-1,41,42,47,-1,44,47,42,-1,42,39,44,-1,34,33,44,-1,44,43,34,-1,35,54,53,-1,53,45,35,-1,36,35,45,-1,45,46,36,-1,37,36,46,-1,46,47,37,-1,33,37,47,-1,47,44,33,-1});
  }
}
protected class MFVec3f564 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.026f,0.0312f,-0.1397f,0.052f,0.0309f,-0.1011f,0.0234f,0.0312f,-0.0645f,-0.0203f,0.0316f,-0.0804f,-0.0187f,0.0316f,-0.1269f,0.0309f,0.0027f,-0.1539f,0.0668f,0.0024f,-0.1006f,0.0273f,0.0027f,-0.05f,-0.0331f,0.0032f,-0.072f,-0.0308f,0.0032f,-0.1361f,0.0304f,-0.0539f,-0.1539f,0.0663f,-0.0542f,-0.1006f,0.0268f,-0.0538f,-0.05f,-0.0336f,-0.0533f,-0.072f,-0.0313f,-0.0533f,-0.1361f,0.0313f,-0.0781f,-0.1568f,0.0693f,-0.0784f,-0.1005f,0.0274f,-0.078f,-0.0469f,-0.0364f,-0.0775f,-0.0702f,-0.034f,-0.0775f,-0.1381f,0.0197f,-0.0364f,-0.1455f,0.0472f,-0.0366f,-0.1121f,0.033f,-0.0365f,-0.0652f,-0.0033f,-0.0362f,-0.0697f,-0.0115f,-0.0361f,-0.1193f,0.0201f,-0.1671f,-0.1372f,0.0486f,-0.1673f,-0.1104f,0.0339f,-0.1672f,-0.0728f,-0.0038f,-0.1669f,-0.0763f,-0.0123f,-0.1668f,-0.1161f,0.0202f,-0.2583f,-0.1359f,0.0477f,-0.2585f,-0.1101f,0.0335f,-0.2583f,-0.0739f,-0.0028f,-0.2581f,-0.0773f,-0.011f,-0.2579f,-0.1156f,0.019f,-0.2707f,-0.1221f,0.0351f,-0.2707f,-0.107f,0.0268f,-0.2707f,-0.0858f,0.0055f,-0.2705f,-0.0878f,0.0007f,-0.2705f,-0.1102f,0.0197f,-0.0364f,-0.1455f,0.0472f,-0.0366f,-0.1121f,0.033f,-0.0365f,-0.0652f,-0.0033f,-0.0362f,-0.0697f,-0.0115f,-0.0361f,-0.1193f});
  }
}
protected class MFVec2f565 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2986f,0.2114f,0.2726f,0.2114f,0.3201f,0.2114f,0.3415f,0.2114f,0.2466f,0.2114f,0.2979f,0.2417f,0.2726f,0.2417f,0.3197f,0.2417f,0.3418f,0.2417f,0.2473f,0.2417f,0.2979f,0.3018f,0.2726f,0.3018f,0.3197f,0.3018f,0.3418f,0.3018f,0.2473f,0.3018f,0.2978f,0.3276f,0.2726f,0.3276f,0.3197f,0.3276f,0.3419f,0.3276f,0.2474f,0.3276f,0.2932f,0.2834f,0.2689f,0.2834f,0.316f,0.2834f,0.3322f,0.2834f,0.245f,0.2834f,0.2251f,0.2114f,0.2255f,0.2417f,0.2255f,0.2417f,0.2255f,0.3018f,0.2255f,0.3018f,0.2255f,0.3276f,0.2255f,0.3276f,0.2159f,0.2834f,0.9467f,0.4943f,0.9572f,0.4943f,0.9099f,0.4943f,0.9193f,0.4943f,0.9332f,0.4943f,0.9567f,0.4691f,0.9455f,0.4691f,0.9105f,0.4691f,0.9205f,0.4691f,0.9332f,0.4691f,0.9567f,0.4913f,0.9458f,0.4913f,0.9102f,0.4913f,0.9203f,0.4913f,0.9334f,0.4913f,0.8898f,0.4943f,0.9003f,0.4943f,0.8997f,0.4691f,0.8997f,0.4691f,0.8998f,0.4913f,0.8998f,0.4913f,0.9003f,0.4943f,0.3481f,0.2114f,0.9448f,0.4374f,0.9561f,0.4374f,0.8991f,0.4374f,0.9117f,0.4374f,0.9198f,0.4374f,0.9341f,0.4374f});
  }
}
protected class MFFloat566 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat567 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32568 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1});
  }
}
protected class MFInt32569 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,4,-1,1,2,4,-1,0,1,4,-1,4,3,5,-1,5,6,4,-1,3,2,7,-1,7,5,3,-1,2,1,8,-1,8,7,2,-1,1,0,9,-1,9,8,1,-1,0,4,6,-1,6,9,0,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,11,16,-1,16,19,14,-1,22,23,24,-1,21,22,24,-1,20,21,24,-1,22,21,16,-1,16,15,22,-1,23,22,15,-1,15,17,23,-1,24,23,17,-1,17,18,24,-1,20,24,18,-1,18,19,20,-1,21,20,19,-1,19,16,21,-1});
  }
}
protected class MFVec3f570 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0047f,-0.0017f,-0.1278f,0.0258f,-0.0019f,-0.1077f,0.0138f,-0.0018f,-0.0785f,-0.0148f,-0.0015f,-0.0805f,-0.0204f,-0.0015f,-0.111f,0.0031f,-0.0276f,-0.1384f,0.0329f,-0.0278f,-0.1115f,0.0159f,-0.0277f,-0.0653f,-0.0245f,-0.0273f,-0.0685f,-0.0324f,-0.0273f,-0.1167f,0.0028f,-0.0873f,-0.138f,0.0347f,-0.0876f,-0.1114f,0.0174f,-0.0744f,-0.0657f,-0.0257f,-0.074f,-0.0688f,-0.0351f,-0.087f,-0.1165f,0.0012f,-0.2046f,-0.1342f,0.0244f,-0.2048f,-0.1048f,0.0112f,-0.2047f,-0.0679f,-0.0203f,-0.2044f,-0.0709f,-0.0265f,-0.2044f,-0.1096f,0f,-0.2186f,-0.1218f,0.0159f,-0.2188f,-0.1017f,0.0069f,-0.2187f,-0.0784f,-0.0146f,-0.2185f,-0.0805f,-0.0188f,-0.2185f,-0.105f});
  }
}
protected class MFVec2f571 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8857f,0.572f,0.9344f,0.572f,0.9377f,0.5719f,0.8909f,0.5718f,0.8588f,0.5719f,0.8849f,0.5578f,0.8418f,0.558f,0.9588f,0.5579f,0.9536f,0.5581f,0.8765f,0.5581f,0.885f,0.5257f,0.8424f,0.5258f,0.9582f,0.5328f,0.9531f,0.533f,0.8768f,0.526f,0.8957f,0.4625f,0.8485f,0.4627f,0.9546f,0.4626f,0.9498f,0.4628f,0.8879f,0.4628f,0.8953f,0.4552f,0.8684f,0.4551f,0.9006f,0.455f,0.9378f,0.4551f,0.9345f,0.4552f});
  }
}
protected class MFFloat572 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat573 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32574 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,12,-1,12,11,0,-1,1,2,13,-1,13,12,1,-1,2,17,10,-1,10,13,2,-1,3,4,8,-1,8,16,3,-1,5,19,21,-1,21,20,5,-1,6,14,15,-1,15,18,6,-1,6,7,9,-1,9,14,6,-1,7,0,11,-1,11,9,7,-1,15,19,5,-1,5,18,15,-1,10,17,3,-1,3,16,10,-1,4,20,21,-1,21,8,4,-1,0,22,1,-1,1,22,2,-1,2,22,17,-1,17,22,3,-1,3,22,4,-1,4,22,20,-1,20,22,5,-1,5,22,18,-1,18,22,6,-1,6,22,7,-1,7,22,0,-1,16,23,24,-1,24,10,16,-1,10,24,25,-1,25,13,10,-1,13,25,26,-1,26,12,13,-1,12,26,27,-1,27,11,12,-1,11,27,28,-1,28,9,11,-1,9,28,29,-1,29,14,9,-1,14,29,30,-1,30,15,14,-1,15,30,31,-1,31,19,15,-1,19,31,32,-1,32,21,19,-1,21,32,33,-1,33,8,21,-1,8,33,23,-1,23,16,8,-1,23,34,24,-1,24,34,25,-1,25,34,26,-1,26,34,27,-1,27,34,28,-1,28,34,29,-1,29,34,30,-1,30,34,31,-1,31,34,32,-1,32,34,33,-1,33,34,23,-1});
  }
}
protected class MFInt32575 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,0,3,2,-1,1,5,4,-1,4,0,1,-1,5,6,7,-1,7,4,5,-1,10,9,8,-1,8,11,10,-1,12,15,38,-1,38,37,12,-1,17,16,19,-1,19,18,17,-1,17,21,20,-1,20,16,17,-1,21,35,36,-1,36,20,21,-1,19,15,12,-1,12,18,19,-1,7,6,10,-1,10,11,7,-1,9,13,14,-1,14,8,9,-1,2,22,1,-1,1,22,5,-1,5,22,6,-1,6,22,10,-1,10,22,9,-1,9,22,13,-1,37,39,12,-1,12,39,18,-1,18,39,17,-1,17,39,21,-1,21,39,35,-1,11,24,23,-1,23,7,11,-1,7,23,25,-1,25,4,7,-1,4,25,26,-1,26,0,4,-1,0,26,27,-1,27,3,0,-1,36,40,28,-1,28,20,36,-1,20,28,29,-1,29,16,20,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,15,19,-1,15,31,41,-1,41,38,15,-1,14,32,33,-1,33,8,14,-1,8,33,24,-1,24,11,8,-1,24,34,23,-1,23,34,25,-1,25,34,26,-1,26,34,27,-1,40,42,28,-1,28,42,29,-1,29,42,30,-1,30,42,31,-1,31,42,41,-1,32,34,33,-1,33,34,24,-1});
  }
}
protected class MFVec3f576 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0014f,-0.0061f,-0.1246f,0.0113f,-0.0064f,-0.1197f,0.0151f,-0.0062f,-0.1066f,0.0121f,-0.0058f,-0.0857f,0.0065f,-0.0059f,-0.0771f,-0.0136f,-0.0062f,-0.0854f,-0.0153f,-0.0065f,-0.1068f,-0.0101f,-0.0066f,-0.1194f,0.0083f,-0.0263f,-0.0719f,-0.0107f,-0.0277f,-0.1242f,0.0145f,-0.0243f,-0.0945f,0.0009f,-0.0273f,-0.1308f,0.0128f,-0.0277f,-0.1242f,0.0152f,-0.0239f,-0.1093f,-0.0143f,-0.0239f,-0.1092f,-0.0145f,-0.0243f,-0.0943f,0.0119f,-0.0268f,-0.0826f,0.0149f,-0.0063f,-0.0967f,-0.0153f,-0.0063f,-0.0965f,-0.013f,-0.0268f,-0.0825f,-0.0069f,-0.006f,-0.0776f,-0.0074f,-0.0263f,-0.0727f,0.0012f,-0.0013f,-0.1021f,0.0089f,-0.0333f,-0.0832f,0.0114f,-0.0308f,-0.0946f,0.0121f,-0.0304f,-0.1105f,0.01f,-0.0341f,-0.125f,0.0007f,-0.0342f,-0.1286f,-0.008f,-0.0341f,-0.1251f,-0.0112f,-0.0304f,-0.1103f,-0.0114f,-0.0308f,-0.0942f,-0.0112f,-0.0333f,-0.0831f,-0.0056f,-0.0329f,-0.0749f,0.0039f,-0.0329f,-0.0744f,-0.0011f,-0.0371f,-0.1035f});
  }
}
protected class MFVec2f577 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7729f,0.0334f,0.7695f,0.0151f,0.7598f,0.0161f,0.7624f,0.0345f,0.791f,0.0281f,0.7896f,0.0131f,0.8111f,0.0113f,0.813f,0.0266f,0.8476f,0.0256f,0.8461f,0.0079f,0.8312f,0.0091f,0.8327f,0.0273f,0.9162f,0.2899f,0.8453f,0.0081f,0.8466f,0.0257f,0.9122f,0.2724f,0.9531f,0.2644f,0.9573f,0.2786f,0.936f,0.2844f,0.9315f,0.2698f,0.9706f,0.2558f,0.9766f,0.2733f,0.8032f,0.0047f,0.8134f,0.033f,0.8325f,0.0338f,0.792f,0.0345f,0.7756f,0.0396f,0.7675f,0.0404f,0.9666f,0.2503f,0.9509f,0.2584f,0.9297f,0.2636f,0.9113f,0.266f,0.8439f,0.0324f,0.8447f,0.0323f,0.8081f,0.0397f,0.986f,0.2708f,0.9803f,0.2531f,0.9032f,0.2936f,0.8989f,0.2764f,0.9452f,0.2896f,0.9743f,0.2482f,0.9004f,0.2693f,0.9343f,0.2559f});
  }
}
protected class MFFloat578 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat579 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32580 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,5,3,-1,3,0,6,-1,5,8,2,-1,2,3,5,-1,1,4,7,-1,2,8,7,-1,7,4,2,-1,14,17,16,-1,16,15,14,-1,9,13,10,-1,10,13,12,-1,12,11,10,-1,1,9,10,-1,10,4,1,-1,4,10,11,-1,11,2,4,-1,2,11,12,-1,12,3,2,-1,3,12,13,-1,13,0,3,-1,6,14,15,-1,15,5,6,-1,5,15,16,-1,16,8,5,-1,8,16,17,-1,17,7,8,-1,20,21,22,-1,22,23,24,-1,24,25,18,-1,22,24,18,-1,20,22,18,-1,19,20,18,-1,6,0,19,-1,19,18,6,-1,0,13,20,-1,20,19,0,-1,13,9,21,-1,21,20,13,-1,9,1,22,-1,22,21,9,-1,1,7,23,-1,23,22,1,-1,7,17,24,-1,24,23,7,-1,17,14,25,-1,25,24,17,-1,14,6,18,-1,18,25,14,-1});
  }
}
protected class MFInt32581 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,3,5,4,-1,4,2,3,-1,7,8,6,-1,18,19,6,-1,6,8,18,-1,21,12,23,-1,23,22,21,-1,9,10,15,-1,15,10,17,-1,17,16,15,-1,7,20,24,-1,24,8,7,-1,8,24,25,-1,25,18,8,-1,4,16,17,-1,17,2,4,-1,2,17,10,-1,10,1,2,-1,0,11,13,-1,13,3,0,-1,3,13,14,-1,14,5,3,-1,19,23,12,-1,12,6,19,-1,28,29,30,-1,30,31,32,-1,32,33,26,-1,30,32,26,-1,28,30,26,-1,27,28,26,-1,0,1,27,-1,27,26,0,-1,1,10,28,-1,28,27,1,-1,10,9,29,-1,29,28,10,-1,20,7,30,-1,30,29,20,-1,7,6,31,-1,31,30,7,-1,6,12,32,-1,32,31,6,-1,12,21,33,-1,33,32,12,-1,11,0,26,-1,26,33,11,-1});
  }
}
protected class MFVec3f582 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0157f,-0.0261f,-0.1041f,-0.0146f,-0.0261f,-0.1041f,-0.0092f,-0.0198f,-0.0882f,0.0099f,-0.0198f,-0.0866f,-0.0116f,-0.0222f,-0.0935f,0.0089f,-0.0083f,-0.0962f,0.0126f,-0.0087f,-0.1069f,-0.0124f,-0.0087f,-0.1069f,-0.0067f,-0.0083f,-0.097f,-0.0111f,-0.03f,-0.1029f,-0.0118f,-0.0296f,-0.0965f,-0.008f,-0.0252f,-0.0884f,0.0079f,-0.0234f,-0.0869f,0.0126f,-0.0303f,-0.1034f,0.0094f,-0.0018f,-0.1081f,0.0045f,-0.0015f,-0.0995f,-0.0048f,-0.0015f,-0.1f,-0.0104f,-0.0019f,-0.108f,0.0113f,-0.0094f,-0.1086f,0.0143f,-0.0261f,-0.1059f,0.0119f,-0.0293f,-0.1054f,-0.0105f,-0.029f,-0.1049f,-0.0132f,-0.026f,-0.1059f,-0.011f,-0.0092f,-0.1086f,-0.0093f,-0.0035f,-0.1096f,0.0086f,-0.0034f,-0.1096f});
  }
}
protected class MFVec2f583 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8327f,0.0273f,0.8381f,0.0441f,0.8625f,0.0344f,0.8476f,0.0256f,0.8625f,0.0359f,0.8466f,0.0257f,0.9122f,0.2724f,0.904f,0.2568f,0.8948f,0.2599f,0.8401f,0.0478f,0.8395f,0.0482f,0.8319f,0.0206f,0.9141f,0.2788f,0.844f,0.0192f,0.8432f,0.0193f,0.8491f,0.0466f,0.8611f,0.0409f,0.8611f,0.0397f,0.8814f,0.2691f,0.8989f,0.2764f,0.9014f,0.2535f,0.9142f,0.2789f,0.9026f,0.2823f,0.9033f,0.2821f,0.8928f,0.2563f,0.8819f,0.264f,0.8327f,0.0273f,0.8381f,0.0441f,0.8395f,0.0482f,0.8401f,0.0478f,0.904f,0.2568f,0.9122f,0.2724f,0.9141f,0.2788f,0.9142f,0.2789f});
  }
}
protected class MFFloat584 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat585 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32586 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,9,-1,9,8,1,-1,8,10,0,-1,0,1,8,-1,2,3,6,-1,6,9,2,-1,0,10,7,-1,7,4,0,-1,5,6,3,-1,22,21,25,-1,22,25,24,-1,23,22,24,-1,19,18,17,-1,17,20,19,-1,13,12,11,-1,11,14,13,-1,14,11,16,-1,16,15,14,-1,3,11,12,-1,12,5,3,-1,5,12,13,-1,13,4,5,-1,4,13,14,-1,14,0,4,-1,0,14,15,-1,15,1,0,-1,1,15,16,-1,16,2,1,-1,2,16,11,-1,11,3,2,-1,7,17,18,-1,18,4,7,-1,4,18,19,-1,19,5,4,-1,5,19,20,-1,20,6,5,-1,6,20,17,-1,17,7,6,-1,10,21,22,-1,22,7,10,-1,7,22,23,-1,23,6,7,-1,6,23,24,-1,24,9,6,-1,9,24,25,-1,25,8,9,-1,8,25,21,-1,21,10,8,-1});
  }
}
protected class MFInt32587 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,27,4,28,-1,28,26,27,-1,3,6,7,-1,7,2,3,-1,28,4,30,-1,30,29,28,-1,10,7,6,-1,15,14,13,-1,15,13,12,-1,11,15,12,-1,16,19,18,-1,18,17,16,-1,20,23,22,-1,22,21,20,-1,21,22,25,-1,25,24,21,-1,6,22,23,-1,23,10,6,-1,10,23,20,-1,20,8,10,-1,8,20,21,-1,21,5,8,-1,5,21,24,-1,24,0,5,-1,0,24,25,-1,25,3,0,-1,3,25,22,-1,22,6,3,-1,30,34,35,-1,35,29,30,-1,8,19,16,-1,16,10,8,-1,10,16,17,-1,17,7,10,-1,7,17,18,-1,18,9,7,-1,4,32,33,-1,33,30,4,-1,9,15,11,-1,11,7,9,-1,7,11,12,-1,12,2,7,-1,2,12,13,-1,13,1,2,-1,27,31,32,-1,32,4,27,-1});
  }
}
protected class MFVec3f588 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0131f,-0.0268f,-0.0935f,-0.007f,-0.0224f,-0.0874f,0.0084f,-0.0198f,-0.0851f,0.0159f,-0.0289f,-0.0983f,-0.0084f,-0.0366f,-0.1038f,0.0182f,-0.031f,-0.1025f,0.0165f,-0.0126f,-0.1108f,-0.0138f,-0.0126f,-0.1108f,-0.0084f,-0.0062f,-0.0948f,0.0107f,-0.0063f,-0.0933f,-0.0109f,-0.0087f,-0.1002f,0.0082f,-0.0351f,-0.0951f,0.0078f,-0.0366f,-0.0969f,-0.0057f,-0.0381f,-0.0991f,-0.0103f,-0.0351f,-0.0935f,-0.0049f,-0.0301f,-0.0871f,0.0045f,-0.0273f,-0.084f,-0.0097f,-0.0142f,-0.1141f,-0.0056f,-0.0372f,-0.1081f,0.0136f,-0.0322f,-0.1076f,0.013f,-0.0142f,-0.1141f,-0.009f,-0.0067f,-0.1023f,-0.0115f,-0.0089f,-0.1081f,0.0114f,-0.0094f,-0.1079f,0.0083f,-0.0047f,-0.0961f,-0.0042f,-0.0047f,-0.097f});
  }
}
protected class MFVec2f589 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8819f,0.0483f,0.8625f,0.0359f,0.8625f,0.0344f,0.8786f,0.0507f,0.8948f,0.2599f,0.867f,0.0598f,0.857f,0.0621f,0.8381f,0.0441f,0.8533f,0.0697f,0.8381f,0.0441f,0.8503f,0.0646f,0.8419f,0.0407f,0.8588f,0.0334f,0.8588f,0.0347f,0.8467f,0.0405f,0.8415f,0.0402f,0.8445f,0.0658f,0.8331f,0.0451f,0.8331f,0.0451f,0.8468f,0.0705f,0.8593f,0.0711f,0.8712f,0.0644f,0.8626f,0.068f,0.8607f,0.0696f,0.877f,0.0609f,0.8798f,0.0581f,0.8632f,0.2548f,0.8814f,0.2691f,0.8729f,0.2464f,0.8847f,0.2342f,0.904f,0.2568f,0.8853f,0.2697f,0.8962f,0.2618f,0.9014f,0.2613f,0.9088f,0.2549f,0.8909f,0.2323f});
  }
}
protected class MFFloat590 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat591 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32592 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,0,6,-1,7,13,14,-1,14,3,7,-1,5,10,17,-1,17,0,5,-1,4,9,10,-1,10,5,4,-1,3,14,9,-1,9,4,3,-1,0,17,19,-1,19,1,0,-1,1,19,13,-1,13,7,1,-1,1,2,0,-1,0,2,8,-1,8,6,0,-1,9,12,11,-1,11,10,9,-1,13,16,15,-1,15,14,13,-1,10,11,18,-1,18,17,10,-1,19,20,16,-1,16,13,19,-1,17,18,20,-1,20,19,17,-1,14,15,12,-1,12,9,14,-1,15,16,20,-1,20,12,15,-1,11,12,20,-1,20,18,11,-1,26,25,24,-1,24,23,22,-1,26,24,22,-1,21,26,22,-1,28,27,30,-1,30,29,28,-1,8,21,22,-1,22,6,8,-1,6,22,23,-1,23,5,6,-1,5,23,24,-1,24,4,5,-1,4,24,25,-1,25,3,4,-1,3,25,26,-1,26,7,3,-1,27,32,31,-1,31,30,27,-1,7,27,28,-1,28,1,7,-1,1,28,29,-1,29,2,1,-1,2,29,30,-1,30,8,2,-1,8,30,31,-1,31,21,8,-1,21,31,32,-1,32,26,21,-1,26,32,27,-1,27,7,26,-1});
  }
}
protected class MFInt32593 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,36,35,34,-1,34,33,36,-1,0,8,7,-1,7,2,0,-1,10,9,8,-1,8,0,10,-1,33,34,37,-1,37,38,33,-1,2,7,12,-1,12,11,2,-1,39,40,35,-1,35,36,39,-1,11,13,2,-1,2,13,14,-1,14,1,2,-1,9,16,15,-1,15,8,9,-1,5,18,17,-1,17,4,5,-1,8,15,19,-1,19,7,8,-1,12,20,18,-1,18,5,12,-1,7,19,20,-1,20,12,7,-1,4,17,16,-1,16,9,4,-1,17,18,20,-1,20,16,17,-1,15,16,20,-1,20,19,15,-1,26,25,24,-1,24,23,22,-1,26,24,22,-1,21,26,22,-1,28,27,30,-1,30,29,28,-1,14,21,22,-1,22,1,14,-1,1,22,23,-1,23,0,1,-1,0,23,24,-1,24,10,0,-1,10,24,25,-1,25,3,10,-1,33,41,42,-1,42,36,33,-1,27,32,31,-1,31,30,27,-1,6,27,28,-1,28,11,6,-1,11,28,29,-1,29,13,11,-1,13,29,30,-1,30,14,13,-1,14,30,31,-1,31,21,14,-1,21,31,32,-1,32,26,21,-1,42,44,43,-1,43,36,42,-1});
  }
}
protected class MFVec3f594 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0144f,-0.0121f,-0.106f,0.0048f,-0.0191f,-0.1103f,0.0162f,-0.0165f,-0.1104f,-0.0137f,-0.007f,-0.1033f,-0.0075f,-0.0026f,-0.0972f,0.0079f,-0.0001f,-0.0949f,0.0154f,-0.0091f,-0.1081f,-0.009f,-0.0168f,-0.1136f,0.0177f,-0.0112f,-0.1123f,-0.005f,-0.0224f,-0.0837f,0.0068f,-0.0176f,-0.0853f,0.0042f,-0.0275f,-0.0807f,-0.0027f,-0.0301f,-0.0818f,-0.0058f,-0.0345f,-0.0969f,-0.0117f,-0.0273f,-0.0877f,-0.0085f,-0.0306f,-0.0858f,-0.0045f,-0.0362f,-0.0933f,0.012f,-0.0265f,-0.0956f,0.0089f,-0.0339f,-0.0894f,0.0028f,-0.0337f,-0.0976f,0.0021f,-0.0368f,-0.0908f,0.0097f,-0.0062f,-0.1147f,0.0098f,-0.0048f,-0.1132f,0.0035f,0.0022f,-0.1022f,-0.005f,0.0004f,-0.1035f,-0.0084f,-0.0031f,-0.109f,-0.0056f,-0.0071f,-0.1152f,-0.0067f,-0.0174f,-0.1189f,0.0036f,-0.0199f,-0.1167f,0.0131f,-0.0175f,-0.1167f,0.0142f,-0.0142f,-0.1178f,0.0091f,-0.0105f,-0.1199f,-0.0041f,-0.0114f,-0.121f});
  }
}
protected class MFVec2f595 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8786f,0.0507f,0.857f,0.0621f,0.8601f,0.0649f,0.867f,0.0598f,0.8887f,0.0786f,0.8747f,0.0865f,0.8533f,0.0697f,0.876f,0.0783f,0.893f,0.0688f,0.8992f,0.0702f,0.8819f,0.0483f,0.8561f,0.0728f,0.8736f,0.0851f,0.8532f,0.0697f,0.8503f,0.0646f,0.8986f,0.0785f,0.897f,0.0809f,0.8914f,0.0813f,0.8802f,0.0861f,0.8841f,0.0856f,0.8821f,0.0883f,0.8487f,0.0595f,0.8509f,0.0581f,0.8683f,0.0489f,0.868f,0.0507f,0.8608f,0.0544f,0.8505f,0.0603f,0.8455f,0.0706f,0.8468f,0.073f,0.8455f,0.0707f,0.8437f,0.0676f,0.8416f,0.0639f,0.8422f,0.0648f,0.8729f,0.2464f,0.8482f,0.2317f,0.8612f,0.2211f,0.8847f,0.2342f,0.8433f,0.2381f,0.8632f,0.2548f,0.8814f,0.2316f,0.8625f,0.2222f,0.8799f,0.2506f,0.8891f,0.243f,0.8922f,0.232f,0.8964f,0.2371f});
  }
}
protected class MFFloat596 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat597 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32598 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,11,28,-1,28,29,0,-1,32,1,17,-1,17,2,32,-1,4,17,1,-1,1,3,4,-1,11,5,31,-1,31,28,11,-1,29,32,2,-1,2,0,29,-1,4,3,31,-1,31,5,4,-1,23,1,32,-1,24,31,3,-1,24,3,1,-1,1,23,24,-1,4,8,7,-1,7,6,4,-1,5,11,10,-1,10,9,5,-1,4,5,9,-1,9,8,4,-1,10,12,14,-1,14,13,10,-1,2,17,16,-1,16,15,2,-1,0,2,15,-1,15,12,0,-1,8,9,18,-1,18,7,8,-1,18,9,10,-1,10,13,18,-1,6,19,21,-1,21,20,6,-1,22,14,21,-1,21,19,22,-1,17,6,20,-1,20,16,17,-1,6,17,4,-1,11,0,12,-1,12,10,11,-1,13,14,22,-1,6,7,18,-1,18,19,6,-1,18,13,22,-1,22,19,18,-1,16,20,21,-1,21,15,16,-1,21,14,12,-1,12,15,21,-1,24,23,26,-1,26,25,24,-1,28,27,30,-1,30,29,28,-1,27,25,26,-1,26,30,27,-1,24,25,27,-1,27,31,24,-1,32,30,26,-1,26,23,32,-1,30,32,29,-1,28,31,27,-1});
  }
}
protected class MFInt32599 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,2,34,-1,34,33,3,-1,4,7,6,-1,6,5,4,-1,9,6,7,-1,7,8,9,-1,2,38,37,-1,37,34,2,-1,33,35,36,-1,36,3,33,-1,9,8,10,-1,10,11,9,-1,12,7,4,-1,13,10,8,-1,13,8,7,-1,7,12,13,-1,9,16,15,-1,15,14,9,-1,38,2,18,-1,18,39,38,-1,9,11,17,-1,17,16,9,-1,18,19,21,-1,21,20,18,-1,5,6,23,-1,23,22,5,-1,3,36,40,-1,40,19,3,-1,16,17,24,-1,24,15,16,-1,41,39,18,-1,18,20,41,-1,14,25,27,-1,27,26,14,-1,28,21,43,-1,43,42,28,-1,6,14,26,-1,26,23,6,-1,14,6,9,-1,2,3,19,-1,19,18,2,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,41,20,28,-1,28,42,41,-1,23,26,27,-1,27,22,23,-1,43,21,19,-1,19,40,43,-1,13,12,30,-1,30,29,13,-1,1,31,32,-1,32,0,1,-1,31,29,30,-1,30,32,31,-1,13,29,31,-1,31,10,13,-1,4,32,30,-1,30,12,4,-1,32,4,0,-1,1,10,31,-1});
  }
}
protected class MFVec3f600 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0077f,-0.0263f,-0.1024f,0.0088f,-0.0148f,-0.104f,0f,-0.0265f,-0.1021f,0.0039f,-0.0067f,-0.0942f,0.0019f,-0.0178f,-0.0888f,-0.0069f,-0.0175f,-0.0891f,0.0024f,-0.029f,-0.0883f,0.0013f,-0.0274f,-0.0866f,-0.0004f,-0.0245f,-0.0856f,-0.0068f,-0.0251f,-0.0852f,-0.0113f,-0.0262f,-0.0895f,-0.0122f,-0.0204f,-0.0937f,-0.0076f,-0.0319f,-0.0975f,-0.0097f,-0.0296f,-0.0896f,-0.0077f,-0.0323f,-0.0937f,-0.0011f,-0.0324f,-0.0966f,0.0035f,-0.0299f,-0.0932f,0.0063f,-0.0237f,-0.0974f,-0.0049f,-0.0299f,-0.0863f,-0.0033f,-0.0321f,-0.0886f,0.0032f,-0.0298f,-0.0903f,-0.0022f,-0.0333f,-0.0916f,-0.0086f,-0.0313f,-0.0915f,0.0103f,-0.0077f,-0.1095f,0.0052f,0.0012f,-0.0991f,-0.0007f,0.0016f,-0.1025f,0.0049f,-0.0071f,-0.1123f,-0.01f,-0.0005f,-0.1054f,-0.0133f,-0.0085f,-0.1016f,-0.0074f,-0.0157f,-0.1108f,-0.0045f,-0.0093f,-0.1152f,-0.0066f,-0.0036f,-0.0976f,0.0012f,-0.0149f,-0.1115f});
  }
}
protected class MFVec2f601 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8747f,0.0865f,0.8887f,0.0786f,0.8299f,0.2203f,0.8424f,0.2111f,0.8736f,0.0851f,0.8939f,0.0989f,0.8978f,0.0975f,0.8834f,0.0852f,0.8992f,0.0766f,0.9092f,0.0888f,0.8992f,0.0702f,0.9115f,0.0859f,0.876f,0.0783f,0.893f,0.0688f,0.9109f,0.102f,0.9135f,0.0996f,0.9144f,0.0973f,0.9172f,0.0962f,0.8241f,0.2146f,0.8338f,0.2074f,0.8247f,0.2116f,0.8291f,0.2083f,0.9028f,0.1054f,0.9046f,0.1032f,0.9153f,0.1012f,0.9125f,0.1038f,0.9081f,0.1033f,0.9082f,0.1057f,0.8266f,0.2097f,0.8885f,0.0681f,0.8723f,0.0776f,0.8843f,0.0701f,0.8696f,0.0781f,0.8612f,0.2211f,0.8482f,0.2317f,0.8625f,0.2222f,0.8417f,0.2109f,0.8433f,0.2381f,0.8245f,0.2237f,0.8192f,0.2167f,0.8322f,0.2071f,0.8195f,0.2131f,0.8224f,0.2103f,0.8256f,0.2083f});
  }
}
protected class MFFloat602 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat603 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32604 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,12,1,-1,1,2,14,-1,0,13,15,-1,15,3,0,-1,11,10,9,-1,9,8,11,-1,4,5,17,-1,17,16,4,-1,18,6,7,-1,7,19,18,-1,0,4,16,-1,16,13,0,-1,12,17,5,-1,5,1,12,-1,1,5,4,-1,4,0,1,-1,2,6,18,-1,18,14,2,-1,15,19,7,-1,7,3,15,-1,3,7,6,-1,6,2,3,-1,3,8,9,-1,9,0,3,-1,0,9,10,-1,10,1,0,-1,1,10,11,-1,11,2,1,-1,2,11,8,-1,8,3,2,-1,22,23,24,-1,24,25,26,-1,26,27,20,-1,24,26,20,-1,22,24,20,-1,21,22,20,-1,12,14,21,-1,21,20,12,-1,14,18,22,-1,22,21,14,-1,18,19,23,-1,23,22,18,-1,19,15,24,-1,24,23,19,-1,15,13,25,-1,25,24,15,-1,13,16,26,-1,26,25,13,-1,16,17,27,-1,27,26,16,-1,17,12,20,-1,20,27,17,-1});
  }
}
protected class MFInt32605 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {21,19,1,-1,1,0,21,-1,12,20,22,-1,22,13,12,-1,5,4,7,-1,7,6,5,-1,8,9,25,-1,25,23,8,-1,26,17,18,-1,18,28,26,-1,12,16,24,-1,24,20,12,-1,19,25,9,-1,9,1,19,-1,1,9,8,-1,8,2,1,-1,0,10,27,-1,27,21,0,-1,22,28,18,-1,18,13,22,-1,3,11,10,-1,10,0,3,-1,13,14,15,-1,15,12,13,-1,2,7,4,-1,4,1,2,-1,1,4,5,-1,5,0,1,-1,0,5,6,-1,6,3,0,-1,31,32,33,-1,33,34,35,-1,35,36,29,-1,33,35,29,-1,31,33,29,-1,30,31,29,-1,19,21,30,-1,30,29,19,-1,21,27,31,-1,31,30,21,-1,26,28,32,-1,32,31,26,-1,28,22,33,-1,33,32,28,-1,22,20,34,-1,34,33,22,-1,20,24,35,-1,35,34,20,-1,23,25,36,-1,36,35,23,-1,25,19,29,-1,29,36,25,-1});
  }
}
protected class MFVec3f606 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0145f,-0.0297f,-0.1071f,0.0174f,-0.0297f,-0.1071f,0.0152f,-0.0071f,-0.108f,-0.0138f,-0.0071f,-0.1078f,-0.0119f,-0.0334f,-0.107f,0.014f,-0.0334f,-0.107f,0.0114f,-0.0002f,-0.1085f,-0.0105f,-0.0002f,-0.1083f,-0.012f,-0.0087f,-0.1096f,-0.0134f,-0.0279f,-0.1087f,0.0153f,-0.0279f,-0.1087f,0.0134f,-0.0087f,-0.1098f,0.0157f,-0.027f,-0.0932f,-0.0146f,-0.027f,-0.0932f,0.0126f,-0.0096f,-0.096f,-0.0124f,-0.0096f,-0.096f,-0.0111f,-0.031f,-0.092f,0.0126f,-0.0313f,-0.0925f,0.0094f,-0.0028f,-0.0972f,-0.0104f,-0.0028f,-0.0971f,0.0136f,-0.0255f,-0.092f,0.0109f,-0.0105f,-0.0944f,0.0082f,-0.0045f,-0.0954f,-0.0089f,-0.0045f,-0.0953f,-0.0107f,-0.0105f,-0.0943f,-0.0126f,-0.0255f,-0.092f,-0.0096f,-0.0289f,-0.0909f,0.0109f,-0.0292f,-0.0913f});
  }
}
protected class MFVec2f607 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.813f,0.0266f,0.8136f,0.0488f,0.8136f,0.0488f,0.8133f,0.0266f,0.8111f,0.0474f,0.8105f,0.0283f,0.8108f,0.0283f,0.8111f,0.0474f,0.8141f,0.0525f,0.8141f,0.0525f,0.8123f,0.0198f,0.8125f,0.0198f,0.9273f,0.2479f,0.9315f,0.2698f,0.9337f,0.2676f,0.9301f,0.2489f,0.9262f,0.2444f,0.9337f,0.2762f,0.9335f,0.2763f,0.8381f,0.0441f,0.904f,0.2568f,0.8327f,0.0273f,0.9122f,0.2724f,0.8401f,0.0478f,0.9014f,0.2535f,0.8395f,0.0482f,0.9142f,0.2789f,0.8319f,0.0206f,0.9141f,0.2788f,0.8381f,0.0441f,0.8327f,0.0273f,0.8319f,0.0206f,0.9141f,0.2788f,0.9122f,0.2724f,0.904f,0.2568f,0.9014f,0.2535f,0.8395f,0.0482f});
  }
}
protected class MFFloat608 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat609 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32610 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,8,-1,8,1,0,-1,5,7,3,-1,3,0,5,-1,10,2,4,-1,4,6,10,-1,2,1,8,-1,8,4,2,-1,14,11,6,-1,6,4,14,-1,8,3,17,-1,17,16,8,-1,9,7,12,-1,12,13,9,-1,15,4,8,-1,8,16,15,-1,15,14,4,-1,9,18,17,-1,17,3,9,-1,9,13,18,-1,25,31,30,-1,25,30,27,-1,26,25,27,-1,22,21,20,-1,20,19,22,-1,41,40,39,-1,39,38,41,-1,32,37,36,-1,33,32,36,-1,34,33,36,-1,35,34,36,-1,23,22,19,-1,19,24,23,-1,6,19,20,-1,20,10,6,-1,30,29,28,-1,28,27,30,-1,5,21,22,-1,22,7,5,-1,7,22,23,-1,23,12,7,-1,12,23,24,-1,24,11,12,-1,11,24,19,-1,19,6,11,-1,1,25,26,-1,26,0,1,-1,0,26,27,-1,27,5,0,-1,5,27,28,-1,28,21,5,-1,21,28,29,-1,29,20,21,-1,20,29,30,-1,30,10,20,-1,10,30,31,-1,31,2,10,-1,2,31,25,-1,25,1,2,-1,16,32,33,-1,33,15,16,-1,15,33,34,-1,34,14,15,-1,14,34,35,-1,35,13,14,-1,13,35,36,-1,36,18,13,-1,18,36,37,-1,37,17,18,-1,17,37,32,-1,32,16,17,-1,14,38,39,-1,39,11,14,-1,11,39,40,-1,40,12,11,-1,12,40,41,-1,41,13,12,-1,13,41,38,-1,38,14,13,-1,9,3,7,-1});
  }
}
protected class MFInt32611 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,2,1,-1,1,0,3,-1,5,4,2,-1,2,3,5,-1,44,46,8,-1,8,45,44,-1,46,42,43,-1,43,8,46,-1,47,48,45,-1,45,8,47,-1,1,2,13,-1,13,12,1,-1,16,4,15,-1,15,14,16,-1,50,8,43,-1,43,49,50,-1,50,47,8,-1,16,18,13,-1,13,2,16,-1,16,14,18,-1,23,22,21,-1,23,21,20,-1,19,23,20,-1,25,24,27,-1,27,26,25,-1,29,28,31,-1,31,30,29,-1,35,34,33,-1,36,35,33,-1,37,36,33,-1,32,37,33,-1,38,25,26,-1,26,39,38,-1,7,26,27,-1,27,6,7,-1,21,41,40,-1,40,20,21,-1,5,24,25,-1,25,4,5,-1,4,25,38,-1,38,15,4,-1,15,38,39,-1,39,11,15,-1,48,56,51,-1,51,45,48,-1,0,23,19,-1,19,3,0,-1,3,19,20,-1,20,5,3,-1,5,20,40,-1,40,24,5,-1,24,40,41,-1,41,27,24,-1,27,41,21,-1,21,6,27,-1,6,21,22,-1,22,9,6,-1,9,22,23,-1,23,0,9,-1,12,35,36,-1,36,17,12,-1,50,54,55,-1,55,47,50,-1,10,37,32,-1,32,14,10,-1,14,32,33,-1,33,18,14,-1,18,33,34,-1,34,13,18,-1,13,34,35,-1,35,12,13,-1,47,52,53,-1,53,48,47,-1,11,31,28,-1,28,15,11,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,10,14,-1,16,2,4,-1});
  }
}
protected class MFVec3f612 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0119f,-0.0572f,-0.0906f,0.0013f,-0.0571f,-0.0875f,-0.0083f,-0.0572f,-0.0906f,0.0136f,-0.0384f,-0.0899f,-0.0108f,-0.0384f,-0.0897f,0.0134f,-0.0582f,-0.1061f,-0.0122f,-0.0377f,-0.1069f,0.0159f,-0.0377f,-0.1069f,0.0018f,-0.0407f,-0.0858f,0.0193f,-0.0273f,-0.0907f,-0.009f,-0.0582f,-0.1061f,-0.0145f,-0.0103f,-0.1084f,0.0174f,-0.0103f,-0.1084f,0.0157f,-0.0077f,-0.0945f,-0.0146f,-0.0077f,-0.0945f,-0.0092f,-0.0317f,-0.0875f,0.0046f,-0.034f,-0.0842f,0.016f,-0.0313f,-0.0843f,0.0175f,-0.0261f,-0.0863f,-0.0096f,-0.0377f,-0.1096f,-0.0067f,-0.0577f,-0.1078f,0.0112f,-0.0577f,-0.1078f,0.0134f,-0.0379f,-0.1095f,0.0147f,-0.0104f,-0.1109f,-0.0125f,-0.0104f,-0.1109f,0.0013f,-0.0611f,-0.0888f,0.0087f,-0.0612f,-0.0913f,0.0101f,-0.0618f,-0.1055f,0.0102f,-0.0597f,-0.1072f,-0.0057f,-0.0597f,-0.1072f,-0.0073f,-0.0618f,-0.1055f,-0.0067f,-0.0612f,-0.0912f,0.0034f,-0.0297f,-0.0816f,-0.0067f,-0.0278f,-0.0842f,-0.0107f,-0.0072f,-0.0904f,0.0131f,-0.0072f,-0.0904f,0.0123f,-0.0241f,-0.0835f,0.012f,-0.0279f,-0.082f,-0.0116f,-0.0056f,-0.0973f,-0.0122f,-0.0074f,-0.1062f,0.0141f,-0.0074f,-0.1062f,0.0129f,-0.0056f,-0.0973f});
  }
}
protected class MFVec2f613 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8514f,0.0953f,0.8526f,0.0788f,0.846f,0.0768f,0.8466f,0.0958f,0.8195f,0.0808f,0.8225f,0.0994f,0.8225f,0.0994f,0.8195f,0.0808f,0.8903f,0.2261f,0.8467f,0.0958f,0.8381f,0.0441f,0.8136f,0.0488f,0.8561f,0.0728f,0.8532f,0.0697f,0.8381f,0.0441f,0.8136f,0.0488f,0.8436f,0.0662f,0.8533f,0.0697f,0.8503f,0.0646f,0.8461f,0.0998f,0.8248f,0.1027f,0.8248f,0.1027f,0.8462f,0.0997f,0.8498f,0.0994f,0.8184f,0.0977f,0.8157f,0.0811f,0.8157f,0.0809f,0.8184f,0.0977f,0.8165f,0.0457f,0.8341f,0.0424f,0.8341f,0.0424f,0.8165f,0.0457f,0.844f,0.0417f,0.8554f,0.0622f,0.8575f,0.0659f,0.8594f,0.0677f,0.8574f,0.0658f,0.844f,0.0417f,0.8099f,0.0493f,0.8099f,0.0493f,0.82f,0.101f,0.82f,0.101f,0.8821f,0.2087f,0.8838f,0.2252f,0.9098f,0.1997f,0.916f,0.2175f,0.8866f,0.2074f,0.904f,0.2568f,0.9273f,0.2479f,0.8814f,0.2316f,0.8847f,0.2342f,0.9197f,0.2166f,0.9083f,0.2577f,0.925f,0.2515f,0.8813f,0.2388f,0.8986f,0.2602f,0.931f,0.2468f});
  }
}
protected class MFFloat614 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat615 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32616 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,5,18,-1,18,19,4,-1,5,6,21,-1,21,18,5,-1,7,8,20,-1,20,25,7,-1,8,4,19,-1,19,20,8,-1,6,22,21,-1,1,10,8,-1,8,7,1,-1,6,5,11,-1,11,2,6,-1,5,4,0,-1,0,11,5,-1,4,8,10,-1,10,0,4,-1,1,7,9,-1,9,3,1,-1,9,6,2,-1,2,3,9,-1,9,7,23,-1,23,24,9,-1,6,9,24,-1,24,22,6,-1,23,7,25,-1,0,17,15,-1,15,11,0,-1,1,12,14,-1,14,10,1,-1,11,15,13,-1,13,2,11,-1,3,16,12,-1,12,1,3,-1,2,13,16,-1,16,3,2,-1,10,14,17,-1,17,0,10,-1,14,12,16,-1,16,17,14,-1,15,17,16,-1,16,13,15,-1,28,27,26,-1,29,28,26,-1,30,29,26,-1,18,26,27,-1,27,19,18,-1,19,27,28,-1,28,20,19,-1,20,28,29,-1,29,25,20,-1,36,35,34,-1,36,34,33,-1,33,32,31,-1,33,31,37,-1,36,33,37,-1,21,30,26,-1,26,18,21,-1,24,31,32,-1,32,22,24,-1,22,32,33,-1,33,21,22,-1,21,33,34,-1,34,30,21,-1,30,34,35,-1,35,29,30,-1,29,35,36,-1,36,25,29,-1,25,36,37,-1,37,23,25,-1,23,37,31,-1,31,24,23,-1});
  }
}
protected class MFInt32617 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,3,5,4,-1,4,2,3,-1,6,9,41,-1,41,40,6,-1,9,38,39,-1,39,41,9,-1,5,10,4,-1,11,12,9,-1,9,6,11,-1,5,3,14,-1,14,13,5,-1,3,0,15,-1,15,14,3,-1,38,9,12,-1,12,42,38,-1,11,6,44,-1,44,43,11,-1,17,5,13,-1,13,16,17,-1,44,6,46,-1,46,45,44,-1,5,17,18,-1,18,10,5,-1,46,6,40,-1,15,21,20,-1,20,14,15,-1,11,23,22,-1,22,12,11,-1,14,20,24,-1,24,13,14,-1,43,48,23,-1,23,11,43,-1,13,24,25,-1,25,16,13,-1,12,22,47,-1,47,42,12,-1,22,23,48,-1,48,47,22,-1,20,21,25,-1,25,24,20,-1,29,28,27,-1,30,29,27,-1,26,30,27,-1,2,27,28,-1,28,1,2,-1,1,28,29,-1,29,8,1,-1,8,29,30,-1,30,7,8,-1,31,37,36,-1,31,36,35,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,4,26,27,-1,27,2,4,-1,18,33,34,-1,34,10,18,-1,10,34,35,-1,35,4,10,-1,4,35,36,-1,36,26,4,-1,26,36,37,-1,37,30,26,-1,30,37,31,-1,31,7,30,-1,7,31,32,-1,32,19,7,-1,19,32,33,-1,33,18,19,-1});
  }
}
protected class MFVec3f618 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0028f,-0.0394f,-0.0948f,-0.0118f,-0.0387f,-0.109f,0.0072f,-0.0364f,-0.109f,-0.0028f,-0.0393f,-0.1114f,-0.0015f,-0.0119f,-0.0934f,0.0085f,-0.0121f,-0.0963f,0.0096f,-0.0128f,-0.1091f,-0.0107f,-0.0128f,-0.1091f,-0.0107f,-0.0121f,-0.0963f,-0.0015f,-0.016f,-0.111f,-0.0118f,-0.0388f,-0.0975f,0.0072f,-0.0365f,-0.0975f,-0.0101f,-0.0425f,-0.1083f,0.0036f,-0.0444f,-0.109f,-0.0101f,-0.0426f,-0.0983f,0.0036f,-0.0445f,-0.0976f,-0.0028f,-0.0451f,-0.109f,-0.0028f,-0.0452f,-0.0975f,0.0095f,-0.0067f,-0.096f,-0.0012f,-0.0066f,-0.0928f,-0.0107f,-0.0067f,-0.0959f,0.0109f,-0.0077f,-0.1115f,0.009f,-0.0129f,-0.1114f,-0.0107f,-0.0129f,-0.1114f,-0.0015f,-0.016f,-0.1113f,-0.0114f,-0.0077f,-0.1115f,0.0062f,-0.0008f,-0.098f,-0.0015f,-0.0005f,-0.0947f,-0.0088f,-0.0008f,-0.098f,-0.0091f,-0.0012f,-0.1109f,0.0075f,-0.0012f,-0.1109f,-0.0015f,-0.0151f,-0.1119f,0.0083f,-0.012f,-0.1121f,0.0101f,-0.0073f,-0.1121f,0.0069f,-0.0014f,-0.1125f,-0.0084f,-0.0014f,-0.1125f,-0.0105f,-0.0074f,-0.1121f,-0.0098f,-0.012f,-0.1121f});
  }
}
protected class MFVec2f619 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8511f,0.1006f,0.8514f,0.0953f,0.8466f,0.0958f,0.8466f,0.1011f,0.8225f,0.0994f,0.8283f,0.1035f,0.9023f,0.1969f,0.8225f,0.0994f,0.8467f,0.0958f,0.8857f,0.2021f,0.8231f,0.1042f,0.8931f,0.1724f,0.8782f,0.1769f,0.8338f,0.1268f,0.8493f,0.125f,0.8543f,0.1273f,0.8302f,0.1302f,0.8258f,0.1072f,0.8236f,0.1075f,0.8231f,0.1042f,0.8504f,0.1328f,0.8508f,0.1334f,0.8781f,0.1731f,0.8909f,0.1692f,0.8352f,0.1346f,0.8353f,0.1353f,0.8228f,0.0929f,0.844f,0.0896f,0.8482f,0.0889f,0.8441f,0.0896f,0.8228f,0.0929f,0.8203f,0.0995f,0.8207f,0.1038f,0.8212f,0.1068f,0.8207f,0.1037f,0.8203f,0.0995f,0.8206f,0.0933f,0.8205f,0.0933f,0.8815f,0.2034f,0.8821f,0.2087f,0.9098f,0.1997f,0.8866f,0.2074f,0.8737f,0.1777f,0.8969f,0.1707f,0.9052f,0.1925f,0.9074f,0.1918f,0.9084f,0.195f,0.876f,0.171f,0.891f,0.1665f});
  }
}
protected class MFFloat620 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat621 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32622 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1});
  }
}
protected class MFInt32623 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1});
  }
}
protected class MFVec3f624 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0021f,-0.0339f,-0.11f,-0.0097f,-0.0337f,-0.0974f,0.0064f,-0.0312f,-0.0971f,0.0085f,-0.013f,-0.0967f,0.0085f,-0.0129f,-0.1082f,-0.0098f,-0.0083f,-0.1081f,0.0093f,-0.006f,-0.1081f,-0.0098f,-0.0084f,-0.0966f,0.0093f,-0.0061f,-0.0966f,-0.0056f,-0.004f,-0.1081f,-0.0056f,-0.0041f,-0.0966f,0.0038f,-0.0043f,-0.0966f,0.0038f,-0.0042f,-0.1081f,-0.0008f,-0.0088f,-0.1105f,-0.0008f,-0.009f,-0.0939f,-0.0021f,-0.0341f,-0.0947f,0.0036f,-0.039f,-0.0977f,-0.0019f,-0.0398f,-0.0975f,-0.0097f,-0.0336f,-0.1076f,-0.0082f,-0.0374f,-0.0983f,-0.0082f,-0.0373f,-0.1067f,0.0064f,-0.031f,-0.1078f,0.0036f,-0.0389f,-0.1074f,-0.0019f,-0.0397f,-0.1074f});
  }
}
protected class MFVec2f625 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8782f,0.1769f,0.8543f,0.1273f,0.8574f,0.1518f,0.8703f,0.1535f,0.8493f,0.125f,0.8504f,0.1318f,0.8846f,0.1491f,0.8931f,0.1724f,0.8349f,0.1336f,0.8379f,0.1515f,0.8533f,0.1496f,0.8338f,0.1268f,0.8302f,0.1302f,0.8351f,0.1545f,0.849f,0.1233f,0.8336f,0.1251f,0.849f,0.123f,0.8335f,0.1249f,0.8539f,0.1573f,0.8543f,0.1579f,0.8703f,0.1496f,0.8822f,0.146f,0.8398f,0.159f,0.8399f,0.1597f,0.8737f,0.1777f,0.8664f,0.1541f,0.8969f,0.1707f,0.8878f,0.1476f,0.8796f,0.181f,0.8945f,0.1764f,0.8684f,0.1475f,0.8822f,0.1433f});
  }
}
protected class MFFloat626 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat627 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32628 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1});
  }
}
protected class MFInt32629 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1});
  }
}
protected class MFVec3f630 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0069f,-0.0118f,-0.0964f,0.0069f,-0.0117f,-0.1071f,0.0053f,-0.0199f,-0.097f,0.0053f,-0.0198f,-0.1067f,-0.0082f,-0.0192f,-0.0965f,-0.002f,-0.0197f,-0.0947f,-0.0082f,-0.0191f,-0.1071f,-0.002f,-0.0195f,-0.1091f,0.0028f,-0.0261f,-0.0975f,0.0028f,-0.026f,-0.1064f,-0.0082f,-0.0257f,-0.0976f,-0.0029f,-0.0264f,-0.0957f,-0.0082f,-0.0256f,-0.1061f,-0.0029f,-0.0262f,-0.1082f,0.0035f,-0.028f,-0.102f,-0.0074f,-0.028f,-0.102f,-0.0029f,-0.0294f,-0.102f,0.0035f,-0.0276f,-0.0995f,-0.0075f,-0.0275f,-0.104f,-0.0026f,-0.0287f,-0.0987f,0.0035f,-0.0276f,-0.1043f,-0.0075f,-0.0275f,-0.0998f,-0.0026f,-0.0288f,-0.105f,-0.0087f,-0.0085f,-0.0966f,0.0074f,-0.0059f,-0.107f,0.0075f,-0.006f,-0.0963f,0.0028f,-0.0041f,-0.0967f,0.0028f,-0.004f,-0.1066f,-0.0053f,-0.0041f,-0.0967f,-0.0087f,-0.0084f,-0.1068f,-0.0053f,-0.0039f,-0.1066f,-0.001f,-0.0089f,-0.0939f,-0.001f,-0.0087f,-0.1092f});
  }
}
protected class MFVec2f631 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8542f,0.1553f,0.8574f,0.1518f,0.8533f,0.1496f,0.8379f,0.1515f,0.8351f,0.1545f,0.8388f,0.1572f,0.8414f,0.1663f,0.8547f,0.1647f,0.8578f,0.1639f,0.8665f,0.142f,0.8703f,0.1535f,0.8804f,0.1378f,0.8846f,0.1491f,0.8382f,0.1663f,0.8495f,0.1759f,0.8523f,0.1752f,0.8544f,0.1737f,0.8566f,0.1736f,0.8658f,0.1324f,0.8753f,0.1296f,0.8677f,0.1303f,0.8725f,0.1289f,0.842f,0.1753f,0.8441f,0.175f,0.8533f,0.1759f,0.8496f,0.1769f,0.8467f,0.1759f,0.846f,0.1768f,0.87f,0.1292f,0.8525f,0.1477f,0.8382f,0.1495f,0.8525f,0.1475f,0.8381f,0.1492f,0.8664f,0.1541f,0.8878f,0.1476f,0.8639f,0.1422f,0.8827f,0.1365f,0.8634f,0.1325f,0.8774f,0.1283f,0.8662f,0.1297f,0.8697f,0.1281f,0.8732f,0.1275f,0.872f,0.1575f,0.8858f,0.1533f});
  }
}
protected class MFFloat632 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat633 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32634 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,4,-1,4,1,5,-1,7,0,3,-1,3,2,7,-1,8,11,10,-1,10,9,8,-1,12,15,14,-1,14,13,12,-1,1,8,9,-1,9,5,1,-1,5,9,10,-1,10,7,5,-1,7,10,11,-1,11,0,7,-1,0,11,8,-1,8,1,0,-1,6,12,13,-1,13,4,6,-1,4,13,14,-1,14,3,4,-1,3,14,15,-1,15,2,3,-1,2,15,12,-1,12,6,2,-1,22,21,20,-1,20,23,22,-1,18,17,16,-1,16,19,18,-1,5,16,17,-1,17,6,5,-1,6,17,18,-1,18,2,6,-1,2,18,19,-1,19,7,2,-1,7,19,16,-1,16,5,7,-1,0,20,21,-1,21,3,0,-1,3,21,22,-1,22,4,3,-1,4,22,23,-1,23,1,4,-1,1,23,20,-1,20,0,1,-1});
  }
}
protected class MFInt32635 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {24,0,26,-1,26,25,24,-1,4,7,6,-1,6,5,4,-1,8,11,10,-1,10,9,8,-1,12,32,31,-1,31,30,12,-1,25,28,29,-1,29,24,25,-1,1,9,10,-1,10,4,1,-1,4,10,11,-1,11,7,4,-1,7,11,8,-1,8,2,7,-1,0,12,30,-1,30,26,0,-1,3,13,14,-1,14,6,3,-1,6,14,15,-1,15,5,6,-1,27,32,12,-1,12,0,27,-1,17,16,19,-1,19,18,17,-1,35,20,37,-1,37,36,35,-1,24,37,20,-1,20,0,24,-1,0,20,35,-1,35,27,0,-1,5,21,22,-1,22,4,5,-1,4,22,23,-1,23,1,4,-1,7,19,16,-1,16,6,7,-1,6,16,17,-1,17,3,6,-1,26,33,34,-1,34,25,26,-1,2,18,19,-1,19,7,2,-1});
  }
}
protected class MFVec3f636 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0177f,-0.0312f,-0.1093f,-0.0148f,-0.0312f,-0.1093f,0.0154f,-0.0086f,-0.0948f,0.016f,-0.0081f,-0.1095f,-0.0135f,-0.0081f,-0.1095f,-0.0143f,-0.0311f,-0.0939f,-0.0136f,-0.0086f,-0.0946f,0.0176f,-0.0311f,-0.0939f,-0.0124f,-0.0347f,-0.1095f,-0.0121f,-0.0349f,-0.0936f,0.0143f,-0.0349f,-0.0936f,0.0143f,-0.0348f,-0.1095f,-0.0103f,-0.0016f,-0.0951f,-0.0102f,-0.0014f,-0.1081f,0.0126f,-0.0014f,-0.1081f,0.0122f,-0.0016f,-0.0952f,-0.0133f,-0.0297f,-0.0913f,-0.0119f,-0.0102f,-0.0922f,0.0137f,-0.0102f,-0.0924f,0.0157f,-0.0297f,-0.0913f,0.0157f,-0.0295f,-0.1114f,0.0143f,-0.0097f,-0.112f,-0.0117f,-0.0097f,-0.1119f,-0.0137f,-0.0295f,-0.1114f});
  }
}
protected class MFVec2f637 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9315f,0.2698f,0.8136f,0.0488f,0.7924f,0.0507f,0.7911f,0.0281f,0.8136f,0.0488f,0.813f,0.0266f,0.791f,0.0281f,0.7924f,0.0508f,0.7924f,0.0543f,0.8143f,0.0526f,0.8143f,0.0526f,0.7924f,0.0543f,0.9335f,0.2763f,0.7903f,0.0215f,0.7903f,0.0215f,0.8123f,0.0198f,0.7875f,0.03f,0.7875f,0.03f,0.7887f,0.0494f,0.7887f,0.0495f,0.9277f,0.2691f,0.8167f,0.0279f,0.8173f,0.0471f,0.8173f,0.0471f,0.9273f,0.2479f,0.9479f,0.2423f,0.9531f,0.2644f,0.9318f,0.2697f,0.9473f,0.2389f,0.926f,0.2443f,0.955f,0.2707f,0.9551f,0.2707f,0.9337f,0.2763f,0.9563f,0.262f,0.9518f,0.243f,0.928f,0.269f,0.924f,0.2502f,0.9241f,0.2502f});
  }
}
protected class MFFloat638 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat639 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32640 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,8,6,-1,6,3,0,-1,10,5,1,-1,1,7,10,-1,2,9,7,-1,7,1,2,-1,8,0,4,-1,4,11,8,-1,14,13,12,-1,12,15,14,-1,34,33,32,-1,32,35,34,-1,25,24,29,-1,29,28,25,-1,17,20,19,-1,19,18,17,-1,25,28,27,-1,27,26,25,-1,20,17,16,-1,16,21,20,-1,6,12,13,-1,13,3,6,-1,24,31,30,-1,30,29,24,-1,2,14,15,-1,15,9,2,-1,16,23,22,-1,22,21,16,-1,9,16,17,-1,17,7,9,-1,7,17,18,-1,18,10,7,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,8,11,-1,8,20,21,-1,21,6,8,-1,6,21,22,-1,22,12,6,-1,12,22,23,-1,23,15,12,-1,15,23,16,-1,16,9,15,-1,3,24,25,-1,25,0,3,-1,0,25,26,-1,26,4,0,-1,4,26,27,-1,27,5,4,-1,5,27,28,-1,28,1,5,-1,1,28,29,-1,29,2,1,-1,2,29,30,-1,30,14,2,-1,14,30,31,-1,31,13,14,-1,13,31,24,-1,24,3,13,-1,10,32,33,-1,33,5,10,-1,5,33,34,-1,34,4,5,-1,4,34,35,-1,35,11,4,-1,11,35,32,-1,32,10,11,-1});
  }
}
protected class MFInt32641 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,0,3,2,-1,39,38,37,-1,37,36,39,-1,40,41,36,-1,36,37,40,-1,1,2,11,-1,11,10,1,-1,12,15,14,-1,14,13,12,-1,43,46,45,-1,45,44,43,-1,20,23,22,-1,22,21,20,-1,48,51,50,-1,50,49,48,-1,20,21,29,-1,29,28,20,-1,27,24,31,-1,31,30,27,-1,0,14,15,-1,15,3,0,-1,23,33,32,-1,32,22,23,-1,8,12,13,-1,13,9,8,-1,31,35,34,-1,34,30,31,-1,9,31,24,-1,24,4,9,-1,36,48,49,-1,49,39,36,-1,7,25,26,-1,26,10,7,-1,10,26,27,-1,27,1,10,-1,1,27,30,-1,30,0,1,-1,0,30,34,-1,34,14,0,-1,14,34,35,-1,35,13,14,-1,13,35,31,-1,31,9,13,-1,3,23,20,-1,20,2,3,-1,2,20,28,-1,28,11,2,-1,42,52,53,-1,53,38,42,-1,38,53,47,-1,47,37,38,-1,5,21,22,-1,22,8,5,-1,8,22,32,-1,32,12,8,-1,12,32,33,-1,33,15,12,-1,15,33,23,-1,23,3,15,-1,39,45,46,-1,46,38,39,-1,6,19,16,-1,16,11,6,-1,11,16,17,-1,17,10,11,-1,10,17,18,-1,18,7,10,-1});
  }
}
protected class MFVec3f642 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0163f,-0.035f,-0.1077f,-0.0119f,-0.035f,-0.1077f,-0.0089f,-0.0562f,-0.1083f,0.0136f,-0.0562f,-0.1083f,0.0177f,-0.0086f,-0.1079f,-0.0148f,-0.0086f,-0.1079f,0.0136f,-0.0565f,-0.0901f,-0.012f,-0.0359f,-0.0909f,0.0161f,-0.0359f,-0.0909f,-0.0088f,-0.0565f,-0.0901f,-0.0143f,-0.0085f,-0.0924f,0.0176f,-0.0085f,-0.0924f,0.0118f,-0.06f,-0.0908f,0.0118f,-0.0601f,-0.1071f,-0.0069f,-0.0601f,-0.1071f,-0.0069f,-0.06f,-0.0908f,-0.0065f,-0.0558f,-0.0886f,-0.0097f,-0.0357f,-0.0874f,-0.0126f,-0.0081f,-0.089f,0.0152f,-0.0081f,-0.089f,0.0138f,-0.0359f,-0.0874f,0.0115f,-0.0559f,-0.0886f,0.0102f,-0.0581f,-0.089f,-0.0053f,-0.0581f,-0.089f,0.0113f,-0.0554f,-0.1103f,0.0138f,-0.0351f,-0.1106f,0.015f,-0.0084f,-0.1106f,-0.0127f,-0.0083f,-0.1106f,-0.0094f,-0.0349f,-0.1106f,-0.0065f,-0.0553f,-0.1103f,-0.0053f,-0.058f,-0.1096f,0.0101f,-0.058f,-0.1096f,-0.0123f,-0.0061f,-0.0954f,-0.0126f,-0.0061f,-0.1056f,0.0147f,-0.0062f,-0.1056f,0.0146f,-0.0061f,-0.0954f});
  }
}
protected class MFVec2f643 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8225f,0.0994f,0.8195f,0.0808f,0.7938f,0.0824f,0.7939f,0.1016f,0.8195f,0.0808f,0.7938f,0.0824f,0.7924f,0.0507f,0.8136f,0.0488f,0.7939f,0.1016f,0.8225f,0.0994f,0.8136f,0.0488f,0.7924f,0.0508f,0.7964f,0.1053f,0.8205f,0.103f,0.8205f,0.103f,0.7964f,0.1053f,0.796f,0.0481f,0.809f,0.0468f,0.809f,0.0469f,0.796f,0.048f,0.7888f,0.0827f,0.7888f,0.0826f,0.7886f,0.1011f,0.7887f,0.1011f,0.8243f,0.0799f,0.8186f,0.0479f,0.8186f,0.0479f,0.8243f,0.0801f,0.7878f,0.051f,0.7878f,0.0509f,0.8275f,0.0984f,0.8275f,0.0983f,0.7902f,0.1036f,0.7902f,0.1036f,0.8264f,0.1006f,0.8264f,0.1006f,0.916f,0.2175f,0.941f,0.2114f,0.9479f,0.2423f,0.9273f,0.2479f,0.9376f,0.1925f,0.9098f,0.1997f,0.9479f,0.2423f,0.9448f,0.2456f,0.9323f,0.249f,0.9323f,0.249f,0.9448f,0.2456f,0.9459f,0.2103f,0.9115f,0.2191f,0.9226f,0.2496f,0.9226f,0.2496f,0.9114f,0.219f,0.9524f,0.2413f,0.9524f,0.2414f});
  }
}
protected class MFFloat644 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat645 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32646 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,26,-1,26,21,3,-1,5,6,27,-1,27,25,5,-1,4,23,26,-1,0,14,6,-1,6,5,0,-1,4,3,17,-1,17,1,4,-1,0,5,7,-1,7,2,0,-1,7,4,1,-1,1,2,7,-1,7,5,24,-1,24,22,7,-1,4,7,22,-1,22,23,4,-1,24,5,25,-1,15,13,11,-1,11,17,15,-1,0,8,10,-1,10,14,0,-1,17,11,9,-1,9,1,17,-1,2,12,8,-1,8,0,2,-1,1,9,12,-1,12,2,1,-1,14,10,13,-1,13,15,14,-1,10,8,12,-1,12,13,10,-1,11,13,12,-1,12,9,11,-1,3,21,18,-1,14,15,16,-1,16,6,14,-1,16,15,17,-1,17,3,16,-1,16,20,19,-1,19,6,16,-1,3,18,20,-1,20,16,3,-1,19,27,6,-1,31,30,29,-1,29,28,31,-1,26,28,29,-1,29,21,26,-1,38,37,36,-1,38,36,35,-1,35,34,33,-1,35,33,32,-1,38,35,32,-1,27,30,31,-1,31,25,27,-1,44,43,42,-1,44,42,41,-1,41,40,39,-1,44,41,39,-1,44,39,45,-1,18,32,33,-1,33,20,18,-1,20,33,34,-1,34,19,20,-1,19,34,35,-1,35,27,19,-1,27,35,36,-1,36,30,27,-1,30,36,37,-1,37,29,30,-1,29,37,38,-1,38,21,29,-1,21,38,32,-1,32,18,21,-1,22,39,40,-1,40,23,22,-1,23,40,41,-1,41,26,23,-1,26,41,42,-1,42,28,26,-1,28,42,43,-1,43,31,28,-1,31,43,44,-1,44,25,31,-1,25,44,45,-1,45,24,25,-1,24,45,39,-1,39,22,24,-1});
  }
}
protected class MFInt32647 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,4,7,47,-1,47,46,4,-1,3,8,2,-1,9,10,7,-1,7,4,9,-1,3,0,12,-1,12,11,3,-1,9,4,49,-1,49,48,9,-1,14,3,11,-1,11,13,14,-1,49,4,51,-1,51,50,49,-1,3,14,15,-1,15,8,3,-1,51,4,46,-1,17,19,18,-1,18,12,17,-1,9,21,20,-1,20,10,9,-1,12,18,22,-1,22,11,12,-1,48,54,21,-1,21,9,48,-1,11,22,23,-1,23,13,11,-1,10,20,53,-1,53,52,10,-1,20,21,54,-1,54,53,20,-1,18,19,23,-1,23,22,18,-1,0,1,24,-1,10,52,55,-1,55,7,10,-1,25,17,12,-1,12,0,25,-1,55,57,56,-1,56,7,55,-1,0,24,27,-1,27,25,0,-1,56,47,7,-1,31,30,29,-1,29,28,31,-1,2,28,29,-1,29,1,2,-1,32,38,37,-1,32,37,36,-1,36,35,34,-1,36,34,33,-1,32,36,33,-1,6,30,31,-1,31,5,6,-1,39,45,44,-1,39,44,43,-1,43,42,41,-1,39,43,41,-1,39,41,40,-1,24,33,34,-1,34,27,24,-1,27,34,35,-1,35,26,27,-1,26,35,36,-1,36,6,26,-1,6,36,37,-1,37,30,6,-1,30,37,38,-1,38,29,30,-1,29,38,32,-1,32,1,29,-1,1,32,33,-1,33,24,1,-1,15,41,42,-1,42,8,15,-1,8,42,43,-1,43,2,8,-1,2,43,44,-1,44,28,2,-1,28,44,45,-1,45,31,28,-1,31,45,39,-1,39,5,31,-1,5,39,40,-1,40,16,5,-1,16,40,41,-1,41,15,16,-1});
  }
}
protected class MFVec3f648 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0117f,-0.0403f,-0.1069f,0.0073f,-0.0377f,-0.1069f,-0.0027f,-0.041f,-0.1097f,0.0091f,-0.0107f,-0.0948f,0.0091f,-0.0106f,-0.1078f,-0.0106f,-0.0106f,-0.1078f,-0.0106f,-0.0107f,-0.0948f,-0.0015f,-0.0139f,-0.1101f,-0.0101f,-0.0445f,-0.106f,0.0037f,-0.0466f,-0.1066f,-0.0101f,-0.0444f,-0.0969f,0.0037f,-0.0465f,-0.0961f,-0.0028f,-0.0474f,-0.1066f,-0.0028f,-0.0473f,-0.0959f,-0.0117f,-0.0402f,-0.0962f,-0.0027f,-0.0407f,-0.0931f,-0.0015f,-0.0139f,-0.0926f,0.0073f,-0.0375f,-0.0963f,0.0091f,-0.0108f,-0.0924f,-0.0106f,-0.0108f,-0.0924f,-0.0015f,-0.0139f,-0.0923f,0.011f,-0.0056f,-0.0925f,-0.0015f,-0.0139f,-0.1104f,0.0091f,-0.0108f,-0.1103f,-0.0106f,-0.0108f,-0.1103f,-0.0115f,-0.0053f,-0.1106f,0.011f,-0.0053f,-0.1106f,-0.0114f,-0.0056f,-0.0925f,0.0073f,0.0008f,-0.11f,0.0073f,0.0008f,-0.0935f,-0.0092f,0.0008f,-0.0935f,-0.0093f,0.0008f,-0.11f,0.0086f,-0.0097f,-0.0917f,-0.0014f,-0.0129f,-0.0916f,-0.0101f,-0.0097f,-0.0917f,-0.0108f,-0.0051f,-0.0918f,-0.0087f,0.0009f,-0.0918f,0.0069f,0.0009f,-0.0918f,0.0105f,-0.0051f,-0.0918f,-0.0014f,-0.0127f,-0.1111f,0.0082f,-0.0099f,-0.1113f,0.0099f,-0.0053f,-0.1114f,0.0066f,0.0007f,-0.1115f,-0.0084f,0.0007f,-0.1115f,-0.0104f,-0.0052f,-0.1114f,-0.0096f,-0.01f,-0.1113f});
  }
}
protected class MFVec2f649 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8168f,0.105f,0.8225f,0.0994f,0.7939f,0.1016f,0.7996f,0.1065f,0.9311f,0.1887f,0.7939f,0.1016f,0.8225f,0.0994f,0.9145f,0.1932f,0.794f,0.107f,0.9232f,0.1611f,0.908f,0.1649f,0.8025f,0.1324f,0.818f,0.1313f,0.7986f,0.1359f,0.7957f,0.11f,0.7939f,0.1101f,0.794f,0.107f,0.8228f,0.1342f,0.8186f,0.1401f,0.819f,0.1409f,0.9081f,0.1606f,0.921f,0.1574f,0.8033f,0.1412f,0.8033f,0.142f,0.8231f,0.1042f,0.8212f,0.1078f,0.8231f,0.1042f,0.8236f,0.1075f,0.7948f,0.0956f,0.8206f,0.0932f,0.8206f,0.0932f,0.7948f,0.0956f,0.8249f,0.0987f,0.8253f,0.1032f,0.8258f,0.1063f,0.8253f,0.1032f,0.8249f,0.0987f,0.823f,0.0929f,0.823f,0.0929f,0.7917f,0.1017f,0.7916f,0.1064f,0.7918f,0.1091f,0.7916f,0.1063f,0.7917f,0.1017f,0.7927f,0.0957f,0.7927f,0.0957f,0.9376f,0.1925f,0.9098f,0.1997f,0.927f,0.1595f,0.9344f,0.1846f,0.9361f,0.1842f,0.9366f,0.1872f,0.9035f,0.1654f,0.9061f,0.1582f,0.9213f,0.1544f,0.9096f,0.1911f,0.9084f,0.195f,0.9074f,0.1918f});
  }
}
protected class MFFloat650 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat651 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32652 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1});
  }
}
protected class MFInt32653 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1});
  }
}
protected class MFVec3f654 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0018f,-0.0366f,-0.1093f,-0.0095f,-0.0359f,-0.0966f,0.0066f,-0.0331f,-0.0965f,0.0085f,-0.0136f,-0.0965f,0.0085f,-0.0137f,-0.1071f,-0.0098f,-0.0085f,-0.1073f,0.0093f,-0.0059f,-0.1073f,-0.0098f,-0.0084f,-0.0966f,0.0093f,-0.0058f,-0.0967f,-0.0056f,-0.0037f,-0.1074f,-0.0056f,-0.0035f,-0.0967f,0.0038f,-0.0038f,-0.0967f,0.0038f,-0.0039f,-0.1074f,-0.0008f,-0.0092f,-0.1101f,-0.0008f,-0.009f,-0.0935f,-0.0019f,-0.0364f,-0.0939f,0.0039f,-0.042f,-0.0967f,-0.0016f,-0.0422f,-0.0965f,-0.0095f,-0.0361f,-0.1069f,-0.008f,-0.0401f,-0.0974f,-0.008f,-0.0402f,-0.1059f,0.0066f,-0.0333f,-0.1071f,0.0039f,-0.0421f,-0.1064f,-0.0016f,-0.043f,-0.1064f});
  }
}
protected class MFVec2f655 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.908f,0.1649f,0.8228f,0.1342f,0.8238f,0.1612f,0.9018f,0.1387f,0.818f,0.1313f,0.8186f,0.139f,0.9163f,0.135f,0.9232f,0.1611f,0.8031f,0.1401f,0.8044f,0.1596f,0.8199f,0.1584f,0.8025f,0.1324f,0.7986f,0.1359f,0.8014f,0.1628f,0.8179f,0.1294f,0.8023f,0.1305f,0.8179f,0.1291f,0.8023f,0.1302f,0.8199f,0.1671f,0.8202f,0.1672f,0.902f,0.1343f,0.914f,0.1313f,0.8058f,0.1681f,0.8058f,0.1689f,0.9035f,0.1654f,0.8978f,0.139f,0.927f,0.1595f,0.9196f,0.1336f,0.9092f,0.1696f,0.9243f,0.1658f,0.9003f,0.1324f,0.9142f,0.1283f});
  }
}
protected class MFFloat656 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat657 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32658 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1});
  }
}
protected class MFInt32659 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1});
  }
}
protected class MFVec3f660 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0068f,-0.0117f,-0.0961f,0.0068f,-0.0118f,-0.1068f,0.0055f,-0.0197f,-0.0962f,0.0055f,-0.0199f,-0.1062f,-0.0079f,-0.0192f,-0.0958f,-0.0018f,-0.0195f,-0.0941f,-0.0079f,-0.0194f,-0.1067f,-0.0018f,-0.0198f,-0.1086f,0.0027f,-0.0273f,-0.0967f,0.0027f,-0.0275f,-0.1057f,-0.0079f,-0.0271f,-0.0968f,-0.0026f,-0.027f,-0.0951f,-0.0079f,-0.0273f,-0.1054f,-0.0026f,-0.0273f,-0.1073f,0.0034f,-0.0288f,-0.1012f,-0.0071f,-0.0289f,-0.1012f,-0.0026f,-0.0299f,-0.1012f,0.0033f,-0.0285f,-0.0987f,-0.0072f,-0.0286f,-0.1033f,-0.0023f,-0.0293f,-0.0979f,0.0033f,-0.0286f,-0.1036f,-0.0072f,-0.0285f,-0.099f,-0.0023f,-0.0295f,-0.1043f,-0.0085f,-0.0079f,-0.0964f,0.0077f,-0.0053f,-0.1069f,0.0077f,-0.0052f,-0.0963f,0.003f,-0.0031f,-0.0967f,0.003f,-0.0032f,-0.1066f,-0.0051f,-0.003f,-0.0967f,-0.0085f,-0.0081f,-0.1066f,-0.0051f,-0.0031f,-0.1066f,-0.0008f,-0.0084f,-0.0937f,-0.0008f,-0.0086f,-0.109f});
  }
}
protected class MFVec2f661 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8204f,0.1649f,0.8238f,0.1612f,0.8199f,0.1584f,0.8044f,0.1596f,0.8014f,0.1628f,0.8049f,0.166f,0.807f,0.1802f,0.8204f,0.1792f,0.8232f,0.1783f,0.8982f,0.1238f,0.9018f,0.1387f,0.9123f,0.1202f,0.9163f,0.135f,0.8038f,0.18f,0.8141f,0.1881f,0.8169f,0.1876f,0.8192f,0.1861f,0.8213f,0.1861f,0.8983f,0.1142f,0.9079f,0.1117f,0.9004f,0.112f,0.9052f,0.1108f,0.8067f,0.1872f,0.8088f,0.1869f,0.8179f,0.1883f,0.8142f,0.1891f,0.8114f,0.188f,0.8106f,0.1889f,0.9027f,0.111f,0.8192f,0.1563f,0.8048f,0.1573f,0.8192f,0.156f,0.8048f,0.1571f,0.8978f,0.139f,0.9196f,0.1336f,0.8956f,0.1239f,0.9147f,0.119f,0.8959f,0.1141f,0.9101f,0.1105f,0.8989f,0.1113f,0.9025f,0.1098f,0.906f,0.1094f,0.9033f,0.1433f,0.9173f,0.1398f});
  }
}
protected class MFFloat662 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat663 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32664 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,7,4,-1,4,3,6,-1,7,8,9,-1,9,0,7,-1,11,5,1,-1,1,2,11,-1,5,6,3,-1,3,1,5,-1,2,10,11,-1,4,7,0,-1,17,16,15,-1,17,15,14,-1,13,17,14,-1,20,22,21,-1,27,26,25,-1,25,24,27,-1,17,13,12,-1,12,18,17,-1,23,22,20,-1,20,19,23,-1,9,12,13,-1,13,0,9,-1,0,13,14,-1,14,4,0,-1,4,14,15,-1,15,3,4,-1,3,15,16,-1,16,1,3,-1,1,16,17,-1,17,2,1,-1,2,17,18,-1,18,10,2,-1,10,18,12,-1,12,9,10,-1,11,19,20,-1,20,5,11,-1,5,20,21,-1,21,6,5,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,8,7,-1,8,23,19,-1,19,11,8,-1,8,24,25,-1,25,9,8,-1,9,25,26,-1,26,10,9,-1,10,26,27,-1,27,11,10,-1,11,27,24,-1,24,8,11,-1});
  }
}
protected class MFInt32665 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,3,6,5,-1,5,4,3,-1,7,10,9,-1,9,8,7,-1,10,28,29,-1,29,9,10,-1,8,11,7,-1,2,3,4,-1,16,15,14,-1,16,14,13,-1,12,16,13,-1,35,37,36,-1,23,22,39,-1,39,38,23,-1,16,12,25,-1,25,24,16,-1,26,19,17,-1,17,27,26,-1,5,25,12,-1,12,4,5,-1,4,12,13,-1,13,2,4,-1,2,13,14,-1,14,1,2,-1,29,32,33,-1,33,9,29,-1,9,33,34,-1,34,8,9,-1,8,34,40,-1,40,11,8,-1,11,40,41,-1,41,30,11,-1,7,43,35,-1,35,10,7,-1,10,35,36,-1,36,28,10,-1,0,18,19,-1,19,3,0,-1,3,19,26,-1,26,6,3,-1,31,42,43,-1,43,7,31,-1,6,20,21,-1,21,5,6,-1,30,39,22,-1,22,11,30,-1,11,22,23,-1,23,7,11,-1,7,23,38,-1,38,31,7,-1});
  }
}
protected class MFVec3f666 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0169f,-0.0273f,-0.1038f,-0.0104f,-0.0254f,-0.114f,-0.0138f,-0.0273f,-0.1038f,0.0016f,-0.0244f,-0.117f,0.0129f,-0.0255f,-0.1139f,-0.0099f,-0.0093f,-0.1035f,0.0017f,-0.0089f,-0.1101f,0.0137f,-0.0093f,-0.1035f,0.016f,-0.0055f,-0.0885f,0.0177f,-0.0286f,-0.0884f,-0.0148f,-0.0285f,-0.0884f,-0.0135f,-0.0055f,-0.0885f,0.0142f,-0.0322f,-0.0885f,0.0135f,-0.0314f,-0.1039f,0.0101f,-0.0299f,-0.1126f,0.0014f,-0.0289f,-0.1149f,-0.0077f,-0.0298f,-0.1125f,-0.0106f,-0.0314f,-0.1039f,-0.0121f,-0.0321f,-0.0885f,-0.0094f,0.0012f,-0.0871f,-0.0069f,-0.0025f,-0.1021f,0.0016f,-0.0022f,-0.1069f,0.0106f,-0.0025f,-0.102f,0.0123f,0.0012f,-0.0871f,0.014f,-0.0075f,-0.0868f,0.0153f,-0.0267f,-0.0868f,-0.0133f,-0.0267f,-0.0868f,-0.0114f,-0.0075f,-0.0867f});
  }
}
protected class MFVec2f667 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7624f,0.0345f,0.7525f,0.0502f,0.7571f,0.0508f,0.7729f,0.0334f,0.7734f,0.0512f,0.7924f,0.0508f,0.791f,0.0281f,0.9531f,0.2644f,0.9665f,0.2386f,0.9827f,0.2362f,0.9706f,0.2558f,0.9479f,0.2423f,0.7736f,0.0553f,0.7595f,0.0549f,0.7559f,0.0544f,0.7596f,0.0549f,0.7736f,0.0553f,0.7721f,0.0268f,0.7644f,0.0276f,0.7723f,0.0268f,0.7938f,0.0298f,0.795f,0.0487f,0.9457f,0.2448f,0.9501f,0.2632f,0.7926f,0.0543f,0.7926f,0.0544f,0.7903f,0.0215f,0.7903f,0.0215f,0.9803f,0.2531f,0.9874f,0.236f,0.9479f,0.2423f,0.9532f,0.2644f,0.9832f,0.2324f,0.9795f,0.2325f,0.9656f,0.2346f,0.9721f,0.2624f,0.9795f,0.2602f,0.9719f,0.2625f,0.9502f,0.2632f,0.9457f,0.2447f,0.9471f,0.2389f,0.9471f,0.2388f,0.9551f,0.2707f,0.955f,0.2707f});
  }
}
protected class MFFloat668 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat669 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32670 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,2,0,-1,0,6,9,-1,6,0,4,-1,4,10,6,-1,7,1,3,-1,3,8,7,-1,7,11,5,-1,5,1,7,-1,12,15,14,-1,14,13,12,-1,34,33,32,-1,32,35,34,-1,17,16,21,-1,21,20,17,-1,29,24,31,-1,31,30,29,-1,17,20,19,-1,19,18,17,-1,24,29,28,-1,28,25,24,-1,9,12,13,-1,13,2,9,-1,16,23,22,-1,22,21,16,-1,3,14,15,-1,15,8,3,-1,28,27,26,-1,26,25,28,-1,2,16,17,-1,17,0,2,-1,0,17,18,-1,18,4,0,-1,4,18,19,-1,19,5,4,-1,5,19,20,-1,20,1,5,-1,1,20,21,-1,21,3,1,-1,3,21,22,-1,22,14,3,-1,14,22,23,-1,23,13,14,-1,13,23,16,-1,16,2,13,-1,6,24,25,-1,25,9,6,-1,9,25,26,-1,26,12,9,-1,12,26,27,-1,27,15,12,-1,15,27,28,-1,28,8,15,-1,8,28,29,-1,29,7,8,-1,7,29,30,-1,30,11,7,-1,11,30,31,-1,31,10,11,-1,10,31,24,-1,24,6,10,-1,4,32,33,-1,33,10,4,-1,10,33,34,-1,34,11,10,-1,11,34,35,-1,35,5,11,-1,5,35,32,-1,32,4,5,-1});
  }
}
protected class MFInt32671 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,1,2,5,-1,5,4,1,-1,38,9,40,-1,40,39,38,-1,38,42,41,-1,41,9,38,-1,12,15,14,-1,14,13,12,-1,16,45,44,-1,44,43,16,-1,20,23,22,-1,22,21,20,-1,48,51,50,-1,50,49,48,-1,20,21,29,-1,29,28,20,-1,27,24,31,-1,31,30,27,-1,0,12,13,-1,13,3,0,-1,23,33,32,-1,32,22,23,-1,8,14,15,-1,15,7,8,-1,31,35,34,-1,34,30,31,-1,3,23,20,-1,20,2,3,-1,2,20,28,-1,28,5,2,-1,37,52,53,-1,53,41,37,-1,41,53,46,-1,46,9,41,-1,9,46,47,-1,47,40,9,-1,8,22,32,-1,32,14,8,-1,14,32,33,-1,33,13,14,-1,13,33,23,-1,23,3,13,-1,1,27,30,-1,30,0,1,-1,0,30,34,-1,34,12,0,-1,12,34,35,-1,35,15,12,-1,15,35,31,-1,31,7,15,-1,7,31,24,-1,24,6,7,-1,38,48,49,-1,49,42,38,-1,11,25,26,-1,26,4,11,-1,4,26,27,-1,27,1,4,-1,5,18,19,-1,19,4,5,-1,36,45,16,-1,16,42,36,-1,42,16,43,-1,43,41,42,-1,10,17,18,-1,18,5,10,-1});
  }
}
protected class MFVec3f672 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0149f,-0.0335f,-0.1105f,-0.0114f,-0.0335f,-0.1105f,0.013f,-0.0548f,-0.1105f,-0.0088f,-0.0548f,-0.1105f,0.0169f,-0.0077f,-0.1096f,-0.0138f,-0.0077f,-0.1096f,0.0163f,-0.0353f,-0.094f,-0.0119f,-0.0353f,-0.094f,-0.0089f,-0.0565f,-0.0946f,0.0136f,-0.0565f,-0.0946f,0.0177f,-0.009f,-0.0942f,-0.0148f,-0.0089f,-0.0942f,0.0116f,-0.0605f,-0.0956f,0.011f,-0.0594f,-0.1094f,-0.0068f,-0.0595f,-0.1093f,-0.0068f,-0.0605f,-0.0956f,0.0108f,-0.0543f,-0.1125f,0.0127f,-0.0332f,-0.1132f,0.0146f,-0.0072f,-0.1119f,-0.0113f,-0.0072f,-0.1119f,-0.0093f,-0.0331f,-0.1132f,-0.0067f,-0.0543f,-0.1125f,-0.0053f,-0.0576f,-0.1122f,0.0095f,-0.0576f,-0.1122f,0.014f,-0.0355f,-0.091f,0.0116f,-0.0555f,-0.0925f,0.01f,-0.0585f,-0.0932f,-0.0053f,-0.0585f,-0.0932f,-0.0068f,-0.0555f,-0.0925f,-0.0096f,-0.0354f,-0.091f,-0.0128f,-0.009f,-0.0914f,0.0152f,-0.0091f,-0.0914f,0.014f,-0.0055f,-0.108f,0.0145f,-0.0062f,-0.0961f,-0.0121f,-0.0062f,-0.0961f,-0.0111f,-0.0055f,-0.108f});
  }
}
protected class MFVec2f673 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7939f,0.1016f,0.7938f,0.0824f,0.7694f,0.0827f,0.766f,0.1014f,0.7924f,0.0508f,0.7734f,0.0512f,0.7938f,0.0824f,0.7939f,0.1016f,0.766f,0.1015f,0.965f,0.2069f,0.7734f,0.0512f,0.7924f,0.0507f,0.7909f,0.1057f,0.7677f,0.1056f,0.7677f,0.1057f,0.7909f,0.1057f,0.9517f,0.2441f,0.7765f,0.0488f,0.7765f,0.0488f,0.789f,0.0484f,0.7643f,0.0825f,0.7643f,0.0824f,0.7614f,0.1009f,0.7614f,0.1009f,0.7991f,0.0823f,0.7971f,0.0505f,0.7971f,0.0505f,0.7991f,0.0824f,0.7688f,0.0511f,0.7688f,0.0511f,0.7994f,0.1003f,0.7994f,0.1003f,0.7625f,0.1038f,0.7625f,0.1038f,0.7972f,0.1034f,0.7972f,0.1034f,0.9479f,0.2423f,0.9665f,0.2385f,0.941f,0.2114f,0.9376f,0.1925f,0.9651f,0.1878f,0.9665f,0.2386f,0.9479f,0.2423f,0.9639f,0.2415f,0.9639f,0.2415f,0.9517f,0.244f,0.9701f,0.2063f,0.9698f,0.1875f,0.9358f,0.2124f,0.9433f,0.2434f,0.9433f,0.2434f,0.9358f,0.2123f,0.9711f,0.2379f,0.9711f,0.2379f});
  }
}
protected class MFFloat674 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat675 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32676 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,22,-1,22,23,3,-1,5,6,31,-1,31,32,5,-1,4,44,22,-1,0,14,6,-1,6,5,0,-1,4,3,17,-1,17,1,4,-1,0,5,7,-1,7,2,0,-1,7,4,1,-1,1,2,7,-1,7,5,45,-1,45,43,7,-1,4,7,43,-1,43,44,4,-1,45,5,32,-1,15,13,11,-1,11,17,15,-1,0,8,10,-1,10,14,0,-1,17,11,9,-1,9,1,17,-1,2,12,8,-1,8,0,2,-1,1,9,12,-1,12,2,1,-1,14,10,13,-1,13,15,14,-1,10,8,12,-1,12,13,10,-1,11,13,12,-1,12,9,11,-1,3,23,40,-1,14,15,16,-1,16,6,14,-1,16,15,17,-1,17,3,16,-1,16,41,42,-1,42,6,16,-1,3,40,41,-1,41,16,3,-1,42,31,6,-1,21,20,19,-1,19,18,21,-1,22,18,19,-1,19,23,22,-1,24,30,29,-1,24,29,28,-1,28,27,26,-1,28,26,25,-1,24,28,25,-1,31,20,21,-1,21,32,31,-1,33,39,38,-1,33,38,37,-1,37,36,35,-1,33,37,35,-1,33,35,34,-1,40,25,26,-1,26,41,40,-1,41,26,27,-1,27,42,41,-1,42,27,28,-1,28,31,42,-1,31,28,29,-1,29,20,31,-1,20,29,30,-1,30,19,20,-1,19,30,24,-1,24,23,19,-1,23,24,25,-1,25,40,23,-1,43,35,36,-1,36,44,43,-1,44,36,37,-1,37,22,44,-1,22,37,38,-1,38,18,22,-1,18,38,39,-1,39,21,18,-1,21,39,33,-1,33,32,21,-1,32,33,34,-1,34,45,32,-1,45,34,35,-1,35,43,45,-1});
  }
}
protected class MFInt32677 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,4,7,47,-1,47,46,4,-1,3,8,2,-1,9,10,7,-1,7,4,9,-1,3,0,12,-1,12,11,3,-1,9,4,49,-1,49,48,9,-1,14,3,11,-1,11,13,14,-1,49,4,51,-1,51,50,49,-1,3,14,15,-1,15,8,3,-1,51,4,46,-1,17,19,18,-1,18,12,17,-1,9,21,20,-1,20,10,9,-1,12,18,22,-1,22,11,12,-1,48,54,21,-1,21,9,48,-1,11,22,23,-1,23,13,11,-1,10,20,53,-1,53,52,10,-1,20,21,54,-1,54,53,20,-1,18,19,23,-1,23,22,18,-1,0,1,24,-1,10,52,55,-1,55,7,10,-1,25,17,12,-1,12,0,25,-1,55,57,56,-1,56,7,55,-1,0,24,27,-1,27,25,0,-1,56,47,7,-1,31,30,29,-1,29,28,31,-1,2,28,29,-1,29,1,2,-1,32,38,37,-1,32,37,36,-1,36,35,34,-1,36,34,33,-1,32,36,33,-1,6,30,31,-1,31,5,6,-1,39,45,44,-1,39,44,43,-1,43,42,41,-1,39,43,41,-1,39,41,40,-1,24,33,34,-1,34,27,24,-1,27,34,35,-1,35,26,27,-1,26,35,36,-1,36,6,26,-1,6,36,37,-1,37,30,6,-1,30,37,38,-1,38,29,30,-1,29,38,32,-1,32,1,29,-1,1,32,33,-1,33,24,1,-1,15,41,42,-1,42,8,15,-1,8,42,43,-1,43,2,8,-1,2,43,44,-1,44,28,2,-1,28,44,45,-1,45,31,28,-1,31,45,39,-1,39,5,31,-1,5,39,40,-1,40,16,5,-1,16,40,41,-1,41,15,16,-1});
  }
}
protected class MFVec3f678 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0117f,-0.0356f,-0.1063f,0.0073f,-0.0332f,-0.1064f,-0.0027f,-0.0362f,-0.109f,0.0091f,-0.0095f,-0.0952f,0.0091f,-0.0085f,-0.1064f,-0.0106f,-0.0085f,-0.1064f,-0.0106f,-0.0095f,-0.0952f,-0.0015f,-0.0108f,-0.1093f,-0.0101f,-0.0394f,-0.1056f,0.0037f,-0.0413f,-0.1062f,-0.0101f,-0.0392f,-0.0966f,0.0037f,-0.0411f,-0.0959f,-0.0028f,-0.0421f,-0.1062f,-0.0028f,-0.0418f,-0.0956f,-0.0117f,-0.0353f,-0.096f,-0.0027f,-0.0358f,-0.093f,-0.0015f,-0.0128f,-0.0932f,0.0073f,-0.0329f,-0.0961f,0.0073f,0.0032f,-0.1086f,0.0073f,0.0018f,-0.0935f,-0.0092f,0.0018f,-0.0935f,-0.0093f,0.0032f,-0.1086f,0.0104f,-0.0025f,-0.109f,0.011f,-0.0042f,-0.0931f,0.0105f,-0.0039f,-0.092f,0.0086f,-0.0085f,-0.0919f,-0.0014f,-0.0117f,-0.0922f,-0.0101f,-0.0085f,-0.0919f,-0.0108f,-0.0039f,-0.092f,-0.0087f,0.0018f,-0.0917f,0.0069f,0.0018f,-0.0917f,-0.0115f,-0.0042f,-0.0931f,-0.0114f,-0.0026f,-0.109f,-0.0103f,-0.0018f,-0.1101f,-0.0096f,-0.0072f,-0.1103f,-0.0014f,-0.0098f,-0.1097f,0.0082f,-0.0071f,-0.1103f,0.0099f,-0.0019f,-0.1101f,0.0066f,0.0033f,-0.1096f,-0.0084f,0.0033f,-0.1096f,0.0091f,-0.0097f,-0.0928f,-0.0015f,-0.0128f,-0.0929f,-0.0106f,-0.0097f,-0.0928f,-0.0015f,-0.0108f,-0.1095f,0.0088f,-0.0083f,-0.1093f,-0.0106f,-0.0083f,-0.1093f});
  }
}
protected class MFVec2f679 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7878f,0.1071f,0.7939f,0.1016f,0.766f,0.1014f,0.7709f,0.1068f,0.9594f,0.1833f,0.766f,0.1015f,0.7939f,0.1016f,0.9426f,0.186f,0.7648f,0.1066f,0.9545f,0.1568f,0.9398f,0.1599f,0.771f,0.1315f,0.7861f,0.131f,0.767f,0.1345f,0.7667f,0.1094f,0.7644f,0.1092f,0.7648f,0.1066f,0.7904f,0.1338f,0.786f,0.139f,0.7863f,0.1397f,0.9402f,0.1559f,0.9531f,0.1532f,0.7709f,0.1396f,0.7709f,0.1403f,0.794f,0.107f,0.7917f,0.1102f,0.794f,0.107f,0.7939f,0.1101f,0.7675f,0.0958f,0.7934f,0.0956f,0.7934f,0.0956f,0.7675f,0.0958f,0.7967f,0.1011f,0.7964f,0.1056f,0.7964f,0.1088f,0.7964f,0.1057f,0.7967f,0.1011f,0.7958f,0.0955f,0.7958f,0.0955f,0.7633f,0.1008f,0.7625f,0.1056f,0.7622f,0.1084f,0.7625f,0.1055f,0.7633f,0.1008f,0.765f,0.0957f,0.765f,0.0957f,0.9651f,0.1878f,0.9376f,0.1925f,0.9583f,0.1554f,0.963f,0.1801f,0.9654f,0.1799f,0.9654f,0.1826f,0.9354f,0.1602f,0.9385f,0.1536f,0.9536f,0.1504f,0.9383f,0.1837f,0.9366f,0.1872f,0.9361f,0.1842f});
  }
}
protected class MFFloat680 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat681 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32682 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1});
  }
}
protected class MFInt32683 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1});
  }
}
protected class MFVec3f684 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.002f,-0.035f,-0.1086f,-0.0097f,-0.0343f,-0.0966f,0.0065f,-0.0318f,-0.0965f,0.0085f,-0.0127f,-0.0967f,0.0085f,-0.0129f,-0.1068f,-0.0098f,-0.0082f,-0.1071f,0.0093f,-0.0058f,-0.1072f,-0.0098f,-0.0079f,-0.0968f,0.0093f,-0.0055f,-0.0969f,-0.0056f,-0.0037f,-0.1071f,-0.0056f,-0.0035f,-0.097f,0.0038f,-0.0038f,-0.097f,0.0038f,-0.004f,-0.1071f,-0.0008f,-0.0088f,-0.1098f,-0.0008f,-0.0084f,-0.0938f,-0.002f,-0.0347f,-0.0941f,0.0036f,-0.0398f,-0.0967f,-0.0019f,-0.0401f,-0.0965f,-0.0097f,-0.0345f,-0.1063f,-0.0082f,-0.0382f,-0.0974f,-0.0082f,-0.0383f,-0.1054f,0.0065f,-0.032f,-0.1066f,0.0037f,-0.04f,-0.1059f,-0.0018f,-0.0408f,-0.1059f});
  }
}
protected class MFVec2f685 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9398f,0.1599f,0.7904f,0.1338f,0.7888f,0.1598f,0.9363f,0.1341f,0.7861f,0.131f,0.7859f,0.138f,0.9502f,0.1313f,0.9545f,0.1568f,0.7712f,0.1385f,0.7707f,0.1575f,0.7854f,0.1571f,0.771f,0.1315f,0.767f,0.1345f,0.7676f,0.1604f,0.786f,0.1292f,0.7713f,0.1297f,0.786f,0.129f,0.7713f,0.1294f,0.7847f,0.165f,0.7849f,0.1652f,0.9369f,0.1301f,0.9483f,0.1278f,0.7712f,0.1654f,0.7712f,0.1661f,0.9354f,0.1602f,0.9325f,0.1343f,0.9583f,0.1554f,0.9533f,0.1301f,0.9406f,0.1642f,0.9551f,0.1612f,0.9355f,0.1283f,0.9488f,0.1251f});
  }
}
protected class MFFloat686 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat687 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32688 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1});
  }
}
protected class MFInt32689 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1});
  }
}
protected class MFVec3f690 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0069f,-0.0118f,-0.0972f,0.007f,-0.012f,-0.1073f,0.0053f,-0.0202f,-0.0975f,0.0053f,-0.0204f,-0.1068f,-0.0081f,-0.0195f,-0.0971f,-0.002f,-0.0199f,-0.0954f,-0.0081f,-0.0197f,-0.1072f,-0.002f,-0.0202f,-0.109f,0.0029f,-0.0269f,-0.0981f,0.0029f,-0.0271f,-0.106f,-0.0082f,-0.0265f,-0.0982f,-0.0028f,-0.0271f,-0.0964f,-0.0082f,-0.0267f,-0.1058f,-0.0028f,-0.0273f,-0.1076f,0.0036f,-0.0289f,-0.102f,-0.0073f,-0.0289f,-0.102f,-0.0028f,-0.0302f,-0.1019f,0.0035f,-0.0284f,-0.0998f,-0.0074f,-0.0284f,-0.1038f,-0.0025f,-0.0295f,-0.099f,0.0035f,-0.0285f,-0.1041f,-0.0074f,-0.0284f,-0.1001f,-0.0025f,-0.0297f,-0.1047f,-0.0087f,-0.0084f,-0.0975f,0.0075f,-0.006f,-0.1075f,0.0075f,-0.0058f,-0.0974f,0.0028f,-0.0039f,-0.0978f,0.0028f,-0.0041f,-0.1072f,-0.0053f,-0.0039f,-0.0978f,-0.0087f,-0.0086f,-0.1072f,-0.0053f,-0.0041f,-0.1072f,-0.001f,-0.0087f,-0.0949f,-0.001f,-0.009f,-0.1095f});
  }
}
protected class MFVec2f691 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7853f,0.163f,0.7888f,0.1598f,0.7854f,0.1571f,0.7707f,0.1575f,0.7676f,0.1604f,0.7706f,0.1634f,0.7714f,0.1739f,0.7841f,0.1736f,0.787f,0.1731f,0.9344f,0.121f,0.9363f,0.1341f,0.9479f,0.1182f,0.9502f,0.1313f,0.7684f,0.1736f,0.7774f,0.1846f,0.7801f,0.1842f,0.7824f,0.1828f,0.7844f,0.1829f,0.9351f,0.111f,0.9443f,0.1091f,0.9372f,0.109f,0.9418f,0.1081f,0.7705f,0.1833f,0.7725f,0.1831f,0.781f,0.1849f,0.7774f,0.1856f,0.7748f,0.1843f,0.774f,0.1852f,0.9395f,0.1081f,0.7849f,0.1552f,0.7712f,0.1555f,0.7849f,0.1549f,0.7712f,0.1553f,0.9325f,0.1343f,0.9533f,0.1301f,0.9319f,0.1209f,0.9502f,0.1172f,0.9329f,0.1108f,0.9464f,0.108f,0.9358f,0.1082f,0.9393f,0.1069f,0.9427f,0.1067f,0.9372f,0.1384f,0.9506f,0.1357f});
  }
}
protected class MFFloat692 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat693 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32694 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,3,0,-1,0,9,11,-1,5,4,1,-1,1,2,5,-1,3,5,2,-1,2,0,3,-1,9,0,8,-1,8,13,9,-1,2,1,6,-1,6,7,2,-1,6,1,10,-1,10,14,6,-1,1,4,12,-1,12,10,1,-1,0,2,7,-1,7,8,0,-1,25,20,27,-1,27,26,25,-1,18,17,16,-1,19,18,16,-1,15,19,16,-1,32,31,30,-1,32,30,29,-1,28,32,29,-1,11,15,16,-1,16,3,11,-1,3,16,17,-1,17,5,3,-1,5,17,18,-1,18,4,5,-1,4,18,19,-1,19,12,4,-1,24,23,22,-1,22,21,24,-1,20,25,24,-1,24,21,20,-1,9,20,21,-1,21,11,9,-1,11,21,22,-1,22,15,11,-1,15,22,23,-1,23,19,15,-1,19,23,24,-1,24,12,19,-1,12,24,25,-1,25,10,12,-1,10,25,26,-1,26,14,10,-1,14,26,27,-1,27,13,14,-1,13,27,20,-1,20,9,13,-1,14,28,29,-1,29,6,14,-1,6,29,30,-1,30,7,6,-1,7,30,31,-1,31,8,7,-1,8,31,32,-1,32,13,8,-1,13,32,28,-1,28,14,13,-1});
  }
}
protected class MFInt32695 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,33,35,6,-1,6,34,33,-1,3,4,5,-1,5,2,3,-1,1,2,9,-1,9,8,1,-1,34,6,11,-1,11,37,34,-1,11,6,38,-1,38,12,11,-1,6,35,39,-1,39,38,6,-1,2,5,10,-1,10,9,2,-1,40,42,41,-1,41,16,40,-1,22,21,20,-1,23,22,20,-1,19,23,20,-1,45,44,43,-1,45,43,25,-1,24,45,25,-1,0,19,20,-1,20,3,0,-1,3,20,21,-1,21,4,3,-1,4,21,22,-1,22,7,4,-1,7,22,23,-1,23,14,7,-1,29,32,31,-1,31,30,29,-1,18,15,29,-1,29,30,18,-1,1,18,30,-1,30,0,1,-1,0,30,31,-1,31,19,0,-1,19,31,32,-1,32,23,19,-1,23,32,29,-1,29,14,23,-1,14,29,15,-1,15,13,14,-1,38,40,16,-1,16,12,38,-1,12,16,41,-1,41,36,12,-1,8,17,18,-1,18,1,8,-1,12,24,25,-1,25,11,12,-1,11,25,43,-1,43,37,11,-1,10,26,27,-1,27,9,10,-1,9,27,28,-1,28,8,9,-1,36,45,24,-1,24,12,36,-1});
  }
}
protected class MFVec3f696 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0121f,-0.0337f,-0.1106f,-0.0105f,-0.0337f,-0.1106f,0.0007f,-0.0323f,-0.114f,0.0111f,-0.0544f,-0.1114f,-0.0091f,-0.0544f,-0.1114f,0.0003f,-0.0538f,-0.1143f,-0.011f,-0.0079f,-0.1069f,0.0011f,-0.0069f,-0.11f,0.0123f,-0.008f,-0.1069f,0.0144f,-0.0357f,-0.0976f,-0.012f,-0.0357f,-0.0976f,0.0124f,-0.0569f,-0.0976f,-0.0094f,-0.0569f,-0.0976f,0.0163f,-0.0099f,-0.0967f,-0.0144f,-0.0099f,-0.0967f,0.0089f,-0.0612f,-0.0992f,0.0073f,-0.0586f,-0.109f,0.0003f,-0.0582f,-0.1111f,-0.0061f,-0.0586f,-0.1091f,-0.0062f,-0.0612f,-0.0992f,0.0122f,-0.036f,-0.0945f,0.0103f,-0.0569f,-0.0955f,0.0077f,-0.0601f,-0.0961f,-0.005f,-0.0601f,-0.0961f,-0.0073f,-0.0569f,-0.0955f,-0.0098f,-0.0359f,-0.0945f,-0.0119f,-0.0102f,-0.0944f,0.014f,-0.0102f,-0.0944f,-0.01f,-0.0068f,-0.0988f,-0.0082f,-0.0059f,-0.1046f,0.0011f,-0.005f,-0.107f,0.0098f,-0.0059f,-0.1047f,0.0119f,-0.0068f,-0.0987f});
  }
}
protected class MFVec2f697 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.766f,0.1014f,0.7694f,0.0827f,0.748f,0.0813f,0.7455f,0.0995f,0.7415f,0.0989f,0.7435f,0.0798f,0.9864f,0.2045f,0.7455f,0.0995f,0.7734f,0.0512f,0.7571f,0.0508f,0.7525f,0.0502f,0.9827f,0.2362f,0.9665f,0.2386f,0.7694f,0.0827f,0.766f,0.1015f,0.774f,0.0829f,0.9619f,0.2395f,0.7782f,0.0512f,0.774f,0.083f,0.7619f,0.1052f,0.7474f,0.1039f,0.7446f,0.1034f,0.7473f,0.1038f,0.7619f,0.1052f,0.9712f,0.2404f,0.9799f,0.239f,0.7566f,0.0479f,0.7602f,0.0485f,0.7691f,0.0486f,0.771f,0.1015f,0.771f,0.1014f,0.768f,0.1042f,0.768f,0.1042f,0.9897f,0.1861f,0.991f,0.2053f,0.9856f,0.1862f,0.9665f,0.2385f,0.9874f,0.236f,0.965f,0.2069f,0.9651f,0.1878f,0.9604f,0.2075f,0.9619f,0.2395f,0.9604f,0.2074f,0.9836f,0.239f,0.98f,0.239f,0.9712f,0.2404f});
  }
}
protected class MFFloat698 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat699 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32700 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10,8,6,-1,6,11,10,-1,0,3,5,-1,5,9,0,-1,11,6,4,-1,4,1,11,-1,2,7,3,-1,3,0,2,-1,1,4,7,-1,7,2,1,-1,9,5,8,-1,8,10,9,-1,5,3,7,-1,7,8,5,-1,6,8,7,-1,7,4,6,-1,17,13,1,-1,1,2,17,-1,14,15,26,-1,26,25,14,-1,0,9,15,-1,15,14,0,-1,13,12,11,-1,11,1,13,-1,2,0,14,-1,14,17,2,-1,12,34,36,-1,9,10,16,-1,16,15,9,-1,16,10,11,-1,11,12,16,-1,16,35,37,-1,37,15,16,-1,12,36,35,-1,35,16,12,-1,37,26,15,-1,12,13,23,-1,23,34,12,-1,13,17,24,-1,24,23,13,-1,17,14,25,-1,25,24,17,-1,19,20,21,-1,19,21,22,-1,18,19,22,-1,23,24,20,-1,20,19,23,-1,24,25,21,-1,21,20,24,-1,25,26,22,-1,22,21,25,-1,29,30,31,-1,28,29,31,-1,27,28,31,-1,27,31,32,-1,27,32,33,-1,34,23,19,-1,19,18,34,-1,35,36,30,-1,30,29,35,-1,36,34,31,-1,31,30,36,-1,34,18,32,-1,32,31,34,-1,18,22,33,-1,33,32,18,-1,22,26,27,-1,27,33,22,-1,26,37,28,-1,28,27,26,-1,37,35,29,-1,29,28,37,-1});
  }
}
protected class MFInt32701 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,4,7,6,-1,6,5,4,-1,1,2,9,-1,9,8,1,-1,40,41,7,-1,7,4,40,-1,8,9,11,-1,11,10,8,-1,5,6,39,-1,39,38,5,-1,6,7,41,-1,41,39,6,-1,2,3,11,-1,11,9,2,-1,12,13,8,-1,8,10,12,-1,14,17,44,-1,44,43,14,-1,4,5,17,-1,17,14,4,-1,13,18,1,-1,1,8,13,-1,40,4,14,-1,14,42,40,-1,18,20,19,-1,5,38,45,-1,45,17,5,-1,21,0,1,-1,1,18,21,-1,45,47,46,-1,46,17,45,-1,18,19,23,-1,23,21,18,-1,46,44,17,-1,18,13,24,-1,24,20,18,-1,13,12,25,-1,25,24,13,-1,42,14,43,-1,43,48,42,-1,30,29,28,-1,30,28,27,-1,26,30,27,-1,24,25,29,-1,29,30,24,-1,25,15,28,-1,28,29,25,-1,15,16,27,-1,27,28,15,-1,36,35,34,-1,37,36,34,-1,31,37,34,-1,31,34,33,-1,31,33,32,-1,20,24,30,-1,30,26,20,-1,23,19,35,-1,35,36,23,-1,19,20,34,-1,34,35,19,-1,20,26,33,-1,33,34,20,-1,26,27,32,-1,32,33,26,-1,27,16,31,-1,31,32,27,-1,16,22,37,-1,37,31,16,-1,22,23,36,-1,36,37,22,-1});
  }
}
protected class MFVec3f702 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0106f,-0.0254f,-0.1063f,0.0071f,-0.0234f,-0.1067f,-0.0029f,-0.0258f,-0.109f,-0.0088f,-0.0285f,-0.1057f,0.0037f,-0.03f,-0.1064f,-0.0088f,-0.0286f,-0.0981f,0.0037f,-0.0301f,-0.0975f,-0.0029f,-0.0305f,-0.1064f,-0.0029f,-0.0306f,-0.098f,-0.0106f,-0.0256f,-0.0973f,-0.0024f,-0.0262f,-0.0944f,0.0071f,-0.0236f,-0.0972f,0.0086f,-0.012f,-0.0961f,0.0084f,-0.0093f,-0.1069f,-0.0102f,-0.0093f,-0.1069f,-0.0102f,-0.012f,-0.0961f,-0.0012f,-0.015f,-0.0941f,-0.0014f,-0.0087f,-0.1097f,0.0071f,-0.0007f,-0.0935f,0.0056f,0.0017f,-0.1052f,-0.0019f,0.0021f,-0.1077f,-0.009f,0.0017f,-0.1051f,-0.0091f,-0.0008f,-0.0933f,0.0094f,-0.0042f,-0.1071f,-0.0014f,-0.0036f,-0.11f,-0.0108f,-0.0042f,-0.1071f,-0.0111f,-0.0068f,-0.0933f,-0.0104f,-0.0063f,-0.0922f,-0.0097f,-0.0117f,-0.0927f,-0.001f,-0.0141f,-0.0935f,0.0079f,-0.0116f,-0.0927f,0.0097f,-0.0062f,-0.0923f,0.0066f,-0.0009f,-0.0926f,-0.0084f,-0.0009f,-0.0925f,0.0107f,-0.0068f,-0.0933f,-0.0012f,-0.015f,-0.0939f,0.0091f,-0.0125f,-0.0937f,-0.0103f,-0.0125f,-0.0937f});
  }
}
protected class MFVec2f703 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7578f,0.1276f,0.7543f,0.1247f,0.753f,0.131f,0.7531f,0.1316f,0.9854f,0.1598f,0.9725f,0.1615f,0.9734f,0.1584f,0.9844f,0.1569f,0.7413f,0.123f,0.7403f,0.1293f,0.7378f,0.1249f,0.7401f,0.1299f,0.7405f,0.104f,0.7443f,0.1047f,0.9859f,0.1809f,0.7455f,0.0995f,0.766f,0.1015f,0.9713f,0.1822f,0.7589f,0.1059f,0.7648f,0.1066f,0.766f,0.1014f,0.7622f,0.1091f,0.7648f,0.1066f,0.7644f,0.1092f,0.7455f,0.0995f,0.7415f,0.0989f,0.7664f,0.0954f,0.7667f,0.0954f,0.7485f,0.0932f,0.7449f,0.0928f,0.7484f,0.0932f,0.7683f,0.1016f,0.7686f,0.0957f,0.7683f,0.0956f,0.7679f,0.1015f,0.7671f,0.1055f,0.7666f,0.1084f,0.7674f,0.1056f,0.9687f,0.1615f,0.9723f,0.1564f,0.9888f,0.1589f,0.9852f,0.1547f,0.9898f,0.1809f,0.9856f,0.1862f,0.9651f,0.1878f,0.9675f,0.1796f,0.9654f,0.1826f,0.9654f,0.1799f,0.9897f,0.1861f});
  }
}
protected class MFFloat704 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat705 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32706 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1});
  }
}
protected class MFInt32707 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1});
  }
}
protected class MFVec3f708 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0018f,-0.0272f,-0.1084f,-0.0093f,-0.0264f,-0.0971f,0.0062f,-0.0247f,-0.097f,0.0082f,-0.012f,-0.0973f,0.0082f,-0.0118f,-0.1064f,-0.009f,-0.0083f,-0.1062f,0.0088f,-0.0063f,-0.1066f,-0.0089f,-0.0084f,-0.0972f,0.0088f,-0.0064f,-0.0971f,-0.0052f,-0.0049f,-0.1065f,-0.0052f,-0.005f,-0.097f,0.0032f,-0.0053f,-0.097f,0.0032f,-0.0052f,-0.1065f,-0.0013f,-0.0086f,-0.1089f,-0.0007f,-0.009f,-0.0943f,-0.0018f,-0.0268f,-0.0946f,0.0041f,-0.031f,-0.0972f,0.0009f,-0.0314f,-0.097f,-0.0093f,-0.0267f,-0.1062f,-0.0081f,-0.0295f,-0.0978f,-0.0077f,-0.0297f,-0.1052f,0.0063f,-0.025f,-0.1065f,0.0042f,-0.0312f,-0.1057f,0.001f,-0.0316f,-0.1057f});
  }
}
protected class MFVec2f709 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9725f,0.1615f,0.7578f,0.1276f,0.7541f,0.1444f,0.9727f,0.1441f,0.7543f,0.1247f,0.7533f,0.1302f,0.9851f,0.1424f,0.9854f,0.1598f,0.7404f,0.1285f,0.7384f,0.1404f,0.7513f,0.1418f,0.7413f,0.123f,0.7378f,0.1249f,0.7355f,0.1424f,0.7545f,0.1231f,0.7416f,0.1216f,0.7546f,0.1229f,0.7417f,0.1214f,0.7496f,0.1479f,0.7498f,0.1481f,0.9738f,0.1409f,0.9839f,0.1396f,0.738f,0.1467f,0.7381f,0.1469f,0.9687f,0.1616f,0.9694f,0.1441f,0.9888f,0.1589f,0.988f,0.1416f,0.9725f,0.165f,0.9854f,0.1633f,0.9728f,0.1395f,0.9846f,0.1375f});
  }
}
protected class MFFloat710 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat711 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32712 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1});
  }
}
protected class MFInt32713 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1});
  }
}
protected class MFVec3f714 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0069f,-0.0107f,-0.097f,0.007f,-0.011f,-0.1064f,0.0063f,-0.0193f,-0.0972f,0.0063f,-0.0196f,-0.106f,-0.0082f,-0.0197f,-0.0969f,-0.0012f,-0.0195f,-0.0952f,-0.0081f,-0.02f,-0.1064f,-0.0011f,-0.0199f,-0.1081f,0.0051f,-0.0259f,-0.0977f,0.0052f,-0.0262f,-0.1053f,-0.0084f,-0.0267f,-0.0978f,-0.0018f,-0.0266f,-0.0961f,-0.0083f,-0.0269f,-0.1051f,-0.0017f,-0.0269f,-0.1069f,0.0056f,-0.0274f,-0.1015f,-0.0069f,-0.0285f,-0.1015f,-0.0013f,-0.0291f,-0.1014f,0.0054f,-0.0271f,-0.0993f,-0.0071f,-0.0282f,-0.1033f,-0.001f,-0.0284f,-0.0986f,0.0055f,-0.0272f,-0.1035f,-0.0071f,-0.028f,-0.0996f,-0.001f,-0.0287f,-0.1041f,-0.0084f,-0.0078f,-0.0973f,0.0072f,-0.0064f,-0.1067f,0.0071f,-0.0061f,-0.0972f,0.0025f,-0.0045f,-0.0976f,0.0025f,-0.0048f,-0.1064f,-0.0054f,-0.0043f,-0.0976f,-0.0084f,-0.0081f,-0.1064f,-0.0054f,-0.0046f,-0.1064f,-0.0009f,-0.0082f,-0.0948f,-0.0009f,-0.0086f,-0.1086f});
  }
}
protected class MFVec2f715 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7505f,0.1465f,0.7541f,0.1444f,0.7513f,0.1418f,0.7384f,0.1404f,0.7355f,0.1424f,0.7377f,0.1451f,0.7372f,0.1554f,0.7483f,0.1563f,0.7507f,0.1564f,0.9726f,0.1318f,0.9727f,0.1441f,0.9847f,0.1302f,0.9851f,0.1424f,0.7347f,0.1548f,0.7409f,0.1641f,0.7434f,0.1641f,0.7455f,0.1632f,0.7469f,0.164f,0.9746f,0.124f,0.9828f,0.1229f,0.9766f,0.1225f,0.9807f,0.1219f,0.7351f,0.1625f,0.7369f,0.1626f,0.7443f,0.165f,0.7408f,0.1649f,0.7387f,0.1637f,0.7379f,0.1643f,0.9788f,0.1219f,0.7512f,0.1402f,0.7392f,0.1389f,0.7512f,0.14f,0.7393f,0.1388f,0.9694f,0.1441f,0.988f,0.1416f,0.9705f,0.1317f,0.9868f,0.1295f,0.9727f,0.1237f,0.9848f,0.1221f,0.9756f,0.1218f,0.9787f,0.1209f,0.9817f,0.1209f,0.973f,0.1475f,0.9849f,0.146f});
  }
}
protected class MFFloat716 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat717 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32718 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1});
  }
}
protected class MFInt32719 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1});
  }
}
protected class MFVec3f720 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1125f,-0.0062f,-0.1213f,-0.1143f,0.0027f,-0.1008f,-0.1061f,-0.0047f,-0.0749f,-0.1044f,-0.0495f,-0.077f,-0.1034f,-0.0456f,-0.1047f,-0.0761f,0.0002f,-0.062f,-0.0877f,0.0137f,-0.1031f,-0.0945f,-0.0646f,-0.1147f,-0.0989f,-0.0646f,-0.0697f,-0.0848f,-0.0013f,-0.1399f,0.0026f,0.0056f,-0.1061f,0.0026f,-0.0018f,-0.1231f,0.0026f,-0.0405f,-0.1077f,0.0026f,-0.0399f,-0.0878f,0.0026f,-0.0027f,-0.0835f});
  }
}
protected class MFVec2f721 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1911f,0.4797f,0.171f,0.4832f,0.1497f,0.4806f,0.1519f,0.4334f,0.1831f,0.4416f,0.1474f,0.4856f,0.1708f,0.4854f,0.1784f,0.4249f,0.1538f,0.4251f,0.1963f,0.4863f,0.19f,0.5091f,0.1847f,0.499f,0.172f,0.4382f,0.1568f,0.4457f,0.1409f,0.4926f});
  }
}
protected class MFFloat722 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat723 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32724 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,9,3,-1,7,8,1,-1,1,5,7,-1,6,2,0,-1,0,8,6,-1,0,1,8,-1,9,6,8,-1,8,7,9,-1,4,10,11,-1,11,5,4,-1,5,11,12,-1,12,7,5,-1,7,12,13,-1,13,9,7,-1,9,13,14,-1,14,3,9,-1,3,14,10,-1,10,4,3,-1,10,15,11,-1,11,15,12,-1,12,15,13,-1,13,15,14,-1,14,15,10,-1});
  }
}
protected class MFInt32725 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,8,3,-1,9,7,1,-1,1,5,9,-1,6,2,0,-1,0,7,6,-1,0,1,7,-1,12,10,11,-1,11,13,12,-1,4,14,15,-1,15,5,4,-1,5,15,16,-1,16,9,5,-1,13,16,17,-1,17,12,13,-1,8,17,18,-1,18,3,8,-1,3,18,14,-1,14,4,3,-1,14,19,15,-1,15,19,16,-1,16,19,17,-1,17,19,18,-1,18,19,14,-1});
  }
}
protected class MFVec3f726 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0437f,0.0244f,-0.104f,-0.0343f,0.006f,-0.1409f,-0.0347f,0.0074f,-0.0655f,0.0083f,0.0171f,-0.0629f,-0.0033f,0.0306f,-0.104f,-0.0004f,0.0156f,-0.1408f,-0.0189f,-0.0439f,-0.0706f,-0.0101f,-0.0477f,-0.1156f,-0.0188f,-0.0441f,-0.1156f,-0.0144f,-0.0477f,-0.0706f,0.0277f,0.0231f,-0.1035f,0.0346f,0.0106f,-0.1276f,0.0168f,-0.0446f,-0.1126f,0.0167f,-0.0445f,-0.0758f,0.0338f,0.0147f,-0.0727f,0.0356f,-0.009f,-0.0988f});
  }
}
protected class MFVec2f727 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1715f,0.4655f,0.1797f,0.4646f,0.1569f,0.4642f,0.1474f,0.4856f,0.1708f,0.4854f,0.1963f,0.4863f,0.1544f,0.4288f,0.1782f,0.4286f,0.1538f,0.4251f,0.1784f,0.4249f,0.1544f,0.4288f,0.1782f,0.4286f,0.1538f,0.4251f,0.1784f,0.4249f,0.1703f,0.4865f,0.1895f,0.487f,0.1761f,0.4271f,0.1552f,0.4287f,0.1491f,0.4835f,0.1671f,0.4618f});
  }
}
protected class MFFloat728 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat729 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32730 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,41,40,-1,40,25,26,-1,27,42,41,-1,41,26,27,-1,28,43,42,-1,42,27,28,-1,29,44,43,-1,43,28,29,-1,25,40,44,-1,44,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1});
  }
}
protected class MFInt32731 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,55,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,49,-1,36,49,48,-1,37,36,48,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,38,57,56,-1,56,39,38,-1,40,59,58,-1,58,50,40,-1,41,60,59,-1,59,40,41,-1,42,61,60,-1,60,41,42,-1,39,56,61,-1,61,42,39,-1,43,38,39,-1,39,44,43,-1,45,40,51,-1,51,52,45,-1,46,41,40,-1,40,45,46,-1,47,42,41,-1,41,46,47,-1,44,39,42,-1,42,47,44,-1,34,43,44,-1,44,33,34,-1,35,45,53,-1,53,54,35,-1,36,46,45,-1,45,35,36,-1,37,47,46,-1,46,36,37,-1,33,44,47,-1,47,37,33,-1});
  }
}
protected class MFVec3f732 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0264f,0.0312f,-0.1397f,-0.0524f,0.0309f,-0.1011f,-0.0237f,0.0312f,-0.0645f,0.02f,0.0316f,-0.0804f,0.0183f,0.0316f,-0.1269f,-0.0313f,0.0027f,-0.1539f,-0.0672f,0.0024f,-0.1006f,-0.0277f,0.0027f,-0.05f,0.0327f,0.0032f,-0.072f,0.0305f,0.0032f,-0.1361f,-0.0308f,-0.0539f,-0.1539f,-0.0667f,-0.0542f,-0.1006f,-0.0271f,-0.0538f,-0.05f,0.0332f,-0.0533f,-0.072f,0.031f,-0.0533f,-0.1361f,-0.0316f,-0.0781f,-0.1568f,-0.0696f,-0.0784f,-0.1005f,-0.0278f,-0.078f,-0.0469f,0.036f,-0.0775f,-0.0702f,0.0337f,-0.0775f,-0.1381f,-0.0201f,-0.0364f,-0.1455f,-0.0475f,-0.0366f,-0.1121f,-0.0333f,-0.0365f,-0.0652f,0.0029f,-0.0362f,-0.0697f,0.0111f,-0.0361f,-0.1193f,-0.0205f,-0.1671f,-0.1372f,-0.049f,-0.1673f,-0.1104f,-0.0342f,-0.1672f,-0.0728f,0.0034f,-0.1669f,-0.0763f,0.0119f,-0.1668f,-0.1161f,-0.0206f,-0.2583f,-0.1359f,-0.048f,-0.2585f,-0.1101f,-0.0338f,-0.2583f,-0.0739f,0.0024f,-0.2581f,-0.0773f,0.0106f,-0.2579f,-0.1156f,-0.0193f,-0.2707f,-0.1221f,-0.0354f,-0.2707f,-0.107f,-0.0271f,-0.2707f,-0.0858f,-0.0059f,-0.2705f,-0.0878f,-0.0011f,-0.2705f,-0.1102f,-0.0201f,-0.0364f,-0.1455f,-0.0475f,-0.0366f,-0.1121f,-0.0333f,-0.0365f,-0.0652f,0.0029f,-0.0362f,-0.0697f,0.0111f,-0.0361f,-0.1193f});
  }
}
protected class MFVec2f733 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2986f,0.2114f,0.2726f,0.2114f,0.3201f,0.2114f,0.3415f,0.2114f,0.2466f,0.2114f,0.2979f,0.2417f,0.2726f,0.2417f,0.3197f,0.2417f,0.3418f,0.2417f,0.2473f,0.2417f,0.2979f,0.3018f,0.2726f,0.3018f,0.3197f,0.3018f,0.3418f,0.3018f,0.2473f,0.3018f,0.2978f,0.3276f,0.2726f,0.3276f,0.3197f,0.3276f,0.3419f,0.3276f,0.2474f,0.3276f,0.2932f,0.2834f,0.2689f,0.2834f,0.316f,0.2834f,0.3322f,0.2834f,0.245f,0.2834f,0.2251f,0.2114f,0.2255f,0.2417f,0.2255f,0.2417f,0.2255f,0.3018f,0.2255f,0.3018f,0.2255f,0.3276f,0.2255f,0.3276f,0.2159f,0.2834f,0.9467f,0.4943f,0.9572f,0.4943f,0.9099f,0.4943f,0.9193f,0.4943f,0.9332f,0.4943f,0.9567f,0.4691f,0.9455f,0.4691f,0.9105f,0.4691f,0.9205f,0.4691f,0.9332f,0.4691f,0.9567f,0.4913f,0.9458f,0.4913f,0.9102f,0.4913f,0.9203f,0.4913f,0.9334f,0.4913f,0.8898f,0.4943f,0.9003f,0.4943f,0.8997f,0.4691f,0.8997f,0.4691f,0.8998f,0.4913f,0.8998f,0.4913f,0.9003f,0.4943f,0.3481f,0.2114f,0.9448f,0.4374f,0.9561f,0.4374f,0.8991f,0.4374f,0.9117f,0.4374f,0.9198f,0.4374f,0.9341f,0.4374f});
  }
}
protected class MFFloat734 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat735 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32736 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1});
  }
}
protected class MFInt32737 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,4,2,1,-1,0,4,1,-1,4,6,5,-1,5,3,4,-1,3,5,7,-1,7,2,3,-1,2,7,8,-1,8,1,2,-1,1,8,9,-1,9,0,1,-1,0,9,6,-1,6,4,0,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,16,-1,16,11,14,-1,24,23,22,-1,24,22,21,-1,20,24,21,-1,22,15,16,-1,16,21,22,-1,23,17,15,-1,15,22,23,-1,24,18,17,-1,17,23,24,-1,20,19,18,-1,18,24,20,-1,21,16,19,-1,19,20,21,-1});
  }
}
protected class MFVec3f738 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.005f,-0.0017f,-0.1278f,-0.0262f,-0.0019f,-0.1077f,-0.0141f,-0.0018f,-0.0785f,0.0145f,-0.0015f,-0.0805f,0.0201f,-0.0015f,-0.111f,-0.0034f,-0.0276f,-0.1384f,-0.0333f,-0.0278f,-0.1115f,-0.0163f,-0.0277f,-0.0653f,0.0241f,-0.0273f,-0.0685f,0.0321f,-0.0273f,-0.1167f,-0.0032f,-0.0873f,-0.138f,-0.0351f,-0.0876f,-0.1114f,-0.0178f,-0.0744f,-0.0657f,0.0254f,-0.074f,-0.0688f,0.0347f,-0.087f,-0.1165f,-0.0015f,-0.2046f,-0.1342f,-0.0248f,-0.2048f,-0.1048f,-0.0115f,-0.2047f,-0.0679f,0.0199f,-0.2044f,-0.0709f,0.0261f,-0.2044f,-0.1096f,-0.0004f,-0.2186f,-0.1218f,-0.0163f,-0.2188f,-0.1017f,-0.0072f,-0.2187f,-0.0784f,0.0142f,-0.2185f,-0.0805f,0.0185f,-0.2185f,-0.105f});
  }
}
protected class MFVec2f739 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8857f,0.572f,0.9344f,0.572f,0.9377f,0.5719f,0.8909f,0.5718f,0.8588f,0.5719f,0.8849f,0.5578f,0.8418f,0.558f,0.9588f,0.5579f,0.9536f,0.5581f,0.8765f,0.5581f,0.885f,0.5257f,0.8424f,0.5258f,0.9582f,0.5328f,0.9531f,0.533f,0.8768f,0.526f,0.8957f,0.4625f,0.8485f,0.4627f,0.9546f,0.4626f,0.9498f,0.4628f,0.8879f,0.4628f,0.8953f,0.4552f,0.8684f,0.4551f,0.9006f,0.455f,0.9378f,0.4551f,0.9345f,0.4552f});
  }
}
protected class MFFloat740 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat741 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32742 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,11,12,-1,12,1,0,-1,1,12,13,-1,13,2,1,-1,2,13,10,-1,10,17,2,-1,3,16,8,-1,8,4,3,-1,5,20,21,-1,21,19,5,-1,6,18,15,-1,15,14,6,-1,6,14,9,-1,9,7,6,-1,7,9,11,-1,11,0,7,-1,15,18,5,-1,5,19,15,-1,10,16,3,-1,3,17,10,-1,4,8,21,-1,21,20,4,-1,0,1,22,-1,1,2,22,-1,2,17,22,-1,17,3,22,-1,3,4,22,-1,4,20,22,-1,20,5,22,-1,5,18,22,-1,18,6,22,-1,6,7,22,-1,7,0,22,-1,16,10,24,-1,24,23,16,-1,10,13,25,-1,25,24,10,-1,13,12,26,-1,26,25,13,-1,12,11,27,-1,27,26,12,-1,11,9,28,-1,28,27,11,-1,9,14,29,-1,29,28,9,-1,14,15,30,-1,30,29,14,-1,15,19,31,-1,31,30,15,-1,19,21,32,-1,32,31,19,-1,21,8,33,-1,33,32,21,-1,8,16,23,-1,23,33,8,-1,23,24,34,-1,24,25,34,-1,25,26,34,-1,26,27,34,-1,27,28,34,-1,28,29,34,-1,29,30,34,-1,30,31,34,-1,31,32,34,-1,32,33,34,-1,33,23,34,-1});
  }
}
protected class MFInt32743 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,0,-1,0,1,2,-1,1,0,4,-1,4,5,1,-1,5,4,7,-1,7,6,5,-1,10,11,8,-1,8,9,10,-1,12,37,38,-1,38,15,12,-1,17,18,19,-1,19,16,17,-1,17,16,20,-1,20,21,17,-1,21,20,36,-1,36,35,21,-1,19,18,12,-1,12,15,19,-1,7,11,10,-1,10,6,7,-1,9,8,14,-1,14,13,9,-1,2,1,22,-1,1,5,22,-1,5,6,22,-1,6,10,22,-1,10,9,22,-1,9,13,22,-1,37,12,39,-1,12,18,39,-1,18,17,39,-1,17,21,39,-1,21,35,39,-1,11,7,23,-1,23,24,11,-1,7,4,25,-1,25,23,7,-1,4,0,26,-1,26,25,4,-1,0,3,27,-1,27,26,0,-1,36,20,28,-1,28,40,36,-1,20,16,29,-1,29,28,20,-1,16,19,30,-1,30,29,16,-1,19,15,31,-1,31,30,19,-1,15,38,41,-1,41,31,15,-1,14,8,33,-1,33,32,14,-1,8,11,24,-1,24,33,8,-1,24,23,34,-1,23,25,34,-1,25,26,34,-1,26,27,34,-1,40,28,42,-1,28,29,42,-1,29,30,42,-1,30,31,42,-1,31,41,42,-1,32,33,34,-1,33,24,34,-1});
  }
}
protected class MFVec3f744 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0018f,-0.0061f,-0.1246f,-0.0117f,-0.0064f,-0.1197f,-0.0155f,-0.0062f,-0.1066f,-0.0125f,-0.0058f,-0.0857f,-0.0069f,-0.0059f,-0.0771f,0.0132f,-0.0062f,-0.0854f,0.0149f,-0.0065f,-0.1068f,0.0097f,-0.0066f,-0.1194f,-0.0086f,-0.0263f,-0.0719f,0.0103f,-0.0277f,-0.1242f,-0.0149f,-0.0243f,-0.0945f,-0.0013f,-0.0273f,-0.1308f,-0.0132f,-0.0277f,-0.1242f,-0.0156f,-0.0239f,-0.1093f,0.0139f,-0.0239f,-0.1092f,0.0141f,-0.0243f,-0.0943f,-0.0123f,-0.0268f,-0.0826f,-0.0153f,-0.0063f,-0.0967f,0.0149f,-0.0063f,-0.0965f,0.0127f,-0.0268f,-0.0825f,0.0066f,-0.006f,-0.0776f,0.007f,-0.0263f,-0.0727f,-0.0015f,-0.0013f,-0.1021f,-0.0093f,-0.0333f,-0.0832f,-0.0118f,-0.0308f,-0.0946f,-0.0124f,-0.0304f,-0.1105f,-0.0103f,-0.0341f,-0.125f,-0.0011f,-0.0342f,-0.1286f,0.0076f,-0.0341f,-0.1251f,0.0109f,-0.0304f,-0.1103f,0.011f,-0.0308f,-0.0942f,0.0109f,-0.0333f,-0.0831f,0.0052f,-0.0329f,-0.0749f,-0.0043f,-0.0329f,-0.0744f,0.0007f,-0.0371f,-0.1035f});
  }
}
protected class MFVec2f745 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7729f,0.0334f,0.7695f,0.0151f,0.7598f,0.0161f,0.7624f,0.0345f,0.791f,0.0281f,0.7896f,0.0131f,0.8111f,0.0113f,0.813f,0.0266f,0.8476f,0.0256f,0.8461f,0.0079f,0.8312f,0.0091f,0.8327f,0.0273f,0.9162f,0.2899f,0.8453f,0.0081f,0.8466f,0.0257f,0.9122f,0.2724f,0.9531f,0.2644f,0.9573f,0.2786f,0.936f,0.2844f,0.9315f,0.2698f,0.9706f,0.2558f,0.9766f,0.2733f,0.8032f,0.0047f,0.8134f,0.033f,0.8325f,0.0338f,0.792f,0.0345f,0.7756f,0.0396f,0.7675f,0.0404f,0.9666f,0.2503f,0.9509f,0.2584f,0.9297f,0.2636f,0.9113f,0.266f,0.8439f,0.0324f,0.8447f,0.0323f,0.8081f,0.0397f,0.986f,0.2708f,0.9803f,0.2531f,0.9032f,0.2936f,0.8989f,0.2764f,0.9452f,0.2896f,0.9743f,0.2482f,0.9004f,0.2693f,0.9343f,0.2559f});
  }
}
protected class MFFloat746 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat747 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32748 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,0,3,-1,3,5,6,-1,5,3,2,-1,2,8,5,-1,1,7,4,-1,2,7,8,-1,7,2,4,-1,14,15,16,-1,16,17,14,-1,9,10,13,-1,10,11,12,-1,12,13,10,-1,1,4,10,-1,10,9,1,-1,4,2,11,-1,11,10,4,-1,2,3,12,-1,12,11,2,-1,3,0,13,-1,13,12,3,-1,6,5,15,-1,15,14,6,-1,5,8,16,-1,16,15,5,-1,8,7,17,-1,17,16,8,-1,18,25,24,-1,24,23,22,-1,18,24,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,6,18,19,-1,19,0,6,-1,0,19,20,-1,20,13,0,-1,13,20,21,-1,21,9,13,-1,9,21,22,-1,22,1,9,-1,1,22,23,-1,23,7,1,-1,7,23,24,-1,24,17,7,-1,17,24,25,-1,25,14,17,-1,14,25,18,-1,18,6,14,-1});
  }
}
protected class MFInt32749 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,3,2,4,-1,4,5,3,-1,7,6,8,-1,18,6,19,-1,6,18,8,-1,21,22,23,-1,23,12,21,-1,9,15,10,-1,15,16,17,-1,17,10,15,-1,7,8,24,-1,24,20,7,-1,8,18,25,-1,25,24,8,-1,4,2,17,-1,17,16,4,-1,2,1,10,-1,10,17,2,-1,0,3,13,-1,13,11,0,-1,3,5,14,-1,14,13,3,-1,19,6,12,-1,12,23,19,-1,26,33,32,-1,32,31,30,-1,26,32,30,-1,30,29,28,-1,26,30,28,-1,27,26,28,-1,0,26,27,-1,27,1,0,-1,1,27,28,-1,28,10,1,-1,10,28,29,-1,29,9,10,-1,20,29,30,-1,30,7,20,-1,7,30,31,-1,31,6,7,-1,6,31,32,-1,32,12,6,-1,12,32,33,-1,33,21,12,-1,11,33,26,-1,26,0,11,-1});
  }
}
protected class MFVec3f750 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.016f,-0.0261f,-0.1041f,0.0142f,-0.0261f,-0.1041f,0.0088f,-0.0198f,-0.0882f,-0.0103f,-0.0198f,-0.0866f,0.0113f,-0.0222f,-0.0935f,-0.0093f,-0.0083f,-0.0962f,-0.013f,-0.0087f,-0.1069f,0.012f,-0.0087f,-0.1069f,0.0064f,-0.0083f,-0.097f,0.0108f,-0.03f,-0.1029f,0.0114f,-0.0296f,-0.0965f,0.0077f,-0.0252f,-0.0884f,-0.0083f,-0.0234f,-0.0869f,-0.0129f,-0.0303f,-0.1034f,-0.0098f,-0.0018f,-0.1081f,-0.0048f,-0.0015f,-0.0995f,0.0044f,-0.0015f,-0.1f,0.01f,-0.0019f,-0.108f,-0.0117f,-0.0094f,-0.1086f,-0.0146f,-0.0261f,-0.1059f,-0.0123f,-0.0293f,-0.1054f,0.0101f,-0.029f,-0.1049f,0.0128f,-0.026f,-0.1059f,0.0107f,-0.0092f,-0.1086f,0.009f,-0.0035f,-0.1096f,-0.0089f,-0.0034f,-0.1096f});
  }
}
protected class MFVec2f751 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8327f,0.0273f,0.8381f,0.0441f,0.8625f,0.0344f,0.8476f,0.0256f,0.8625f,0.0359f,0.8466f,0.0257f,0.9122f,0.2724f,0.904f,0.2568f,0.8948f,0.2599f,0.8401f,0.0478f,0.8395f,0.0482f,0.8319f,0.0206f,0.9141f,0.2788f,0.844f,0.0192f,0.8432f,0.0193f,0.8491f,0.0466f,0.8611f,0.0409f,0.8611f,0.0397f,0.8814f,0.2691f,0.8989f,0.2764f,0.9014f,0.2535f,0.9142f,0.2789f,0.9026f,0.2823f,0.9033f,0.2821f,0.8928f,0.2563f,0.8819f,0.264f,0.8327f,0.0273f,0.8381f,0.0441f,0.8395f,0.0482f,0.8401f,0.0478f,0.904f,0.2568f,0.9122f,0.2724f,0.9141f,0.2788f,0.9142f,0.2789f});
  }
}
protected class MFFloat752 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat753 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32754 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,8,9,-1,9,2,1,-1,8,1,0,-1,0,10,8,-1,2,9,6,-1,6,3,2,-1,0,4,7,-1,7,10,0,-1,5,3,6,-1,25,21,22,-1,24,25,22,-1,23,24,22,-1,19,20,17,-1,17,18,19,-1,13,14,11,-1,11,12,13,-1,14,15,16,-1,16,11,14,-1,3,5,12,-1,12,11,3,-1,5,4,13,-1,13,12,5,-1,4,0,14,-1,14,13,4,-1,0,1,15,-1,15,14,0,-1,1,2,16,-1,16,15,1,-1,2,3,11,-1,11,16,2,-1,7,4,18,-1,18,17,7,-1,4,5,19,-1,19,18,4,-1,5,6,20,-1,20,19,5,-1,6,7,17,-1,17,20,6,-1,10,7,22,-1,22,21,10,-1,7,6,23,-1,23,22,7,-1,6,9,24,-1,24,23,6,-1,9,8,25,-1,25,24,9,-1,8,10,21,-1,21,25,8,-1});
  }
}
protected class MFInt32755 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,27,26,28,-1,28,4,27,-1,3,2,7,-1,7,6,3,-1,28,29,30,-1,30,4,28,-1,10,6,7,-1,13,14,15,-1,12,13,15,-1,11,12,15,-1,16,17,18,-1,18,19,16,-1,20,21,22,-1,22,23,20,-1,21,24,25,-1,25,22,21,-1,6,10,23,-1,23,22,6,-1,10,8,20,-1,20,23,10,-1,8,5,21,-1,21,20,8,-1,5,0,24,-1,24,21,5,-1,0,3,25,-1,25,24,0,-1,3,6,22,-1,22,25,3,-1,30,29,35,-1,35,34,30,-1,8,10,16,-1,16,19,8,-1,10,7,17,-1,17,16,10,-1,7,9,18,-1,18,17,7,-1,4,30,33,-1,33,32,4,-1,9,7,11,-1,11,15,9,-1,7,2,12,-1,12,11,7,-1,2,1,13,-1,13,12,2,-1,27,4,32,-1,32,31,27,-1});
  }
}
protected class MFVec3f756 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0128f,-0.0268f,-0.0935f,0.0066f,-0.0224f,-0.0874f,-0.0088f,-0.0198f,-0.0851f,-0.0163f,-0.0289f,-0.0983f,0.0081f,-0.0366f,-0.1038f,-0.0186f,-0.031f,-0.1025f,-0.0168f,-0.0126f,-0.1108f,0.0134f,-0.0126f,-0.1108f,0.008f,-0.0062f,-0.0948f,-0.011f,-0.0063f,-0.0933f,0.0105f,-0.0087f,-0.1002f,-0.0086f,-0.0351f,-0.0951f,-0.0081f,-0.0366f,-0.0969f,0.0053f,-0.0381f,-0.0991f,0.01f,-0.0351f,-0.0935f,0.0046f,-0.0301f,-0.0871f,-0.0048f,-0.0273f,-0.084f,0.0093f,-0.0142f,-0.1141f,0.0053f,-0.0372f,-0.1081f,-0.0139f,-0.0322f,-0.1076f,-0.0133f,-0.0142f,-0.1141f,0.0086f,-0.0067f,-0.1023f,0.0112f,-0.0089f,-0.1081f,-0.0118f,-0.0094f,-0.1079f,-0.0086f,-0.0047f,-0.0961f,0.0039f,-0.0047f,-0.097f});
  }
}
protected class MFVec2f757 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8819f,0.0483f,0.8625f,0.0359f,0.8625f,0.0344f,0.8786f,0.0507f,0.8948f,0.2599f,0.867f,0.0598f,0.857f,0.0621f,0.8381f,0.0441f,0.8533f,0.0697f,0.8381f,0.0441f,0.8503f,0.0646f,0.8419f,0.0407f,0.8588f,0.0334f,0.8588f,0.0347f,0.8467f,0.0405f,0.8415f,0.0402f,0.8445f,0.0658f,0.8331f,0.0451f,0.8331f,0.0451f,0.8468f,0.0705f,0.8593f,0.0711f,0.8712f,0.0644f,0.8626f,0.068f,0.8607f,0.0696f,0.877f,0.0609f,0.8798f,0.0581f,0.8632f,0.2548f,0.8814f,0.2691f,0.8729f,0.2464f,0.8847f,0.2342f,0.904f,0.2568f,0.8853f,0.2697f,0.8962f,0.2618f,0.9014f,0.2613f,0.9088f,0.2549f,0.8909f,0.2323f});
  }
}
protected class MFFloat758 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat759 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32760 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,0,-1,7,3,14,-1,14,13,7,-1,5,0,17,-1,17,10,5,-1,4,5,10,-1,10,9,4,-1,3,4,9,-1,9,14,3,-1,0,1,19,-1,19,17,0,-1,1,7,13,-1,13,19,1,-1,1,0,2,-1,0,6,8,-1,8,2,0,-1,9,10,11,-1,11,12,9,-1,13,14,15,-1,15,16,13,-1,10,17,18,-1,18,11,10,-1,19,13,16,-1,16,20,19,-1,17,19,20,-1,20,18,17,-1,14,9,12,-1,12,15,14,-1,15,12,20,-1,20,16,15,-1,11,18,20,-1,20,12,11,-1,22,23,24,-1,24,25,26,-1,22,24,26,-1,21,22,26,-1,28,29,30,-1,30,27,28,-1,8,6,22,-1,22,21,8,-1,6,5,23,-1,23,22,6,-1,5,4,24,-1,24,23,5,-1,4,3,25,-1,25,24,4,-1,3,7,26,-1,26,25,3,-1,27,30,31,-1,31,32,27,-1,7,1,28,-1,28,27,7,-1,1,2,29,-1,29,28,1,-1,2,8,30,-1,30,29,2,-1,8,21,31,-1,31,30,8,-1,21,26,32,-1,32,31,21,-1,26,7,27,-1,27,32,26,-1});
  }
}
protected class MFInt32761 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,36,33,34,-1,34,35,36,-1,0,2,7,-1,7,8,0,-1,10,0,8,-1,8,9,10,-1,33,38,37,-1,37,34,33,-1,2,11,12,-1,12,7,2,-1,39,36,35,-1,35,40,39,-1,11,2,13,-1,2,1,14,-1,14,13,2,-1,9,8,15,-1,15,16,9,-1,5,4,17,-1,17,18,5,-1,8,7,19,-1,19,15,8,-1,12,5,18,-1,18,20,12,-1,7,12,20,-1,20,19,7,-1,4,9,16,-1,16,17,4,-1,17,16,20,-1,20,18,17,-1,15,19,20,-1,20,16,15,-1,22,23,24,-1,24,25,26,-1,22,24,26,-1,21,22,26,-1,28,29,30,-1,30,27,28,-1,14,1,22,-1,22,21,14,-1,1,0,23,-1,23,22,1,-1,0,10,24,-1,24,23,0,-1,10,3,25,-1,25,24,10,-1,33,36,42,-1,42,41,33,-1,27,30,31,-1,31,32,27,-1,6,11,28,-1,28,27,6,-1,11,13,29,-1,29,28,11,-1,13,14,30,-1,30,29,13,-1,14,21,31,-1,31,30,14,-1,21,26,32,-1,32,31,21,-1,42,36,43,-1,43,44,42,-1});
  }
}
protected class MFVec3f762 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0148f,-0.0121f,-0.106f,-0.0052f,-0.0191f,-0.1103f,-0.0166f,-0.0165f,-0.1104f,0.0133f,-0.007f,-0.1033f,0.0072f,-0.0026f,-0.0972f,-0.0082f,-0.0001f,-0.0949f,-0.0158f,-0.0091f,-0.1081f,0.0086f,-0.0168f,-0.1136f,-0.0181f,-0.0112f,-0.1123f,0.0046f,-0.0224f,-0.0837f,-0.0072f,-0.0176f,-0.0853f,-0.0046f,-0.0275f,-0.0807f,0.0023f,-0.0301f,-0.0818f,0.0054f,-0.0345f,-0.0969f,0.0113f,-0.0273f,-0.0877f,0.0081f,-0.0306f,-0.0858f,0.0041f,-0.0362f,-0.0933f,-0.0123f,-0.0265f,-0.0956f,-0.0093f,-0.0339f,-0.0894f,-0.0032f,-0.0337f,-0.0976f,-0.0025f,-0.0368f,-0.0908f,-0.01f,-0.0062f,-0.1147f,-0.0101f,-0.0048f,-0.1132f,-0.0038f,0.0022f,-0.1022f,0.0047f,0.0004f,-0.1035f,0.0081f,-0.0031f,-0.109f,0.0052f,-0.0071f,-0.1152f,0.0064f,-0.0174f,-0.1189f,-0.004f,-0.0199f,-0.1167f,-0.0135f,-0.0175f,-0.1167f,-0.0146f,-0.0142f,-0.1178f,-0.0094f,-0.0105f,-0.1199f,0.0037f,-0.0114f,-0.121f});
  }
}
protected class MFVec2f763 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8786f,0.0507f,0.857f,0.0621f,0.8601f,0.0649f,0.867f,0.0598f,0.8887f,0.0786f,0.8747f,0.0865f,0.8533f,0.0697f,0.876f,0.0783f,0.893f,0.0688f,0.8992f,0.0702f,0.8819f,0.0483f,0.8561f,0.0728f,0.8736f,0.0851f,0.8532f,0.0697f,0.8503f,0.0646f,0.8986f,0.0785f,0.897f,0.0809f,0.8914f,0.0813f,0.8802f,0.0861f,0.8841f,0.0856f,0.8821f,0.0883f,0.8487f,0.0595f,0.8509f,0.0581f,0.8683f,0.0489f,0.868f,0.0507f,0.8608f,0.0544f,0.8505f,0.0603f,0.8455f,0.0706f,0.8468f,0.073f,0.8455f,0.0707f,0.8437f,0.0676f,0.8416f,0.0639f,0.8422f,0.0648f,0.8729f,0.2464f,0.8482f,0.2317f,0.8612f,0.2211f,0.8847f,0.2342f,0.8433f,0.2381f,0.8632f,0.2548f,0.8814f,0.2316f,0.8625f,0.2222f,0.8799f,0.2506f,0.8891f,0.243f,0.8922f,0.232f,0.8922f,0.232f});
  }
}
protected class MFFloat764 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat765 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32766 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,29,28,-1,28,11,0,-1,32,2,17,-1,17,1,32,-1,4,3,1,-1,1,17,4,-1,11,28,31,-1,31,5,11,-1,29,0,2,-1,2,32,29,-1,4,5,31,-1,31,3,4,-1,23,32,1,-1,24,3,31,-1,24,23,1,-1,1,3,24,-1,4,6,7,-1,7,8,4,-1,5,9,10,-1,10,11,5,-1,4,8,9,-1,9,5,4,-1,10,13,14,-1,14,12,10,-1,2,15,16,-1,16,17,2,-1,0,12,15,-1,15,2,0,-1,8,7,18,-1,18,9,8,-1,18,13,10,-1,10,9,18,-1,6,20,21,-1,21,19,6,-1,22,19,21,-1,21,14,22,-1,17,16,20,-1,20,6,17,-1,6,4,17,-1,11,10,12,-1,12,0,11,-1,13,22,14,-1,6,19,18,-1,18,7,6,-1,18,19,22,-1,22,13,18,-1,16,15,21,-1,21,20,16,-1,21,15,12,-1,12,14,21,-1,24,25,26,-1,26,23,24,-1,28,29,30,-1,30,27,28,-1,27,30,26,-1,26,25,27,-1,24,31,27,-1,27,25,24,-1,32,23,26,-1,26,30,32,-1,30,29,32,-1,28,27,31,-1});
  }
}
protected class MFInt32767 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,33,34,-1,34,2,3,-1,4,5,6,-1,6,7,4,-1,9,8,7,-1,7,6,9,-1,2,34,37,-1,37,38,2,-1,33,3,36,-1,36,35,33,-1,9,11,10,-1,10,8,9,-1,12,4,7,-1,13,8,10,-1,13,12,7,-1,7,8,13,-1,9,14,15,-1,15,16,9,-1,38,39,18,-1,18,2,38,-1,9,16,17,-1,17,11,9,-1,18,20,21,-1,21,19,18,-1,5,22,23,-1,23,6,5,-1,3,19,40,-1,40,36,3,-1,16,15,24,-1,24,17,16,-1,41,20,18,-1,18,39,41,-1,14,26,27,-1,27,25,14,-1,28,42,43,-1,43,21,28,-1,6,23,26,-1,26,14,6,-1,14,9,6,-1,2,18,19,-1,19,3,2,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,41,42,28,-1,28,20,41,-1,23,22,27,-1,27,26,23,-1,43,40,19,-1,19,21,43,-1,13,29,30,-1,30,12,13,-1,1,0,32,-1,32,31,1,-1,31,32,30,-1,30,29,31,-1,13,10,31,-1,31,29,13,-1,4,12,30,-1,30,32,4,-1,32,0,4,-1,1,31,10,-1});
  }
}
protected class MFVec3f768 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0073f,-0.0263f,-0.1024f,-0.0092f,-0.0148f,-0.104f,-0.0003f,-0.0265f,-0.1021f,-0.0042f,-0.0067f,-0.0942f,-0.0023f,-0.0178f,-0.0888f,0.0066f,-0.0175f,-0.0891f,-0.0028f,-0.029f,-0.0883f,-0.0017f,-0.0274f,-0.0866f,0f,-0.0245f,-0.0856f,0.0064f,-0.0251f,-0.0852f,0.0109f,-0.0262f,-0.0895f,0.0118f,-0.0204f,-0.0937f,0.0073f,-0.0319f,-0.0975f,0.0094f,-0.0296f,-0.0896f,0.0073f,-0.0323f,-0.0937f,0.0007f,-0.0324f,-0.0966f,-0.0039f,-0.0299f,-0.0932f,-0.0067f,-0.0237f,-0.0974f,0.0045f,-0.0299f,-0.0863f,0.003f,-0.0321f,-0.0886f,-0.0036f,-0.0298f,-0.0903f,0.0019f,-0.0333f,-0.0916f,0.0082f,-0.0313f,-0.0915f,-0.0107f,-0.0077f,-0.1095f,-0.0055f,0.0012f,-0.0991f,0.0003f,0.0016f,-0.1025f,-0.0053f,-0.0071f,-0.1123f,0.0096f,-0.0005f,-0.1054f,0.0129f,-0.0085f,-0.1016f,0.007f,-0.0157f,-0.1108f,0.0041f,-0.0093f,-0.1152f,0.0062f,-0.0036f,-0.0976f,-0.0016f,-0.0149f,-0.1115f});
  }
}
protected class MFVec2f769 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8747f,0.0865f,0.8887f,0.0786f,0.8299f,0.2203f,0.8424f,0.2111f,0.8736f,0.0851f,0.8939f,0.0989f,0.8978f,0.0975f,0.8834f,0.0852f,0.8992f,0.0766f,0.9092f,0.0888f,0.8992f,0.0702f,0.9115f,0.0859f,0.876f,0.0783f,0.893f,0.0688f,0.9109f,0.102f,0.9135f,0.0996f,0.9144f,0.0973f,0.9172f,0.0962f,0.8241f,0.2146f,0.8338f,0.2074f,0.8247f,0.2116f,0.8291f,0.2083f,0.9028f,0.1054f,0.9046f,0.1032f,0.9153f,0.1012f,0.9125f,0.1038f,0.9081f,0.1033f,0.9082f,0.1057f,0.8266f,0.2097f,0.8885f,0.0681f,0.8723f,0.0776f,0.8843f,0.0701f,0.8696f,0.0781f,0.8612f,0.2211f,0.8482f,0.2317f,0.8625f,0.2222f,0.8417f,0.2109f,0.8433f,0.2381f,0.8245f,0.2237f,0.8192f,0.2167f,0.8322f,0.2071f,0.8195f,0.2131f,0.8224f,0.2103f,0.8256f,0.2083f});
  }
}
protected class MFFloat770 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat771 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32772 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,2,1,-1,1,12,14,-1,0,3,15,-1,15,13,0,-1,11,8,9,-1,9,10,11,-1,4,16,17,-1,17,5,4,-1,18,19,7,-1,7,6,18,-1,0,13,16,-1,16,4,0,-1,12,1,5,-1,5,17,12,-1,1,0,4,-1,4,5,1,-1,2,14,18,-1,18,6,2,-1,15,3,7,-1,7,19,15,-1,3,2,6,-1,6,7,3,-1,3,0,9,-1,9,8,3,-1,0,1,10,-1,10,9,0,-1,1,2,11,-1,11,10,1,-1,2,3,8,-1,8,11,2,-1,20,27,26,-1,26,25,24,-1,20,26,24,-1,24,23,22,-1,20,24,22,-1,21,20,22,-1,12,20,21,-1,21,14,12,-1,14,21,22,-1,22,18,14,-1,18,22,23,-1,23,19,18,-1,19,23,24,-1,24,15,19,-1,15,24,25,-1,25,13,15,-1,13,25,26,-1,26,16,13,-1,16,26,27,-1,27,17,16,-1,17,27,20,-1,20,12,17,-1});
  }
}
protected class MFInt32773 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {21,0,1,-1,1,19,21,-1,12,13,22,-1,22,20,12,-1,5,6,7,-1,7,4,5,-1,8,23,25,-1,25,9,8,-1,26,28,18,-1,18,17,26,-1,12,20,24,-1,24,16,12,-1,19,1,9,-1,9,25,19,-1,1,2,8,-1,8,9,1,-1,0,21,27,-1,27,10,0,-1,22,13,18,-1,18,28,22,-1,3,0,10,-1,10,11,3,-1,13,12,15,-1,15,14,13,-1,2,1,4,-1,4,7,2,-1,1,0,5,-1,5,4,1,-1,0,3,6,-1,6,5,0,-1,29,36,35,-1,35,34,33,-1,29,35,33,-1,33,32,31,-1,29,33,31,-1,30,29,31,-1,19,29,30,-1,30,21,19,-1,21,30,31,-1,31,27,21,-1,26,31,32,-1,32,28,26,-1,28,32,33,-1,33,22,28,-1,22,33,34,-1,34,20,22,-1,20,34,35,-1,35,24,20,-1,23,35,36,-1,36,25,23,-1,25,36,29,-1,29,19,25,-1});
  }
}
protected class MFVec3f774 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0141f,-0.0297f,-0.1071f,-0.0178f,-0.0297f,-0.1071f,-0.0155f,-0.0071f,-0.108f,0.0134f,-0.0071f,-0.1078f,0.0115f,-0.0334f,-0.107f,-0.0144f,-0.0334f,-0.107f,-0.0117f,-0.0002f,-0.1085f,0.0101f,-0.0002f,-0.1083f,0.0117f,-0.0087f,-0.1096f,0.0131f,-0.0279f,-0.1087f,-0.0157f,-0.0279f,-0.1087f,-0.0138f,-0.0087f,-0.1098f,-0.016f,-0.027f,-0.0932f,0.0142f,-0.027f,-0.0932f,-0.013f,-0.0096f,-0.096f,0.012f,-0.0096f,-0.096f,0.0108f,-0.031f,-0.092f,-0.0129f,-0.0313f,-0.0925f,-0.0098f,-0.0028f,-0.0972f,0.01f,-0.0028f,-0.0971f,-0.014f,-0.0255f,-0.092f,-0.0113f,-0.0105f,-0.0944f,-0.0086f,-0.0045f,-0.0954f,0.0086f,-0.0045f,-0.0953f,0.0103f,-0.0105f,-0.0943f,0.0122f,-0.0255f,-0.092f,0.0092f,-0.0289f,-0.0909f,-0.0113f,-0.0292f,-0.0913f});
  }
}
protected class MFVec2f775 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.813f,0.0266f,0.8136f,0.0488f,0.8136f,0.0488f,0.8133f,0.0266f,0.8111f,0.0474f,0.8105f,0.0283f,0.8108f,0.0283f,0.8111f,0.0474f,0.8141f,0.0525f,0.8141f,0.0525f,0.8123f,0.0198f,0.8125f,0.0198f,0.9273f,0.2479f,0.9315f,0.2698f,0.9337f,0.2676f,0.9301f,0.2489f,0.9262f,0.2444f,0.9337f,0.2762f,0.9335f,0.2763f,0.8381f,0.0441f,0.904f,0.2568f,0.8327f,0.0273f,0.9122f,0.2724f,0.8401f,0.0478f,0.9014f,0.2535f,0.8395f,0.0482f,0.9142f,0.2789f,0.8319f,0.0206f,0.9141f,0.2788f,0.8381f,0.0441f,0.8327f,0.0273f,0.8319f,0.0206f,0.9141f,0.2788f,0.9122f,0.2724f,0.904f,0.2568f,0.9014f,0.2535f,0.8395f,0.0482f});
  }
}
protected class MFFloat776 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat777 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32778 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,8,-1,8,3,0,-1,5,0,3,-1,3,7,5,-1,10,6,4,-1,4,2,10,-1,2,4,8,-1,8,1,2,-1,14,4,6,-1,6,11,14,-1,8,16,17,-1,17,3,8,-1,9,13,12,-1,12,7,9,-1,15,16,8,-1,8,4,15,-1,15,4,14,-1,9,3,17,-1,17,18,9,-1,9,18,13,-1,30,31,25,-1,27,30,25,-1,26,27,25,-1,22,19,20,-1,20,21,22,-1,41,38,39,-1,39,40,41,-1,36,37,32,-1,36,32,33,-1,36,33,34,-1,35,36,34,-1,23,24,19,-1,19,22,23,-1,6,10,20,-1,20,19,6,-1,30,27,28,-1,28,29,30,-1,5,7,22,-1,22,21,5,-1,7,12,23,-1,23,22,7,-1,12,11,24,-1,24,23,12,-1,11,6,19,-1,19,24,11,-1,1,0,26,-1,26,25,1,-1,0,5,27,-1,27,26,0,-1,5,21,28,-1,28,27,5,-1,21,20,29,-1,29,28,21,-1,20,10,30,-1,30,29,20,-1,10,2,31,-1,31,30,10,-1,2,1,25,-1,25,31,2,-1,16,15,33,-1,33,32,16,-1,15,14,34,-1,34,33,15,-1,14,13,35,-1,35,34,14,-1,13,18,36,-1,36,35,13,-1,18,17,37,-1,37,36,18,-1,17,16,32,-1,32,37,17,-1,14,11,39,-1,39,38,14,-1,11,12,40,-1,40,39,11,-1,12,13,41,-1,41,40,12,-1,13,14,38,-1,38,41,13,-1,9,7,3,-1});
  }
}
protected class MFInt32779 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,1,-1,1,2,3,-1,5,3,2,-1,2,4,5,-1,44,45,8,-1,8,46,44,-1,46,8,43,-1,43,42,46,-1,47,8,45,-1,45,48,47,-1,1,12,13,-1,13,2,1,-1,16,14,15,-1,15,4,16,-1,50,49,43,-1,43,8,50,-1,50,8,47,-1,16,2,13,-1,13,18,16,-1,16,18,14,-1,21,22,23,-1,20,21,23,-1,19,20,23,-1,25,26,27,-1,27,24,25,-1,29,30,31,-1,31,28,29,-1,33,34,35,-1,33,35,36,-1,33,36,37,-1,32,33,37,-1,38,39,26,-1,26,25,38,-1,7,6,27,-1,27,26,7,-1,21,20,40,-1,40,41,21,-1,5,4,25,-1,25,24,5,-1,4,15,38,-1,38,25,4,-1,15,11,39,-1,39,38,15,-1,48,45,51,-1,51,56,48,-1,0,3,19,-1,19,23,0,-1,3,5,20,-1,20,19,3,-1,5,24,40,-1,40,20,5,-1,24,27,41,-1,41,40,24,-1,27,6,21,-1,21,41,27,-1,6,9,22,-1,22,21,6,-1,9,0,23,-1,23,22,9,-1,12,17,36,-1,36,35,12,-1,50,47,55,-1,55,54,50,-1,10,14,32,-1,32,37,10,-1,14,18,33,-1,33,32,14,-1,18,13,34,-1,34,33,18,-1,13,12,35,-1,35,34,13,-1,47,48,53,-1,53,52,47,-1,11,15,28,-1,28,31,11,-1,15,14,29,-1,29,28,15,-1,14,10,30,-1,30,29,14,-1,16,4,2,-1});
  }
}
protected class MFVec3f780 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0123f,-0.0572f,-0.0906f,-0.0017f,-0.0571f,-0.0875f,0.0079f,-0.0572f,-0.0906f,-0.014f,-0.0384f,-0.0899f,0.0105f,-0.0384f,-0.0897f,-0.0137f,-0.0582f,-0.1061f,0.0118f,-0.0377f,-0.1069f,-0.0163f,-0.0377f,-0.1069f,-0.0022f,-0.0407f,-0.0858f,-0.0196f,-0.0273f,-0.0907f,0.0086f,-0.0582f,-0.1061f,0.0141f,-0.0103f,-0.1084f,-0.0178f,-0.0103f,-0.1084f,-0.016f,-0.0077f,-0.0945f,0.0142f,-0.0077f,-0.0945f,0.0088f,-0.0317f,-0.0875f,-0.0049f,-0.034f,-0.0842f,-0.0163f,-0.0313f,-0.0843f,-0.0178f,-0.0261f,-0.0863f,0.0093f,-0.0377f,-0.1096f,0.0064f,-0.0577f,-0.1078f,-0.0116f,-0.0577f,-0.1078f,-0.0137f,-0.0379f,-0.1095f,-0.0151f,-0.0104f,-0.1109f,0.0121f,-0.0104f,-0.1109f,-0.0017f,-0.0611f,-0.0888f,-0.0091f,-0.0612f,-0.0913f,-0.0105f,-0.0618f,-0.1055f,-0.0106f,-0.0597f,-0.1072f,0.0054f,-0.0597f,-0.1072f,0.0069f,-0.0618f,-0.1055f,0.0063f,-0.0612f,-0.0912f,-0.0037f,-0.0297f,-0.0816f,0.0063f,-0.0278f,-0.0842f,0.0104f,-0.0072f,-0.0904f,-0.0134f,-0.0072f,-0.0904f,-0.0126f,-0.0241f,-0.0835f,-0.0124f,-0.0279f,-0.082f,0.0112f,-0.0056f,-0.0973f,0.0118f,-0.0074f,-0.1062f,-0.0144f,-0.0074f,-0.1062f,-0.0133f,-0.0056f,-0.0973f});
  }
}
protected class MFVec2f781 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8514f,0.0953f,0.8526f,0.0788f,0.846f,0.0768f,0.8466f,0.0958f,0.8195f,0.0808f,0.8225f,0.0994f,0.8225f,0.0994f,0.8195f,0.0808f,0.8903f,0.2261f,0.8467f,0.0958f,0.8381f,0.0441f,0.8136f,0.0488f,0.8561f,0.0728f,0.8532f,0.0697f,0.8381f,0.0441f,0.8136f,0.0488f,0.8436f,0.0662f,0.8533f,0.0697f,0.8503f,0.0646f,0.8461f,0.0998f,0.8248f,0.1027f,0.8248f,0.1027f,0.8462f,0.0997f,0.8498f,0.0994f,0.8184f,0.0977f,0.8157f,0.0811f,0.8157f,0.0809f,0.8184f,0.0977f,0.8165f,0.0457f,0.8341f,0.0424f,0.8341f,0.0424f,0.8165f,0.0457f,0.844f,0.0417f,0.8554f,0.0622f,0.8575f,0.0659f,0.8594f,0.0677f,0.8574f,0.0658f,0.844f,0.0417f,0.8099f,0.0493f,0.8099f,0.0493f,0.82f,0.101f,0.82f,0.101f,0.8821f,0.2087f,0.8838f,0.2252f,0.9098f,0.1997f,0.916f,0.2175f,0.8866f,0.2074f,0.904f,0.2568f,0.9273f,0.2479f,0.8814f,0.2316f,0.8847f,0.2342f,0.9197f,0.2166f,0.9083f,0.2577f,0.925f,0.2515f,0.8813f,0.2388f,0.8986f,0.2602f,0.931f,0.2468f});
  }
}
protected class MFFloat782 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat783 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32784 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,19,18,-1,18,5,4,-1,5,18,21,-1,21,6,5,-1,7,25,20,-1,20,8,7,-1,8,20,19,-1,19,4,8,-1,6,21,22,-1,1,7,8,-1,8,10,1,-1,6,2,11,-1,11,5,6,-1,5,11,0,-1,0,4,5,-1,4,0,10,-1,10,8,4,-1,1,3,9,-1,9,7,1,-1,9,3,2,-1,2,6,9,-1,9,24,23,-1,23,7,9,-1,6,22,24,-1,24,9,6,-1,23,25,7,-1,0,11,15,-1,15,17,0,-1,1,10,14,-1,14,12,1,-1,11,2,13,-1,13,15,11,-1,3,1,12,-1,12,16,3,-1,2,3,16,-1,16,13,2,-1,10,0,17,-1,17,14,10,-1,14,17,16,-1,16,12,14,-1,15,13,16,-1,16,17,15,-1,26,27,28,-1,26,28,29,-1,30,26,29,-1,18,19,27,-1,27,26,18,-1,19,20,28,-1,28,27,19,-1,20,25,29,-1,29,28,20,-1,31,32,33,-1,37,31,33,-1,36,37,33,-1,36,33,34,-1,36,34,35,-1,21,18,26,-1,26,30,21,-1,24,22,32,-1,32,31,24,-1,22,21,33,-1,33,32,22,-1,21,30,34,-1,34,33,21,-1,30,29,35,-1,35,34,30,-1,29,25,36,-1,36,35,29,-1,25,23,37,-1,37,36,25,-1,23,24,31,-1,31,37,23,-1});
  }
}
protected class MFInt32785 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,3,2,4,-1,4,5,3,-1,6,40,41,-1,41,9,6,-1,9,41,39,-1,39,38,9,-1,5,4,10,-1,11,6,9,-1,9,12,11,-1,5,13,14,-1,14,3,5,-1,3,14,15,-1,15,0,3,-1,38,42,12,-1,12,9,38,-1,11,43,44,-1,44,6,11,-1,17,16,13,-1,13,5,17,-1,44,45,46,-1,46,6,44,-1,5,10,18,-1,18,17,5,-1,46,40,6,-1,15,14,20,-1,20,21,15,-1,11,12,22,-1,22,23,11,-1,14,13,24,-1,24,20,14,-1,43,11,23,-1,23,48,43,-1,13,16,25,-1,25,24,13,-1,12,42,47,-1,47,22,12,-1,22,47,48,-1,48,23,22,-1,20,24,25,-1,25,21,20,-1,27,28,29,-1,27,29,30,-1,26,27,30,-1,2,1,28,-1,28,27,2,-1,1,8,29,-1,29,28,1,-1,8,7,30,-1,30,29,8,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,31,35,36,-1,31,36,37,-1,4,2,27,-1,27,26,4,-1,18,10,34,-1,34,33,18,-1,10,4,35,-1,35,34,10,-1,4,26,36,-1,36,35,4,-1,26,30,37,-1,37,36,26,-1,30,7,31,-1,31,37,30,-1,7,19,32,-1,32,31,7,-1,19,18,33,-1,33,32,19,-1});
  }
}
protected class MFVec3f786 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0024f,-0.0394f,-0.0948f,0.0114f,-0.0387f,-0.109f,-0.0076f,-0.0364f,-0.109f,0.0024f,-0.0393f,-0.1114f,0.0011f,-0.0119f,-0.0934f,-0.0088f,-0.0121f,-0.0963f,-0.0099f,-0.0128f,-0.1091f,0.0103f,-0.0128f,-0.1091f,0.0103f,-0.0121f,-0.0963f,0.0011f,-0.016f,-0.111f,0.0114f,-0.0388f,-0.0975f,-0.0076f,-0.0365f,-0.0975f,0.0098f,-0.0425f,-0.1083f,-0.004f,-0.0444f,-0.109f,0.0098f,-0.0426f,-0.0983f,-0.004f,-0.0445f,-0.0976f,0.0025f,-0.0451f,-0.109f,0.0025f,-0.0452f,-0.0975f,-0.0098f,-0.0067f,-0.096f,0.0008f,-0.0066f,-0.0928f,0.0104f,-0.0067f,-0.0959f,-0.0113f,-0.0077f,-0.1115f,-0.0094f,-0.0129f,-0.1114f,0.0103f,-0.0129f,-0.1114f,0.0011f,-0.016f,-0.1113f,0.0111f,-0.0077f,-0.1115f,-0.0065f,-0.0008f,-0.098f,0.0011f,-0.0005f,-0.0947f,0.0084f,-0.0008f,-0.098f,0.0087f,-0.0012f,-0.1109f,-0.0078f,-0.0012f,-0.1109f,0.0011f,-0.0151f,-0.1119f,-0.0086f,-0.012f,-0.1121f,-0.0104f,-0.0073f,-0.1121f,-0.0072f,-0.0014f,-0.1125f,0.008f,-0.0014f,-0.1125f,0.0101f,-0.0074f,-0.1121f,0.0095f,-0.012f,-0.1121f});
  }
}
protected class MFVec2f787 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8511f,0.1006f,0.8514f,0.0953f,0.8466f,0.0958f,0.8466f,0.1011f,0.8225f,0.0994f,0.8283f,0.1035f,0.9023f,0.1969f,0.8225f,0.0994f,0.8467f,0.0958f,0.8857f,0.2021f,0.8231f,0.1042f,0.8931f,0.1724f,0.8782f,0.1769f,0.8338f,0.1268f,0.8493f,0.125f,0.8543f,0.1273f,0.8302f,0.1302f,0.8258f,0.1072f,0.8236f,0.1075f,0.8231f,0.1042f,0.8504f,0.1328f,0.8508f,0.1334f,0.8781f,0.1731f,0.8909f,0.1692f,0.8352f,0.1346f,0.8353f,0.1353f,0.8228f,0.0929f,0.844f,0.0896f,0.8482f,0.0889f,0.8441f,0.0896f,0.8228f,0.0929f,0.8203f,0.0995f,0.8207f,0.1038f,0.8212f,0.1068f,0.8207f,0.1037f,0.8203f,0.0995f,0.8206f,0.0933f,0.8205f,0.0933f,0.8815f,0.2034f,0.8821f,0.2087f,0.9098f,0.1997f,0.8866f,0.2074f,0.8737f,0.1777f,0.8969f,0.1707f,0.9052f,0.1925f,0.9074f,0.1918f,0.9084f,0.195f,0.876f,0.171f,0.891f,0.1665f});
  }
}
protected class MFFloat788 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat789 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32790 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1});
  }
}
protected class MFInt32791 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1});
  }
}
protected class MFVec3f792 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0017f,-0.0339f,-0.11f,0.0094f,-0.0337f,-0.0974f,-0.0068f,-0.0312f,-0.0971f,-0.0088f,-0.013f,-0.0967f,-0.0088f,-0.0129f,-0.1082f,0.0094f,-0.0083f,-0.1081f,-0.0096f,-0.006f,-0.1081f,0.0094f,-0.0084f,-0.0966f,-0.0096f,-0.0061f,-0.0966f,0.0053f,-0.004f,-0.1081f,0.0053f,-0.0041f,-0.0966f,-0.0041f,-0.0043f,-0.0966f,-0.0041f,-0.0042f,-0.1081f,0.0004f,-0.0088f,-0.1105f,0.0004f,-0.009f,-0.0939f,0.0017f,-0.0341f,-0.0947f,-0.004f,-0.039f,-0.0977f,0.0015f,-0.0398f,-0.0975f,0.0094f,-0.0336f,-0.1076f,0.0078f,-0.0374f,-0.0983f,0.0078f,-0.0373f,-0.1067f,-0.0068f,-0.031f,-0.1078f,-0.004f,-0.0389f,-0.1074f,0.0015f,-0.0397f,-0.1074f});
  }
}
protected class MFVec2f793 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8782f,0.1769f,0.8543f,0.1273f,0.8574f,0.1518f,0.8703f,0.1535f,0.8493f,0.125f,0.8504f,0.1318f,0.8846f,0.1491f,0.8931f,0.1724f,0.8349f,0.1336f,0.8379f,0.1515f,0.8533f,0.1496f,0.8338f,0.1268f,0.8302f,0.1302f,0.8351f,0.1545f,0.849f,0.1233f,0.8336f,0.1251f,0.849f,0.123f,0.8335f,0.1249f,0.8539f,0.1573f,0.8543f,0.1579f,0.8703f,0.1496f,0.8822f,0.146f,0.8398f,0.159f,0.8399f,0.1597f,0.8737f,0.1777f,0.8664f,0.1541f,0.8969f,0.1707f,0.8878f,0.1476f,0.8796f,0.181f,0.8945f,0.1764f,0.8684f,0.1475f,0.8822f,0.1433f});
  }
}
protected class MFFloat794 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat795 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32796 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1});
  }
}
protected class MFInt32797 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1});
  }
}
protected class MFVec3f798 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0073f,-0.0118f,-0.0964f,-0.0073f,-0.0117f,-0.1071f,-0.0056f,-0.0199f,-0.097f,-0.0056f,-0.0198f,-0.1067f,0.0078f,-0.0192f,-0.0965f,0.0017f,-0.0197f,-0.0947f,0.0078f,-0.0191f,-0.1071f,0.0017f,-0.0195f,-0.1091f,-0.0032f,-0.0261f,-0.0975f,-0.0032f,-0.026f,-0.1064f,0.0079f,-0.0257f,-0.0976f,0.0025f,-0.0264f,-0.0957f,0.0079f,-0.0256f,-0.1061f,0.0025f,-0.0262f,-0.1082f,-0.0039f,-0.028f,-0.102f,0.007f,-0.028f,-0.102f,0.0025f,-0.0294f,-0.102f,-0.0038f,-0.0276f,-0.0995f,0.0071f,-0.0275f,-0.104f,0.0022f,-0.0287f,-0.0987f,-0.0038f,-0.0276f,-0.1043f,0.0071f,-0.0275f,-0.0998f,0.0022f,-0.0288f,-0.105f,0.0083f,-0.0085f,-0.0966f,-0.0078f,-0.0059f,-0.107f,-0.0078f,-0.006f,-0.0963f,-0.0031f,-0.0041f,-0.0967f,-0.0031f,-0.004f,-0.1066f,0.0049f,-0.0041f,-0.0967f,0.0084f,-0.0084f,-0.1068f,0.0049f,-0.0039f,-0.1066f,0.0006f,-0.0089f,-0.0939f,0.0006f,-0.0087f,-0.1092f});
  }
}
protected class MFVec2f799 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8542f,0.1553f,0.8574f,0.1518f,0.8533f,0.1496f,0.8379f,0.1515f,0.8351f,0.1545f,0.8388f,0.1572f,0.8414f,0.1663f,0.8547f,0.1647f,0.8578f,0.1639f,0.8665f,0.142f,0.8703f,0.1535f,0.8804f,0.1378f,0.8846f,0.1491f,0.8382f,0.1663f,0.8495f,0.1759f,0.8523f,0.1752f,0.8544f,0.1737f,0.8566f,0.1736f,0.8658f,0.1324f,0.8753f,0.1296f,0.8677f,0.1303f,0.8725f,0.1289f,0.842f,0.1753f,0.8441f,0.175f,0.8533f,0.1759f,0.8496f,0.1769f,0.8467f,0.1759f,0.846f,0.1768f,0.87f,0.1292f,0.8525f,0.1477f,0.8382f,0.1495f,0.8525f,0.1475f,0.8381f,0.1492f,0.8664f,0.1541f,0.8878f,0.1476f,0.8639f,0.1422f,0.8827f,0.1365f,0.8634f,0.1325f,0.8774f,0.1283f,0.8662f,0.1297f,0.8697f,0.1281f,0.8732f,0.1275f,0.872f,0.1575f,0.8858f,0.1533f});
  }
}
protected class MFFloat800 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat801 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32802 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,1,4,-1,4,6,5,-1,7,2,3,-1,3,0,7,-1,8,9,10,-1,10,11,8,-1,12,13,14,-1,14,15,12,-1,1,5,9,-1,9,8,1,-1,5,7,10,-1,10,9,5,-1,7,0,11,-1,11,10,7,-1,0,1,8,-1,8,11,0,-1,6,4,13,-1,13,12,6,-1,4,3,14,-1,14,13,4,-1,3,2,15,-1,15,14,3,-1,2,6,12,-1,12,15,2,-1,22,23,20,-1,20,21,22,-1,18,19,16,-1,16,17,18,-1,5,6,17,-1,17,16,5,-1,6,2,18,-1,18,17,6,-1,2,7,19,-1,19,18,2,-1,7,5,16,-1,16,19,7,-1,0,3,21,-1,21,20,0,-1,3,4,22,-1,22,21,3,-1,4,1,23,-1,23,22,4,-1,1,0,20,-1,20,23,1,-1});
  }
}
protected class MFInt32803 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {24,25,26,-1,26,0,24,-1,4,5,6,-1,6,7,4,-1,8,9,10,-1,10,11,8,-1,12,30,31,-1,31,32,12,-1,25,24,29,-1,29,28,25,-1,1,4,10,-1,10,9,1,-1,4,7,11,-1,11,10,4,-1,7,2,8,-1,8,11,7,-1,0,26,30,-1,30,12,0,-1,3,6,14,-1,14,13,3,-1,6,5,15,-1,15,14,6,-1,27,0,12,-1,12,32,27,-1,17,18,19,-1,19,16,17,-1,35,36,37,-1,37,20,35,-1,24,0,20,-1,20,37,24,-1,0,27,35,-1,35,20,0,-1,5,4,22,-1,22,21,5,-1,4,1,23,-1,23,22,4,-1,7,6,16,-1,16,19,7,-1,6,3,17,-1,17,16,6,-1,26,25,34,-1,34,33,26,-1,2,7,19,-1,19,18,2,-1});
  }
}
protected class MFVec3f804 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0181f,-0.0312f,-0.1093f,0.0144f,-0.0312f,-0.1093f,-0.0157f,-0.0086f,-0.0948f,-0.0164f,-0.0081f,-0.1095f,0.0131f,-0.0081f,-0.1095f,0.0139f,-0.0311f,-0.0939f,0.0133f,-0.0086f,-0.0946f,-0.018f,-0.0311f,-0.0939f,0.012f,-0.0347f,-0.1095f,0.0118f,-0.0349f,-0.0936f,-0.0146f,-0.0349f,-0.0936f,-0.0147f,-0.0348f,-0.1095f,0.0099f,-0.0016f,-0.0951f,0.0098f,-0.0014f,-0.1081f,-0.013f,-0.0014f,-0.1081f,-0.0125f,-0.0016f,-0.0952f,0.013f,-0.0297f,-0.0913f,0.0116f,-0.0102f,-0.0922f,-0.0141f,-0.0102f,-0.0924f,-0.016f,-0.0297f,-0.0913f,-0.016f,-0.0295f,-0.1114f,-0.0146f,-0.0097f,-0.112f,0.0114f,-0.0097f,-0.1119f,0.0133f,-0.0295f,-0.1114f});
  }
}
protected class MFVec2f805 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9315f,0.2698f,0.8136f,0.0488f,0.7924f,0.0507f,0.7911f,0.0281f,0.8136f,0.0488f,0.813f,0.0266f,0.791f,0.0281f,0.7924f,0.0508f,0.7924f,0.0543f,0.8143f,0.0526f,0.8143f,0.0526f,0.7924f,0.0543f,0.9335f,0.2763f,0.7903f,0.0215f,0.7903f,0.0215f,0.8123f,0.0198f,0.7875f,0.03f,0.7875f,0.03f,0.7887f,0.0494f,0.7887f,0.0495f,0.9277f,0.2691f,0.8167f,0.0279f,0.8173f,0.0471f,0.8173f,0.0471f,0.9273f,0.2479f,0.9479f,0.2423f,0.9531f,0.2644f,0.9318f,0.2697f,0.9473f,0.2389f,0.926f,0.2443f,0.955f,0.2707f,0.9551f,0.2707f,0.9337f,0.2763f,0.9563f,0.262f,0.9518f,0.243f,0.928f,0.269f,0.924f,0.2502f,0.9241f,0.2502f});
  }
}
protected class MFFloat806 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat807 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32808 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,6,-1,6,8,0,-1,10,7,1,-1,1,5,10,-1,2,1,7,-1,7,9,2,-1,8,11,4,-1,4,0,8,-1,14,15,12,-1,12,13,14,-1,34,35,32,-1,32,33,34,-1,25,28,29,-1,29,24,25,-1,17,18,19,-1,19,20,17,-1,25,26,27,-1,27,28,25,-1,20,21,16,-1,16,17,20,-1,6,3,13,-1,13,12,6,-1,24,29,30,-1,30,31,24,-1,2,9,15,-1,15,14,2,-1,16,21,22,-1,22,23,16,-1,9,7,17,-1,17,16,9,-1,7,10,18,-1,18,17,7,-1,10,11,19,-1,19,18,10,-1,11,8,20,-1,20,19,11,-1,8,6,21,-1,21,20,8,-1,6,12,22,-1,22,21,6,-1,12,15,23,-1,23,22,12,-1,15,9,16,-1,16,23,15,-1,3,0,25,-1,25,24,3,-1,0,4,26,-1,26,25,0,-1,4,5,27,-1,27,26,4,-1,5,1,28,-1,28,27,5,-1,1,2,29,-1,29,28,1,-1,2,14,30,-1,30,29,2,-1,14,13,31,-1,31,30,14,-1,13,3,24,-1,24,31,13,-1,10,5,33,-1,33,32,10,-1,5,4,34,-1,34,33,5,-1,4,11,35,-1,35,34,4,-1,11,10,32,-1,32,35,11,-1});
  }
}
protected class MFInt32809 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,0,-1,0,1,2,-1,39,36,37,-1,37,38,39,-1,40,37,36,-1,36,41,40,-1,1,10,11,-1,11,2,1,-1,12,13,14,-1,14,15,12,-1,43,44,45,-1,45,46,43,-1,20,21,22,-1,22,23,20,-1,48,49,50,-1,50,51,48,-1,20,28,29,-1,29,21,20,-1,27,30,31,-1,31,24,27,-1,0,3,15,-1,15,14,0,-1,23,22,32,-1,32,33,23,-1,8,9,13,-1,13,12,8,-1,31,30,34,-1,34,35,31,-1,9,4,24,-1,24,31,9,-1,36,39,49,-1,49,48,36,-1,7,10,26,-1,26,25,7,-1,10,1,27,-1,27,26,10,-1,1,0,30,-1,30,27,1,-1,0,14,34,-1,34,30,0,-1,14,13,35,-1,35,34,14,-1,13,9,31,-1,31,35,13,-1,3,2,20,-1,20,23,3,-1,2,11,28,-1,28,20,2,-1,42,38,53,-1,53,52,42,-1,38,37,47,-1,47,53,38,-1,5,8,22,-1,22,21,5,-1,8,12,32,-1,32,22,8,-1,12,15,33,-1,33,32,12,-1,15,3,23,-1,23,33,15,-1,39,38,46,-1,46,45,39,-1,6,11,16,-1,16,19,6,-1,11,10,17,-1,17,16,11,-1,10,7,18,-1,18,17,10,-1});
  }
}
protected class MFVec3f810 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0167f,-0.035f,-0.1077f,0.0115f,-0.035f,-0.1077f,0.0085f,-0.0562f,-0.1083f,-0.0139f,-0.0562f,-0.1083f,-0.0181f,-0.0086f,-0.1079f,0.0144f,-0.0086f,-0.1079f,-0.0139f,-0.0565f,-0.0901f,0.0117f,-0.0359f,-0.0909f,-0.0165f,-0.0359f,-0.0909f,0.0084f,-0.0565f,-0.0901f,0.0139f,-0.0085f,-0.0924f,-0.018f,-0.0085f,-0.0924f,-0.0121f,-0.06f,-0.0908f,-0.0121f,-0.0601f,-0.1071f,0.0066f,-0.0601f,-0.1071f,0.0065f,-0.06f,-0.0908f,0.0062f,-0.0558f,-0.0886f,0.0094f,-0.0357f,-0.0874f,0.0122f,-0.0081f,-0.089f,-0.0155f,-0.0081f,-0.089f,-0.0142f,-0.0359f,-0.0874f,-0.0118f,-0.0559f,-0.0886f,-0.0106f,-0.0581f,-0.089f,0.005f,-0.0581f,-0.089f,-0.0117f,-0.0554f,-0.1103f,-0.0142f,-0.0351f,-0.1106f,-0.0154f,-0.0084f,-0.1106f,0.0123f,-0.0083f,-0.1106f,0.009f,-0.0349f,-0.1106f,0.0061f,-0.0553f,-0.1103f,0.0049f,-0.058f,-0.1096f,-0.0105f,-0.058f,-0.1096f,0.0119f,-0.0061f,-0.0954f,0.0122f,-0.0061f,-0.1056f,-0.0151f,-0.0062f,-0.1056f,-0.015f,-0.0061f,-0.0954f});
  }
}
protected class MFVec2f811 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8225f,0.0994f,0.8195f,0.0808f,0.7938f,0.0824f,0.7939f,0.1016f,0.8195f,0.0808f,0.7938f,0.0824f,0.7924f,0.0507f,0.8136f,0.0488f,0.7939f,0.1016f,0.8225f,0.0994f,0.8136f,0.0488f,0.7924f,0.0508f,0.7964f,0.1053f,0.8205f,0.103f,0.8205f,0.103f,0.7964f,0.1053f,0.796f,0.0481f,0.809f,0.0468f,0.809f,0.0469f,0.796f,0.048f,0.7888f,0.0827f,0.7888f,0.0826f,0.7886f,0.1011f,0.7887f,0.1011f,0.8243f,0.0799f,0.8186f,0.0479f,0.8186f,0.0479f,0.8243f,0.0801f,0.7878f,0.051f,0.7878f,0.0509f,0.8275f,0.0984f,0.8275f,0.0983f,0.7902f,0.1036f,0.7902f,0.1036f,0.8264f,0.1006f,0.8264f,0.1006f,0.916f,0.2175f,0.941f,0.2114f,0.9479f,0.2423f,0.9273f,0.2479f,0.9376f,0.1925f,0.9098f,0.1997f,0.9479f,0.2423f,0.9448f,0.2456f,0.9323f,0.249f,0.9323f,0.249f,0.9448f,0.2456f,0.9459f,0.2103f,0.9115f,0.2191f,0.9226f,0.2496f,0.9226f,0.2496f,0.9114f,0.219f,0.9524f,0.2413f,0.9524f,0.2414f});
  }
}
protected class MFFloat812 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat813 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32814 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,21,26,-1,26,4,3,-1,5,25,27,-1,27,6,5,-1,4,26,23,-1,0,5,6,-1,6,14,0,-1,4,1,17,-1,17,3,4,-1,0,2,7,-1,7,5,0,-1,7,2,1,-1,1,4,7,-1,7,22,24,-1,24,5,7,-1,4,23,22,-1,22,7,4,-1,24,25,5,-1,15,17,11,-1,11,13,15,-1,0,14,10,-1,10,8,0,-1,17,1,9,-1,9,11,17,-1,2,0,8,-1,8,12,2,-1,1,2,12,-1,12,9,1,-1,14,15,13,-1,13,10,14,-1,10,13,12,-1,12,8,10,-1,11,9,12,-1,12,13,11,-1,3,18,21,-1,14,6,16,-1,16,15,14,-1,16,3,17,-1,17,15,16,-1,16,6,19,-1,19,20,16,-1,3,16,20,-1,20,18,3,-1,19,6,27,-1,31,28,29,-1,29,30,31,-1,26,21,29,-1,29,28,26,-1,33,34,35,-1,32,33,35,-1,38,32,35,-1,38,35,36,-1,38,36,37,-1,27,25,31,-1,31,30,27,-1,44,45,39,-1,39,40,41,-1,44,39,41,-1,44,41,42,-1,44,42,43,-1,18,20,33,-1,33,32,18,-1,20,19,34,-1,34,33,20,-1,19,27,35,-1,35,34,19,-1,27,30,36,-1,36,35,27,-1,30,29,37,-1,37,36,30,-1,29,21,38,-1,38,37,29,-1,21,18,32,-1,32,38,21,-1,22,23,40,-1,40,39,22,-1,23,26,41,-1,41,40,23,-1,26,28,42,-1,42,41,26,-1,28,31,43,-1,43,42,28,-1,31,25,44,-1,44,43,31,-1,25,24,45,-1,45,44,25,-1,24,22,39,-1,39,45,24,-1});
  }
}
protected class MFInt32815 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,46,47,-1,47,7,4,-1,3,2,8,-1,9,4,7,-1,7,10,9,-1,3,11,12,-1,12,0,3,-1,9,48,49,-1,49,4,9,-1,14,13,11,-1,11,3,14,-1,49,50,51,-1,51,4,49,-1,3,8,15,-1,15,14,3,-1,51,46,4,-1,17,12,18,-1,18,19,17,-1,9,10,20,-1,20,21,9,-1,12,11,22,-1,22,18,12,-1,48,9,21,-1,21,54,48,-1,11,13,23,-1,23,22,11,-1,10,52,53,-1,53,20,10,-1,20,53,54,-1,54,21,20,-1,18,22,23,-1,23,19,18,-1,0,24,1,-1,10,7,55,-1,55,52,10,-1,25,0,12,-1,12,17,25,-1,55,7,56,-1,56,57,55,-1,0,25,27,-1,27,24,0,-1,56,7,47,-1,31,28,29,-1,29,30,31,-1,2,1,29,-1,29,28,2,-1,34,35,36,-1,33,34,36,-1,32,33,36,-1,32,36,37,-1,32,37,38,-1,6,5,31,-1,31,30,6,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,39,43,44,-1,39,44,45,-1,24,27,34,-1,34,33,24,-1,27,26,35,-1,35,34,27,-1,26,6,36,-1,36,35,26,-1,6,30,37,-1,37,36,6,-1,30,29,38,-1,38,37,30,-1,29,1,32,-1,32,38,29,-1,1,24,33,-1,33,32,1,-1,15,8,42,-1,42,41,15,-1,8,2,43,-1,43,42,8,-1,2,28,44,-1,44,43,2,-1,28,31,45,-1,45,44,28,-1,31,5,39,-1,39,45,31,-1,5,16,40,-1,40,39,5,-1,16,15,41,-1,41,40,16,-1});
  }
}
protected class MFVec3f816 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0114f,-0.0403f,-0.1069f,-0.0077f,-0.0377f,-0.1069f,0.0024f,-0.041f,-0.1097f,-0.0094f,-0.0107f,-0.0948f,-0.0094f,-0.0106f,-0.1078f,0.0103f,-0.0106f,-0.1078f,0.0103f,-0.0107f,-0.0948f,0.0011f,-0.0139f,-0.1101f,0.0097f,-0.0445f,-0.106f,-0.004f,-0.0466f,-0.1066f,0.0097f,-0.0444f,-0.0969f,-0.004f,-0.0465f,-0.0961f,0.0024f,-0.0474f,-0.1066f,0.0024f,-0.0473f,-0.0959f,0.0114f,-0.0402f,-0.0962f,0.0024f,-0.0407f,-0.0931f,0.0011f,-0.0139f,-0.0926f,-0.0077f,-0.0375f,-0.0963f,-0.0094f,-0.0108f,-0.0924f,0.0103f,-0.0108f,-0.0924f,0.0011f,-0.0139f,-0.0923f,-0.0113f,-0.0056f,-0.0925f,0.0011f,-0.0139f,-0.1104f,-0.0094f,-0.0108f,-0.1103f,0.0103f,-0.0108f,-0.1103f,0.0111f,-0.0053f,-0.1106f,-0.0113f,-0.0053f,-0.1106f,0.011f,-0.0056f,-0.0925f,-0.0077f,0.0008f,-0.11f,-0.0077f,0.0008f,-0.0935f,0.0088f,0.0008f,-0.0935f,0.0089f,0.0008f,-0.11f,-0.0089f,-0.0097f,-0.0917f,0.0011f,-0.0129f,-0.0916f,0.0097f,-0.0097f,-0.0917f,0.0104f,-0.0051f,-0.0918f,0.0084f,0.0009f,-0.0918f,-0.0073f,0.0009f,-0.0918f,-0.0108f,-0.0051f,-0.0918f,0.0011f,-0.0127f,-0.1111f,-0.0085f,-0.0099f,-0.1113f,-0.0103f,-0.0053f,-0.1114f,-0.007f,0.0007f,-0.1115f,0.0081f,0.0007f,-0.1115f,0.01f,-0.0052f,-0.1114f,0.0093f,-0.01f,-0.1113f});
  }
}
protected class MFVec2f817 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8168f,0.105f,0.8225f,0.0994f,0.7939f,0.1016f,0.7996f,0.1065f,0.9311f,0.1887f,0.7939f,0.1016f,0.8225f,0.0994f,0.9145f,0.1932f,0.794f,0.107f,0.9232f,0.1611f,0.908f,0.1649f,0.8025f,0.1324f,0.818f,0.1313f,0.7986f,0.1359f,0.7957f,0.11f,0.7939f,0.1101f,0.794f,0.107f,0.8228f,0.1342f,0.8186f,0.1401f,0.819f,0.1409f,0.9081f,0.1606f,0.921f,0.1574f,0.8033f,0.1412f,0.8033f,0.142f,0.8231f,0.1042f,0.8212f,0.1078f,0.8231f,0.1042f,0.8236f,0.1075f,0.7948f,0.0956f,0.8206f,0.0932f,0.8206f,0.0932f,0.7948f,0.0956f,0.8249f,0.0987f,0.8253f,0.1032f,0.8258f,0.1063f,0.8253f,0.1032f,0.8249f,0.0987f,0.823f,0.0929f,0.823f,0.0929f,0.7917f,0.1017f,0.7916f,0.1064f,0.7918f,0.1091f,0.7916f,0.1063f,0.7917f,0.1017f,0.7927f,0.0957f,0.7927f,0.0957f,0.9376f,0.1925f,0.9098f,0.1997f,0.927f,0.1595f,0.9344f,0.1846f,0.9361f,0.1842f,0.9366f,0.1872f,0.9035f,0.1654f,0.9061f,0.1582f,0.9213f,0.1544f,0.9096f,0.1911f,0.9084f,0.195f,0.9074f,0.1918f});
  }
}
protected class MFFloat818 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat819 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32820 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1});
  }
}
protected class MFInt32821 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1});
  }
}
protected class MFVec3f822 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0015f,-0.0366f,-0.1093f,0.0092f,-0.0359f,-0.0966f,-0.007f,-0.0331f,-0.0965f,-0.0088f,-0.0136f,-0.0965f,-0.0088f,-0.0137f,-0.1071f,0.0094f,-0.0085f,-0.1073f,-0.0096f,-0.0059f,-0.1073f,0.0094f,-0.0084f,-0.0966f,-0.0096f,-0.0058f,-0.0967f,0.0053f,-0.0037f,-0.1074f,0.0053f,-0.0035f,-0.0967f,-0.0041f,-0.0038f,-0.0967f,-0.0041f,-0.0039f,-0.1074f,0.0004f,-0.0092f,-0.1101f,0.0004f,-0.009f,-0.0935f,0.0015f,-0.0364f,-0.0939f,-0.0042f,-0.042f,-0.0967f,0.0013f,-0.0422f,-0.0965f,0.0092f,-0.0361f,-0.1069f,0.0076f,-0.0401f,-0.0974f,0.0076f,-0.0402f,-0.1059f,-0.007f,-0.0333f,-0.1071f,-0.0042f,-0.0421f,-0.1064f,0.0013f,-0.043f,-0.1064f});
  }
}
protected class MFVec2f823 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.908f,0.1649f,0.8228f,0.1342f,0.8238f,0.1612f,0.9018f,0.1387f,0.818f,0.1313f,0.8186f,0.139f,0.9163f,0.135f,0.9232f,0.1611f,0.8031f,0.1401f,0.8044f,0.1596f,0.8199f,0.1584f,0.8025f,0.1324f,0.7986f,0.1359f,0.8014f,0.1628f,0.8179f,0.1294f,0.8023f,0.1305f,0.8179f,0.1291f,0.8023f,0.1302f,0.8199f,0.1671f,0.8202f,0.1672f,0.902f,0.1343f,0.914f,0.1313f,0.8058f,0.1681f,0.8058f,0.1689f,0.9035f,0.1654f,0.8978f,0.139f,0.927f,0.1595f,0.9196f,0.1336f,0.9092f,0.1696f,0.9243f,0.1658f,0.9003f,0.1324f,0.9142f,0.1283f});
  }
}
protected class MFFloat824 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat825 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32826 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1});
  }
}
protected class MFInt32827 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1});
  }
}
protected class MFVec3f828 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0071f,-0.0117f,-0.0961f,-0.0071f,-0.0118f,-0.1068f,-0.0059f,-0.0197f,-0.0962f,-0.0059f,-0.0199f,-0.1062f,0.0076f,-0.0192f,-0.0958f,0.0014f,-0.0195f,-0.0941f,0.0076f,-0.0194f,-0.1067f,0.0014f,-0.0198f,-0.1086f,-0.003f,-0.0273f,-0.0967f,-0.003f,-0.0275f,-0.1057f,0.0076f,-0.0271f,-0.0968f,0.0023f,-0.027f,-0.0951f,0.0076f,-0.0273f,-0.1054f,0.0022f,-0.0273f,-0.1073f,-0.0037f,-0.0288f,-0.1012f,0.0068f,-0.0289f,-0.1012f,0.0023f,-0.0299f,-0.1012f,-0.0037f,-0.0285f,-0.0987f,0.0069f,-0.0286f,-0.1033f,0.002f,-0.0293f,-0.0979f,-0.0037f,-0.0286f,-0.1036f,0.0069f,-0.0285f,-0.099f,0.002f,-0.0295f,-0.1043f,0.0081f,-0.0079f,-0.0964f,-0.008f,-0.0053f,-0.1069f,-0.008f,-0.0052f,-0.0963f,-0.0033f,-0.0031f,-0.0967f,-0.0033f,-0.0032f,-0.1066f,0.0047f,-0.003f,-0.0967f,0.0081f,-0.0081f,-0.1066f,0.0047f,-0.0031f,-0.1066f,0.0004f,-0.0084f,-0.0937f,0.0004f,-0.0086f,-0.109f});
  }
}
protected class MFVec2f829 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8204f,0.1649f,0.8238f,0.1612f,0.8199f,0.1584f,0.8044f,0.1596f,0.8014f,0.1628f,0.8049f,0.166f,0.807f,0.1802f,0.8204f,0.1792f,0.8232f,0.1783f,0.8982f,0.1238f,0.9018f,0.1387f,0.9123f,0.1202f,0.9163f,0.135f,0.8038f,0.18f,0.8141f,0.1881f,0.8169f,0.1876f,0.8192f,0.1861f,0.8213f,0.1861f,0.8983f,0.1142f,0.9079f,0.1117f,0.9004f,0.112f,0.9052f,0.1108f,0.8067f,0.1872f,0.8088f,0.1869f,0.8179f,0.1883f,0.8142f,0.1891f,0.8114f,0.188f,0.8106f,0.1889f,0.9027f,0.111f,0.8192f,0.1563f,0.8048f,0.1573f,0.8192f,0.156f,0.8048f,0.1571f,0.8978f,0.139f,0.9196f,0.1336f,0.8956f,0.1239f,0.9147f,0.119f,0.8959f,0.1141f,0.9101f,0.1105f,0.8989f,0.1113f,0.9025f,0.1098f,0.906f,0.1094f,0.9033f,0.1433f,0.9173f,0.1398f});
  }
}
protected class MFFloat830 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat831 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32832 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,3,4,-1,4,7,6,-1,7,0,9,-1,9,8,7,-1,11,2,1,-1,1,5,11,-1,5,1,3,-1,3,6,5,-1,2,11,10,-1,4,0,7,-1,15,16,17,-1,14,15,17,-1,13,14,17,-1,20,21,22,-1,27,24,25,-1,25,26,27,-1,17,18,12,-1,12,13,17,-1,23,19,20,-1,20,22,23,-1,9,0,13,-1,13,12,9,-1,0,4,14,-1,14,13,0,-1,4,3,15,-1,15,14,4,-1,3,1,16,-1,16,15,3,-1,1,2,17,-1,17,16,1,-1,2,10,18,-1,18,17,2,-1,10,9,12,-1,12,18,10,-1,11,5,20,-1,20,19,11,-1,5,6,21,-1,21,20,5,-1,6,7,22,-1,22,21,6,-1,7,8,23,-1,23,22,7,-1,8,11,19,-1,19,23,8,-1,8,9,25,-1,25,24,8,-1,9,10,26,-1,26,25,9,-1,10,11,27,-1,27,26,10,-1,11,8,24,-1,24,27,11,-1});
  }
}
protected class MFInt32833 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,3,4,5,-1,5,6,3,-1,7,8,9,-1,9,10,7,-1,10,9,29,-1,29,28,10,-1,8,7,11,-1,2,4,3,-1,14,15,16,-1,13,14,16,-1,12,13,16,-1,35,36,37,-1,23,38,39,-1,39,22,23,-1,16,24,25,-1,25,12,16,-1,26,27,17,-1,17,19,26,-1,5,4,12,-1,12,25,5,-1,4,2,13,-1,13,12,4,-1,2,1,14,-1,14,13,2,-1,29,9,33,-1,33,32,29,-1,9,8,34,-1,34,33,9,-1,8,11,40,-1,40,34,8,-1,11,30,41,-1,41,40,11,-1,7,10,35,-1,35,43,7,-1,10,28,36,-1,36,35,10,-1,0,3,19,-1,19,18,0,-1,3,6,26,-1,26,19,3,-1,31,7,43,-1,43,42,31,-1,6,5,21,-1,21,20,6,-1,30,11,22,-1,22,39,30,-1,11,7,23,-1,23,22,11,-1,7,31,38,-1,38,23,7,-1});
  }
}
protected class MFVec3f834 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0172f,-0.0273f,-0.1038f,0.0101f,-0.0254f,-0.114f,0.0135f,-0.0273f,-0.1038f,-0.002f,-0.0244f,-0.117f,-0.0132f,-0.0255f,-0.1139f,0.0095f,-0.0093f,-0.1035f,-0.0021f,-0.0089f,-0.1101f,-0.0141f,-0.0093f,-0.1035f,-0.0164f,-0.0055f,-0.0885f,-0.0181f,-0.0286f,-0.0884f,0.0144f,-0.0285f,-0.0884f,0.0131f,-0.0055f,-0.0885f,-0.0145f,-0.0322f,-0.0885f,-0.0139f,-0.0314f,-0.1039f,-0.0105f,-0.0299f,-0.1126f,-0.0018f,-0.0289f,-0.1149f,0.0074f,-0.0298f,-0.1125f,0.0103f,-0.0314f,-0.1039f,0.0117f,-0.0321f,-0.0885f,0.009f,0.0012f,-0.0871f,0.0065f,-0.0025f,-0.1021f,-0.0019f,-0.0022f,-0.1069f,-0.011f,-0.0025f,-0.102f,-0.0126f,0.0012f,-0.0871f,-0.0143f,-0.0075f,-0.0868f,-0.0157f,-0.0267f,-0.0868f,0.013f,-0.0267f,-0.0868f,0.0111f,-0.0075f,-0.0867f});
  }
}
protected class MFVec2f835 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7624f,0.0345f,0.7525f,0.0502f,0.7571f,0.0508f,0.7729f,0.0334f,0.7734f,0.0512f,0.7924f,0.0508f,0.791f,0.0281f,0.9531f,0.2644f,0.9665f,0.2386f,0.9827f,0.2362f,0.9706f,0.2558f,0.9479f,0.2423f,0.7736f,0.0553f,0.7595f,0.0549f,0.7559f,0.0544f,0.7596f,0.0549f,0.7736f,0.0553f,0.7721f,0.0268f,0.7644f,0.0276f,0.7723f,0.0268f,0.7938f,0.0298f,0.795f,0.0487f,0.9457f,0.2448f,0.9501f,0.2632f,0.7926f,0.0543f,0.7926f,0.0544f,0.7903f,0.0215f,0.7903f,0.0215f,0.9803f,0.2531f,0.9874f,0.236f,0.9479f,0.2423f,0.9532f,0.2644f,0.9832f,0.2324f,0.9795f,0.2325f,0.9656f,0.2346f,0.9721f,0.2624f,0.9795f,0.2602f,0.9719f,0.2625f,0.9502f,0.2632f,0.9457f,0.2447f,0.9471f,0.2389f,0.9471f,0.2388f,0.9551f,0.2707f,0.955f,0.2707f});
  }
}
protected class MFFloat836 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat837 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32838 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,6,0,-1,0,2,9,-1,6,10,4,-1,4,0,6,-1,7,8,3,-1,3,1,7,-1,7,1,5,-1,5,11,7,-1,12,13,14,-1,14,15,12,-1,34,35,32,-1,32,33,34,-1,17,20,21,-1,21,16,17,-1,29,30,31,-1,31,24,29,-1,17,18,19,-1,19,20,17,-1,24,25,28,-1,28,29,24,-1,9,2,13,-1,13,12,9,-1,16,21,22,-1,22,23,16,-1,3,8,15,-1,15,14,3,-1,28,25,26,-1,26,27,28,-1,2,0,17,-1,17,16,2,-1,0,4,18,-1,18,17,0,-1,4,5,19,-1,19,18,4,-1,5,1,20,-1,20,19,5,-1,1,3,21,-1,21,20,1,-1,3,14,22,-1,22,21,3,-1,14,13,23,-1,23,22,14,-1,13,2,16,-1,16,23,13,-1,6,9,25,-1,25,24,6,-1,9,12,26,-1,26,25,9,-1,12,15,27,-1,27,26,12,-1,15,8,28,-1,28,27,15,-1,8,7,29,-1,29,28,8,-1,7,11,30,-1,30,29,7,-1,11,10,31,-1,31,30,11,-1,10,6,24,-1,24,31,10,-1,4,10,33,-1,33,32,4,-1,10,11,34,-1,34,33,10,-1,11,5,35,-1,35,34,11,-1,5,4,32,-1,32,35,5,-1});
  }
}
protected class MFInt32839 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,1,4,5,-1,5,2,1,-1,38,39,40,-1,40,9,38,-1,38,9,41,-1,41,42,38,-1,12,13,14,-1,14,15,12,-1,16,43,44,-1,44,45,16,-1,20,21,22,-1,22,23,20,-1,48,49,50,-1,50,51,48,-1,20,28,29,-1,29,21,20,-1,27,30,31,-1,31,24,27,-1,0,3,13,-1,13,12,0,-1,23,22,32,-1,32,33,23,-1,8,7,15,-1,15,14,8,-1,31,30,34,-1,34,35,31,-1,3,2,20,-1,20,23,3,-1,2,5,28,-1,28,20,2,-1,37,41,53,-1,53,52,37,-1,41,9,46,-1,46,53,41,-1,9,40,47,-1,47,46,9,-1,8,14,32,-1,32,22,8,-1,14,13,33,-1,33,32,14,-1,13,3,23,-1,23,33,13,-1,1,0,30,-1,30,27,1,-1,0,12,34,-1,34,30,0,-1,12,15,35,-1,35,34,12,-1,15,7,31,-1,31,35,15,-1,7,6,24,-1,24,31,7,-1,38,42,49,-1,49,48,38,-1,11,4,26,-1,26,25,11,-1,4,1,27,-1,27,26,4,-1,5,4,19,-1,19,18,5,-1,36,42,16,-1,16,45,36,-1,42,41,43,-1,43,16,42,-1,10,5,18,-1,18,17,10,-1});
  }
}
protected class MFVec3f840 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0153f,-0.0335f,-0.1105f,0.0111f,-0.0335f,-0.1105f,-0.0134f,-0.0548f,-0.1105f,0.0085f,-0.0548f,-0.1105f,-0.0172f,-0.0077f,-0.1096f,0.0135f,-0.0077f,-0.1096f,-0.0167f,-0.0353f,-0.094f,0.0115f,-0.0353f,-0.094f,0.0085f,-0.0565f,-0.0946f,-0.0139f,-0.0565f,-0.0946f,-0.0181f,-0.009f,-0.0942f,0.0144f,-0.0089f,-0.0942f,-0.012f,-0.0605f,-0.0956f,-0.0114f,-0.0594f,-0.1094f,0.0064f,-0.0595f,-0.1093f,0.0065f,-0.0605f,-0.0956f,-0.0112f,-0.0543f,-0.1125f,-0.0131f,-0.0332f,-0.1132f,-0.0149f,-0.0072f,-0.1119f,0.011f,-0.0072f,-0.1119f,0.0089f,-0.0331f,-0.1132f,0.0063f,-0.0543f,-0.1125f,0.0049f,-0.0576f,-0.1122f,-0.0098f,-0.0576f,-0.1122f,-0.0144f,-0.0355f,-0.091f,-0.0119f,-0.0555f,-0.0925f,-0.0104f,-0.0585f,-0.0932f,0.0049f,-0.0585f,-0.0932f,0.0064f,-0.0555f,-0.0925f,0.0092f,-0.0354f,-0.091f,0.0125f,-0.009f,-0.0914f,-0.0156f,-0.0091f,-0.0914f,-0.0144f,-0.0055f,-0.108f,-0.0149f,-0.0062f,-0.0961f,0.0118f,-0.0062f,-0.0961f,0.0107f,-0.0055f,-0.108f});
  }
}
protected class MFVec2f841 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7939f,0.1016f,0.7938f,0.0824f,0.7694f,0.0827f,0.766f,0.1014f,0.7924f,0.0508f,0.7734f,0.0512f,0.7938f,0.0824f,0.7939f,0.1016f,0.766f,0.1015f,0.965f,0.2069f,0.7734f,0.0512f,0.7924f,0.0507f,0.7909f,0.1057f,0.7677f,0.1056f,0.7677f,0.1057f,0.7909f,0.1057f,0.9517f,0.2441f,0.7765f,0.0488f,0.7765f,0.0488f,0.789f,0.0484f,0.7643f,0.0825f,0.7643f,0.0824f,0.7614f,0.1009f,0.7614f,0.1009f,0.7991f,0.0823f,0.7971f,0.0505f,0.7971f,0.0505f,0.7991f,0.0824f,0.7688f,0.0511f,0.7688f,0.0511f,0.7994f,0.1003f,0.7994f,0.1003f,0.7625f,0.1038f,0.7625f,0.1038f,0.7972f,0.1034f,0.7972f,0.1034f,0.9479f,0.2423f,0.9665f,0.2385f,0.941f,0.2114f,0.9376f,0.1925f,0.9651f,0.1878f,0.9665f,0.2386f,0.9479f,0.2423f,0.9639f,0.2415f,0.9639f,0.2415f,0.9517f,0.244f,0.9701f,0.2063f,0.9698f,0.1875f,0.9358f,0.2124f,0.9433f,0.2434f,0.9433f,0.2434f,0.9358f,0.2123f,0.9711f,0.2379f,0.9711f,0.2379f});
  }
}
protected class MFFloat842 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat843 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32844 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,23,22,-1,22,4,3,-1,5,32,31,-1,31,6,5,-1,4,22,44,-1,0,5,6,-1,6,14,0,-1,4,1,17,-1,17,3,4,-1,0,2,7,-1,7,5,0,-1,7,2,1,-1,1,4,7,-1,7,43,45,-1,45,5,7,-1,4,44,43,-1,43,7,4,-1,45,32,5,-1,15,17,11,-1,11,13,15,-1,0,14,10,-1,10,8,0,-1,17,1,9,-1,9,11,17,-1,2,0,8,-1,8,12,2,-1,1,2,12,-1,12,9,1,-1,14,15,13,-1,13,10,14,-1,10,13,12,-1,12,8,10,-1,11,9,12,-1,12,13,11,-1,3,40,23,-1,14,6,16,-1,16,15,14,-1,16,3,17,-1,17,15,16,-1,16,6,42,-1,42,41,16,-1,3,16,41,-1,41,40,3,-1,42,6,31,-1,21,18,19,-1,19,20,21,-1,22,23,19,-1,19,18,22,-1,26,27,28,-1,25,26,28,-1,24,25,28,-1,24,28,29,-1,24,29,30,-1,31,32,21,-1,21,20,31,-1,33,34,35,-1,35,36,37,-1,33,35,37,-1,33,37,38,-1,33,38,39,-1,40,41,26,-1,26,25,40,-1,41,42,27,-1,27,26,41,-1,42,31,28,-1,28,27,42,-1,31,20,29,-1,29,28,31,-1,20,19,30,-1,30,29,20,-1,19,23,24,-1,24,30,19,-1,23,40,25,-1,25,24,23,-1,43,44,36,-1,36,35,43,-1,44,22,37,-1,37,36,44,-1,22,18,38,-1,38,37,22,-1,18,21,39,-1,39,38,18,-1,21,32,33,-1,33,39,21,-1,32,45,34,-1,34,33,32,-1,45,43,35,-1,35,34,45,-1});
  }
}
protected class MFInt32845 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,46,47,-1,47,7,4,-1,3,2,8,-1,9,4,7,-1,7,10,9,-1,3,11,12,-1,12,0,3,-1,9,48,49,-1,49,4,9,-1,14,13,11,-1,11,3,14,-1,49,50,51,-1,51,4,49,-1,3,8,15,-1,15,14,3,-1,51,46,4,-1,17,12,18,-1,18,19,17,-1,9,10,20,-1,20,21,9,-1,12,11,22,-1,22,18,12,-1,48,9,21,-1,21,54,48,-1,11,13,23,-1,23,22,11,-1,10,52,53,-1,53,20,10,-1,20,53,54,-1,54,21,20,-1,18,22,23,-1,23,19,18,-1,0,24,1,-1,10,7,55,-1,55,52,10,-1,25,0,12,-1,12,17,25,-1,55,7,56,-1,56,57,55,-1,0,25,27,-1,27,24,0,-1,56,7,47,-1,31,28,29,-1,29,30,31,-1,2,1,29,-1,29,28,2,-1,34,35,36,-1,33,34,36,-1,32,33,36,-1,32,36,37,-1,32,37,38,-1,6,5,31,-1,31,30,6,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,39,43,44,-1,39,44,45,-1,24,27,34,-1,34,33,24,-1,27,26,35,-1,35,34,27,-1,26,6,36,-1,36,35,26,-1,6,30,37,-1,37,36,6,-1,30,29,38,-1,38,37,30,-1,29,1,32,-1,32,38,29,-1,1,24,33,-1,33,32,1,-1,15,8,42,-1,42,41,15,-1,8,2,43,-1,43,42,8,-1,2,28,44,-1,44,43,2,-1,28,31,45,-1,45,44,28,-1,31,5,39,-1,39,45,31,-1,5,16,40,-1,40,39,5,-1,16,15,41,-1,41,40,16,-1});
  }
}
protected class MFVec3f846 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0114f,-0.0356f,-0.1063f,-0.0077f,-0.0332f,-0.1064f,0.0024f,-0.0362f,-0.109f,-0.0094f,-0.0095f,-0.0952f,-0.0094f,-0.0085f,-0.1064f,0.0103f,-0.0085f,-0.1064f,0.0103f,-0.0095f,-0.0952f,0.0011f,-0.0108f,-0.1093f,0.0097f,-0.0394f,-0.1056f,-0.0041f,-0.0413f,-0.1062f,0.0097f,-0.0392f,-0.0966f,-0.0041f,-0.0411f,-0.0959f,0.0024f,-0.0421f,-0.1062f,0.0024f,-0.0418f,-0.0956f,0.0114f,-0.0353f,-0.096f,0.0024f,-0.0358f,-0.093f,0.0011f,-0.0128f,-0.0932f,-0.0077f,-0.0329f,-0.0961f,-0.0077f,0.0032f,-0.1086f,-0.0077f,0.0018f,-0.0935f,0.0088f,0.0018f,-0.0935f,0.0089f,0.0032f,-0.1086f,-0.0108f,-0.0025f,-0.109f,-0.0113f,-0.0042f,-0.0931f,-0.0108f,-0.0039f,-0.092f,-0.0089f,-0.0085f,-0.0919f,0.0011f,-0.0117f,-0.0922f,0.0097f,-0.0085f,-0.0919f,0.0104f,-0.0039f,-0.092f,0.0083f,0.0018f,-0.0917f,-0.0073f,0.0018f,-0.0917f,0.0111f,-0.0042f,-0.0931f,0.0111f,-0.0026f,-0.109f,0.01f,-0.0018f,-0.1101f,0.0093f,-0.0072f,-0.1103f,0.0011f,-0.0098f,-0.1097f,-0.0085f,-0.0071f,-0.1103f,-0.0103f,-0.0019f,-0.1101f,-0.007f,0.0033f,-0.1096f,0.0081f,0.0033f,-0.1096f,-0.0094f,-0.0097f,-0.0928f,0.0011f,-0.0128f,-0.0929f,0.0103f,-0.0097f,-0.0928f,0.0012f,-0.0108f,-0.1095f,-0.0092f,-0.0083f,-0.1093f,0.0103f,-0.0083f,-0.1093f});
  }
}
protected class MFVec2f847 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7878f,0.1071f,0.7939f,0.1016f,0.766f,0.1014f,0.7709f,0.1068f,0.9594f,0.1833f,0.766f,0.1015f,0.7939f,0.1016f,0.9426f,0.186f,0.7648f,0.1066f,0.9545f,0.1568f,0.9398f,0.1599f,0.771f,0.1315f,0.7861f,0.131f,0.767f,0.1345f,0.7667f,0.1094f,0.7644f,0.1092f,0.7648f,0.1066f,0.7904f,0.1338f,0.786f,0.139f,0.7863f,0.1397f,0.9402f,0.1559f,0.9531f,0.1532f,0.7709f,0.1396f,0.7709f,0.1403f,0.794f,0.107f,0.7917f,0.1102f,0.794f,0.107f,0.7939f,0.1101f,0.7675f,0.0958f,0.7934f,0.0956f,0.7934f,0.0956f,0.7675f,0.0958f,0.7967f,0.1011f,0.7964f,0.1056f,0.7964f,0.1088f,0.7964f,0.1057f,0.7967f,0.1011f,0.7958f,0.0955f,0.7958f,0.0955f,0.7633f,0.1008f,0.7625f,0.1056f,0.7622f,0.1084f,0.7625f,0.1055f,0.7633f,0.1008f,0.765f,0.0957f,0.765f,0.0957f,0.9651f,0.1878f,0.9376f,0.1925f,0.9583f,0.1554f,0.963f,0.1801f,0.9654f,0.1799f,0.9654f,0.1826f,0.9354f,0.1602f,0.9385f,0.1536f,0.9536f,0.1504f,0.9383f,0.1837f,0.9366f,0.1872f,0.9361f,0.1842f});
  }
}
protected class MFFloat848 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat849 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32850 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1});
  }
}
protected class MFInt32851 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1});
  }
}
protected class MFVec3f852 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0017f,-0.035f,-0.1086f,0.0093f,-0.0343f,-0.0966f,-0.0068f,-0.0318f,-0.0965f,-0.0088f,-0.0127f,-0.0967f,-0.0088f,-0.0129f,-0.1068f,0.0094f,-0.0082f,-0.1071f,-0.0096f,-0.0058f,-0.1072f,0.0094f,-0.0079f,-0.0968f,-0.0096f,-0.0055f,-0.0969f,0.0053f,-0.0037f,-0.1071f,0.0053f,-0.0035f,-0.097f,-0.0041f,-0.0038f,-0.097f,-0.0041f,-0.004f,-0.1071f,0.0004f,-0.0088f,-0.1098f,0.0004f,-0.0084f,-0.0938f,0.0017f,-0.0347f,-0.0941f,-0.004f,-0.0398f,-0.0967f,0.0015f,-0.0401f,-0.0965f,0.0093f,-0.0345f,-0.1063f,0.0078f,-0.0382f,-0.0974f,0.0078f,-0.0383f,-0.1054f,-0.0068f,-0.032f,-0.1066f,-0.004f,-0.04f,-0.1059f,0.0015f,-0.0408f,-0.1059f});
  }
}
protected class MFVec2f853 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9398f,0.1599f,0.7904f,0.1338f,0.7888f,0.1598f,0.9363f,0.1341f,0.7861f,0.131f,0.7859f,0.138f,0.9502f,0.1313f,0.9545f,0.1568f,0.7712f,0.1385f,0.7707f,0.1575f,0.7854f,0.1571f,0.771f,0.1315f,0.767f,0.1345f,0.7676f,0.1604f,0.786f,0.1292f,0.7713f,0.1297f,0.786f,0.129f,0.7713f,0.1294f,0.7847f,0.165f,0.7849f,0.1652f,0.9369f,0.1301f,0.9483f,0.1278f,0.7712f,0.1654f,0.7712f,0.1661f,0.9354f,0.1602f,0.9325f,0.1343f,0.9583f,0.1554f,0.9533f,0.1301f,0.9406f,0.1642f,0.9551f,0.1612f,0.9355f,0.1283f,0.9488f,0.1251f});
  }
}
protected class MFFloat854 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat855 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32856 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1});
  }
}
protected class MFInt32857 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1});
  }
}
protected class MFVec3f858 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0073f,-0.0118f,-0.0972f,-0.0073f,-0.012f,-0.1073f,-0.0057f,-0.0202f,-0.0975f,-0.0057f,-0.0204f,-0.1068f,0.0078f,-0.0195f,-0.0971f,0.0016f,-0.0199f,-0.0954f,0.0077f,-0.0197f,-0.1072f,0.0016f,-0.0202f,-0.109f,-0.0032f,-0.0269f,-0.0981f,-0.0032f,-0.0271f,-0.106f,0.0078f,-0.0265f,-0.0982f,0.0025f,-0.0271f,-0.0964f,0.0078f,-0.0267f,-0.1058f,0.0024f,-0.0273f,-0.1076f,-0.004f,-0.0289f,-0.102f,0.007f,-0.0289f,-0.102f,0.0025f,-0.0302f,-0.1019f,-0.0039f,-0.0284f,-0.0998f,0.0071f,-0.0284f,-0.1038f,0.0022f,-0.0295f,-0.099f,-0.0039f,-0.0285f,-0.1041f,0.0071f,-0.0284f,-0.1001f,0.0022f,-0.0297f,-0.1047f,0.0083f,-0.0084f,-0.0975f,-0.0078f,-0.006f,-0.1075f,-0.0078f,-0.0058f,-0.0974f,-0.0032f,-0.0039f,-0.0978f,-0.0032f,-0.0041f,-0.1072f,0.0049f,-0.0039f,-0.0978f,0.0083f,-0.0086f,-0.1072f,0.0049f,-0.0041f,-0.1072f,0.0006f,-0.0087f,-0.0949f,0.0006f,-0.009f,-0.1095f});
  }
}
protected class MFVec2f859 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7853f,0.163f,0.7888f,0.1598f,0.7854f,0.1571f,0.7707f,0.1575f,0.7676f,0.1604f,0.7706f,0.1634f,0.7714f,0.1739f,0.7841f,0.1736f,0.787f,0.1731f,0.9344f,0.121f,0.9363f,0.1341f,0.9479f,0.1182f,0.9502f,0.1313f,0.7684f,0.1736f,0.7774f,0.1846f,0.7801f,0.1842f,0.7824f,0.1828f,0.7844f,0.1829f,0.9351f,0.111f,0.9443f,0.1091f,0.9372f,0.109f,0.9418f,0.1081f,0.7705f,0.1833f,0.7725f,0.1831f,0.781f,0.1849f,0.7774f,0.1856f,0.7748f,0.1843f,0.774f,0.1852f,0.9395f,0.1081f,0.7849f,0.1552f,0.7712f,0.1555f,0.7849f,0.1549f,0.7712f,0.1553f,0.9325f,0.1343f,0.9533f,0.1301f,0.9319f,0.1209f,0.9502f,0.1172f,0.9329f,0.1108f,0.9464f,0.108f,0.9358f,0.1082f,0.9393f,0.1069f,0.9427f,0.1067f,0.9372f,0.1384f,0.9506f,0.1357f});
  }
}
protected class MFFloat860 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat861 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32862 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,9,0,-1,0,3,11,-1,5,2,1,-1,1,4,5,-1,3,0,2,-1,2,5,3,-1,9,13,8,-1,8,0,9,-1,2,7,6,-1,6,1,2,-1,6,14,10,-1,10,1,6,-1,1,10,12,-1,12,4,1,-1,0,8,7,-1,7,2,0,-1,25,26,27,-1,27,20,25,-1,16,17,18,-1,16,18,19,-1,15,16,19,-1,30,31,32,-1,29,30,32,-1,28,29,32,-1,11,3,16,-1,16,15,11,-1,3,5,17,-1,17,16,3,-1,5,4,18,-1,18,17,5,-1,4,12,19,-1,19,18,4,-1,24,21,22,-1,22,23,24,-1,20,21,24,-1,24,25,20,-1,9,11,21,-1,21,20,9,-1,11,15,22,-1,22,21,11,-1,15,19,23,-1,23,22,15,-1,19,12,24,-1,24,23,19,-1,12,10,25,-1,25,24,12,-1,10,14,26,-1,26,25,10,-1,14,13,27,-1,27,26,14,-1,13,9,20,-1,20,27,13,-1,14,6,29,-1,29,28,14,-1,6,7,30,-1,30,29,6,-1,7,8,31,-1,31,30,7,-1,8,13,32,-1,32,31,8,-1,13,14,28,-1,28,32,13,-1});
  }
}
protected class MFInt32863 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,33,34,6,-1,6,35,33,-1,3,2,5,-1,5,4,3,-1,1,8,9,-1,9,2,1,-1,34,37,11,-1,11,6,34,-1,11,12,38,-1,38,6,11,-1,6,38,39,-1,39,35,6,-1,2,9,10,-1,10,5,2,-1,40,16,41,-1,41,42,40,-1,20,21,22,-1,20,22,23,-1,19,20,23,-1,43,44,45,-1,25,43,45,-1,24,25,45,-1,0,3,20,-1,20,19,0,-1,3,4,21,-1,21,20,3,-1,4,7,22,-1,22,21,4,-1,7,14,23,-1,23,22,7,-1,29,30,31,-1,31,32,29,-1,18,30,29,-1,29,15,18,-1,1,0,30,-1,30,18,1,-1,0,19,31,-1,31,30,0,-1,19,23,32,-1,32,31,19,-1,23,14,29,-1,29,32,23,-1,14,13,15,-1,15,29,14,-1,38,12,16,-1,16,40,38,-1,12,36,41,-1,41,16,12,-1,8,1,18,-1,18,17,8,-1,12,11,25,-1,25,24,12,-1,11,37,43,-1,43,25,11,-1,10,9,27,-1,27,26,10,-1,9,8,28,-1,28,27,9,-1,36,12,24,-1,24,45,36,-1});
  }
}
protected class MFVec3f864 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0124f,-0.0337f,-0.1106f,0.0101f,-0.0337f,-0.1106f,-0.0011f,-0.0323f,-0.114f,-0.0114f,-0.0544f,-0.1114f,0.0088f,-0.0544f,-0.1114f,-0.0006f,-0.0538f,-0.1143f,0.0106f,-0.0079f,-0.1069f,-0.0014f,-0.0069f,-0.11f,-0.0127f,-0.008f,-0.1069f,-0.0147f,-0.0357f,-0.0976f,0.0116f,-0.0357f,-0.0976f,-0.0128f,-0.0569f,-0.0976f,0.009f,-0.0569f,-0.0976f,-0.0167f,-0.0099f,-0.0967f,0.014f,-0.0099f,-0.0967f,-0.0093f,-0.0612f,-0.0992f,-0.0076f,-0.0586f,-0.109f,-0.0006f,-0.0582f,-0.1111f,0.0057f,-0.0586f,-0.1091f,0.0059f,-0.0612f,-0.0992f,-0.0125f,-0.036f,-0.0945f,-0.0107f,-0.0569f,-0.0955f,-0.0081f,-0.0601f,-0.0961f,0.0046f,-0.0601f,-0.0961f,0.0069f,-0.0569f,-0.0955f,0.0094f,-0.0359f,-0.0945f,0.0115f,-0.0102f,-0.0944f,-0.0144f,-0.0102f,-0.0944f,0.0097f,-0.0068f,-0.0988f,0.0079f,-0.0059f,-0.1046f,-0.0014f,-0.005f,-0.107f,-0.0101f,-0.0059f,-0.1047f,-0.0123f,-0.0068f,-0.0987f});
  }
}
protected class MFVec2f865 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.766f,0.1014f,0.7694f,0.0827f,0.748f,0.0813f,0.7455f,0.0995f,0.7415f,0.0989f,0.7435f,0.0798f,0.9864f,0.2045f,0.7455f,0.0995f,0.7734f,0.0512f,0.7571f,0.0508f,0.7525f,0.0502f,0.9827f,0.2362f,0.9665f,0.2386f,0.7694f,0.0827f,0.766f,0.1015f,0.774f,0.0829f,0.9619f,0.2395f,0.7782f,0.0512f,0.774f,0.083f,0.7619f,0.1052f,0.7474f,0.1039f,0.7446f,0.1034f,0.7473f,0.1038f,0.7619f,0.1052f,0.9712f,0.2404f,0.9799f,0.239f,0.7566f,0.0479f,0.7602f,0.0485f,0.7691f,0.0486f,0.771f,0.1015f,0.771f,0.1014f,0.768f,0.1042f,0.768f,0.1042f,0.9897f,0.1861f,0.991f,0.2053f,0.9856f,0.1862f,0.9665f,0.2385f,0.9874f,0.236f,0.965f,0.2069f,0.9651f,0.1878f,0.9604f,0.2075f,0.9619f,0.2395f,0.9604f,0.2074f,0.9836f,0.239f,0.98f,0.239f,0.9712f,0.2404f});
  }
}
protected class MFFloat866 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat867 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32868 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10,11,6,-1,6,8,10,-1,0,9,5,-1,5,3,0,-1,11,1,4,-1,4,6,11,-1,2,0,3,-1,3,7,2,-1,1,2,7,-1,7,4,1,-1,9,10,8,-1,8,5,9,-1,5,8,7,-1,7,3,5,-1,6,4,7,-1,7,8,6,-1,17,2,1,-1,1,13,17,-1,14,25,26,-1,26,15,14,-1,0,14,15,-1,15,9,0,-1,13,1,11,-1,11,12,13,-1,2,17,14,-1,14,0,2,-1,12,36,34,-1,9,15,16,-1,16,10,9,-1,16,12,11,-1,11,10,16,-1,16,15,37,-1,37,35,16,-1,12,16,35,-1,35,36,12,-1,37,15,26,-1,12,34,23,-1,23,13,12,-1,13,23,24,-1,24,17,13,-1,17,24,25,-1,25,14,17,-1,21,20,19,-1,22,21,19,-1,18,22,19,-1,23,19,20,-1,20,24,23,-1,24,20,21,-1,21,25,24,-1,25,21,22,-1,22,26,25,-1,27,33,32,-1,27,32,31,-1,31,30,29,-1,31,29,28,-1,27,31,28,-1,34,18,19,-1,19,23,34,-1,35,29,30,-1,30,36,35,-1,36,30,31,-1,31,34,36,-1,34,31,32,-1,32,18,34,-1,18,32,33,-1,33,22,18,-1,22,33,27,-1,27,26,22,-1,26,27,28,-1,28,37,26,-1,37,28,29,-1,29,35,37,-1});
  }
}
protected class MFInt32869 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,5,6,-1,6,7,4,-1,1,8,9,-1,9,2,1,-1,40,4,7,-1,7,41,40,-1,8,10,11,-1,11,9,8,-1,5,38,39,-1,39,6,5,-1,6,39,41,-1,41,7,6,-1,2,9,11,-1,11,3,2,-1,12,10,8,-1,8,13,12,-1,14,43,44,-1,44,17,14,-1,4,14,17,-1,17,5,4,-1,13,8,1,-1,1,18,13,-1,40,42,14,-1,14,4,40,-1,18,19,20,-1,5,17,45,-1,45,38,5,-1,21,18,1,-1,1,0,21,-1,45,17,46,-1,46,47,45,-1,18,21,23,-1,23,19,18,-1,46,17,44,-1,18,20,24,-1,24,13,18,-1,13,24,25,-1,25,12,13,-1,42,48,43,-1,43,14,42,-1,28,29,30,-1,27,28,30,-1,26,27,30,-1,24,30,29,-1,29,25,24,-1,25,29,28,-1,28,15,25,-1,15,28,27,-1,27,16,15,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,34,36,37,-1,31,34,37,-1,20,26,30,-1,30,24,20,-1,23,36,35,-1,35,19,23,-1,19,35,34,-1,34,20,19,-1,20,34,33,-1,33,26,20,-1,26,33,32,-1,32,27,26,-1,27,32,31,-1,31,16,27,-1,16,31,37,-1,37,22,16,-1,22,37,36,-1,36,23,22,-1});
  }
}
protected class MFVec3f870 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0103f,-0.0254f,-0.1063f,-0.0075f,-0.0234f,-0.1067f,0.0026f,-0.0258f,-0.109f,0.0084f,-0.0285f,-0.1057f,-0.0041f,-0.03f,-0.1064f,0.0084f,-0.0286f,-0.0981f,-0.0041f,-0.0301f,-0.0975f,0.0025f,-0.0305f,-0.1064f,0.0025f,-0.0306f,-0.098f,0.0103f,-0.0256f,-0.0973f,0.002f,-0.0262f,-0.0944f,-0.0075f,-0.0236f,-0.0972f,-0.0089f,-0.012f,-0.0961f,-0.0087f,-0.0093f,-0.1069f,0.0098f,-0.0093f,-0.1069f,0.0099f,-0.012f,-0.0961f,0.0009f,-0.015f,-0.0941f,0.0011f,-0.0087f,-0.1097f,-0.0075f,-0.0007f,-0.0935f,-0.006f,0.0017f,-0.1052f,0.0015f,0.0021f,-0.1077f,0.0086f,0.0017f,-0.1051f,0.0087f,-0.0008f,-0.0933f,-0.0097f,-0.0042f,-0.1071f,0.0011f,-0.0036f,-0.11f,0.0105f,-0.0042f,-0.1071f,0.0107f,-0.0068f,-0.0933f,0.01f,-0.0063f,-0.0922f,0.0094f,-0.0117f,-0.0927f,0.0006f,-0.0141f,-0.0935f,-0.0083f,-0.0116f,-0.0927f,-0.01f,-0.0062f,-0.0923f,-0.0069f,-0.0009f,-0.0926f,0.008f,-0.0009f,-0.0925f,-0.0111f,-0.0068f,-0.0933f,0.0008f,-0.015f,-0.0939f,-0.0095f,-0.0125f,-0.0937f,0.0099f,-0.0125f,-0.0937f});
  }
}
protected class MFVec2f871 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7578f,0.1276f,0.7543f,0.1247f,0.753f,0.131f,0.7531f,0.1316f,0.9854f,0.1598f,0.9725f,0.1615f,0.9734f,0.1584f,0.9844f,0.1569f,0.7413f,0.123f,0.7403f,0.1293f,0.7378f,0.1249f,0.7401f,0.1299f,0.7405f,0.104f,0.7443f,0.1047f,0.9859f,0.1809f,0.7455f,0.0995f,0.766f,0.1015f,0.9713f,0.1822f,0.7589f,0.1059f,0.7648f,0.1066f,0.766f,0.1014f,0.7622f,0.1091f,0.7648f,0.1066f,0.7644f,0.1092f,0.7455f,0.0995f,0.7415f,0.0989f,0.7664f,0.0954f,0.7667f,0.0954f,0.7485f,0.0932f,0.7449f,0.0928f,0.7484f,0.0932f,0.7683f,0.1016f,0.7686f,0.0957f,0.7683f,0.0956f,0.7679f,0.1015f,0.7671f,0.1055f,0.7666f,0.1084f,0.7674f,0.1056f,0.9687f,0.1615f,0.9723f,0.1564f,0.9888f,0.1589f,0.9852f,0.1547f,0.9898f,0.1809f,0.9856f,0.1862f,0.9651f,0.1878f,0.9675f,0.1796f,0.9654f,0.1826f,0.9654f,0.1799f,0.9897f,0.1861f});
  }
}
protected class MFFloat872 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat873 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32874 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1});
  }
}
protected class MFInt32875 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1});
  }
}
protected class MFVec3f876 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0015f,-0.0272f,-0.1084f,0.009f,-0.0264f,-0.0971f,-0.0066f,-0.0247f,-0.097f,-0.0085f,-0.012f,-0.0973f,-0.0085f,-0.0118f,-0.1064f,0.0086f,-0.0083f,-0.1062f,-0.0092f,-0.0063f,-0.1066f,0.0086f,-0.0084f,-0.0972f,-0.0092f,-0.0064f,-0.0971f,0.0048f,-0.0049f,-0.1065f,0.0048f,-0.005f,-0.097f,-0.0036f,-0.0053f,-0.097f,-0.0036f,-0.0052f,-0.1065f,0.0009f,-0.0086f,-0.1089f,0.0004f,-0.009f,-0.0943f,0.0015f,-0.0268f,-0.0946f,-0.0045f,-0.031f,-0.0972f,-0.0013f,-0.0314f,-0.097f,0.009f,-0.0267f,-0.1062f,0.0078f,-0.0295f,-0.0978f,0.0073f,-0.0297f,-0.1052f,-0.0066f,-0.025f,-0.1065f,-0.0045f,-0.0312f,-0.1057f,-0.0014f,-0.0316f,-0.1057f});
  }
}
protected class MFVec2f877 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9725f,0.1615f,0.7578f,0.1276f,0.7541f,0.1444f,0.9727f,0.1441f,0.7543f,0.1247f,0.7533f,0.1302f,0.9851f,0.1424f,0.9854f,0.1598f,0.7404f,0.1285f,0.7384f,0.1404f,0.7513f,0.1418f,0.7413f,0.123f,0.7378f,0.1249f,0.7355f,0.1424f,0.7545f,0.1231f,0.7416f,0.1216f,0.7546f,0.1229f,0.7417f,0.1214f,0.7496f,0.1479f,0.7498f,0.1481f,0.9738f,0.1409f,0.9839f,0.1396f,0.738f,0.1467f,0.7381f,0.1469f,0.9687f,0.1616f,0.9694f,0.1441f,0.9888f,0.1589f,0.988f,0.1416f,0.9725f,0.165f,0.9854f,0.1633f,0.9728f,0.1395f,0.9846f,0.1375f});
  }
}
protected class MFFloat878 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat879 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32880 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1});
  }
}
protected class MFInt32881 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1});
  }
}
protected class MFVec3f882 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0073f,-0.0107f,-0.097f,-0.0073f,-0.011f,-0.1064f,-0.0066f,-0.0193f,-0.0972f,-0.0067f,-0.0196f,-0.106f,0.0078f,-0.0197f,-0.0969f,0.0008f,-0.0195f,-0.0952f,0.0078f,-0.02f,-0.1064f,0.0007f,-0.0199f,-0.1081f,-0.0055f,-0.0259f,-0.0977f,-0.0055f,-0.0262f,-0.1053f,0.008f,-0.0267f,-0.0978f,0.0014f,-0.0266f,-0.0961f,0.008f,-0.0269f,-0.1051f,0.0013f,-0.0269f,-0.1069f,-0.006f,-0.0274f,-0.1015f,0.0066f,-0.0285f,-0.1015f,0.0009f,-0.0291f,-0.1014f,-0.0058f,-0.0271f,-0.0993f,0.0068f,-0.0282f,-0.1033f,0.0007f,-0.0284f,-0.0986f,-0.0058f,-0.0272f,-0.1035f,0.0068f,-0.028f,-0.0996f,0.0006f,-0.0287f,-0.1041f,0.0081f,-0.0078f,-0.0973f,-0.0075f,-0.0064f,-0.1067f,-0.0075f,-0.0061f,-0.0972f,-0.0028f,-0.0045f,-0.0976f,-0.0028f,-0.0048f,-0.1064f,0.005f,-0.0043f,-0.0976f,0.0081f,-0.0081f,-0.1064f,0.005f,-0.0046f,-0.1064f,0.0005f,-0.0082f,-0.0948f,0.0005f,-0.0086f,-0.1086f});
  }
}
protected class MFVec2f883 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7505f,0.1465f,0.7541f,0.1444f,0.7513f,0.1418f,0.7384f,0.1404f,0.7355f,0.1424f,0.7377f,0.1451f,0.7372f,0.1554f,0.7483f,0.1563f,0.7507f,0.1564f,0.9726f,0.1318f,0.9727f,0.1441f,0.9847f,0.1302f,0.9851f,0.1424f,0.7347f,0.1548f,0.7409f,0.1641f,0.7434f,0.1641f,0.7455f,0.1632f,0.7469f,0.164f,0.9746f,0.124f,0.9828f,0.1229f,0.9766f,0.1225f,0.9807f,0.1219f,0.7351f,0.1625f,0.7369f,0.1626f,0.7443f,0.165f,0.7408f,0.1649f,0.7387f,0.1637f,0.7379f,0.1643f,0.9788f,0.1219f,0.7512f,0.1402f,0.7392f,0.1389f,0.7512f,0.14f,0.7393f,0.1388f,0.9694f,0.1441f,0.988f,0.1416f,0.9705f,0.1317f,0.9868f,0.1295f,0.9727f,0.1237f,0.9848f,0.1221f,0.9756f,0.1218f,0.9787f,0.1209f,0.9817f,0.1209f,0.973f,0.1475f,0.9849f,0.146f});
  }
}
}
