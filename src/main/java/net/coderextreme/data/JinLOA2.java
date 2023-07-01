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
public class JinLOA2 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new JinLOA2().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/JinLOA2.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("JinLOA2.x3d"))
        .addMeta(new meta().setName("creator").setContent("Jin Hoon Lee and Min Joo Lee"))
        .addMeta(new meta().setName("translator").setContent("Chul Hee Jung and Myeong Won Lee"))
        .addMeta(new meta().setName("created").setContent("31 March 2011"))
        .addMeta(new meta().setName("translated").setContent("1 November 2014"))
        .addMeta(new meta().setName("modified").setContent("23 December 2021"))
        .addMeta(new meta().setName("description").setContent("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model."))
        .addMeta(new meta().setName("reference").setContent("KoreanCharacter00ReadMe.txt"))
        .addMeta(new meta().setName("reference").setContent("KoreanCharacterHumanMotion_Infotech2014_140706.pdf"))
        .addMeta(new meta().setName("reference").setContent("KoreanCharactersIllustrated.pdf"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JinLOA2.x3d"))
        .addMeta(new meta().setName("generator").setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"))
        .addMeta(new meta().setName("generator").setContent("Suwon HAnim Converter"))
        .addMeta(new meta().setName("generator").setContent("Gnu Image Manipulation Program, http://www.gimp.org"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("JinLOA2.x3d"))
        .addChild(new NavigationInfo().setSpeed(1.5f))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,1f,0f}).setDescription("JinLOA2").setPosition(new float[] {0f,1f,3f}))
        .addChild(new HAnimHumanoid().setName("JinLOA2").setDEF("hanim_JinLOA2").setLoa(2).setScale(new float[] {0.0225f,0.0225f,0.0225f}).setVersion("2.0")
          .setMetadata(new MetadataSet("hanim_JinLOA2").setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .setMetadata(new MetadataString().setName("authorName").setValue(new MFString0().getArray()))
            .setMetadata(new MetadataString().setName("authorEmail").setValue(new MFString1().getArray()))
            .setMetadata(new MetadataString().setName("creationDate").setValue(new MFString2().getArray()))
            .setMetadata(new MetadataString().setName("gender").setValue(new MFString3().getArray()))
            .addValue(new MetadataFloat().setName("height").setValue(new MFFloat4().getArray()))
            .setMetadata(new MetadataString().setName("humanoidVersion").setValue(new MFString5().getArray())))
          .addSkeleton(new HAnimJoint("hanim_JinLOA2").setName("humanoid_root").setDEF("hanim_humanoid_root").setCenter(new float[] {0f,35.799999f,-0.7076f}).setUlimit(new MFFloat6().getArray()).setLlimit(new MFFloat7().getArray())
            .addChild(new HAnimSegment("hanim_humanoid_root").setName("sacrum").setDEF("hanim_sacrum")
              .addChild(new Transform("hanim_sacrum").setTranslation(new float[] {0f,35.799999f,-0.7076f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                    .setTexture(new ImageTexture().setDEF("JinLOA2TextureAtlas").setUrl(new MFString8().getArray())))
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt329().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3210().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f11().getArray()))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f12().getArray()))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new float[] {0f,30.530001f,-0.7076f}).setUlimit(new MFFloat13().getArray()).setLlimit(new MFFloat14().getArray())
              .addChild(new HAnimSegment("hanim_sacroiliac").setName("pelvis").setDEF("hanim_pelvis")
                .addChild(new Transform("hanim_pelvis").setTranslation(new float[] {0f,30.530001f,-0.7076f})
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                      .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3215().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3216().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f17().getArray()))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f18().getArray()))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName("l_hip").setDEF("hanim_l_hip").setCenter(new float[] {4.207f,35.830002f,-0.8155f}).setUlimit(new MFFloat19().getArray()).setLlimit(new MFFloat20().getArray())
                .addChild(new HAnimSegment("hanim_l_hip").setName("l_thigh").setDEF("hanim_l_thigh")
                  .addChild(new Transform("hanim_l_thigh").setTranslation(new float[] {4.207f,35.830002f,-0.8155f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3221().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3222().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f23().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f24().getArray()))))))
                .addChild(new HAnimJoint("hanim_l_hip").setName("l_knee").setDEF("hanim_l_knee").setCenter(new float[] {4.116f,17.26f,-0.8639f}).setUlimit(new MFFloat25().getArray()).setLlimit(new MFFloat26().getArray())
                  .addChild(new HAnimSegment("hanim_l_knee").setName("l_calf").setDEF("hanim_l_calf")
                    .addChild(new Transform("hanim_l_calf").setTranslation(new float[] {4.116f,17.26f,-0.8639f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3227().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3228().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f29().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f30().getArray()))))))
                  .addChild(new HAnimJoint("hanim_l_knee").setName("l_talocrural").setDEF("hanim_l_talocrural").setCenter(new float[] {3.854f,3.939f,-0.7038f}).setUlimit(new MFFloat31().getArray()).setLlimit(new MFFloat32().getArray())
                    .addChild(new HAnimSegment("hanim_l_talocrural").setName("l_talus").setDEF("hanim_l_talus")
                      .addChild(new Transform("hanim_l_talus").setTranslation(new float[] {3.854f,3.939f,-0.7038f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3233().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3234().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f35().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f36().getArray()))))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_tarsometatarsal_2").setDEF("hanim_l_tarsometatarsal_2").setCenter(new float[] {3.854f,3.336f,-1.514f}).setUlimit(new MFFloat37().getArray()).setLlimit(new MFFloat38().getArray())
                      .addChild(new HAnimSegment("hanim_l_tarsometatarsal_2").setName("l_metatarsal_2").setDEF("hanim_l_metatarsal_2")
                        .addChild(new Transform("hanim_l_metatarsal_2").setTranslation(new float[] {3.854f,3.336f,-1.514f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3239().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3240().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f41().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f42().getArray()))))))
                      .addChild(new HAnimJoint("hanim_l_tarsometatarsal_2").setName("l_metatarsophalangeal_2").setDEF("hanim_l_metatarsophalangeal_2").setCenter(new float[] {3.854f,3.64f,0.7402f}).setUlimit(new MFFloat43().getArray()).setLlimit(new MFFloat44().getArray())
                        .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_2").setName("l_tarsal_proximal_phalanx_2").setDEF("hanim_l_tarsal_proximal_phalanx_2")
                          .addChild(new Transform("hanim_l_tarsal_proximal_phalanx_2").setTranslation(new float[] {3.854f,3.64f,0.7402f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3245().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3246().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f47().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f48().getArray()))))))
                        .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setName("l_tarsal_distal_interphalangeal_2").setDEF("hanim_l_tarsal_distal_interphalangeal_2").setCenter(new float[] {3.854f,1.956f,1.682f}).setUlimit(new MFFloat49().getArray()).setLlimit(new MFFloat50().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_2").setName("l_tarsal_distal_phalanx_2").setDEF("hanim_l_tarsal_distal_phalanx_2")
                            .addChild(new Transform("hanim_l_tarsal_distal_phalanx_2").setTranslation(new float[] {3.854f,1.956f,1.682f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3251().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3252().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f53().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f54().getArray()))))))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName("r_hip").setDEF("hanim_r_hip").setCenter(new float[] {-4.207f,35.830002f,-0.8155f}).setUlimit(new MFFloat55().getArray()).setLlimit(new MFFloat56().getArray())
                .addChild(new HAnimSegment("hanim_r_hip").setName("r_thigh").setDEF("hanim_r_thigh")
                  .addChild(new Transform("hanim_r_thigh").setTranslation(new float[] {-4.207f,35.830002f,-0.8155f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3257().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3258().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f59().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f60().getArray()))))))
                .addChild(new HAnimJoint("hanim_r_hip").setName("r_knee").setDEF("hanim_r_knee").setCenter(new float[] {-4.116f,17.26f,-0.8639f}).setUlimit(new MFFloat61().getArray()).setLlimit(new MFFloat62().getArray())
                  .addChild(new HAnimSegment("hanim_r_knee").setName("r_calf").setDEF("hanim_r_calf")
                    .addChild(new Transform("hanim_r_calf").setTranslation(new float[] {-4.116f,17.26f,-0.8639f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3263().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3264().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f65().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f66().getArray()))))))
                  .addChild(new HAnimJoint("hanim_r_knee").setName("r_talocrural").setDEF("hanim_r_talocrural").setCenter(new float[] {-3.854f,3.939f,-0.7038f}).setUlimit(new MFFloat67().getArray()).setLlimit(new MFFloat68().getArray())
                    .addChild(new HAnimSegment("hanim_r_talocrural").setName("r_talus").setDEF("hanim_r_talus")
                      .addChild(new Transform("hanim_r_talus").setTranslation(new float[] {-3.854f,3.939f,-0.7038f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3269().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3270().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f71().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f72().getArray()))))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_tarsometatarsal_2").setDEF("hanim_r_tarsometatarsal_2").setCenter(new float[] {-3.854f,3.336f,-1.514f}).setUlimit(new MFFloat73().getArray()).setLlimit(new MFFloat74().getArray())
                      .addChild(new HAnimSegment("hanim_r_tarsometatarsal_2").setName("r_metatarsal_2").setDEF("hanim_r_metatarsal_2")
                        .addChild(new Transform("hanim_r_metatarsal_2").setTranslation(new float[] {-3.854f,3.336f,-1.514f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3275().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3276().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f77().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f78().getArray()))))))
                      .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setName("r_metatarsophalangeal_2").setDEF("hanim_r_metatarsophalangeal_2").setCenter(new float[] {-3.854f,3.64f,0.7402f}).setUlimit(new MFFloat79().getArray()).setLlimit(new MFFloat80().getArray())
                        .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_2").setName("r_tarsal_proximal_phalanx_2").setDEF("hanim_r_tarsal_proximal_phalanx_2")
                          .addChild(new Transform("hanim_r_tarsal_proximal_phalanx_2").setTranslation(new float[] {-3.854f,3.64f,0.7402f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3281().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3282().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f83().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f84().getArray()))))))
                        .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName("r_tarsal_distal_interphalangeal_2").setDEF("hanim_r_tarsal_distal_interphalangeal_2").setCenter(new float[] {-3.854f,1.956f,1.682f}).setUlimit(new MFFloat85().getArray()).setLlimit(new MFFloat86().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_2").setName("r_tarsal_distal_phalanx_2").setDEF("hanim_r_tarsal_distal_phalanx_2")
                            .addChild(new Transform("hanim_r_tarsal_distal_phalanx_2").setTranslation(new float[] {-3.854f,1.956f,1.682f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3287().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3288().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f89().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f90().getArray())))))))))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName("vl5").setDEF("hanim_vl5").setCenter(new float[] {0f,40.220001f,-0.6117f}).setUlimit(new MFFloat91().getArray()).setLlimit(new MFFloat92().getArray())
              .addChild(new HAnimSegment("hanim_vl5").setName("l5").setDEF("hanim_l5")
                .addChild(new Transform("hanim_l5").setTranslation(new float[] {0f,40.220001f,-0.6117f})
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                      .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3293().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3294().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f95().getArray()))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f96().getArray()))))))
              .addChild(new HAnimJoint("hanim_vl5").setName("vl3").setDEF("hanim_vl3").setCenter(new float[] {0f,41.299999f,-0.6117f}).setUlimit(new MFFloat97().getArray()).setLlimit(new MFFloat98().getArray())
                .addChild(new HAnimSegment("hanim_vl3").setName("l3").setDEF("hanim_l3")
                  .addChild(new Transform("hanim_l3").setTranslation(new float[] {0f,41.299999f,-0.6117f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3299().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32100().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f101().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f102().getArray()))))))
                .addChild(new HAnimJoint("hanim_vl3").setName("vl1").setDEF("hanim_vl1").setCenter(new float[] {0f,42.759998f,-0.6117f}).setUlimit(new MFFloat103().getArray()).setLlimit(new MFFloat104().getArray())
                  .addChild(new HAnimSegment("hanim_vl1").setName("l1").setDEF("hanim_l1")
                    .addChild(new Transform("hanim_l1").setTranslation(new float[] {0f,42.759998f,-0.6117f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32105().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32106().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f107().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f108().getArray()))))))
                  .addChild(new HAnimJoint("hanim_vl1").setName("vt10").setDEF("hanim_vt10").setCenter(new float[] {0f,44.580002f,-0.6127f}).setUlimit(new MFFloat109().getArray()).setLlimit(new MFFloat110().getArray())
                    .addChild(new HAnimSegment("hanim_vt10").setName("t10").setDEF("hanim_t10")
                      .addChild(new Transform("hanim_t10").setTranslation(new float[] {0f,44.580002f,-0.6127f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32111().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32112().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f113().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f114().getArray()))))))
                    .addChild(new HAnimJoint("hanim_vt10").setName("vt6").setDEF("hanim_vt6").setCenter(new float[] {0f,47.040001f,-0.6117f}).setUlimit(new MFFloat115().getArray()).setLlimit(new MFFloat116().getArray())
                      .addChild(new HAnimSegment("hanim_vt6").setName("t6").setDEF("hanim_t6")
                        .addChild(new Transform("hanim_t6").setTranslation(new float[] {0f,47.040001f,-0.6117f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32117().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32118().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f119().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f120().getArray()))))))
                      .addChild(new HAnimJoint("hanim_vt6").setName("vt1").setDEF("hanim_vt1").setCenter(new float[] {0f,49.619999f,-0.6117f}).setUlimit(new MFFloat121().getArray()).setLlimit(new MFFloat122().getArray())
                        .addChild(new HAnimSegment("hanim_vt1").setName("t1").setDEF("hanim_t1")
                          .addChild(new Transform("hanim_t1").setTranslation(new float[] {0f,49.619999f,-0.6117f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32123().getArray().append(new MFInt32124().getArray())).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32125().getArray().append(new MFInt32126().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f127().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f128().getArray()))))))
                        .addChild(new HAnimJoint("hanim_vt1").setName("l_acromioclavicular").setDEF("hanim_l_acromioclavicular").setCenter(new float[] {1.71f,52.82f,-0.6127f}).setUlimit(new MFFloat129().getArray()).setLlimit(new MFFloat130().getArray())
                          .addChild(new HAnimSegment("hanim_l_acromioclavicular").setName("l_clavicle").setDEF("hanim_l_clavicle")
                            .addChild(new Transform("hanim_l_clavicle").setTranslation(new float[] {1.71f,52.82f,-0.6127f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32131().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32132().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f133().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f134().getArray()))))))
                          .addChild(new HAnimJoint("hanim_l_acromioclavicular").setName("l_sternoclavicular").setDEF("hanim_l_sternoclavicular").setCenter(new float[] {5.464f,52.060001f,-0.5732f}).setUlimit(new MFFloat135().getArray()).setLlimit(new MFFloat136().getArray())
                            .addChild(new HAnimSegment("hanim_l_sternoclavicular").setName("l_scapula").setDEF("hanim_l_scapula")
                              .addChild(new Transform("hanim_l_scapula").setTranslation(new float[] {5.464f,52.060001f,-0.5732f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32137().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32138().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f139().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f140().getArray()))))))
                            .addChild(new HAnimJoint("hanim_l_sternoclavicular").setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new float[] {7.336f,51.48f,-0.1452f}).setUlimit(new MFFloat141().getArray()).setLlimit(new MFFloat142().getArray())
                              .addChild(new HAnimSegment("hanim_l_shoulder").setName("l_upperarm").setDEF("hanim_l_upperarm")
                                .addChild(new Transform("hanim_l_upperarm").setTranslation(new float[] {7.336f,51.48f,-0.1452f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32143().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32144().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f145().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f146().getArray()))))))
                              .addChild(new HAnimJoint("hanim_l_shoulder").setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new float[] {8.093f,40.380001f,-0.2502f}).setUlimit(new MFFloat147().getArray()).setLlimit(new MFFloat148().getArray())
                                .addChild(new HAnimSegment("hanim_l_elbow").setName("l_forearm").setDEF("hanim_l_forearm")
                                  .addChild(new Transform("hanim_l_forearm").setTranslation(new float[] {8.093f,40.380001f,-0.2502f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32149().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32150().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f151().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f152().getArray()))))))
                                .addChild(new HAnimJoint("hanim_l_elbow").setName("l_radiocarpal").setDEF("hanim_l_radiocarpal").setCenter(new float[] {7.899f,31.43f,-0.3809f}).setUlimit(new MFFloat153().getArray()).setLlimit(new MFFloat154().getArray())
                                  .addChild(new HAnimSegment("hanim_l_radiocarpal").setName("l_carpal").setDEF("hanim_l_carpal")
                                    .addChild(new Transform("hanim_l_carpal").setTranslation(new float[] {7.899f,31.43f,-0.3809f})
                                      .addChild(new Shape()
                                        .setAppearance(new Appearance()
                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                          .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32155().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32156().getArray())
                                          .setCoord(new Coordinate().setPoint(new MFVec3f157().getArray()))
                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f158().getArray()))))))
                                  .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_carpometacarpal_1").setDEF("hanim_l_carpometacarpal_1").setCenter(new float[] {8.205f,29.6f,1.302f}).setUlimit(new MFFloat159().getArray()).setLlimit(new MFFloat160().getArray())
                                    .addChild(new HAnimSegment("hanim_l_carpometacarpal_1").setName("l_metacarpal_1").setDEF("hanim_l_metacarpal_1")
                                      .addChild(new Transform("hanim_l_metacarpal_1").setTranslation(new float[] {8.205f,29.6f,1.302f})
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                            .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32161().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32162().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f163().getArray()))
                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f164().getArray()))))))
                                    .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setName("l_metacarpophalangeal_1").setDEF("hanim_l_metacarpophalangeal_1").setCenter(new float[] {8.08f,28.73f,1.55f}).setUlimit(new MFFloat165().getArray()).setLlimit(new MFFloat166().getArray())
                                      .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_1").setName("l_carpal_proximal_phalanx_1").setDEF("hanim_l_carpal_proximal_phalanx_1")
                                        .addChild(new Transform("hanim_l_carpal_proximal_phalanx_1").setTranslation(new float[] {8.08f,28.73f,1.55f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                              .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32167().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32168().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f169().getArray()))
                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f170().getArray()))))))
                                      .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setName("l_carpal_interphalangeal_1").setDEF("hanim_l_carpal_interphalangeal_1").setCenter(new float[] {7.832f,27.85f,1.735f}).setUlimit(new MFFloat171().getArray()).setLlimit(new MFFloat172().getArray())
                                        .addChild(new HAnimSegment("hanim_l_carpal_interphalangeal_1").setName("l_carpal_distal_phalanx_1").setDEF("hanim_l_carpal_distal_phalanx_1")
                                          .addChild(new Transform("hanim_l_carpal_distal_phalanx_1").setTranslation(new float[] {7.832f,27.85f,1.735f})
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32173().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32174().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f175().getArray()))
                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f176().getArray())))))))))
                                  .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_carpometacarpal_2").setDEF("hanim_l_carpometacarpal_2").setCenter(new float[] {8.376f,28.549999f,0.5997f}).setUlimit(new MFFloat177().getArray()).setLlimit(new MFFloat178().getArray())
                                    .addChild(new HAnimSegment("hanim_l_carpometacarpal_2").setName("l_metacarpal_2").setDEF("hanim_l_metacarpal_2")
                                      .addChild(new Transform("hanim_l_metacarpal_2").setTranslation(new float[] {8.376f,28.549999f,0.5997f})
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                            .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32179().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32180().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f181().getArray()))
                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f182().getArray()))))))
                                    .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setName("l_metacarpophalangeal_2").setDEF("hanim_l_metacarpophalangeal_2").setCenter(new float[] {8.52f,27.24f,0.6551f}).setUlimit(new MFFloat183().getArray()).setLlimit(new MFFloat184().getArray())
                                      .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_2").setName("l_carpal_proximal_phalanx_2").setDEF("hanim_l_carpal_proximal_phalanx_2")
                                        .addChild(new Transform("hanim_l_carpal_proximal_phalanx_2").setTranslation(new float[] {8.52f,27.24f,0.6551f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                              .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32185().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32186().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f187().getArray()))
                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f188().getArray()))))))
                                      .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setName("l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_proximal_interphalangeal_2").setCenter(new float[] {8.45f,26.1f,0.6956f}).setUlimit(new MFFloat189().getArray()).setLlimit(new MFFloat190().getArray())
                                        .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_middle_phalanx_2").setDEF("hanim_l_carpal_middle_phalanx_2")
                                          .addChild(new Transform("hanim_l_carpal_middle_phalanx_2").setTranslation(new float[] {8.45f,26.1f,0.6956f})
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32191().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32192().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f193().getArray()))
                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f194().getArray()))))))
                                        .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_2").setDEF("hanim_l_carpal_distal_interphalangeal_2").setCenter(new float[] {8.192f,25.17f,0.7315f}).setUlimit(new MFFloat195().getArray()).setLlimit(new MFFloat196().getArray())
                                          .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_2").setName("l_carpal_distal_phalanx_2").setDEF("hanim_l_carpal_distal_phalanx_2")
                                            .addChild(new Transform("hanim_l_carpal_distal_phalanx_2").setTranslation(new float[] {8.192f,25.17f,0.7315f})
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                  .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32197().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32198().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f199().getArray()))
                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f200().getArray()))))))))))
                                  .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_carpometacarpal_3").setDEF("hanim_l_carpometacarpal_3").setCenter(new float[] {8.344f,28.65f,-0.194f}).setUlimit(new MFFloat201().getArray()).setLlimit(new MFFloat202().getArray())
                                    .addChild(new HAnimSegment("hanim_l_carpometacarpal_3").setName("l_metacarpal_3").setDEF("hanim_l_metacarpal_3")
                                      .addChild(new Transform("hanim_l_metacarpal_3").setTranslation(new float[] {8.344f,28.65f,-0.194f})
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                            .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32203().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32204().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f205().getArray()))
                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f206().getArray()))))))
                                    .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setName("l_metacarpophalangeal_3").setDEF("hanim_l_metacarpophalangeal_3").setCenter(new float[] {8.52f,27.26f,-0.1959f}).setUlimit(new MFFloat207().getArray()).setLlimit(new MFFloat208().getArray())
                                      .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_3").setName("l_carpal_proximal_phalanx_3").setDEF("hanim_l_carpal_proximal_phalanx_3")
                                        .addChild(new Transform("hanim_l_carpal_proximal_phalanx_3").setTranslation(new float[] {8.52f,27.26f,-0.1959f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                              .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32209().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32210().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f211().getArray()))
                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f212().getArray()))))))
                                      .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setName("l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_proximal_interphalangeal_3").setCenter(new float[] {8.477f,26.07f,-0.2214f}).setUlimit(new MFFloat213().getArray()).setLlimit(new MFFloat214().getArray())
                                        .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_middle_phalanx_3").setDEF("hanim_l_carpal_middle_phalanx_3")
                                          .addChild(new Transform("hanim_l_carpal_middle_phalanx_3").setTranslation(new float[] {8.477f,26.07f,-0.2214f})
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32215().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32216().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f217().getArray()))
                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f218().getArray()))))))
                                        .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_3").setDEF("hanim_l_carpal_distal_interphalangeal_3").setCenter(new float[] {8.25f,25.030001f,-0.2187f}).setUlimit(new MFFloat219().getArray()).setLlimit(new MFFloat220().getArray())
                                          .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_3").setName("l_carpal_distal_phalanx_3").setDEF("hanim_l_carpal_distal_phalanx_3")
                                            .addChild(new Transform("hanim_l_carpal_distal_phalanx_3").setTranslation(new float[] {8.25f,25.030001f,-0.2187f})
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                  .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32221().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32222().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f223().getArray()))
                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f224().getArray()))))))))))
                                  .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_carpometacarpal_4").setDEF("hanim_l_carpometacarpal_4").setCenter(new float[] {8.339f,28.57f,-0.9243f}).setUlimit(new MFFloat225().getArray()).setLlimit(new MFFloat226().getArray())
                                    .addChild(new HAnimSegment("hanim_l_carpometacarpal_4").setName("l_metacarpal_4").setDEF("hanim_l_metacarpal_4")
                                      .addChild(new Transform("hanim_l_metacarpal_4").setTranslation(new float[] {8.339f,28.57f,-0.9243f})
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                            .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32227().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32228().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f229().getArray()))
                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f230().getArray()))))))
                                    .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setName("l_metacarpophalangeal_4").setDEF("hanim_l_metacarpophalangeal_4").setCenter(new float[] {8.428f,27.299999f,-0.9985f}).setUlimit(new MFFloat231().getArray()).setLlimit(new MFFloat232().getArray())
                                      .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_4").setName("l_carpal_proximal_phalanx_4").setDEF("hanim_l_carpal_proximal_phalanx_4")
                                        .addChild(new Transform("hanim_l_carpal_proximal_phalanx_4").setTranslation(new float[] {8.428f,27.299999f,-0.9985f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                              .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32233().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32234().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f235().getArray()))
                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f236().getArray()))))))
                                      .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setName("l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_proximal_interphalangeal_4").setCenter(new float[] {8.428f,26.290001f,-1.034f}).setUlimit(new MFFloat237().getArray()).setLlimit(new MFFloat238().getArray())
                                        .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_middle_phalanx_4").setDEF("hanim_l_carpal_middle_phalanx_4")
                                          .addChild(new Transform("hanim_l_carpal_middle_phalanx_4").setTranslation(new float[] {8.428f,26.290001f,-1.034f})
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32239().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32240().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f241().getArray()))
                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f242().getArray()))))))
                                        .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_4").setDEF("hanim_l_carpal_distal_interphalangeal_4").setCenter(new float[] {8.192f,25.309999f,-1.124f}).setUlimit(new MFFloat243().getArray()).setLlimit(new MFFloat244().getArray())
                                          .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_4").setName("l_carpal_distal_phalanx_4").setDEF("hanim_l_carpal_distal_phalanx_4")
                                            .addChild(new Transform("hanim_l_carpal_distal_phalanx_4").setTranslation(new float[] {8.192f,25.309999f,-1.124f})
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                  .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32245().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32246().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f247().getArray()))
                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f248().getArray()))))))))))
                                  .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_carpometacarpal_5").setDEF("hanim_l_carpometacarpal_5").setCenter(new float[] {8.197f,28.370001f,-1.528f}).setUlimit(new MFFloat249().getArray()).setLlimit(new MFFloat250().getArray())
                                    .addChild(new HAnimSegment("hanim_l_carpometacarpal_5").setName("l_metacarpal_5").setDEF("hanim_l_metacarpal_5")
                                      .addChild(new Transform("hanim_l_metacarpal_5").setTranslation(new float[] {8.197f,28.370001f,-1.528f})
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                            .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32251().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32252().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f253().getArray()))
                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f254().getArray()))))))
                                    .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setName("l_metacarpophalangeal_5").setDEF("hanim_l_metacarpophalangeal_5").setCenter(new float[] {8.334f,27.5f,-1.701f}).setUlimit(new MFFloat255().getArray()).setLlimit(new MFFloat256().getArray())
                                      .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_5").setName("l_carpal_proximal_phalanx_5").setDEF("hanim_l_carpal_proximal_phalanx_5")
                                        .addChild(new Transform("hanim_l_carpal_proximal_phalanx_5").setTranslation(new float[] {8.334f,27.5f,-1.701f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                              .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32257().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32258().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f259().getArray()))
                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f260().getArray()))))))
                                      .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setName("l_carpal_proximal_interphalangeal_5").setDEF("hanim_l_carpal_proximal_interphalangeal_5").setCenter(new float[] {8.338f,26.780001f,-1.768f}).setUlimit(new MFFloat261().getArray()).setLlimit(new MFFloat262().getArray())
                                        .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_middle_phalanx_5").setDEF("hanim_l_carpal_middle_phalanx_5")
                                          .addChild(new Transform("hanim_l_carpal_middle_phalanx_5").setTranslation(new float[] {8.338f,26.780001f,-1.768f})
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32263().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32264().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f265().getArray()))
                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f266().getArray()))))))
                                        .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_distal_interphalangeal_5").setDEF("hanim_l_carpal_distal_interphalangeal_5").setCenter(new float[] {8.153f,26.040001f,-1.886f}).setUlimit(new MFFloat267().getArray()).setLlimit(new MFFloat268().getArray())
                                          .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_5").setName("l_carpal_distal_phalanx_5").setDEF("hanim_l_carpal_distal_phalanx_5")
                                            .addChild(new Transform("hanim_l_carpal_distal_phalanx_5").setTranslation(new float[] {8.153f,26.040001f,-1.886f})
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                  .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32269().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32270().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f271().getArray()))
                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f272().getArray())))))))))))))))
                        .addChild(new HAnimJoint("hanim_vt1").setName("r_acromioclavicular").setDEF("hanim_r_acromioclavicular").setCenter(new float[] {-1.71f,52.82f,-0.6127f}).setUlimit(new MFFloat273().getArray()).setLlimit(new MFFloat274().getArray())
                          .addChild(new HAnimSegment("hanim_r_acromioclavicular").setName("r_clavicle").setDEF("hanim_r_clavicle")
                            .addChild(new Transform("hanim_r_clavicle").setTranslation(new float[] {-1.71f,52.82f,-0.6127f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32275().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32276().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f277().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f278().getArray()))))))
                          .addChild(new HAnimJoint("hanim_r_acromioclavicular").setName("r_sternoclavicular").setDEF("hanim_r_sternoclavicular").setCenter(new float[] {-5.464f,52.060001f,-0.5732f}).setUlimit(new MFFloat279().getArray()).setLlimit(new MFFloat280().getArray())
                            .addChild(new HAnimSegment("hanim_r_sternoclavicular").setName("r_scapula").setDEF("hanim_r_scapula")
                              .addChild(new Transform("hanim_r_scapula").setTranslation(new float[] {-5.464f,52.060001f,-0.5732f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32281().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32282().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f283().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f284().getArray()))))))
                            .addChild(new HAnimJoint("hanim_r_sternoclavicular").setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new float[] {-7.336f,51.48f,-0.1452f}).setUlimit(new MFFloat285().getArray()).setLlimit(new MFFloat286().getArray())
                              .addChild(new HAnimSegment("hanim_r_shoulder").setName("r_upperarm").setDEF("hanim_r_upperarm")
                                .addChild(new Transform("hanim_r_upperarm").setTranslation(new float[] {-7.336f,51.48f,-0.1452f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32287().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32288().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f289().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f290().getArray()))))))
                              .addChild(new HAnimJoint("hanim_r_shoulder").setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new float[] {-8.093f,40.380001f,-0.2502f}).setUlimit(new MFFloat291().getArray()).setLlimit(new MFFloat292().getArray())
                                .addChild(new HAnimSegment("hanim_r_elbow").setName("r_forearm").setDEF("hanim_r_forearm")
                                  .addChild(new Transform("hanim_r_forearm").setTranslation(new float[] {-8.093f,40.380001f,-0.2502f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32293().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32294().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f295().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f296().getArray()))))))
                                .addChild(new HAnimJoint("hanim_r_elbow").setName("r_radiocarpal").setDEF("hanim_r_radiocarpal").setCenter(new float[] {-7.899f,31.43f,-0.3809f}).setUlimit(new MFFloat297().getArray()).setLlimit(new MFFloat298().getArray())
                                  .addChild(new HAnimSegment("hanim_r_radiocarpal").setName("r_carpal").setDEF("hanim_r_carpal")
                                    .addChild(new Transform("hanim_r_carpal").setTranslation(new float[] {-7.899f,31.43f,-0.3809f})
                                      .addChild(new Shape()
                                        .setAppearance(new Appearance()
                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                          .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32299().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32300().getArray())
                                          .setCoord(new Coordinate().setPoint(new MFVec3f301().getArray()))
                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f302().getArray()))))))
                                  .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_carpometacarpal_1").setDEF("hanim_r_carpometacarpal_1").setCenter(new float[] {-8.205f,29.6f,1.302f}).setUlimit(new MFFloat303().getArray()).setLlimit(new MFFloat304().getArray())
                                    .addChild(new HAnimSegment("hanim_r_carpometacarpal_1").setName("r_metacarpal_1").setDEF("hanim_r_metacarpal_1")
                                      .addChild(new Transform("hanim_r_metacarpal_1").setTranslation(new float[] {-8.205f,29.6f,1.302f})
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                            .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32305().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32306().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f307().getArray()))
                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f308().getArray()))))))
                                    .addChild(new HAnimJoint("hanim_r_carpometacarpal_1").setName("r_metacarpophalangeal_1").setDEF("hanim_r_metacarpophalangeal_1").setCenter(new float[] {-8.08f,28.73f,1.55f}).setUlimit(new MFFloat309().getArray()).setLlimit(new MFFloat310().getArray())
                                      .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_1").setName("r_carpal_proximal_phalanx_1").setDEF("hanim_r_carpal_proximal_phalanx_1")
                                        .addChild(new Transform("hanim_r_carpal_proximal_phalanx_1").setTranslation(new float[] {-8.08f,28.73f,1.55f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                              .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32311().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32312().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f313().getArray()))
                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f314().getArray()))))))
                                      .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_1").setName("r_carpal_interphalangeal_1").setDEF("hanim_r_carpal_interphalangeal_1").setCenter(new float[] {-7.832f,27.85f,1.735f}).setUlimit(new MFFloat315().getArray()).setLlimit(new MFFloat316().getArray())
                                        .addChild(new HAnimSegment("hanim_r_carpal_interphalangeal_1").setName("r_carpal_distal_phalanx_1").setDEF("hanim_r_carpal_distal_phalanx_1")
                                          .addChild(new Transform("hanim_r_carpal_distal_phalanx_1").setTranslation(new float[] {-7.832f,27.85f,1.735f})
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32317().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32318().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f319().getArray()))
                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f320().getArray())))))))))
                                  .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_carpometacarpal_2").setDEF("hanim_r_carpometacarpal_2").setCenter(new float[] {-8.376f,28.549999f,0.5997f}).setUlimit(new MFFloat321().getArray()).setLlimit(new MFFloat322().getArray())
                                    .addChild(new HAnimSegment("hanim_r_carpometacarpal_2").setName("r_metacarpal_2").setDEF("hanim_r_metacarpal_2")
                                      .addChild(new Transform("hanim_r_metacarpal_2").setTranslation(new float[] {-8.376f,28.549999f,0.5997f})
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                            .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32323().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32324().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f325().getArray()))
                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f326().getArray()))))))
                                    .addChild(new HAnimJoint("hanim_r_carpometacarpal_2").setName("r_metacarpophalangeal_2").setDEF("hanim_r_metacarpophalangeal_2").setCenter(new float[] {-8.52f,27.24f,0.6551f}).setUlimit(new MFFloat327().getArray()).setLlimit(new MFFloat328().getArray())
                                      .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_2").setName("r_carpal_proximal_phalanx_2").setDEF("hanim_r_carpal_proximal_phalanx_2")
                                        .addChild(new Transform("hanim_r_carpal_proximal_phalanx_2").setTranslation(new float[] {-8.52f,27.24f,0.6551f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                              .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32329().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32330().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f331().getArray()))
                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f332().getArray()))))))
                                      .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_2").setName("r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_proximal_interphalangeal_2").setCenter(new float[] {-8.45f,26.1f,0.6956f}).setUlimit(new MFFloat333().getArray()).setLlimit(new MFFloat334().getArray())
                                        .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_2").setName("r_carpal_middle_phalanx_2").setDEF("hanim_r_carpal_middle_phalanx_2")
                                          .addChild(new Transform("hanim_r_carpal_middle_phalanx_2").setTranslation(new float[] {-8.45f,26.1f,0.6956f})
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32335().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32336().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f337().getArray()))
                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f338().getArray()))))))
                                        .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2").setName("r_carpal_distal_interphalangeal_2").setDEF("hanim_r_carpal_distal_interphalangeal_2").setCenter(new float[] {-8.192f,25.17f,0.7315f}).setUlimit(new MFFloat339().getArray()).setLlimit(new MFFloat340().getArray())
                                          .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_2").setName("r_carpal_distal_phalanx_2").setDEF("hanim_r_carpal_distal_phalanx_2")
                                            .addChild(new Transform("hanim_r_carpal_distal_phalanx_2").setTranslation(new float[] {-8.192f,25.17f,0.7315f})
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                  .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32341().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32342().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f343().getArray()))
                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f344().getArray()))))))))))
                                  .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_carpometacarpal_3").setDEF("hanim_r_carpometacarpal_3").setCenter(new float[] {-8.344f,28.65f,-0.194f}).setUlimit(new MFFloat345().getArray()).setLlimit(new MFFloat346().getArray())
                                    .addChild(new HAnimSegment("hanim_r_carpometacarpal_3").setName("r_metacarpal_3").setDEF("hanim_r_metacarpal_3")
                                      .addChild(new Transform("hanim_r_metacarpal_3").setTranslation(new float[] {-8.344f,28.65f,-0.194f})
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                            .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32347().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32348().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f349().getArray()))
                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f350().getArray()))))))
                                    .addChild(new HAnimJoint("hanim_r_carpometacarpal_3").setName("r_metacarpophalangeal_3").setDEF("hanim_r_metacarpophalangeal_3").setCenter(new float[] {-8.52f,27.26f,-0.1959f}).setUlimit(new MFFloat351().getArray()).setLlimit(new MFFloat352().getArray())
                                      .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_3").setName("r_carpal_proximal_phalanx_3").setDEF("hanim_r_carpal_proximal_phalanx_3")
                                        .addChild(new Transform("hanim_r_carpal_proximal_phalanx_3").setTranslation(new float[] {-8.52f,27.26f,-0.1959f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                              .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32353().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32354().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f355().getArray()))
                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f356().getArray()))))))
                                      .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_3").setName("r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_proximal_interphalangeal_3").setCenter(new float[] {-8.477f,26.07f,-0.2214f}).setUlimit(new MFFloat357().getArray()).setLlimit(new MFFloat358().getArray())
                                        .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_3").setName("r_carpal_middle_phalanx_3").setDEF("hanim_r_carpal_middle_phalanx_3")
                                          .addChild(new Transform("hanim_r_carpal_middle_phalanx_3").setTranslation(new float[] {-8.477f,26.07f,-0.2214f})
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32359().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32360().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f361().getArray()))
                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f362().getArray()))))))
                                        .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3").setName("r_carpal_distal_interphalangeal_3").setDEF("hanim_r_carpal_distal_interphalangeal_3").setCenter(new float[] {-8.25f,25.030001f,-0.2187f}).setUlimit(new MFFloat363().getArray()).setLlimit(new MFFloat364().getArray())
                                          .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_3").setName("r_carpal_distal_phalanx_3").setDEF("hanim_r_carpal_distal_phalanx_3")
                                            .addChild(new Transform("hanim_r_carpal_distal_phalanx_3").setTranslation(new float[] {-8.25f,25.030001f,-0.2187f})
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                  .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32365().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32366().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f367().getArray()))
                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f368().getArray()))))))))))
                                  .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_carpometacarpal_4").setDEF("hanim_r_carpometacarpal_4").setCenter(new float[] {-8.339f,28.57f,-0.9243f}).setUlimit(new MFFloat369().getArray()).setLlimit(new MFFloat370().getArray())
                                    .addChild(new HAnimSegment("hanim_r_carpometacarpal_4").setName("r_metacarpal_4").setDEF("hanim_r_metacarpal_4")
                                      .addChild(new Transform("hanim_r_metacarpal_4").setTranslation(new float[] {-8.339f,28.57f,-0.9243f})
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                            .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32371().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32372().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f373().getArray()))
                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f374().getArray()))))))
                                    .addChild(new HAnimJoint("hanim_r_carpometacarpal_4").setName("r_metacarpophalangeal_4").setDEF("hanim_r_metacarpophalangeal_4").setCenter(new float[] {-8.428f,27.299999f,-0.9985f}).setUlimit(new MFFloat375().getArray()).setLlimit(new MFFloat376().getArray())
                                      .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_4").setName("r_carpal_proximal_phalanx_4").setDEF("hanim_r_carpal_proximal_phalanx_4")
                                        .addChild(new Transform("hanim_r_carpal_proximal_phalanx_4").setTranslation(new float[] {-8.428f,27.299999f,-0.9985f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                              .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32377().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32378().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f379().getArray()))
                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f380().getArray()))))))
                                      .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_4").setName("r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_proximal_interphalangeal_4").setCenter(new float[] {-8.428f,26.290001f,-1.034f}).setUlimit(new MFFloat381().getArray()).setLlimit(new MFFloat382().getArray())
                                        .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_4").setName("r_carpal_middle_phalanx_4").setDEF("hanim_r_carpal_middle_phalanx_4")
                                          .addChild(new Transform("hanim_r_carpal_middle_phalanx_4").setTranslation(new float[] {-8.428f,26.290001f,-1.034f})
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32383().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32384().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f385().getArray()))
                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f386().getArray()))))))
                                        .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4").setName("r_carpal_distal_interphalangeal_4").setDEF("hanim_r_carpal_distal_interphalangeal_4").setCenter(new float[] {-8.192f,25.309999f,-1.124f}).setUlimit(new MFFloat387().getArray()).setLlimit(new MFFloat388().getArray())
                                          .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_4").setName("r_carpal_distal_phalanx_4").setDEF("hanim_r_carpal_distal_phalanx_4")
                                            .addChild(new Transform("hanim_r_carpal_distal_phalanx_4").setTranslation(new float[] {-8.192f,25.309999f,-1.124f})
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                  .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32389().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32390().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f391().getArray()))
                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f392().getArray()))))))))))
                                  .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_carpometacarpal_5").setDEF("hanim_r_carpometacarpal_5").setCenter(new float[] {-8.197f,28.370001f,-1.528f}).setUlimit(new MFFloat393().getArray()).setLlimit(new MFFloat394().getArray())
                                    .addChild(new HAnimSegment("hanim_r_carpometacarpal_5").setName("r_metacarpal_5").setDEF("hanim_r_metacarpal_5")
                                      .addChild(new Transform("hanim_r_metacarpal_5").setTranslation(new float[] {-8.197f,28.370001f,-1.528f})
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                            .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32395().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32396().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f397().getArray()))
                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f398().getArray()))))))
                                    .addChild(new HAnimJoint("hanim_r_carpometacarpal_5").setName("r_metacarpophalangeal_5").setDEF("hanim_r_metacarpophalangeal_5").setCenter(new float[] {-8.334f,27.5f,-1.701f}).setUlimit(new MFFloat399().getArray()).setLlimit(new MFFloat400().getArray())
                                      .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_5").setName("r_carpal_proximal_phalanx_5").setDEF("hanim_r_carpal_proximal_phalanx_5")
                                        .addChild(new Transform("hanim_r_carpal_proximal_phalanx_5").setTranslation(new float[] {-8.334f,27.5f,-1.701f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                              .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32401().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32402().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f403().getArray()))
                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f404().getArray()))))))
                                      .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_5").setName("r_carpal_proximal_interphalangeal_5").setDEF("hanim_r_carpal_proximal_interphalangeal_5").setCenter(new float[] {-8.338f,26.780001f,-1.768f}).setUlimit(new MFFloat405().getArray()).setLlimit(new MFFloat406().getArray())
                                        .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_5").setName("r_carpal_middle_phalanx_5").setDEF("hanim_r_carpal_middle_phalanx_5")
                                          .addChild(new Transform("hanim_r_carpal_middle_phalanx_5").setTranslation(new float[] {-8.338f,26.780001f,-1.768f})
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32407().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32408().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f409().getArray()))
                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f410().getArray()))))))
                                        .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_5").setName("r_carpal_distal_interphalangeal_5").setDEF("hanim_r_carpal_distal_interphalangeal_5").setCenter(new float[] {-8.153f,26.040001f,-1.886f}).setUlimit(new MFFloat411().getArray()).setLlimit(new MFFloat412().getArray())
                                          .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_5").setName("r_carpal_distal_phalanx_5").setDEF("hanim_r_carpal_distal_phalanx_5")
                                            .addChild(new Transform("hanim_r_carpal_distal_phalanx_5").setTranslation(new float[] {-8.153f,26.040001f,-1.886f})
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                  .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32413().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32414().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f415().getArray()))
                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f416().getArray())))))))))))))))
                        .addChild(new HAnimJoint("hanim_vt1").setName("vc4").setDEF("hanim_vc4").setCenter(new float[] {0f,54.419998f,-0.6695f}).setUlimit(new MFFloat417().getArray()).setLlimit(new MFFloat418().getArray())
                          .addChild(new HAnimSegment("hanim_vc4").setName("c4").setDEF("hanim_c4")
                            .addChild(new Transform("hanim_c4").setTranslation(new float[] {0f,54.419998f,-0.6695f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32419().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32420().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f421().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f422().getArray()))))))
                          .addChild(new HAnimJoint("hanim_vc4").setName("vc2").setDEF("hanim_vc2").setCenter(new float[] {0f,56.02f,-0.6695f}).setUlimit(new MFFloat423().getArray()).setLlimit(new MFFloat424().getArray())
                            .addChild(new HAnimSegment("hanim_vc2").setName("c2").setDEF("hanim_c2")
                              .addChild(new Transform("hanim_c2").setTranslation(new float[] {0f,56.02f,-0.6695f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32425().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32426().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f427().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f428().getArray()))))))
                            .addChild(new HAnimJoint("hanim_vc2").setName("skullbase").setDEF("hanim_skullbase").setCenter(new float[] {0f,57.43f,-0.6863f}).setUlimit(new MFFloat429().getArray()).setLlimit(new MFFloat430().getArray())
                              .addChild(new HAnimSegment("hanim_skullbase").setName("skull").setDEF("hanim_skull")
                                .addChild(new Transform("hanim_skull").setTranslation(new float[] {0f,57.43f,-0.6863f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA2TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32431().getArray().append(new MFInt32432().getArray()).append(new MFInt32433().getArray())).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32434().getArray().append(new MFInt32435().getArray()).append(new MFInt32436().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f437().getArray().append(new MFVec3f438().getArray())))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f439().getArray()))))))))))))))))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_humanoid_root"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_sacroiliac"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_vl5"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_vl3"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_vl1"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_vt10"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_vt6"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_vt1"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_vc4"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_vc2"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_skullbase"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_acromioclavicular"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_acromioclavicular"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_carpal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_carpal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_carpal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_carpal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_carpal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_carpal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_carpal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_carpal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_carpometacarpal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_carpometacarpal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_carpometacarpal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_carpometacarpal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_carpometacarpal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_carpometacarpal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_carpometacarpal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_carpometacarpal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_carpometacarpal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_carpometacarpal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_elbow"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_elbow"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_hip"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_hip"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_knee"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_knee"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_metacarpophalangeal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_metacarpophalangeal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_metacarpophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_metacarpophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_radiocarpal"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_radiocarpal"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_shoulder"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_shoulder"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_sternoclavicular"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_sternoclavicular"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_talocrural"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_talocrural"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_l_tarsometatarsal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA2").setUSE("hanim_r_tarsometatarsal_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_sacrum"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_pelvis"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l5"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l3"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l1"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_t10"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_t6"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_t1"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_c4"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_c2"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_skull"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_calf"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_calf"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_carpal"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_carpal"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_carpal_distal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_carpal_distal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_carpal_distal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_carpal_distal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_carpal_distal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_carpal_distal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_carpal_distal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_carpal_distal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_carpal_distal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_carpal_distal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_carpal_middle_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_carpal_middle_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_carpal_middle_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_carpal_middle_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_carpal_middle_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_carpal_middle_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_carpal_middle_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_carpal_middle_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_carpal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_carpal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_carpal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_carpal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_carpal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_carpal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_carpal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_carpal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_carpal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_carpal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_clavicle"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_clavicle"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_forearm"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_forearm"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_metacarpal_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_metacarpal_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_metacarpal_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_metacarpal_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_metacarpal_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_metacarpal_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_metacarpal_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_metacarpal_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_metacarpal_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_metacarpal_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_metatarsal_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_metatarsal_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_scapula"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_scapula"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_talus"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_talus"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_tarsal_distal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_tarsal_distal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_thigh"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_thigh"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_l_upperarm"))
          .addSegments(new HAnimSegment("hanim_JinLOA2").setUSE("hanim_r_upperarm"))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Jin Hoon Lee and Min Joo Lee, Chul Hee Jung and Myeong Won Lee"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"myeongwonlee@gmail.com"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"31 March 2011"});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"female"});
  }
}
protected class MFFloat4 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.5f});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"2.0"});
  }
}
protected class MFFloat6 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat7 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFString8 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/Jin.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Jin.png"});
  }
}
protected class MFInt329 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
protected class MFInt3210 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
protected class MFVec3f11 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.053f,0.0273f,0f,0.9123f,-0.5414f,-0.4375f,0.9123f,-0.4652f,-0.7578f,0.9123f,-0.3733f,-0.875f,0.9123f,0.0273f,-0.7578f,0.9123f,0.4279f,-0.4375f,0.9123f,0.5198f,0f,0.9123f,0.596f,0.4375f,0.9123f,0.5198f,0.7578f,0.9123f,0.4279f,0.875f,0.9123f,0.0273f,0.7578f,0.9123f,-0.3733f,0.4375f,0.9123f,-0.4652f,0f,0.5267f,-0.8842f,-0.5658f,0.5267f,-0.7621f,-0.98f,0.5267f,-0.4285f,-1.132f,0.5267f,0.0273f,-0.98f,0.5267f,0.483f,-0.5658f,0.5267f,0.6985f,0f,0.5267f,0.8206f,0.5658f,0.5267f,0.6985f,0.98f,0.5267f,0.483f,1.132f,0.5267f,0.0273f,0.98f,0.5267f,-0.4285f,0.5658f,0.5267f,-0.7621f,0f,0f,-0.9616f,-0.6534f,0f,-0.8206f,-1.132f,0f,-0.4353f,-1.307f,0f,0.0273f,-1.132f,0f,0.5536f,-0.6534f,0f,0.8206f,0f,0f,0.9616f,0.6534f,0f,0.8206f,1.132f,0f,0.5536f,1.307f,0f,0.0273f,1.132f,0f,-0.4353f,0.6534f,0f,-0.8206f,0f,-0.5267f,-0.8206f,-0.5658f,-0.5267f,-0.6985f,-0.98f,-0.5267f,-0.3648f,-1.132f,-0.5267f,0.0273f,-0.98f,-0.5267f,0.483f,-0.5658f,-0.5267f,0.6985f,0f,-0.5267f,0.8206f,0.5658f,-0.5267f,0.6985f,0.98f,-0.5267f,0.483f,1.132f,-0.5267f,0.0273f,0.98f,-0.5267f,-0.3648f,0.5658f,-0.5267f,-0.6985f,0f,-0.9123f,-0.4353f,-0.3267f,-0.9123f,-0.3648f,-0.5658f,-0.9123f,-0.2358f,-0.6534f,-0.9123f,0.0273f,-0.5658f,-0.9123f,0.2904f,-0.3267f,-0.9123f,0.483f,0f,-0.9123f,0.5536f,0.3267f,-0.9123f,0.483f,0.5658f,-0.9123f,0.2904f,0.6534f,-0.9123f,0.0273f,0.5658f,-0.9123f,-0.2358f,0.3267f,-0.9123f,-0.3648f,0f,-1.053f,0.0273f});
  }
}
protected class MFVec2f12 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.6211f,0.5754f,0.7851f,0.572f,0.7614f,0.572f,0.6907f,0.5698f,0.62f,0.5698f,0.6158f,0.5702f,0.5451f,0.5702f,0.4167f,0.5698f,0.5451f,0.5702f,0.6158f,0.5702f,0.62f,0.5698f,0.6907f,0.5698f,0.7614f,0.572f,0.8036f,0.5346f,0.7761f,0.5346f,0.6989f,0.4838f,0.6219f,0.4428f,0.6154f,0.4438f,0.5492f,0.4639f,0.4166f,0.5346f,0.5492f,0.4639f,0.6154f,0.4438f,0.6219f,0.4428f,0.6989f,0.4838f,0.7761f,0.5346f,0.7912f,0.4044f,0.7635f,0.4044f,0.7042f,0.3925f,0.6194f,0.3907f,0.6148f,0.3907f,0.545f,0.3974f,0.4163f,0.4938f,0.545f,0.3974f,0.6148f,0.3907f,0.6194f,0.3907f,0.7042f,0.3925f,0.7635f,0.4044f,0.795f,0.3772f,0.7662f,0.3772f,0.6945f,0.3645f,0.6236f,0.3695f,0.616f,0.3695f,0.5438f,0.378f,0.416f,0.453f,0.5438f,0.378f,0.616f,0.3695f,0.6236f,0.3695f,0.6945f,0.3645f,0.7662f,0.3772f,0.7887f,0.3451f,0.7635f,0.3451f,0.698f,0.3508f,0.6262f,0.3508f,0.6297f,0.3503f,0.5389f,0.3503f,0.4181f,0.3884f,0.5389f,0.3503f,0.6297f,0.3503f,0.6262f,0.3508f,0.698f,0.3508f,0.7635f,0.3451f,0.6237f,0.3398f});
  }
}
protected class MFFloat13 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat14 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
protected class MFInt3216 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
protected class MFVec3f17 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,10.79f,0.1424f,0f,10.06f,-2.825f,-2.283f,10.06f,-2.428f,-3.954f,10.06f,-1.948f,-4.566f,10.06f,0.1424f,-3.954f,10.06f,2.233f,-2.283f,10.06f,2.712f,0f,10.06f,3.11f,2.283f,10.06f,2.712f,3.954f,10.06f,2.233f,4.566f,10.06f,0.1424f,3.954f,10.06f,-1.948f,2.283f,10.06f,-2.428f,0f,8.045f,-4.614f,-2.953f,8.045f,-3.977f,-5.114f,8.045f,-2.236f,-5.905f,8.045f,0.1424f,-5.114f,8.045f,2.521f,-2.953f,8.045f,3.645f,0f,8.045f,4.282f,2.953f,8.045f,3.645f,5.114f,8.045f,2.521f,5.905f,8.045f,0.1424f,5.114f,8.045f,-2.236f,2.953f,8.045f,-3.977f,0f,5.297f,-5.018f,-3.409f,5.297f,-4.282f,-5.905f,5.297f,-2.272f,-6.819f,5.297f,0.1424f,-5.905f,5.297f,2.889f,-3.409f,5.297f,4.282f,0f,5.297f,5.018f,3.409f,5.297f,4.282f,5.905f,5.297f,2.889f,6.819f,5.297f,0.1424f,5.905f,5.297f,-2.272f,3.409f,5.297f,-4.282f,0f,2.548f,-4.282f,-2.953f,2.548f,-3.645f,-5.114f,2.548f,-1.904f,-5.905f,2.548f,0.1424f,-5.114f,2.548f,2.521f,-2.953f,2.548f,3.645f,0f,2.548f,4.282f,2.953f,2.548f,3.645f,5.114f,2.548f,2.521f,5.905f,2.548f,0.1424f,5.114f,2.548f,-1.904f,2.953f,2.548f,-3.645f,0f,0.5362f,-2.272f,-1.705f,0.5362f,-1.904f,-2.953f,0.5362f,-1.231f,-3.409f,0.5362f,0.1424f,-2.953f,0.5362f,1.516f,-1.705f,0.5362f,2.521f,0f,0.5362f,2.889f,1.705f,0.5362f,2.521f,2.953f,0.5362f,1.516f,3.409f,0.5362f,0.1424f,2.953f,0.5362f,-1.231f,1.705f,0.5362f,-1.904f,0f,-0.2003f,0.1424f});
  }
}
protected class MFVec2f18 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.6211f,0.5754f,0.7851f,0.572f,0.7614f,0.572f,0.6907f,0.5698f,0.62f,0.5698f,0.6158f,0.5702f,0.5451f,0.5702f,0.4167f,0.5698f,0.5451f,0.5702f,0.6158f,0.5702f,0.62f,0.5698f,0.6907f,0.5698f,0.7614f,0.572f,0.8036f,0.5346f,0.7761f,0.5346f,0.6989f,0.4838f,0.6219f,0.4428f,0.6154f,0.4438f,0.5492f,0.4639f,0.4166f,0.5346f,0.5492f,0.4639f,0.6154f,0.4438f,0.6219f,0.4428f,0.6989f,0.4838f,0.7761f,0.5346f,0.7912f,0.4044f,0.7635f,0.4044f,0.7042f,0.3925f,0.6194f,0.3907f,0.6148f,0.3907f,0.545f,0.3974f,0.4163f,0.4938f,0.545f,0.3974f,0.6148f,0.3907f,0.6194f,0.3907f,0.7042f,0.3925f,0.7635f,0.4044f,0.795f,0.3772f,0.7662f,0.3772f,0.6945f,0.3645f,0.6236f,0.3695f,0.616f,0.3695f,0.5438f,0.378f,0.416f,0.453f,0.5438f,0.378f,0.616f,0.3695f,0.6236f,0.3695f,0.6945f,0.3645f,0.7662f,0.3772f,0.7887f,0.3451f,0.7635f,0.3451f,0.698f,0.3508f,0.6262f,0.3508f,0.6297f,0.3503f,0.5389f,0.3503f,0.4181f,0.3884f,0.5389f,0.3503f,0.6297f,0.3503f,0.6262f,0.3508f,0.698f,0.3508f,0.7635f,0.3451f,0.6237f,0.3398f});
  }
}
protected class MFFloat19 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat20 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3221 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,58,60,61,-1,56,58,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1});
  }
}
protected class MFInt3222 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,44,46,47,-1,42,44,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1});
  }
}
protected class MFVec3f23 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.96f,-0.0706f,0f,1.643f,-0.0706f,3.209f,-1.316f,-0.0706f,4.002f,-3.367f,-0.0706f,1.781f,-3.367f,-0.0706f,-1.781f,-1.316f,-0.0706f,-4.002f,1.643f,-0.0706f,-3.209f,2.96f,-3.82f,0f,1.643f,-3.82f,3.209f,-1.316f,-3.82f,4.002f,-3.367f,-3.82f,1.781f,-3.367f,-3.82f,-1.781f,-1.316f,-3.82f,-4.002f,1.643f,-3.82f,-3.209f,2.96f,-10.32f,0f,1.643f,-10.32f,3.209f,-1.316f,-10.32f,4.002f,-3.367f,-10.32f,1.781f,-3.367f,-10.32f,-1.781f,-1.316f,-10.32f,-4.002f,1.643f,-10.32f,-3.209f,3.367f,-16.94f,0f,1.897f,-16.94f,3.582f,-1.407f,-16.94f,4.467f,-3.355f,-16.94f,1.988f,-3.355f,-16.94f,-1.988f,-1.407f,-16.94f,-4.467f,1.897f,-16.94f,-3.582f,2.146f,-8.794f,0f,1.136f,-8.794f,2.462f,-1.135f,-8.794f,3.07f,-2.633f,-8.794f,1.366f,-2.633f,-8.794f,-1.366f,-1.135f,-8.794f,-3.07f,1.136f,-8.794f,-2.462f,2.156f,-15.25f,0f,1.225f,-15.25f,1.956f,-0.8662f,-15.25f,2.439f,-2.543f,-15.25f,1.085f,-2.543f,-15.25f,-1.085f,-0.8662f,-15.25f,-2.439f,1.225f,-15.25f,-1.956f,2.051f,1.92f,0f,1.076f,1.92f,2.375f,-1.114f,1.92f,2.961f,-2.87f,1.92f,1.318f,-2.87f,1.92f,-1.318f,-1.114f,1.92f,-2.961f,1.076f,1.92f,-2.375f,1.842f,-18.93f,0f,1.03f,-18.93f,1.873f,-0.7965f,-18.93f,2.295f,-2.261f,-18.93f,1.113f,-2.261f,-18.93f,-0.9478f,-0.7965f,-18.93f,-2.13f,1.03f,-18.93f,-1.708f,0.6277f,-19.91f,0f,0.2723f,-19.91f,0.912f,-0.5262f,-19.91f,1.096f,-1.167f,-19.91f,0.5796f,-1.167f,-19.91f,-0.4145f,-0.5262f,-19.91f,-0.9313f,0.2723f,-19.91f,-0.7469f});
  }
}
protected class MFVec2f24 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.719f,0.5576f,0.6284f,0.5576f,0.7414f,0.5576f,0.6787f,0.5576f,0.5781f,0.5576f,0.5154f,0.5576f,0.5378f,0.5576f,0.6284f,0.5029f,0.7509f,0.3997f,0.6284f,0.3997f,0.7509f,0.5029f,0.7811f,0.3997f,0.7811f,0.5029f,0.6964f,0.3997f,0.6964f,0.5029f,0.5604f,0.3997f,0.5604f,0.5029f,0.4756f,0.3997f,0.4756f,0.5029f,0.5059f,0.3997f,0.5059f,0.5029f,0.7509f,0.3197f,0.6284f,0.3197f,0.7811f,0.3197f,0.6964f,0.3197f,0.5604f,0.3197f,0.4756f,0.3197f,0.5059f,0.3197f,0.7651f,0.2166f,0.6284f,0.2166f,0.7989f,0.2166f,0.7043f,0.2166f,0.5525f,0.2166f,0.4579f,0.2166f,0.4917f,0.2166f,0.7224f,0.263f,0.6284f,0.263f,0.7456f,0.263f,0.6805f,0.263f,0.5762f,0.263f,0.5112f,0.263f,0.5344f,0.263f,0.8705f,0.5452f,0.8705f,0.5383f,0.8705f,0.5369f,0.8705f,0.5408f,0.8705f,0.5483f,0.8705f,0.5522f,0.8705f,0.5509f,0.917f,0.5452f,0.917f,0.5266f,0.89f,0.5304f,0.89f,0.5452f,0.917f,0.522f,0.89f,0.5268f,0.917f,0.5349f,0.89f,0.537f,0.917f,0.5555f,0.89f,0.5534f,0.917f,0.5684f,0.89f,0.5636f,0.917f,0.5638f,0.89f,0.56f,0.8746f,0.531f,0.8746f,0.5452f,0.8746f,0.5279f,0.8746f,0.5368f,0.8746f,0.5524f,0.8746f,0.5613f,0.8746f,0.5581f});
  }
}
protected class MFFloat25 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat26 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3227 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
  }
}
protected class MFInt3228 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
  }
}
protected class MFVec3f29 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.7186f,0.9688f,0.0234f,0.3632f,0.9688f,0.9354f,-0.4353f,0.9688f,1.12f,-1.076f,0.9688f,0.603f,-1.076f,0.9688f,-0.3911f,-0.4353f,0.9688f,-0.9079f,0.3632f,0.9688f,-0.7235f,2.337f,-4.613f,0.0234f,1.46f,-3.622f,2.019f,1.236f,-1.628f,2.42f,2.118f,-1.912f,0.0234f,-0.8111f,-3.622f,2.567f,-0.7468f,-1.628f,2.903f,-2.254f,-4.613f,1.255f,-2.337f,-1.912f,0.9793f,-2.254f,-5.383f,-1.368f,-2.337f,-1.912f,-0.9325f,-0.8111f,-5.383f,-2.903f,-0.7468f,-1.912f,-2.368f,1.46f,-5.383f,-2.355f,1.236f,-1.912f,-1.885f,1.121f,-0.0032f,1.896f,1.933f,-0.0032f,0.0234f,-0.7056f,-0.0032f,2.318f,-2.17f,-0.0032f,1.136f,-2.17f,-0.0032f,-0.9244f,-0.7056f,-0.0032f,-2.061f,1.121f,-0.0032f,-1.64f,1.607f,-12.92f,0.0032f,0.9216f,-12.91f,1.565f,-0.619f,-12.91f,1.951f,-1.854f,-12.92f,0.8701f,-1.854f,-12.94f,-0.9762f,-0.619f,-12.94f,-1.742f,0.9216f,-12.94f,-1.356f,0.7072f,-14.53f,0.0239f,0.3604f,-14.53f,0.814f,-0.4188f,-14.53f,1.009f,-1.044f,-14.53f,0.4624f,-1.044f,-14.54f,-0.4714f,-0.4188f,-14.54f,-0.8587f,0.3604f,-14.54f,-0.6635f});
  }
}
protected class MFVec2f30 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9309f,0.5848f,0.919f,0.5848f,0.8921f,0.5848f,0.8706f,0.5848f,0.8706f,0.5848f,0.8921f,0.5848f,0.919f,0.5848f,0.9845f,0.5321f,0.955f,0.5475f,0.9491f,0.5599f,0.9788f,0.5571f,0.8787f,0.5475f,0.8825f,0.5599f,0.8302f,0.5321f,0.8291f,0.5571f,0.8302f,0.52f,0.8291f,0.5571f,0.8787f,0.52f,0.8825f,0.5571f,0.955f,0.52f,0.9491f,0.5571f,0.9444f,0.5755f,0.9717f,0.5755f,0.8831f,0.5755f,0.8339f,0.5755f,0.8339f,0.5755f,0.8831f,0.5755f,0.9444f,0.5755f,0.9679f,0.2444f,0.9449f,0.2445f,0.8931f,0.2445f,0.8516f,0.2444f,0.8516f,0.2442f,0.8931f,0.2442f,0.9449f,0.2442f,0.9372f,0.2243f,0.9255f,0.2244f,0.8993f,0.2244f,0.8783f,0.2243f,0.8783f,0.2243f,0.8993f,0.2243f,0.9255f,0.2243f});
  }
}
protected class MFFloat31 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat32 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3233 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,11,14,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,11,1,3,-1,3,6,11,-1,15,2,0,-1,0,12,15,-1,0,1,13,-1,13,12,0,-1,13,1,14,-1,7,18,11,-1,8,6,5,-1,5,9,8,-1,7,8,9,-1,9,10,7,-1,10,9,5,-1,5,2,10,-1,11,6,8,-1,8,7,11,-1,15,16,10,-1,10,2,15,-1,10,16,17,-1,17,7,10,-1,17,18,7,-1,21,22,23,-1,23,24,25,-1,25,26,19,-1,23,25,19,-1,21,23,19,-1,20,21,19,-1,15,12,20,-1,20,19,15,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,11,23,-1,23,22,14,-1,11,18,24,-1,24,23,11,-1,18,17,25,-1,25,24,18,-1,17,16,26,-1,26,25,17,-1,16,15,19,-1,19,26,16,-1});
  }
}
protected class MFInt3234 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,14,18,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,14,1,3,-1,3,6,14,-1,19,2,0,-1,0,16,19,-1,0,1,17,-1,17,16,0,-1,17,1,18,-1,7,23,15,-1,9,8,11,-1,11,10,9,-1,7,9,10,-1,10,12,7,-1,12,10,11,-1,11,13,12,-1,15,8,9,-1,9,7,15,-1,20,21,12,-1,12,13,20,-1,12,21,22,-1,22,7,12,-1,22,23,7,-1,26,27,28,-1,28,29,30,-1,30,31,24,-1,28,30,24,-1,26,28,24,-1,25,26,24,-1,19,16,25,-1,25,24,19,-1,16,17,26,-1,26,25,16,-1,17,18,27,-1,27,26,17,-1,18,14,28,-1,28,27,18,-1,15,23,29,-1,29,28,15,-1,23,22,30,-1,30,29,23,-1,22,21,31,-1,31,30,22,-1,21,20,24,-1,24,31,21,-1});
  }
}
protected class MFVec3f35 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.9768f,-0.0192f,-1.681f,1.657f,-0.0192f,0.4309f,0f,-0.0192f,-1.681f,1.403f,0.7316f,0.354f,0.8174f,0.7316f,-1.463f,0f,0.7316f,-1.463f,0f,0.7316f,1.471f,-1.657f,-0.0192f,0.4309f,-1.403f,0.7316f,0.354f,-0.8174f,0.7316f,-1.463f,-0.9768f,-0.0192f,-1.681f,0f,-0.0192f,1.75f,1.109f,-0.6007f,-2.046f,2.045f,-0.6007f,0.4309f,1.695f,-0.296f,1.429f,0f,-0.6007f,-2.046f,-1.109f,-0.6007f,-2.046f,-2.045f,-0.6007f,0.4309f,-1.695f,-0.296f,1.429f,0f,-1.207f,-1.841f,1.023f,-1.207f,-1.841f,1.913f,-1.223f,0.5161f,1.601f,-0.9325f,1.406f,0f,-0.6582f,1.708f,-1.601f,-0.9325f,1.406f,-1.913f,-1.223f,0.5161f,-1.023f,-1.207f,-1.841f});
  }
}
protected class MFVec2f36 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3819f,0.171f,0.4216f,0.1651f,0.3819f,0.171f,0.4216f,0.1651f,0.3819f,0.171f,0.3819f,0.171f,0.4637f,0.1714f,0.4216f,0.1651f,0.4637f,0.1714f,0.4216f,0.1651f,0.3819f,0.171f,0.3819f,0.171f,0.3819f,0.171f,0.3819f,0.171f,0.4637f,0.1714f,0.4637f,0.1714f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.3836f,0.1404f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.4637f,0.1714f,0.4394f,0.1472f,0.4244f,0.1312f,0.3861f,0.1398f});
  }
}
protected class MFFloat37 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat38 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3239 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,4,3,-1,3,0,6,-1,9,0,3,-1,3,11,9,-1,2,6,0,-1,0,1,2,-1,10,1,0,-1,0,9,10,-1,1,10,15,-1,15,2,1,-1,6,5,7,-1,7,4,6,-1,12,13,7,-1,7,5,12,-1,2,8,5,-1,5,6,2,-1,14,12,5,-1,5,8,14,-1,8,2,15,-1,15,14,8,-1,17,18,19,-1,17,19,20,-1,17,20,16,-1,24,25,26,-1,27,21,22,-1,26,27,22,-1,24,26,22,-1,24,22,23,-1,3,4,17,-1,17,16,3,-1,4,7,18,-1,18,17,4,-1,7,13,19,-1,19,18,7,-1,13,11,20,-1,20,19,13,-1,11,3,16,-1,16,20,11,-1,10,9,22,-1,22,21,10,-1,9,11,23,-1,23,22,9,-1,11,13,24,-1,24,23,11,-1,13,12,25,-1,25,24,13,-1,12,14,26,-1,26,25,12,-1,14,15,27,-1,27,26,14,-1,15,10,21,-1,21,27,15,-1});
  }
}
protected class MFInt3240 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,6,5,-1,5,0,2,-1,14,0,5,-1,5,16,14,-1,3,2,0,-1,0,1,3,-1,15,1,0,-1,0,14,15,-1,1,15,21,-1,21,4,1,-1,8,7,10,-1,10,9,8,-1,17,18,10,-1,10,7,17,-1,12,11,7,-1,7,8,12,-1,19,17,7,-1,7,11,19,-1,11,13,20,-1,20,19,11,-1,23,24,25,-1,23,25,26,-1,23,26,22,-1,30,31,32,-1,33,27,28,-1,32,33,28,-1,30,32,28,-1,30,28,29,-1,5,6,23,-1,23,22,5,-1,9,10,24,-1,24,23,9,-1,10,18,25,-1,25,24,10,-1,18,16,26,-1,26,25,18,-1,16,5,22,-1,22,26,16,-1,15,14,28,-1,28,27,15,-1,14,16,29,-1,29,28,14,-1,16,18,30,-1,30,29,16,-1,18,17,31,-1,31,30,18,-1,17,19,32,-1,32,31,17,-1,19,20,33,-1,33,32,19,-1,21,15,27,-1,27,33,21,-1});
  }
}
protected class MFVec3f41 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.409f,-1.322f,-2.067f,1.409f,-3.344f,-0.8708f,0f,-3.344f,-0.8708f,1.109f,0.0027f,-1.236f,0f,0.0027f,-1.236f,-1.409f,-1.322f,-2.067f,0f,-1.322f,-2.067f,-1.109f,0.0027f,-1.236f,-1.409f,-3.344f,-0.8708f,2.927f,-1.322f,1.241f,2.089f,-3.344f,1.241f,2.045f,0.0027f,1.241f,-2.927f,-1.322f,1.241f,-2.045f,0.0027f,1.241f,-2.089f,-3.344f,1.241f,0f,-3.344f,1.241f,0.9442f,0.2881f,-0.8816f,0f,0.2881f,-0.8816f,-0.9442f,0.2881f,-0.8816f,-1.7f,0.2881f,1.12f,1.7f,0.2881f,1.12f,1.86f,-3.19f,2.175f,2.541f,-1.36f,2.175f,1.861f,-0.3398f,2.175f,-1.861f,-0.3398f,2.175f,-2.541f,-1.36f,2.175f,-1.86f,-3.19f,2.175f,0f,-3.19f,2.175f});
  }
}
protected class MFVec2f42 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3873f,0.0706f,0.3871f,0.0221f,0.3873f,0.0706f,0.3871f,0.0221f,0.3871f,0.0221f,0.3861f,0.1398f,0.3836f,0.1404f,0.3873f,0.0706f,0.3873f,0.0706f,0.3836f,0.1404f,0.3861f,0.1398f,0.3871f,0.0221f,0.3871f,0.0221f,0.3871f,0.0221f,0.433f,0.0595f,0.4411f,0.0186f,0.4244f,0.1312f,0.433f,0.0595f,0.4244f,0.1312f,0.4411f,0.0186f,0.4411f,0.0186f,0.4411f,0.0186f,0.3861f,0.1398f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4244f,0.1312f,0.4411f,0.0186f,0.433f,0.0595f,0.4244f,0.1312f,0.4244f,0.1312f,0.433f,0.0595f,0.4411f,0.0186f,0.4411f,0.0186f});
  }
}
protected class MFFloat43 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat44 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3245 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,10,-1,3,10,11,-1,0,3,11,-1,1,0,11,-1,11,12,1,-1,1,12,16,-1,16,9,1,-1,2,17,10,-1,10,4,2,-1,13,8,6,-1,14,13,6,-1,5,14,6,-1,7,15,14,-1,14,5,7,-1,7,9,16,-1,16,15,7,-1,2,8,13,-1,13,17,2,-1,20,21,22,-1,20,22,23,-1,20,23,24,-1,19,20,24,-1,19,24,18,-1,26,27,28,-1,28,29,30,-1,26,28,30,-1,26,30,31,-1,26,31,32,-1,26,32,25,-1,0,1,19,-1,19,18,0,-1,1,9,20,-1,20,19,1,-1,9,7,21,-1,21,20,9,-1,7,5,22,-1,22,21,7,-1,5,6,23,-1,23,22,5,-1,6,3,24,-1,24,23,6,-1,3,0,18,-1,18,24,3,-1,11,10,26,-1,26,25,11,-1,10,17,27,-1,27,26,10,-1,17,13,28,-1,28,27,17,-1,13,14,29,-1,29,28,13,-1,14,15,30,-1,30,29,14,-1,15,16,31,-1,31,30,15,-1,16,12,32,-1,32,31,16,-1,12,11,25,-1,25,32,12,-1,6,8,2,-1,3,6,2,-1,4,3,2,-1});
  }
}
protected class MFInt3246 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,5,12,-1,4,12,13,-1,0,4,13,-1,1,0,13,-1,13,14,1,-1,1,14,19,-1,19,3,1,-1,2,21,12,-1,12,5,2,-1,15,10,7,-1,16,15,7,-1,6,16,7,-1,8,17,16,-1,16,6,8,-1,8,11,18,-1,18,17,8,-1,9,10,15,-1,15,20,9,-1,24,25,26,-1,24,26,27,-1,24,27,28,-1,23,24,28,-1,23,28,22,-1,30,31,32,-1,32,33,34,-1,30,32,34,-1,30,34,35,-1,30,35,36,-1,30,36,29,-1,0,1,23,-1,23,22,0,-1,1,3,24,-1,24,23,1,-1,11,8,25,-1,25,24,11,-1,8,6,26,-1,26,25,8,-1,6,7,27,-1,27,26,6,-1,7,4,28,-1,28,27,7,-1,4,0,22,-1,22,28,4,-1,13,12,30,-1,30,29,13,-1,12,21,31,-1,31,30,12,-1,20,15,32,-1,32,31,20,-1,15,16,33,-1,33,32,15,-1,16,17,34,-1,34,33,16,-1,17,18,35,-1,35,34,17,-1,19,14,36,-1,36,35,19,-1,14,13,29,-1,29,36,14,-1,7,10,9,-1,4,7,9,-1,5,4,9,-1});
  }
}
protected class MFVec3f47 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.927f,-1.627f,-1.013f,2.089f,-3.648f,-1.013f,0f,0.2797f,0.3064f,2.045f,-0.3017f,-1.013f,1.695f,0.0029f,-0.0151f,-2.927f,-1.627f,-1.013f,-2.045f,-0.3017f,-1.013f,-2.089f,-3.648f,-1.013f,-1.695f,0.0029f,-0.0151f,0f,-3.648f,-1.013f,1.74f,-0.3226f,1.158f,2.661f,-1.866f,0.9192f,2.14f,-3.648f,0.9192f,-1.74f,-0.3226f,1.158f,-2.661f,-1.866f,0.9192f,-2.14f,-3.648f,0.9192f,0f,-3.648f,0.9192f,0f,-0.0274f,1.661f,2.405f,-1.656f,-1.915f,1.75f,-2.942f,-1.915f,0f,-2.942f,-1.915f,-1.75f,-2.942f,-1.915f,-2.405f,-1.656f,-1.915f,-1.742f,-0.5681f,-1.915f,1.742f,-0.5681f,-1.915f,2.393f,-1.966f,1.567f,1.583f,-0.608f,1.784f,0f,-0.3446f,2.283f,-1.583f,-0.608f,1.784f,-2.393f,-1.966f,1.567f,-1.955f,-3.469f,1.601f,0f,-3.469f,1.601f,1.955f,-3.469f,1.601f});
  }
}
protected class MFVec2f48 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.433f,0.0595f,0.4411f,0.0186f,0.4637f,0.1714f,0.4411f,0.0186f,0.4244f,0.1312f,0.4394f,0.1472f,0.433f,0.0595f,0.4244f,0.1312f,0.4411f,0.0186f,0.4637f,0.1714f,0.4394f,0.1472f,0.4411f,0.0186f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4949f,0.0186f,0.4868f,0.1432f,0.4868f,0.1432f,0.433f,0.0595f,0.4411f,0.0186f,0.4411f,0.0186f,0.4411f,0.0186f,0.433f,0.0595f,0.4244f,0.1312f,0.4244f,0.1312f,0.4607f,0.0558f,0.464f,0.1246f,0.4868f,0.1432f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4904f,0.0166f});
  }
}
protected class MFFloat49 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat50 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3251 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,0,4,3,-1,10,2,1,-1,1,3,10,-1,2,10,15,-1,0,1,6,-1,6,5,0,-1,6,1,2,-1,2,7,6,-1,7,2,15,-1,15,16,7,-1,17,4,0,-1,0,5,17,-1,3,4,9,-1,9,8,3,-1,10,3,8,-1,8,11,10,-1,11,15,10,-1,9,12,13,-1,13,8,9,-1,13,14,11,-1,11,8,13,-1,14,16,15,-1,15,11,14,-1,17,12,9,-1,9,4,17,-1,19,20,21,-1,21,22,23,-1,23,24,25,-1,21,23,25,-1,19,21,25,-1,19,25,18,-1,5,6,19,-1,19,18,5,-1,6,7,20,-1,20,19,6,-1,7,16,21,-1,21,20,7,-1,16,14,22,-1,22,21,16,-1,14,13,23,-1,23,22,14,-1,13,12,24,-1,24,23,13,-1,12,17,25,-1,25,24,12,-1,17,5,18,-1,18,25,17,-1});
  }
}
protected class MFInt3252 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,3,2,-1,2,0,1,-1,4,5,3,-1,3,1,4,-1,5,4,6,-1,2,3,8,-1,8,7,2,-1,8,3,5,-1,5,9,8,-1,9,5,6,-1,6,10,9,-1,11,0,2,-1,2,7,11,-1,12,15,14,-1,14,13,12,-1,16,12,13,-1,13,17,16,-1,17,21,16,-1,14,18,19,-1,19,13,14,-1,19,20,17,-1,17,13,19,-1,20,22,21,-1,21,17,20,-1,23,18,14,-1,14,15,23,-1,25,26,27,-1,27,28,29,-1,29,30,31,-1,27,29,31,-1,25,27,31,-1,25,31,24,-1,7,8,25,-1,25,24,7,-1,8,9,26,-1,26,25,8,-1,9,10,27,-1,27,26,9,-1,22,20,28,-1,28,27,22,-1,20,19,29,-1,29,28,20,-1,19,18,30,-1,30,29,19,-1,18,23,31,-1,31,30,18,-1,11,7,24,-1,24,31,11,-1});
  }
}
protected class MFVec3f53 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.784f,1.036f,1.39f,2.216f,-0.5826f,3.202f,2.216f,-1.964f,2.834f,0f,-0.5826f,4.521f,0f,1.138f,3.008f,1.74f,1.362f,0.2166f,2.661f,-0.1823f,-0.0226f,2.14f,-1.964f,-0.0226f,-2.216f,-0.5826f,3.202f,-1.784f,1.036f,1.39f,0f,-1.964f,4.154f,-2.216f,-1.964f,2.834f,-1.74f,1.362f,0.2166f,-2.661f,-0.1823f,-0.0226f,-2.14f,-1.964f,-0.0226f,0f,-1.964f,2.834f,0f,-1.964f,-0.0226f,0f,1.657f,0.7196f,1.601f,1.243f,-0.4207f,2.424f,-0.1368f,-0.64f,1.977f,-1.746f,-0.61f,0f,-1.746f,-0.61f,-1.977f,-1.746f,-0.61f,-2.424f,-0.1368f,-0.64f,-1.601f,1.243f,-0.4207f,0f,1.51f,0.0788f});
  }
}
protected class MFVec2f54 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.532f,0.098f,0.5645f,0.0707f,0.4885f,0.102f,0.5026f,0.044f,0.5945f,0.0186f,0.5487f,0.0186f,0.5487f,0.0186f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4868f,0.1432f,0.5645f,0.0707f,0.5026f,0.044f,0.4885f,0.102f,0.532f,0.098f,0.5945f,0.0186f,0.5487f,0.0186f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.5487f,0.0186f,0.4949f,0.0186f,0.4868f,0.1432f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4904f,0.0166f,0.4607f,0.0558f,0.464f,0.1246f,0.4868f,0.1432f});
  }
}
protected class MFFloat55 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat56 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3257 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,61,60,58,-1,58,57,56,-1,61,58,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1});
  }
}
protected class MFInt3258 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,47,46,44,-1,44,43,42,-1,47,44,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1});
  }
}
protected class MFVec3f59 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.96f,-0.0706f,0f,-1.643f,-0.0706f,3.209f,1.316f,-0.0706f,4.002f,3.367f,-0.0706f,1.781f,3.367f,-0.0706f,-1.781f,1.316f,-0.0706f,-4.002f,-1.643f,-0.0706f,-3.209f,-2.96f,-3.82f,0f,-1.643f,-3.82f,3.209f,1.316f,-3.82f,4.002f,3.367f,-3.82f,1.781f,3.367f,-3.82f,-1.781f,1.316f,-3.82f,-4.002f,-1.643f,-3.82f,-3.209f,-2.96f,-10.32f,0f,-1.643f,-10.32f,3.209f,1.316f,-10.32f,4.002f,3.367f,-10.32f,1.781f,3.367f,-10.32f,-1.781f,1.316f,-10.32f,-4.002f,-1.643f,-10.32f,-3.209f,-3.367f,-16.94f,0f,-1.897f,-16.94f,3.582f,1.407f,-16.94f,4.467f,3.355f,-16.94f,1.988f,3.355f,-16.94f,-1.988f,1.407f,-16.94f,-4.467f,-1.897f,-16.94f,-3.582f,-2.146f,-8.794f,0f,-1.136f,-8.794f,2.462f,1.135f,-8.794f,3.07f,2.633f,-8.794f,1.366f,2.633f,-8.794f,-1.366f,1.135f,-8.794f,-3.07f,-1.136f,-8.794f,-2.462f,-2.156f,-15.25f,0f,-1.225f,-15.25f,1.956f,0.8662f,-15.25f,2.439f,2.543f,-15.25f,1.085f,2.543f,-15.25f,-1.085f,0.8662f,-15.25f,-2.439f,-1.225f,-15.25f,-1.956f,-2.051f,1.92f,0f,-1.076f,1.92f,2.375f,1.114f,1.92f,2.961f,2.87f,1.92f,1.318f,2.87f,1.92f,-1.318f,1.114f,1.92f,-2.961f,-1.076f,1.92f,-2.375f,-1.842f,-18.93f,0f,-1.03f,-18.93f,1.873f,0.7965f,-18.93f,2.295f,2.261f,-18.93f,1.113f,2.261f,-18.93f,-0.9478f,0.7965f,-18.93f,-2.13f,-1.03f,-18.93f,-1.708f,-0.6277f,-19.91f,0f,-0.2723f,-19.91f,0.912f,0.5262f,-19.91f,1.096f,1.167f,-19.91f,0.5796f,1.167f,-19.91f,-0.4145f,0.5262f,-19.91f,-0.9313f,-0.2723f,-19.91f,-0.7469f});
  }
}
protected class MFVec2f60 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.719f,0.5576f,0.6284f,0.5576f,0.7414f,0.5576f,0.6787f,0.5576f,0.5781f,0.5576f,0.5154f,0.5576f,0.5378f,0.5576f,0.6284f,0.5029f,0.7509f,0.3997f,0.6284f,0.3997f,0.7509f,0.5029f,0.7811f,0.3997f,0.7811f,0.5029f,0.6964f,0.3997f,0.6964f,0.5029f,0.5604f,0.3997f,0.5604f,0.5029f,0.4756f,0.3997f,0.4756f,0.5029f,0.5059f,0.3997f,0.5059f,0.5029f,0.7509f,0.3197f,0.6284f,0.3197f,0.7811f,0.3197f,0.6964f,0.3197f,0.5604f,0.3197f,0.4756f,0.3197f,0.5059f,0.3197f,0.7651f,0.2166f,0.6284f,0.2166f,0.7989f,0.2166f,0.7043f,0.2166f,0.5525f,0.2166f,0.4579f,0.2166f,0.4917f,0.2166f,0.7224f,0.263f,0.6284f,0.263f,0.7456f,0.263f,0.6805f,0.263f,0.5762f,0.263f,0.5112f,0.263f,0.5344f,0.263f,0.8705f,0.5452f,0.8705f,0.5383f,0.8705f,0.5369f,0.8705f,0.5408f,0.8705f,0.5483f,0.8705f,0.5522f,0.8705f,0.5509f,0.917f,0.5452f,0.917f,0.5266f,0.89f,0.5304f,0.89f,0.5452f,0.917f,0.522f,0.89f,0.5268f,0.917f,0.5349f,0.89f,0.537f,0.917f,0.5555f,0.89f,0.5534f,0.917f,0.5684f,0.89f,0.5636f,0.917f,0.5638f,0.89f,0.56f,0.8746f,0.531f,0.8746f,0.5452f,0.8746f,0.5279f,0.8746f,0.5368f,0.8746f,0.5524f,0.8746f,0.5613f,0.8746f,0.5581f});
  }
}
protected class MFFloat61 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat62 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3263 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
  }
}
protected class MFInt3264 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
  }
}
protected class MFVec3f65 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.7186f,0.9688f,0.0234f,-0.3632f,0.9688f,0.9354f,0.4353f,0.9688f,1.12f,1.076f,0.9688f,0.603f,1.076f,0.9688f,-0.3911f,0.4353f,0.9688f,-0.9079f,-0.3632f,0.9688f,-0.7235f,-2.337f,-4.613f,0.0234f,-1.46f,-3.622f,2.019f,-1.236f,-1.628f,2.42f,-2.118f,-1.912f,0.0234f,0.8111f,-3.622f,2.567f,0.7468f,-1.628f,2.903f,2.254f,-4.613f,1.255f,2.337f,-1.912f,0.9793f,2.254f,-5.383f,-1.368f,2.337f,-1.912f,-0.9325f,0.8111f,-5.383f,-2.903f,0.7468f,-1.912f,-2.368f,-1.46f,-5.383f,-2.355f,-1.236f,-1.912f,-1.885f,-1.121f,-0.0032f,1.896f,-1.933f,-0.0032f,0.0234f,0.7056f,-0.0032f,2.318f,2.17f,-0.0032f,1.136f,2.17f,-0.0032f,-0.9244f,0.7056f,-0.0032f,-2.061f,-1.121f,-0.0032f,-1.64f,-1.607f,-12.92f,0.0032f,-0.9216f,-12.91f,1.565f,0.619f,-12.91f,1.951f,1.854f,-12.92f,0.8701f,1.854f,-12.94f,-0.9762f,0.619f,-12.94f,-1.742f,-0.9216f,-12.94f,-1.356f,-0.7072f,-14.53f,0.0239f,-0.3604f,-14.53f,0.814f,0.4188f,-14.53f,1.009f,1.044f,-14.53f,0.4624f,1.044f,-14.54f,-0.4714f,0.4188f,-14.54f,-0.8587f,-0.3604f,-14.54f,-0.6635f});
  }
}
protected class MFVec2f66 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9309f,0.5848f,0.919f,0.5848f,0.8921f,0.5848f,0.8706f,0.5848f,0.8706f,0.5848f,0.8921f,0.5848f,0.919f,0.5848f,0.9845f,0.5321f,0.955f,0.5475f,0.9491f,0.5599f,0.9788f,0.5571f,0.8787f,0.5475f,0.8825f,0.5599f,0.8302f,0.5321f,0.8291f,0.5571f,0.8302f,0.52f,0.8291f,0.5571f,0.8787f,0.52f,0.8825f,0.5571f,0.955f,0.52f,0.9491f,0.5571f,0.9444f,0.5755f,0.9717f,0.5755f,0.8831f,0.5755f,0.8339f,0.5755f,0.8339f,0.5755f,0.8831f,0.5755f,0.9444f,0.5755f,0.9679f,0.2444f,0.9449f,0.2445f,0.8931f,0.2445f,0.8516f,0.2444f,0.8516f,0.2442f,0.8931f,0.2442f,0.9449f,0.2442f,0.9372f,0.2243f,0.9255f,0.2244f,0.8993f,0.2244f,0.8783f,0.2243f,0.8783f,0.2243f,0.8993f,0.2243f,0.9255f,0.2243f});
  }
}
protected class MFFloat67 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat68 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3269 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,14,11,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,11,6,3,-1,3,1,11,-1,15,12,0,-1,0,2,15,-1,0,12,13,-1,13,1,0,-1,13,14,1,-1,7,11,18,-1,8,9,5,-1,5,6,8,-1,7,10,9,-1,9,8,7,-1,10,2,5,-1,5,9,10,-1,11,7,8,-1,8,6,11,-1,15,2,10,-1,10,16,15,-1,10,7,17,-1,17,16,10,-1,17,7,18,-1,19,26,25,-1,25,24,23,-1,19,25,23,-1,23,22,21,-1,19,23,21,-1,20,19,21,-1,15,19,20,-1,20,12,15,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,11,14,-1,11,23,24,-1,24,18,11,-1,18,24,25,-1,25,17,18,-1,17,25,26,-1,26,16,17,-1,16,26,19,-1,19,15,16,-1});
  }
}
protected class MFInt3270 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,18,14,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,14,6,3,-1,3,1,14,-1,19,16,0,-1,0,2,19,-1,0,16,17,-1,17,1,0,-1,17,18,1,-1,7,15,23,-1,9,10,11,-1,11,8,9,-1,7,12,10,-1,10,9,7,-1,12,13,11,-1,11,10,12,-1,15,7,9,-1,9,8,15,-1,20,13,12,-1,12,21,20,-1,12,7,22,-1,22,21,12,-1,22,7,23,-1,24,31,30,-1,30,29,28,-1,24,30,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,19,24,25,-1,25,16,19,-1,16,25,26,-1,26,17,16,-1,17,26,27,-1,27,18,17,-1,18,27,28,-1,28,14,18,-1,15,28,29,-1,29,23,15,-1,23,29,30,-1,30,22,23,-1,22,30,31,-1,31,21,22,-1,21,31,24,-1,24,20,21,-1});
  }
}
protected class MFVec3f71 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.9768f,-0.0192f,-1.681f,-1.657f,-0.0192f,0.4309f,0f,-0.0192f,-1.681f,-1.403f,0.7316f,0.354f,-0.8174f,0.7316f,-1.463f,0f,0.7316f,-1.463f,0f,0.7316f,1.471f,1.657f,-0.0192f,0.4309f,1.403f,0.7316f,0.354f,0.8174f,0.7316f,-1.463f,0.9768f,-0.0192f,-1.681f,0f,-0.0192f,1.75f,-1.109f,-0.6007f,-2.046f,-2.045f,-0.6007f,0.4309f,-1.695f,-0.296f,1.429f,0f,-0.6007f,-2.046f,1.109f,-0.6007f,-2.046f,2.045f,-0.6007f,0.4309f,1.695f,-0.296f,1.429f,0f,-1.207f,-1.841f,-1.023f,-1.207f,-1.841f,-1.913f,-1.223f,0.5161f,-1.601f,-0.9325f,1.406f,0f,-0.6582f,1.708f,1.601f,-0.9325f,1.406f,1.913f,-1.223f,0.5161f,1.023f,-1.207f,-1.841f});
  }
}
protected class MFVec2f72 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3819f,0.171f,0.4216f,0.1651f,0.3819f,0.171f,0.4216f,0.1651f,0.3819f,0.171f,0.3819f,0.171f,0.4637f,0.1714f,0.4216f,0.1651f,0.4637f,0.1714f,0.4216f,0.1651f,0.3819f,0.171f,0.3819f,0.171f,0.3819f,0.171f,0.3819f,0.171f,0.4637f,0.1714f,0.4637f,0.1714f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.3836f,0.1404f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.4637f,0.1714f,0.4394f,0.1472f,0.4244f,0.1312f,0.3861f,0.1398f});
  }
}
protected class MFFloat73 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat74 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3275 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,0,3,-1,3,4,6,-1,9,11,3,-1,3,0,9,-1,2,1,0,-1,0,6,2,-1,10,9,0,-1,0,1,10,-1,1,2,15,-1,15,10,1,-1,6,4,7,-1,7,5,6,-1,12,5,7,-1,7,13,12,-1,2,6,5,-1,5,8,2,-1,14,8,5,-1,5,12,14,-1,8,14,15,-1,15,2,8,-1,17,16,20,-1,17,20,19,-1,17,19,18,-1,24,23,22,-1,22,21,27,-1,22,27,26,-1,24,22,26,-1,24,26,25,-1,3,16,17,-1,17,4,3,-1,4,17,18,-1,18,7,4,-1,7,18,19,-1,19,13,7,-1,13,19,20,-1,20,11,13,-1,11,20,16,-1,16,3,11,-1,10,21,22,-1,22,9,10,-1,9,22,23,-1,23,11,9,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,12,13,-1,12,25,26,-1,26,14,12,-1,14,26,27,-1,27,15,14,-1,15,27,21,-1,21,10,15,-1});
  }
}
protected class MFInt3276 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,0,5,-1,5,6,2,-1,14,16,5,-1,5,0,14,-1,3,1,0,-1,0,2,3,-1,15,14,0,-1,0,1,15,-1,1,4,21,-1,21,15,1,-1,8,9,10,-1,10,7,8,-1,17,7,10,-1,10,18,17,-1,12,8,7,-1,7,11,12,-1,19,11,7,-1,7,17,19,-1,11,19,20,-1,20,13,11,-1,23,22,26,-1,23,26,25,-1,23,25,24,-1,30,29,28,-1,28,27,33,-1,28,33,32,-1,30,28,32,-1,30,32,31,-1,5,22,23,-1,23,6,5,-1,9,23,24,-1,24,10,9,-1,10,24,25,-1,25,18,10,-1,18,25,26,-1,26,16,18,-1,16,26,22,-1,22,5,16,-1,15,27,28,-1,28,14,15,-1,14,28,29,-1,29,16,14,-1,16,29,30,-1,30,18,16,-1,18,30,31,-1,31,17,18,-1,17,31,32,-1,32,19,17,-1,19,32,33,-1,33,20,19,-1,21,33,27,-1,27,15,21,-1});
  }
}
protected class MFVec3f77 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-1.409f,-1.322f,-2.067f,-1.409f,-3.344f,-0.8708f,0f,-3.344f,-0.8708f,-1.109f,0.0027f,-1.236f,0f,0.0027f,-1.236f,1.409f,-1.322f,-2.067f,0f,-1.322f,-2.067f,1.109f,0.0027f,-1.236f,1.409f,-3.344f,-0.8708f,-2.927f,-1.322f,1.241f,-2.089f,-3.344f,1.241f,-2.045f,0.0027f,1.241f,2.927f,-1.322f,1.241f,2.045f,0.0027f,1.241f,2.089f,-3.344f,1.241f,0f,-3.344f,1.241f,-0.9442f,0.2881f,-0.8816f,0f,0.2881f,-0.8816f,0.9442f,0.2881f,-0.8816f,1.7f,0.2881f,1.12f,-1.7f,0.2881f,1.12f,-1.86f,-3.19f,2.175f,-2.541f,-1.36f,2.175f,-1.861f,-0.3398f,2.175f,1.861f,-0.3398f,2.175f,2.541f,-1.36f,2.175f,1.86f,-3.19f,2.175f,0f,-3.19f,2.175f});
  }
}
protected class MFVec2f78 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3873f,0.0706f,0.3871f,0.0221f,0.3873f,0.0706f,0.3871f,0.0221f,0.3871f,0.0221f,0.3861f,0.1398f,0.3836f,0.1404f,0.3873f,0.0706f,0.3873f,0.0706f,0.3836f,0.1404f,0.3861f,0.1398f,0.3871f,0.0221f,0.3871f,0.0221f,0.3871f,0.0221f,0.433f,0.0595f,0.4411f,0.0186f,0.4244f,0.1312f,0.433f,0.0595f,0.4244f,0.1312f,0.4411f,0.0186f,0.4411f,0.0186f,0.4411f,0.0186f,0.3861f,0.1398f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4244f,0.1312f,0.4411f,0.0186f,0.433f,0.0595f,0.4244f,0.1312f,0.4244f,0.1312f,0.433f,0.0595f,0.4411f,0.0186f,0.4411f,0.0186f});
  }
}
protected class MFFloat79 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat80 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3281 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10,4,3,-1,11,10,3,-1,0,11,3,-1,1,12,11,-1,11,0,1,-1,1,9,16,-1,16,12,1,-1,2,4,10,-1,10,17,2,-1,6,8,13,-1,6,13,14,-1,5,6,14,-1,7,5,14,-1,14,15,7,-1,7,15,16,-1,16,9,7,-1,2,17,13,-1,13,8,2,-1,19,18,24,-1,22,21,20,-1,23,22,20,-1,24,23,20,-1,19,24,20,-1,26,25,32,-1,26,32,31,-1,26,31,30,-1,30,29,28,-1,26,30,28,-1,26,28,27,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,9,1,-1,9,20,21,-1,21,7,9,-1,7,21,22,-1,22,5,7,-1,5,22,23,-1,23,6,5,-1,6,23,24,-1,24,3,6,-1,3,24,18,-1,18,0,3,-1,11,25,26,-1,26,10,11,-1,10,26,27,-1,27,17,10,-1,17,27,28,-1,28,13,17,-1,13,28,29,-1,29,14,13,-1,14,29,30,-1,30,15,14,-1,15,30,31,-1,31,16,15,-1,16,31,32,-1,32,12,16,-1,12,32,25,-1,25,11,12,-1,2,8,6,-1,2,6,3,-1,4,2,3,-1});
  }
}
protected class MFInt3282 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,5,4,-1,13,12,4,-1,0,13,4,-1,1,14,13,-1,13,0,1,-1,1,3,19,-1,19,14,1,-1,2,5,12,-1,12,21,2,-1,7,10,15,-1,7,15,16,-1,6,7,16,-1,8,6,16,-1,16,17,8,-1,8,17,18,-1,18,11,8,-1,9,20,15,-1,15,10,9,-1,23,22,28,-1,26,25,24,-1,27,26,24,-1,28,27,24,-1,23,28,24,-1,30,29,36,-1,30,36,35,-1,30,35,34,-1,34,33,32,-1,30,34,32,-1,30,32,31,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,3,1,-1,11,24,25,-1,25,8,11,-1,8,25,26,-1,26,6,8,-1,6,26,27,-1,27,7,6,-1,7,27,28,-1,28,4,7,-1,4,28,22,-1,22,0,4,-1,13,29,30,-1,30,12,13,-1,12,30,31,-1,31,21,12,-1,20,31,32,-1,32,15,20,-1,15,32,33,-1,33,16,15,-1,16,33,34,-1,34,17,16,-1,17,34,35,-1,35,18,17,-1,19,35,36,-1,36,14,19,-1,14,36,29,-1,29,13,14,-1,9,10,7,-1,9,7,4,-1,5,9,4,-1});
  }
}
protected class MFVec3f83 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.927f,-1.627f,-1.013f,-2.089f,-3.648f,-1.013f,0f,0.2797f,0.3064f,-2.045f,-0.3017f,-1.013f,-1.695f,0.0029f,-0.0151f,2.927f,-1.627f,-1.013f,2.045f,-0.3017f,-1.013f,2.089f,-3.648f,-1.013f,1.695f,0.0029f,-0.0151f,0f,-3.648f,-1.013f,-1.74f,-0.3226f,1.158f,-2.661f,-1.866f,0.9192f,-2.14f,-3.648f,0.9192f,1.74f,-0.3226f,1.158f,2.661f,-1.866f,0.9192f,2.14f,-3.648f,0.9192f,0f,-3.648f,0.9192f,0f,-0.0274f,1.661f,-2.405f,-1.656f,-1.915f,-1.75f,-2.942f,-1.915f,0f,-2.942f,-1.915f,1.75f,-2.942f,-1.915f,2.405f,-1.656f,-1.915f,1.742f,-0.5681f,-1.915f,-1.742f,-0.5681f,-1.915f,-2.393f,-1.966f,1.567f,-1.583f,-0.608f,1.784f,0f,-0.3446f,2.283f,1.583f,-0.608f,1.784f,2.393f,-1.966f,1.567f,1.955f,-3.469f,1.601f,0f,-3.469f,1.601f,-1.955f,-3.469f,1.601f});
  }
}
protected class MFVec2f84 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.433f,0.0595f,0.4411f,0.0186f,0.4637f,0.1714f,0.4411f,0.0186f,0.4244f,0.1312f,0.4394f,0.1472f,0.433f,0.0595f,0.4244f,0.1312f,0.4411f,0.0186f,0.4637f,0.1714f,0.4394f,0.1472f,0.4411f,0.0186f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4949f,0.0186f,0.4868f,0.1432f,0.4868f,0.1432f,0.433f,0.0595f,0.4411f,0.0186f,0.4411f,0.0186f,0.4411f,0.0186f,0.433f,0.0595f,0.4244f,0.1312f,0.4244f,0.1312f,0.4607f,0.0558f,0.464f,0.1246f,0.4868f,0.1432f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4904f,0.0166f});
  }
}
protected class MFFloat85 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat86 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3287 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,0,-1,0,1,3,-1,10,3,1,-1,1,2,10,-1,2,15,10,-1,0,5,6,-1,6,1,0,-1,6,7,2,-1,2,1,6,-1,7,16,15,-1,15,2,7,-1,17,5,0,-1,0,4,17,-1,3,8,9,-1,9,4,3,-1,10,11,8,-1,8,3,10,-1,11,10,15,-1,9,8,13,-1,13,12,9,-1,13,8,11,-1,11,14,13,-1,14,11,15,-1,15,16,14,-1,17,4,9,-1,9,12,17,-1,19,18,25,-1,25,24,23,-1,23,22,21,-1,25,23,21,-1,19,25,21,-1,19,21,20,-1,5,18,19,-1,19,6,5,-1,6,19,20,-1,20,7,6,-1,7,20,21,-1,21,16,7,-1,16,21,22,-1,22,14,16,-1,14,22,23,-1,23,13,14,-1,13,23,24,-1,24,12,13,-1,12,24,25,-1,25,17,12,-1,17,25,18,-1,18,5,17,-1});
  }
}
protected class MFInt3288 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,2,3,1,-1,4,1,3,-1,3,5,4,-1,5,6,4,-1,2,7,8,-1,8,3,2,-1,8,9,5,-1,5,3,8,-1,9,10,6,-1,6,5,9,-1,11,7,2,-1,2,0,11,-1,12,13,14,-1,14,15,12,-1,16,17,13,-1,13,12,16,-1,17,16,21,-1,14,13,19,-1,19,18,14,-1,19,13,17,-1,17,20,19,-1,20,17,21,-1,21,22,20,-1,23,15,14,-1,14,18,23,-1,25,24,31,-1,31,30,29,-1,29,28,27,-1,31,29,27,-1,25,31,27,-1,25,27,26,-1,7,24,25,-1,25,8,7,-1,8,25,26,-1,26,9,8,-1,9,26,27,-1,27,10,9,-1,22,27,28,-1,28,20,22,-1,20,28,29,-1,29,19,20,-1,19,29,30,-1,30,18,19,-1,18,30,31,-1,31,23,18,-1,11,31,24,-1,24,7,11,-1});
  }
}
protected class MFVec3f89 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-1.784f,1.036f,1.39f,-2.216f,-0.5826f,3.202f,-2.216f,-1.964f,2.834f,0f,-0.5826f,4.521f,0f,1.138f,3.008f,-1.74f,1.362f,0.2166f,-2.661f,-0.1823f,-0.0226f,-2.14f,-1.964f,-0.0226f,2.216f,-0.5826f,3.202f,1.784f,1.036f,1.39f,0f,-1.964f,4.154f,2.216f,-1.964f,2.834f,1.74f,1.362f,0.2166f,2.661f,-0.1823f,-0.0226f,2.14f,-1.964f,-0.0226f,0f,-1.964f,2.834f,0f,-1.964f,-0.0226f,0f,1.657f,0.7196f,-1.601f,1.243f,-0.4207f,-2.424f,-0.1368f,-0.64f,-1.977f,-1.746f,-0.61f,0f,-1.746f,-0.61f,1.977f,-1.746f,-0.61f,2.424f,-0.1368f,-0.64f,1.601f,1.243f,-0.4207f,0f,1.51f,0.0788f});
  }
}
protected class MFVec2f90 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.532f,0.098f,0.5645f,0.0707f,0.4885f,0.102f,0.5026f,0.044f,0.5945f,0.0186f,0.5487f,0.0186f,0.5487f,0.0186f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4868f,0.1432f,0.5645f,0.0707f,0.5026f,0.044f,0.4885f,0.102f,0.532f,0.098f,0.5945f,0.0186f,0.5487f,0.0186f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.5487f,0.0186f,0.4949f,0.0186f,0.4868f,0.1432f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4904f,0.0166f,0.4607f,0.0558f,0.464f,0.1246f,0.4868f,0.1432f});
  }
}
protected class MFFloat91 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat92 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3293 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,10,11,-1,11,5,0,-1,1,0,5,-1,5,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,1,6,-1,6,9,4,-1,2,7,26,-1,26,27,2,-1,8,5,11,-1,11,7,8,-1,9,6,5,-1,5,8,9,-1,11,10,13,-1,13,12,11,-1,7,11,12,-1,12,26,7,-1,16,15,14,-1,14,17,16,-1,19,18,15,-1,15,16,19,-1,22,21,20,-1,20,23,22,-1,23,20,24,-1,24,25,23,-1,25,24,18,-1,18,19,25,-1,22,27,26,-1,26,21,22,-1,20,21,14,-1,14,15,20,-1,24,20,15,-1,15,18,24,-1,14,12,13,-1,13,17,14,-1,21,26,12,-1,12,14,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,10,0,29,-1,29,28,10,-1,0,1,30,-1,30,29,0,-1,1,4,31,-1,31,30,1,-1,4,3,32,-1,32,31,4,-1,3,2,33,-1,33,32,3,-1,2,27,34,-1,34,33,2,-1,27,22,35,-1,35,34,27,-1,22,23,36,-1,36,35,22,-1,23,25,37,-1,37,36,23,-1,25,19,38,-1,38,37,25,-1,19,16,39,-1,39,38,19,-1,16,17,40,-1,40,39,16,-1,17,13,41,-1,41,40,17,-1,13,10,28,-1,28,41,13,-1});
  }
}
protected class MFInt3294 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,4,3,9,-1,9,10,4,-1,3,5,11,-1,11,9,3,-1,5,2,8,-1,8,11,5,-1,12,13,15,-1,15,14,12,-1,9,7,6,-1,6,10,9,-1,11,8,7,-1,7,9,11,-1,6,0,17,-1,17,18,6,-1,10,6,18,-1,18,16,10,-1,21,20,19,-1,19,22,21,-1,24,23,20,-1,20,21,24,-1,27,26,25,-1,25,28,27,-1,28,25,29,-1,29,30,28,-1,30,29,23,-1,23,24,30,-1,31,34,33,-1,33,32,31,-1,25,26,19,-1,19,20,25,-1,29,25,20,-1,20,23,29,-1,19,35,36,-1,36,22,19,-1,26,37,35,-1,35,19,26,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,43,46,50,-1,39,43,50,-1,39,50,51,-1,39,51,38,-1,0,1,39,-1,39,38,0,-1,1,2,40,-1,40,39,1,-1,2,5,41,-1,41,40,2,-1,5,3,42,-1,42,41,5,-1,3,4,43,-1,43,42,3,-1,12,14,44,-1,44,43,12,-1,34,31,45,-1,45,44,34,-1,27,28,46,-1,46,45,27,-1,28,30,47,-1,47,46,28,-1,30,24,48,-1,48,47,30,-1,24,21,49,-1,49,48,24,-1,21,22,50,-1,50,49,21,-1,22,36,51,-1,51,50,22,-1,17,0,38,-1,38,51,17,-1});
  }
}
protected class MFVec3f95 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.178f,1.114f,3.711f,5.76f,1.15f,1.754f,1.52f,0.9575f,-3.918f,3.95f,0.9672f,-2.776f,5.309f,1.072f,-0.9797f,3.789f,0.0396f,2.969f,5.166f,0.0713f,1.445f,1.593f,-0.0798f,-2.916f,3.6f,-0.0573f,-2.087f,4.841f,-0.0103f,-0.6841f,1.635f,1.083f,4.322f,1.595f,0.0009f,3.405f,0f,0.0009f,3.405f,0f,1.083f,4.322f,-1.595f,0.0009f,3.405f,-3.789f,0.0396f,2.969f,-4.178f,1.114f,3.711f,-1.635f,1.083f,4.322f,-5.166f,0.0713f,1.445f,-5.76f,1.15f,1.754f,-3.6f,-0.0573f,-2.087f,-1.593f,-0.0798f,-2.916f,-1.52f,0.9575f,-3.918f,-3.95f,0.9672f,-2.776f,-4.841f,-0.0103f,-0.6841f,-5.309f,1.072f,-0.9797f,0f,-0.0798f,-2.916f,0f,0.9575f,-3.918f,1.609f,1.867f,3.426f,4.053f,1.867f,2.943f,5.524f,1.867f,1.449f,5.098f,1.867f,-0.671f,3.806f,1.867f,-2.074f,1.47f,1.867f,-2.976f,0f,1.867f,-2.976f,-1.47f,1.867f,-2.976f,-3.806f,1.867f,-2.074f,-5.098f,1.867f,-0.671f,-5.524f,1.867f,1.449f,-4.053f,1.867f,2.943f,-1.609f,1.867f,3.426f,0f,1.867f,3.426f});
  }
}
protected class MFVec2f96 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.019f,0.2349f,0.1011f,0.241f,0.1445f,0.2419f,0.2369f,0.2375f,0.3561f,0.2404f,0.1927f,0.24f,0.0206f,0.2122f,0.1067f,0.2154f,0.1463f,0.2162f,0.227f,0.2131f,0.3536f,0.2151f,0.1879f,0.2143f,0.3553f,0.2398f,0.3555f,0.2151f,0.3557f,0.2401f,0.3545f,0.2151f,0.3536f,0.2151f,0.019f,0.2349f,0.0206f,0.2122f,0.0206f,0.2122f,0.1067f,0.2154f,0.1011f,0.241f,0.019f,0.2349f,0.1463f,0.2162f,0.1445f,0.2419f,0.227f,0.2131f,0.3536f,0.2151f,0.3561f,0.2404f,0.2369f,0.2375f,0.1879f,0.2143f,0.1927f,0.24f,0.3553f,0.2398f,0.3555f,0.2151f,0.3545f,0.2151f,0.3557f,0.2401f,0.0206f,0.2122f,0.019f,0.2349f,0.3536f,0.2151f,0.019f,0.2349f,0.1011f,0.241f,0.1445f,0.2419f,0.1927f,0.24f,0.2369f,0.2375f,0.3561f,0.2404f,0.3557f,0.2401f,0.3553f,0.2398f,0.2369f,0.2375f,0.1927f,0.24f,0.1445f,0.2419f,0.1011f,0.241f,0.019f,0.2349f,0.019f,0.2349f});
  }
}
protected class MFFloat97 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat98 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3299 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,17,21,-1,21,6,1,-1,0,15,16,-1,16,5,0,-1,7,47,20,-1,20,4,7,-1,4,0,9,-1,9,8,4,-1,0,5,10,-1,10,9,0,-1,5,3,11,-1,11,10,5,-1,3,2,12,-1,12,11,3,-1,2,1,13,-1,13,12,2,-1,1,6,40,-1,40,13,1,-1,7,4,8,-1,8,14,7,-1,20,15,0,-1,0,4,20,-1,17,1,2,-1,2,18,17,-1,19,18,2,-1,2,3,19,-1,16,19,3,-1,3,5,16,-1,15,20,23,-1,23,22,15,-1,20,47,50,-1,50,23,20,-1,21,17,24,-1,24,52,21,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,16,27,-1,27,26,19,-1,16,15,22,-1,22,27,16,-1,28,6,21,-1,21,45,28,-1,45,44,32,-1,32,28,45,-1,46,43,31,-1,31,33,46,-1,30,35,34,-1,34,29,30,-1,29,34,36,-1,36,31,29,-1,31,36,37,-1,37,33,31,-1,33,37,38,-1,38,32,33,-1,32,38,39,-1,39,28,32,-1,28,39,40,-1,40,6,28,-1,7,14,35,-1,35,30,7,-1,41,30,29,-1,29,42,41,-1,29,31,43,-1,43,42,29,-1,46,33,32,-1,32,44,46,-1,47,7,30,-1,30,41,47,-1,42,49,48,-1,48,41,42,-1,41,48,50,-1,50,47,41,-1,21,52,51,-1,51,45,21,-1,45,51,53,-1,53,44,45,-1,44,53,54,-1,54,46,44,-1,46,54,55,-1,55,43,46,-1,43,55,49,-1,49,42,43,-1});
  }
}
protected class MFInt32100 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,19,24,-1,24,7,4,-1,0,17,18,-1,18,2,0,-1,8,25,23,-1,23,1,8,-1,1,0,10,-1,10,9,1,-1,0,2,11,-1,11,10,0,-1,2,6,12,-1,12,11,2,-1,6,5,13,-1,13,12,6,-1,5,3,14,-1,14,13,5,-1,4,7,15,-1,15,14,4,-1,8,1,9,-1,9,16,8,-1,23,17,0,-1,0,1,23,-1,20,3,5,-1,5,21,20,-1,22,21,5,-1,5,6,22,-1,18,22,6,-1,6,2,18,-1,17,23,27,-1,27,26,17,-1,23,25,28,-1,28,27,23,-1,24,19,30,-1,30,29,24,-1,20,21,31,-1,31,30,20,-1,21,22,32,-1,32,31,21,-1,22,18,33,-1,33,32,22,-1,18,17,26,-1,26,33,18,-1,34,35,59,-1,59,58,34,-1,55,54,40,-1,40,39,55,-1,56,53,38,-1,38,41,56,-1,37,44,43,-1,43,36,37,-1,36,43,45,-1,45,38,36,-1,38,45,46,-1,46,41,38,-1,41,46,47,-1,47,40,41,-1,40,47,48,-1,48,39,40,-1,34,48,49,-1,49,35,34,-1,42,50,44,-1,44,37,42,-1,51,37,36,-1,36,52,51,-1,36,38,53,-1,53,52,36,-1,56,41,40,-1,40,54,56,-1,57,42,37,-1,37,51,57,-1,52,61,60,-1,60,51,52,-1,51,60,62,-1,62,57,51,-1,59,64,63,-1,63,58,59,-1,55,63,65,-1,65,54,55,-1,54,65,66,-1,66,56,54,-1,56,66,67,-1,67,53,56,-1,53,67,61,-1,61,52,53,-1});
  }
}
protected class MFVec3f101 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.874f,1.464f,3.02f,1.367f,1.464f,-3.028f,3.71f,1.464f,-2.051f,4.987f,1.464f,-0.7054f,1.404f,1.464f,3.517f,5.353f,1.464f,1.475f,0f,1.464f,-3.028f,0f,1.464f,3.517f,1.366f,2.022f,2.962f,3.726f,2.022f,2.54f,5.078f,2.022f,1.283f,4.742f,2.022f,-0.4973f,3.55f,2.022f,-1.615f,1.311f,2.022f,-2.446f,0f,2.022f,2.962f,4.178f,0.0371f,3.711f,5.76f,0.073f,1.754f,1.52f,-0.1193f,-3.918f,3.95f,-0.1096f,-2.776f,5.309f,-0.0044f,-0.9797f,1.635f,0.0066f,4.322f,0f,-0.1193f,-3.918f,3.857f,-0.6929f,2.997f,1.533f,-0.6929f,3.49f,1.398f,-0.6929f,-3.046f,3.619f,-0.6929f,-2.124f,4.847f,-0.6929f,-0.6903f,5.251f,-0.6929f,1.473f,-1.367f,1.464f,-3.028f,-3.874f,1.464f,3.02f,-1.404f,1.464f,3.517f,-5.353f,1.464f,1.475f,-3.71f,1.464f,-2.051f,-4.987f,1.464f,-0.7054f,-3.726f,2.022f,2.54f,-1.366f,2.022f,2.962f,-5.078f,2.022f,1.283f,-4.742f,2.022f,-0.4973f,-3.55f,2.022f,-1.615f,-1.311f,2.022f,-2.446f,0f,2.022f,-2.446f,-1.635f,0.0066f,4.322f,-4.178f,0.0371f,3.711f,-5.76f,0.073f,1.754f,-3.95f,-0.1096f,-2.776f,-1.52f,-0.1193f,-3.918f,-5.309f,-0.0044f,-0.9797f,0f,0.0066f,4.322f,-1.533f,-0.6929f,3.49f,-3.857f,-0.6929f,2.997f,0f,-0.6929f,3.49f,-1.398f,-0.6929f,-3.046f,0f,-0.6929f,-3.046f,-3.619f,-0.6929f,-2.124f,-4.847f,-0.6929f,-0.6903f,-5.251f,-0.6929f,1.473f});
  }
}
protected class MFVec2f102 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1041f,0.2822f,0.0168f,0.2798f,0.1518f,0.2789f,0.3444f,0.2746f,0.3604f,0.2737f,0.221f,0.2742f,0.1842f,0.2768f,0.3527f,0.263f,0.0181f,0.2816f,0.0168f,0.2798f,0.1041f,0.2822f,0.1518f,0.2789f,0.1842f,0.2768f,0.221f,0.2742f,0.3444f,0.2746f,0.3527f,0.263f,0.0181f,0.2816f,0.1011f,0.241f,0.1445f,0.2419f,0.3553f,0.2398f,0.3561f,0.2404f,0.2369f,0.2375f,0.1927f,0.24f,0.019f,0.2349f,0.3557f,0.2401f,0.019f,0.2349f,0.1011f,0.241f,0.019f,0.2349f,0.019f,0.2349f,0.3557f,0.2401f,0.3553f,0.2398f,0.2369f,0.2375f,0.1927f,0.24f,0.1445f,0.2419f,0.3604f,0.2737f,0.3527f,0.263f,0.1041f,0.2822f,0.0168f,0.2798f,0.1518f,0.2789f,0.3444f,0.2746f,0.221f,0.2742f,0.1842f,0.2768f,0.0181f,0.2816f,0.1041f,0.2822f,0.0168f,0.2798f,0.1518f,0.2789f,0.1842f,0.2768f,0.221f,0.2742f,0.3444f,0.2746f,0.3527f,0.263f,0.0181f,0.2816f,0.019f,0.2349f,0.1011f,0.241f,0.1445f,0.2419f,0.2369f,0.2375f,0.3561f,0.2404f,0.1927f,0.24f,0.019f,0.2349f,0.3553f,0.2398f,0.3557f,0.2401f,0.019f,0.2349f,0.1011f,0.241f,0.019f,0.2349f,0.3553f,0.2398f,0.3557f,0.2401f,0.2369f,0.2375f,0.1927f,0.24f,0.1445f,0.2419f});
  }
}
protected class MFFloat103 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat104 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32105 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,0,1,-1,1,35,7,-1,33,2,0,-1,0,7,33,-1,34,8,3,-1,3,4,34,-1,32,5,2,-1,2,33,32,-1,35,1,6,-1,6,54,35,-1,32,34,4,-1,4,5,32,-1,8,45,17,-1,17,3,8,-1,47,48,10,-1,10,9,47,-1,11,47,9,-1,9,12,11,-1,51,14,13,-1,13,42,51,-1,15,11,12,-1,12,16,15,-1,48,54,6,-1,6,10,48,-1,15,16,14,-1,14,51,15,-1,42,13,17,-1,17,45,42,-1,1,0,19,-1,19,18,1,-1,0,2,20,-1,20,19,0,-1,2,5,21,-1,21,20,2,-1,5,4,22,-1,22,21,5,-1,4,3,23,-1,23,22,4,-1,3,17,24,-1,24,23,3,-1,17,13,25,-1,25,24,17,-1,13,14,26,-1,26,25,13,-1,14,16,27,-1,27,26,14,-1,16,12,28,-1,28,27,16,-1,12,9,29,-1,29,28,12,-1,9,10,30,-1,30,29,9,-1,10,6,31,-1,31,30,10,-1,6,1,18,-1,18,31,6,-1,8,37,44,-1,44,45,8,-1,7,35,40,-1,40,36,7,-1,41,33,7,-1,7,36,41,-1,8,34,38,-1,38,37,8,-1,34,32,39,-1,39,38,34,-1,39,32,33,-1,33,41,39,-1,35,54,55,-1,55,40,35,-1,42,45,44,-1,44,43,42,-1,47,46,49,-1,49,48,47,-1,50,46,47,-1,47,11,50,-1,42,43,52,-1,52,51,42,-1,51,52,53,-1,53,15,51,-1,53,50,11,-1,11,15,53,-1,48,49,55,-1,55,54,48,-1,36,40,57,-1,57,56,36,-1,40,55,58,-1,58,57,40,-1,55,49,59,-1,59,58,55,-1,49,46,60,-1,60,59,49,-1,46,50,61,-1,61,60,46,-1,50,53,62,-1,62,61,50,-1,53,52,63,-1,63,62,53,-1,52,43,64,-1,64,63,52,-1,43,44,65,-1,65,64,43,-1,44,37,66,-1,66,65,44,-1,37,38,67,-1,67,66,37,-1,38,39,68,-1,68,67,38,-1,39,41,69,-1,69,68,39,-1,41,36,56,-1,56,69,41,-1});
  }
}
protected class MFInt32106 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,1,-1,1,17,9,-1,13,2,0,-1,0,9,13,-1,16,15,3,-1,3,5,16,-1,10,6,2,-1,2,13,10,-1,17,1,8,-1,8,11,17,-1,10,16,5,-1,5,6,10,-1,14,12,7,-1,7,4,14,-1,19,18,21,-1,21,20,19,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,22,23,-1,23,29,28,-1,18,30,31,-1,31,21,18,-1,28,29,27,-1,27,24,28,-1,33,32,35,-1,35,34,33,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,8,1,36,-1,36,49,8,-1,56,60,66,-1,66,57,56,-1,51,50,64,-1,64,59,51,-1,65,52,51,-1,51,59,65,-1,54,53,62,-1,62,61,54,-1,53,55,63,-1,63,62,53,-1,63,55,52,-1,52,65,63,-1,50,58,67,-1,67,64,50,-1,68,71,70,-1,70,69,68,-1,73,72,75,-1,75,74,73,-1,76,72,73,-1,73,77,76,-1,79,78,81,-1,81,80,79,-1,80,81,83,-1,83,82,80,-1,83,76,77,-1,77,82,83,-1,74,75,85,-1,85,84,74,-1,59,64,87,-1,87,86,59,-1,64,67,88,-1,88,87,64,-1,85,75,89,-1,89,88,85,-1,75,72,90,-1,90,89,75,-1,72,76,91,-1,91,90,72,-1,76,83,92,-1,92,91,76,-1,83,81,93,-1,93,92,83,-1,81,78,94,-1,94,93,81,-1,69,70,95,-1,95,94,69,-1,66,60,96,-1,96,95,66,-1,61,62,97,-1,97,96,61,-1,62,63,98,-1,98,97,62,-1,63,65,99,-1,99,98,63,-1,65,59,86,-1,86,99,65,-1});
  }
}
protected class MFVec3f107 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.702f,1.815f,2.588f,1.286f,1.815f,3.04f,5.104f,1.815f,1.294f,1.363f,1.815f,-2.529f,3.588f,1.815f,-1.686f,4.805f,1.815f,-0.5256f,0f,1.815f,3.04f,3.71f,0.7717f,2.648f,1.296f,0.7706f,-2.596f,-3.702f,1.815f,2.588f,-1.286f,1.815f,3.04f,-5.128f,0.7717f,1.321f,-5.104f,1.815f,1.294f,-1.363f,1.815f,-2.529f,-3.588f,1.815f,-1.686f,-4.818f,0.7717f,-0.5615f,-4.805f,1.815f,-0.5256f,0f,1.815f,-2.529f,1.266f,2.58f,2.82f,3.599f,2.58f,2.383f,4.867f,2.58f,1.212f,4.6f,2.58f,-0.4169f,3.469f,2.58f,-1.496f,1.323f,2.58f,-2.308f,0f,2.58f,-2.309f,-1.323f,2.58f,-2.308f,-3.469f,2.58f,-1.496f,-4.6f,2.58f,-0.4169f,-4.867f,2.58f,1.212f,-3.599f,2.58f,2.383f,-1.266f,2.58f,2.82f,0f,2.58f,2.82f,4.818f,0.7717f,-0.5615f,5.128f,0.7717f,1.321f,3.593f,0.7717f,-1.696f,1.281f,0.7717f,3.092f,3.874f,0.0011f,3.02f,1.367f,0.0011f,-3.028f,3.71f,0.0011f,-2.051f,4.987f,0.0011f,-0.7054f,1.404f,0.0011f,3.517f,5.353f,0.0011f,1.475f,-1.293f,0.7717f,-2.595f,-1.367f,0.0011f,-3.028f,0f,0.0011f,-3.028f,-0.0031f,0.7706f,-2.596f,-3.874f,0.0011f,3.02f,-3.71f,0.7717f,2.648f,-1.281f,0.7717f,3.092f,-1.404f,0.0011f,3.517f,-5.353f,0.0011f,1.475f,-3.593f,0.7717f,-1.696f,-3.71f,0.0011f,-2.051f,-4.987f,0.0011f,-0.7054f,0f,0.7717f,3.092f,0f,0.0011f,3.517f,3.751f,-1.472f,2.601f,1.377f,-1.472f,3.038f,0f,-1.472f,3.038f,-1.377f,-1.472f,3.038f,-3.751f,-1.472f,2.601f,-5.101f,-1.472f,1.311f,-4.765f,-1.472f,-0.5181f,-3.571f,-1.472f,-1.67f,-1.319f,-1.472f,-2.529f,0f,-1.472f,-2.529f,1.319f,-1.472f,-2.529f,3.571f,-1.472f,-1.67f,4.765f,-1.472f,-0.5181f,5.101f,-1.472f,1.311f});
  }
}
protected class MFVec2f108 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0943f,0.3233f,0.0192f,0.3251f,0.1489f,0.3212f,0.3615f,0.3195f,0.3631f,0.318f,0.2175f,0.3185f,0.1844f,0.32f,0.3623f,0.3188f,0.0192f,0.3251f,0.0982f,0.302f,0.1849f,0.2961f,0.0177f,0.3051f,0.3627f,0.2922f,0.1487f,0.2975f,0.3633f,0.2922f,0.3621f,0.2922f,0.2175f,0.2944f,0.0177f,0.3051f,0.0177f,0.3051f,0.0982f,0.302f,0.0943f,0.3233f,0.0192f,0.3251f,0.1487f,0.2975f,0.1489f,0.3212f,0.2175f,0.2944f,0.3621f,0.2922f,0.3615f,0.3195f,0.2175f,0.3185f,0.1849f,0.2961f,0.1844f,0.32f,0.0177f,0.3051f,0.0192f,0.3251f,0.3631f,0.318f,0.3633f,0.2922f,0.3627f,0.2922f,0.3623f,0.3188f,0.0192f,0.3251f,0.0943f,0.3233f,0.1489f,0.3212f,0.1844f,0.32f,0.2175f,0.3185f,0.3615f,0.3195f,0.3623f,0.3188f,0.3631f,0.318f,0.2175f,0.3185f,0.1844f,0.32f,0.1489f,0.3212f,0.0943f,0.3233f,0.0192f,0.3251f,0.0192f,0.3251f,0.0177f,0.3051f,0.0982f,0.302f,0.1487f,0.2975f,0.2175f,0.2944f,0.3621f,0.2922f,0.1849f,0.2961f,0.3633f,0.2922f,0.3627f,0.2922f,0.0177f,0.3051f,0.1055f,0.2814f,0.3697f,0.2711f,0.3605f,0.2757f,0.2204f,0.275f,0.1853f,0.2768f,0.024f,0.2813f,0.1448f,0.2785f,0.3603f,0.2745f,0.0155f,0.2778f,0.3633f,0.2922f,0.3697f,0.2711f,0.3603f,0.2745f,0.3627f,0.2922f,0.1055f,0.2814f,0.0982f,0.302f,0.0177f,0.3051f,0.024f,0.2813f,0.1448f,0.2785f,0.1487f,0.2975f,0.3605f,0.2757f,0.3621f,0.2922f,0.2175f,0.2944f,0.2204f,0.275f,0.1849f,0.2961f,0.1853f,0.2768f,0.0177f,0.3051f,0.0155f,0.2778f,0.1055f,0.2814f,0.024f,0.2813f,0.0155f,0.2778f,0.024f,0.2813f,0.1055f,0.2814f,0.1448f,0.2785f,0.1853f,0.2768f,0.2204f,0.275f,0.3605f,0.2757f,0.3603f,0.2745f,0.3697f,0.2711f,0.2204f,0.275f,0.1853f,0.2768f,0.1448f,0.2785f});
  }
}
protected class MFFloat109 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat110 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32111 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,9,-1,9,8,0,-1,3,4,10,-1,10,9,3,-1,4,2,11,-1,11,10,4,-1,2,1,12,-1,12,11,2,-1,1,5,13,-1,13,12,1,-1,5,7,14,-1,14,13,5,-1,6,0,8,-1,8,47,6,-1,19,18,5,-1,5,1,19,-1,20,19,1,-1,1,2,20,-1,20,2,4,-1,4,16,20,-1,21,0,6,-1,6,63,21,-1,63,17,15,-1,15,21,63,-1,15,3,0,-1,0,21,15,-1,18,53,7,-1,7,5,18,-1,16,4,3,-1,3,15,16,-1,19,20,27,-1,27,26,19,-1,53,18,25,-1,25,58,53,-1,22,15,17,-1,17,23,22,-1,24,16,15,-1,15,22,24,-1,18,19,26,-1,26,25,18,-1,20,16,24,-1,24,27,20,-1,17,63,64,-1,64,23,17,-1,22,23,29,-1,29,28,22,-1,23,64,30,-1,30,29,23,-1,58,25,31,-1,31,68,58,-1,25,26,32,-1,32,31,25,-1,26,27,33,-1,33,32,26,-1,27,24,34,-1,34,33,27,-1,24,22,28,-1,28,34,24,-1,39,42,41,-1,41,40,39,-1,40,41,43,-1,43,38,40,-1,38,43,44,-1,44,37,38,-1,37,44,45,-1,45,36,37,-1,36,45,46,-1,46,35,36,-1,35,46,14,-1,14,7,35,-1,6,47,42,-1,42,39,6,-1,54,36,35,-1,35,48,54,-1,49,37,36,-1,36,54,49,-1,38,37,49,-1,49,50,38,-1,6,39,51,-1,51,63,6,-1,63,51,60,-1,60,52,63,-1,39,40,60,-1,60,51,39,-1,7,53,48,-1,48,35,7,-1,40,38,50,-1,50,60,40,-1,54,56,55,-1,55,49,54,-1,53,58,57,-1,57,48,53,-1,59,61,52,-1,52,60,59,-1,62,59,60,-1,60,50,62,-1,48,57,56,-1,56,54,48,-1,49,55,62,-1,62,50,49,-1,52,61,64,-1,64,63,52,-1,59,66,65,-1,65,61,59,-1,61,65,30,-1,30,64,61,-1,58,68,67,-1,67,57,58,-1,57,67,69,-1,69,56,57,-1,56,69,70,-1,70,55,56,-1,55,70,71,-1,71,62,55,-1,62,71,66,-1,66,59,62,-1});
  }
}
protected class MFInt32112 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,4,10,-1,10,9,0,-1,4,5,11,-1,11,10,4,-1,5,2,12,-1,12,11,5,-1,2,1,13,-1,13,12,2,-1,1,6,14,-1,14,13,1,-1,7,3,15,-1,15,14,7,-1,8,0,9,-1,9,16,8,-1,23,22,6,-1,6,1,23,-1,24,23,1,-1,1,2,24,-1,24,2,5,-1,5,20,24,-1,25,0,8,-1,8,27,25,-1,27,17,18,-1,18,25,27,-1,19,4,0,-1,0,25,19,-1,21,26,3,-1,3,7,21,-1,20,5,4,-1,4,19,20,-1,33,34,43,-1,43,42,33,-1,35,32,40,-1,40,44,35,-1,37,28,30,-1,30,38,37,-1,39,29,28,-1,28,37,39,-1,31,33,42,-1,42,41,31,-1,34,29,39,-1,39,43,34,-1,30,36,45,-1,45,38,30,-1,37,38,47,-1,47,46,37,-1,38,45,48,-1,48,47,38,-1,44,40,50,-1,50,49,44,-1,41,42,51,-1,51,50,41,-1,42,43,52,-1,52,51,42,-1,43,39,53,-1,53,52,43,-1,39,37,46,-1,46,53,39,-1,58,64,63,-1,63,60,58,-1,60,63,65,-1,65,57,60,-1,57,65,66,-1,66,56,57,-1,56,66,67,-1,67,55,56,-1,55,67,68,-1,68,54,55,-1,61,68,69,-1,69,62,61,-1,59,70,64,-1,64,58,59,-1,71,55,54,-1,54,72,71,-1,73,56,55,-1,55,71,73,-1,57,56,73,-1,73,74,57,-1,59,58,76,-1,76,75,59,-1,75,76,77,-1,77,78,75,-1,58,60,79,-1,79,76,58,-1,62,81,80,-1,80,61,62,-1,60,57,74,-1,74,79,60,-1,82,85,84,-1,84,83,82,-1,86,89,88,-1,88,87,86,-1,90,93,92,-1,92,91,90,-1,94,90,91,-1,91,95,94,-1,97,96,85,-1,85,82,97,-1,83,84,94,-1,94,95,83,-1,92,93,99,-1,99,98,92,-1,90,101,100,-1,100,93,90,-1,93,100,102,-1,102,99,93,-1,89,104,103,-1,103,88,89,-1,96,103,105,-1,105,85,96,-1,85,105,106,-1,106,84,85,-1,84,106,107,-1,107,94,84,-1,94,107,101,-1,101,90,94,-1});
  }
}
protected class MFVec3f113 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.418f,2.454f,3.362f,3.892f,2.454f,-1.86f,5.121f,2.454f,-0.6992f,3.987f,2.454f,3.259f,5.601f,2.454f,1.285f,1.717f,2.454f,-2.528f,0f,2.454f,3.363f,0f,2.454f,-2.543f,1.415f,3.298f,3.18f,3.898f,3.298f,3.08f,5.402f,3.298f,1.24f,4.956f,3.298f,-0.5656f,3.798f,3.298f,-1.66f,1.689f,3.298f,-2.308f,0f,3.298f,-2.323f,3.695f,1.042f,2.53f,5.081f,1.042f,1.267f,1.292f,1.042f,2.989f,1.434f,1.042f,-2.462f,3.584f,1.042f,-1.676f,4.793f,1.042f,-0.4887f,1.292f,1.042f,2.989f,3.702f,-0.0013f,2.589f,1.286f,-0.0013f,3.041f,5.104f,-0.0013f,1.295f,1.363f,-0.0013f,-2.528f,3.588f,-0.0013f,-1.685f,4.805f,-0.0013f,-0.5246f,3.625f,-0.6809f,2.436f,1.271f,-0.6809f,2.876f,0f,-0.6809f,2.876f,1.333f,-0.6809f,-2.363f,3.499f,-0.6809f,-1.543f,4.651f,-0.6809f,-0.4432f,4.927f,-0.6809f,1.234f,-1.717f,2.454f,-2.528f,-3.892f,2.454f,-1.86f,-5.121f,2.454f,-0.6992f,-5.601f,2.454f,1.285f,-1.418f,2.454f,3.362f,-3.987f,2.454f,3.259f,-3.898f,3.298f,3.08f,-1.415f,3.298f,3.18f,-5.402f,3.298f,1.24f,-4.956f,3.298f,-0.5656f,-3.798f,3.298f,-1.66f,-1.689f,3.298f,-2.308f,0f,3.298f,3.18f,-1.434f,1.042f,-2.462f,-4.793f,1.042f,-0.4887f,-5.081f,1.042f,1.267f,-1.292f,1.042f,2.989f,-1.292f,1.042f,2.989f,0f,1.042f,-2.463f,-3.584f,1.042f,-1.676f,-4.805f,-0.0013f,-0.5246f,-3.588f,-0.0013f,-1.685f,-1.363f,-0.0013f,-2.528f,0f,-0.0013f,-2.528f,-3.702f,-0.0013f,2.589f,-3.695f,1.042f,2.53f,-1.286f,-0.0013f,3.041f,-5.104f,-0.0013f,1.295f,0f,1.042f,2.989f,0f,-0.0013f,3.041f,-1.271f,-0.6809f,2.876f,-3.625f,-0.6809f,2.436f,-1.333f,-0.6809f,-2.363f,0f,-0.6809f,-2.363f,-3.499f,-0.6809f,-1.543f,-4.651f,-0.6809f,-0.4432f,-4.927f,-0.6809f,1.234f});
  }
}
protected class MFVec2f114 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0245f,0.3617f,0.2207f,0.3633f,0.1922f,0.3628f,0.3616f,0.3609f,0.0859f,0.3657f,0.1489f,0.3665f,0.3589f,0.3648f,0.3617f,0.3609f,0.0254f,0.3626f,0.0245f,0.3617f,0.0859f,0.3657f,0.1489f,0.3665f,0.1922f,0.3628f,0.2207f,0.3633f,0.3589f,0.3648f,0.3616f,0.3609f,0.0254f,0.3626f,0.0206f,0.3452f,0.0903f,0.3446f,0.0903f,0.3446f,0.1491f,0.3449f,0.3629f,0.3439f,0.3608f,0.3469f,0.2175f,0.3427f,0.1838f,0.3438f,0.0206f,0.3452f,0.3619f,0.3454f,0.0206f,0.3452f,0.0903f,0.3446f,0.1491f,0.3449f,0.0206f,0.3452f,0.3608f,0.3469f,0.3629f,0.3439f,0.2175f,0.3427f,0.1838f,0.3438f,0.3619f,0.3454f,0.0206f,0.3452f,0.0943f,0.3233f,0.0192f,0.3251f,0.1489f,0.3212f,0.3631f,0.318f,0.3615f,0.3195f,0.2175f,0.3185f,0.1844f,0.32f,0.3623f,0.3188f,0.0192f,0.3251f,0.0943f,0.3233f,0.0192f,0.3251f,0.0192f,0.3251f,0.3623f,0.3188f,0.3631f,0.318f,0.2175f,0.3185f,0.1844f,0.32f,0.1489f,0.3212f,0.3589f,0.3648f,0.2207f,0.3633f,0.1922f,0.3628f,0.1489f,0.3665f,0.0245f,0.3617f,0.0254f,0.3626f,0.0859f,0.3657f,0.3617f,0.3609f,0.3616f,0.3609f,0.0859f,0.3657f,0.0245f,0.3617f,0.1489f,0.3665f,0.1922f,0.3628f,0.2207f,0.3633f,0.3589f,0.3648f,0.3616f,0.3609f,0.0254f,0.3626f,0.2175f,0.3427f,0.3608f,0.3469f,0.1838f,0.3438f,0.1491f,0.3449f,0.0206f,0.3452f,0.0206f,0.3452f,0.0903f,0.3446f,0.0206f,0.3452f,0.0903f,0.3446f,0.3629f,0.3439f,0.3619f,0.3454f,0.2175f,0.3427f,0.1838f,0.3438f,0.1844f,0.32f,0.2175f,0.3185f,0.3619f,0.3454f,0.3629f,0.3439f,0.3631f,0.318f,0.3623f,0.3188f,0.0943f,0.3233f,0.0903f,0.3446f,0.0206f,0.3452f,0.0192f,0.3251f,0.1489f,0.3212f,0.1491f,0.3449f,0.3615f,0.3195f,0.3608f,0.3469f,0.0206f,0.3452f,0.0192f,0.3251f,0.0192f,0.3251f,0.0943f,0.3233f,0.0192f,0.3251f,0.3631f,0.318f,0.3623f,0.3188f,0.2175f,0.3185f,0.1844f,0.32f,0.1489f,0.3212f});
  }
}
protected class MFFloat115 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat116 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32117 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,18,53,-1,53,6,0,-1,3,5,9,-1,9,8,3,-1,5,1,10,-1,10,9,5,-1,1,2,11,-1,11,10,1,-1,2,4,12,-1,12,11,2,-1,4,0,13,-1,13,12,4,-1,0,6,46,-1,46,13,0,-1,7,3,8,-1,8,14,7,-1,17,1,5,-1,5,15,17,-1,16,3,7,-1,7,19,16,-1,0,4,20,-1,20,18,0,-1,4,2,21,-1,21,20,4,-1,21,2,1,-1,1,17,21,-1,16,15,5,-1,5,3,16,-1,18,20,23,-1,23,27,18,-1,25,15,16,-1,16,22,25,-1,27,57,53,-1,53,18,27,-1,25,26,17,-1,17,15,25,-1,23,20,21,-1,21,24,23,-1,21,17,26,-1,26,24,21,-1,22,16,19,-1,19,61,22,-1,25,22,29,-1,29,28,25,-1,22,61,64,-1,64,29,22,-1,57,27,30,-1,30,66,57,-1,27,23,31,-1,31,30,27,-1,23,24,32,-1,32,31,23,-1,24,26,33,-1,33,32,24,-1,26,25,28,-1,28,33,26,-1,6,53,52,-1,52,38,6,-1,39,48,49,-1,49,36,39,-1,39,38,52,-1,52,48,39,-1,35,41,40,-1,40,34,35,-1,34,40,42,-1,42,37,34,-1,37,42,43,-1,43,36,37,-1,36,43,44,-1,44,39,36,-1,39,44,45,-1,45,38,39,-1,38,45,46,-1,46,6,38,-1,7,14,41,-1,41,35,7,-1,47,51,34,-1,34,37,47,-1,19,7,35,-1,35,50,19,-1,47,37,36,-1,36,49,47,-1,35,34,51,-1,51,50,35,-1,60,58,47,-1,47,49,60,-1,50,51,55,-1,55,54,50,-1,53,57,56,-1,56,52,53,-1,47,58,55,-1,55,51,47,-1,59,48,52,-1,52,56,59,-1,60,49,48,-1,48,59,60,-1,54,61,19,-1,19,50,54,-1,55,63,62,-1,62,54,55,-1,54,62,64,-1,64,61,54,-1,57,66,65,-1,65,56,57,-1,56,65,67,-1,67,59,56,-1,59,67,68,-1,68,60,59,-1,60,68,69,-1,69,58,60,-1,58,69,63,-1,63,55,58,-1});
  }
}
protected class MFInt32118 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,133,134,-1,134,5,1,-1,4,8,17,-1,17,16,4,-1,8,2,18,-1,18,17,8,-1,2,3,19,-1,19,18,2,-1,3,7,20,-1,20,19,3,-1,7,0,21,-1,21,20,7,-1,1,5,22,-1,22,21,1,-1,6,4,16,-1,16,23,6,-1,26,2,8,-1,8,24,26,-1,25,4,6,-1,6,30,25,-1,0,7,28,-1,28,27,0,-1,7,3,29,-1,29,28,7,-1,29,3,2,-1,2,26,29,-1,25,24,8,-1,8,4,25,-1,35,37,107,-1,107,108,35,-1,118,31,32,-1,32,115,118,-1,116,117,39,-1,39,36,116,-1,118,119,34,-1,34,31,118,-1,110,37,38,-1,38,109,110,-1,38,34,111,-1,111,112,38,-1,114,32,33,-1,33,113,114,-1,44,40,50,-1,50,49,44,-1,40,48,51,-1,51,50,40,-1,43,47,53,-1,53,52,43,-1,46,41,54,-1,54,53,46,-1,41,42,55,-1,55,54,41,-1,42,45,56,-1,56,55,42,-1,45,44,49,-1,49,56,45,-1,12,135,136,-1,136,11,12,-1,13,79,80,-1,80,9,13,-1,13,14,78,-1,78,79,13,-1,58,67,66,-1,66,57,58,-1,57,66,15,-1,15,10,57,-1,60,68,69,-1,69,59,60,-1,59,69,70,-1,70,64,59,-1,64,70,71,-1,71,65,64,-1,61,71,72,-1,72,62,61,-1,63,73,67,-1,67,58,63,-1,74,75,57,-1,57,10,74,-1,77,63,58,-1,58,76,77,-1,74,10,9,-1,9,80,74,-1,58,57,75,-1,75,76,58,-1,120,121,85,-1,85,88,120,-1,81,82,118,-1,118,122,81,-1,84,123,124,-1,124,83,84,-1,85,125,126,-1,126,82,85,-1,128,87,86,-1,86,127,128,-1,130,88,87,-1,87,129,130,-1,131,132,89,-1,89,81,131,-1,91,100,99,-1,99,90,91,-1,90,99,101,-1,101,98,90,-1,93,103,102,-1,102,92,93,-1,95,102,104,-1,104,96,95,-1,96,104,105,-1,105,97,96,-1,97,105,106,-1,106,94,97,-1,94,106,100,-1,100,91,94,-1});
  }
}
protected class MFVec3f119 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.937f,2.6f,-2.644f,6.192f,2.6f,1.374f,5.738f,2.6f,-0.7614f,1.615f,2.6f,3.729f,4.273f,2.6f,-2.169f,3.945f,2.6f,3.53f,0f,2.6f,-2.735f,0f,2.6f,3.756f,1.525f,3.912f,3.221f,3.653f,3.912f,2.955f,5.641f,3.912f,1.265f,5.25f,3.912f,-0.5979f,3.955f,3.912f,-1.859f,1.814f,3.912f,-2.3f,0f,3.912f,3.247f,4.234f,1.353f,3.898f,1.538f,1.353f,3.713f,6.114f,1.353f,1.306f,1.987f,1.353f,-2.592f,0f,1.353f,3.713f,4.188f,1.353f,-2.037f,5.442f,1.353f,-0.9006f,1.418f,-0.0068f,3.362f,3.892f,-0.0068f,-1.86f,5.121f,-0.0068f,-0.6992f,3.987f,-0.0068f,3.259f,5.601f,-0.0068f,1.285f,1.717f,-0.0068f,-2.528f,3.691f,-1.025f,2.572f,1.341f,-1.025f,2.665f,1.599f,-1.025f,-2.271f,3.596f,-1.025f,-1.673f,4.691f,-1.025f,-0.5832f,5.112f,-1.025f,1.212f,-3.945f,2.6f,3.53f,-1.615f,2.6f,3.729f,-5.738f,2.6f,-0.7614f,-6.192f,2.6f,1.374f,-1.937f,2.6f,-2.644f,-4.273f,2.6f,-2.169f,-3.653f,3.912f,2.955f,-1.525f,3.912f,3.221f,-5.641f,3.912f,1.265f,-5.25f,3.912f,-0.5979f,-3.955f,3.912f,-1.859f,-1.814f,3.912f,-2.3f,0f,3.912f,-2.386f,-6.114f,1.353f,1.306f,-4.188f,1.353f,-2.037f,-5.442f,1.353f,-0.9006f,-1.538f,1.353f,3.713f,-4.234f,1.353f,3.898f,-1.987f,1.353f,-2.592f,0f,1.353f,-2.622f,-1.418f,-0.0068f,3.362f,-3.987f,-0.0068f,3.259f,-1.717f,-0.0068f,-2.528f,0f,-0.0068f,-2.543f,-5.601f,-0.0068f,1.285f,-3.892f,-0.0068f,-1.86f,-5.121f,-0.0068f,-0.6992f,0f,-0.0068f,3.363f,-1.341f,-1.025f,2.665f,-3.691f,-1.025f,2.572f,0f,-1.025f,2.665f,-1.599f,-1.025f,-2.271f,0f,-1.025f,-2.285f,-3.596f,-1.025f,-1.673f,-4.691f,-1.025f,-0.5832f,-5.112f,-1.025f,1.212f});
  }
}
protected class MFVec2f120 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3061f,0.4256f,0.3364f,0.4029f,0.1528f,0.4078f,0.1843f,0.4071f,0.055f,0.4216f,0.3325f,0.4068f,0.0482f,0.4185f,0.221f,0.4256f,0.1008f,0.4259f,0.1843f,0.4071f,0.1528f,0.4078f,0.3364f,0.4029f,0.3325f,0.4068f,0.221f,0.4256f,0.3061f,0.4256f,0.1528f,0.4078f,0.055f,0.4216f,0.1008f,0.4259f,0.1528f,0.4078f,0.1843f,0.4071f,0.221f,0.4256f,0.3061f,0.4256f,0.3325f,0.4068f,0.0482f,0.4185f,0.0908f,0.3999f,0.0325f,0.3879f,0.1568f,0.3845f,0.3535f,0.3812f,0.2214f,0.3832f,0.1952f,0.3809f,0.0306f,0.3835f,0.0908f,0.3999f,0.0325f,0.3879f,0.0306f,0.3835f,0.1568f,0.3845f,0.3535f,0.3812f,0.3589f,0.3783f,0.2214f,0.3832f,0.1952f,0.3809f,0.3561f,0.3769f,0.0245f,0.3617f,0.2207f,0.3633f,0.1922f,0.3628f,0.3616f,0.3609f,0.0859f,0.3657f,0.1489f,0.3665f,0.3589f,0.3648f,0.3617f,0.3609f,0.0254f,0.3626f,0.0859f,0.3657f,0.0245f,0.3617f,0.0254f,0.3626f,0.3616f,0.3609f,0.3617f,0.3609f,0.2207f,0.3633f,0.1922f,0.3628f,0.1489f,0.3665f,0.1008f,0.4259f,0.055f,0.4216f,0.1843f,0.4071f,0.1528f,0.4078f,0.3364f,0.4029f,0.3325f,0.4068f,0.0482f,0.4185f,0.221f,0.4256f,0.3061f,0.4256f,0.1008f,0.4259f,0.055f,0.4216f,0.1528f,0.4078f,0.1843f,0.4071f,0.221f,0.4256f,0.3061f,0.4256f,0.3325f,0.4068f,0.0482f,0.4185f,0.1568f,0.3845f,0.0908f,0.3999f,0.0325f,0.3879f,0.0306f,0.3835f,0.3535f,0.3812f,0.2214f,0.3832f,0.1952f,0.3809f,0.0325f,0.3879f,0.0908f,0.3999f,0.3589f,0.3783f,0.3561f,0.3769f,0.1568f,0.3845f,0.3535f,0.3812f,0.2214f,0.3832f,0.1952f,0.3809f,0.0306f,0.3835f,0.0245f,0.3617f,0.0859f,0.3657f,0.3617f,0.3609f,0.3616f,0.3609f,0.1489f,0.3665f,0.3589f,0.3648f,0.2207f,0.3633f,0.1922f,0.3628f,0.0254f,0.3626f,0.0245f,0.3617f,0.0859f,0.3657f,0.0254f,0.3626f,0.3617f,0.3609f,0.3616f,0.3609f,0.2207f,0.3633f,0.1922f,0.3628f,0.1489f,0.3665f,0.2239f,0.364f,0.3583f,0.3624f,0.1944f,0.3619f,0.2221f,0.3637f,0.1586f,0.3655f,0.1931f,0.3625f,0.0187f,0.3597f,0.0192f,0.3599f,0.0192f,0.3593f,0.3651f,0.3626f,0.3599f,0.3606f,0.0896f,0.3775f,0.1582f,0.3657f,0.1931f,0.3625f,0.1586f,0.3655f,0.0192f,0.3593f,0.3599f,0.3606f,0.3651f,0.3626f,0.1582f,0.3657f,0.0896f,0.3775f,0.3583f,0.3624f,0.2239f,0.364f,0.2221f,0.3637f,0.1944f,0.3619f,0.0192f,0.3599f,0.0187f,0.3597f,0.3614f,0.374f,0.3547f,0.3805f,0.3547f,0.3805f,0.3614f,0.374f});
  }
}
protected class MFFloat121 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat122 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32123 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,5,3,-1,3,2,1,-1,5,6,3,-1,7,22,3,-1,3,6,7,-1,0,1,2,-1,76,36,34,-1,34,4,76,-1,5,1,9,-1,1,0,9,-1,30,78,9,-1,76,4,9,-1,4,5,9,-1,32,23,33,-1,33,43,32,-1,22,7,33,-1,33,23,22,-1,5,4,34,-1,34,6,5,-1,24,32,8,-1,78,30,11,-1,11,84,78,-1,30,0,12,-1,12,11,30,-1,14,13,15,-1,15,16,14,-1,13,22,23,-1,23,15,13,-1,10,2,13,-1,22,13,2,-1,2,3,22,-1,16,15,24,-1,24,8,16,-1,15,23,32,-1,32,24,15,-1,0,10,12,-1,18,17,20,-1,20,92,18,-1,17,19,21,-1,21,20,17,-1,19,14,16,-1,16,21,19,-1,17,18,84,-1,84,11,17,-1,19,17,11,-1,11,12,19,-1,12,14,19,-1,92,20,25,-1,25,97,92,-1,20,21,28,-1,28,25,20,-1,21,16,8,-1,8,28,21,-1,0,2,10,-1,12,10,14,-1,13,14,10,-1,100,31,27,-1,27,26,100,-1,25,28,27,-1,28,8,29,-1,28,29,26,-1,26,27,28,-1,27,31,97,-1,97,25,27,-1,9,0,30,-1,7,35,45,-1,45,33,7,-1,35,7,6,-1,6,34,35,-1,116,35,34,-1,34,36,116,-1,37,8,41,-1,41,40,37,-1,8,42,41,-1,26,37,40,-1,40,44,26,-1,39,32,43,-1,100,26,44,-1,44,111,100,-1,32,39,42,-1,42,8,32,-1,46,118,38,-1,38,45,46,-1,118,119,52,-1,52,38,118,-1,111,44,47,-1,47,50,111,-1,53,47,44,-1,44,40,53,-1,45,35,116,-1,116,46,45,-1,43,33,45,-1,45,38,43,-1,39,49,51,-1,51,42,39,-1,39,43,48,-1,48,49,39,-1,43,38,52,-1,52,48,43,-1,53,40,41,-1,51,53,41,-1,41,42,51,-1,47,54,122,-1,122,50,47,-1,119,58,57,-1,57,52,119,-1,60,55,49,-1,49,48,60,-1,56,59,53,-1,53,51,56,-1,53,59,54,-1,54,47,53,-1,48,52,57,-1,57,60,48,-1,51,49,55,-1,55,56,51,-1,60,57,62,-1,62,61,60,-1,57,58,134,-1,134,62,57,-1,122,54,63,-1,63,136,122,-1,54,59,64,-1,64,63,54,-1,59,56,65,-1,65,64,59,-1,56,55,66,-1,66,65,56,-1,55,60,61,-1,61,66,55,-1,69,68,67,-1,67,70,69,-1,70,67,71,-1,72,71,67,-1,67,73,72,-1,74,68,69,-1,103,36,76,-1,76,75,103,-1,70,9,69,-1,69,9,74,-1,77,9,78,-1,76,9,75,-1,75,9,70,-1,79,110,104,-1,104,80,79,-1,104,72,73,-1,73,80,104,-1,103,75,70,-1,70,71,103,-1,81,82,79,-1,78,84,83,-1,83,77,78,-1,77,83,85,-1,85,74,77,-1,88,87,86,-1,86,89,88,-1,89,86,80,-1,80,73,89,-1,90,89,68,-1,73,67,68,-1,68,89,73,-1,87,82,81,-1,81,86,87,-1,86,81,79,-1,79,80,86,-1,74,85,90,-1,18,92,91,-1,91,93,18,-1,93,91,94,-1,94,95,93,-1,94,98,82,-1,82,87,94,-1,93,83,84,-1,84,18,93,-1,95,85,83,-1,83,93,95,-1,85,95,88,-1,92,97,96,-1,96,91,92,-1,91,96,98,-1,98,94,91,-1,74,90,68,-1,85,88,90,-1,89,90,88,-1,100,99,101,-1,101,31,100,-1,96,101,98,-1,98,102,82,-1,98,101,99,-1,99,102,98,-1,101,96,97,-1,97,31,101,-1,9,77,74,-1,72,104,108,-1,108,105,72,-1,105,103,71,-1,71,72,105,-1,116,36,103,-1,103,105,116,-1,106,114,113,-1,113,82,106,-1,82,113,115,-1,99,112,114,-1,114,106,99,-1,109,110,79,-1,100,111,112,-1,112,99,100,-1,79,82,115,-1,115,109,79,-1,46,108,107,-1});
  }
}
protected class MFInt32124 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {107,118,46,-1,113,131,128,-1,128,115,113,-1,116,105,108,-1,108,46,116,-1,108,104,110,-1,110,107,108,-1,109,115,128,-1,128,127,109,-1,127,117,110,-1,110,109,127,-1,124,107,110,-1,110,117,124,-1,112,111,50,-1,50,120,112,-1,131,114,112,-1,112,120,131,-1,118,107,124,-1,124,119,118,-1,113,114,131,-1,120,50,122,-1,122,121,120,-1,119,124,123,-1,123,58,119,-1,125,117,127,-1,127,126,125,-1,129,128,131,-1,131,130,129,-1,131,120,121,-1,121,130,131,-1,117,125,123,-1,123,124,117,-1,128,129,126,-1,126,127,128,-1,125,133,132,-1,132,123,125,-1,123,132,134,-1,134,58,123,-1,122,136,135,-1,135,121,122,-1,121,135,137,-1,137,130,121,-1,130,137,138,-1,138,129,130,-1,129,138,139,-1,139,126,129,-1,126,139,133,-1,133,125,126,-1,87,88,95,-1,95,94,87,-1});
  }
}
protected class MFInt32125 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,15,0,-1,0,16,14,-1,15,19,0,-1,21,10,11,-1,11,18,21,-1,5,2,1,-1,6,281,282,-1,282,4,6,-1,3,2,13,-1,2,5,13,-1,66,7,13,-1,6,4,17,-1,4,15,17,-1,20,9,70,-1,70,89,20,-1,10,21,70,-1,70,9,10,-1,15,4,283,-1,283,19,15,-1,12,20,22,-1,48,47,26,-1,26,27,48,-1,47,49,28,-1,28,26,47,-1,31,32,29,-1,29,30,31,-1,32,53,54,-1,54,29,32,-1,33,50,32,-1,53,32,50,-1,50,51,53,-1,30,29,55,-1,55,56,30,-1,29,54,52,-1,52,55,29,-1,49,33,28,-1,36,41,40,-1,40,35,36,-1,37,39,38,-1,38,34,37,-1,39,31,30,-1,30,38,39,-1,42,36,43,-1,43,45,42,-1,39,37,26,-1,26,28,39,-1,28,31,39,-1,35,44,57,-1,57,46,35,-1,34,38,65,-1,65,58,34,-1,38,30,56,-1,56,65,38,-1,49,50,33,-1,28,33,31,-1,32,31,33,-1,62,63,64,-1,64,61,62,-1,57,65,64,-1,65,56,60,-1,65,60,61,-1,61,64,65,-1,64,63,59,-1,59,57,64,-1,13,8,66,-1,71,72,93,-1,93,70,71,-1,72,71,73,-1,73,74,72,-1,94,72,74,-1,74,77,94,-1,81,76,87,-1,87,86,81,-1,76,88,87,-1,80,81,86,-1,86,90,80,-1,85,75,89,-1,78,79,91,-1,91,92,78,-1,75,85,88,-1,88,76,75,-1,97,107,96,-1,96,95,97,-1,24,118,114,-1,114,23,24,-1,106,105,109,-1,109,116,106,-1,115,110,104,-1,104,100,115,-1,95,288,98,-1,98,97,95,-1,89,70,93,-1,93,287,89,-1,99,117,112,-1,112,102,99,-1,99,103,113,-1,113,117,99,-1,103,23,114,-1,114,113,103,-1,115,100,101,-1,111,115,101,-1,101,102,111,-1,124,129,133,-1,133,121,124,-1,127,134,132,-1,132,126,127,-1,136,130,122,-1,122,125,136,-1,131,135,119,-1,119,123,131,-1,119,135,128,-1,128,120,119,-1,125,126,132,-1,132,136,125,-1,123,122,130,-1,130,131,123,-1,136,132,138,-1,138,137,136,-1,132,134,139,-1,139,138,132,-1,133,129,141,-1,141,140,133,-1,128,135,142,-1,142,141,128,-1,135,131,143,-1,143,142,135,-1,131,130,144,-1,144,143,131,-1,130,136,137,-1,137,144,130,-1,147,146,145,-1,145,148,147,-1,148,145,149,-1,152,151,150,-1,150,153,152,-1,154,156,155,-1,284,285,158,-1,158,157,284,-1,159,160,155,-1,155,160,154,-1,161,160,162,-1,158,163,157,-1,157,163,148,-1,164,215,210,-1,210,165,164,-1,210,152,153,-1,153,165,210,-1,286,157,148,-1,148,149,286,-1,166,167,164,-1,170,169,168,-1,168,171,170,-1,171,168,172,-1,172,173,171,-1,176,175,174,-1,174,177,176,-1,177,174,178,-1,178,179,177,-1,180,177,181,-1,179,182,181,-1,181,177,179,-1,175,184,183,-1,183,174,175,-1,174,183,185,-1,185,178,174,-1,173,172,180,-1,188,187,186,-1,186,189,188,-1,192,191,190,-1,190,193,192,-1,190,200,184,-1,184,175,190,-1,196,195,194,-1,194,188,196,-1,193,172,168,-1,168,192,193,-1,172,193,176,-1,187,198,197,-1,197,199,187,-1,191,201,200,-1,200,190,191,-1,173,180,181,-1,172,176,180,-1,177,180,176,-1,203,202,205,-1,205,204,203,-1,197,205,200,-1,200,206,184,-1,200,205,202,-1,202,206,200,-1,205,197,207,-1,207,204,205,-1,160,161,208,-1,211,210,209,-1,209,212,211,-1,212,214,213,-1,213,211,212,-1,218,217,214,-1,214,212,218,-1,219,222,221,-1,221,220,219,-1,220,221,223,-1,225,224,222,-1,222,219,225,-1,226,215,216,-1,228,227,230,-1,230,229,228,-1,216,220,223,-1,223,226,216,-1,234,233,232,-1});
  }
}
protected class MFInt32126 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {232,231,234,-1,239,249,253,-1,253,241,239,-1,243,289,233,-1,233,234,243,-1,209,210,215,-1,215,290,209,-1,235,241,254,-1,254,244,235,-1,244,245,236,-1,236,235,244,-1,246,25,236,-1,236,245,246,-1,238,237,248,-1,248,247,238,-1,249,240,242,-1,242,250,249,-1,251,25,246,-1,246,252,251,-1,239,240,249,-1,256,255,68,-1,68,67,256,-1,259,262,261,-1,261,260,259,-1,264,263,266,-1,266,69,264,-1,82,267,270,-1,270,83,82,-1,270,272,84,-1,84,83,270,-1,263,264,261,-1,261,262,263,-1,267,82,69,-1,69,266,267,-1,264,274,273,-1,273,261,264,-1,261,273,275,-1,275,260,261,-1,258,277,276,-1,276,257,258,-1,271,276,278,-1,278,269,271,-1,269,278,279,-1,279,268,269,-1,268,279,280,-1,280,265,268,-1,69,108,274,-1,274,264,69,-1,175,176,193,-1,193,190,175,-1});
  }
}
protected class MFVec3f127 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.47f,5.382f,-1.15f,2.016f,5.359f,0.0414f,2.914f,4.913f,0.0931f,3.187f,4.047f,1.303f,0.7806f,4.8f,1.368f,1.573f,5.061f,0.8702f,2.043f,3.676f,3.089f,2.245f,3.832f,3.58f,5.472f,3.516f,-1.692f,0f,5.005f,-0.0527f,2.599f,5.814f,-1.646f,0.9629f,5.838f,-3.392f,2.035f,5.864f,-3.055f,3.439f,5.748f,0.1272f,3.953f,4.887f,-2.467f,5.073f,5.221f,0.1272f,4.655f,3.945f,-2.02f,1.032f,2.987f,-4.667f,0f,2.996f,-4.802f,2.39f,3.373f,-4.154f,1.677f,-0.3565f,-3.387f,4.12f,1.16f,-3.272f,2.982f,4.692f,1.941f,4.42f,4.39f,1.865f,5.602f,4.182f,-0.0537f,1.811f,0.2885f,-2.67f,1.811f,3.512f,-2.117f,1.833f,1.248f,-2.283f,4.241f,1.248f,-2.283f,4.225f,3.516f,-1.692f,0.6928f,5.168f,-1.503f,0f,1.248f,-2.283f,5.086f,3.581f,1.771f,3.131f,3.091f,3.659f,1.373f,3.143f,3.427f,1.38f,3.143f,3.896f,0f,2.602f,3.661f,4.349f,3.515f,-1.814f,1.713f,2.253f,3.428f,5.378f,2.752f,1.672f,4.324f,2.752f,-1.927f,5.141f,2.752f,-1.839f,5.589f,2.752f,-1.388f,3.32f,2.752f,2.735f,1.811f,2.752f,-2.267f,1.593f,2.573f,4.098f,0f,1.897f,4.121f,1.811f,0.7023f,-2.67f,3.788f,0.7024f,3.331f,6.098f,0.7024f,1.429f,0f,0.7023f,-2.804f,5.903f,0.7024f,-0.5713f,1.646f,0.7024f,3.637f,4.256f,0.7024f,-2.233f,1.937f,0.0168f,-2.644f,6.192f,0.0169f,1.374f,5.738f,0.0169f,-0.7614f,1.615f,0.0169f,3.729f,0f,0.0169f,3.756f,4.273f,0.0169f,-2.169f,3.945f,0.0169f,3.53f,3.768f,-1.11f,3.256f,1.579f,-1.11f,3.447f,1.875f,-1.11f,-2.363f,4.079f,-1.11f,-1.908f,5.404f,-1.11f,-0.6177f,5.801f,-1.11f,1.279f,-3.187f,4.047f,1.303f,-2.914f,4.913f,0.0931f,-2.016f,5.359f,0.0414f,-1.573f,5.061f,0.8702f,-2.043f,3.676f,3.089f,-2.245f,3.832f,3.58f,-2.982f,4.692f,1.941f,-1.47f,5.382f,-1.15f,-0.7806f,4.8f,1.368f,0f,4.791f,1.49f,-0.6928f,5.168f,-1.503f,0f,5.19f,-1.61f,-5.086f,3.581f,1.771f,-4.42f,4.39f,1.865f,-5.602f,4.182f,-0.0537f,-5.472f,3.516f,-1.692f,-0.9629f,5.838f,-3.392f,0f,5.814f,-3.557f,-2.035f,5.864f,-3.055f,-5.073f,5.221f,0.1272f,-4.655f,3.945f,-2.02f,-3.953f,4.887f,-2.467f,-3.439f,5.748f,0.1272f,-2.599f,5.814f,-1.646f,-1.677f,-0.3565f,-3.387f,0f,-1.081f,-3.506f,-1.032f,2.987f,-4.667f,-4.12f,1.16f,-3.272f,-2.39f,3.373f,-4.154f,-1.811f,0.2885f,-2.67f,0f,0.1393f,-2.804f,-4.241f,1.248f,-2.283f,-1.811f,3.512f,-2.117f,0f,3.512f,-2.251f,-1.833f,1.248f,-2.283f,-4.225f,3.516f,-1.692f,-1.373f,3.143f,3.427f,-3.131f,3.091f,3.659f,-1.38f,3.143f,3.896f,-4.349f,3.515f,-1.814f,-1.713f,2.253f,3.428f,-1.593f,2.573f,4.098f,-5.378f,2.752f,1.672f,-3.32f,2.752f,2.735f,0f,2.752f,-2.401f,-1.811f,2.752f,-2.267f,-5.141f,2.752f,-1.839f,-4.324f,2.752f,-1.927f,-5.589f,2.752f,-1.388f,0f,2.66f,3.819f,-3.788f,0.7024f,3.331f,0f,1.512f,3.616f,0f,0.7024f,3.687f,-1.811f,0.7023f,-2.67f,-1.937f,0.0168f,-2.644f,0f,0.0168f,-2.735f,-1.615f,0.0169f,3.729f,-1.646f,0.7024f,3.637f,-3.945f,0.0169f,3.53f,-6.192f,0.0169f,1.374f,-6.098f,0.7024f,1.429f,-5.903f,0.7024f,-0.5713f,-5.738f,0.0169f,-0.7614f,-4.273f,0.0169f,-2.169f,-4.256f,0.7024f,-2.233f,-1.579f,-1.11f,3.447f,-3.768f,-1.11f,3.256f,0f,-1.11f,3.474f,-1.875f,-1.11f,-2.363f,0f,-1.11f,-2.451f,-4.079f,-1.11f,-1.908f,-5.404f,-1.11f,-0.6177f,-5.801f,-1.11f,1.279f});
  }
}
protected class MFVec2f128 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4416f,0.6747f,0.4535f,0.6485f,0.4483f,0.6438f,0.4499f,0.6371f,0.4594f,0.6763f,0.4399f,0.6472f,0.4645f,0.6783f,0.4385f,0.6236f,0.4279f,0.6258f,0.1412f,0.5207f,0.1108f,0.5655f,0.1073f,0.5839f,0.1708f,0.4854f,0.4376f,0.6345f,0.4528f,0.6648f,0.4548f,0.6714f,0.4459f,0.6652f,0.4669f,0.6678f,0.0786f,0.5849f,0.4476f,0.6884f,0.1474f,0.4856f,0.0865f,0.5614f,0.1963f,0.4863f,0.0877f,0.4617f,0.0639f,0.4488f,0.0877f,0.4617f,0.2661f,0.5914f,0.3505f,0.5919f,0.241f,0.592f,0.1724f,0.5255f,0.2089f,0.5196f,0.2133f,0.556f,0.1645f,0.5709f,0.2067f,0.5908f,0.2708f,0.4736f,0.347f,0.4317f,0.3616f,0.5328f,0.2733f,0.5359f,0.238f,0.493f,0.249f,0.5451f,0.3477f,0.431f,0.3623f,0.5333f,0.3623f,0.5333f,0.3505f,0.5919f,0.3477f,0.431f,0.3511f,0.5932f,0.3206f,0.4193f,0.2505f,0.5754f,0.3554f,0.5911f,0.2112f,0.5805f,0.1632f,0.5887f,0.1073f,0.5839f,0.1474f,0.4856f,0.1108f,0.5655f,0.1412f,0.5207f,0.1708f,0.4854f,0.1963f,0.4863f,0.3223f,0.4192f,0.2638f,0.4568f,0.3206f,0.4193f,0.1963f,0.4863f,0.1963f,0.4863f,0.1963f,0.4863f,0.2252f,0.4828f,0.2252f,0.4828f,0.2252f,0.4828f,0.4337f,0.6239f,0.3364f,0.4029f,0.3325f,0.4068f,0.1528f,0.4078f,0.1025f,0.5076f,0.0865f,0.5614f,0.0652f,0.5465f,0.0786f,0.5849f,0.0516f,0.5759f,0.1474f,0.4856f,0.1963f,0.4863f,0.0346f,0.5664f,0.3214f,0.4203f,0.3223f,0.4192f,0.2638f,0.4568f,0.2146f,0.5039f,0.1843f,0.4071f,0.221f,0.4256f,0.3061f,0.4256f,0.1491f,0.4682f,0.2169f,0.492f,0.2035f,0.4795f,0.1915f,0.4696f,0.1178f,0.4708f,0.2635f,0.4569f,0.3223f,0.4193f,0.3214f,0.4203f,0.0763f,0.4945f,0.0399f,0.5407f,0.0763f,0.4945f,0.0877f,0.4617f,0.0525f,0.4715f,0.0399f,0.5407f,0.1491f,0.4682f,0.2169f,0.492f,0.2035f,0.4795f,0.1915f,0.4696f,0.1178f,0.4708f,0.2635f,0.4569f,0.3223f,0.4193f,0.3214f,0.4203f,0.0639f,0.4488f,0.1528f,0.4078f,0.3223f,0.4192f,0.2638f,0.4568f,0.1784f,0.4249f,0.1784f,0.4249f,0.1055f,0.438f,0.0663f,0.4356f,0.2236f,0.46f,0.3214f,0.4203f,0.1538f,0.4251f,0.0537f,0.4289f,0.2236f,0.46f,0.2638f,0.4568f,0.3214f,0.4203f,0.1538f,0.4251f,0.1784f,0.4249f,0.3223f,0.4192f,0.1055f,0.438f,0.0663f,0.4356f,0.0537f,0.4289f,0.3061f,0.4256f,0.3364f,0.4029f,0.1528f,0.4078f,0.1843f,0.4071f,0.055f,0.4216f,0.3325f,0.4068f,0.0482f,0.4185f,0.221f,0.4256f,0.1008f,0.4259f,0.1008f,0.4259f,0.055f,0.4216f,0.0482f,0.4185f,0.3325f,0.4068f,0.3364f,0.4029f,0.221f,0.4256f,0.1843f,0.4071f,0.1528f,0.4078f,0.4416f,0.6747f,0.4459f,0.6652f,0.4528f,0.6648f,0.4548f,0.6714f,0.4476f,0.6884f,0.1073f,0.5839f,0.0786f,0.5849f,0.0865f,0.5614f,0.1108f,0.5655f,0.4399f,0.6472f,0.4483f,0.6438f,0.4535f,0.6485f,0.4594f,0.6763f,0.4645f,0.6783f,0.4499f,0.6371f,0.4376f,0.6345f,0.4337f,0.6239f,0.4385f,0.6236f,0.4669f,0.6678f,0.1474f,0.4856f,0.1412f,0.5207f,0.1708f,0.4854f,0.1963f,0.4863f,0.2661f,0.5914f,0.3505f,0.5919f,0.3554f,0.5911f,0.2505f,0.5754f,0.241f,0.592f,0.2112f,0.5805f,0.1724f,0.5255f,0.2089f,0.5196f,0.2133f,0.556f,0.1645f,0.5709f,0.1412f,0.5207f,0.1108f,0.5655f,0.2067f,0.5908f,0.1632f,0.5887f,0.1073f,0.5839f,0.1708f,0.4854f,0.1963f,0.4863f,0.1474f,0.4856f,0.3477f,0.431f,0.347f,0.4317f,0.3616f,0.5328f,0.3623f,0.5333f,0.238f,0.493f,0.2708f,0.4736f,0.2733f,0.5359f,0.249f,0.5451f,0.3505f,0.5919f,0.3511f,0.5932f,0.3623f,0.5333f,0.3223f,0.4192f,0.3206f,0.4193f,0.3477f,0.431f,0.2252f,0.4828f,0.2638f,0.4568f,0.1963f,0.4863f,0.1963f,0.4863f,0.2252f,0.4828f,0.2252f,0.4828f,0.1963f,0.4863f,0.3206f,0.4193f,0.4279f,0.6258f,0.0763f,0.4945f,0.1025f,0.5076f,0.0865f,0.5614f,0.0652f,0.5465f,0.0786f,0.5849f,0.0516f,0.5759f,0.1178f,0.4708f,0.1474f,0.4856f,0.0346f,0.5664f,0.0399f,0.5407f,0.2146f,0.5039f,0.1963f,0.4863f,0.2035f,0.4795f,0.2169f,0.492f,0.1915f,0.4696f,0.2635f,0.4569f,0.2638f,0.4568f,0.1491f,0.4682f,0.3214f,0.4203f,0.3214f,0.4203f,0.3223f,0.4192f,0.3223f,0.4193f,0.0639f,0.4488f,0.0877f,0.4617f,0.0763f,0.4945f,0.0525f,0.4715f,0.1491f,0.4682f,0.1178f,0.4708f,0.3214f,0.4203f,0.3223f,0.4193f,0.2035f,0.4795f,0.2169f,0.492f,0.1915f,0.4696f,0.2635f,0.4569f,0.0399f,0.5407f,0.1538f,0.4251f,0.1055f,0.438f,0.0663f,0.4356f,0.3223f,0.4192f,0.3214f,0.4203f,0.2236f,0.46f,0.2638f,0.4568f,0.0639f,0.4488f,0.0537f,0.4289f,0.1784f,0.4249f,0.1784f,0.4249f,0.3214f,0.4203f,0.3223f,0.4192f,0.3364f,0.4029f,0.3325f,0.4068f,0.0537f,0.4289f,0.0482f,0.4185f,0.055f,0.4216f,0.0663f,0.4356f,0.1055f,0.438f,0.1008f,0.4259f,0.1528f,0.4078f,0.1538f,0.4251f,0.1784f,0.4249f,0.1843f,0.4071f,0.221f,0.4256f,0.2236f,0.46f,0.3061f,0.4256f,0.2638f,0.4568f,0.055f,0.4216f,0.1008f,0.4259f,0.0482f,0.4185f,0.3364f,0.4029f,0.3325f,0.4068f,0.221f,0.4256f,0.1843f,0.4071f,0.1528f,0.4078f,0.4598f,0.699f,0.4513f,0.6933f,0.4515f,0.6934f,0.4513f,0.6933f,0.4598f,0.699f,0.4515f,0.6934f,0.0871f,0.4661f,0.0627f,0.5494f,0.0627f,0.5494f,0.0871f,0.4661f});
  }
}
protected class MFFloat129 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat130 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32131 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1});
  }
}
protected class MFInt32132 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1});
  }
}
protected class MFVec3f133 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.99f,0.104f,-0.8644f,5.073f,0.4993f,0.047f,4.706f,0.1695f,1.198f,4.631f,-1.819f,1.104f,4.586f,-1.648f,-0.1248f,3.376f,0.3884f,1.771f,3.891f,0.989f,-0.0537f,4.193f,-2.49f,-0.5713f,4.388f,-2.49f,1.429f,3.761f,0.3238f,-1.692f,-0.1237f,0.6312f,-0.1883f,-0.1237f,0.3007f,-0.9426f,-0.1237f,-1.418f,-0.2577f,-0.1237f,-1.392f,0.6264f,-0.1237f,0.2586f,0.8179f});
  }
}
protected class MFVec2f134 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1911f,0.4797f,0.171f,0.4832f,0.1497f,0.4806f,0.1519f,0.4334f,0.1831f,0.4416f,0.1474f,0.4856f,0.1708f,0.4854f,0.1784f,0.4249f,0.1538f,0.4251f,0.1963f,0.4863f,0.19f,0.5091f,0.1847f,0.499f,0.172f,0.4382f,0.1568f,0.4457f,0.1409f,0.4926f});
  }
}
protected class MFFloat135 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat136 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32137 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,9,6,-1,6,2,3,-1,7,5,1,-1,1,8,7,-1,6,8,0,-1,0,2,6,-1,0,8,1,-1,9,7,8,-1,8,6,9,-1,4,5,11,-1,11,10,4,-1,5,7,12,-1,12,11,5,-1,7,9,13,-1,13,12,7,-1,9,3,14,-1,14,13,9,-1,3,4,10,-1,10,14,3,-1,10,11,15,-1,11,12,15,-1,12,13,15,-1,13,14,15,-1,14,10,15,-1});
  }
}
protected class MFInt32138 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,8,6,-1,6,2,3,-1,9,5,1,-1,1,7,9,-1,6,7,0,-1,0,2,6,-1,0,7,1,-1,12,13,11,-1,11,10,12,-1,4,5,15,-1,15,14,4,-1,5,9,16,-1,16,15,5,-1,13,12,17,-1,17,16,13,-1,8,3,18,-1,18,17,8,-1,3,4,14,-1,14,18,3,-1,14,15,19,-1,15,16,19,-1,16,17,19,-1,17,18,19,-1,18,14,19,-1});
  }
}
protected class MFVec3f139 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.935f,1.466f,-0.0932f,1.515f,0.6492f,-1.732f,1.534f,0.7105f,1.619f,-0.3782f,1.139f,1.732f,0.1374f,1.74f,-0.0932f,0.0076f,1.074f,-1.731f,0.8341f,-1.572f,1.39f,0.4391f,-1.74f,-0.6109f,0.8275f,-1.58f,-0.6098f,0.6342f,-1.74f,1.389f,-1.237f,1.407f,-0.0712f,-1.547f,0.8515f,-1.142f,-0.7525f,-1.603f,-0.4744f,-0.7511f,-1.595f,1.16f,-1.51f,1.034f,1.296f,-1.59f,-0.0185f,0.1351f});
  }
}
protected class MFVec2f140 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1715f,0.4655f,0.1797f,0.4646f,0.1569f,0.4642f,0.1474f,0.4856f,0.1708f,0.4854f,0.1963f,0.4863f,0.1544f,0.4288f,0.1782f,0.4286f,0.1538f,0.4251f,0.1784f,0.4249f,0.1544f,0.4288f,0.1782f,0.4286f,0.1538f,0.4251f,0.1784f,0.4249f,0.1703f,0.4865f,0.1895f,0.487f,0.1761f,0.4271f,0.1552f,0.4287f,0.1491f,0.4835f,0.1671f,0.4618f});
  }
}
protected class MFFloat141 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat142 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32143 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,20,-1,20,21,26,-1,27,26,21,-1,21,22,27,-1,28,27,22,-1,22,23,28,-1,29,28,23,-1,23,24,29,-1,25,29,24,-1,24,20,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1});
  }
}
protected class MFInt32144 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,0,1,-1,3,2,1,-1,61,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,54,35,36,-1,53,54,36,-1,37,53,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,40,41,38,-1,38,39,40,-1,43,56,55,-1,55,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,41,47,46,-1,46,38,41,-1,48,49,41,-1,41,40,48,-1,50,58,57,-1,57,43,50,-1,51,50,43,-1,43,45,51,-1,52,51,45,-1,45,47,52,-1,49,52,47,-1,47,41,49,-1,34,33,49,-1,49,48,34,-1,35,60,59,-1,59,50,35,-1,36,35,50,-1,50,51,36,-1,37,36,51,-1,51,52,37,-1,33,37,52,-1,52,49,33,-1});
  }
}
protected class MFVec3f145 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.164f,1.767f,-1.68f,2.32f,1.756f,0.0337f,1.047f,1.768f,1.663f,-0.895f,1.785f,0.9556f,-0.8229f,1.784f,-1.11f,1.382f,0.4997f,-2.31f,2.978f,0.4855f,0.057f,1.221f,0.5011f,2.307f,-1.462f,0.525f,1.33f,-1.362f,0.5241f,-1.523f,1.36f,-2.014f,-2.31f,2.956f,-2.028f,0.057f,1.198f,-2.012f,2.307f,-1.484f,-1.988f,1.33f,-1.384f,-1.989f,-1.523f,1.398f,-3.089f,-2.442f,3.087f,-3.104f,0.0619f,1.228f,-3.087f,2.442f,-1.61f,-3.062f,1.409f,-1.505f,-3.063f,-1.61f,0.8845f,-1.238f,-1.939f,2.105f,-1.248f,-0.4543f,1.473f,-1.243f,1.629f,-0.1375f,-1.229f,1.432f,-0.5011f,-1.225f,-0.7734f,0.9027f,-7.045f,-1.569f,2.17f,-7.056f,-0.378f,1.514f,-7.051f,1.293f,-0.1588f,-7.036f,1.135f,-0.5365f,-7.032f,-0.634f,0.9066f,-11.1f,-1.511f,2.127f,-11.11f,-0.3651f,1.495f,-11.1f,1.243f,-0.1154f,-11.09f,1.091f,-0.4791f,-11.08f,-0.6115f,0.852f,-11.65f,-0.8985f,1.567f,-11.65f,-0.2267f,1.197f,-11.65f,0.716f,0.2531f,-11.64f,0.6268f,0.0399f,-11.64f,-0.3711f});
  }
}
protected class MFVec2f146 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2986f,0.2114f,0.2726f,0.2114f,0.3201f,0.2114f,0.3415f,0.2114f,0.2466f,0.2114f,0.2979f,0.2417f,0.2726f,0.2417f,0.3197f,0.2417f,0.3418f,0.2417f,0.2473f,0.2417f,0.2979f,0.3018f,0.2726f,0.3018f,0.3197f,0.3018f,0.3418f,0.3018f,0.2473f,0.3018f,0.2978f,0.3276f,0.2726f,0.3276f,0.3197f,0.3276f,0.3419f,0.3276f,0.2474f,0.3276f,0.2932f,0.2834f,0.2689f,0.2834f,0.316f,0.2834f,0.3322f,0.2834f,0.245f,0.2834f,0.2251f,0.2114f,0.2255f,0.2417f,0.2255f,0.2417f,0.2255f,0.3018f,0.2255f,0.3018f,0.2255f,0.3276f,0.2255f,0.3276f,0.2159f,0.2834f,0.4315f,0.6736f,0.442f,0.6736f,0.3947f,0.6736f,0.4041f,0.6736f,0.418f,0.6736f,0.4296f,0.6167f,0.4409f,0.6167f,0.4415f,0.6485f,0.4303f,0.6485f,0.3965f,0.6167f,0.3953f,0.6485f,0.4047f,0.6167f,0.4053f,0.6485f,0.4189f,0.6167f,0.418f,0.6485f,0.4415f,0.6706f,0.4306f,0.6706f,0.395f,0.6706f,0.4051f,0.6706f,0.4182f,0.6706f,0.3746f,0.6736f,0.3851f,0.6736f,0.384f,0.6167f,0.3845f,0.6485f,0.3845f,0.6485f,0.3846f,0.6706f,0.3846f,0.6706f,0.3851f,0.6736f,0.3481f,0.2114f});
  }
}
protected class MFFloat147 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat148 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32149 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1});
  }
}
protected class MFInt32150 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,25,26,-1,3,2,26,-1,4,3,26,-1,0,1,6,-1,6,5,0,-1,27,2,7,-1,7,28,27,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,29,7,12,-1,12,30,29,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,31,12,17,-1,17,32,31,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,34,22,23,-1,33,34,23,-1,24,33,23,-1,21,20,15,-1,15,16,21,-1,22,36,35,-1,35,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1});
  }
}
protected class MFVec3f151 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.215f,0.3047f,-1.152f,1.155f,0.2966f,-0.2588f,0.6199f,0.3013f,1.04f,-0.6505f,0.3122f,0.9491f,-0.9008f,0.3143f,-0.4054f,0.1442f,-0.8448f,-1.625f,1.472f,-0.8561f,-0.4271f,0.7164f,-0.8496f,1.625f,-1.079f,-0.8342f,1.482f,-1.433f,-0.8312f,-0.6588f,0.1328f,-3.5f,-1.607f,1.551f,-3.513f,-0.4225f,0.781f,-2.925f,1.61f,-1.136f,-2.909f,1.468f,-1.551f,-3.486f,-0.6519f,0.0592f,-8.713f,-1.437f,1.093f,-8.722f,-0.1279f,0.5047f,-8.716f,1.51f,-0.8932f,-8.704f,1.377f,-1.169f,-8.702f,-0.3428f,0.0092f,-9.336f,-0.8855f,0.7154f,-9.342f,0.0084f,0.3135f,-9.339f,1.043f,-0.6412f,-9.331f,0.9519f,-0.8292f,-9.329f,-0.1383f});
  }
}
protected class MFVec2f152 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4222f,0.6201f,0.4327f,0.6201f,0.3884f,0.6201f,0.3987f,0.6201f,0.4103f,0.6201f,0.4213f,0.6265f,0.4321f,0.6265f,0.3894f,0.6265f,0.399f,0.6265f,0.4105f,0.6265f,0.4214f,0.6413f,0.4323f,0.6413f,0.389f,0.6381f,0.3992f,0.6381f,0.4103f,0.6413f,0.4213f,0.6705f,0.4336f,0.6705f,0.3899f,0.6705f,0.3981f,0.6705f,0.4094f,0.6705f,0.4215f,0.674f,0.4346f,0.674f,0.3899f,0.674f,0.398f,0.674f,0.4083f,0.674f,0.3787f,0.6201f,0.3682f,0.6201f,0.3787f,0.6201f,0.3782f,0.6265f,0.3782f,0.6265f,0.3783f,0.6413f,0.3783f,0.6413f,0.3796f,0.6705f,0.3676f,0.674f,0.3806f,0.674f,0.3796f,0.6705f,0.3806f,0.674f});
  }
}
protected class MFFloat153 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat154 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32155 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {36,37,38,-1,38,41,36,-1,44,45,54,-1,31,4,53,-1,53,30,31,-1,6,10,11,-1,11,7,6,-1,11,10,33,-1,33,32,11,-1,34,24,7,-1,7,11,34,-1,13,17,15,-1,15,27,13,-1,25,22,35,-1,30,5,20,-1,13,34,11,-1,11,32,13,-1,23,22,28,-1,28,29,23,-1,17,16,14,-1,14,15,17,-1,18,5,53,-1,53,19,18,-1,9,8,16,-1,16,17,9,-1,14,42,43,-1,43,15,14,-1,21,16,8,-1,8,33,21,-1,21,35,22,-1,22,23,21,-1,39,40,41,-1,41,38,39,-1,26,20,24,-1,27,12,20,-1,20,26,27,-1,3,30,12,-1,12,43,3,-1,0,54,28,-1,28,25,0,-1,13,32,9,-1,9,17,13,-1,28,31,29,-1,29,42,14,-1,14,23,29,-1,16,21,23,-1,23,14,16,-1,30,3,2,-1,2,31,30,-1,8,9,32,-1,32,33,8,-1,33,10,35,-1,35,21,33,-1,35,10,6,-1,6,25,35,-1,13,27,26,-1,26,34,13,-1,34,26,24,-1,1,0,47,-1,47,46,1,-1,25,48,47,-1,47,0,25,-1,25,6,49,-1,49,48,25,-1,6,7,50,-1,50,49,6,-1,24,51,50,-1,50,7,24,-1,24,1,46,-1,46,51,24,-1,2,3,43,-1,43,42,2,-1,15,43,12,-1,12,27,15,-1,29,31,2,-1,2,42,29,-1,18,44,52,-1,52,5,18,-1,28,22,25,-1,18,19,45,-1,45,44,18,-1,1,24,52,-1,52,44,1,-1,45,4,28,-1,28,4,31,-1,45,19,4,-1,37,36,46,-1,46,47,37,-1,48,38,37,-1,37,47,48,-1,39,38,48,-1,48,49,39,-1,40,39,49,-1,49,50,40,-1,51,41,40,-1,40,50,51,-1,36,41,51,-1,51,46,36,-1,24,20,52,-1,52,20,5,-1,53,5,30,-1,53,4,19,-1,54,45,28,-1,44,54,0,-1,0,1,44,-1,20,12,30,-1});
  }
}
protected class MFInt32156 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,5,6,-1,8,9,10,-1,10,7,8,-1,12,13,14,-1,14,11,12,-1,14,13,15,-1,15,16,14,-1,17,18,11,-1,11,14,17,-1,20,21,22,-1,22,19,20,-1,23,24,25,-1,7,26,27,-1,20,17,14,-1,14,16,20,-1,28,24,29,-1,29,30,28,-1,21,31,32,-1,32,22,21,-1,33,26,10,-1,10,34,33,-1,35,36,31,-1,31,21,35,-1,32,37,38,-1,38,22,32,-1,39,31,36,-1,36,15,39,-1,39,25,24,-1,24,28,39,-1,40,41,3,-1,3,2,40,-1,42,27,18,-1,19,43,27,-1,27,42,19,-1,44,7,43,-1,43,38,44,-1,45,6,29,-1,29,23,45,-1,20,16,35,-1,35,21,20,-1,29,8,30,-1,30,37,32,-1,32,28,30,-1,31,39,28,-1,28,32,31,-1,7,44,46,-1,46,8,7,-1,36,35,16,-1,16,15,36,-1,15,13,25,-1,25,39,15,-1,25,13,12,-1,12,23,25,-1,20,19,42,-1,42,17,20,-1,17,42,18,-1,47,45,48,-1,48,49,47,-1,23,50,48,-1,48,45,23,-1,23,12,51,-1,51,50,23,-1,12,11,52,-1,52,51,12,-1,18,53,52,-1,52,11,18,-1,18,47,49,-1,49,53,18,-1,46,44,38,-1,38,37,46,-1,22,38,43,-1,43,19,22,-1,30,8,46,-1,46,37,30,-1,33,4,54,-1,54,26,33,-1,29,24,23,-1,33,34,5,-1,5,4,33,-1,47,18,54,-1,54,4,47,-1,5,9,29,-1,29,9,8,-1,5,34,9,-1,1,0,49,-1,49,48,1,-1,50,2,1,-1,1,48,50,-1,40,2,50,-1,50,51,40,-1,41,40,51,-1,51,52,41,-1,53,3,41,-1,41,52,53,-1,0,3,53,-1,53,49,0,-1,18,27,54,-1,54,27,26,-1,10,26,7,-1,10,9,34,-1,6,5,29,-1,4,6,45,-1,45,47,4,-1,27,43,7,-1});
  }
}
protected class MFVec3f157 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.615f,-0.6885f,1.418f,-0.2519f,-0.7698f,1.606f,0.894f,-4.14f,1.405f,0.2357f,-4.221f,1.472f,0.7106f,-2.848f,1.537f,-0.2913f,-2.795f,1.561f,0.3511f,-0.9723f,-1.085f,-0.332f,-1.036f,-1.083f,0.6255f,-3.82f,-1.576f,0.076f,-3.93f,-1.587f,0.5517f,-2.055f,-1.417f,-0.1089f,-2.163f,-1.46f,0.0149f,-3.564f,0.866f,-0.0687f,-3.436f,-0.8707f,0.9147f,-4.192f,-0.1153f,0.2445f,-4.253f,-0.1554f,0.7883f,-4.028f,-0.9461f,0.1878f,-4.111f,-0.9619f,-0.1749f,-2.558f,2.351f,0.5105f,-2.795f,2.344f,-0.1613f,-2.264f,1.005f,0.8473f,-3.286f,-0.8304f,0.9399f,-2.17f,-0.0115f,0.979f,-3.369f,-0.052f,-0.4715f,-0.9186f,0.2017f,0.7286f,-0.8328f,0.1541f,-0.1459f,-2.365f,0.1498f,-0.0501f,-3.575f,-0.0433f,0.969f,-2.127f,0.9718f,0.9825f,-3.348f,0.8866f,0.0909f,-3.383f,1.556f,0.8371f,-3.169f,1.547f,0.041f,-3.318f,-1.568f,0.5921f,-3.194f,-1.578f,-0.2264f,-2.304f,-0.7602f,0.8375f,-2.137f,-0.8044f,-0.2818f,0.1713f,1.187f,0.2277f,0.2301f,1.179f,0.2277f,0.4881f,0.2572f,0.1331f,0.2707f,-0.6889f,-0.3764f,0.2118f,-0.6809f,-0.4614f,0.4054f,0.2565f,0.9242f,-4.241f,0.7847f,0.2647f,-4.324f,0.8047f,-0.3043f,-1.534f,2.164f,0.8425f,-1.789f,2.123f,-0.201f,-0.4603f,1.254f,0.3856f,-0.405f,1.248f,0.4965f,-0.283f,0.2553f,0.2563f,-0.4079f,-0.7647f,-0.3314f,-0.4586f,-0.758f,-0.3822f,-0.3913f,0.2697f,-0.4485f,-1.891f,1.52f,0.3893f,-2.936f,1.555f,0.7623f,-1.12f,1.731f});
  }
}
protected class MFVec2f158 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4538f,0.6821f,0.4536f,0.6827f,0.4366f,0.6851f,0.4365f,0.6843f,0.4719f,0.6661f,0.4711f,0.6637f,0.4639f,0.67f,0.4606f,0.6487f,0.4605f,0.6507f,0.4603f,0.6538f,0.4606f,0.6529f,0.4117f,0.6708f,0.4117f,0.6714f,0.4055f,0.6612f,0.4047f,0.6602f,0.4025f,0.6505f,0.4027f,0.6493f,0.4177f,0.6589f,0.4355f,0.6719f,0.431f,0.6469f,0.4157f,0.6482f,0.414f,0.6419f,0.4289f,0.6406f,0.4346f,0.6727f,0.4316f,0.6601f,0.4169f,0.6604f,0.4607f,0.6543f,0.4504f,0.6593f,0.4308f,0.6489f,0.4498f,0.6605f,0.4482f,0.6491f,0.4143f,0.6427f,0.4297f,0.6411f,0.4754f,0.6565f,0.4752f,0.6543f,0.4024f,0.6436f,0.4026f,0.6446f,0.4463f,0.6407f,0.4467f,0.6399f,0.4164f,0.6496f,0.419f,0.6831f,0.4192f,0.6825f,0.4346f,0.6583f,0.4478f,0.647f,0.4591f,0.6409f,0.4581f,0.6741f,0.4578f,0.6416f,0.4616f,0.6733f,0.4549f,0.6767f,0.455f,0.6762f,0.4365f,0.6779f,0.4176f,0.6767f,0.4177f,0.6762f,0.4368f,0.6768f,0.46f,0.6628f});
  }
}
protected class MFFloat159 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat160 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32161 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
protected class MFInt32162 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
protected class MFVec3f163 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.375f,-0.9214f,0.322f,-0.212f,-1.009f,0.0858f,-0.1385f,-0.9095f,0.5036f,0.0245f,-0.9973f,0.2674f,-0.533f,-0.8014f,0.1471f,-0.4779f,-0.7267f,0.4605f,-0.2413f,-0.7148f,0.6421f,0.0584f,-0.7717f,0.6012f,0.2213f,-0.8595f,0.365f,0.1662f,-0.9342f,0.0516f,-0.0704f,-0.9461f,-0.13f,-0.3701f,-0.8892f,-0.0891f,-0.4847f,-0.0791f,-0.0791f,-0.4228f,0.0048f,0.2724f,-0.1414f,0.0189f,0.4885f,0.1948f,-0.0449f,0.4426f,0.3887f,-0.1493f,0.1616f,0.3268f,-0.2331f,-0.1899f,0.0453f,-0.2473f,-0.406f,-0.2908f,-0.1835f,-0.3601f,-0.5058f,0.0372f,-0.1235f,-0.4385f,0.1283f,0.2586f,-0.1325f,0.1437f,0.4936f,0.233f,0.0743f,0.4437f,0.4438f,-0.0392f,0.1381f,0.3765f,-0.1303f,-0.244f,0.0705f,-0.1457f,-0.479f,-0.2949f,-0.0763f,-0.4291f,-0.3497f,0.1392f,-0.1192f,-0.3021f,0.2036f,0.1511f,-0.0857f,0.2145f,0.3172f,0.1727f,0.1654f,0.2819f,0.3218f,0.0852f,0.0659f,0.2742f,0.0207f,-0.2044f,0.0578f,0.0098f,-0.3705f,-0.2006f,0.0589f,-0.3352f,-0.0069f,0.159f,-0.0407f});
  }
}
protected class MFVec2f164 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.469f,0.6546f,0.4646f,0.6538f,0.4679f,0.6539f,0.4723f,0.6548f,0.4715f,0.6565f,0.4657f,0.6558f,0.4749f,0.6566f,0.4741f,0.6561f,0.4697f,0.6552f,0.4639f,0.6545f,0.4606f,0.6544f,0.4613f,0.655f,0.468f,0.6634f,0.4615f,0.6626f,0.472f,0.6635f,0.4712f,0.6629f,0.466f,0.6619f,0.4595f,0.6611f,0.4555f,0.661f,0.4563f,0.6616f,0.4678f,0.6645f,0.4607f,0.6637f,0.4721f,0.6647f,0.4712f,0.664f,0.4655f,0.6629f,0.4585f,0.6621f,0.4541f,0.6619f,0.455f,0.6626f,0.4658f,0.6652f,0.4608f,0.6646f,0.4689f,0.6653f,0.4682f,0.6649f,0.4642f,0.6641f,0.4592f,0.6635f,0.4561f,0.6634f,0.4568f,0.6639f,0.4622f,0.6648f});
  }
}
protected class MFFloat165 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat166 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32167 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
protected class MFInt32168 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
protected class MFVec3f169 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.5258f,-1.001f,0.2196f,-0.3901f,-1.074f,0.023f,-0.3376f,-1.029f,0.3799f,-0.2019f,-1.102f,0.1833f,-0.6244f,-0.8415f,0.0751f,-0.585f,-0.8078f,0.3428f,-0.3968f,-0.8361f,0.503f,-0.1539f,-0.912f,0.4758f,-0.0182f,-0.985f,0.2792f,-0.0576f,-1.019f,0.0115f,-0.2458f,-0.9905f,-0.1487f,-0.4887f,-0.9145f,-0.1215f,-0.4357f,-0.0607f,-0.0712f,-0.3915f,-0.0229f,0.229f,-0.1676f,-0.0565f,0.4196f,0.1048f,-0.1417f,0.3891f,0.2662f,-0.2286f,0.1552f,0.222f,-0.2663f,-0.1451f,-0.0018f,-0.2328f,-0.3357f,-0.2743f,-0.1476f,-0.3051f,-0.4293f,0.0682f,-0.1026f,-0.3812f,0.1092f,0.2242f,-0.1376f,0.0727f,0.4317f,0.1589f,-0.02f,0.3984f,0.3346f,-0.1146f,0.1438f,0.2865f,-0.1556f,-0.1829f,0.0429f,-0.1191f,-0.3904f,-0.2536f,-0.0264f,-0.3572f,-0.2801f,0.1629f,-0.0879f,-0.2461f,0.1919f,0.1432f,-0.0738f,0.1661f,0.2899f,0.1359f,0.1005f,0.2664f,0.2601f,0.0337f,0.0864f,0.2261f,0.0046f,-0.1447f,0.0538f,0.0304f,-0.2914f,-0.1558f,0.096f,-0.2679f,0.0055f,0.1486f,-0.0096f});
  }
}
protected class MFVec2f170 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4716f,0.6458f,0.468f,0.6451f,0.471f,0.6448f,0.4746f,0.6455f,0.4739f,0.6476f,0.469f,0.6473f,0.4769f,0.6473f,0.4764f,0.6466f,0.4727f,0.6459f,0.4678f,0.6456f,0.4648f,0.6459f,0.4653f,0.6466f,0.4718f,0.655f,0.4662f,0.6546f,0.4753f,0.6546f,0.4748f,0.6538f,0.4704f,0.653f,0.4649f,0.6527f,0.4613f,0.653f,0.4619f,0.6538f,0.4717f,0.6562f,0.4657f,0.6558f,0.4756f,0.6559f,0.475f,0.655f,0.4702f,0.6541f,0.4642f,0.6537f,0.4603f,0.654f,0.4609f,0.6549f,0.4702f,0.657f,0.4659f,0.6567f,0.4729f,0.6567f,0.4725f,0.6561f,0.4692f,0.6555f,0.4649f,0.6552f,0.4622f,0.6555f,0.4626f,0.6561f,0.4674f,0.6566f});
  }
}
protected class MFFloat171 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat172 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32173 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
  }
}
protected class MFInt32174 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
  }
}
protected class MFVec3f175 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.5817f,-0.8003f,0.0727f,-0.4584f,-0.8658f,-0.106f,-0.4372f,-0.8552f,0.2109f,-0.314f,-0.9207f,0.0322f,-0.6359f,-0.6464f,-0.0377f,-0.62f,-0.6384f,0.2f,-0.4756f,-0.6933f,0.3382f,-0.2748f,-0.7836f,0.3078f,-0.1516f,-0.8492f,0.1291f,-0.1675f,-0.8572f,-0.1085f,-0.3119f,-0.8023f,-0.2467f,-0.5127f,-0.712f,-0.2163f,-0.374f,-0.0036f,-0.0838f,-0.3562f,0.0054f,0.1827f,-0.1843f,-0.0599f,0.3471f,0.0408f,-0.1612f,0.313f,0.1875f,-0.2392f,0.1004f,0.1697f,-0.2482f,-0.1661f,-0.0022f,-0.1829f,-0.3305f,-0.2274f,-0.0816f,-0.2964f,-0.2142f,0.1671f,-0.0744f,-0.2005f,0.174f,0.1306f,-0.0683f,0.1238f,0.257f,0.1048f,0.0459f,0.2308f,0.2176f,-0.0141f,0.0673f,0.2039f,-0.021f,-0.1376f,0.0717f,0.0292f,-0.264f,-0.1014f,0.1072f,-0.2378f,0.0214f,0.1175f,-0.006f});
  }
}
protected class MFVec2f176 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4723f,0.6394f,0.469f,0.6388f,0.4716f,0.6383f,0.4749f,0.6389f,0.4747f,0.6409f,0.4703f,0.6408f,0.4773f,0.6404f,0.4767f,0.6395f,0.4734f,0.6389f,0.469f,0.6389f,0.4664f,0.6394f,0.467f,0.6402f,0.4744f,0.647f,0.4694f,0.6469f,0.4774f,0.6463f,0.4768f,0.6454f,0.4729f,0.6447f,0.4679f,0.6446f,0.4649f,0.6452f,0.4655f,0.6461f,0.4734f,0.6485f,0.4696f,0.6485f,0.4758f,0.6481f,0.4753f,0.6473f,0.4722f,0.6468f,0.4684f,0.6467f,0.4661f,0.6472f,0.4666f,0.6479f,0.4709f,0.648f});
  }
}
protected class MFFloat177 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat178 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32179 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
protected class MFInt32180 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
protected class MFVec3f181 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0229f,-1.485f,0.1659f,-0.0277f,-1.493f,-0.0662f,0.2213f,-1.467f,0.1625f,0.2166f,-1.475f,-0.0696f,-0.2194f,-1.321f,0.162f,-0.0326f,-1.302f,0.3335f,0.2116f,-1.284f,0.3301f,0.3912f,-1.276f,0.1535f,0.3864f,-1.284f,-0.0786f,0.1997f,-1.303f,-0.2501f,-0.0446f,-1.321f,-0.2467f,-0.2242f,-1.329f,-0.0701f,-0.3384f,-0.3382f,0.1488f,-0.1289f,-0.3166f,0.3412f,0.1617f,-0.2951f,0.3371f,0.3631f,-0.2862f,0.139f,0.3574f,-0.2953f,-0.1371f,0.148f,-0.3169f,-0.3295f,-0.1426f,-0.3384f,-0.3254f,-0.3441f,-0.3473f,-0.1273f,-0.3796f,-0.1843f,0.1553f,-0.1523f,-0.1608f,0.364f,0.1629f,-0.1375f,0.3596f,0.3814f,-0.1279f,0.1446f,0.3753f,-0.1377f,-0.1549f,0.148f,-0.1611f,-0.3636f,-0.1672f,-0.1845f,-0.3592f,-0.3858f,-0.1941f,-0.1442f,-0.2808f,-0.0217f,0.1042f,-0.1201f,-0.0051f,0.2518f,0.1029f,0.0114f,0.2486f,0.2574f,0.0182f,0.0967f,0.253f,0.0113f,-0.1151f,0.0923f,-0.0053f,-0.2627f,-0.1306f,-0.0218f,-0.2596f,-0.2851f,-0.0286f,-0.1076f,-0.0187f,0.0593f,-0.0078f});
  }
}
protected class MFVec2f182 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.453f,0.6387f,0.4487f,0.6387f,0.4487f,0.6388f,0.453f,0.6389f,0.4561f,0.6405f,0.453f,0.6403f,0.4561f,0.6406f,0.4528f,0.6407f,0.4485f,0.6406f,0.4453f,0.6405f,0.4454f,0.6403f,0.4487f,0.6402f,0.4563f,0.6497f,0.4527f,0.6495f,0.4562f,0.6499f,0.4525f,0.65f,0.4474f,0.6499f,0.4439f,0.6497f,0.4439f,0.6495f,0.4476f,0.6494f,0.4567f,0.6512f,0.4528f,0.651f,0.4566f,0.6514f,0.4526f,0.6515f,0.4471f,0.6514f,0.4432f,0.6512f,0.4433f,0.651f,0.4473f,0.6509f,0.4546f,0.6527f,0.4519f,0.6525f,0.4546f,0.6528f,0.4518f,0.6529f,0.4478f,0.6528f,0.4451f,0.6527f,0.4452f,0.6525f,0.448f,0.6524f,0.4498f,0.6533f});
  }
}
protected class MFFloat183 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat184 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32185 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
protected class MFInt32186 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
protected class MFVec3f187 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2499f,-1.331f,0.1644f,-0.2541f,-1.339f,-0.0655f,-0.0349f,-1.351f,0.1633f,-0.0391f,-1.359f,-0.0666f,-0.3958f,-1.152f,0.159f,-0.2314f,-1.162f,0.3307f,-0.0165f,-1.182f,0.3296f,0.1416f,-1.203f,0.1563f,0.1374f,-1.21f,-0.0736f,-0.0269f,-1.201f,-0.2453f,-0.2419f,-1.181f,-0.2442f,-0.4f,-1.16f,-0.0709f,-0.3504f,-0.2375f,0.1465f,-0.166f,-0.2482f,0.3391f,0.0897f,-0.2722f,0.3377f,0.267f,-0.2955f,0.1434f,0.2621f,-0.3044f,-0.1302f,0.0777f,-0.2937f,-0.3227f,-0.1781f,-0.2697f,-0.3214f,-0.3554f,-0.2464f,-0.127f,-0.3661f,-0.0905f,0.1542f,-0.1642f,-0.1021f,0.365f,0.1159f,-0.1284f,0.3636f,0.3101f,-0.1539f,0.1508f,0.3046f,-0.1637f,-0.1488f,0.1027f,-0.152f,-0.3596f,-0.1774f,-0.1258f,-0.3581f,-0.3715f,-0.1003f,-0.1453f,-0.2544f,0.0426f,0.1044f,-0.1117f,0.0344f,0.2535f,0.0864f,0.0158f,0.2525f,0.2237f,-0.0022f,0.102f,0.2198f,-0.0091f,-0.1098f,0.077f,-0.0009f,-0.2589f,-0.121f,0.0177f,-0.2579f,-0.2583f,0.0357f,-0.1074f,-0.0117f,0.0763f,-0.005f});
  }
}
protected class MFVec2f188 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.454f,0.6279f,0.4498f,0.6279f,0.4498f,0.6277f,0.454f,0.6277f,0.4571f,0.6295f,0.4539f,0.6296f,0.4571f,0.6293f,0.4539f,0.6291f,0.4496f,0.6291f,0.4464f,0.6292f,0.4465f,0.6294f,0.4497f,0.6295f,0.4573f,0.6381f,0.4537f,0.6382f,0.4572f,0.6379f,0.4536f,0.6377f,0.4486f,0.6376f,0.445f,0.6377f,0.445f,0.6379f,0.4486f,0.6381f,0.4578f,0.6395f,0.4538f,0.6396f,0.4577f,0.6392f,0.4538f,0.639f,0.4482f,0.6389f,0.4443f,0.639f,0.4444f,0.6393f,0.4483f,0.6395f,0.4557f,0.6408f,0.4529f,0.6408f,0.4557f,0.6406f,0.4529f,0.6404f,0.449f,0.6404f,0.4462f,0.6404f,0.4462f,0.6406f,0.449f,0.6408f,0.4509f,0.6412f});
  }
}
protected class MFFloat189 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat190 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32191 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
  }
}
protected class MFInt32192 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
  }
}
protected class MFVec3f193 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.4479f,-1.125f,0.1554f,-0.4519f,-1.132f,-0.0632f,-0.2499f,-1.18f,0.1557f,-0.2539f,-1.187f,-0.0629f,-0.5544f,-0.9319f,0.1491f,-0.4029f,-0.9674f,0.3134f,-0.2049f,-1.022f,0.3137f,-0.0594f,-1.068f,0.1499f,-0.0634f,-1.075f,-0.0687f,-0.2149f,-1.04f,-0.2329f,-0.4129f,-0.9852f,-0.2333f,-0.5584f,-0.939f,-0.0695f,-0.3333f,-0.0803f,0.1251f,-0.1781f,-0.1166f,0.2933f,0.037f,-0.1758f,0.2937f,0.186f,-0.2231f,0.1259f,0.1817f,-0.2308f,-0.1116f,0.0265f,-0.1945f,-0.2799f,-0.1886f,-0.1353f,-0.2802f,-0.3376f,-0.088f,-0.1125f,-0.2019f,0.1709f,0.088f,-0.0815f,0.1427f,0.2185f,0.0854f,0.0967f,0.2188f,0.2011f,0.06f,0.0887f,0.1977f,0.054f,-0.0957f,0.0773f,0.0822f,-0.2262f,-0.0896f,0.1281f,-0.2265f,-0.2053f,0.1648f,-0.0963f,0.0132f,0.1679f,-0.006f});
  }
}
protected class MFVec2f194 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4546f,0.6191f,0.4506f,0.619f,0.4506f,0.6185f,0.4546f,0.6186f,0.4575f,0.6206f,0.4545f,0.6209f,0.4576f,0.6201f,0.4545f,0.6196f,0.4505f,0.6196f,0.4474f,0.6199f,0.4474f,0.6204f,0.4505f,0.6209f,0.4572f,0.6286f,0.4541f,0.6289f,0.4572f,0.628f,0.4541f,0.6276f,0.4497f,0.6275f,0.4466f,0.6279f,0.4465f,0.6284f,0.4497f,0.6289f,0.4558f,0.631f,0.4534f,0.6313f,0.4558f,0.6306f,0.4534f,0.6302f,0.45f,0.6302f,0.4475f,0.6305f,0.4475f,0.6309f,0.45f,0.6312f,0.4516f,0.6313f});
  }
}
protected class MFFloat195 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat196 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32197 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
  }
}
protected class MFInt32198 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
  }
}
protected class MFVec3f199 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.6187f,-1.071f,0.1411f,-0.6221f,-1.077f,-0.0485f,-0.4578f,-1.147f,0.1426f,-0.4613f,-1.153f,-0.047f,-0.6714f,-0.8704f,0.1341f,-0.5482f,-0.923f,0.2774f,-0.3873f,-0.9993f,0.2789f,-0.2693f,-1.061f,0.1378f,-0.2727f,-1.067f,-0.0518f,-0.396f,-1.015f,-0.1951f,-0.5568f,-0.9385f,-0.1966f,-0.6749f,-0.8765f,-0.0555f,-0.3236f,-0.0612f,0.1191f,-0.1854f,-0.1202f,0.2799f,0.006f,-0.211f,0.2816f,0.1384f,-0.2805f,0.1233f,0.1343f,-0.2879f,-0.1023f,-0.004f,-0.2288f,-0.263f,-0.1953f,-0.138f,-0.2647f,-0.3277f,-0.0685f,-0.1065f,-0.2135f,0.0836f,0.0963f,-0.0945f,0.035f,0.233f,0.0723f,-0.0325f,0.2317f,0.1865f,-0.0807f,0.0968f,0.1843f,-0.0816f,-0.0912f,0.0691f,-0.0336f,-0.2249f,-0.0937f,0.0356f,-0.2277f,-0.2116f,0.0844f,-0.0958f,0.0314f,0.0875f,-0.0035f});
  }
}
protected class MFVec2f200 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.455f,0.6109f,0.4515f,0.6108f,0.4515f,0.6101f,0.455f,0.6102f,0.4575f,0.6123f,0.4549f,0.6128f,0.4576f,0.6116f,0.455f,0.611f,0.4514f,0.6109f,0.4488f,0.6114f,0.4488f,0.6121f,0.4514f,0.6127f,0.4576f,0.6198f,0.4546f,0.6204f,0.4576f,0.619f,0.4547f,0.6183f,0.4505f,0.6182f,0.4475f,0.6188f,0.4475f,0.6197f,0.4504f,0.6203f,0.4567f,0.6213f,0.4542f,0.6217f,0.4567f,0.6206f,0.4542f,0.6202f,0.4507f,0.6202f,0.4482f,0.6206f,0.4482f,0.6213f,0.4506f,0.6217f,0.4523f,0.6218f});
  }
}
protected class MFFloat201 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat202 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32203 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
protected class MFInt32204 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
protected class MFVec3f205 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0157f,-1.601f,0.0972f,0.0217f,-1.599f,-0.1348f,0.2598f,-1.581f,0.1076f,0.2658f,-1.578f,-0.1245f,-0.183f,-1.427f,0.091f,-0.0045f,-1.414f,0.2728f,0.2395f,-1.393f,0.2832f,0.4271f,-1.376f,0.1169f,0.4331f,-1.374f,-0.1151f,0.2546f,-1.387f,-0.2969f,0.0105f,-1.408f,-0.3073f,-0.177f,-1.425f,-0.1411f,-0.3164f,-0.3793f,0.1197f,-0.1161f,-0.3643f,0.3236f,0.1742f,-0.3403f,0.3359f,0.3846f,-0.3213f,0.1495f,0.3918f,-0.3185f,-0.1266f,0.1915f,-0.3335f,-0.3306f,-0.0988f,-0.3575f,-0.3429f,-0.3092f,-0.3765f,-0.1564f,-0.3602f,-0.2157f,0.1315f,-0.143f,-0.1995f,0.3527f,0.172f,-0.1734f,0.3661f,0.4003f,-0.1528f,0.1638f,0.408f,-0.1498f,-0.1357f,0.1908f,-0.166f,-0.357f,-0.1242f,-0.1921f,-0.3703f,-0.3524f,-0.2126f,-0.168f,-0.2615f,-0.0399f,0.0937f,-0.1079f,-0.0284f,0.2501f,0.1148f,-0.01f,0.2596f,0.2762f,0.0046f,0.1165f,0.2817f,0.0068f,-0.0952f,0.1281f,-0.0047f,-0.2517f,-0.0946f,-0.0232f,-0.2611f,-0.256f,-0.0377f,-0.1181f,0.0044f,0.0523f,-0.0002f});
  }
}
protected class MFVec2f206 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4371f,0.6382f,0.4328f,0.6382f,0.4329f,0.6384f,0.4372f,0.6384f,0.4403f,0.64f,0.4369f,0.6398f,0.4405f,0.6401f,0.4374f,0.6403f,0.4331f,0.6403f,0.4298f,0.6402f,0.4296f,0.64f,0.4326f,0.6398f,0.4413f,0.6498f,0.4375f,0.6497f,0.4415f,0.65f,0.438f,0.6502f,0.4329f,0.6502f,0.4291f,0.6501f,0.4289f,0.6499f,0.4324f,0.6497f,0.4418f,0.6514f,0.4377f,0.6512f,0.442f,0.6516f,0.4383f,0.6518f,0.4327f,0.6518f,0.4286f,0.6517f,0.4284f,0.6514f,0.4321f,0.6512f,0.4399f,0.653f,0.437f,0.6529f,0.4401f,0.6531f,0.4374f,0.6533f,0.4335f,0.6533f,0.4306f,0.6532f,0.4304f,0.653f,0.4331f,0.6529f,0.4352f,0.6537f});
  }
}
protected class MFFloat207 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat208 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32209 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
protected class MFInt32210 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
protected class MFVec3f211 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2259f,-1.448f,0.0923f,-0.2194f,-1.446f,-0.1376f,-0.0106f,-1.469f,0.1016f,-0.0041f,-1.467f,-0.1283f,-0.3742f,-1.258f,0.088f,-0.2177f,-1.275f,0.2673f,-0.0024f,-1.296f,0.2766f,0.1639f,-1.31f,0.1112f,0.1704f,-1.307f,-0.1187f,0.0138f,-1.29f,-0.2981f,-0.2014f,-1.269f,-0.3073f,-0.3677f,-1.255f,-0.1419f,-0.3422f,-0.2825f,0.1227f,-0.1666f,-0.302f,0.3239f,0.0895f,-0.3267f,0.3349f,0.2761f,-0.3422f,0.1493f,0.2838f,-0.3394f,-0.1242f,0.1082f,-0.3199f,-0.3253f,-0.1479f,-0.2952f,-0.3364f,-0.3345f,-0.2797f,-0.1508f,-0.3605f,-0.1263f,0.1367f,-0.1681f,-0.1476f,0.357f,0.1123f,-0.1747f,0.3691f,0.3166f,-0.1917f,0.1659f,0.3251f,-0.1886f,-0.1336f,0.1327f,-0.1672f,-0.3539f,-0.1477f,-0.1401f,-0.366f,-0.352f,-0.1232f,-0.1627f,-0.2486f,0.0181f,0.0994f,-0.1126f,0.003f,0.2552f,0.0857f,-0.0161f,0.2638f,0.2302f,-0.0281f,0.1201f,0.2362f,-0.0259f,-0.0917f,0.1002f,-0.0108f,-0.2475f,-0.0981f,0.0083f,-0.256f,-0.2426f,0.0203f,-0.1123f,-0.0014f,0.0597f,0.0048f});
  }
}
protected class MFVec2f212 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4369f,0.6266f,0.4327f,0.6266f,0.4328f,0.6264f,0.4371f,0.6264f,0.4402f,0.6282f,0.4368f,0.6283f,0.4403f,0.628f,0.4373f,0.6279f,0.433f,0.6279f,0.4297f,0.628f,0.4295f,0.6282f,0.4326f,0.6284f,0.4412f,0.6373f,0.4375f,0.6375f,0.4414f,0.6371f,0.438f,0.637f,0.4329f,0.637f,0.4292f,0.6372f,0.429f,0.6374f,0.4324f,0.6375f,0.4418f,0.6388f,0.4378f,0.639f,0.4421f,0.6385f,0.4383f,0.6384f,0.4327f,0.6384f,0.4287f,0.6386f,0.4284f,0.6389f,0.4322f,0.639f,0.4399f,0.6402f,0.4371f,0.6403f,0.4401f,0.64f,0.4374f,0.6399f,0.4335f,0.6399f,0.4306f,0.6401f,0.4305f,0.6402f,0.4331f,0.6404f,0.4353f,0.6407f});
  }
}
protected class MFFloat213 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat214 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
  }
}
protected class MFInt32216 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
  }
}
protected class MFVec3f217 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.4389f,-1.268f,0.089f,-0.4327f,-1.265f,-0.1296f,-0.2401f,-1.325f,0.0971f,-0.234f,-1.323f,-0.1215f,-0.5481f,-1.062f,0.0865f,-0.4036f,-1.106f,0.2566f,-0.2049f,-1.164f,0.2647f,-0.0512f,-1.205f,0.1068f,-0.045f,-1.203f,-0.1118f,-0.1894f,-1.158f,-0.2818f,-0.3882f,-1.101f,-0.2899f,-0.5419f,-1.059f,-0.132f,-0.3388f,-0.1526f,0.1159f,-0.1909f,-0.1984f,0.2901f,0.025f,-0.2608f,0.2989f,0.1825f,-0.3032f,0.1372f,0.1892f,-0.3008f,-0.1003f,0.0412f,-0.2549f,-0.2744f,-0.1747f,-0.1925f,-0.2833f,-0.3321f,-0.1501f,-0.1216f,-0.2096f,0.117f,0.0982f,-0.0948f,0.0814f,0.2333f,0.0727f,0.033f,0.2402f,0.1949f,0.0001f,0.1147f,0.2001f,0.002f,-0.0696f,0.0853f,0.0376f,-0.2048f,-0.0823f,0.086f,-0.2116f,-0.2044f,0.1189f,-0.0861f,0.0097f,0.1188f,0.0156f});
  }
}
protected class MFVec2f218 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4364f,0.617f,0.4323f,0.6171f,0.4325f,0.6165f,0.4365f,0.6165f,0.4395f,0.6186f,0.4363f,0.619f,0.4397f,0.618f,0.4367f,0.6176f,0.4327f,0.6176f,0.4295f,0.6181f,0.4294f,0.6186f,0.4323f,0.619f,0.4401f,0.6271f,0.4369f,0.6275f,0.4403f,0.6265f,0.4373f,0.6261f,0.4329f,0.6261f,0.4297f,0.6266f,0.4295f,0.6271f,0.4325f,0.6275f,0.4391f,0.6297f,0.4366f,0.6301f,0.4392f,0.6293f,0.4369f,0.629f,0.4335f,0.629f,0.431f,0.6293f,0.4308f,0.6298f,0.4331f,0.6301f,0.435f,0.6301f});
  }
}
protected class MFFloat219 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat220 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32221 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
  }
}
protected class MFInt32222 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
  }
}
protected class MFVec3f223 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.631f,-1.169f,0.0421f,-0.6256f,-1.167f,-0.1475f,-0.4691f,-1.25f,0.0483f,-0.4637f,-1.248f,-0.1413f,-0.6864f,-0.9557f,0.0421f,-0.569f,-1.018f,0.1889f,-0.4071f,-1.099f,0.1951f,-0.2817f,-1.158f,0.0576f,-0.2763f,-1.156f,-0.1319f,-0.3937f,-1.094f,-0.2788f,-0.5556f,-1.013f,-0.285f,-0.681f,-0.9537f,-0.1474f,-0.3504f,-0.0919f,0.0851f,-0.2187f,-0.1616f,0.2498f,-0.026f,-0.2579f,0.2572f,0.1147f,-0.3243f,0.1029f,0.121f,-0.322f,-0.1226f,-0.0106f,-0.2523f,-0.2873f,-0.2033f,-0.156f,-0.2946f,-0.344f,-0.0896f,-0.1404f,-0.2414f,0.0637f,0.0753f,-0.128f,0.0061f,0.2155f,0.0399f,-0.0652f,0.2197f,0.161f,-0.1101f,0.0888f,0.1675f,-0.1027f,-0.0988f,0.0577f,-0.0458f,-0.2359f,-0.106f,0.0275f,-0.2439f,-0.2307f,0.0733f,-0.1162f,0.0079f,0.0731f,-0.0112f});
  }
}
protected class MFVec2f224 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4356f,0.6082f,0.4321f,0.6082f,0.4322f,0.6074f,0.4357f,0.6074f,0.4383f,0.6096f,0.4356f,0.6102f,0.4384f,0.6088f,0.4359f,0.6083f,0.4324f,0.6083f,0.4296f,0.6089f,0.4295f,0.6096f,0.4321f,0.6102f,0.4394f,0.6176f,0.4364f,0.6183f,0.4396f,0.6167f,0.4367f,0.6161f,0.4325f,0.6161f,0.4295f,0.6168f,0.4293f,0.6177f,0.4322f,0.6183f,0.4388f,0.6192f,0.4362f,0.6198f,0.4389f,0.6186f,0.4364f,0.6181f,0.433f,0.6182f,0.4304f,0.6187f,0.4303f,0.6194f,0.4326f,0.6199f,0.4346f,0.6199f});
  }
}
protected class MFFloat225 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat226 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32227 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
protected class MFInt32228 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
protected class MFVec3f229 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.014f,-1.366f,0.0295f,-0.0298f,-1.354f,-0.1885f,0.2211f,-1.344f,0.0143f,0.2053f,-1.332f,-0.2037f,-0.205f,-1.209f,0.0528f,-0.0169f,-1.202f,0.2049f,0.2182f,-1.181f,0.1897f,0.3826f,-1.156f,0.0148f,0.3668f,-1.144f,-0.2032f,0.1787f,-1.151f,-0.3553f,-0.0564f,-1.172f,-0.3401f,-0.2209f,-1.197f,-0.1652f,-0.3293f,-0.2545f,0.1423f,-0.1183f,-0.2468f,0.3129f,0.1614f,-0.2216f,0.2949f,0.3458f,-0.1936f,0.0987f,0.327f,-0.1793f,-0.1607f,0.116f,-0.187f,-0.3313f,-0.1637f,-0.2122f,-0.3132f,-0.3482f,-0.2402f,-0.117f,-0.3702f,-0.1061f,0.1656f,-0.1412f,-0.0977f,0.3507f,0.1622f,-0.0704f,0.3311f,0.3623f,-0.04f,0.1183f,0.3419f,-0.0245f,-0.1631f,0.1129f,-0.0329f,-0.3482f,-0.1905f,-0.0602f,-0.3286f,-0.3906f,-0.0905f,-0.1158f,-0.2788f,0.0575f,0.1279f,-0.1169f,0.0634f,0.2588f,0.0976f,0.0827f,0.2449f,0.2391f,0.1042f,0.0944f,0.2247f,0.1152f,-0.1045f,0.0628f,0.1093f,-0.2354f,-0.1518f,0.0899f,-0.2215f,-0.2933f,0.0685f,-0.0711f,-0.0325f,0.1491f,0.016f});
  }
}
protected class MFVec2f230 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4223f,0.6397f,0.4182f,0.6398f,0.4179f,0.64f,0.422f,0.6399f,0.4255f,0.6412f,0.4227f,0.6412f,0.4252f,0.6414f,0.422f,0.6417f,0.418f,0.6418f,0.4151f,0.6417f,0.4154f,0.6415f,0.4187f,0.6413f,0.4275f,0.6502f,0.4244f,0.6501f,0.4272f,0.6504f,0.4235f,0.6507f,0.4187f,0.6508f,0.4156f,0.6508f,0.4159f,0.6505f,0.4196f,0.6503f,0.4282f,0.6516f,0.4248f,0.6515f,0.4279f,0.6519f,0.4239f,0.6522f,0.4187f,0.6523f,0.4153f,0.6522f,0.4156f,0.652f,0.4196f,0.6517f,0.4265f,0.6531f,0.4241f,0.6531f,0.4263f,0.6533f,0.4235f,0.6535f,0.4198f,0.6536f,0.4174f,0.6536f,0.4176f,0.6534f,0.4204f,0.6532f,0.422f,0.6539f});
  }
}
protected class MFFloat231 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat232 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32233 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
protected class MFInt32234 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
protected class MFVec3f235 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1847f,-1.253f,0.0467f,-0.1998f,-1.241f,-0.1693f,0.0227f,-1.271f,0.0316f,0.0076f,-1.259f,-0.1844f,-0.3279f,-1.08f,0.0673f,-0.161f,-1.102f,0.2179f,0.0464f,-1.12f,0.2028f,0.1906f,-1.124f,0.0295f,0.1754f,-1.112f,-0.1865f,0.0085f,-1.09f,-0.3372f,-0.1989f,-1.072f,-0.3221f,-0.3431f,-1.068f,-0.1487f,-0.2967f,-0.1902f,0.1418f,-0.1095f,-0.215f,0.3108f,0.1373f,-0.2358f,0.2929f,0.299f,-0.2404f,0.0984f,0.281f,-0.2262f,-0.1586f,0.0938f,-0.2014f,-0.3276f,-0.153f,-0.1807f,-0.3096f,-0.3147f,-0.176f,-0.1151f,-0.3133f,-0.0482f,0.1642f,-0.1083f,-0.0753f,0.3493f,0.1619f,-0.0981f,0.3296f,0.339f,-0.1032f,0.1167f,0.3192f,-0.0876f,-0.1647f,0.1142f,-0.0605f,-0.3498f,-0.156f,-0.0377f,-0.3301f,-0.3331f,-0.0327f,-0.1172f,-0.2099f,0.0863f,0.1241f,-0.0649f,0.0671f,0.255f,0.1261f,0.051f,0.2411f,0.2514f,0.0474f,0.0905f,0.2374f,0.0585f,-0.1085f,0.0924f,0.0776f,-0.2393f,-0.0986f,0.0937f,-0.2254f,-0.2239f,0.0973f,-0.0749f,0.0182f,0.1305f,0.0112f});
  }
}
protected class MFVec2f236 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4212f,0.6288f,0.4172f,0.6289f,0.4169f,0.6288f,0.4209f,0.6287f,0.4244f,0.6302f,0.4216f,0.6304f,0.4241f,0.6301f,0.4209f,0.63f,0.4169f,0.6301f,0.4141f,0.6304f,0.4144f,0.6305f,0.4176f,0.6306f,0.4261f,0.6386f,0.423f,0.6388f,0.4258f,0.6384f,0.4222f,0.6383f,0.4174f,0.6385f,0.4143f,0.6387f,0.4146f,0.6389f,0.4182f,0.6389f,0.4268f,0.6399f,0.4234f,0.6401f,0.4265f,0.6397f,0.4225f,0.6396f,0.4173f,0.6398f,0.4139f,0.64f,0.4142f,0.6402f,0.4182f,0.6403f,0.4251f,0.6412f,0.4226f,0.6414f,0.4248f,0.6411f,0.422f,0.641f,0.4183f,0.6411f,0.4159f,0.6413f,0.4162f,0.6415f,0.419f,0.6415f,0.4206f,0.6418f});
  }
}
protected class MFFloat237 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat238 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32239 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
  }
}
protected class MFInt32240 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
  }
}
protected class MFVec3f241 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.412f,-1.137f,0.0335f,-0.4261f,-1.125f,-0.1679f,-0.2243f,-1.187f,0.0176f,-0.2385f,-1.176f,-0.1838f,-0.5153f,-0.9493f,0.0522f,-0.3639f,-0.9958f,0.1913f,-0.1762f,-1.047f,0.1754f,-0.0461f,-1.076f,0.0125f,-0.0602f,-1.065f,-0.1888f,-0.2116f,-1.019f,-0.3279f,-0.3992f,-0.9679f,-0.312f,-0.5294f,-0.9381f,-0.1491f,-0.3178f,-0.1177f,0.1f,-0.1627f,-0.1653f,0.2425f,0.0412f,-0.2206f,0.2252f,0.1745f,-0.2511f,0.0583f,0.1591f,-0.239f,-0.1604f,0.0041f,-0.1914f,-0.3029f,-0.1998f,-0.1361f,-0.2856f,-0.3331f,-0.1056f,-0.1188f,-0.1985f,0.1307f,0.0829f,-0.0782f,0.0937f,0.1934f,0.08f,0.0508f,0.18f,0.1835f,0.0271f,0.0505f,0.1716f,0.0365f,-0.1192f,0.0513f,0.0735f,-0.2298f,-0.1069f,0.1164f,-0.2164f,-0.2104f,0.1401f,-0.0869f,0.0002f,0.1379f,-0.0157f});
  }
}
protected class MFVec2f242 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4203f,0.6204f,0.4166f,0.6205f,0.4163f,0.62f,0.42f,0.6199f,0.4232f,0.6217f,0.4207f,0.6221f,0.4229f,0.6212f,0.4199f,0.6209f,0.4162f,0.621f,0.4136f,0.6215f,0.4139f,0.622f,0.4169f,0.6222f,0.4242f,0.6295f,0.4215f,0.6299f,0.4239f,0.629f,0.4208f,0.6287f,0.4167f,0.6288f,0.4141f,0.6293f,0.4144f,0.6298f,0.4175f,0.6301f,0.4233f,0.6319f,0.4212f,0.6323f,0.423f,0.6315f,0.4206f,0.6313f,0.4175f,0.6314f,0.4154f,0.6317f,0.4157f,0.6321f,0.4181f,0.6324f,0.4194f,0.6323f});
  }
}
protected class MFFloat243 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat244 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32245 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
  }
}
protected class MFInt32246 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
  }
}
protected class MFVec3f247 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.5436f,-1.006f,0.082f,-0.5559f,-0.9964f,-0.0922f,-0.3911f,-1.079f,0.0671f,-0.4033f,-1.069f,-0.1071f,-0.596f,-0.8116f,0.0978f,-0.4725f,-0.8732f,0.2172f,-0.3199f,-0.9458f,0.2024f,-0.2147f,-0.9931f,0.0605f,-0.2269f,-0.9834f,-0.1137f,-0.3505f,-0.9218f,-0.2332f,-0.503f,-0.8491f,-0.2183f,-0.6083f,-0.8019f,-0.0765f,-0.2786f,-0.0205f,0.1427f,-0.14f,-0.0896f,0.2768f,0.0415f,-0.176f,0.2591f,0.1596f,-0.229f,0.1f,0.1451f,-0.2175f,-0.1073f,0.0064f,-0.1484f,-0.2413f,-0.1751f,-0.062f,-0.2236f,-0.2931f,-0.009f,-0.0645f,-0.1776f,0.1232f,0.1297f,-0.0583f,0.0659f,0.2438f,0.0996f,0.0023f,0.2269f,0.2013f,-0.0322f,0.0923f,0.1903f,-0.0176f,-0.08f,0.0748f,0.0389f,-0.1916f,-0.0796f,0.1047f,-0.1786f,-0.185f,0.14f,-0.0465f,0.0484f,0.1379f,0.025f});
  }
}
protected class MFVec2f248 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4195f,0.6124f,0.4163f,0.6125f,0.416f,0.6118f,0.4193f,0.6117f,0.422f,0.6137f,0.4198f,0.6143f,0.4218f,0.613f,0.4191f,0.6126f,0.4159f,0.6126f,0.4137f,0.6132f,0.414f,0.6139f,0.4166f,0.6143f,0.4231f,0.621f,0.4207f,0.6217f,0.4228f,0.6202f,0.4199f,0.6197f,0.416f,0.6198f,0.4135f,0.6205f,0.4139f,0.6213f,0.4168f,0.6218f,0.4225f,0.6225f,0.4204f,0.623f,0.4222f,0.6219f,0.4197f,0.6216f,0.4165f,0.6217f,0.4145f,0.6223f,0.4147f,0.6229f,0.4172f,0.6232f,0.4185f,0.6232f});
  }
}
protected class MFFloat249 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat250 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32251 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
protected class MFInt32252 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
protected class MFVec3f253 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0463f,-0.9645f,-0.0622f,0.0267f,-0.942f,-0.253f,0.2519f,-0.9328f,-0.0794f,0.2324f,-0.9103f,-0.2702f,-0.1254f,-0.8655f,-0.031f,0.0435f,-0.8586f,0.0992f,0.2492f,-0.8269f,0.082f,0.3888f,-0.7862f,-0.074f,0.3693f,-0.7638f,-0.2648f,0.2004f,-0.7707f,-0.395f,-0.0053f,-0.8024f,-0.3779f,-0.1449f,-0.843f,-0.2218f,-0.2585f,-0.1911f,0.0918f,-0.069f,-0.1834f,0.2379f,0.1757f,-0.1456f,0.2175f,0.3323f,-0.1f,0.0425f,0.309f,-0.0733f,-0.1846f,0.1196f,-0.0811f,-0.3307f,-0.1251f,-0.1188f,-0.3102f,-0.2817f,-0.1644f,-0.1352f,-0.2978f,-0.0883f,0.1196f,-0.0923f,-0.0799f,0.2781f,0.1732f,-0.0389f,0.2559f,0.343f,0.0105f,0.066f,0.3178f,0.0395f,-0.1803f,0.1123f,0.0311f,-0.3387f,-0.1532f,-0.0098f,-0.3166f,-0.3231f,-0.0593f,-0.1267f,-0.223f,0.0382f,0.0917f,-0.0776f,0.0442f,0.2038f,0.1101f,0.0732f,0.1881f,0.2302f,0.1081f,0.0539f,0.2124f,0.1286f,-0.1203f,0.0671f,0.1227f,-0.2324f,-0.1207f,0.0937f,-0.2167f,-0.2408f,0.0588f,-0.0824f,-0.0116f,0.1281f,-0.0076f});
  }
}
protected class MFVec2f254 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4094f,0.6427f,0.4058f,0.6429f,0.4055f,0.6432f,0.4091f,0.643f,0.4124f,0.6437f,0.41f,0.6437f,0.412f,0.644f,0.4092f,0.6444f,0.4056f,0.6446f,0.4032f,0.6445f,0.4035f,0.6443f,0.4064f,0.6439f,0.4149f,0.6501f,0.4122f,0.65f,0.4146f,0.6504f,0.4113f,0.6509f,0.4071f,0.6511f,0.4044f,0.651f,0.4048f,0.6507f,0.408f,0.6502f,0.4157f,0.651f,0.4127f,0.651f,0.4153f,0.6514f,0.4118f,0.6519f,0.4072f,0.6522f,0.4043f,0.6521f,0.4047f,0.6517f,0.4082f,0.6512f,0.4143f,0.6522f,0.4122f,0.6522f,0.414f,0.6525f,0.4115f,0.6528f,0.4083f,0.653f,0.4062f,0.6529f,0.4065f,0.6527f,0.409f,0.6523f,0.4104f,0.653f});
  }
}
protected class MFFloat255 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat256 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32257 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
protected class MFInt32258 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
protected class MFVec3f259 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1298f,-0.9343f,0.012f,-0.1487f,-0.912f,-0.1771f,0.0526f,-0.9323f,-0.0063f,0.0337f,-0.91f,-0.1954f,-0.2599f,-0.8204f,0.0405f,-0.1089f,-0.8356f,0.1686f,0.0735f,-0.8336f,0.1504f,0.1961f,-0.8154f,-0.0051f,0.1772f,-0.793f,-0.1942f,0.0262f,-0.7778f,-0.3224f,-0.1562f,-0.7798f,-0.3041f,-0.2788f,-0.7981f,-0.1486f,-0.2549f,-0.1812f,0.1442f,-0.0856f,-0.1983f,0.2879f,0.1314f,-0.1959f,0.2662f,0.269f,-0.1755f,0.0918f,0.2465f,-0.1489f,-0.1332f,0.0771f,-0.1318f,-0.2769f,-0.1399f,-0.1342f,-0.2552f,-0.2774f,-0.1547f,-0.0808f,-0.2729f,-0.0814f,0.1704f,-0.0874f,-0.1001f,0.3278f,0.1502f,-0.0975f,0.304f,0.3008f,-0.0751f,0.113f,0.2762f,-0.046f,-0.1333f,0.0907f,-0.0273f,-0.2907f,-0.1469f,-0.0299f,-0.2669f,-0.2975f,-0.0523f,-0.0759f,-0.1866f,0.0252f,0.139f,-0.0555f,0.012f,0.2502f,0.1126f,0.0138f,0.2334f,0.2191f,0.0297f,0.0984f,0.2016f,0.0502f,-0.0758f,0.0705f,0.0635f,-0.1871f,-0.0975f,0.0616f,-0.1703f,-0.204f,0.0458f,-0.0352f,0.0099f,0.0797f,0.0369f});
  }
}
protected class MFVec2f260 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4075f,0.6349f,0.404f,0.6351f,0.4037f,0.6351f,0.4072f,0.6349f,0.4104f,0.6358f,0.4081f,0.6359f,0.4101f,0.6358f,0.4072f,0.636f,0.4037f,0.6362f,0.4013f,0.6363f,0.4017f,0.6363f,0.4046f,0.6362f,0.4127f,0.6418f,0.41f,0.6419f,0.4123f,0.6418f,0.409f,0.642f,0.4048f,0.6423f,0.4022f,0.6424f,0.4026f,0.6424f,0.4058f,0.6422f,0.4134f,0.6427f,0.4105f,0.6429f,0.413f,0.6427f,0.4094f,0.6429f,0.4048f,0.6432f,0.4019f,0.6434f,0.4024f,0.6434f,0.4059f,0.6432f,0.412f,0.6438f,0.4099f,0.6439f,0.4116f,0.6438f,0.4091f,0.6439f,0.4059f,0.6441f,0.4038f,0.6442f,0.4042f,0.6442f,0.4067f,0.6441f,0.408f,0.6444f});
  }
}
protected class MFFloat261 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat262 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32263 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
  }
}
protected class MFInt32264 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
  }
}
protected class MFVec3f265 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.3103f,-0.8684f,0.0017f,-0.3279f,-0.8476f,-0.1746f,-0.1444f,-0.8917f,-0.0183f,-0.162f,-0.8709f,-0.1946f,-0.4057f,-0.7413f,0.0284f,-0.268f,-0.7744f,0.1456f,-0.1021f,-0.7977f,0.1256f,0.0092f,-0.7996f,-0.0215f,-0.0085f,-0.7788f,-0.1978f,-0.1461f,-0.7457f,-0.315f,-0.3121f,-0.7224f,-0.295f,-0.4234f,-0.7205f,-0.1478f,-0.2537f,-0.1316f,0.1027f,-0.1126f,-0.1655f,0.2227f,0.0677f,-0.1909f,0.201f,0.1817f,-0.1928f,0.0502f,0.1625f,-0.1702f,-0.1412f,0.0215f,-0.1363f,-0.2613f,-0.1588f,-0.1109f,-0.2396f,-0.2728f,-0.109f,-0.0888f,-0.156f,0.0566f,0.096f,-0.0465f,0.0303f,0.1892f,0.0934f,0.0106f,0.1723f,0.1818f,0.0091f,0.0553f,0.1669f,0.0266f,-0.0933f,0.0575f,0.0529f,-0.1864f,-0.0824f,0.0726f,-0.1696f,-0.1709f,0.0741f,-0.0526f,0.016f,0.0815f,0.0057f});
  }
}
protected class MFVec2f266 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4061f,0.6287f,0.4028f,0.6289f,0.4025f,0.6286f,0.4057f,0.6284f,0.4088f,0.6296f,0.4066f,0.6299f,0.4084f,0.6293f,0.4057f,0.6293f,0.4024f,0.6295f,0.4002f,0.6298f,0.4006f,0.63f,0.4033f,0.6301f,0.4102f,0.6353f,0.408f,0.6356f,0.4098f,0.635f,0.407f,0.635f,0.4035f,0.6352f,0.4012f,0.6355f,0.4016f,0.6358f,0.4044f,0.6358f,0.4096f,0.6371f,0.4079f,0.6374f,0.4093f,0.6369f,0.4071f,0.6369f,0.4043f,0.6371f,0.4026f,0.6373f,0.4029f,0.6375f,0.4051f,0.6375f,0.4062f,0.6376f});
  }
}
protected class MFFloat267 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat268 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32269 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
  }
}
protected class MFInt32270 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
  }
}
protected class MFVec3f271 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.4265f,-0.7665f,0.0531f,-0.4417f,-0.7485f,-0.0994f,-0.2908f,-0.8079f,0.0337f,-0.306f,-0.7899f,-0.1188f,-0.4775f,-0.6307f,0.0765f,-0.3642f,-0.6752f,0.1764f,-0.2285f,-0.7166f,0.157f,-0.1382f,-0.7341f,0.0281f,-0.1534f,-0.7161f,-0.1244f,-0.2667f,-0.6716f,-0.2242f,-0.4024f,-0.6302f,-0.2049f,-0.4927f,-0.6127f,-0.076f,-0.2189f,-0.0422f,0.1441f,-0.0919f,-0.0921f,0.2561f,0.0696f,-0.1414f,0.2331f,0.1709f,-0.161f,0.0886f,0.1528f,-0.1396f,-0.0929f,0.0258f,-0.0897f,-0.2049f,-0.1357f,-0.0404f,-0.1819f,-0.2371f,-0.0207f,-0.0373f,-0.1344f,0.069f,0.1368f,-0.0252f,0.0277f,0.2322f,0.1149f,-0.0067f,0.2114f,0.202f,-0.0158f,0.0895f,0.1878f,0.0058f,-0.0611f,0.082f,0.0466f,-0.1545f,-0.0552f,0.083f,-0.137f,-0.1456f,0.0926f,-0.0171f,0.0613f,0.1015f,0.0409f});
  }
}
protected class MFVec2f272 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4049f,0.6227f,0.4021f,0.6229f,0.4017f,0.6225f,0.4045f,0.6223f,0.4072f,0.6236f,0.4053f,0.624f,0.4068f,0.6232f,0.4044f,0.623f,0.4016f,0.6232f,0.3997f,0.6236f,0.4001f,0.624f,0.4025f,0.6242f,0.4086f,0.6291f,0.4066f,0.6295f,0.4082f,0.6286f,0.4055f,0.6284f,0.4022f,0.6286f,0.4001f,0.6291f,0.4005f,0.6296f,0.4032f,0.6297f,0.4082f,0.6302f,0.4064f,0.6306f,0.4078f,0.6299f,0.4056f,0.6298f,0.4028f,0.63f,0.401f,0.6304f,0.4014f,0.6307f,0.4036f,0.6308f,0.4047f,0.6309f});
  }
}
protected class MFFloat273 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat274 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32275 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1});
  }
}
protected class MFInt32276 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1});
  }
}
protected class MFVec3f277 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.99f,0.104f,-0.8644f,-5.073f,0.4993f,0.047f,-4.706f,0.1695f,1.198f,-4.631f,-1.819f,1.104f,-4.586f,-1.648f,-0.1248f,-3.376f,0.3884f,1.771f,-3.891f,0.989f,-0.0537f,-4.193f,-2.49f,-0.5713f,-4.388f,-2.49f,1.429f,-3.761f,0.3238f,-1.692f,0.1237f,0.6312f,-0.1883f,0.1237f,0.3007f,-0.9426f,0.1237f,-1.418f,-0.2577f,0.1237f,-1.392f,0.6264f,0.1237f,0.2586f,0.8179f});
  }
}
protected class MFVec2f278 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1911f,0.4797f,0.171f,0.4832f,0.1497f,0.4806f,0.1519f,0.4334f,0.1831f,0.4416f,0.1474f,0.4856f,0.1708f,0.4854f,0.1784f,0.4249f,0.1538f,0.4251f,0.1963f,0.4863f,0.19f,0.5091f,0.1847f,0.499f,0.172f,0.4382f,0.1568f,0.4457f,0.1409f,0.4926f});
  }
}
protected class MFFloat279 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat280 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32281 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,9,3,-1,7,8,1,-1,1,5,7,-1,6,2,0,-1,0,8,6,-1,0,1,8,-1,9,6,8,-1,8,7,9,-1,4,10,11,-1,11,5,4,-1,5,11,12,-1,12,7,5,-1,7,12,13,-1,13,9,7,-1,9,13,14,-1,14,3,9,-1,3,14,10,-1,10,4,3,-1,10,15,11,-1,11,15,12,-1,12,15,13,-1,13,15,14,-1,14,15,10,-1});
  }
}
protected class MFInt32282 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,8,3,-1,9,7,1,-1,1,5,9,-1,6,2,0,-1,0,7,6,-1,0,1,7,-1,12,10,11,-1,11,13,12,-1,4,14,15,-1,15,5,4,-1,5,15,16,-1,16,9,5,-1,13,16,17,-1,17,12,13,-1,8,17,18,-1,18,3,8,-1,3,18,14,-1,14,4,3,-1,14,19,15,-1,15,19,16,-1,16,19,17,-1,17,19,18,-1,18,19,14,-1});
  }
}
protected class MFVec3f283 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-1.935f,1.466f,-0.0932f,-1.515f,0.6492f,-1.732f,-1.534f,0.7105f,1.619f,0.3782f,1.139f,1.732f,-0.1374f,1.74f,-0.0932f,-0.0076f,1.074f,-1.731f,-0.8341f,-1.572f,1.39f,-0.4391f,-1.74f,-0.6109f,-0.8275f,-1.58f,-0.6098f,-0.6342f,-1.74f,1.389f,1.237f,1.407f,-0.0712f,1.547f,0.8515f,-1.142f,0.7525f,-1.603f,-0.4744f,0.7511f,-1.595f,1.16f,1.51f,1.034f,1.296f,1.59f,-0.0185f,0.1351f});
  }
}
protected class MFVec2f284 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1715f,0.4655f,0.1797f,0.4646f,0.1569f,0.4642f,0.1474f,0.4856f,0.1708f,0.4854f,0.1963f,0.4863f,0.1544f,0.4288f,0.1782f,0.4286f,0.1538f,0.4251f,0.1784f,0.4249f,0.1544f,0.4288f,0.1782f,0.4286f,0.1538f,0.4251f,0.1784f,0.4249f,0.1703f,0.4865f,0.1895f,0.487f,0.1761f,0.4271f,0.1552f,0.4287f,0.1491f,0.4835f,0.1671f,0.4618f});
  }
}
protected class MFFloat285 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat286 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32287 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,21,20,-1,20,25,26,-1,27,22,21,-1,21,26,27,-1,28,23,22,-1,22,27,28,-1,29,24,23,-1,23,28,29,-1,25,20,24,-1,24,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1});
  }
}
protected class MFInt32288 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,61,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,54,-1,36,54,53,-1,37,36,53,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,40,39,38,-1,38,41,40,-1,43,42,55,-1,55,56,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,41,38,46,-1,46,47,41,-1,48,40,41,-1,41,49,48,-1,50,43,57,-1,57,58,50,-1,51,45,43,-1,43,50,51,-1,52,47,45,-1,45,51,52,-1,49,41,47,-1,47,52,49,-1,34,48,49,-1,49,33,34,-1,35,50,59,-1,59,60,35,-1,36,51,50,-1,50,35,36,-1,37,52,51,-1,51,36,37,-1,33,49,52,-1,52,37,33,-1});
  }
}
protected class MFVec3f289 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-1.164f,1.767f,-1.68f,-2.32f,1.756f,0.0337f,-1.047f,1.768f,1.663f,0.895f,1.785f,0.9556f,0.8229f,1.784f,-1.11f,-1.382f,0.4997f,-2.31f,-2.978f,0.4855f,0.057f,-1.221f,0.5011f,2.307f,1.462f,0.525f,1.33f,1.362f,0.5241f,-1.523f,-1.36f,-2.014f,-2.31f,-2.956f,-2.028f,0.057f,-1.198f,-2.012f,2.307f,1.484f,-1.988f,1.33f,1.384f,-1.989f,-1.523f,-1.398f,-3.089f,-2.442f,-3.087f,-3.104f,0.0619f,-1.228f,-3.087f,2.442f,1.61f,-3.062f,1.409f,1.505f,-3.063f,-1.61f,-0.8845f,-1.238f,-1.939f,-2.105f,-1.248f,-0.4543f,-1.473f,-1.243f,1.629f,0.1375f,-1.229f,1.432f,0.5011f,-1.225f,-0.7734f,-0.9027f,-7.045f,-1.569f,-2.17f,-7.056f,-0.378f,-1.514f,-7.051f,1.293f,0.1588f,-7.036f,1.135f,0.5365f,-7.032f,-0.634f,-0.9066f,-11.1f,-1.511f,-2.127f,-11.11f,-0.3651f,-1.495f,-11.1f,1.243f,0.1154f,-11.09f,1.091f,0.4791f,-11.08f,-0.6115f,-0.852f,-11.65f,-0.8985f,-1.567f,-11.65f,-0.2267f,-1.197f,-11.65f,0.716f,-0.2531f,-11.64f,0.6268f,-0.0399f,-11.64f,-0.3711f});
  }
}
protected class MFVec2f290 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2986f,0.2114f,0.2726f,0.2114f,0.3201f,0.2114f,0.3415f,0.2114f,0.2466f,0.2114f,0.2979f,0.2417f,0.2726f,0.2417f,0.3197f,0.2417f,0.3418f,0.2417f,0.2473f,0.2417f,0.2979f,0.3018f,0.2726f,0.3018f,0.3197f,0.3018f,0.3418f,0.3018f,0.2473f,0.3018f,0.2978f,0.3276f,0.2726f,0.3276f,0.3197f,0.3276f,0.3419f,0.3276f,0.2474f,0.3276f,0.2932f,0.2834f,0.2689f,0.2834f,0.316f,0.2834f,0.3322f,0.2834f,0.245f,0.2834f,0.2251f,0.2114f,0.2255f,0.2417f,0.2255f,0.2417f,0.2255f,0.3018f,0.2255f,0.3018f,0.2255f,0.3276f,0.2255f,0.3276f,0.2159f,0.2834f,0.4315f,0.6736f,0.442f,0.6736f,0.3947f,0.6736f,0.4041f,0.6736f,0.418f,0.6736f,0.4296f,0.6167f,0.4409f,0.6167f,0.4415f,0.6485f,0.4303f,0.6485f,0.3965f,0.6167f,0.3953f,0.6485f,0.4047f,0.6167f,0.4053f,0.6485f,0.4189f,0.6167f,0.418f,0.6485f,0.4415f,0.6706f,0.4306f,0.6706f,0.395f,0.6706f,0.4051f,0.6706f,0.4182f,0.6706f,0.3746f,0.6736f,0.3851f,0.6736f,0.384f,0.6167f,0.3845f,0.6485f,0.3845f,0.6485f,0.3846f,0.6706f,0.3846f,0.6706f,0.3851f,0.6736f,0.3481f,0.2114f});
  }
}
protected class MFFloat291 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat292 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32293 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1});
  }
}
protected class MFInt32294 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {26,25,2,-1,26,2,3,-1,4,26,3,-1,0,5,6,-1,6,1,0,-1,27,28,7,-1,7,2,27,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,29,30,12,-1,12,7,29,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,31,32,17,-1,17,12,31,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,34,-1,23,34,33,-1,24,23,33,-1,21,16,15,-1,15,20,21,-1,22,17,35,-1,35,36,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1});
  }
}
protected class MFVec3f295 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.215f,0.3047f,-1.152f,-1.155f,0.2966f,-0.2588f,-0.6199f,0.3013f,1.04f,0.6505f,0.3122f,0.9491f,0.9008f,0.3143f,-0.4054f,-0.1442f,-0.8448f,-1.625f,-1.472f,-0.8561f,-0.4271f,-0.7164f,-0.8496f,1.625f,1.079f,-0.8342f,1.482f,1.433f,-0.8312f,-0.6588f,-0.1328f,-3.5f,-1.607f,-1.551f,-3.513f,-0.4225f,-0.781f,-2.925f,1.61f,1.136f,-2.909f,1.468f,1.551f,-3.486f,-0.6519f,-0.0592f,-8.713f,-1.437f,-1.093f,-8.722f,-0.1279f,-0.5047f,-8.716f,1.51f,0.8932f,-8.704f,1.377f,1.169f,-8.702f,-0.3428f,-0.0092f,-9.336f,-0.8855f,-0.7154f,-9.342f,0.0084f,-0.3135f,-9.339f,1.043f,0.6412f,-9.331f,0.9519f,0.8292f,-9.329f,-0.1383f});
  }
}
protected class MFVec2f296 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4222f,0.6201f,0.4327f,0.6201f,0.3884f,0.6201f,0.3987f,0.6201f,0.4103f,0.6201f,0.4213f,0.6265f,0.4321f,0.6265f,0.3894f,0.6265f,0.399f,0.6265f,0.4105f,0.6265f,0.4214f,0.6413f,0.4323f,0.6413f,0.389f,0.6381f,0.3992f,0.6381f,0.4103f,0.6413f,0.4213f,0.6705f,0.4336f,0.6705f,0.3899f,0.6705f,0.3981f,0.6705f,0.4094f,0.6705f,0.4215f,0.674f,0.4346f,0.674f,0.3899f,0.674f,0.398f,0.674f,0.4083f,0.674f,0.3787f,0.6201f,0.3682f,0.6201f,0.3787f,0.6201f,0.3782f,0.6265f,0.3782f,0.6265f,0.3783f,0.6413f,0.3783f,0.6413f,0.3796f,0.6705f,0.3676f,0.674f,0.3806f,0.674f,0.3796f,0.6705f,0.3806f,0.674f});
  }
}
protected class MFFloat297 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat298 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32299 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {36,41,38,-1,38,37,36,-1,44,54,45,-1,31,30,53,-1,53,4,31,-1,6,7,11,-1,11,10,6,-1,11,32,33,-1,33,10,11,-1,34,11,7,-1,7,24,34,-1,13,27,15,-1,15,17,13,-1,25,35,22,-1,30,20,5,-1,13,32,11,-1,11,34,13,-1,23,29,28,-1,28,22,23,-1,17,15,14,-1,14,16,17,-1,18,19,53,-1,53,5,18,-1,9,17,16,-1,16,8,9,-1,14,15,43,-1,43,42,14,-1,21,33,8,-1,8,16,21,-1,21,23,22,-1,22,35,21,-1,39,38,41,-1,41,40,39,-1,26,24,20,-1,27,26,20,-1,20,12,27,-1,3,43,12,-1,12,30,3,-1,0,25,28,-1,28,54,0,-1,13,17,9,-1,9,32,13,-1,28,29,31,-1,29,23,14,-1,14,42,29,-1,16,14,23,-1,23,21,16,-1,30,31,2,-1,2,3,30,-1,8,33,32,-1,32,9,8,-1,33,21,35,-1,35,10,33,-1,35,25,6,-1,6,10,35,-1,13,34,26,-1,26,27,13,-1,34,24,26,-1,1,46,47,-1,47,0,1,-1,25,0,47,-1,47,48,25,-1,25,48,49,-1,49,6,25,-1,6,49,50,-1,50,7,6,-1,24,7,50,-1,50,51,24,-1,24,51,46,-1,46,1,24,-1,2,42,43,-1,43,3,2,-1,15,27,12,-1,12,43,15,-1,29,42,2,-1,2,31,29,-1,18,5,52,-1,52,44,18,-1,28,25,22,-1,18,44,45,-1,45,19,18,-1,1,44,52,-1,52,24,1,-1,45,28,4,-1,28,31,4,-1,45,4,19,-1,37,47,46,-1,46,36,37,-1,48,47,37,-1,37,38,48,-1,39,49,48,-1,48,38,39,-1,40,50,49,-1,49,39,40,-1,51,50,40,-1,40,41,51,-1,36,46,51,-1,51,41,36,-1,24,52,20,-1,52,5,20,-1,53,30,5,-1,53,19,4,-1,54,28,45,-1,44,1,0,-1,0,54,44,-1,20,30,12,-1});
  }
}
protected class MFInt32300 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,4,6,5,-1,8,7,10,-1,10,9,8,-1,12,11,14,-1,14,13,12,-1,14,16,15,-1,15,13,14,-1,17,14,11,-1,11,18,17,-1,20,19,22,-1,22,21,20,-1,23,25,24,-1,7,27,26,-1,20,16,14,-1,14,17,20,-1,28,30,29,-1,29,24,28,-1,21,22,32,-1,32,31,21,-1,33,34,10,-1,10,26,33,-1,35,21,31,-1,31,36,35,-1,32,22,38,-1,38,37,32,-1,39,15,36,-1,36,31,39,-1,39,28,24,-1,24,25,39,-1,40,2,3,-1,3,41,40,-1,42,18,27,-1,19,42,27,-1,27,43,19,-1,44,38,43,-1,43,7,44,-1,45,23,29,-1,29,6,45,-1,20,21,35,-1,35,16,20,-1,29,30,8,-1,30,28,32,-1,32,37,30,-1,31,32,28,-1,28,39,31,-1,7,8,46,-1,46,44,7,-1,36,15,16,-1,16,35,36,-1,15,39,25,-1,25,13,15,-1,25,23,12,-1,12,13,25,-1,20,17,42,-1,42,19,20,-1,17,18,42,-1,47,49,48,-1,48,45,47,-1,23,45,48,-1,48,50,23,-1,23,50,51,-1,51,12,23,-1,12,51,52,-1,52,11,12,-1,18,11,52,-1,52,53,18,-1,18,53,49,-1,49,47,18,-1,46,37,38,-1,38,44,46,-1,22,19,43,-1,43,38,22,-1,30,37,46,-1,46,8,30,-1,33,26,54,-1,54,4,33,-1,29,23,24,-1,33,4,5,-1,5,34,33,-1,47,4,54,-1,54,18,47,-1,5,29,9,-1,29,8,9,-1,5,9,34,-1,1,48,49,-1,49,0,1,-1,50,48,1,-1,1,2,50,-1,40,51,50,-1,50,2,40,-1,41,52,51,-1,51,40,41,-1,53,52,41,-1,41,3,53,-1,0,49,53,-1,53,3,0,-1,18,54,27,-1,54,26,27,-1,10,7,26,-1,10,34,9,-1,6,29,5,-1,4,47,45,-1,45,6,4,-1,27,7,43,-1});
  }
}
protected class MFVec3f301 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.615f,-0.6885f,1.418f,0.2519f,-0.7698f,1.606f,-0.894f,-4.14f,1.405f,-0.2357f,-4.221f,1.472f,-0.7106f,-2.848f,1.537f,0.2913f,-2.795f,1.561f,-0.3511f,-0.9723f,-1.085f,0.332f,-1.036f,-1.083f,-0.6255f,-3.82f,-1.576f,-0.076f,-3.93f,-1.587f,-0.5517f,-2.055f,-1.417f,0.1089f,-2.163f,-1.46f,-0.0149f,-3.564f,0.866f,0.0687f,-3.436f,-0.8707f,-0.9147f,-4.192f,-0.1153f,-0.2445f,-4.253f,-0.1554f,-0.7883f,-4.028f,-0.9461f,-0.1878f,-4.111f,-0.9619f,0.1749f,-2.558f,2.351f,-0.5105f,-2.795f,2.344f,0.1613f,-2.264f,1.005f,-0.8473f,-3.286f,-0.8304f,-0.9399f,-2.17f,-0.0115f,-0.979f,-3.369f,-0.052f,0.4715f,-0.9186f,0.2017f,-0.7286f,-0.8328f,0.1541f,0.1459f,-2.365f,0.1498f,0.0501f,-3.575f,-0.0433f,-0.969f,-2.127f,0.9718f,-0.9825f,-3.348f,0.8866f,-0.0909f,-3.383f,1.556f,-0.8371f,-3.169f,1.547f,-0.041f,-3.318f,-1.568f,-0.5921f,-3.194f,-1.578f,0.2264f,-2.304f,-0.7602f,-0.8375f,-2.137f,-0.8044f,0.2818f,0.1713f,1.187f,-0.2277f,0.2301f,1.179f,-0.2277f,0.4881f,0.2572f,-0.1331f,0.2707f,-0.6889f,0.3764f,0.2118f,-0.6809f,0.4614f,0.4054f,0.2565f,-0.9242f,-4.241f,0.7847f,-0.2647f,-4.324f,0.8047f,0.3043f,-1.534f,2.164f,-0.8425f,-1.789f,2.123f,0.201f,-0.4603f,1.254f,-0.3856f,-0.405f,1.248f,-0.4965f,-0.283f,0.2553f,-0.2563f,-0.4079f,-0.7647f,0.3314f,-0.4586f,-0.758f,0.3822f,-0.3913f,0.2697f,0.4485f,-1.891f,1.52f,-0.3893f,-2.936f,1.555f,-0.7623f,-1.12f,1.731f});
  }
}
protected class MFVec2f302 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4538f,0.6821f,0.4536f,0.6827f,0.4366f,0.6851f,0.4365f,0.6843f,0.4719f,0.6661f,0.4711f,0.6637f,0.4639f,0.67f,0.4606f,0.6487f,0.4605f,0.6507f,0.4603f,0.6538f,0.4606f,0.6529f,0.4117f,0.6708f,0.4117f,0.6714f,0.4055f,0.6612f,0.4047f,0.6602f,0.4025f,0.6505f,0.4027f,0.6493f,0.4177f,0.6589f,0.4355f,0.6719f,0.431f,0.6469f,0.4157f,0.6482f,0.414f,0.6419f,0.4289f,0.6406f,0.4346f,0.6727f,0.4316f,0.6601f,0.4169f,0.6604f,0.4607f,0.6543f,0.4504f,0.6593f,0.4308f,0.6489f,0.4498f,0.6605f,0.4482f,0.6491f,0.4143f,0.6427f,0.4297f,0.6411f,0.4754f,0.6565f,0.4752f,0.6543f,0.4024f,0.6436f,0.4026f,0.6446f,0.4463f,0.6407f,0.4467f,0.6399f,0.4164f,0.6496f,0.419f,0.6831f,0.4192f,0.6825f,0.4346f,0.6583f,0.4478f,0.647f,0.4591f,0.6409f,0.4581f,0.6741f,0.4578f,0.6416f,0.4616f,0.6733f,0.4549f,0.6767f,0.455f,0.6762f,0.4365f,0.6779f,0.4176f,0.6767f,0.4177f,0.6762f,0.4368f,0.6768f,0.46f,0.6628f});
  }
}
protected class MFFloat303 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat304 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32305 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
protected class MFInt32306 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
protected class MFVec3f307 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.375f,-0.9214f,0.322f,0.212f,-1.009f,0.0858f,0.1385f,-0.9095f,0.5036f,-0.0245f,-0.9973f,0.2674f,0.533f,-0.8014f,0.1471f,0.4779f,-0.7267f,0.4605f,0.2413f,-0.7148f,0.6421f,-0.0584f,-0.7717f,0.6012f,-0.2213f,-0.8595f,0.365f,-0.1662f,-0.9342f,0.0516f,0.0704f,-0.9461f,-0.13f,0.3701f,-0.8892f,-0.0891f,0.4847f,-0.0791f,-0.0791f,0.4228f,0.0048f,0.2724f,0.1414f,0.0189f,0.4885f,-0.1948f,-0.0449f,0.4426f,-0.3887f,-0.1493f,0.1616f,-0.3268f,-0.2331f,-0.1899f,-0.0453f,-0.2473f,-0.406f,0.2908f,-0.1835f,-0.3601f,0.5058f,0.0372f,-0.1235f,0.4385f,0.1283f,0.2586f,0.1325f,0.1437f,0.4936f,-0.233f,0.0743f,0.4437f,-0.4438f,-0.0392f,0.1381f,-0.3765f,-0.1303f,-0.244f,-0.0705f,-0.1457f,-0.479f,0.2949f,-0.0763f,-0.4291f,0.3497f,0.1392f,-0.1192f,0.3021f,0.2036f,0.1511f,0.0857f,0.2145f,0.3172f,-0.1727f,0.1654f,0.2819f,-0.3218f,0.0852f,0.0659f,-0.2742f,0.0207f,-0.2044f,-0.0578f,0.0098f,-0.3705f,0.2006f,0.0589f,-0.3352f,0.0069f,0.159f,-0.0407f});
  }
}
protected class MFVec2f308 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.469f,0.6546f,0.4646f,0.6538f,0.4679f,0.6539f,0.4723f,0.6548f,0.4715f,0.6565f,0.4657f,0.6558f,0.4749f,0.6566f,0.4741f,0.6561f,0.4697f,0.6552f,0.4639f,0.6545f,0.4606f,0.6544f,0.4613f,0.655f,0.468f,0.6634f,0.4615f,0.6626f,0.472f,0.6635f,0.4712f,0.6629f,0.466f,0.6619f,0.4595f,0.6611f,0.4555f,0.661f,0.4563f,0.6616f,0.4678f,0.6645f,0.4607f,0.6637f,0.4721f,0.6647f,0.4712f,0.664f,0.4655f,0.6629f,0.4585f,0.6621f,0.4541f,0.6619f,0.455f,0.6626f,0.4658f,0.6652f,0.4608f,0.6646f,0.4689f,0.6653f,0.4682f,0.6649f,0.4642f,0.6641f,0.4592f,0.6635f,0.4561f,0.6634f,0.4568f,0.6639f,0.4622f,0.6648f});
  }
}
protected class MFFloat309 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat310 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32311 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
protected class MFInt32312 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
protected class MFVec3f313 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.5258f,-1.001f,0.2196f,0.3901f,-1.074f,0.023f,0.3376f,-1.029f,0.3799f,0.2019f,-1.102f,0.1833f,0.6244f,-0.8415f,0.0751f,0.585f,-0.8078f,0.3428f,0.3968f,-0.8361f,0.503f,0.1539f,-0.912f,0.4758f,0.0182f,-0.985f,0.2792f,0.0576f,-1.019f,0.0115f,0.2458f,-0.9905f,-0.1487f,0.4887f,-0.9145f,-0.1215f,0.4357f,-0.0607f,-0.0712f,0.3915f,-0.0229f,0.229f,0.1676f,-0.0565f,0.4196f,-0.1048f,-0.1417f,0.3891f,-0.2662f,-0.2286f,0.1552f,-0.222f,-0.2663f,-0.1451f,0.0018f,-0.2328f,-0.3357f,0.2743f,-0.1476f,-0.3051f,0.4293f,0.0682f,-0.1026f,0.3812f,0.1092f,0.2242f,0.1376f,0.0727f,0.4317f,-0.1589f,-0.02f,0.3984f,-0.3346f,-0.1146f,0.1438f,-0.2865f,-0.1556f,-0.1829f,-0.0429f,-0.1191f,-0.3904f,0.2536f,-0.0264f,-0.3572f,0.2801f,0.1629f,-0.0879f,0.2461f,0.1919f,0.1432f,0.0738f,0.1661f,0.2899f,-0.1359f,0.1005f,0.2664f,-0.2601f,0.0337f,0.0864f,-0.2261f,0.0046f,-0.1447f,-0.0538f,0.0304f,-0.2914f,0.1558f,0.096f,-0.2679f,-0.0055f,0.1486f,-0.0096f});
  }
}
protected class MFVec2f314 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4716f,0.6458f,0.468f,0.6451f,0.471f,0.6448f,0.4746f,0.6455f,0.4739f,0.6476f,0.469f,0.6473f,0.4769f,0.6473f,0.4764f,0.6466f,0.4727f,0.6459f,0.4678f,0.6456f,0.4648f,0.6459f,0.4653f,0.6466f,0.4718f,0.655f,0.4662f,0.6546f,0.4753f,0.6546f,0.4748f,0.6538f,0.4704f,0.653f,0.4649f,0.6527f,0.4613f,0.653f,0.4619f,0.6538f,0.4717f,0.6562f,0.4657f,0.6558f,0.4756f,0.6559f,0.475f,0.655f,0.4702f,0.6541f,0.4642f,0.6537f,0.4603f,0.654f,0.4609f,0.6549f,0.4702f,0.657f,0.4659f,0.6567f,0.4729f,0.6567f,0.4725f,0.6561f,0.4692f,0.6555f,0.4649f,0.6552f,0.4622f,0.6555f,0.4626f,0.6561f,0.4674f,0.6566f});
  }
}
protected class MFFloat315 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat316 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32317 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
  }
}
protected class MFInt32318 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
  }
}
protected class MFVec3f319 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.5817f,-0.8003f,0.0727f,0.4584f,-0.8658f,-0.106f,0.4372f,-0.8552f,0.2109f,0.314f,-0.9207f,0.0322f,0.6359f,-0.6464f,-0.0377f,0.62f,-0.6384f,0.2f,0.4756f,-0.6933f,0.3382f,0.2748f,-0.7836f,0.3078f,0.1516f,-0.8492f,0.1291f,0.1675f,-0.8572f,-0.1085f,0.3119f,-0.8023f,-0.2467f,0.5127f,-0.712f,-0.2163f,0.374f,-0.0036f,-0.0838f,0.3562f,0.0054f,0.1827f,0.1843f,-0.0599f,0.3471f,-0.0408f,-0.1612f,0.313f,-0.1875f,-0.2392f,0.1004f,-0.1697f,-0.2482f,-0.1661f,0.0022f,-0.1829f,-0.3305f,0.2274f,-0.0816f,-0.2964f,0.2142f,0.1671f,-0.0744f,0.2005f,0.174f,0.1306f,0.0683f,0.1238f,0.257f,-0.1048f,0.0459f,0.2308f,-0.2176f,-0.0141f,0.0673f,-0.2039f,-0.021f,-0.1376f,-0.0717f,0.0292f,-0.264f,0.1014f,0.1072f,-0.2378f,-0.0214f,0.1175f,-0.006f});
  }
}
protected class MFVec2f320 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4723f,0.6394f,0.469f,0.6388f,0.4716f,0.6383f,0.4749f,0.6389f,0.4747f,0.6409f,0.4703f,0.6408f,0.4773f,0.6404f,0.4767f,0.6395f,0.4734f,0.6389f,0.469f,0.6389f,0.4664f,0.6394f,0.467f,0.6402f,0.4744f,0.647f,0.4694f,0.6469f,0.4774f,0.6463f,0.4768f,0.6454f,0.4729f,0.6447f,0.4679f,0.6446f,0.4649f,0.6452f,0.4655f,0.6461f,0.4734f,0.6485f,0.4696f,0.6485f,0.4758f,0.6481f,0.4753f,0.6473f,0.4722f,0.6468f,0.4684f,0.6467f,0.4661f,0.6472f,0.4666f,0.6479f,0.4709f,0.648f});
  }
}
protected class MFFloat321 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat322 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32323 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
protected class MFInt32324 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
protected class MFVec3f325 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0229f,-1.485f,0.1659f,0.0277f,-1.493f,-0.0662f,-0.2213f,-1.467f,0.1625f,-0.2166f,-1.475f,-0.0696f,0.2194f,-1.321f,0.162f,0.0326f,-1.302f,0.3335f,-0.2116f,-1.284f,0.3301f,-0.3912f,-1.276f,0.1535f,-0.3864f,-1.284f,-0.0786f,-0.1997f,-1.303f,-0.2501f,0.0446f,-1.321f,-0.2467f,0.2242f,-1.329f,-0.0701f,0.3384f,-0.3382f,0.1488f,0.1289f,-0.3166f,0.3412f,-0.1617f,-0.2951f,0.3371f,-0.3631f,-0.2862f,0.139f,-0.3574f,-0.2953f,-0.1371f,-0.148f,-0.3169f,-0.3295f,0.1426f,-0.3384f,-0.3254f,0.3441f,-0.3473f,-0.1273f,0.3796f,-0.1843f,0.1553f,0.1523f,-0.1608f,0.364f,-0.1629f,-0.1375f,0.3596f,-0.3814f,-0.1279f,0.1446f,-0.3753f,-0.1377f,-0.1549f,-0.148f,-0.1611f,-0.3636f,0.1672f,-0.1845f,-0.3592f,0.3858f,-0.1941f,-0.1442f,0.2808f,-0.0217f,0.1042f,0.1201f,-0.0051f,0.2518f,-0.1029f,0.0114f,0.2486f,-0.2574f,0.0182f,0.0967f,-0.253f,0.0113f,-0.1151f,-0.0923f,-0.0053f,-0.2627f,0.1306f,-0.0218f,-0.2596f,0.2851f,-0.0286f,-0.1076f,0.0187f,0.0593f,-0.0078f});
  }
}
protected class MFVec2f326 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.453f,0.6387f,0.4487f,0.6387f,0.4487f,0.6388f,0.453f,0.6389f,0.4561f,0.6405f,0.453f,0.6403f,0.4561f,0.6406f,0.4528f,0.6407f,0.4485f,0.6406f,0.4453f,0.6405f,0.4454f,0.6403f,0.4487f,0.6402f,0.4563f,0.6497f,0.4527f,0.6495f,0.4562f,0.6499f,0.4525f,0.65f,0.4474f,0.6499f,0.4439f,0.6497f,0.4439f,0.6495f,0.4476f,0.6494f,0.4567f,0.6512f,0.4528f,0.651f,0.4566f,0.6514f,0.4526f,0.6515f,0.4471f,0.6514f,0.4432f,0.6512f,0.4433f,0.651f,0.4473f,0.6509f,0.4546f,0.6527f,0.4519f,0.6525f,0.4546f,0.6528f,0.4518f,0.6529f,0.4478f,0.6528f,0.4451f,0.6527f,0.4452f,0.6525f,0.448f,0.6524f,0.4498f,0.6533f});
  }
}
protected class MFFloat327 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat328 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32329 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
protected class MFInt32330 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
protected class MFVec3f331 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2499f,-1.331f,0.1644f,0.2541f,-1.339f,-0.0655f,0.0349f,-1.351f,0.1633f,0.0391f,-1.359f,-0.0666f,0.3958f,-1.152f,0.159f,0.2314f,-1.162f,0.3307f,0.0165f,-1.182f,0.3296f,-0.1416f,-1.203f,0.1563f,-0.1374f,-1.21f,-0.0736f,0.0269f,-1.201f,-0.2453f,0.2419f,-1.181f,-0.2442f,0.4f,-1.16f,-0.0709f,0.3504f,-0.2375f,0.1465f,0.166f,-0.2482f,0.3391f,-0.0897f,-0.2722f,0.3377f,-0.267f,-0.2955f,0.1434f,-0.2621f,-0.3044f,-0.1302f,-0.0777f,-0.2937f,-0.3227f,0.1781f,-0.2697f,-0.3214f,0.3554f,-0.2464f,-0.127f,0.3661f,-0.0905f,0.1542f,0.1642f,-0.1021f,0.365f,-0.1159f,-0.1284f,0.3636f,-0.3101f,-0.1539f,0.1508f,-0.3046f,-0.1637f,-0.1488f,-0.1027f,-0.152f,-0.3596f,0.1774f,-0.1258f,-0.3581f,0.3715f,-0.1003f,-0.1453f,0.2544f,0.0426f,0.1044f,0.1117f,0.0344f,0.2535f,-0.0864f,0.0158f,0.2525f,-0.2237f,-0.0022f,0.102f,-0.2198f,-0.0091f,-0.1098f,-0.077f,-0.0009f,-0.2589f,0.121f,0.0177f,-0.2579f,0.2583f,0.0357f,-0.1074f,0.0117f,0.0763f,-0.005f});
  }
}
protected class MFVec2f332 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.454f,0.6279f,0.4498f,0.6279f,0.4498f,0.6277f,0.454f,0.6277f,0.4571f,0.6295f,0.4539f,0.6296f,0.4571f,0.6293f,0.4539f,0.6291f,0.4496f,0.6291f,0.4464f,0.6292f,0.4465f,0.6294f,0.4497f,0.6295f,0.4573f,0.6381f,0.4537f,0.6382f,0.4572f,0.6379f,0.4536f,0.6377f,0.4486f,0.6376f,0.445f,0.6377f,0.445f,0.6379f,0.4486f,0.6381f,0.4578f,0.6395f,0.4538f,0.6396f,0.4577f,0.6392f,0.4538f,0.639f,0.4482f,0.6389f,0.4443f,0.639f,0.4444f,0.6393f,0.4483f,0.6395f,0.4557f,0.6408f,0.4529f,0.6408f,0.4557f,0.6406f,0.4529f,0.6404f,0.449f,0.6404f,0.4462f,0.6404f,0.4462f,0.6406f,0.449f,0.6408f,0.4509f,0.6412f});
  }
}
protected class MFFloat333 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat334 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32335 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
  }
}
protected class MFInt32336 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
  }
}
protected class MFVec3f337 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.4479f,-1.125f,0.1554f,0.4519f,-1.132f,-0.0632f,0.2499f,-1.18f,0.1557f,0.2539f,-1.187f,-0.0629f,0.5544f,-0.9319f,0.1491f,0.4029f,-0.9674f,0.3134f,0.2049f,-1.022f,0.3137f,0.0594f,-1.068f,0.1499f,0.0634f,-1.075f,-0.0687f,0.2149f,-1.04f,-0.2329f,0.4129f,-0.9852f,-0.2333f,0.5584f,-0.939f,-0.0695f,0.3333f,-0.0803f,0.1251f,0.1781f,-0.1166f,0.2933f,-0.037f,-0.1758f,0.2937f,-0.186f,-0.2231f,0.1259f,-0.1817f,-0.2308f,-0.1116f,-0.0265f,-0.1945f,-0.2799f,0.1886f,-0.1353f,-0.2802f,0.3376f,-0.088f,-0.1125f,0.2019f,0.1709f,0.088f,0.0815f,0.1427f,0.2185f,-0.0854f,0.0967f,0.2188f,-0.2011f,0.06f,0.0887f,-0.1977f,0.054f,-0.0957f,-0.0773f,0.0822f,-0.2262f,0.0896f,0.1281f,-0.2265f,0.2053f,0.1648f,-0.0963f,-0.0132f,0.1679f,-0.006f});
  }
}
protected class MFVec2f338 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4546f,0.6191f,0.4506f,0.619f,0.4506f,0.6185f,0.4546f,0.6186f,0.4575f,0.6206f,0.4545f,0.6209f,0.4576f,0.6201f,0.4545f,0.6196f,0.4505f,0.6196f,0.4474f,0.6199f,0.4474f,0.6204f,0.4505f,0.6209f,0.4572f,0.6286f,0.4541f,0.6289f,0.4572f,0.628f,0.4541f,0.6276f,0.4497f,0.6275f,0.4466f,0.6279f,0.4465f,0.6284f,0.4497f,0.6289f,0.4558f,0.631f,0.4534f,0.6313f,0.4558f,0.6306f,0.4534f,0.6302f,0.45f,0.6302f,0.4475f,0.6305f,0.4475f,0.6309f,0.45f,0.6312f,0.4516f,0.6313f});
  }
}
protected class MFFloat339 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat340 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32341 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
  }
}
protected class MFInt32342 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
  }
}
protected class MFVec3f343 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.6187f,-1.071f,0.1411f,0.6221f,-1.077f,-0.0485f,0.4578f,-1.147f,0.1426f,0.4613f,-1.153f,-0.047f,0.6714f,-0.8704f,0.1341f,0.5482f,-0.923f,0.2774f,0.3873f,-0.9993f,0.2789f,0.2693f,-1.061f,0.1378f,0.2727f,-1.067f,-0.0518f,0.396f,-1.015f,-0.1951f,0.5568f,-0.9385f,-0.1966f,0.6749f,-0.8765f,-0.0555f,0.3236f,-0.0612f,0.1191f,0.1854f,-0.1202f,0.2799f,-0.006f,-0.211f,0.2816f,-0.1384f,-0.2805f,0.1233f,-0.1343f,-0.2879f,-0.1023f,0.004f,-0.2288f,-0.263f,0.1953f,-0.138f,-0.2647f,0.3277f,-0.0685f,-0.1065f,0.2135f,0.0836f,0.0963f,0.0945f,0.035f,0.233f,-0.0723f,-0.0325f,0.2317f,-0.1865f,-0.0807f,0.0968f,-0.1843f,-0.0816f,-0.0912f,-0.0691f,-0.0336f,-0.2249f,0.0937f,0.0356f,-0.2277f,0.2116f,0.0844f,-0.0958f,-0.0314f,0.0875f,-0.0035f});
  }
}
protected class MFVec2f344 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.455f,0.6109f,0.4515f,0.6108f,0.4515f,0.6101f,0.455f,0.6102f,0.4575f,0.6123f,0.4549f,0.6128f,0.4576f,0.6116f,0.455f,0.611f,0.4514f,0.6109f,0.4488f,0.6114f,0.4488f,0.6121f,0.4514f,0.6127f,0.4576f,0.6198f,0.4546f,0.6204f,0.4576f,0.619f,0.4547f,0.6183f,0.4505f,0.6182f,0.4475f,0.6188f,0.4475f,0.6197f,0.4504f,0.6203f,0.4567f,0.6213f,0.4542f,0.6217f,0.4567f,0.6206f,0.4542f,0.6202f,0.4507f,0.6202f,0.4482f,0.6206f,0.4482f,0.6213f,0.4506f,0.6217f,0.4523f,0.6218f});
  }
}
protected class MFFloat345 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat346 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32347 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
protected class MFInt32348 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
protected class MFVec3f349 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0157f,-1.601f,0.0972f,-0.0217f,-1.599f,-0.1348f,-0.2598f,-1.581f,0.1076f,-0.2658f,-1.578f,-0.1245f,0.183f,-1.427f,0.091f,0.0045f,-1.414f,0.2728f,-0.2395f,-1.393f,0.2832f,-0.4271f,-1.376f,0.1169f,-0.4331f,-1.374f,-0.1151f,-0.2546f,-1.387f,-0.2969f,-0.0105f,-1.408f,-0.3073f,0.177f,-1.425f,-0.1411f,0.3164f,-0.3793f,0.1197f,0.1161f,-0.3643f,0.3236f,-0.1742f,-0.3403f,0.3359f,-0.3846f,-0.3213f,0.1495f,-0.3918f,-0.3185f,-0.1266f,-0.1915f,-0.3335f,-0.3306f,0.0988f,-0.3575f,-0.3429f,0.3092f,-0.3765f,-0.1564f,0.3602f,-0.2157f,0.1315f,0.143f,-0.1995f,0.3527f,-0.172f,-0.1734f,0.3661f,-0.4003f,-0.1528f,0.1638f,-0.408f,-0.1498f,-0.1357f,-0.1908f,-0.166f,-0.357f,0.1242f,-0.1921f,-0.3703f,0.3524f,-0.2126f,-0.168f,0.2615f,-0.0399f,0.0937f,0.1079f,-0.0284f,0.2501f,-0.1148f,-0.01f,0.2596f,-0.2762f,0.0046f,0.1165f,-0.2817f,0.0068f,-0.0952f,-0.1281f,-0.0047f,-0.2517f,0.0946f,-0.0232f,-0.2611f,0.256f,-0.0377f,-0.1181f,-0.0044f,0.0523f,-0.0002f});
  }
}
protected class MFVec2f350 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4371f,0.6382f,0.4328f,0.6382f,0.4329f,0.6384f,0.4372f,0.6384f,0.4403f,0.64f,0.4369f,0.6398f,0.4405f,0.6401f,0.4374f,0.6403f,0.4331f,0.6403f,0.4298f,0.6402f,0.4296f,0.64f,0.4326f,0.6398f,0.4413f,0.6498f,0.4375f,0.6497f,0.4415f,0.65f,0.438f,0.6502f,0.4329f,0.6502f,0.4291f,0.6501f,0.4289f,0.6499f,0.4324f,0.6497f,0.4418f,0.6514f,0.4377f,0.6512f,0.442f,0.6516f,0.4383f,0.6518f,0.4327f,0.6518f,0.4286f,0.6517f,0.4284f,0.6514f,0.4321f,0.6512f,0.4399f,0.653f,0.437f,0.6529f,0.4401f,0.6531f,0.4374f,0.6533f,0.4335f,0.6533f,0.4306f,0.6532f,0.4304f,0.653f,0.4331f,0.6529f,0.4352f,0.6537f});
  }
}
protected class MFFloat351 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat352 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32353 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
protected class MFInt32354 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
protected class MFVec3f355 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2259f,-1.448f,0.0923f,0.2194f,-1.446f,-0.1376f,0.0106f,-1.469f,0.1016f,0.0041f,-1.467f,-0.1283f,0.3742f,-1.258f,0.088f,0.2177f,-1.275f,0.2673f,0.0024f,-1.296f,0.2766f,-0.1639f,-1.31f,0.1112f,-0.1704f,-1.307f,-0.1187f,-0.0138f,-1.29f,-0.2981f,0.2014f,-1.269f,-0.3073f,0.3677f,-1.255f,-0.1419f,0.3422f,-0.2825f,0.1227f,0.1666f,-0.302f,0.3239f,-0.0895f,-0.3267f,0.3349f,-0.2761f,-0.3422f,0.1493f,-0.2838f,-0.3394f,-0.1242f,-0.1082f,-0.3199f,-0.3253f,0.1479f,-0.2952f,-0.3364f,0.3345f,-0.2797f,-0.1508f,0.3605f,-0.1263f,0.1367f,0.1681f,-0.1476f,0.357f,-0.1123f,-0.1747f,0.3691f,-0.3166f,-0.1917f,0.1659f,-0.3251f,-0.1886f,-0.1336f,-0.1327f,-0.1672f,-0.3539f,0.1477f,-0.1401f,-0.366f,0.352f,-0.1232f,-0.1627f,0.2486f,0.0181f,0.0994f,0.1126f,0.003f,0.2552f,-0.0857f,-0.0161f,0.2638f,-0.2302f,-0.0281f,0.1201f,-0.2362f,-0.0259f,-0.0917f,-0.1002f,-0.0108f,-0.2475f,0.0981f,0.0083f,-0.256f,0.2426f,0.0203f,-0.1123f,0.0014f,0.0597f,0.0048f});
  }
}
protected class MFVec2f356 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4369f,0.6266f,0.4327f,0.6266f,0.4328f,0.6264f,0.4371f,0.6264f,0.4402f,0.6282f,0.4368f,0.6283f,0.4403f,0.628f,0.4373f,0.6279f,0.433f,0.6279f,0.4297f,0.628f,0.4295f,0.6282f,0.4326f,0.6284f,0.4412f,0.6373f,0.4375f,0.6375f,0.4414f,0.6371f,0.438f,0.637f,0.4329f,0.637f,0.4292f,0.6372f,0.429f,0.6374f,0.4324f,0.6375f,0.4418f,0.6388f,0.4378f,0.639f,0.4421f,0.6385f,0.4383f,0.6384f,0.4327f,0.6384f,0.4287f,0.6386f,0.4284f,0.6389f,0.4322f,0.639f,0.4399f,0.6402f,0.4371f,0.6403f,0.4401f,0.64f,0.4374f,0.6399f,0.4335f,0.6399f,0.4306f,0.6401f,0.4305f,0.6402f,0.4331f,0.6404f,0.4353f,0.6407f});
  }
}
protected class MFFloat357 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat358 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32359 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
  }
}
protected class MFInt32360 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
  }
}
protected class MFVec3f361 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.4389f,-1.268f,0.089f,0.4327f,-1.265f,-0.1296f,0.2401f,-1.325f,0.0971f,0.234f,-1.323f,-0.1215f,0.5481f,-1.062f,0.0865f,0.4036f,-1.106f,0.2566f,0.2049f,-1.164f,0.2647f,0.0512f,-1.205f,0.1068f,0.045f,-1.203f,-0.1118f,0.1894f,-1.158f,-0.2818f,0.3882f,-1.101f,-0.2899f,0.5419f,-1.059f,-0.132f,0.3388f,-0.1526f,0.1159f,0.1909f,-0.1984f,0.2901f,-0.025f,-0.2608f,0.2989f,-0.1825f,-0.3032f,0.1372f,-0.1892f,-0.3008f,-0.1003f,-0.0412f,-0.2549f,-0.2744f,0.1747f,-0.1925f,-0.2833f,0.3321f,-0.1501f,-0.1216f,0.2096f,0.117f,0.0982f,0.0948f,0.0814f,0.2333f,-0.0727f,0.033f,0.2402f,-0.1949f,0.0001f,0.1147f,-0.2001f,0.002f,-0.0696f,-0.0853f,0.0376f,-0.2048f,0.0823f,0.086f,-0.2116f,0.2044f,0.1189f,-0.0861f,-0.0097f,0.1188f,0.0156f});
  }
}
protected class MFVec2f362 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4364f,0.617f,0.4323f,0.6171f,0.4325f,0.6165f,0.4365f,0.6165f,0.4395f,0.6186f,0.4363f,0.619f,0.4397f,0.618f,0.4367f,0.6176f,0.4327f,0.6176f,0.4295f,0.6181f,0.4294f,0.6186f,0.4323f,0.619f,0.4401f,0.6271f,0.4369f,0.6275f,0.4403f,0.6265f,0.4373f,0.6261f,0.4329f,0.6261f,0.4297f,0.6266f,0.4295f,0.6271f,0.4325f,0.6275f,0.4391f,0.6297f,0.4366f,0.6301f,0.4392f,0.6293f,0.4369f,0.629f,0.4335f,0.629f,0.431f,0.6293f,0.4308f,0.6298f,0.4331f,0.6301f,0.435f,0.6301f});
  }
}
protected class MFFloat363 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat364 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32365 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
  }
}
protected class MFInt32366 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
  }
}
protected class MFVec3f367 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.631f,-1.169f,0.0421f,0.6256f,-1.167f,-0.1475f,0.4691f,-1.25f,0.0483f,0.4637f,-1.248f,-0.1413f,0.6864f,-0.9557f,0.0421f,0.569f,-1.018f,0.1889f,0.4071f,-1.099f,0.1951f,0.2817f,-1.158f,0.0576f,0.2763f,-1.156f,-0.1319f,0.3937f,-1.094f,-0.2788f,0.5556f,-1.013f,-0.285f,0.681f,-0.9537f,-0.1474f,0.3504f,-0.0919f,0.0851f,0.2187f,-0.1616f,0.2498f,0.026f,-0.2579f,0.2572f,-0.1147f,-0.3243f,0.1029f,-0.121f,-0.322f,-0.1226f,0.0106f,-0.2523f,-0.2873f,0.2033f,-0.156f,-0.2946f,0.344f,-0.0896f,-0.1404f,0.2414f,0.0637f,0.0753f,0.128f,0.0061f,0.2155f,-0.0399f,-0.0652f,0.2197f,-0.161f,-0.1101f,0.0888f,-0.1675f,-0.1027f,-0.0988f,-0.0577f,-0.0458f,-0.2359f,0.106f,0.0275f,-0.2439f,0.2307f,0.0733f,-0.1162f,-0.0079f,0.0731f,-0.0112f});
  }
}
protected class MFVec2f368 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4356f,0.6082f,0.4321f,0.6082f,0.4322f,0.6074f,0.4357f,0.6074f,0.4383f,0.6096f,0.4356f,0.6102f,0.4384f,0.6088f,0.4359f,0.6083f,0.4324f,0.6083f,0.4296f,0.6089f,0.4295f,0.6096f,0.4321f,0.6102f,0.4394f,0.6176f,0.4364f,0.6183f,0.4396f,0.6167f,0.4367f,0.6161f,0.4325f,0.6161f,0.4295f,0.6168f,0.4293f,0.6177f,0.4322f,0.6183f,0.4388f,0.6192f,0.4362f,0.6198f,0.4389f,0.6186f,0.4364f,0.6181f,0.433f,0.6182f,0.4304f,0.6187f,0.4303f,0.6194f,0.4326f,0.6199f,0.4346f,0.6199f});
  }
}
protected class MFFloat369 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat370 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32371 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
protected class MFInt32372 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
protected class MFVec3f373 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.014f,-1.366f,0.0295f,0.0298f,-1.354f,-0.1885f,-0.2211f,-1.344f,0.0143f,-0.2053f,-1.332f,-0.2037f,0.205f,-1.209f,0.0528f,0.0169f,-1.202f,0.2049f,-0.2182f,-1.181f,0.1897f,-0.3826f,-1.156f,0.0148f,-0.3668f,-1.144f,-0.2032f,-0.1787f,-1.151f,-0.3553f,0.0564f,-1.172f,-0.3401f,0.2209f,-1.197f,-0.1652f,0.3293f,-0.2545f,0.1423f,0.1183f,-0.2468f,0.3129f,-0.1614f,-0.2216f,0.2949f,-0.3458f,-0.1936f,0.0987f,-0.327f,-0.1793f,-0.1607f,-0.116f,-0.187f,-0.3313f,0.1637f,-0.2122f,-0.3132f,0.3482f,-0.2402f,-0.117f,0.3702f,-0.1061f,0.1656f,0.1412f,-0.0977f,0.3507f,-0.1622f,-0.0704f,0.3311f,-0.3623f,-0.04f,0.1183f,-0.3419f,-0.0245f,-0.1631f,-0.1129f,-0.0329f,-0.3482f,0.1905f,-0.0602f,-0.3286f,0.3906f,-0.0905f,-0.1158f,0.2788f,0.0575f,0.1279f,0.1169f,0.0634f,0.2588f,-0.0976f,0.0827f,0.2449f,-0.2391f,0.1042f,0.0944f,-0.2247f,0.1152f,-0.1045f,-0.0628f,0.1093f,-0.2354f,0.1518f,0.0899f,-0.2215f,0.2933f,0.0685f,-0.0711f,0.0325f,0.1491f,0.016f});
  }
}
protected class MFVec2f374 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4223f,0.6397f,0.4182f,0.6398f,0.4179f,0.64f,0.422f,0.6399f,0.4255f,0.6412f,0.4227f,0.6412f,0.4252f,0.6414f,0.422f,0.6417f,0.418f,0.6418f,0.4151f,0.6417f,0.4154f,0.6415f,0.4187f,0.6413f,0.4275f,0.6502f,0.4244f,0.6501f,0.4272f,0.6504f,0.4235f,0.6507f,0.4187f,0.6508f,0.4156f,0.6508f,0.4159f,0.6505f,0.4196f,0.6503f,0.4282f,0.6516f,0.4248f,0.6515f,0.4279f,0.6519f,0.4239f,0.6522f,0.4187f,0.6523f,0.4153f,0.6522f,0.4156f,0.652f,0.4196f,0.6517f,0.4265f,0.6531f,0.4241f,0.6531f,0.4263f,0.6533f,0.4235f,0.6535f,0.4198f,0.6536f,0.4174f,0.6536f,0.4176f,0.6534f,0.4204f,0.6532f,0.422f,0.6539f});
  }
}
protected class MFFloat375 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat376 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32377 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
protected class MFInt32378 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
protected class MFVec3f379 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1847f,-1.253f,0.0467f,0.1998f,-1.241f,-0.1693f,-0.0227f,-1.271f,0.0316f,-0.0076f,-1.259f,-0.1844f,0.3279f,-1.08f,0.0673f,0.161f,-1.102f,0.2179f,-0.0464f,-1.12f,0.2028f,-0.1906f,-1.124f,0.0295f,-0.1754f,-1.112f,-0.1865f,-0.0085f,-1.09f,-0.3372f,0.1989f,-1.072f,-0.3221f,0.3431f,-1.068f,-0.1487f,0.2967f,-0.1902f,0.1418f,0.1095f,-0.215f,0.3108f,-0.1373f,-0.2358f,0.2929f,-0.299f,-0.2404f,0.0984f,-0.281f,-0.2262f,-0.1586f,-0.0938f,-0.2014f,-0.3276f,0.153f,-0.1807f,-0.3096f,0.3147f,-0.176f,-0.1151f,0.3133f,-0.0482f,0.1642f,0.1083f,-0.0753f,0.3493f,-0.1619f,-0.0981f,0.3296f,-0.339f,-0.1032f,0.1167f,-0.3192f,-0.0876f,-0.1647f,-0.1142f,-0.0605f,-0.3498f,0.156f,-0.0377f,-0.3301f,0.3331f,-0.0327f,-0.1172f,0.2099f,0.0863f,0.1241f,0.0649f,0.0671f,0.255f,-0.1261f,0.051f,0.2411f,-0.2514f,0.0474f,0.0905f,-0.2374f,0.0585f,-0.1085f,-0.0924f,0.0776f,-0.2393f,0.0986f,0.0937f,-0.2254f,0.2239f,0.0973f,-0.0749f,-0.0182f,0.1305f,0.0112f});
  }
}
protected class MFVec2f380 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4212f,0.6288f,0.4172f,0.6289f,0.4169f,0.6288f,0.4209f,0.6287f,0.4244f,0.6302f,0.4216f,0.6304f,0.4241f,0.6301f,0.4209f,0.63f,0.4169f,0.6301f,0.4141f,0.6304f,0.4144f,0.6305f,0.4176f,0.6306f,0.4261f,0.6386f,0.423f,0.6388f,0.4258f,0.6384f,0.4222f,0.6383f,0.4174f,0.6385f,0.4143f,0.6387f,0.4146f,0.6389f,0.4182f,0.6389f,0.4268f,0.6399f,0.4234f,0.6401f,0.4265f,0.6397f,0.4225f,0.6396f,0.4173f,0.6398f,0.4139f,0.64f,0.4142f,0.6402f,0.4182f,0.6403f,0.4251f,0.6412f,0.4226f,0.6414f,0.4248f,0.6411f,0.422f,0.641f,0.4183f,0.6411f,0.4159f,0.6413f,0.4162f,0.6415f,0.419f,0.6415f,0.4206f,0.6418f});
  }
}
protected class MFFloat381 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat382 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32383 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
  }
}
protected class MFInt32384 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
  }
}
protected class MFVec3f385 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.412f,-1.137f,0.0335f,0.4261f,-1.125f,-0.1679f,0.2243f,-1.187f,0.0176f,0.2385f,-1.176f,-0.1838f,0.5153f,-0.9493f,0.0522f,0.3639f,-0.9958f,0.1913f,0.1762f,-1.047f,0.1754f,0.0461f,-1.076f,0.0125f,0.0602f,-1.065f,-0.1888f,0.2116f,-1.019f,-0.3279f,0.3992f,-0.9679f,-0.312f,0.5294f,-0.9381f,-0.1491f,0.3178f,-0.1177f,0.1f,0.1627f,-0.1653f,0.2425f,-0.0412f,-0.2206f,0.2252f,-0.1745f,-0.2511f,0.0583f,-0.1591f,-0.239f,-0.1604f,-0.0041f,-0.1914f,-0.3029f,0.1998f,-0.1361f,-0.2856f,0.3331f,-0.1056f,-0.1188f,0.1985f,0.1307f,0.0829f,0.0782f,0.0937f,0.1934f,-0.08f,0.0508f,0.18f,-0.1835f,0.0271f,0.0505f,-0.1716f,0.0365f,-0.1192f,-0.0513f,0.0735f,-0.2298f,0.1069f,0.1164f,-0.2164f,0.2104f,0.1401f,-0.0869f,-0.0002f,0.1379f,-0.0157f});
  }
}
protected class MFVec2f386 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4203f,0.6204f,0.4166f,0.6205f,0.4163f,0.62f,0.42f,0.6199f,0.4232f,0.6217f,0.4207f,0.6221f,0.4229f,0.6212f,0.4199f,0.6209f,0.4162f,0.621f,0.4136f,0.6215f,0.4139f,0.622f,0.4169f,0.6222f,0.4242f,0.6295f,0.4215f,0.6299f,0.4239f,0.629f,0.4208f,0.6287f,0.4167f,0.6288f,0.4141f,0.6293f,0.4144f,0.6298f,0.4175f,0.6301f,0.4233f,0.6319f,0.4212f,0.6323f,0.423f,0.6315f,0.4206f,0.6313f,0.4175f,0.6314f,0.4154f,0.6317f,0.4157f,0.6321f,0.4181f,0.6324f,0.4194f,0.6323f});
  }
}
protected class MFFloat387 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat388 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32389 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
  }
}
protected class MFInt32390 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
  }
}
protected class MFVec3f391 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.5436f,-1.006f,0.082f,0.5559f,-0.9964f,-0.0922f,0.3911f,-1.079f,0.0671f,0.4033f,-1.069f,-0.1071f,0.596f,-0.8116f,0.0978f,0.4725f,-0.8732f,0.2172f,0.3199f,-0.9458f,0.2024f,0.2147f,-0.9931f,0.0605f,0.2269f,-0.9834f,-0.1137f,0.3505f,-0.9218f,-0.2332f,0.503f,-0.8491f,-0.2183f,0.6083f,-0.8019f,-0.0765f,0.2786f,-0.0205f,0.1427f,0.14f,-0.0896f,0.2768f,-0.0415f,-0.176f,0.2591f,-0.1596f,-0.229f,0.1f,-0.1451f,-0.2175f,-0.1073f,-0.0064f,-0.1484f,-0.2413f,0.1751f,-0.062f,-0.2236f,0.2931f,-0.009f,-0.0645f,0.1776f,0.1232f,0.1297f,0.0583f,0.0659f,0.2438f,-0.0996f,0.0023f,0.2269f,-0.2013f,-0.0322f,0.0923f,-0.1903f,-0.0176f,-0.08f,-0.0748f,0.0389f,-0.1916f,0.0796f,0.1047f,-0.1786f,0.185f,0.14f,-0.0465f,-0.0484f,0.1379f,0.025f});
  }
}
protected class MFVec2f392 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4195f,0.6124f,0.4163f,0.6125f,0.416f,0.6118f,0.4193f,0.6117f,0.422f,0.6137f,0.4198f,0.6143f,0.4218f,0.613f,0.4191f,0.6126f,0.4159f,0.6126f,0.4137f,0.6132f,0.414f,0.6139f,0.4166f,0.6143f,0.4231f,0.621f,0.4207f,0.6217f,0.4228f,0.6202f,0.4199f,0.6197f,0.416f,0.6198f,0.4135f,0.6205f,0.4139f,0.6213f,0.4168f,0.6218f,0.4225f,0.6225f,0.4204f,0.623f,0.4222f,0.6219f,0.4197f,0.6216f,0.4165f,0.6217f,0.4145f,0.6223f,0.4147f,0.6229f,0.4172f,0.6232f,0.4185f,0.6232f});
  }
}
protected class MFFloat393 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat394 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32395 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
protected class MFInt32396 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
protected class MFVec3f397 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0463f,-0.9645f,-0.0622f,-0.0267f,-0.942f,-0.253f,-0.2519f,-0.9328f,-0.0794f,-0.2324f,-0.9103f,-0.2702f,0.1254f,-0.8655f,-0.031f,-0.0435f,-0.8586f,0.0992f,-0.2492f,-0.8269f,0.082f,-0.3888f,-0.7862f,-0.074f,-0.3693f,-0.7638f,-0.2648f,-0.2004f,-0.7707f,-0.395f,0.0053f,-0.8024f,-0.3779f,0.1449f,-0.843f,-0.2218f,0.2585f,-0.1911f,0.0918f,0.069f,-0.1834f,0.2379f,-0.1757f,-0.1456f,0.2175f,-0.3323f,-0.1f,0.0425f,-0.309f,-0.0733f,-0.1846f,-0.1196f,-0.0811f,-0.3307f,0.1251f,-0.1188f,-0.3102f,0.2817f,-0.1644f,-0.1352f,0.2978f,-0.0883f,0.1196f,0.0923f,-0.0799f,0.2781f,-0.1732f,-0.0389f,0.2559f,-0.343f,0.0105f,0.066f,-0.3178f,0.0395f,-0.1803f,-0.1123f,0.0311f,-0.3387f,0.1532f,-0.0098f,-0.3166f,0.3231f,-0.0593f,-0.1267f,0.223f,0.0382f,0.0917f,0.0776f,0.0442f,0.2038f,-0.1101f,0.0732f,0.1881f,-0.2302f,0.1081f,0.0539f,-0.2124f,0.1286f,-0.1203f,-0.0671f,0.1227f,-0.2324f,0.1207f,0.0937f,-0.2167f,0.2408f,0.0588f,-0.0824f,0.0116f,0.1281f,-0.0076f});
  }
}
protected class MFVec2f398 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4094f,0.6427f,0.4058f,0.6429f,0.4055f,0.6432f,0.4091f,0.643f,0.4124f,0.6437f,0.41f,0.6437f,0.412f,0.644f,0.4092f,0.6444f,0.4056f,0.6446f,0.4032f,0.6445f,0.4035f,0.6443f,0.4064f,0.6439f,0.4149f,0.6501f,0.4122f,0.65f,0.4146f,0.6504f,0.4113f,0.6509f,0.4071f,0.6511f,0.4044f,0.651f,0.4048f,0.6507f,0.408f,0.6502f,0.4157f,0.651f,0.4127f,0.651f,0.4153f,0.6514f,0.4118f,0.6519f,0.4072f,0.6522f,0.4043f,0.6521f,0.4047f,0.6517f,0.4082f,0.6512f,0.4143f,0.6522f,0.4122f,0.6522f,0.414f,0.6525f,0.4115f,0.6528f,0.4083f,0.653f,0.4062f,0.6529f,0.4065f,0.6527f,0.409f,0.6523f,0.4104f,0.653f});
  }
}
protected class MFFloat399 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat400 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32401 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
protected class MFInt32402 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
protected class MFVec3f403 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1298f,-0.9343f,0.012f,0.1487f,-0.912f,-0.1771f,-0.0526f,-0.9323f,-0.0063f,-0.0337f,-0.91f,-0.1954f,0.2599f,-0.8204f,0.0405f,0.1089f,-0.8356f,0.1686f,-0.0735f,-0.8336f,0.1504f,-0.1961f,-0.8154f,-0.0051f,-0.1772f,-0.793f,-0.1942f,-0.0262f,-0.7778f,-0.3224f,0.1562f,-0.7798f,-0.3041f,0.2788f,-0.7981f,-0.1486f,0.2549f,-0.1812f,0.1442f,0.0856f,-0.1983f,0.2879f,-0.1314f,-0.1959f,0.2662f,-0.269f,-0.1755f,0.0918f,-0.2465f,-0.1489f,-0.1332f,-0.0771f,-0.1318f,-0.2769f,0.1399f,-0.1342f,-0.2552f,0.2774f,-0.1547f,-0.0808f,0.2729f,-0.0814f,0.1704f,0.0874f,-0.1001f,0.3278f,-0.1502f,-0.0975f,0.304f,-0.3008f,-0.0751f,0.113f,-0.2762f,-0.046f,-0.1333f,-0.0907f,-0.0273f,-0.2907f,0.1469f,-0.0299f,-0.2669f,0.2975f,-0.0523f,-0.0759f,0.1866f,0.0252f,0.139f,0.0555f,0.012f,0.2502f,-0.1126f,0.0138f,0.2334f,-0.2191f,0.0297f,0.0984f,-0.2016f,0.0502f,-0.0758f,-0.0705f,0.0635f,-0.1871f,0.0975f,0.0616f,-0.1703f,0.204f,0.0458f,-0.0352f,-0.0099f,0.0797f,0.0369f});
  }
}
protected class MFVec2f404 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4075f,0.6349f,0.404f,0.6351f,0.4037f,0.6351f,0.4072f,0.6349f,0.4104f,0.6358f,0.4081f,0.6359f,0.4101f,0.6358f,0.4072f,0.636f,0.4037f,0.6362f,0.4013f,0.6363f,0.4017f,0.6363f,0.4046f,0.6362f,0.4127f,0.6418f,0.41f,0.6419f,0.4123f,0.6418f,0.409f,0.642f,0.4048f,0.6423f,0.4022f,0.6424f,0.4026f,0.6424f,0.4058f,0.6422f,0.4134f,0.6427f,0.4105f,0.6429f,0.413f,0.6427f,0.4094f,0.6429f,0.4048f,0.6432f,0.4019f,0.6434f,0.4024f,0.6434f,0.4059f,0.6432f,0.412f,0.6438f,0.4099f,0.6439f,0.4116f,0.6438f,0.4091f,0.6439f,0.4059f,0.6441f,0.4038f,0.6442f,0.4042f,0.6442f,0.4067f,0.6441f,0.408f,0.6444f});
  }
}
protected class MFFloat405 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat406 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32407 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
  }
}
protected class MFInt32408 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
  }
}
protected class MFVec3f409 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.3103f,-0.8684f,0.0017f,0.3279f,-0.8476f,-0.1746f,0.1444f,-0.8917f,-0.0183f,0.162f,-0.8709f,-0.1946f,0.4057f,-0.7413f,0.0284f,0.268f,-0.7744f,0.1456f,0.1021f,-0.7977f,0.1256f,-0.0092f,-0.7996f,-0.0215f,0.0085f,-0.7788f,-0.1978f,0.1461f,-0.7457f,-0.315f,0.3121f,-0.7224f,-0.295f,0.4234f,-0.7205f,-0.1478f,0.2537f,-0.1316f,0.1027f,0.1126f,-0.1655f,0.2227f,-0.0677f,-0.1909f,0.201f,-0.1817f,-0.1928f,0.0502f,-0.1625f,-0.1702f,-0.1412f,-0.0215f,-0.1363f,-0.2613f,0.1588f,-0.1109f,-0.2396f,0.2728f,-0.109f,-0.0888f,0.156f,0.0566f,0.096f,0.0465f,0.0303f,0.1892f,-0.0934f,0.0106f,0.1723f,-0.1818f,0.0091f,0.0553f,-0.1669f,0.0266f,-0.0933f,-0.0575f,0.0529f,-0.1864f,0.0824f,0.0726f,-0.1696f,0.1709f,0.0741f,-0.0526f,-0.016f,0.0815f,0.0057f});
  }
}
protected class MFVec2f410 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4061f,0.6287f,0.4028f,0.6289f,0.4025f,0.6286f,0.4057f,0.6284f,0.4088f,0.6296f,0.4066f,0.6299f,0.4084f,0.6293f,0.4057f,0.6293f,0.4024f,0.6295f,0.4002f,0.6298f,0.4006f,0.63f,0.4033f,0.6301f,0.4102f,0.6353f,0.408f,0.6356f,0.4098f,0.635f,0.407f,0.635f,0.4035f,0.6352f,0.4012f,0.6355f,0.4016f,0.6358f,0.4044f,0.6358f,0.4096f,0.6371f,0.4079f,0.6374f,0.4093f,0.6369f,0.4071f,0.6369f,0.4043f,0.6371f,0.4026f,0.6373f,0.4029f,0.6375f,0.4051f,0.6375f,0.4062f,0.6376f});
  }
}
protected class MFFloat411 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat412 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32413 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
  }
}
protected class MFInt32414 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
  }
}
protected class MFVec3f415 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.4265f,-0.7665f,0.0531f,0.4417f,-0.7485f,-0.0994f,0.2908f,-0.8079f,0.0337f,0.306f,-0.7899f,-0.1188f,0.4775f,-0.6307f,0.0765f,0.3642f,-0.6752f,0.1764f,0.2285f,-0.7166f,0.157f,0.1382f,-0.7341f,0.0281f,0.1534f,-0.7161f,-0.1244f,0.2667f,-0.6716f,-0.2242f,0.4024f,-0.6302f,-0.2049f,0.4927f,-0.6127f,-0.076f,0.2189f,-0.0422f,0.1441f,0.0919f,-0.0921f,0.2561f,-0.0696f,-0.1414f,0.2331f,-0.1709f,-0.161f,0.0886f,-0.1528f,-0.1396f,-0.0929f,-0.0258f,-0.0897f,-0.2049f,0.1357f,-0.0404f,-0.1819f,0.2371f,-0.0207f,-0.0373f,0.1344f,0.069f,0.1368f,0.0252f,0.0277f,0.2322f,-0.1149f,-0.0067f,0.2114f,-0.202f,-0.0158f,0.0895f,-0.1878f,0.0058f,-0.0611f,-0.082f,0.0466f,-0.1545f,0.0552f,0.083f,-0.137f,0.1456f,0.0926f,-0.0171f,-0.0613f,0.1015f,0.0409f});
  }
}
protected class MFVec2f416 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4049f,0.6227f,0.4021f,0.6229f,0.4017f,0.6225f,0.4045f,0.6223f,0.4072f,0.6236f,0.4053f,0.624f,0.4068f,0.6232f,0.4044f,0.623f,0.4016f,0.6232f,0.3997f,0.6236f,0.4001f,0.624f,0.4025f,0.6242f,0.4086f,0.6291f,0.4066f,0.6295f,0.4082f,0.6286f,0.4055f,0.6284f,0.4022f,0.6286f,0.4001f,0.6291f,0.4005f,0.6296f,0.4032f,0.6297f,0.4082f,0.6302f,0.4064f,0.6306f,0.4078f,0.6299f,0.4056f,0.6298f,0.4028f,0.63f,0.401f,0.6304f,0.4014f,0.6307f,0.4036f,0.6308f,0.4047f,0.6309f});
  }
}
protected class MFFloat417 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat418 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32419 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,12,13,-1,13,0,1,-1,2,0,13,-1,13,14,2,-1,2,14,15,-1,15,3,2,-1,3,15,16,-1,16,4,3,-1,6,17,18,-1,18,5,6,-1,4,16,17,-1,17,6,4,-1,19,12,1,-1,1,7,19,-1,8,20,19,-1,19,7,8,-1,21,20,8,-1,8,9,21,-1,22,21,9,-1,9,10,22,-1,18,23,11,-1,11,5,18,-1,23,22,10,-1,10,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,13,12,25,-1,25,24,13,-1,12,19,26,-1,26,25,12,-1,19,20,27,-1,27,26,19,-1,20,21,28,-1,28,27,20,-1,21,22,29,-1,29,28,21,-1,22,23,30,-1,30,29,22,-1,23,18,31,-1,31,30,23,-1,18,17,32,-1,32,31,18,-1,17,16,33,-1,33,32,17,-1,16,15,34,-1,34,33,16,-1,15,14,35,-1,35,34,15,-1,14,13,24,-1,24,35,14,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,3,39,-1,39,38,2,-1,3,4,40,-1,40,39,3,-1,4,6,41,-1,41,40,4,-1,6,5,42,-1,42,41,6,-1,5,11,43,-1,43,42,5,-1,11,10,44,-1,44,43,11,-1,10,9,45,-1,45,44,10,-1,9,8,46,-1,46,45,9,-1,8,7,47,-1,47,46,8,-1,7,1,36,-1,36,47,7,-1});
  }
}
protected class MFInt32420 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,12,13,-1,13,0,1,-1,2,0,13,-1,13,14,2,-1,2,14,15,-1,15,3,2,-1,3,15,16,-1,16,4,3,-1,6,17,18,-1,18,5,6,-1,4,16,17,-1,17,6,4,-1,19,12,1,-1,1,7,19,-1,8,20,19,-1,19,7,8,-1,21,20,8,-1,8,9,21,-1,22,21,9,-1,9,10,22,-1,18,23,11,-1,11,5,18,-1,23,22,10,-1,10,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,13,12,25,-1,25,24,13,-1,12,19,26,-1,26,25,12,-1,19,20,27,-1,27,26,19,-1,20,21,28,-1,28,27,20,-1,21,22,29,-1,29,28,21,-1,22,23,30,-1,30,29,22,-1,23,18,31,-1,31,30,23,-1,18,17,32,-1,32,31,18,-1,17,16,33,-1,33,32,17,-1,16,15,34,-1,34,33,16,-1,15,14,35,-1,35,34,15,-1,14,13,24,-1,24,35,14,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,3,39,-1,39,38,2,-1,3,4,40,-1,40,39,3,-1,4,6,41,-1,41,40,4,-1,6,5,42,-1,42,41,6,-1,5,11,43,-1,43,42,5,-1,11,10,44,-1,44,43,11,-1,10,9,45,-1,45,44,10,-1,9,8,46,-1,46,45,9,-1,8,7,47,-1,47,46,8,-1,7,1,36,-1,36,47,7,-1});
  }
}
protected class MFVec3f421 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.5369f,0.1378f,-1.124f,0f,0.2001f,-1.195f,1.139f,0.2062f,-0.8504f,1.562f,0.1781f,0.0729f,1.219f,0.0058f,0.7152f,0f,-0.3251f,1.195f,0.605f,-0.3143f,1.101f,-0.5369f,0.1378f,-1.124f,-1.139f,0.2062f,-0.8504f,-1.562f,0.1781f,0.0729f,-1.219f,0.0058f,0.7153f,-0.605f,-0.3143f,1.101f,0f,1.858f,-1.195f,0.5369f,1.85f,-1.124f,1.139f,1.819f,-0.8504f,1.562f,1.716f,0.0729f,1.219f,1.644f,0.7153f,0.605f,1.6f,1.101f,0f,1.59f,1.195f,-0.5369f,1.85f,-1.124f,-1.139f,1.819f,-0.8504f,-1.562f,1.716f,0.0729f,-1.219f,1.644f,0.7153f,-0.605f,1.6f,1.101f,0.4665f,2.444f,-0.8569f,0f,2.451f,-0.9187f,-0.4665f,2.444f,-0.8569f,-0.9527f,2.421f,-0.6358f,-1.289f,2.341f,0.0972f,-1.031f,2.289f,0.5793f,-0.5156f,2.254f,0.9034f,0f,2.245f,0.9834f,0.5156f,2.254f,0.9034f,1.031f,2.289f,0.5793f,1.289f,2.341f,0.0972f,0.9527f,2.421f,-0.6358f,0f,-0.6803f,-1.028f,0.4943f,-0.6896f,-0.9649f,0.999f,-0.7239f,-0.733f,1.342f,-0.8341f,0.0135f,1.076f,-0.9065f,0.5038f,0.5328f,-0.9549f,0.832f,0f,-0.967f,0.9139f,-0.5328f,-0.9549f,0.832f,-1.076f,-0.9065f,0.5038f,-1.342f,-0.8341f,0.0136f,-0.999f,-0.7239f,-0.733f,-0.4943f,-0.6896f,-0.9649f});
  }
}
protected class MFVec2f422 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6285f,0.3906f,0.6293f,0.4094f,0.632f,0.4164f,0.6316f,0.4107f,0.6267f,0.3906f,0.6224f,0.4006f,0.6225f,0.3818f,0.6285f,0.3719f,0.632f,0.3649f,0.6316f,0.3706f,0.6267f,0.3807f,0.6225f,0.3906f,0.6507f,0.3995f,0.6503f,0.4094f,0.652f,0.4164f,0.6518f,0.4107f,0.6494f,0.4006f,0.6482f,0.3906f,0.6444f,0.3818f,0.6503f,0.3719f,0.652f,0.3649f,0.6518f,0.3706f,0.6494f,0.3807f,0.6482f,0.3995f,0.6503f,0.3906f,0.6507f,0.3818f,0.6503f,0.3719f,0.652f,0.3649f,0.6518f,0.3706f,0.6494f,0.3807f,0.6482f,0.3906f,0.6444f,0.4006f,0.6482f,0.4107f,0.6494f,0.4164f,0.6518f,0.4094f,0.652f,0.3906f,0.6293f,0.3995f,0.6285f,0.4094f,0.632f,0.4164f,0.6316f,0.4107f,0.6267f,0.4006f,0.6225f,0.3906f,0.6224f,0.3807f,0.6225f,0.3706f,0.6267f,0.3649f,0.6316f,0.3719f,0.632f,0.3818f,0.6285f});
  }
}
protected class MFFloat423 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat424 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32425 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,1,0,-1,0,13,12,-1,0,2,14,-1,14,13,0,-1,14,2,3,-1,3,15,14,-1,15,3,4,-1,4,16,15,-1,17,5,6,-1,6,18,17,-1,4,5,17,-1,17,16,4,-1,7,1,12,-1,12,19,7,-1,20,8,7,-1,7,19,20,-1,9,8,20,-1,20,21,9,-1,10,9,21,-1,21,22,10,-1,6,11,23,-1,23,18,6,-1,23,11,10,-1,10,22,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,12,13,25,-1,25,24,12,-1,13,14,26,-1,26,25,13,-1,14,15,27,-1,27,26,14,-1,15,16,28,-1,28,27,15,-1,16,17,29,-1,29,28,16,-1,17,18,30,-1,30,29,17,-1,18,23,31,-1,31,30,18,-1,23,22,32,-1,32,31,23,-1,22,21,33,-1,33,32,22,-1,21,20,34,-1,34,33,21,-1,20,19,35,-1,35,34,20,-1,19,12,24,-1,24,35,19,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,1,37,-1,37,36,0,-1,1,7,38,-1,38,37,1,-1,7,8,39,-1,39,38,7,-1,8,9,40,-1,40,39,8,-1,9,10,41,-1,41,40,9,-1,10,11,42,-1,42,41,10,-1,11,6,43,-1,43,42,11,-1,6,5,44,-1,44,43,6,-1,5,4,45,-1,45,44,5,-1,4,3,46,-1,46,45,4,-1,3,2,47,-1,47,46,3,-1,2,0,36,-1,36,47,2,-1});
  }
}
protected class MFInt32426 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,1,0,-1,0,13,12,-1,0,2,14,-1,14,13,0,-1,14,2,3,-1,3,15,14,-1,15,3,4,-1,4,16,15,-1,17,5,6,-1,6,18,17,-1,4,5,17,-1,17,16,4,-1,7,1,12,-1,12,19,7,-1,20,8,7,-1,7,19,20,-1,9,8,20,-1,20,21,9,-1,10,9,21,-1,21,22,10,-1,6,11,23,-1,23,18,6,-1,23,11,10,-1,10,22,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,12,13,25,-1,25,24,12,-1,13,14,26,-1,26,25,13,-1,14,15,27,-1,27,26,14,-1,15,16,28,-1,28,27,15,-1,16,17,29,-1,29,28,16,-1,17,18,30,-1,30,29,17,-1,18,23,31,-1,31,30,18,-1,23,22,32,-1,32,31,23,-1,22,21,33,-1,33,32,22,-1,21,20,34,-1,34,33,21,-1,20,19,35,-1,35,34,20,-1,19,12,24,-1,24,35,19,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,1,37,-1,37,36,0,-1,1,7,38,-1,38,37,1,-1,7,8,39,-1,39,38,7,-1,8,9,40,-1,40,39,8,-1,9,10,41,-1,41,40,9,-1,10,11,42,-1,42,41,10,-1,11,6,43,-1,43,42,11,-1,6,5,44,-1,44,43,6,-1,5,4,45,-1,45,44,5,-1,4,3,46,-1,46,45,4,-1,3,2,47,-1,47,46,3,-1,2,0,36,-1,36,47,2,-1});
  }
}
protected class MFVec3f427 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.5369f,2.251f,-1.124f,0f,2.251f,-1.195f,1.139f,2.251f,-0.8504f,1.562f,2.251f,0.073f,1.219f,2.251f,0.7153f,0.605f,2.251f,1.101f,0f,2.251f,1.195f,-0.5369f,2.251f,-1.124f,-1.139f,2.251f,-0.8504f,-1.562f,2.251f,0.0729f,-1.219f,2.251f,0.7153f,-0.605f,2.251f,1.101f,0f,0.257f,-1.195f,0.5369f,0.249f,-1.124f,1.139f,0.2183f,-0.8504f,1.562f,0.1147f,0.0729f,1.219f,0.0426f,0.7153f,0.605f,-0.0007f,1.101f,0f,-0.0112f,1.195f,-0.5369f,0.249f,-1.124f,-1.139f,0.2183f,-0.8504f,-1.562f,0.1147f,0.0729f,-1.219f,0.0426f,0.7153f,-0.605f,-0.0007f,1.101f,0f,-0.3453f,-0.9982f,0.4823f,-0.3525f,-0.9343f,0.9917f,-0.3785f,-0.7027f,1.345f,-0.465f,0.068f,1.071f,-0.5224f,0.5805f,0.5349f,-0.5603f,0.9176f,0f,-0.5696f,1.001f,-0.5349f,-0.5603f,0.9176f,-1.071f,-0.5225f,0.5805f,-1.345f,-0.465f,0.068f,-0.9917f,-0.3785f,-0.7027f,-0.4823f,-0.3525f,-0.9343f,0.4798f,2.933f,-0.9247f,0f,2.933f,-0.9883f,-0.4798f,2.933f,-0.9247f,-0.9844f,2.933f,-0.6953f,-1.333f,2.933f,0.066f,-1.064f,2.933f,0.5706f,-0.5317f,2.933f,0.9052f,0f,2.933f,0.9877f,0.5317f,2.933f,0.9052f,1.064f,2.933f,0.5706f,1.333f,2.933f,0.066f,0.9844f,2.933f,-0.6953f});
  }
}
protected class MFVec2f428 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6721f,0.3906f,0.6721f,0.4094f,0.6721f,0.4164f,0.6721f,0.4107f,0.6721f,0.4006f,0.6738f,0.3906f,0.6664f,0.3818f,0.6721f,0.3719f,0.6721f,0.3649f,0.6721f,0.3706f,0.6721f,0.3807f,0.6738f,0.3906f,0.6507f,0.3995f,0.6503f,0.4094f,0.652f,0.4164f,0.6518f,0.4107f,0.6494f,0.4006f,0.6482f,0.3906f,0.6444f,0.3818f,0.6503f,0.3719f,0.652f,0.3649f,0.6518f,0.3706f,0.6494f,0.3807f,0.6482f,0.3906f,0.6507f,0.3995f,0.6503f,0.4094f,0.652f,0.4164f,0.6518f,0.4107f,0.6494f,0.4006f,0.6482f,0.3906f,0.6444f,0.3807f,0.6482f,0.3706f,0.6494f,0.3649f,0.6518f,0.3719f,0.652f,0.3818f,0.6503f,0.3995f,0.6721f,0.3906f,0.6721f,0.3818f,0.6721f,0.3719f,0.6721f,0.3649f,0.6721f,0.3706f,0.6721f,0.3807f,0.6738f,0.3906f,0.6664f,0.4006f,0.6738f,0.4107f,0.6721f,0.4164f,0.6721f,0.4094f,0.6721f});
  }
}
protected class MFFloat429 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat430 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32431 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {58,44,47,-1,47,49,58,-1,49,60,59,-1,59,1,49,-1,56,48,47,-1,47,44,56,-1,50,51,59,-1,59,60,50,-1,173,168,58,-1,58,49,173,-1,171,173,49,-1,49,1,171,-1,14,12,18,-1,18,15,14,-1,162,160,14,-1,14,15,162,-1,16,57,33,-1,21,18,12,-1,18,79,19,-1,80,20,19,-1,11,10,79,-1,18,21,79,-1,11,79,21,-1,21,12,78,-1,11,21,22,-1,321,345,320,-1,322,323,346,-1,80,25,24,-1,24,20,80,-1,26,38,24,-1,23,13,38,-1,20,77,18,-1,18,19,20,-1,38,29,30,-1,30,23,38,-1,27,30,29,-1,27,28,30,-1,30,28,23,-1,33,31,16,-1,31,37,16,-1,28,34,23,-1,17,35,36,-1,36,28,17,-1,33,36,35,-1,17,32,35,-1,32,33,35,-1,33,34,36,-1,36,34,28,-1,10,19,79,-1,4,40,37,-1,40,42,41,-1,40,41,37,-1,40,4,42,-1,56,43,4,-1,4,46,56,-1,45,43,56,-1,56,44,45,-1,43,45,4,-1,48,56,46,-1,46,3,48,-1,50,60,3,-1,51,50,3,-1,3,2,51,-1,58,168,52,-1,52,168,170,-1,61,52,170,-1,4,45,52,-1,52,61,4,-1,52,45,44,-1,44,58,52,-1,61,170,53,-1,170,165,39,-1,39,53,170,-1,4,61,53,-1,53,42,4,-1,53,39,41,-1,41,42,53,-1,165,57,39,-1,13,23,54,-1,16,37,57,-1,41,39,57,-1,37,41,57,-1,57,165,166,-1,54,166,13,-1,33,57,34,-1,34,57,54,-1,34,54,23,-1,166,162,55,-1,55,162,15,-1,77,55,15,-1,15,18,77,-1,166,77,13,-1,77,166,55,-1,13,77,24,-1,24,38,13,-1,20,24,77,-1,54,57,166,-1,47,60,49,-1,48,3,47,-1,3,60,47,-1,3,63,2,-1,72,62,63,-1,3,65,63,-1,3,46,64,-1,64,66,3,-1,6,66,64,-1,3,66,65,-1,6,73,8,-1,8,73,67,-1,6,75,73,-1,5,71,73,-1,73,75,5,-1,6,70,75,-1,64,46,69,-1,75,70,69,-1,75,69,344,-1,2,63,62,-1,8,66,6,-1,63,8,72,-1,9,74,71,-1,68,74,9,-1,74,8,67,-1,68,72,74,-1,72,8,74,-1,67,71,74,-1,67,73,71,-1,65,8,63,-1,65,66,8,-1,70,6,64,-1,70,64,69,-1,4,0,344,-1,69,46,4,-1,69,4,344,-1,76,344,0,-1,5,76,0,-1,5,75,76,-1,75,344,76,-1,133,125,123,-1,123,120,133,-1,125,1,59,-1,59,134,125,-1,131,120,123,-1,123,124,131,-1,126,134,59,-1,59,51,126,-1,172,125,133,-1,133,167,172,-1,171,1,125,-1,125,172,171,-1,14,91,94,-1,94,12,14,-1,161,91,14,-1,14,160,161,-1,109,132,92,-1,12,94,97,-1,95,149,94,-1,95,96,150,-1,149,88,89,-1,149,97,94,-1,97,149,89,-1,78,12,97,-1,98,97,89,-1,325,348,324,-1,354,326,327,-1,150,96,100,-1,100,101,150,-1,100,114,102,-1,114,90,99,-1,96,95,94,-1,94,148,96,-1,114,99,106,-1,106,105,114,-1,105,106,103,-1,106,104,103,-1,99,104,106,-1,92,107,109,-1,92,113,107,-1,99,110,104,-1,93,104,112,-1,112,111,93,-1,111,112,109,-1,111,108,93,-1,111,109,108,-1,112,110,109,-1,104,110,112,-1,149,95,88,-1,113,116,83,-1,117,118,116,-1,113,117,116,-1,118,83,116,-1,131,122,83,-1,83,119,131,-1,121,120,131,-1,131,119,121,-1,83,121,119,-1,124,82,122,-1,122,131,124,-1,82,134,126,-1,51,2,82,-1,82,126,51,-1,127,167,133,-1,169,167,127,-1,169,127,135,-1,83,135,127,-1,127,121,83,-1,127,133,120,-1,120,121,127,-1,128,169,135,-1,169,128,115,-1,115,163,169,-1});
  }
}
protected class MFInt32432 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {83,118,128,-1,128,135,83,-1,128,118,117,-1,117,115,128,-1,115,132,163,-1,129,99,90,-1,132,113,92,-1,132,115,117,-1,132,117,113,-1,164,163,132,-1,90,164,129,-1,110,132,109,-1,129,132,110,-1,99,129,110,-1,130,161,164,-1,91,161,130,-1,148,94,91,-1,91,130,148,-1,90,148,164,-1,130,164,148,-1,90,114,100,-1,100,148,90,-1,148,100,96,-1,164,132,129,-1,125,134,123,-1,123,82,124,-1,123,134,82,-1,2,136,82,-1,136,62,72,-1,136,138,82,-1,82,139,137,-1,137,122,82,-1,137,139,85,-1,138,139,82,-1,87,144,85,-1,140,144,87,-1,144,146,85,-1,84,146,144,-1,144,143,84,-1,146,142,85,-1,141,122,137,-1,141,142,146,-1,347,141,146,-1,62,136,2,-1,85,139,87,-1,72,87,136,-1,143,145,9,-1,9,145,68,-1,145,140,87,-1,68,145,72,-1,72,145,87,-1,145,143,140,-1,143,144,140,-1,136,87,138,-1,87,139,138,-1,137,85,142,-1,141,137,142,-1,347,81,83,-1,83,122,141,-1,347,83,141,-1,81,347,147,-1,81,147,84,-1,147,146,84,-1,147,347,146,-1,162,166,152,-1,151,160,162,-1,162,152,151,-1,152,166,165,-1,165,154,152,-1,154,165,170,-1,170,156,154,-1,152,154,155,-1,155,151,152,-1,156,153,155,-1,155,154,156,-1,173,156,170,-1,170,168,173,-1,171,153,156,-1,156,173,171,-1,157,164,161,-1,151,157,161,-1,161,160,151,-1,157,158,163,-1,163,164,157,-1,158,159,169,-1,169,163,158,-1,157,151,155,-1,155,158,157,-1,159,158,155,-1,155,153,159,-1,172,167,169,-1,169,159,172,-1,171,172,159,-1,159,153,171,-1,355,237,223,-1,174,236,237,-1,236,174,175,-1,179,238,176,-1,179,176,177,-1,179,177,178,-1,178,174,179,-1,174,178,175,-1,180,226,236,-1,238,180,236,-1,180,230,226,-1,237,236,223,-1,223,236,218,-1,225,355,223,-1,223,224,225,-1,328,329,239,-1,330,331,350,-1,228,227,219,-1,219,222,228,-1,236,226,218,-1,174,237,0,-1,0,237,355,-1,0,179,174,-1,318,355,225,-1,220,228,222,-1,221,228,220,-1,5,0,355,-1,218,182,223,-1,183,223,182,-1,181,183,185,-1,181,185,242,-1,213,212,244,-1,244,246,213,-1,213,246,245,-1,245,214,213,-1,245,247,184,-1,184,214,245,-1,214,184,206,-1,206,207,214,-1,217,319,225,-1,225,224,217,-1,183,181,217,-1,217,224,183,-1,224,223,183,-1,226,209,218,-1,218,209,184,-1,182,185,183,-1,218,184,182,-1,207,208,232,-1,232,214,207,-1,232,215,214,-1,209,206,184,-1,186,192,190,-1,190,188,186,-1,197,192,208,-1,208,207,197,-1,190,222,219,-1,219,188,190,-1,194,195,190,-1,226,189,209,-1,187,189,226,-1,192,186,208,-1,191,216,205,-1,196,205,216,-1,195,196,216,-1,196,195,194,-1,209,189,198,-1,199,197,207,-1,207,206,199,-1,233,234,197,-1,197,199,233,-1,209,198,199,-1,199,206,209,-1,233,199,198,-1,198,200,233,-1,248,194,202,-1,201,205,250,-1,248,249,196,-1,196,194,248,-1,196,249,250,-1,250,205,196,-1,234,203,197,-1,203,192,197,-1,194,190,202,-1,200,198,189,-1,189,204,200,-1,202,190,192,-1,202,192,203,-1,205,210,191,-1,210,205,201,-1,220,222,193,-1,204,189,187,-1,187,210,204,-1,210,201,204,-1,210,187,191,-1,195,211,190,-1,195,193,211,-1,193,222,211,-1,211,222,190,-1,215,212,213,-1,213,214,215,-1,230,187,226,-1,230,191,187,-1,229,221,230,-1,229,228,221,-1,9,355,318,-1,5,355,71,-1,71,355,9,-1,231,247,185,-1,182,231,185,-1,184,231,182,-1,184,247,231,-1,238,230,180,-1,230,221,191,-1,221,235,191,-1,191,235,216,-1});
  }
}
protected class MFInt32433 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {221,220,235,-1,193,235,220,-1,216,235,193,-1,193,195,216,-1,250,249,233,-1,203,234,248,-1,234,233,249,-1,250,233,200,-1,249,248,234,-1,243,241,240,-1,241,243,247,-1,204,201,250,-1,200,204,250,-1,203,248,202,-1,247,243,242,-1,247,242,185,-1,332,333,349,-1,334,335,7,-1,292,304,353,-1,304,303,251,-1,252,251,303,-1,253,305,256,-1,254,253,256,-1,256,251,255,-1,255,254,256,-1,252,255,251,-1,303,295,257,-1,303,257,305,-1,295,298,257,-1,292,303,304,-1,288,303,292,-1,294,352,292,-1,292,353,294,-1,336,337,293,-1,306,338,339,-1,296,291,219,-1,219,227,296,-1,288,295,303,-1,81,304,251,-1,353,304,81,-1,251,256,81,-1,294,353,317,-1,291,296,289,-1,289,296,290,-1,353,81,84,-1,292,258,288,-1,258,292,259,-1,261,259,181,-1,242,261,181,-1,285,309,244,-1,244,212,285,-1,285,286,308,-1,308,309,285,-1,308,286,260,-1,260,310,308,-1,286,281,280,-1,280,260,286,-1,217,352,294,-1,294,319,217,-1,259,352,217,-1,217,181,259,-1,259,292,352,-1,288,282,295,-1,260,282,288,-1,259,261,258,-1,258,260,288,-1,281,286,232,-1,232,208,281,-1,286,215,232,-1,260,280,282,-1,186,188,264,-1,264,266,186,-1,271,281,208,-1,208,266,271,-1,264,188,219,-1,219,291,264,-1,264,269,268,-1,282,263,295,-1,295,263,262,-1,208,186,266,-1,279,287,265,-1,287,279,270,-1,287,270,269,-1,268,269,270,-1,272,263,282,-1,273,280,281,-1,281,271,273,-1,300,273,271,-1,271,301,300,-1,282,280,273,-1,273,272,282,-1,300,274,272,-1,272,273,300,-1,276,268,311,-1,313,279,275,-1,311,268,270,-1,270,312,311,-1,270,279,313,-1,313,312,270,-1,271,277,301,-1,271,266,277,-1,276,264,268,-1,274,278,263,-1,263,272,274,-1,266,264,276,-1,277,266,276,-1,265,283,279,-1,275,279,283,-1,267,291,289,-1,278,283,262,-1,262,263,278,-1,278,275,283,-1,265,262,283,-1,264,284,269,-1,284,267,269,-1,284,291,267,-1,264,291,284,-1,285,212,215,-1,215,286,285,-1,295,262,298,-1,262,265,298,-1,298,290,297,-1,290,296,297,-1,317,353,9,-1,143,353,84,-1,9,353,143,-1,261,310,299,-1,261,299,258,-1,258,299,260,-1,299,310,260,-1,257,298,305,-1,265,290,298,-1,265,302,290,-1,287,302,265,-1,302,289,290,-1,289,302,267,-1,287,269,267,-1,267,302,287,-1,300,312,313,-1,311,301,277,-1,312,300,301,-1,274,300,313,-1,301,311,312,-1,240,307,243,-1,310,243,307,-1,313,275,278,-1,313,278,274,-1,276,311,277,-1,242,243,310,-1,261,242,310,-1,351,340,341,-1,86,342,343,-1,244,314,315,-1,315,246,244,-1,246,315,247,-1,247,245,246,-1,244,309,316,-1,316,314,244,-1,309,308,310,-1,310,316,309,-1,175,176,238,-1,238,236,175,-1,177,176,175,-1,175,178,177,-1,252,303,305,-1,305,253,252,-1,254,255,252,-1,252,253,254,-1,318,225,319,-1,319,9,318,-1,317,9,319,-1,319,294,317,-1});
  }
}
protected class MFInt32434 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,48,50,49,-1,49,44,48,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,117,120,119,-1,119,118,117,-1,120,123,122,-1,122,121,120,-1,124,118,119,-1,119,125,124,-1,126,121,122,-1,122,127,126,-1,128,120,117,-1,117,129,128,-1,130,123,120,-1,120,128,130,-1,14,132,131,-1,131,17,14,-1,133,132,14,-1,14,19,133,-1,136,135,134,-1,17,131,137,-1,139,138,131,-1,139,141,140,-1,138,143,142,-1,138,137,131,-1,137,138,142,-1,30,17,144,-1,145,137,142,-1,144,145,146,-1,30,144,146,-1,140,141,148,-1,148,147,140,-1,148,150,149,-1,150,152,151,-1,141,139,131,-1,131,153,141,-1,150,151,155,-1,155,154,150,-1,154,155,156,-1,155,157,156,-1,151,157,155,-1,134,158,136,-1,134,159,158,-1,151,160,157,-1,161,157,163,-1,163,162,161,-1,162,163,136,-1,162,164,161,-1,162,136,164,-1,163,160,136,-1,157,160,163,-1,138,139,143,-1,159,166,165,-1,168,167,166,-1,159,168,166,-1,167,165,166,-1,124,170,165,-1,165,169,124,-1,171,172,124,-1,124,169,171,-1,165,171,169,-1,125,173,170,-1,170,124,125,-1,173,121,126,-1,127,174,173,-1,173,126,127,-1,175,129,117,-1,176,129,175,-1,176,175,177,-1,165,177,175,-1,175,171,165,-1,175,117,172,-1,172,171,175,-1,178,176,177,-1,176,178,180,-1,180,179,176,-1});
  }
}
protected class MFInt32435 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {165,167,178,-1,178,177,165,-1,178,167,168,-1,168,180,178,-1,180,135,179,-1,181,151,152,-1,135,159,134,-1,135,180,168,-1,135,168,159,-1,182,179,135,-1,152,182,181,-1,160,135,136,-1,181,135,160,-1,151,181,160,-1,183,133,182,-1,132,133,183,-1,153,131,132,-1,132,183,153,-1,152,184,182,-1,183,182,184,-1,152,150,148,-1,148,184,152,-1,184,148,141,-1,182,135,181,-1,120,121,119,-1,119,173,125,-1,119,121,173,-1,72,186,185,-1,187,76,77,-1,186,188,185,-1,185,191,190,-1,190,189,185,-1,190,191,192,-1,188,191,185,-1,194,193,192,-1,195,193,194,-1,193,196,192,-1,197,200,199,-1,199,198,197,-1,200,202,201,-1,203,189,190,-1,204,202,200,-1,205,203,196,-1,96,186,72,-1,192,191,194,-1,97,194,186,-1,207,206,100,-1,101,208,103,-1,206,195,194,-1,104,206,97,-1,97,206,194,-1,208,198,209,-1,198,199,209,-1,187,211,210,-1,211,212,210,-1,190,192,213,-1,203,190,213,-1,216,215,214,-1,217,189,203,-1,205,217,203,-1,215,216,218,-1,215,218,219,-1,220,196,197,-1,220,205,196,-1,18,69,221,-1,222,19,18,-1,18,221,222,-1,221,69,67,-1,67,223,221,-1,223,67,63,-1,63,224,223,-1,221,223,225,-1,225,222,221,-1,224,226,225,-1,225,223,224,-1,11,224,63,-1,63,12,11,-1,13,226,224,-1,224,11,13,-1,227,182,133,-1,222,227,133,-1,133,19,222,-1,227,228,179,-1,179,182,227,-1,228,229,176,-1,176,179,228,-1,227,222,225,-1,225,228,227,-1,229,228,225,-1,225,230,229,-1,128,129,176,-1,176,229,128,-1,130,128,229,-1,229,230,130,-1,233,232,231,-1,235,234,232,-1,234,235,236,-1,239,238,237,-1,239,237,240,-1,239,240,241,-1,241,235,239,-1,235,241,236,-1,243,242,234,-1,238,243,234,-1,243,244,242,-1,232,234,231,-1,231,234,245,-1,246,233,231,-1,231,247,246,-1,247,246,233,-1,231,247,233,-1,248,251,250,-1,250,249,248,-1,234,242,245,-1,235,232,252,-1,252,232,233,-1,252,239,235,-1,253,233,246,-1,254,248,249,-1,255,248,254,-1,256,252,233,-1,245,257,231,-1,258,231,257,-1,261,260,259,-1,261,259,262,-1,263,266,265,-1,265,264,263,-1,263,264,268,-1,268,267,263,-1,268,270,269,-1,269,267,268,-1,267,269,272,-1,272,271,267,-1,273,274,246,-1,246,247,273,-1,258,275,273,-1,273,247,258,-1,247,231,258,-1,278,277,276,-1,276,277,269,-1,279,259,260,-1,276,269,279,-1,271,281,280,-1,280,267,271,-1,280,282,267,-1,277,272,269,-1,284,287,286,-1,286,285,284,-1,288,287,281,-1,281,271,288,-1,286,249,250,-1,250,285,286,-1,290,289,286,-1,278,291,277,-1,292,291,278,-1,287,284,283,-1,295,294,293,-1,296,293,294,-1,289,296,294,-1,296,289,290,-1,277,291,297,-1,298,288,271,-1,271,272,298,-1,299,300,288,-1,288,298,299,-1,277,297,298,-1,298,272,277,-1,299,298,297,-1,297,301,299,-1,303,290,302,-1,305,293,304,-1,303,306,296,-1,296,290,303,-1,296,306,304,-1,304,293,296,-1,300,307,288,-1,307,287,288,-1,290,286,302,-1,301,297,291,-1,291,308,301,-1,302,286,287,-1,309,287,307,-1,293,310,295,-1,310,293,305,-1,254,249,311,-1,308,291,292,-1,292,310,308,-1,310,305,308,-1,310,292,295,-1,289,312,286,-1,289,311,312,-1,311,249,312,-1,312,249,286,-1,282,266,263,-1,263,267,282,-1,313,292,278,-1,313,295,292,-1,314,255,313,-1,314,248,255,-1,315,233,253,-1,256,233,316,-1,316,233,315,-1,317,270,259,-1,279,317,259,-1,269,317,279,-1,269,270,317,-1,238,244,243,-1,313,255,295,-1,255,318,295,-1,295,318,294,-1});
  }
}
protected class MFInt32436 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {255,254,318,-1,311,318,254,-1,294,318,311,-1,311,289,294,-1,304,306,299,-1,307,300,303,-1,300,299,306,-1,304,299,301,-1,306,303,300,-1,321,320,319,-1,320,321,270,-1,308,305,304,-1,301,308,304,-1,307,303,309,-1,270,321,262,-1,270,262,259,-1,252,322,239,-1,252,256,322,-1,231,232,233,-1,232,234,235,-1,236,235,234,-1,237,238,239,-1,240,237,239,-1,239,235,241,-1,241,240,239,-1,236,241,235,-1,234,242,243,-1,234,243,238,-1,242,244,243,-1,231,234,232,-1,245,234,231,-1,246,247,231,-1,231,233,246,-1,233,246,247,-1,233,247,231,-1,323,324,250,-1,250,251,323,-1,245,242,234,-1,252,232,235,-1,233,232,252,-1,235,239,252,-1,246,233,253,-1,324,323,325,-1,325,323,326,-1,233,252,256,-1,231,257,245,-1,257,231,258,-1,329,328,327,-1,330,329,327,-1,331,332,265,-1,265,266,331,-1,331,334,333,-1,333,332,331,-1,333,334,336,-1,336,335,333,-1,334,338,337,-1,337,336,334,-1,273,247,246,-1,246,274,273,-1,258,247,273,-1,273,275,258,-1,258,231,247,-1,341,340,339,-1,336,340,341,-1,328,329,342,-1,342,336,341,-1,338,334,280,-1,280,343,338,-1,334,282,280,-1,336,337,340,-1,284,285,345,-1,345,344,284,-1,346,338,343,-1,343,344,346,-1,345,285,250,-1,250,324,345,-1,345,348,347,-1,340,349,339,-1,339,349,350,-1,283,284,344,-1,353,352,351,-1,352,353,354,-1,352,354,348,-1,347,348,354,-1,355,349,340,-1,356,337,338,-1,338,346,356,-1,357,356,346,-1,346,358,357,-1,340,337,356,-1,356,355,340,-1,357,359,355,-1,355,356,357,-1,361,347,360,-1,363,353,362,-1,360,347,354,-1,354,364,360,-1,354,353,363,-1,363,364,354,-1,346,365,358,-1,346,344,365,-1,361,345,347,-1,359,366,349,-1,349,355,359,-1,344,345,361,-1,365,344,367,-1,351,368,353,-1,362,353,368,-1,369,324,325,-1,366,368,350,-1,350,349,366,-1,366,362,368,-1,351,350,368,-1,345,370,348,-1,370,369,348,-1,370,324,369,-1,345,324,370,-1,331,266,282,-1,282,334,331,-1,339,350,371,-1,350,351,371,-1,371,326,372,-1,326,323,372,-1,253,233,315,-1,316,233,256,-1,315,233,316,-1,329,335,373,-1,329,373,342,-1,342,373,336,-1,373,335,336,-1,243,244,238,-1,351,326,371,-1,351,374,326,-1,352,374,351,-1,374,325,326,-1,325,374,369,-1,352,348,369,-1,369,374,352,-1,357,364,363,-1,360,358,365,-1,364,357,358,-1,359,357,363,-1,358,360,364,-1,319,376,375,-1,335,375,376,-1,363,362,366,-1,363,366,359,-1,367,360,365,-1,330,375,335,-1,329,330,335,-1,239,322,252,-1,322,256,252,-1,265,378,377,-1,377,264,265,-1,264,377,270,-1,270,268,264,-1,265,332,379,-1,379,378,265,-1,332,333,335,-1,335,379,332,-1,380,383,382,-1,382,381,380,-1,384,383,380,-1,380,385,384,-1,380,381,382,-1,382,383,380,-1,384,385,380,-1,380,383,384,-1,388,389,386,-1,386,387,388,-1,391,387,386,-1,386,390,391,-1});
  }
}
protected class MFVec3f437 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.734f,2.295f,-0.478f,0f,7.925f,-7.347f,0f,2.738f,-7.551f,2.596f,3.055f,-7.113f,5.82f,3.915f,-2.239f,3.712f,1.225f,-2.29f,3.261f,1.453f,-4.252f,5.658f,2.599f,-1.983f,1.82f,1.289f,-5.164f,0f,0.1375f,-3.592f,2.395f,4.95f,6.346f,0.7761f,4.912f,6.883f,0f,9.74f,6.859f,4.408f,9.203f,3.673f,0f,11.25f,5.65f,2.225f,10.89f,5.304f,5.962f,4.414f,1.165f,4.041f,0.8383f,3.523f,1.972f,9.601f,6.357f,2.537f,7.001f,6.362f,3.694f,6.649f,5.287f,0.4475f,7.341f,7.362f,0.513f,6.698f,7.119f,4.843f,6.188f,3.431f,3.886f,6.593f,4.951f,3.681f,5.194f,5.001f,3.826f,5.001f,4.664f,3.284f,2.472f,4.49f,4.543f,4.124f,3.499f,3.859f,3.861f,4.364f,4.575f,3.792f,4.006f,5.065f,1.183f,1.247f,4.863f,1.73f,2.37f,5.256f,2.695f,2.024f,5.549f,5.532f,2.714f,5.161f,2.035f,2.722f,5.442f,3.878f,2.887f,6.111f,4.389f,0.2634f,4.062f,5.868f,4.221f,6.007f,7.856f,-0.5637f,7.021f,1.661f,-0.9157f,6.568f,4.855f,-0.7308f,6.326f,4.691f,-1.55f,6.23f,0.8303f,-3.441f,4.977f,5.364f,-5.673f,6.326f,4.656f,-2.95f,4.216f,3.427f,-5.131f,3.522f,5.818f,-7.166f,3.424f,1.86f,-7.278f,2.479f,7.925f,-6.757f,1.927f,1.981f,-8.89f,0f,3.753f,-8.454f,5.584f,7.691f,-2.78f,5.853f,7.683f,-1.772f,5.181f,8.476f,2.104f,3.038f,10.79f,4.444f,5.123f,3.032f,-5.304f,5.664f,8.061f,0.8754f,4.721f,7.925f,-5.258f,0f,5.519f,-7.965f,2.479f,5.82f,-7.483f,5.595f,7.63f,-2.141f,0f,0.1227f,-8.281f,1.173f,1.832f,-6.114f,3.978f,2.324f,-4.64f,2.917f,-0.9285f,-7.31f,3.323f,2.08f,-5.371f,1.968f,-1.561f,-5.013f,0f,-0.9435f,-6.54f,4.713f,2.444f,-3.477f,4.42f,-0.2924f,-4.477f,1.411f,0.5541f,-3.484f,0f,1.035f,-6.031f,2.275f,0.8807f,-3.763f,0.9407f,0.7103f,-4.537f,3.818f,1.729f,-3.139f,4.664f,1.866f,-1.436f,3.657f,9.188f,4.96f,0f,7.548f,7.405f,1.559f,7.266f,7.008f,2.791f,5.041f,6.017f,-4.734f,2.295f,-0.478f,-2.596f,3.055f,-7.113f,-5.82f,3.915f,-2.239f,-3.712f,1.225f,-2.29f,-3.261f,1.453f,-4.252f,-5.658f,2.599f,-1.983f,-1.82f,1.289f,-5.164f,-2.395f,4.95f,6.346f,-0.7761f,4.912f,6.883f,-4.408f,9.203f,3.673f,-2.225f,10.89f,5.304f,-5.962f,4.414f,1.165f,-4.041f,0.8383f,3.523f,-1.972f,9.601f,6.357f,-2.537f,7.001f,6.362f,-3.694f,6.649f,5.287f,-0.4475f,7.341f,7.362f,-0.513f,6.698f,7.119f,-4.843f,6.188f,3.431f,-3.886f,6.593f,4.951f,-3.681f,5.194f,5.001f,-3.826f,5.001f,4.664f,-3.284f,2.472f,4.49f,-4.543f,4.124f,3.499f,-3.859f,3.861f,4.364f,-4.575f,3.792f,4.006f,-5.065f,1.183f,1.247f,-4.863f,1.73f,2.37f,-5.256f,2.695f,2.024f,-5.549f,5.532f,2.714f,-5.161f,2.035f,2.722f,-5.442f,3.878f,2.887f,-6.111f,4.389f,0.2634f,-4.062f,5.868f,4.221f,-6.007f,7.856f,-0.5637f,-7.021f,1.661f,-0.9157f,-6.568f,4.855f,-0.7308f,-6.326f,4.691f,-1.55f,-6.23f,0.8303f,-3.441f,-4.977f,5.364f,-5.673f,-6.326f,4.656f,-2.95f,-4.216f,3.427f,-5.131f,-3.522f,5.818f,-7.166f,-3.424f,1.86f,-7.278f,-2.479f,7.925f,-6.757f,-1.927f,1.981f,-8.89f,-5.584f,7.691f,-2.78f,-5.853f,7.683f,-1.772f,-5.181f,8.476f,2.104f,-3.038f,10.79f,4.444f,-5.123f,3.032f,-5.304f,-5.664f,8.061f,0.8754f,-4.721f,7.925f,-5.258f,-2.479f,5.82f,-7.483f,-5.595f,7.63f,-2.141f,-1.173f,1.832f,-6.114f,-3.978f,2.324f,-4.64f,-2.917f,-0.9285f,-7.31f,-3.323f,2.08f,-5.371f,-1.968f,-1.561f,-5.013f,-4.713f,2.444f,-3.477f,-4.42f,-0.2924f,-4.477f,-1.411f,0.5541f,-3.484f,-2.275f,0.8807f,-3.763f,-0.9407f,0.7103f,-4.537f,-3.818f,1.729f,-3.139f,-4.664f,1.866f,-1.436f,-3.657f,9.188f,4.96f,-1.559f,7.266f,7.008f,-2.791f,5.041f,6.017f,0f,12.89f,2.191f,2.479f,12.6f,2.191f,0f,12.77f,-3.073f,2.479f,13.01f,-0.5905f,0f,13.3f,-0.5905f,2.479f,12.47f,-3.073f,-2.479f,12.6f,2.191f,-2.479f,13.01f,-0.5905f,-2.479f,12.47f,-3.073f,0f,12.19f,4.069f,-2.479f,11.8f,3.665f,2.479f,11.8f,3.665f,-4.738f,11.13f,-0.5905f,-4.581f,10.59f,1.893f,4.738f,11.13f,-0.5905f,4.581f,10.59f,1.893f,-4.776f,9.342f,-4.254f,4.776f,9.342f,-4.254f,-4.651f,10.94f,-2.696f,4.651f,10.94f,-2.696f,0f,10.91f,-6.064f,-2.479f,10.58f,-5.873f,2.479f,10.58f,-5.873f,5.038f,2.087f,0.2634f,5.351f,2.269f,0.2568f,5.575f,4.993f,0.4877f,5.759f,4.313f,-0.6689f,5.672f,3.119f,-0.6884f,5.054f,4.389f,0.2634f,4.617f,3.919f,1.981f,0f,-1.299f,4.283f,2.507f,0.2122f,3.467f,1.252f,-0.7037f,3.753f,2.181f,1.29f,4.703f,1.083f,-0.2065f,4.531f,0f,3.949f,5.823f,4.122f,4.752f,3.434f,0f,4.457f,6.529f,3.843f,3.486f,3.474f,0.6247f,4.287f,6.217f,3.884f,5.34f,4.144f,0.2615f,3.949f,5.823f,2.103f,4.881f,5.78f,1.599f,4.225f,5.429f,2.103f,4.763f,5.713f,2.175f,4.422f,5.292f,1.061f,2.841f,5.24f,3.345f,2.806f,3.987f,2.536f,2.741f,4.559f,3.082f,3.581f,4.206f,3.368f,4.077f,4.055f,1.044f,3.885f,5.454f,1.356f,3.642f,5.241f,3.227f,3.707f,4.111f,3.028f,4.567f,4.683f,2.472f,2.023f,4.722f,0.9194f,2.354f,5.382f,0f,2.998f,5.872f,3.515f,2.199f,3.631f,3.685f,4.225f,3.891f,1.11f,4.559f,6.074f,0f,1.141f,5.968f,0.1458f,1.141f,5.967f,0.4592f,1.442f,5.549f,0f,1.753f,6.811f,3.24f,5.132f,4.832f,0f,-1.23f,3.575f,3.443f,1.22f,3.201f,0f,6.577f,6.529f,1.972f,6.686f,5.769f,3.551f,6.468f,4.66f,1.125f,6.641f,6.224f,2.799f,0.2961f,1.981f,1.438f,-0.7799f,2.92f,2.098f,-0.0622f,0.3894f,4.342f,2.994f,2.484f,0f,9.837f,5.8f,1.972f,10.18f,5.298f,3.829f,8.081f,4.078f,4.754f,5.519f,2.97f,1.641f,0.4521f,4.705f,0f,2.206f,6.446f,2.795f,3.568f,4.497f,1.835f,3.587f,5.011f,3.243f,5.188f,4.826f,4.074f,1.813f,1.489f,4.073f,1.537f,-0.251f,4.798f,4.414f,1.165f,3.561f,1.081f,-1.554f,0f,0.5923f,5.37f,0.2244f,0.5923f,5.37f,0f,-0.2097f,4.949f,0f,0.1669f,5.375f,0f,0.7989f,5.843f,0.4079f,0.7711f,5.733f,0.2244f,0.7989f,5.843f,1.184f,0.5011f,4.895f,1.695f,4.1f,5.387f,2.183f,4.262f,5.159f,2.937f,4.372f,4.659f,-5.038f,2.087f,0.2634f,-5.351f,2.269f,0.2568f,-5.575f,4.993f,0.4877f,-5.759f,4.313f,-0.6689f,-5.672f,3.119f,-0.6884f,-5.054f,4.389f,0.2634f,-4.617f,3.919f,1.981f,-2.507f,0.2122f,3.467f,-1.252f,-0.7037f,3.753f,-2.181f,1.29f,4.703f,-1.083f,-0.2065f,4.531f,-4.122f,4.752f,3.434f,-3.843f,3.486f,3.474f,-0.6247f,4.287f,6.217f,-3.884f,5.34f,4.144f,-0.2615f,3.949f,5.823f,-2.103f,4.881f,5.78f,-1.599f,4.225f,5.429f,-2.103f,4.763f,5.713f,-2.175f,4.422f,5.292f,-1.061f,2.841f,5.24f,-3.345f,2.806f,3.987f,-2.536f,2.741f,4.559f,-3.082f,3.581f,4.206f,-3.368f,4.077f,4.055f,-1.044f,3.885f,5.454f,-1.356f,3.642f,5.241f,-3.227f,3.707f,4.111f,-3.028f,4.567f,4.683f});
  }
}
protected class MFVec3f438 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.472f,2.023f,4.722f,-0.9194f,2.354f,5.382f,-3.515f,2.199f,3.631f,-3.685f,4.225f,3.891f,-1.11f,4.559f,6.074f,-0.1458f,1.141f,5.967f,-0.4592f,1.442f,5.549f,-3.24f,5.132f,4.832f,-3.443f,1.22f,3.201f,-1.972f,6.686f,5.769f,-3.551f,6.468f,4.66f,-1.125f,6.641f,6.224f,-2.799f,0.2961f,1.981f,-1.438f,-0.7799f,2.92f,-2.098f,-0.0622f,0.3894f,-4.342f,2.994f,2.484f,-1.972f,10.18f,5.298f,-3.829f,8.081f,4.078f,-4.754f,5.519f,2.97f,-1.641f,0.4521f,4.705f,-2.795f,3.568f,4.497f,-1.835f,3.587f,5.011f,-3.243f,5.188f,4.826f,-4.074f,1.813f,1.489f,-4.073f,1.537f,-0.251f,-4.798f,4.414f,1.165f,-3.561f,1.081f,-1.554f,-0.2244f,0.5923f,5.37f,-0.4079f,0.7711f,5.733f,-0.2244f,0.7989f,5.843f,-1.184f,0.5011f,4.895f,-1.695f,4.1f,5.387f,-2.183f,4.262f,5.159f,-2.937f,4.372f,4.659f,0f,0.5907f,5.545f,0.2244f,0.5907f,5.545f,-0.2244f,0.5907f,5.545f,-2.091f,-0.0943f,-1.629f,2.091f,-0.0943f,-1.629f,0f,-0.6349f,1.532f,0.4475f,7.341f,7.362f,0.7761f,4.912f,6.883f,0.7761f,4.912f,6.883f,0.4475f,7.341f,7.362f,-0.7761f,4.912f,6.883f,-0.4475f,7.341f,7.362f,-0.4475f,7.341f,7.362f,-0.7761f,4.912f,6.883f,1.438f,-0.7799f,2.92f,2.098f,-0.0622f,0.3894f,2.799f,0.2961f,1.981f,1.438f,-0.7799f,2.92f,4.734f,2.295f,-0.478f,5.658f,2.599f,-1.983f,4.734f,2.295f,-0.478f,3.712f,1.225f,-2.29f,-3.561f,1.081f,-1.554f,-2.098f,-0.0622f,0.3894f,-1.438f,-0.7799f,2.92f,-2.799f,0.2961f,1.981f,-5.658f,2.599f,-1.983f,-4.734f,2.295f,-0.478f,-3.712f,1.225f,-2.29f,-4.734f,2.295f,-0.478f,5.658f,2.599f,-1.983f,0.513f,6.698f,7.119f,0f,7.548f,7.405f,-5.658f,2.599f,-1.983f,-0.513f,6.698f,7.119f,5.054f,4.389f,0.2634f,3.561f,1.081f,-1.554f,-5.054f,4.389f,0.2634f,-1.438f,-0.7799f,2.92f,-3.561f,1.081f,-1.554f,0f,7.548f,7.405f,3.561f,1.081f,-1.554f});
  }
}
protected class MFVec2f439 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9175f,0.8974f,0.9509f,0.8981f,0.9421f,0.8701f,0.924f,0.8702f,0.9824f,0.8971f,0.9824f,0.8682f,0.9541f,0.8718f,0.9147f,0.8129f,0.9437f,0.8153f,0.9638f,0.8095f,0.9824f,0.809f,0.9461f,0.923f,0.9071f,0.9135f,0.9824f,0.9287f,0.7343f,0.9169f,0.7616f,0.9147f,0.7553f,0.8982f,0.7343f,0.8968f,0.7739f,0.9327f,0.7343f,0.9365f,0.8187f,0.8433f,0.8348f,0.9045f,0.8324f,0.8647f,0.74f,0.8745f,0.761f,0.8768f,0.7497f,0.8755f,0.777f,0.8787f,0.7647f,0.8593f,0.7596f,0.8565f,0.7438f,0.8546f,0.7343f,0.8756f,0.7372f,0.8736f,0.7394f,0.8706f,0.7405f,0.8536f,0.7808f,0.8802f,0.7786f,0.8666f,0.7875f,0.8787f,0.7821f,0.8667f,0.7952f,0.9076f,0.8011f,0.8823f,0.7745f,0.9003f,0.7939f,0.8518f,0.7845f,0.8549f,0.7731f,0.8049f,0.7979f,0.8609f,0.8185f,0.8054f,0.8439f,0.8655f,0.8131f,0.8741f,0.786f,0.7876f,0.8107f,0.8538f,0.8058f,0.8252f,0.8096f,0.8166f,0.8589f,0.7975f,0.8767f,0.8622f,0.8568f,0.8668f,0.8669f,0.8674f,0.9208f,0.8549f,0.8792f,0.7991f,0.8835f,0.8633f,0.9139f,0.8636f,0.9513f,0.84f,0.9824f,0.8358f,0.8845f,0.9021f,0.888f,0.931f,0.8761f,0.9036f,0.8705f,0.9018f,0.8544f,0.902f,0.8538f,0.9345f,0.8173f,0.9068f,0.8156f,0.9257f,0.7753f,0.9186f,0.7832f,0.9041f,0.7338f,0.8385f,0.7279f,0.8339f,0.7208f,0.8401f,0.7397f,0.7767f,0.7338f,0.7681f,0.7338f,0.7727f,0.7192f,0.8201f,0.7171f,0.8352f,0.7139f,0.8364f,0.7127f,0.8419f,0.7175f,0.832f,0.7247f,0.8312f,0.7224f,0.8292f,0.7239f,0.8169f,0.7146f,0.8334f,0.7152f,0.8309f,0.753f,0.7762f,0.7452f,0.772f,0.7409f,0.7703f,0.756f,0.7661f,0.7502f,0.7748f,0.7102f,0.837f,0.7574f,0.7798f,0.7054f,0.8378f,0.7338f,0.8253f,0.7338f,0.8299f,0.7267f,0.8275f,0.7291f,0.8283f,0.7338f,0.8254f,0.7338f,0.7682f,0.7385f,0.7711f,0.7338f,0.7628f,0.7338f,0.82f,0.7437f,0.7597f,0.7429f,0.774f,0.7484f,0.7629f,0.7505f,0.778f,0.7116f,0.8233f,0.7622f,0.7806f,0.7576f,0.779f,0.763f,0.7872f,0.7046f,0.8444f,0.7572f,0.7769f,0.7524f,0.7737f,0.7104f,0.8341f,0.5511f,0.8974f,0.5442f,0.8881f,0.5261f,0.888f,0.5173f,0.916f,0.5142f,0.8897f,0.4859f,0.8861f,0.4859f,0.915f,0.5538f,0.8129f,0.5221f,0.9505f,0.5019f,0.9448f,0.4833f,0.9442f,0.5221f,0.9409f,0.5615f,0.9135f,0.4859f,0.9465f,0.7132f,0.8982f,0.707f,0.9147f,0.6947f,0.9327f,0.6362f,0.8647f,0.6338f,0.9045f,0.6499f,0.8433f,0.7286f,0.8745f,0.7189f,0.8755f,0.7076f,0.8768f,0.7039f,0.8593f,0.6916f,0.8787f,0.7247f,0.8546f,0.709f,0.8565f,0.7314f,0.8736f,0.7292f,0.8706f,0.728f,0.8536f,0.69f,0.8666f,0.6878f,0.8802f,0.6865f,0.8667f,0.6811f,0.8787f,0.6675f,0.8823f,0.6734f,0.9076f,0.6941f,0.9003f,0.6841f,0.8549f,0.6747f,0.8518f,0.6955f,0.8049f,0.6707f,0.8609f,0.65f,0.8054f,0.6247f,0.8655f,0.6555f,0.8741f,0.6826f,0.7876f,0.6628f,0.8252f,0.6579f,0.8538f,0.659f,0.8166f,0.5919f,0.8622f,0.6097f,0.7975f,0.6017f,0.8674f,0.6119f,0.8668f,0.5894f,0.7991f,0.5477f,0.8549f,0.5851f,0.8633f,0.5547f,0.8636f,0.5069f,0.9121f,0.4833f,0.9711f,0.5841f,0.9021f,0.5806f,0.931f,0.5925f,0.9036f,0.5981f,0.9018f,0.6148f,0.9345f,0.6142f,0.902f,0.6513f,0.9068f,0.653f,0.9257f,0.6932f,0.9186f,0.6854f,0.9041f,0.7468f,0.8401f,0.7397f,0.8339f,0.7279f,0.7767f,0.7484f,0.8201f,0.7549f,0.8419f,0.7538f,0.8364f,0.7505f,0.8352f,0.7502f,0.832f,0.7452f,0.8292f,0.7429f,0.8312f,0.7437f,0.8169f,0.753f,0.8334f,0.7524f,0.8309f,0.7267f,0.7703f,0.7224f,0.772f,0.7146f,0.7762f,0.7175f,0.7748f,0.7116f,0.7661f,0.7574f,0.837f,0.7102f,0.7798f,0.7622f,0.8378f,0.7385f,0.8283f,0.7409f,0.8275f,0.7291f,0.7711f,0.7239f,0.7597f,0.7192f,0.7629f,0.7247f,0.774f,0.7171f,0.778f,0.756f,0.8233f,0.7046f,0.7872f,0.71f,0.779f,0.7054f,0.7806f,0.763f,0.8444f,0.7104f,0.7769f,0.7152f,0.7737f,0.7572f,0.8341f,0.7881f,0.9479f,0.7343f,0.9577f,0.8497f,0.9637f,0.9158f,0.9539f,0.7343f,0.9872f,0.9824f,0.9663f,0.6805f,0.9479f,0.6189f,0.9637f,0.5528f,0.9539f,0.4859f,0.9842f,0.4263f,0.6263f,0.4421f,0.6351f,0.4514f,0.6319f,0.4298f,0.637f,0.4385f,0.639f,0.4385f,0.6403f,0.4369f,0.6596f,0.4321f,0.6555f,0.4385f,0.6553f,0.4451f,0.6548f,0.4452f,0.6463f,0.4227f,0.6454f,0.4263f,0.652f,0.4193f,0.6633f,0.4176f,0.6328f,0.4376f,0.6237f,0.4196f,0.6187f,0.3384f,0.9887f,0.2979f,0.9448f,0.2441f,0.9417f,0.2441f,0.9723f,0.4437f,0.6405f,0.4519f,0.6235f,0.3384f,0.9469f,0.414f,0.9365f,0.4566f,0.6329f,0.4157f,0.6257f,0.4137f,0.6192f,0.2959f,0.626f,0.3051f,0.6166f,0.258f,0.6076f,0.2606f,0.6259f,0.2511f,0.6816f,0.2548f,0.6653f,0.2441f,0.6653f,0.2441f,0.6816f,0.2661f,0.696f,0.2636f,0.664f,0.3484f,0.6888f,0.3007f,0.651f,0.2881f,0.7397f,0.3623f,0.7239f,0.4151f,0.6155f,0.4295f,0.6197f,0.4116f,0.6201f,0.4088f,0.6855f,0.4123f,0.7323f,0.4518f,0.7703f,0.364f,0.6372f,0.2441f,0.7326f,0.2496f,0.7705f,0.2441f,0.7109f,0.2441f,0.7705f,0.2441f,0.816f,0.2441f,0.8403f,0.274f,0.8322f,0.2566f,0.816f,0.2949f,0.763f,0.3447f,0.8549f,0.3206f,0.8292f,0.4279f,0.7939f,0.4413f,0.8544f,0.3889f,0.8456f,0.3991f,0.8726f,0.4299f,0.8825f,0.3482f,0.8386f,0.4041f,0.7613f,0.3654f,0.7582f,0.3778f,0.7978f,0.3319f,0.7987f,0.3916f,0.7984f,0.2943f,0.815f,0.3252f,0.8232f,0.3846f,0.8362f,0.4052f,0.8221f,0.3485f,0.831f,0.309f,0.8013f,0.3985f,0.8044f,0.2937f,0.8109f,0.4204f,0.8292f,0.3447f,0.8606f,0.2972f,0.8452f,0.4715f,0.8911f,0.431f,0.9594f,0.4658f,0.6252f,0.465f,0.6281f,0.3226f,0.6487f,0.3993f,0.8753f,0.2441f,0.6554f,0.2548f,0.6554f,0.2557f,0.6351f,0.4544f,0.6426f,0.1498f,0.9887f,0.1903f,0.9448f,0.1498f,0.9469f,0.0742f,0.9365f,0.2323f,0.6076f,0.1853f,0.6166f,0.1923f,0.626f,0.2275f,0.6259f,0.2371f,0.6816f,0.2334f,0.6653f,0.2246f,0.664f,0.2221f,0.696f,0.1875f,0.651f,0.1398f,0.6888f,0.1258f,0.7239f,0.2001f,0.7397f,0.0364f,0.7703f,0.0759f,0.7323f,0.0794f,0.6855f,0.1242f,0.6372f,0.2386f,0.7705f,0.2316f,0.816f,0.2142f,0.8322f,0.1933f,0.763f,0.1676f,0.8292f,0.1435f,0.8549f,0.0602f,0.7939f,0.0469f,0.8544f,0.0583f,0.8825f,0.0891f,0.8726f,0.0992f,0.8456f,0.14f,0.8386f,0.084f,0.7613f,0.1228f,0.7582f,0.1104f,0.7978f,0.1563f,0.7987f,0.0966f,0.7984f,0.163f,0.8232f,0.1939f,0.815f,0.083f,0.8221f,0.1036f,0.8362f,0.1397f,0.831f,0.1792f,0.8013f,0.0897f,0.8044f,0.1944f,0.8109f,0.0678f,0.8292f,0.1435f,0.8606f,0.191f,0.8452f,0.0166f,0.8911f,0.0646f,0.9594f,0.1656f,0.6487f,0.0889f,0.8753f,0.2325f,0.6351f,0.2334f,0.6554f,0.2548f,0.6553f,0.2441f,0.6553f,0.2334f,0.6553f,0.4156f,0.6279f,0.3783f,0.625f,0.3984f,0.649f,0.4325f,0.6718f,0.4443f,0.6446f,0.428f,0.6022f,0.4445f,0.6357f,0.4021f,0.656f,0.4052f,0.6271f,0.4253f,0.6199f,0.4449f,0.6611f,0.4266f,0.6722f});
  }
}
}
